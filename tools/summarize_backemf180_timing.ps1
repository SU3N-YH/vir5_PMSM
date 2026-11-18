param(
    [string]$Variant = 'fixed',
    [switch]$RequirePass
)
$ErrorActionPreference = 'Stop'
$workspace = (Resolve-Path (Join-Path $PSScriptRoot '..')).Path
$build = Join-Path $workspace "validation\backemf180\$Variant"
$report = Get-Content -Raw (Join-Path $build 'all_endpoints.twr')
if ($report -notmatch '20000 endpoints per constraint') {
    throw 'Expected the complete endpoint report from run_backemf180_timing.ps1'
}
$blocks = [regex]::Split($report, '(?=Paths for end point )')
$rows = @($blocks | ForEach-Object {
    if ($_ -match '^Paths for end point ' -and
        $_ -match 'Slack \((setup|hold) path\):\s+(-?[\d.]+)ns') {
        $kind = $Matches[1]
        $slack = [double]::Parse($Matches[2], [cultureinfo]::InvariantCulture)
        $source = [regex]::Match($_, 'Source:\s+(\S+)').Groups[1].Value
        $destination = [regex]::Match($_, 'Destination:\s+(\S+)').Groups[1].Value
        [pscustomobject]@{
            Kind=$kind; Slack=$slack; Source=$source; Destination=$destination
            Detail=($_ -split '\r?\n' | Select-Object -First 12) -join "`n"
        }
    }
})
$emf = @($rows | Where-Object Destination -like 'u_back_EMF/*')
$setup = @($emf | Where-Object Kind -eq 'setup' | Sort-Object Slack)
$hold = @($emf | Where-Object Kind -eq 'hold' | Sort-Object Slack)
if ($setup.Count -eq 0 -or $hold.Count -eq 0) { throw 'No BackEMF coverage found' }
$failed = @($emf | Where-Object Slack -lt 0)
$otherFailures = @($rows | Where-Object {
    $_.Slack -lt 0 -and $_.Destination -notlike 'u_back_EMF/*'
})
$summary = @(
    "Variant: $Variant",
    'Device: xc6slx25-2-ftg256, routed full top-level design',
    'Clock: 20 MHz input, PLL-derived 180 MHz, 5.556 ns requirement',
    'Scope: all paths ending inside u_back_EMF, including PCI inputs',
    "BackEMF setup endpoint records: $($setup.Count)",
    "BackEMF hold endpoint records: $($hold.Count)",
    "BackEMF failing endpoint records: $($failed.Count)",
    "BackEMF minimum setup slack: $($setup[0].Slack) ns",
    "BackEMF minimum hold slack: $($hold[0].Slack) ns",
    '', 'Worst setup path:', $setup[0].Detail,
    '', 'Worst hold path:', $hold[0].Detail,
    '', 'Other failing endpoint records by destination module:'
)
$summary += $otherFailures | Group-Object {$_.Destination.Split('/')[0]} |
    ForEach-Object { "$($_.Name): $($_.Count)" }
$summary += @('', 'Other failing paths include consumers of BackEMF outputs.',
    'This result does not certify top-level timing or asynchronous FMC I/O.',
    'No false-path or multicycle exception was applied to the BackEMF datapath.')
$summary | Set-Content -Encoding ascii (Join-Path $build 'backemf_timing.txt')
$summary | Write-Output
if ($RequirePass -and $failed.Count -ne 0) {
    throw 'BackEMF timing failed; see backemf_timing.txt'
}
