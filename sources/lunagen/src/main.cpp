#include "launcher.h"

#ifdef WINDOWS_APP
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
#else
int main(int argc, char *argv[]) {
#endif

	try {
		Launcher launcher;
		
#ifdef WINDOWS_APP
		return launcher.run(lpCmdLine);
#else		
		return launcher.run(argc,argv);
#endif
	}
	catch(const std::exception& e) {
		logERROR("Standard exception in main: " << e.what());
		return 1;
	}
	catch(...) {
		logERROR("Unknown exception occurred in main. Will now close.");
		return 1;
	}
};
