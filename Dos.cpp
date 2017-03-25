#include <windows.h>
#include <string>
#include <iostream>
#if       _WIN32_WINNT < 0x0500
#undef  _WIN32_WINNT
#define _WIN32_WINNT   0x0500
#endif
#include <windows.h>
using namespace std;


int main() {
	ShowWindow( GetConsoleWindow(), SW_HIDE );
	
	
	system("attrib +h DOSBox");
	system("attrib +h img");
	system("attrib +h Masm");
	system ("%CD%/DOSBox/DOSBox.exe %cd% -noconsole -conf %cd%/dosbox-0.74.conf");
	system("del *.txt");
	return 0;
}
