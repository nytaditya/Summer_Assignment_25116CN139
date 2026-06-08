$repo = "C:\Users\adity\Desktop\college_assignment"

Set-Location $repo

$day = Get-Content "$repo\currentday.txt"

$folder = "DAY_$day"

if(Test-Path $folder)
{
    git add $folder
    git commit -m "$folder solutions"
    git push origin main

    $next = [int]$day + 1
    Set-Content "$repo\currentday.txt" $next
}