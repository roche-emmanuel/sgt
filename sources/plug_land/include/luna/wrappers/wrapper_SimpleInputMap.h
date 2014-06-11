#ifndef _WRAPPERS_WRAPPER_SIMPLEINPUTMAP_H_
#define _WRAPPERS_WRAPPER_SIMPLEINPUTMAP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <SimpleInputMap.h>

class wrapper_SimpleInputMap : public SimpleInputMap, public luna_wrapper_base {

public:
		

	~wrapper_SimpleInputMap() {
		logDEBUG3("Calling delete function for wrapper SimpleInputMap");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((SimpleInputMap*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_SimpleInputMap(lua_State* L, lua_Table* dum, const string & file, float scale, int width, int height, int channels, int tileSize, int cache = 20) 
		: SimpleInputMap(file, scale, width, height, channels, tileSize, cache), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((SimpleInputMap*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ork::vec4f SimpleInputMap::getValue(int x, int y)
	ork::vec4f getValue(int x, int y) {
		if(_obj.pushFunction("getValue")) {
			_obj.pushArg((SimpleInputMap*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return *(_obj.callFunction<ork::vec4f*>());
		}

		return SimpleInputMap::getValue(x, y);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

