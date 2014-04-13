#ifndef _WRAPPERS_WRAPPER_ORK_RESOURCELOADER_H_
#define _WRAPPERS_WRAPPER_ORK_RESOURCELOADER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/resource/ResourceLoader.h>

class wrapper_ork_ResourceLoader : public ork::ResourceLoader, public luna_wrapper_base {

public:
		

	~wrapper_ork_ResourceLoader() {
		logDEBUG3("Calling delete function for wrapper ork_ResourceLoader");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::ResourceLoader*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_ResourceLoader(lua_State* L, lua_Table* dum) 
		: ork::ResourceLoader(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ResourceLoader*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::ResourceLoader*)this);
			return (_obj.callFunction<void>());
		}

		return ResourceLoader::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::ResourceLoader*)this);
			return (_obj.callFunction<const char*>());
		}

		return ResourceLoader::toString();
	};

	// std::string ork::ResourceLoader::findResource(const std::string & name)
	std::string findResource(const std::string & name) {
		THROW_IF(!_obj.pushFunction("findResource"),"No implementation for abstract function ork::ResourceLoader::findResource");
		_obj.pushArg((ork::ResourceLoader*)this);
		_obj.pushArg(name);
		return (_obj.callFunction<std::string>());
	};

	// ork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::loadResource(const std::string & name)
	ork::ptr< ork::ResourceDescriptor > loadResource(const std::string & name) {
		THROW_IF(!_obj.pushFunction("loadResource"),"No implementation for abstract function ork::ResourceLoader::loadResource");
		_obj.pushArg((ork::ResourceLoader*)this);
		_obj.pushArg(name);
		return _obj.callFunction< ork::ResourceDescriptor* >();
	};

	// ork::ptr< ork::ResourceDescriptor > ork::ResourceLoader::reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue)
	ork::ptr< ork::ResourceDescriptor > reloadResource(const std::string & name, ork::ptr< ork::ResourceDescriptor > currentValue) {
		THROW_IF(!_obj.pushFunction("reloadResource"),"No implementation for abstract function ork::ResourceLoader::reloadResource");
		_obj.pushArg((ork::ResourceLoader*)this);
		_obj.pushArg(name);
		_obj.pushArg((ork::ResourceDescriptor*)currentValue.get());
		return _obj.callFunction< ork::ResourceDescriptor* >();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

