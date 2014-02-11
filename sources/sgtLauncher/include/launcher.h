#ifndef LAUNCHER_H_
#define LAUNCHER_H_

#include <windows.h>
#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>
#include <stdio.h> 
#include <iostream>
#include <vector>

int showError(const std::string& text);

#define SHOW_MSG(msg) { \
	std::ostringstream os; \
	os << msg << std::endl; \
	showError(os.str()); \
}

#define logINFO(msg) SHOW_MSG("[Info] " << msg);
#define logERROR(msg) SHOW_MSG("[Error] " << msg);

#define THROW_IF(cond,msg) if(cond) { std::ostringstream os; os << msg; logERROR("Throwing exception: " << msg); exit(1); }

#define CHECK(val,msg) if(!(val)) { logERROR(msg); return; }
#define CHECK_RET(val,ret,msg) if(!(val)) { logERROR(msg); return ret; }


class Launcher {
public:
	Launcher();
	
	// Run the VBSSim process:
	// returns 0 in case of success, error code otherwise.
#ifdef WINDOWS_APP	
	int run(char* commandLine);
#else
	int run(int argc, char* argv[]);
#endif

	BOOL checkWindowHandle(HWND hwnd);
	
protected:
	int doRun();
	std::string getExecutablePath();
	std::vector<std::string> _args;
};

#endif
