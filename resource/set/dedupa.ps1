# Define the files to check
$files = @(
    "tp_control.set",
    "tp_control_extra.inc",
    "third_person/vehicle_specific_valour.inc",
    "third_person/vehicle_specific_mace.inc"
)

# Create a hashtable to store values and their sources
$valueMap = @{}

# Process each file
foreach ($file in $files) {
    Get-Content $file | 
        Select-String '^\s*{"([^"]+)"' | 
        ForEach-Object {
            $value = $_.Matches.Groups[1].Value
            if ($valueMap.ContainsKey($value)) {
                $valueMap[$value] += @($file)
            } else {
                $valueMap[$value] = @($file)
            }
        }
}

# Find and display duplicates
$valueMap.GetEnumerator() | 
    Where-Object { $_.Value.Count -gt 1 } |
    Sort-Object Name |
    ForEach-Object {
        [PSCustomObject]@{
            Value = $_.Name
            Files = $_.Value -join ", "
            Count = $_.Value.Count
        }
    } |
    Format-Table -AutoSize