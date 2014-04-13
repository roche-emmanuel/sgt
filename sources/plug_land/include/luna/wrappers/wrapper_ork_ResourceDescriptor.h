#ifndef _WRAPPERS_WRAPPER_ORK_RESOURCEDESCRIPTOR_H_
#define _WRAPPERS_WRAPPER_ORK_RESOURCEDESCRIPTOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/resource/ResourceDescriptor.h>

class wrapper_ork_ResourceDescriptor : public ork::ResourceDescriptor, public luna_wrapper_base {

public:
		

	~wrapper_ork_ResourceDescriptor() {
		logDEBUG3("Calling delete function for wrapper ork_ResourceDescriptor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::ResourceDescriptor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_ResourceDescriptor(lua_State* L, lua_Table* dum, const TiXmlElement * descriptor, unsigned char * data, unsigned int size) 
		: ork::ResourceDescriptor(descriptor, data, size), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::ResourceDescriptor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::ResourceDescriptor*)this);
			return (_obj.callFunction<void>());
		}

		return ResourceDescriptor::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::ResourceDescriptor*)this);
			return (_obj.callFunction<const char*>());
		}

		return ResourceDescriptor::toString();
	};

	// void ork::ResourceDescriptor::clearData()
	void clearData() {
		if(_obj.pushFunction("clearData")) {
			_obj.pushArg((ork::ResourceDescriptor*)this);
			return (_obj.callFunction<void>());
		}

		return ResourceDescriptor::clearData();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

