param(
    [Parameter(Mandatory=$false)]
    [string]$AdditionalPath
)

# Initialize array to hold all files
$allFiles = @()

# Get files from current directory
$allFiles += Get-ChildItem -Path . -Filter "*.def" -Recurse | 
    Select-Object Name, FullName

# If additional path is provided, get files from there too
if ($AdditionalPath) {
    if (Test-Path $AdditionalPath) {
        $allFiles += Get-ChildItem -Path $AdditionalPath -Filter "*.def" -Recurse |
            Select-Object Name, FullName
    } else {
        Write-Host "Warning: Additional path '$AdditionalPath' does not exist." -ForegroundColor Yellow
    }
}

# Group and find duplicates
$duplicates = $allFiles | 
    Group-Object Name |
    Where-Object { $_.Count -gt 1 }

if ($duplicates.Count -eq 0) {
    Write-Host "No duplicate .def files found." -ForegroundColor Yellow
    exit
}

Write-Host "Found duplicate .def files:" -ForegroundColor Cyan
foreach ($group in $duplicates) {
    Write-Host "`nDuplicate set for: $($group.Name)" -ForegroundColor Green
    foreach ($file in $group.Group) {
        Write-Host "  $($file.FullName)" -ForegroundColor White
    }
}

Write-Host "`nTotal duplicate sets found: $($duplicates.Count)" -ForegroundColor Cyan