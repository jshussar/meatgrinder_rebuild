# AI SLOP

# Store the path of this script to exclude it
$scriptPath = $MyInvocation.MyCommand.Path

# Handle files first
Get-ChildItem -Path ./unit_icon -Recurse -File | 
    Where-Object { $_.Name -like "uk-*" } | 
    ForEach-Object {
        $newName = $_.Name -replace '^uk-', 'np_'
        Rename-Item -Path $_.FullName -NewName $newName
    }
	
# Handle files first
Get-ChildItem -Path ./unit_icon -Recurse -File | 
    Where-Object { $_.Name -like "us-*" } | 
    ForEach-Object {
        $newName = $_.Name -replace '^us-', 'np_'
        Rename-Item -Path $_.FullName -NewName $newName
    }