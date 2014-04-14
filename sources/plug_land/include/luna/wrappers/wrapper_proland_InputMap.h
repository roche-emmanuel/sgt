#ifndef _WRAPPERS_WRAPPER_PROLAND_INPUTMAP_H_
#define _WRAPPERS_WRAPPER_PROLAND_INPUTMAP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/preprocess/terrain/Preprocess.h>

class wrapper_proland_InputMap : public proland::InputMap, public luna_wrapper_base {

public:
		

	~wrapper_proland_InputMap() {
		logDEBUG3("Calling delete function for wrapper proland_InputMap");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::InputMap*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_InputMap(lua_State* L, lua_Table* dum, int width, int height, int channels, int tileSize, int cache = 20) 
		: proland::InputMap(width, height, channels, tileSize, cache), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::InputMap*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ork::vec4f proland::InputMap::getValue(int x, int y)
	ork::vec4f getValue(int x, int y) {
		THROW_IF(!_obj.pushFunction("getValue"),"No implementation for abstract function proland::InputMap::getValue");
		_obj.pushArg((proland::InputMap*)this);
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

