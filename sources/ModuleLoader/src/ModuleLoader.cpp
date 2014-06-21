#include "ModuleLoader.h"
#include <boost/thread/mutex.hpp>

#if 0
const char* buf_manifest = "<?xml version='1.0' encoding='UTF-8' standalone='yes'?>"
"<assembly xmlns='urn:schemas-microsoft-com:asm.v1' manifestVersion='1.0'>"
  "<trustInfo xmlns='urn:schemas-microsoft-com:asm.v3'>"
    "<security>"
      "<requestedPrivileges>"
       "<requestedExecutionLevel level='asInvoker' uiAccess='false' />"
      "</requestedPrivileges>"
    "</security>"
  "</trustInfo>"
  "<dependency>"
    "<dependentAssembly>"
      "<assemblyIdentity type='win32' name='Microsoft.VC90.CRT' version='9.0.21022.8' processorArchitecture='x86' publicKeyToken='1fc8b3b9a1e18e3b' />"
    "</dependentAssembly>"
  "</dependency>"
"</assembly>";
#endif

boost::mutex gl_guard;

int showError(const std::string& text) {
	return MessageBox(NULL,text.c_str(),"Error",MB_ICONERROR|MB_OK);
}

static FARPROC _GetProcAddress(HCUSTOMMODULE module, LPCSTR name, void *userdata)
{
	FARPROC res;
	res = (FARPROC)GetProcAddress((HMODULE)module, name);
	if (res == NULL) {
		SetLastError(0);
		return MemoryGetProcAddress(module, name);
	} else
		return res;
}

static void _FreeLibrary(HCUSTOMMODULE module, void *userdata)
{
	if(userdata) {
		ModuleLoader* loader = (ModuleLoader*)userdata;
		std::string name = loader->getName(module);
		if(!name.empty()) {
			loader->freeModule(name);
			return;
		}
	}
	
	FreeLibrary((HMODULE) module);
}

static HCUSTOMMODULE _LoadLibrary(LPCSTR filename, void *userdata)
{
	HCUSTOMMODULE result;
	// logINFO("LoadLibrary: " << std::string(filename));
	if (userdata) {
		ModuleLoader* loader = (ModuleLoader*)userdata;
		
		// Just check if the module is already loaded first:
		result = loader->getModule(filename);
		if(result) {
			loader->refModule(result);
			return result;
		}
		
		if (loader->hasData(filename)) {
			// logINFO("Found data for " << std::string(filename));
			result = loader->loadModule(filename);
			CHECK_RET(result,NULL,"Cannot load library " << filename << " from memory."); 
			return (HCUSTOMMODULE)result;
		} else {
			// logINFO("Found NO data for " << std::string(filename));
			result = (HCUSTOMMODULE)LoadLibraryA(filename);
			loader->setModule(filename,result);
			CHECK_RET(result,NULL,"Cannot load library " << filename << " from regular file.");
			return result;
		}
	}
	return (HCUSTOMMODULE)LoadLibraryA(filename);
}

ModuleLoader::ModuleLoader() {
#if 0
	ACTCTX ctx = {sizeof(ACTCTX), 0};
	
	std::string filename = getenv("TEMP");
	filename += "\\vbssim2.manifest";
	// logINFO("Writing file: "<< filename);
	
	// Remove any previous manifest file with the target name:
	remove( filename.c_str() );
	
	std::ofstream file;
	file.open(filename.c_str());
	file << buf_manifest;

	file.close();
	
	ctx.lpSource = TEXT(filename.c_str());
	_hCtx = CreateActCtx(&ctx);
	CHECK(_hCtx != INVALID_HANDLE_VALUE,"Invalid CreateActCtx result. error=" << GetLastError());
	
	// delete the manifest file:
	remove( filename.c_str() );
	
    BOOL activated = ActivateActCtx(_hCtx, &_actToken);
	CHECK(activated,"Invalid ActivateActCtx result.");
#endif
}

ModuleLoader::~ModuleLoader() {
#if 0
	DeactivateActCtx(0, _actToken);
	ReleaseActCtx(_hCtx);
#endif
}

ModuleLoader& ModuleLoader::instance() {
	static ModuleLoader loader;
	return loader;
}

bool ModuleLoader::hasData(const std::string& name)
{
	return _data.find(name)!=_data.end();
}

void ModuleLoader::setModuleData(const std::string& name, void* data)
{
	CHECK(data,"Invalid module data");
	CHECK(_data.find(name)==_data.end(),"Data for module " << name << " already added.");
	_data[name] = data;
}

