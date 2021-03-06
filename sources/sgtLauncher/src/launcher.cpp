#include "launcher.h"
#include "MemoryModule.h"
#include <stdio.h>
#include <fstream>

#include <boost/algorithm/string.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/program_options.hpp>

#ifdef WIN32
// This section is needed to get the updated control design for wxwidgets components.
#pragma comment(linker,"/manifestdependency:\"type='win32' "\
               "name='Microsoft.Windows.Common-Controls' "\
               "version='6.0.0.0' "\
               "processorArchitecture='x86' "\
               "publicKeyToken='6595b64144ccf1df' "\
               "language='*' "\
               "\"")
#endif

#ifdef WITH_CORE_SUPPORT
extern const unsigned char buf_moduleloader_dll[];
extern const unsigned char buf_sgtluna_dll[];
extern const unsigned char buf_lua51_dll[];
extern const unsigned char buf_osg97_osg_dll[];
extern const unsigned char buf_osg97_osgdb_dll[];
extern const unsigned char buf_osg97_osgutil_dll[];
extern const unsigned char buf_ot12_openthreads_dll[];
extern const unsigned char buf_sgtcore_dll[];
extern const unsigned char buf_plug_core_sgp[];
extern const unsigned char buf_plug_lfs_sgp[];
extern const unsigned char buf_lua_core_pak[];

typedef bool (*loadModule_t)(const std::string& name, void* data);
typedef void* (*getModule_t)(const std::string& name);
typedef void (*setModuleData_t)(const std::string& name, void* data);
typedef void (*setModule_t)(const std::string& name, HCUSTOMMODULE handle);
typedef FARPROC (*getProcedure_t)(const std::string& name, const std::string procname);
typedef int (*executeMain_t)(const std::vector<std::string>& cmdline);

#else
#include "ModuleLoader.h"
#include "kernel.h"
#endif

#ifdef WITH_LUNAGEN_SUPPORT
extern const unsigned char buf_plug_doxmlparser_sgp[];
extern const unsigned char buf_plug_lpeg_sgp[];
#endif

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

	// po::variables_map vm;

	try 
    { 
#ifdef WINDOWS_APP
		_args = po::split_winmain(commandLine);
		// po::store(po::command_line_parser(_args).options(desc).run(), vm);
#else
		// build args vector:
		for(i=0;i<argc;++i) {
			_args.push_back(std::string(argv[i]));
		}
		// po::store(po::command_line_parser(argc, argv).options(desc).run(), vm); // options(desc).positional(p).run(), vm);
#endif

		// po::notify(vm);
	}
	catch(po::error& e) 
    { 
		logERROR("In command line: " << e.what() << std::endl << std::endl << desc << std::endl); 
		return 1; 
    } 
	
	// if (vm.count("help")) {
	// 	logINFO(desc);
	// 	return 1;
	// }
	
	// Perform the actual run process:
	return doRun();
}


int Launcher::doRun()
{
#ifdef WITH_CORE_SUPPORT	
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

	setModuleData("lua51.dll",(void*)buf_lua51_dll);
	setModuleData("sgtLuna.dll",(void*)buf_sgtluna_dll);
	setModuleData("osg97-osg.dll",(void*)buf_osg97_osg_dll);
	setModuleData("osg97-osgDB.dll",(void*)buf_osg97_osgdb_dll);
	setModuleData("osg97-osgUtil.dll",(void*)buf_osg97_osgutil_dll);
	setModuleData("ot12-OpenThreads.dll",(void*)buf_ot12_openthreads_dll);
	
	setModuleData("core.lpak",(void*)buf_lua_core_pak);
	setModuleData("core.sgp",(void*)buf_plug_core_sgp);
	setModuleData("lfs.sgp",(void*)buf_plug_lfs_sgp);
#endif

#ifdef WITH_LUNAGEN_SUPPORT
	setModuleData("doxmlparser.sgp",(void*)buf_plug_doxmlparser_sgp);
	setModuleData("lpeg.sgp",(void*)buf_plug_lpeg_sgp);
#endif

	int res = 0;
#ifdef WITH_CORE_SUPPORT	
	CHECK_RET(loadModule("sgtCore.dll",(void*)buf_sgtcore_dll),1,"Cannot load kernel library.");
	executeMain_t executeMain_fn = (executeMain_t) getProcedure("sgtCore.dll", "executeMain");
	CHECK_RET(executeMain_fn,1,"Invalid executeMain method.");

	// Now call the execute main method:
	res = executeMain_fn(_args);

	// showError("Loading successfull !");
	// should free the modules here:
	MemoryFreeLibrary(handle);
#else
	res = executeMain(_args);
#endif

	std::cout<< "Exiting with code "<<res<< std::endl;
	return res;
}


