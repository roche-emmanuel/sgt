#ifndef _WRAPPERS_WRAPPER_OSGDB_REGISTERWRAPPERPROXY_H_
#define _WRAPPERS_WRAPPER_OSGDB_REGISTERWRAPPERPROXY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgDB/ObjectWrapper>

class wrapper_osgDB_RegisterWrapperProxy : public osgDB::RegisterWrapperProxy, public luna_wrapper_base {

public:
		

	~wrapper_osgDB_RegisterWrapperProxy() {
		logDEBUG3("Calling delete function for wrapper osgDB_RegisterWrapperProxy");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgDB::RegisterWrapperProxy*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

