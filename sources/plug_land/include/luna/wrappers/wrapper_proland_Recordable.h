#ifndef _WRAPPERS_WRAPPER_PROLAND_RECORDABLE_H_
#define _WRAPPERS_WRAPPER_PROLAND_RECORDABLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/ui/EventRecorder.h>

class wrapper_proland_Recordable : public proland::Recordable, public luna_wrapper_base {

public:
		

	~wrapper_proland_Recordable() {
		logDEBUG3("Calling delete function for wrapper proland_Recordable");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::Recordable*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_Recordable(lua_State* L, lua_Table* dum) 
		: proland::Recordable(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::Recordable*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void proland::Recordable::saveState()
	void saveState() {
		THROW_IF(!_obj.pushFunction("saveState"),"No implementation for abstract function proland::Recordable::saveState");
		_obj.pushArg((proland::Recordable*)this);
		return (_obj.callFunction<void>());
	};

	// void proland::Recordable::restoreState()
	void restoreState() {
		THROW_IF(!_obj.pushFunction("restoreState"),"No implementation for abstract function proland::Recordable::restoreState");
		_obj.pushArg((proland::Recordable*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

