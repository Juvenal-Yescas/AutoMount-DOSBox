#include <iostream>
#include <cstdio>
#include <algorithm>
#include <windows.h>
#include <string.h>
#include <string>
#include <sstream>

#if       _WIN32_WINNT < 0x0500
#undef  _WIN32_WINNT
#define _WIN32_WINNT   0x0500
#endif

using namespace std;

string StringToUpper(string strToConvert){
	std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);
	return strToConvert;
}

int main() {

	/*Hidden console*/
	ShowWindow( GetConsoleWindow(), SW_HIDE );

	/*Hidden folders*/
	system("attrib +h DOSBox"); 
	system("attrib +h img");
	system("attrib +h Masm");

	/*Run and mount directory with Dosbox*/
	system ("%CD%/DOSBox/DOSBox.exe %cd% -noconsole -conf %cd%/dosbox-0.74.conf");

	/*Deletes compiled .exe files*/
	FILE *compiled;
	compiled = freopen("COMPILED.TXT", "rb", stdin);
	string line;
	while(getline(cin, line)){
		string file_exe=StringToUpper(line);
		string di="cd Masm && del "+file_exe;
		system(di.c_str());
	}
	
	fclose ( compiled );

	/*Delete files created by dosbox*/
	system("del *.txt");

	return 0;
}
