"""[2026-11-10 16:04 CST] Entry point for the active 3+2 topology checker.

The legacy native-five-phase checker is retained below for reference.
Original description: Check the main.sch migration plus the approved five-phase Inductor extension.

Run from any directory: python tools/check_topology.py
This is a structural migration check, not a motor-model functional simulation.
"""

from collections import Counter
from pathlib import Path
import re
import xml.etree.ElementTree as ET


ROOT = Path(__file__).resolve().parents[1]
NS = "{http://www.xilinx.com/XMLSchema}"


def signal(name):
    match = re.fullmatch(r"(\w+)(?:\((\d+):(\d+)\))?", name)
    assert match, name
    return match[1], int(match[2]) - int(match[3]) + 1 if match[2] else 1


def width(text):
    numbers = re.findall(r"\d+", text)
    return int(numbers[0]) - int(numbers[1]) + 1 if numbers else 1


def declarations(text):
    result = {}
    previous = None
    for part in text.split(","):
        part = part.strip()
        match = re.fullmatch(
            r"(input|output|inout)\b\s*(?:(?:wire|reg|signed)\s+)*"
            r"(\[\d+:\d+\])?\s*(\w+)", part
        )
        if match:
            direction, bits, name = match.groups()
            previous = direction, width(bits or "")
        else:
            assert previous and re.fullmatch(r"\w+", part), part
            name = part
        result[name] = previous
    return result


def uncomment(text):
    return re.sub(r"/\*.*?\*/|//[^\n]*", "", text, flags=re.S)


