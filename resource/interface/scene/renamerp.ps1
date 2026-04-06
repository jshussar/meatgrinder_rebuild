# AI SLOP

# Store the path of this script to exclude it
$scriptPath = $MyInvocation.MyCommand.Path

# Handle files first
Get-ChildItem -Path ./portrait_squad -Recurse -File | 
    Where-Object { $_.Name -like "us-*" } | 
    ForEach-Object {
        $newName = $_.Name -replace '^us-', 'np_'
        Rename-Item -Path $_.FullName -NewName $newName
    }