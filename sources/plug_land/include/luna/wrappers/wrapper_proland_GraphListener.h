#ifndef _WRAPPERS_WRAPPER_PROLAND_GRAPHLISTENER_H_
#define _WRAPPERS_WRAPPER_PROLAND_GRAPHLISTENER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/graph/GraphListener.h>

class wrapper_proland_GraphListener : public proland::GraphListener, public luna_wrapper_base {

public:
		

	~wrapper_proland_GraphListener() {
		logDEBUG3("Calling delete function for wrapper proland_GraphListener");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::GraphListener*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_GraphListener(lua_State* L, lua_Table* dum) 
		: proland::GraphListener(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::GraphListener*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void proland::GraphListener::graphChanged()
	void graphChanged() {
		THROW_IF(!_obj.pushFunction("graphChanged"),"No implementation for abstract function proland::GraphListener::graphChanged");
		_obj.pushArg((proland::GraphListener*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

