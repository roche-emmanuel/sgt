#include "lunaCommon.h"
#include "lua/ModuleProvider.h"

#include <osgDB/ObjectWrapper>

namespace sgt {

IMPLEMENT_SINGLETON(ModuleProvider, ModuleManager);

bool ModuleProvider::hasModule(const std::string& moduleName) {
	ModuleProvider& prov = sgtModuleManager::instance();
	return prov._modules.find(moduleName)!=prov._modules.end();
}

bool ModuleProvider::registerModule(const std::string& moduleName, const std::string& data) {
	// CHECK_RET(!hasModule(moduleName),false,"The module named " << moduleName << " was already registered.")
	if (hasModule(moduleName)) {
		logWARN("Overriding content for module " << moduleName << ".");
	}
	
	ModuleProvider& prov = sgtModuleManager::instance();
	prov._modules[moduleName]=data;
	return true;
}

bool ModuleProvider::unregisterModule(const std::string& moduleName) {
	ModuleProvider& prov = sgtModuleManager::instance();
	ModuleMap::iterator it = prov._modules.find(moduleName);
	if(it==prov._modules.end())
		return false;
		
	prov._modules.erase(it);
	return true;
}

std::string ModuleProvider::getModule(const std::string& moduleName) {
	ModuleProvider& prov = sgtModuleManager::instance();
	ModuleMap::iterator it = prov._modules.find(moduleName);
	if(it==prov._modules.end())
		return "";
		
	return it->second;
}

void ModuleProvider::loadPackage(const std::string& packageFile) {
	ModuleProvider& prov = sgtModuleManager::instance();
	if(prov._packages.find(packageFile)!=prov._packages.end()) {
		logDEBUG3_V("Package " << packageFile << " is already loaded.");
		return;
	}

//sgtModuleManager::instance();

	logDEBUG3_V("Trying to load library from " << packageFile);
/*	void* res = LoadLibrary( packageFile.c_str() );
	if(!res) {
		//DWORD code = GetLastError();
		LPVOID lpMsgBuf;
		DWORD dw = GetLastError(); 

		FormatMessage(
			FORMAT_MESSAGE_ALLOCATE_BUFFER | 
			FORMAT_MESSAGE_FROM_SYSTEM |
			FORMAT_MESSAGE_IGNORE_INSERTS,
			NULL,
			dw,
			MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
			(LPTSTR) &lpMsgBuf,
			0, NULL );
		logERROR("Loading failed:"<< lpMsgBuf);
	}*/

	osgDB::DynamicLibrary* lib = osgDB::DynamicLibrary::loadLibrary(packageFile);
	if(lib) {
		logDEBUG_V("Successfully loaded library from " << packageFile);
		prov._packages[packageFile] = lib;
	}
	else {
		logERROR("Could not load library from " << packageFile);
	}
}


} // namespace giCommon
