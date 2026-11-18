"""[2026-11-10 15:56 CST] Verify the active 3+2 electrical bench topology."""
from collections import Counter
from pathlib import Path
import re
import sys
import xml.etree.ElementTree as ET
from check_topology import declarations, uncomment, width

ROOT = Path(__file__).resolve().parents[1]
NS = '{http://www.xilinx.com/XMLSchema}'

def main():
    raw = (ROOT / 'vir5_PMSM.v').read_text('ascii')
    top = uncomment(raw)
    sizes = {}
    ports = declarations(re.search(r'module vir5_PMSM\s*\((.*?)\);', top, re.S)[1])
    sizes.update({n: w for n, (_, w) in ports.items()})
    sizes.update({n: width(b or '') for b, n in re.findall(r'\bwire\s+(\[\d+:\d+\])?\s*(\w+)\s*;', top)})
    modules = {}
    for path in ROOT.glob('*.v'):
        code = uncomment(path.read_bytes().decode('latin1'))
        for name, header in re.findall(r'\bmodule\s+(\w+)\s*\((.*?)\);', code, re.S):
            modules[name] = declarations(header)
    instances = {}
    drivers = Counter()
    sinks = set()
    for module, instance, body in re.findall(r'\b(\w+)\s+(\w+)\s*\((.*?)\);', top, re.S):
        if module == 'module':
            continue
        pins = re.findall(r'\.(\w+)\(([^()]*)\)', body)
        assert len(pins) == len(dict(pins)), instance
        pins = dict(pins)
        assert set(pins) == set(modules[module]), (instance, set(pins) ^ set(modules[module]))
        for name, expr in pins.items():
            direction, bits = modules[module][name]
            if not expr:
                assert direction == 'output' or (instance == 'u_grid_pwm_passthrough' and name == 'In3'), (instance,name)
                continue
            constant = re.fullmatch(r"(\d+)'[bdh][0-9a-fA-F]+", expr)
            assert bits == (int(constant[1]) if constant else sizes[expr]), (instance,name,expr)
            if not constant:
                if direction == 'output':
                    drivers[expr] += 1
                elif direction == 'input':
                    sinks.add(expr)
        instances[instance] = (module,pins)
    for net, expr in re.findall(r'\bassign\s+(\w+)\s*=\s*([^;]+);', top):
        drivers[net] += 1
        if re.fullmatch(r'\w+',expr.strip()):
            sinks.add(expr.strip())
    assert all(n == 1 for n in drivers.values()), drivers
    pci_ports = {name for name in modules['PCI'] if name.startswith('FPGAtoSTM32_Signal_')}
    assert pci_ports == {f'FPGAtoSTM32_Signal_{i}' for i in range(1,19)}
    for i in range(1,6):
        assert instances['u_pci'][1][f'FPGAtoSTM32_Signal_{i}'] == f'FMC_test{i}'
        assert instances['u_pci'][1][f'STM32toFPGA_Signal_{i}'] == f'FMC_test{i}'
    for i in range(6,19):
        assert instances['u_pci'][1][f'FPGAtoSTM32_Signal_{i}'] == f"16'd{i-1}"
    if '--pci-only' in sys.argv:
        print('PASS: PCI has 18 FPGA-to-STM32 ports, five loopbacks and thirteen constant inputs.')
        return
    undriven = sinks - set(drivers) - {n for n,(d,_) in ports.items() if d in ('input','inout')}
    # [2026-11-10 16:39 CST] Disabled position observation no longer consumes an undriven source.
    # assert undriven == {'electrical_position_undriven'}, undriven
    assert not undriven, undriven
    for inst, module, phases, current_ports, voltage_ports in (
        ('u_inductor','Inductor','abc',('x_1','x_2','x_3'),('UAO_P_S35','UBO_P_S35','UCO_P_S35')),
        ('u_inductor_de','Inductor_DE','de',('x_4','x_5'),('UDO_P_S35','UEO_P_S35'))):
        actual, pins = instances[inst]
        assert actual == module
        for phase, cur, volt in zip(phases,current_ports,voltage_ports):
            assert pins[cur] == f'phase_{phase}_current'
            assert pins[volt] == f'phase_{phase}_voltage_q17'
    for inst,module in (('u_inverter','inv_phi3_HB'),('u_inverter_de','inv_phi2_HB_DE')):
        assert instances[inst][0] == module
    for phase,pin in zip('abc',('Ia_S35_Q17','Ib_S35_Q17','Ic_S35_Q17')):
        assert instances['u_inverter'][1][pin] == f'phase_{phase}_current_q17'
    for phase,pin in zip('de',('Id_S35_Q17','Ie_S35_Q17')):
        assert instances['u_inverter_de'][1][pin] == f'phase_{phase}_current_q17'
    # [2026-11-10 16:39 CST] Protect driven signed feedback and the unused-input cleanup.
    for phase in 'abcde':
        assert f'assign phase_{phase}_current_q17 = $signed(phase_{phase}_current) >>> 8;' in top
    assert 'epwm_7A' not in ports
    assert 'u_position_to_stm32' not in instances
    assert instances['u_grid_pwm_passthrough'][1]['In3'] == "1'b0"
    # [2026-11-10 16:39 CST] The unused position observation instance is commented out.
    # assert len(instances)==9, instances.keys()
    assert len(instances)==8, instances.keys()
    de = uncomment((ROOT/'Inductor_DE.v').read_text('ascii'))
    assert re.search(r'\bmul_inductor_2\s+u_mul_inductor\b',de)
    assert not re.search(r'\b(?:x_3|UCO_P_S35|bEMF_C_S35_Q17|Curt3_H15)\b',de)
    assert not re.search(r'\b(?:x_4|UDO_P_S35)\b',uncomment((ROOT/'Inductor.v').read_text('ascii')))
    for core in ('mul18x35_1225_BySunY','mul_inductor_2'):
        config=(ROOT/'ipcore_dir'/f'{core}.xco').read_text()
        for value in ('portatype=Signed','portbtype=Signed','portawidth=18','portbwidth=35','pipestages=2'):
            assert 'CSET '+value in config
    project=ET.parse(ROOT/'vir5_PMSM.xise').getroot()
    files={f.get(NS+'name'):f for f in project.find(NS+'files')}
    for file in ('Inductor.v','Inductor_DE.v','inv_phi3_HB.v','inv_phi2_HB_DE.v','vir5_PMSM.v'):
        assert any(a.get(NS+'name')=='Implementation' for a in files[file])
        assert f'verilog work "{file}"' in (ROOT/'vir5_PMSM.prj').read_text()
    ucf=(ROOT/'main.ucf').read_text('ascii')
    for name,bit in re.findall(r'^\s*NET\s+"(\w+)(?:\[(\d+)\])?"',ucf,re.M):
        assert name in ports and (not bit or int(bit)<ports[name][1]),(name,bit)
    for name in ('epwm_4A','epwm_4B','epwm_5A','epwm_5B'):
        assert f'NET "{name}" IOSTANDARD = LVCMOS33;' in ucf
    # [2026-11-10 16:04 CST] Verify schematic pin mapping and unique package-pin ownership.
    locations = re.findall(r'^\s*NET\s+"([^"]+)"\s+LOC\s*=\s*(\w+)\s*;',ucf,re.M)
    assert len(locations) == len(dict(locations)), 'Multiple LOC assignments to one net'
    assert len(locations) == len({pin for _,pin in locations}), 'Package pin assigned to multiple nets'
    for name,pin in {'epwm_4A':'B1','epwm_4B':'G6','epwm_5A':'G5','epwm_5B':'B2'}.items():
        assert dict(locations)[name] == pin
    print('PASS: 3+2 topology, module interfaces, widths, single drivers, project and UCF references.')
    print('PASS: A/B/C uses original multiplier; D/E uses mul_inductor_2; no active third phase in D/E.')
    # [2026-11-10 16:04 CST] Superseded note retained after the user supplied the schematic.
    # print('NOTE: neutral/EMF are explicit zero bench placeholders; D/E PWM LOC remains unassigned.')
    print('PASS: D/E PWM pins match schematic B1/G6/G5/B2; all LOC assignments are unique.')
    print('NOTE: neutral/EMF remain explicit zero bench placeholders.')

if __name__ == '__main__':
    main()
