@echo off
attrib +h DOSBox
attrib +h Masm
%cd%\DOSBox\DOSBox %cd% -noconsole -conf %cd%\DOSBox\dosbox-0.74.conf
del *.txt
exit