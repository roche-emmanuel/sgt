#ifndef _WRAPPERS_WRAPPER_ORK_QUERY_H_
#define _WRAPPERS_WRAPPER_ORK_QUERY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Query.h>

class wrapper_ork_Query : public ork::Query, public luna_wrapper_base {

public:
		

	~wrapper_ork_Query() {
		logDEBUG3("Calling delete function for wrapper ork_Query");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Query*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Query(lua_State* L, lua_Table* dum, ork::QueryType type) 
		: ork::Query(type), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Query*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Query*)this);
			return (_obj.callFunction<void>());
		}

		return Query::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Query*)this);
			return (_obj.callFunction<const char*>());
		}

		return Query::toString();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

