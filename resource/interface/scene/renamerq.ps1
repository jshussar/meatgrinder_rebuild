# AI SLOP

# Store the path of this script to exclude it
$scriptPath = $MyInvocation.MyCommand.Path

# Handle files first
Get-ChildItem -Path ./portrait_squad -Recurse -File | 
    Where-Object { $_.Name -like "*(uk)*" } | 
    ForEach-Object {
        $newName = $_.Name -replace '\(uk\)', '(eng)'
		#echo $newName
        Rename-Item -Path $_.FullName -NewName $newName
    }