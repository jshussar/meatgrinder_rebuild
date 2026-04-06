# AI SLOP

# Store the path of this script to exclude it
$scriptPath = $MyInvocation.MyCommand.Path

# Handle files first
Get-ChildItem -Path ./unit_icon_small -Recurse -File | 
    Where-Object { $_.Name -like "uk-*" } | 
    ForEach-Object {
        $newName = $_.Name -replace '^uk-', 'np_'
        Rename-Item -Path $_.FullName -NewName $newName
    }

# Then handle folders (process from deepest to avoid path issues)
Get-ChildItem -Path ./unit_icon_small -Recurse -Directory | 
    Where-Object { $_.Name -like "uk-*" } | 
    Sort-Object -Property FullName -Descending |
    ForEach-Object {
        $newName = $_.Name -replace '^uk-', 'np_'
        Rename-Item -Path $_.FullName -NewName $newName
    }
	
# Handle files first
Get-ChildItem -Path ./unit_icon_small -Recurse -File | 
    Where-Object { $_.Name -like "us-*" } | 
    ForEach-Object {
        $newName = $_.Name -replace '^us-', 'np_'
        Rename-Item -Path $_.FullName -NewName $newName
    }

# Then handle folders (process from deepest to avoid path issues)
Get-ChildItem -Path ./unit_icon_small -Recurse -Directory | 
    Where-Object { $_.Name -like "us-*" } | 
    Sort-Object -Property FullName -Descending |
    ForEach-Object {
        $newName = $_.Name -replace '^us-', 'np_'
        Rename-Item -Path $_.FullName -NewName $newName
    }