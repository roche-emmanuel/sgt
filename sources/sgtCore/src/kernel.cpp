#include "kernel.h"
#include "lunaCommon.h"

#include "log/FileLogger.h"
#include "lua/ModuleProvider.h"
#include <algorithm>
#include "ModuleLoader.h"
#include "LuaState.h"

using namespace sgt;

int loadModuleFromMemory(const std::string& mname, const std::string& entryname, lua_State* L)
{
	//Use the module loader to load this library:
	// ModuleLoader& loader = ModuleLoader::instance();
	CHECK_RET(loadModule(mname),0,"Cannot load library "<<mname);
	
	if(entryname.empty())
		return 0;
		
	// Now call the entry point function:
	typedef int (* LuaFunc)(lua_State* L);
	
	LuaFunc entry = (LuaFunc)getProcedure(mname,entryname);
	CHECK_RET(entry,0,"Cannot find entry point " << entryname << " in library "<<mname);
	
	// call the entry point with this lua state:
	return entry(L);
}

int loadModuleFromMemory(void* data, const std::string& mname, const std::string& entryname, lua_State* L)
{
	//Use the module loader to load this library:
	// ModuleLoader& loader = ModuleLoader::instance();
	CHECK_RET(loadModule(mname,data),0,"Cannot load library "<<mname);
	
	if(entryname.empty())
		return 0;
		
	// Now call the entry point function:
	typedef int (* LuaFunc)(lua_State* L);
	
	LuaFunc entry = (LuaFunc)getProcedure(mname,entryname);
	CHECK_RET(entry,0,"Cannot find entry point " << entryname << " in library "<<mname);
	
	// call the entry point with this lua state:
	return entry(L);
}

int loadModuleFromMemory(const std::string& data, const std::string& mname, const std::string& entryname, lua_State* L)
{
	// the module data is available as first argument,
	// The name to use for this module is the second argument,
	// And the module entry point name is the third argument.
	return loadModuleFromMemory((void*)data.data(),mname,entryname,L);
}

std::string getExecutablePath()
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
	
	//logINFO("Found exe root path: " + path);
	return path;
}

extern "C" {

int executeMain(const std::vector<std::string>& args) {
	// Init the log system.
	LogManager::instance().setDefaultLevelFlags(LogManager::TIME_STAMP);
	LogManager::instance().setDefaultTraceFlags(LogManager::TIME_STAMP);
	LogManager::instance().addLevelFlags(LogManager::FATAL,LogManager::FILE_NAME|LogManager::LINE_NUMBER);
	LogManager::instance().addLevelFlags(LogManager::ERROR,LogManager::FILE_NAME|LogManager::LINE_NUMBER);
	LogManager::instance().addLevelFlags(LogManager::WARNING,LogManager::FILE_NAME|LogManager::LINE_NUMBER);

	LogManager::instance().setVerbose(true);
	LogManager::instance().setNotifyLevel(LogManager::DEBUG0); // Log until DEBUG0 level only.

	std::string root_path=getExecutablePath();
	
	// char* path = getenv("VBSSIM2_PATH");
	// if(path)
	// 	root_path = path;
	CHECK_RET(!root_path.empty(),0,"Root path environment variable is not set properly.");
	
	LogManager::instance().addSink(new FileLogger(root_path+"\\sgt.log",false,"main_log_file_sink"));
	
	logNOTICE("Log system initialized.");

	std::replace(root_path.begin(), root_path.end(), '\\', '/');
	
	logNOTICE("Starting lua engine using root path: " << root_path);

	// create a new lua state:
	sgtPtr<LuaState> state = new LuaState();

	state->setGlobal("root_path",root_path);
	logDEBUG0_V("Assigned global variable root_path="<<root_path);
	
	// Now we may proceed and execute the main entry point script:
	std::string mainModule = sgtModuleProvider::getModule("main");
		
	// // load main module:
	CHECK_RET(!mainModule.empty(),0,"Invalid entry point script.");
	
	//logDEBUG("Received " << args.size() << " arguments.");

	// logDEBUG0_V("Executing start module...");	
	// // showMessageBox("executing main script","Loading");	
	int ret;
	bool success = state->executeString(mainModule,"main",args,ret);
	// // bool initialized = scLuaState::instance().executeFile(root_path+"/modules/main.lua");

	if(!success) {
		logERROR("Error in main script. Will now close the software.");
		return 1;
	}

	logDEBUG("Exiting with exit code "<<ret);

	return ret;
}

}
