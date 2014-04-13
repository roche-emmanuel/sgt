#ifndef _WRAPPERS_WRAPPER_ORK_COMPILEDRESOURCELOADER_STATICRESOURCEDESCRIPTOR_H_
#define _WRAPPERS_WRAPPER_ORK_COMPILEDRESOURCELOADER_STATICRESOURCEDESCRIPTOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/resource/CompiledResourceLoader.h>

class wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor : public ork::CompiledResourceLoader::StaticResourceDescriptor, public luna_wrapper_base {

public:
		

	~wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor() {
		logDEBUG3("Calling delete function for wrapper ork_CompiledResourceLoader_StaticResourceDescriptor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::CompiledResourceLoader::StaticResourceDescriptor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_CompiledResourceLoader_StaticResourceDescriptor(lua_State* L, lua_Table* dum, const TiXmlElement * descriptor, unsigned char * data, unsigned int size) 
		: ork::CompiledResourceLoader::StaticResourceDescriptor(descriptor, data, size), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::CompiledResourceLoader::StaticResourceDescriptor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::CompiledResourceLoader::StaticResourceDescriptor*)this);
			return (_obj.callFunction<void>());
		}

		return StaticResourceDescriptor::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::CompiledResourceLoader::StaticResourceDescriptor*)this);
			return (_obj.callFunction<const char*>());
		}

		return StaticResourceDescriptor::toString();
	};

	// void ork::CompiledResourceLoader::StaticResourceDescriptor::clearData()
	void clearData() {
		if(_obj.pushFunction("clearData")) {
			_obj.pushArg((ork::CompiledResourceLoader::StaticResourceDescriptor*)this);
			return (_obj.callFunction<void>());
		}

		return StaticResourceDescriptor::clearData();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

