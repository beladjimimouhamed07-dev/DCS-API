@echo off
setlocal EnableExtensions
cd /d "%~dp0"

set "VSINSTALL="
for /f "usebackq delims=" %%i in (`"%ProgramFiles(x86)%\Microsoft Visual Studio\Installer\vswhere.exe" -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath 2^>nul`) do set "VSINSTALL=%%i"

if not defined VSINSTALL (
    echo Visual Studio C++ toolset not found.
    exit /b 1
)

call "%VSINSTALL%\VC\Auxiliary\Build\vcvars64.bat" >nul
if errorlevel 1 exit /b 1

if not exist "..\..\bin" mkdir "..\..\bin"

cl /nologo /LD /EHsc /O2 /MD /W3 /DUNICODE /D_UNICODE ^
    Rafalesystems.cpp ^
    /Fe:"..\..\bin\Rafalesystems.dll" ^
    /link /DEF:Rafalesystems.def /INCREMENTAL:NO

if errorlevel 1 exit /b 1

del /q *.obj *.exp *.lib 2>nul
echo Built ..\..\bin\Rafalesystems.dll
exit /b 0