def main():
    schematic = ET.parse(ROOT / "main.sch").getroot().find("netlist")
    top = (ROOT / "vir5_PMSM.v").read_text(encoding="ascii")
    bare = uncomment(top)
    assert re.search(r"\bmodule\s+vir5_PMSM\b", bare)
    expected_ports = {}
    mapping = {}
    sizes = {}
    renamed_ports = {
        "DSP_CS": "STM32_NE1_Low",
        "DSP_WE_Low": "STM32_NWE_Low",
        "DSP_OE_Low": "STM32_NOE_Low",
        "DSP_Datum": "DATAbus",
    }
    for port in schematic.findall("port"):
        original_name = port.get("name")
        if original_name == "DSP_RNW":
            continue
        name, bits = signal(original_name)
        name = renamed_ports.get(name, name)
        direction = {"Input": "input", "Output": "output", "BiDirectional": "inout"}[
            port.get("polarity")
        ]
        expected_ports[name] = (direction, bits)
        mapping[original_name] = name
        sizes[name] = bits
    for name in ("epwm_4A", "epwm_4B", "epwm_5A", "epwm_5B"):
        expected_ports[name] = ("input", 1)
        sizes[name] = 1
    header = re.search(r"\bmodule\s+vir5_PMSM\s*\((.*?)\);", bare, re.S)[1]
    assert declarations(header) == expected_ports, "Top-level ports differ"

    for bits, name, original in re.findall(
        r"\bwire\s+(\[\d+:\d+\])?\s*(\w+);[ \t]*// main.sch: (\S+)", top
    ):
        assert width(bits) == signal(original)[1], f"Width mismatch: {original}"
        assert original not in mapping
        mapping[original] = name
        sizes[name] = width(bits)
    for bits, name in re.findall(r"\bwire\s+(\[\d+:\d+\])?\s*(\w+);", bare):
        sizes[name] = width(bits)

    modules = {}
    for path in ROOT.glob("*.v"):
        source = uncomment(path.read_bytes().decode("latin1").replace("\r\n", "\n"))
        for name, body in re.findall(r"\bmodule\s+(\w+)\s*\((.*?)\);", source, re.S):
            modules[name] = declarations(body)

    instances = {}
    for original, module, instance, body in re.findall(
        r"// (?:main.sch|extension): (XLXI_\d+|EXT_\w+)\s*\n\s*(\w+)\s+(\w+)\s*\((.*?)\);", top, re.S
    ):
        pins = re.findall(r"\.(\w+)\(([^()]*)\)", uncomment(body))
        assert original not in instances
        assert len(pins) == len(dict(pins)), f"Duplicate pins: {instance}"
        instances[original] = (module, instance, dict(pins))
    all_instances = re.findall(r"\b(\w+)\s+(\w+)\s*\(\s*\.", bare)
    assert len(all_instances) == len(instances), "Untracked extra instances"

    expected_instances = set()
    drivers = Counter()
    sinks = set()
    open_inputs = []
    pin_count = 0
    planned = {}
    for block in schematic.findall("block"):
        if block.get("symbolname") == "constant":
            value = int(block.find("attr[@name='CValue']").get("value"), 16)
            net = mapping[block.find("blockpin").get("signalname")]
            assert re.findall(r"\bassign\s+(\w+)\s*=\s*(\d+)'h([0-9a-fA-F]+)\s*;", bare) == [
                (net, str(sizes[net]), f"{value:04x}")
            ], "Constant assignment differs or extra assignments added"
            drivers[net] += 1
            continue
        original = block.get("name")
        expected_instances.add(original)
        module, instance, actual = instances[original]
        assert module == block.get("symbolname"), f"Module mismatch: {original}"
        expected = {}
        for pin in block.findall("blockpin"):
            name, bits = signal(pin.get("name"))
            if module == "PCI" and name == "DSP_RNW":
                continue
            if module == "PCI" and name == "DSP_Datum":
                name = "STM32_Databus"
            else:
                name = renamed_ports.get(
                    name,
                    name.replace("DSP2FPGA", "STM32toFPGA")
                        .replace("FPGA2DSP", "FPGAtoSTM32")
                        .replace("_DSP", "_STM32"),
                )
            connection = mapping[pin.get("signalname")] if pin.get("signalname") else ""
            expected[name] = (bits, connection)
        if module == "Inductor":
            for name in ("bEMF_A_S35_Q17", "bEMF_B_S35_Q17", "bEMF_C_S35_Q17"):
                del expected[name]
            expected.update({
                "UDO_P_S35": (35, "phase_d_voltage_q17"),
                "UEO_P_S35": (35, "phase_e_voltage_q17"),
                "UDO_N_S35": (35, "neutral_voltage_q17"),
                "UEO_N_S35": (35, "neutral_voltage_q17"),
                "x_4": (35, "phase_d_current"), "x_5": (35, "phase_e_current"),
                "Curt4_H15": (16, "current_d_high_stm32"), "Curt4_L15": (16, "current_d_low_stm32"),
                "Curt5_H15": (16, "current_e_high_stm32"), "Curt5_L15": (16, "current_e_low_stm32"),
            })
        if module == "PCI":
            expected.update({
                "FPGAtoSTM32_Signal_1": (16, "FMC_test"),
                "STM32toFPGA_Signal_1": (16, "FMC_test"),
            })
            for index in tuple(range(2, 15)) + (15, 16, 17, 18):
                expected[f"FPGAtoSTM32_Signal_{index}"] = (16, "")
            for index in range(2, 17):
                expected[f"STM32toFPGA_Signal_{index}"] = (16, "")
        planned[original] = (module, instance, expected)

    # A second inverter instance supplies D/E with the original bridge-leg behavior.
    expected = dict(planned["XLXI_60"][2])
    expected.update({
        "S1": (1, "epwm_4A"), "S2": (1, "epwm_4B"),
        "S3": (1, "epwm_5A"), "S4": (1, "epwm_5B"),
        "S5": (1, "1'b0"), "S6": (1, "1'b0"),
        "Ia_S35_Q17": (35, "phase_d_current"), "Ib_S35_Q17": (35, "phase_e_current"),
        "Ic_S35_Q17": (35, "35'd0"),
        "x_1": (35, "phase_d_voltage_q17"), "x_2": (35, "phase_e_voltage_q17"),
    })
    for index in range(3, 11):
        expected[f"x_{index}"] = (35 if index == 3 else 16, "")
    planned["EXT_INVERTER_DE"] = ("inv_phi3_HB", "u_inverter_de", expected)
    expected_instances.add("EXT_INVERTER_DE")
    for original, (module, instance, expected) in planned.items():
        actual_module, actual_instance, actual = instances[original]
        assert (actual_module, actual_instance) == (module, instance)
        for name, (bits, connection) in expected.items():
            direction, rtl_bits = modules[module][name]
            assert bits == rtl_bits, f"RTL port width mismatch: {module}.{name}"
            if connection:
                constant = re.fullmatch(r"(\d+)'[bdh][0-9a-fA-F]+", connection)
                if constant:
                    assert bits == int(constant[1])
                    pin_count += 1
                    continue
                assert bits == sizes[connection], f"Net width mismatch: {instance}.{name}"
                if direction == "output":
                    drivers[connection] += 1
                elif direction == "input":
                    sinks.add(connection)
            elif direction == "input":
                open_inputs.append(f"{instance}.{name}")
            pin_count += 1
        expected_connections = {n: c for n, (_, c) in expected.items()}
        assert actual == expected_connections, (
            f"Connections differ: {original}; "
            f"missing={expected_connections.keys() - actual.keys()}, "
            f"extra={actual.keys() - expected_connections.keys()}, "
            f"changed={[(n, actual[n], c) for n, c in expected_connections.items() if n in actual and actual[n] != c]}"
        )
        assert set(actual) == set(modules[module]), f"Incomplete port list: {instance}"
    assert set(instances) == expected_instances, "Instance set differs"
    input_nets = {n for n, (d, _) in expected_ports.items() if d in ("input", "inout")}
    undriven = sorted(sinks - set(drivers) - input_nets)
    assert undriven == [
        "dc_voltage_q5", "diode_voltage_q15", "electrical_position_undriven",
        "half_flux_q15", "inv_inductance_q18", "mutual_avg_over4_q10",
        "mutual_diff_over2_q12", "resistance_q12",
    ], undriven
    assert all(count == 1 for count in drivers.values()), "Multiple drivers"

    project = ET.parse(ROOT / "vir5_PMSM.xise").getroot()
    props = {p.get(NS + "name"): p.get(NS + "value") for p in project.find(NS + "properties")}
    for name, value in {
        "Implementation Top": "Module|vir5_PMSM",
        "Implementation Top File": "vir5_PMSM.v",
        "Implementation Top Instance Path": "/vir5_PMSM",
        "Top-Level Source Type": "HDL",
        "Device": "xc6slx25", "Package": "ftg256", "Speed Grade": "-2",
    }.items():
        assert props[name] == value, name
    files = {f.get(NS + "name"): f for f in project.find(NS + "files")}
    assert "main.sch" not in files and "main.vf" not in files
    assert files["vir5_PMSM.v"].get(NS + "type") == "FILE_VERILOG"
    assert any(a.get(NS + "name") == "Implementation" for a in files["vir5_PMSM.v"])
    binding = project.find(NS + "bindings").find(NS + "binding")
    assert binding.get(NS + "location") == "/vir5_PMSM"
    assert binding.get(NS + "name") == "main.ucf"
    for net in re.findall(r'^\s*NET\s+"(\w+)(?:\[(\d+)\])?"', (ROOT / "main.ucf").read_text(), re.M):
        name, bit = net
        assert name in expected_ports, f"UCF port missing: {name}"
        assert not bit or int(bit) < expected_ports[name][1], f"UCF bit out of range: {net}"
    for line in (ROOT / "vir5_PMSM.prj").read_text().splitlines():
        source = re.fullmatch(r'verilog work "([^"]+)"', line)[1]
        assert (ROOT / source).is_file(), source
        assert not source.endswith((".vf", ".sch")), source
    assert 'verilog work "ipcore_dir/mul_inductor_2.v"' in (ROOT / "vir5_PMSM.prj").read_text(), "Missing multiplier HDL in XST source list"
    assert files["ipcore_dir/mul_inductor_2.v"].get(NS + "type") == "FILE_VERILOG"
    assert any(a.get(NS + "name") == "Implementation" for a in files["ipcore_dir/mul_inductor_2.v"])
    assert files["ipcore_dir/mul_inductor_2.ngc"].get(NS + "type") == "FILE_NGC"
    assert "ipcore_dir/mul_inductor_2.xco" not in files, "Avoid duplicate XCO/HDL module selection"
    for core in ("mul18x35_1225_BySunY", "mul_inductor_2"):
        config = (ROOT / "ipcore_dir" / (core + ".xco")).read_text()
        for setting in ("portatype=Signed", "portbtype=Signed", "portawidth=18",
                        "portbwidth=35", "outputwidthhigh=52", "outputwidthlow=0", "pipestages=2"):
            assert "CSET " + setting in config, f"{core}: {setting}"
        assert (ROOT / "ipcore_dir" / (core + ".ngc")).is_file(), core

    print(f"PASS: {len(expected_ports)} top ports, {len(instances)} instances, {pin_count} pins.")
    print("PASS: main.sch baseline plus approved five-phase Inductor/PWM/STM32 extension.")
    print("PASS: RTL module port names/widths, ISE top, UCF references and source list.")
    print("PASS: both signed 18x35 multiplier IPs have 53-bit output and two pipeline stages.")
    print("Preserved undriven nets: " + ", ".join(undriven))
    print("Preserved open inputs: " + ", ".join(open_inputs))


if __name__ == "__main__":
    # [2026-11-10 15:56 CST] Superseded native-five-phase checker retained above.
    # main()
    from check_3plus2_topology import main
    main()
