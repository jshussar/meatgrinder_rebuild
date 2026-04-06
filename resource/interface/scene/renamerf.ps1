# AI SLOP

Get-ChildItem -Path ./unit_icon -Recurse -File | 
    Where-Object { $_.Name -match '\(\(uk\)\)' } | 
    ForEach-Object {
        $newName = $_.Name -replace '\(\(uk\)\)', '(eng)'
        Rename-Item -Path $_.FullName -NewName $newName
    }