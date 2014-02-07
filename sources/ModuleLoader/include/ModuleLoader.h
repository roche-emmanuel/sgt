#ifndef MODULELOADER_H_
#define MODULELOADER_H_

// Windows Header Files:
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <fstream>
#include <map>
#include <vector>
#include <set>

#include "MemoryModule.h"

int showError(const std::string& text);

#define SHOW_MSG(msg) { \
	std::ostringstream os; \
	os << msg << std::endl; \
	showError(os.str()); \
}

#ifndef logINFO
// sgt macros mockups:
#define logINFO(msg) SHOW_MSG("[Info] " << msg);
#define logERROR(msg) SHOW_MSG("[Error] " << msg);

#define THROW_IF(cond,msg) if(cond) { std::ostringstream os; os << msg; logERROR("Throwing exception: " << msg); exit(1); }

#define CHECK(val,msg) if(!(val)) { logERROR(msg); return; }
#define CHECK_RET(val,ret,msg) if(!(val)) { logERROR(msg); return ret; }

#endif

#ifdef MODULELOADER_LIBRARY
#define LOADER_EXPORT __declspec(dllexport)
#else
#define LOADER_EXPORT __declspec(dllimport)
#endif

extern "C" {

LOADER_EXPORT void setModuleData(const std::string& name, void* data);
LOADER_EXPORT bool loadModule(const std::string& name, void* data = NULL);
LOADER_EXPORT void freeModule(const std::string& name);
LOADER_EXPORT void setModule(const std::string& name, HCUSTOMMODULE handle);
LOADER_EXPORT void* getModule(const std::string& name);
LOADER_EXPORT FARPROC getProcedure(const std::string& name, const std::string procname);
}

class ModuleLoader {
public:
	typedef std::map<std::string, void* > DataMap;
	typedef std::map<std::string, HCUSTOMMODULE> ModuleMap;
	typedef std::map<HCUSTOMMODULE, unsigned int> ModuleRef;

	~ModuleLoader();
	
protected:
	ModuleLoader();
	
public:
	static ModuleLoader& instance();
	
	void setModuleData(const std::string& name, void* data);
	
	HCUSTOMMODULE loadModule(const std::string& name, void* data = NULL);
	
	void freeModule(const std::string& name);
	
	void setModule(const std::string& name, HCUSTOMMODULE handle);
	
	bool hasData(const std::string& name);
	
	std::string getName(HCUSTOMMODULE handle);
	
	HCUSTOMMODULE getModule(const std::string& name);
	
	void refModule(HCUSTOMMODULE handle);
	bool unrefModule(HCUSTOMMODULE handle);
	
	FARPROC getProcedure(const std::string& name, const std::string procname);
	
protected:
	DataMap	_data;
	ModuleMap _modules;
	ModuleRef _refs;
	
	HANDLE _hCtx;
	ULONG_PTR _actToken;
};

#endif
