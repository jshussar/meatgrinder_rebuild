param(
    [Parameter(Mandatory=$true)]
    [string]$sourceDir,
    
    [Parameter(Mandatory=$true)]
    [string]$targetDir
)

# Get all files named "map" recursively from source directory
Get-ChildItem -Path $sourceDir -Filter "map" -Recurse | ForEach-Object {
    # Get the relative path by removing the source directory path
    $relativePath = $_.FullName.Substring($sourceDir.Length)
    
    # Construct target path
    $targetPath = Join-Path $targetDir $relativePath
    
    # Create directory if it doesn't exist
    $targetDirectory = Split-Path -Parent $targetPath
    if (!(Test-Path $targetDirectory)) {
        New-Item -ItemType Directory -Path $targetDirectory -Force
    }
    
    # Copy the file
    Copy-Item $_.FullName -Destination $targetPath -Force
}