HCUSTOMMODULE ModuleLoader::loadModuleFromFile(const std::string& name, const std::string& filename)
{
	HCUSTOMMODULE result;
	result = getModule(name);
	if(result) {
		// This module was already loaded, so we return it directly:
		refModule(result);
		return result;
	}
	
	// The module is not loaded yet, so we load it here:
	result = (HCUSTOMMODULE)LoadLibraryA(filename.c_str());
	CHECK_RET(result,NULL,"Cannot load library " << name << " from file " << filename);
	// Now save the reference on the module in case it is needed at some point later:
	setModule(name,result);		
	return result;
}

HCUSTOMMODULE ModuleLoader::loadModule(const std::string& name, void* data)
{
	HCUSTOMMODULE result;
	result = getModule(name);
	if(result) {
		// This module was already loaded, so we return it directly:
		refModule(result);
		return result;
	}
	
	if (data) {
		setModuleData(name,data);
	}
	
	// retrieve the data:
	if (!data && _data.find(name)!=_data.end()) {
		data = _data[name];
	}
	
	if(!data) {
		result = (HCUSTOMMODULE)LoadLibraryA(name.c_str());
		CHECK_RET(result,NULL,"Cannot load library " << name << " from regular file.");
		// Here we should anyway save the reference on the module in case it is needed at some point later:
		setModule(name,result);		
		return result;
	}
	
	// Now try loading the library:
	result = MemoryLoadLibraryEx(data,_LoadLibrary,_GetProcAddress,_FreeLibrary,this);
	CHECK_RET(result,NULL,"Cannot load library from memory: " << name);
	
	// Save the handle and increment ref:
	setModule(name,result);
	return result;
}

void ModuleLoader::freeModule(const std::string& name)
{
	HCUSTOMMODULE handle = getModule(name);
	CHECK(handle,"Invalid handle in freeModule.");
	if (unrefModule(handle)) {
		_modules.erase(name);
		_refs.erase(handle);
		MemoryFreeLibrary(handle);	
	}
}

void ModuleLoader::setModule(const std::string& name, HCUSTOMMODULE handle)
{
	std::string lname = name;
	std::transform(lname.begin(), lname.end(), lname.begin(), ::tolower);

	// logINFO("Setting module " << name << " handle to " << (const void*)handle);
	_modules[lname] = handle;
	refModule(handle);
}

std::string ModuleLoader::getName(HCUSTOMMODULE handle)
{
	for (ModuleMap::iterator it = _modules.begin(); it != _modules.end(); ++it) {
		if(it->second == handle) return it->first;
	}
	
	return "";
}

HCUSTOMMODULE ModuleLoader::getModule(const std::string& name)
{
	std::string lname = name;
	std::transform(lname.begin(), lname.end(), lname.begin(), ::tolower);
	return _modules[lname];
}

void ModuleLoader::refModule(HCUSTOMMODULE handle)
{
	_refs[handle]++;
}

bool ModuleLoader::unrefModule(HCUSTOMMODULE handle)
{
	return (--_refs[handle])<=0;
}

FARPROC ModuleLoader::getProcedure(const std::string& name, const std::string procname)
{
	HCUSTOMMODULE handle = getModule(name);
	if(!handle) return NULL;
	
	return MemoryGetProcAddress((HMEMORYMODULE)handle, procname.c_str());
}

extern "C" {

void setModuleData(const std::string& name, void* data)
{
	boost::mutex::scoped_lock lock(gl_guard);
	ModuleLoader::instance().setModuleData(name,data);
}

bool hasModuleData(const std::string& name)
{
	boost::mutex::scoped_lock lock(gl_guard);
	return ModuleLoader::instance().hasData(name);
}

bool loadModule(const std::string& name, void* data)
{
	boost::mutex::scoped_lock lock(gl_guard);
	return ModuleLoader::instance().loadModule(name,data)!=NULL;
}

bool loadModuleFromFile(const std::string& name, const std::string& filename)
{
	boost::mutex::scoped_lock lock(gl_guard);
	return ModuleLoader::instance().loadModuleFromFile(name,filename)!=NULL;
}

void freeModule(const std::string& name)
{
	boost::mutex::scoped_lock lock(gl_guard);
	ModuleLoader::instance().freeModule(name);
}

void setModule(const std::string& name, HCUSTOMMODULE handle)
{
	boost::mutex::scoped_lock lock(gl_guard);
	ModuleLoader::instance().setModule(name,handle);
}

void* getModule(const std::string& name) {
	boost::mutex::scoped_lock lock(gl_guard);
	return ModuleLoader::instance().getModule(name);
}

FARPROC getProcedure(const std::string& name, const std::string procname)
{
	boost::mutex::scoped_lock lock(gl_guard);
	return ModuleLoader::instance().getProcedure(name,procname);
}

}

