#include "kernel.h"
#include "lunaCommon.h"

#include "log/FileLogger.h"
#include "lua/ModuleProvider.h"
#include <algorithm>

using namespace sgt;

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

int executeMain(const std::string& args) {
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

	// scLuaState::instance().setGlobal("root_path",root_path);
	// logDEBUG0_V("Assigned global variable root_path="<<root_path);
	
	// // Now we may proceed and execute the main entry point script:
	// std::string mainModule = sgtModuleProvider::getModule("main");
		
	// // load main module:
	// CHECK_RET(!mainModule.empty(),0,"Invalid entry point script.");
	
	// logDEBUG0_V("Executing start module...");	
	// // showMessageBox("executing main script","Loading");	
	// bool initialized = scLuaState::instance().executeString(mainModule,"main");
	// // bool initialized = scLuaState::instance().executeFile(root_path+"/modules/main.lua");

	// if(!initialized) {
	// 	logERROR("Could not initialize scripting environment. Will now close the software.");
	// 	exit(1);
	// }

	logDEBUG("Exiting...");

	return 0;
}

}
