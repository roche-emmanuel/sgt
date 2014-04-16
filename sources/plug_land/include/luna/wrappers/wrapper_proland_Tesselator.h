#ifndef _WRAPPERS_WRAPPER_PROLAND_TESSELATOR_H_
#define _WRAPPERS_WRAPPER_PROLAND_TESSELATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/producer/Tesselator.h>

class wrapper_proland_Tesselator : public proland::Tesselator, public luna_wrapper_base {

public:
		

	~wrapper_proland_Tesselator() {
		logDEBUG3("Calling delete function for wrapper proland_Tesselator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::Tesselator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_Tesselator(lua_State* L, lua_Table* dum) 
		: proland::Tesselator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::Tesselator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::Tesselator*)this);
			return (_obj.callFunction<void>());
		}

		return Tesselator::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::Tesselator*)this);
			return (_obj.callFunction<const char*>());
		}

		return Tesselator::toString();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

