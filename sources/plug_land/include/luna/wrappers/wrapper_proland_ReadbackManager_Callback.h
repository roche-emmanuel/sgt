#ifndef _WRAPPERS_WRAPPER_PROLAND_READBACKMANAGER_CALLBACK_H_
#define _WRAPPERS_WRAPPER_PROLAND_READBACKMANAGER_CALLBACK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/terrain/ReadbackManager.h>

class wrapper_proland_ReadbackManager_Callback : public proland::ReadbackManager::Callback, public luna_wrapper_base {

public:
		

	~wrapper_proland_ReadbackManager_Callback() {
		logDEBUG3("Calling delete function for wrapper proland_ReadbackManager_Callback");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ReadbackManager::Callback*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ReadbackManager_Callback(lua_State* L, lua_Table* dum) 
		: proland::ReadbackManager::Callback(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ReadbackManager::Callback*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::ReadbackManager::Callback*)this);
			return (_obj.callFunction<void>());
		}

		return Callback::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::ReadbackManager::Callback*)this);
			return (_obj.callFunction<const char*>());
		}

		return Callback::toString();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// void proland::ReadbackManager::Callback::dataRead(volatile void * data)
void dataRead(volatile void *) {
	THROW_IF(true,"The function call void proland::ReadbackManager::Callback::dataRead(volatile void *) is not implemented in wrapper.");
};

};




#endif

