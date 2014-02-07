#include "launcher.h"
#include "MemoryModule.h"
#include <stdio.h>
#include <fstream>

#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/program_options.hpp>

extern const unsigned char buf_moduleloader_dll[];

namespace po = boost::program_options;

typedef bool (*loadModule_t)(const std::string& name, void* data);
typedef void* (*getModule_t)(const std::string& name);
typedef void (*setModuleData_t)(const std::string& name, void* data);
typedef void (*setModule_t)(const std::string& name, HCUSTOMMODULE handle);
typedef FARPROC (*getProcedure_t)(const std::string& name, const std::string procname);

int showError(const std::string& text) {
	return MessageBox(NULL,text.c_str(),"Error",MB_ICONERROR|MB_OK);
}

Launcher::Launcher()
{
}

#ifdef WINDOWS_APP
int Launcher::run(char* commandLine)
#else
int Launcher::run(int argc, char* argv[])
#endif
{
	// parse the arguments:
	// Now check the provided options:
	// Declare the supported options.
	po::options_description desc("Allowed options");
	desc.add_options()
		("help", "Produce help message")
		// ("xpos,x", po::value< int >(&_xpos), "Initial X position of the VBS2 window")
		// ("ypos,y", po::value< int >(&_ypos), "Initial Y position of the VBS2 window")
		// ("width,w", po::value< unsigned int >(&_width), "Initial width of the VBS2 window")
		// ("height,h", po::value< unsigned int >(&_height), "Initial height of the VBS2 window")
		// ("refreshDelay,r", po::value< unsigned int >(&_refreshDelay), "Duration to wait in ms before setting the VBS2 window size.")
		// ("profile,p", po::value< std::string >(&_profile), "VBS2 user profile folder")
		// ("mission,m", po::value< std::string >(&_mission), "Default mission to start with playMission script.")
	;

	// po::positional_options_description p;
	// p.add("script", -1);

	po::variables_map vm;

	try 
    { 
#ifdef WINDOWS_APP
		std::vector<std::string> args = po::split_winmain(commandLine);
		po::store(po::command_line_parser(args).options(desc).run(), vm);
#else
		po::store(po::command_line_parser(argc, argv).options(desc).run(), vm); // options(desc).positional(p).run(), vm);
#endif

		po::notify(vm);
	}
	catch(po::error& e) 
    { 
		logERROR("In command line: " << e.what() << std::endl << std::endl << desc << std::endl); 
		return 1; 
    } 
	
	if (vm.count("help")) {
		logINFO(desc);
		return 1;
	}
	
	// Perform the actual run process:
	return doRun();
}

int Launcher::doRun()
{
	HCUSTOMMODULE handle = MemoryLoadLibrary((void*)buf_moduleloader_dll);
	CHECK_RET(handle,1,"Invalid ModuleLoader handle");
	// logINFO("ModuleLoader loaded.")

	// Retrieve the loadModule method:
	loadModule_t loadModule = (loadModule_t)MemoryGetProcAddress(handle, "loadModule");
	CHECK_RET(loadModule,1,"Invalid loadModule pointer.");
	getModule_t getModule = (getModule_t)MemoryGetProcAddress(handle, "getModule");
	CHECK_RET(getModule,1,"Invalid getModule pointer.");
	getProcedure_t getProcedure = (getProcedure_t)MemoryGetProcAddress(handle, "getProcedure");
	CHECK_RET(getProcedure,1,"Invalid getProcedure pointer.");
	setModuleData_t setModuleData = (setModuleData_t)MemoryGetProcAddress(handle, "setModuleData");
	CHECK_RET(setModuleData,1,"Invalid setModuleData pointer.");
	setModule_t setModule = (setModule_t)MemoryGetProcAddress(handle, "setModule");
	CHECK_RET(setModule,1,"Invalid setModule pointer.");
	
	// bootstrap the reference on the module loader:
	setModule("ModuleLoader.dll",handle);
	
	CHECK_RET(getModule("ModuleLoader.dll")==handle,1,"Invalid Module loader handle retrieved: actual="<<(const void*)handle<<", retrieved="<< (const void*) getModule("ModuleLoader.dll") );
	
	// showError("Loading successfull !");
	// should free the modules here:
	MemoryFreeLibrary(handle);

	std::cout<< "Exiting."<< std::endl;
	return 0;
}

std::string Launcher::getExecutablePath()
{
	char pBuf[FILENAME_MAX];

	int bytes = GetModuleFileName(NULL, pBuf, FILENAME_MAX);
	if(bytes == 0) {
		logERROR("Cannot retrieve executable path.");
		return std::string();
	}

	std::string path = pBuf;
	int index = path.rfind("\\");
	path = path.substr(0,index);
	
	// logINFO("Found VBSSim2 root path: " + path);
	return path;
}

