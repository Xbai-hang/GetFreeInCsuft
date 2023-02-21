:: This Script is used to Install&Uninstall WinPcap and some dll for win10. Written by Xbai-hang

%1 mshta vbscript:CreateObject("Shell.Application").ShellExecute("cmd.exe","/c "^&chr(34)^&"%~0"^&chr(34)^&" ::","%cd%","runas",1)(window.close)&&exi
@echo off
cls
color 0a

:OSVersion
cls
echo.
echo　　　　　　　　╔══════════════════╗
echo　　　　　　　　║   操作系统类型　 ║
echo　　　　　　╔═══╩══════════════════╩═══╗
echo　　　　　　║                          ║
echo　　　　　　║　　1、32位　　　2、64位  ║
echo　　　　　　║                          ║
echo　　　　　　╚══════════════════════════╝
echo.
SET /P winVersion=请选择操作系统类型[1-2]，然后回车：
cls
echo.
If "%winVersion%"=="" goto OSVersion
Set winVersion=%winVersion:~0,1%
if /I "%winVersion%"=="1" goto Start
if /I "%winVersion%"=="2" goto Start
goto End

:Start
cls
echo.
echo　　　　　　　　　╔══════════════════════════╗
echo　　　　　　　　　║　　Dll　安装 ^& 卸载　　　║
echo　　　　　　╔═════╩══════════════════════════╩═══════════╗
echo　　　　　　║　　　　　　　　　　　　　　　　　　　　　　║
echo　　　　　　║　　　1、安装　　　 2、卸载　　　　3、退出　║
echo　　　　　　║　　　　　　　　　　　　　　　　　　　　　　║
echo　　　　　　╚════════════════════════════════════════════╝
echo .
SET /P Choice=请选择要进行的操作[1-3]，然后回车：
cls
echo.
If "%Choice%"=="" goto Start
Set Choice=%Choice:~0,1%
if /I "%Choice%"=="1" goto Install
if /I "%Choice%"=="2" goto Uninstall
if /I "%Choice%"=="3" goto End
goto End

:Install
if /I "%winVersion%"=="1" (
move /Y "dll\win32\mfc140ud.dll" "%SystemRoot%\System32"
move /Y "dll\win32\ucrtbased.dll" "%SystemRoot%\System32"
move /Y "dll\win32\vcruntime140d.dll" "%SystemRoot%\System32"
) else (
move /Y "dll\win64\mfc140ud.dll" "%SystemRoot%\SysWOW64"
move /Y "dll\win64\ucrtbased.dll" "%SystemRoot%\SysWOW64"
move /Y "dll\win64\vcruntime140d.dll" "%SystemRoot%\SysWOW64"
)
echo "正在启动 WinPcap 安装程序，若提示 is already installed，请点击确认即可"
start "" "WinPcap.4.1.3.exe"
echo.安装完成，按任意键退出
pause >nul
goto End

:Uninstall
start "" "C:\Program Files (x86)\WinPcap\Uninstall.exe"
if /I "%winVersion%"=="1" (
move /Y "%SystemRoot%\System32\mfc140ud.dll" "dll\win32"
move /Y "%SystemRoot%\System32\ucrtbased.dll" "dll\win32"
move /Y "%SystemRoot%\System32\vcruntime140d.dll" "dll\win32"
del "%SystemRoot%\System32\Packet.dll" 2>nul
del "%SystemRoot%\System32\WanPacket.dll" 2>nul
del "%SystemRoot%\System32\wpcap.dll" 2>nul
del "%SystemRoot%\System32\drivers\npf.sys" 2>nul
) else (
move /Y "%SystemRoot%\SysWOW64\mfc140ud.dll" "dll\win64"
move /Y "%SystemRoot%\SysWOW64\ucrtbased.dll" "dll\win64"
move /Y "%SystemRoot%\SysWOW64\vcruntime140d.dll" "dll\win64"
del "%SystemRoot%\SysWOW64\Packet.dll" 2>nul
del "%SystemRoot%\SysWOW64\WanPacket.dll" 2>nul
del "%SystemRoot%\SysWOW64\wpcap.dll" 2>nul
del "%SystemRoot%\System32\drivers\npf.sys" 2>nul
)
echo.卸载完成，按任意键退出
pause >nul
goto End

:End
cls
color 0f