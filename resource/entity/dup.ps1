$files = Get-ChildItem -Path . -Filter "*.def" -Recurse | 
    Select-Object Name, FullName |
    Group-Object Name |
    Where-Object { $_.Count -gt 1 }

if ($files.Count -eq 0) {
    Write-Host "No duplicate .def files found." -ForegroundColor Yellow
    exit
}

Write-Host "Found duplicate .def files:" -ForegroundColor Cyan
foreach ($group in $files) {
    Write-Host "`nDuplicate set for: $($group.Name)" -ForegroundColor Green
    foreach ($file in $group.Group) {
        Write-Host "  $($file.FullName)" -ForegroundColor White
    }
}

Write-Host "`nTotal duplicate sets found: $($files.Count)" -ForegroundColor Cyan