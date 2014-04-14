#ifndef _WRAPPERS_WRAPPER_PROLAND_TWEAKRESOURCE_DATA_H_
#define _WRAPPERS_WRAPPER_PROLAND_TWEAKRESOURCE_DATA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/ui/twbar/TweakResource.h>

class wrapper_proland_TweakResource_Data : public proland::TweakResource::Data, public luna_wrapper_base {

public:
		

	~wrapper_proland_TweakResource_Data() {
		logDEBUG3("Calling delete function for wrapper proland_TweakResource_Data");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TweakResource::Data*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TweakResource_Data(lua_State* L, lua_Table* dum) 
		: proland::TweakResource::Data(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TweakResource::Data*)this);
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

