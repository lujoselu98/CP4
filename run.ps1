$FILE = '.\Ch1\UVa_11547.cpp'
g++ -O2 -std=c++11 $FILE -o program.exe
Write-Host 'Compiled'

Get-Content in | .\program.exe > myout
Write-Host 'Executed'

clion64.exe diff out myout
