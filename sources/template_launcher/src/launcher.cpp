#include "launcher.h"
#include "MemoryModule.h"
#include <stdio.h>
#include <fstream>

#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/program_options.hpp>

extern const unsigned char buf_simkernel_dll[];
extern const unsigned long long len_simkernel_dll;

namespace po = boost::program_options;

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
	// // First we write the simkernel file to a temp file:
	// std::string simfile = getenv("TEMP");
	// simfile += "\\vbssim2_sim_data.tmp";
	
	// CHECK_RET(writeFile(simfile,(void*)buf_simkernel_dll,len_simkernel_dll),1,"Could not write SimKernel file.")
	
	// // also check if we have a configuration file in the current folder:
	// if(!fexists("VBSSim2.cfg")) {
	// 	CHECK_RET(writeFile("VBSSim2.cfg",(void*)buf_default_config,len_default_config),1,"Could not write default configuration file.")
	// }
	
	// // install the hooks:
	// HINSTANCE handle = LoadLibrary(simfile.c_str());
	// // HINSTANCE handle = LoadLibrary("SimKernel.dll");
	// CHECK_RET(handle,1,"Invalid SimKernel.dll handle");
	
	// InstallProc InstallHook = (InstallProc) GetProcAddress(handle, "InstallHook");
	// CHECK_RET(InstallHook,1,"Invalid InstallHook pointer.")
	// RemoveProc RemoveHook = (RemoveProc) GetProcAddress(handle, "RemoveHook");
	// CHECK_RET(RemoveHook,1,"Invalid RemoveHook pointer.")
	
	// FreeLibrary(handle); 

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

