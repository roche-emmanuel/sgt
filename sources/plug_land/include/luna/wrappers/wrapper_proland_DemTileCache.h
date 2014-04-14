#ifndef _WRAPPERS_WRAPPER_PROLAND_DEMTILECACHE_H_
#define _WRAPPERS_WRAPPER_PROLAND_DEMTILECACHE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/preprocess/terrain/ApertureMipmap.h>

class wrapper_proland_DemTileCache : public proland::DemTileCache, public luna_wrapper_base {

public:
		

	~wrapper_proland_DemTileCache() {
		logDEBUG3("Calling delete function for wrapper proland_DemTileCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::DemTileCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_DemTileCache(lua_State* L, lua_Table* dum, const string & name, int capacity = 20) 
		: proland::DemTileCache(name, capacity), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::DemTileCache*)this);
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

