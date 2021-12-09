set a=%~dp0%
set b=..\src\day
set c=%1%
set d=-part%2%
set mydir=%a%%b%%c%%d%

echo %mydir%
mkdir %mydir%
type NUL > %mydir%/input.txt
type NUL > %mydir%/main.cpp
type NUL > %mydir%/solution.cpp