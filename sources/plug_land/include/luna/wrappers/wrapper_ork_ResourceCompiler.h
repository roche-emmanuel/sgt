#ifndef _WRAPPERS_WRAPPER_ORK_RESOURCECOMPILER_H_
#define _WRAPPERS_WRAPPER_ORK_RESOURCECOMPILER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/resource/ResourceCompiler.h>

class wrapper_ork_ResourceCompiler : public ork::ResourceCompiler, public luna_wrapper_base {

public:
		

	~wrapper_ork_ResourceCompiler() {
		logDEBUG3("Calling delete function for wrapper ork_ResourceCompiler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::ResourceCompiler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_ResourceCompiler(lua_State* L, lua_Table* dum, const std::string & resourceFile, const std::string & resourceDataFile) 
		: ork::ResourceCompiler(resourceFile, resourceDataFile), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ResourceCompiler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::ResourceCompiler*)this);
			return (_obj.callFunction<void>());
		}

		return ResourceCompiler::doRelease();
	};

	// std::string ork::XMLResourceLoader::findFile(const TiXmlElement * desc, const std::vector< std::string > paths, const std::string & file)
	std::string findFile(const TiXmlElement * desc, const std::vector< std::string > paths, const std::string & file) {
		if(_obj.pushFunction("findFile")) {
			_obj.pushArg((ork::ResourceCompiler*)this);
			_obj.pushArg(desc);
			_obj.pushArg(&paths);
			_obj.pushArg(file);
			return (_obj.callFunction<std::string>());
		}

		return ResourceCompiler::findFile(desc, paths, file);
	};

	// unsigned char * ork::XMLResourceLoader::loadFile(const std::string & file, unsigned int & size)
	unsigned char * loadFile(const std::string & file, unsigned int & size) {
		if(_obj.pushFunction("loadFile")) {
			_obj.pushArg((ork::ResourceCompiler*)this);
			_obj.pushArg(file);
			_obj.pushArg(size);
			return (unsigned char*)(_obj.callFunction<void*>());
		}

		return ResourceCompiler::loadFile(file, size);
	};

	// void ork::XMLResourceLoader::getTimeStamp(const std::string & name, time_t & t)
	void getTimeStamp(const std::string & name, time_t & t) {
		if(_obj.pushFunction("getTimeStamp")) {
			_obj.pushArg((ork::ResourceCompiler*)this);
			_obj.pushArg(name);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return ResourceCompiler::getTimeStamp(name, t);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::ResourceCompiler*)this);
			return (_obj.callFunction<const char*>());
		}

		return ResourceCompiler::toString();
	};

	// ork::ptr< ork::ResourceDescriptor > ork::XMLResourceLoader::reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue)
	ork::ptr< ork::ResourceDescriptor > reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue) {
		if(_obj.pushFunction("reloadResource")) {
			_obj.pushArg((ork::ResourceCompiler*)this);
			_obj.pushArg(name);
			_obj.pushArg((ork::ResourceDescriptor*)currentValue.get());
			return _obj.callFunction< ork::ResourceDescriptor* >();
		}

		return ResourceCompiler::reloadResource(name, currentValue);
	};

	// std::string ork::ResourceCompiler::findResource(const std::string & name)
	std::string findResource(const std::string & name) {
		if(_obj.pushFunction("findResource")) {
			_obj.pushArg((ork::ResourceCompiler*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<std::string>());
		}

		return ResourceCompiler::findResource(name);
	};

	// ork::ptr< ork::ResourceDescriptor > ork::ResourceCompiler::loadResource(const std::string & name)
	ork::ptr< ork::ResourceDescriptor > loadResource(const std::string & name) {
		if(_obj.pushFunction("loadResource")) {
			_obj.pushArg((ork::ResourceCompiler*)this);
			_obj.pushArg(name);
			return _obj.callFunction< ork::ResourceDescriptor* >();
		}

		return ResourceCompiler::loadResource(name);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

