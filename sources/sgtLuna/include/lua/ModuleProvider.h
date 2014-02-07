#ifndef _MODULEMANAGER_H
#define _MODULEMANAGER_H

#include "lunaCommon.h"
#include "base/Singleton.h"
#include <osgDB/DynamicLibrary>

namespace sgt {

class SGTLUNA_EXPORT ModuleProvider : public osg::Referenced {
protected:
	typedef std::map<std::string,std::string> ModuleMap;
	typedef std::map<std::string,osg::ref_ptr<osgDB::DynamicLibrary> > PackageMap;
	
	ModuleMap _modules;
	PackageMap _packages;
	
public:
    ModuleProvider()
	{	
		logINFO("Creating Module provider instance.");
	};

    ~ModuleProvider() {
		logINFO("Destroying module provider instance.");	
	};

	// ModuleProvider(const ModuleProvider& tm, const sgtCopyOp& co = sgtCopyOp::SHALLOW_COPY):
		// sgtObject(tm,co)
	// {};
	
	// Object_META(sgt, ModuleProvider);
	
	static bool hasModule(const std::string& moduleName);
	static bool registerModule(const std::string& moduleName, const std::string& data);
	static bool unregisterModule(const std::string& moduleName);
	static std::string getModule(const std::string& moduleName);
	static void loadPackage(const std::string& packageFile);
};

DECLARE_SINGLETON(ModuleProvider, ModuleManager, SGTLUNA_EXPORT);

} // namespace sgt

typedef sgt::ModuleProvider sgtModuleProvider;
typedef sgt::ModuleManager sgtModuleManager;

#endif
