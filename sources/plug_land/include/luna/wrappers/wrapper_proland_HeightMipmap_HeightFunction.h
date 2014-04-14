#ifndef _WRAPPERS_WRAPPER_PROLAND_HEIGHTMIPMAP_HEIGHTFUNCTION_H_
#define _WRAPPERS_WRAPPER_PROLAND_HEIGHTMIPMAP_HEIGHTFUNCTION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/preprocess/terrain/HeightMipmap.h>

class wrapper_proland_HeightMipmap_HeightFunction : public proland::HeightMipmap::HeightFunction, public luna_wrapper_base {

public:
		

	~wrapper_proland_HeightMipmap_HeightFunction() {
		logDEBUG3("Calling delete function for wrapper proland_HeightMipmap_HeightFunction");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::HeightMipmap::HeightFunction*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_HeightMipmap_HeightFunction(lua_State* L, lua_Table* dum) 
		: proland::HeightMipmap::HeightFunction(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::HeightMipmap::HeightFunction*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// float proland::HeightMipmap::HeightFunction::getHeight(int x, int y)
	float getHeight(int x, int y) {
		THROW_IF(!_obj.pushFunction("getHeight"),"No implementation for abstract function proland::HeightMipmap::HeightFunction::getHeight");
		_obj.pushArg((proland::HeightMipmap::HeightFunction*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		return (_obj.callFunction<float>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

