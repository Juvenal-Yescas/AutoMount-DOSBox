@echo off
attrib +h DOSBox
attrib +h img
attrib +h Masm
%cd%\DOSBox\DOSBox %cd% -noconsole -conf %cd%\DOSBox\dosbox-0.74.conf
setlocal enabledelayedexpansion
for /f "tokens=*" %%a in ('type files.txt') do (
set line=%%a
del %cd%\Masm\!line!
)
del *.txt
exit
