#ifndef _WRAPPERS_WRAPPER_PROLAND_COLORMIPMAP_COLORFUNCTION_H_
#define _WRAPPERS_WRAPPER_PROLAND_COLORMIPMAP_COLORFUNCTION_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/preprocess/terrain/ColorMipmap.h>

class wrapper_proland_ColorMipmap_ColorFunction : public proland::ColorMipmap::ColorFunction, public luna_wrapper_base {

public:
		

	~wrapper_proland_ColorMipmap_ColorFunction() {
		logDEBUG3("Calling delete function for wrapper proland_ColorMipmap_ColorFunction");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ColorMipmap::ColorFunction*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ColorMipmap_ColorFunction(lua_State* L, lua_Table* dum) 
		: proland::ColorMipmap::ColorFunction(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ColorMipmap::ColorFunction*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ork::vec4f proland::ColorMipmap::ColorFunction::getColor(int x, int y)
	ork::vec4f getColor(int x, int y) {
		THROW_IF(!_obj.pushFunction("getColor"),"No implementation for abstract function proland::ColorMipmap::ColorFunction::getColor");
		_obj.pushArg((proland::ColorMipmap::ColorFunction*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		return *(_obj.callFunction<ork::vec4f*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

