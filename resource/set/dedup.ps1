# Read the file and process each line
Get-Content "tp_control.set" | 
    # Find lines that match the pattern {"something" inherit ...}
    Select-String '^\s*{"([^"]+)"' | 
    # Extract just the value inside quotes
    ForEach-Object { $_.Matches.Groups[1].Value } |
    # Group by the value and count occurrences
    Group-Object | 
    # Filter only those with count > 1 (duplicates)
    Where-Object { $_.Count -gt 1 } |
    # Format the output
    Select-Object @{Name='Value';Expression={$_.Name}}, @{Name='Count';Expression={$_.Count}}