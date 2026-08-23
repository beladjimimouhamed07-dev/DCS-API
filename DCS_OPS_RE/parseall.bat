setlocal enabledelayedexpansion

set VCVARS="C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
call %VCVARS%

set DLL_DIR="E:\Games\DCS World\bin"

set DUMP_DIR="E:\src\opsdcs\opsdcs-fm\dumps"
mkdir %DUMP_DIR% 2>nul

set DEMANGLED_DIR="E:\src\opsdcs\opsdcs-fm\demangled"
mkdir %DEMANGLED_DIR% 2>nul

set HEADERS_DIR="E:\src\opsdcs\opsdcs-fm\headers"
mkdir %HEADERS_DIR% 2>nul

set DEMANGLE_SCRIPT="E:\src\opsdcs\opsdcs-fm\demangle.py"

for %%F in (%DLL_DIR%\Wor*.dll) do (
    set DLL_NAME=%%~nxF
    echo dumpbin !DLL_NAME!
    dumpbin /exports "%%F" > "%DUMP_DIR%\!DLL_NAME!.txt"
    echo demangle !DLL_NAME!
    python %DEMANGLE_SCRIPT% < "%DUMP_DIR%\!DLL_NAME!.txt" > "%DEMANGLED_DIR%\!DLL_NAME!.h"
)
echo Done.
endlocal
