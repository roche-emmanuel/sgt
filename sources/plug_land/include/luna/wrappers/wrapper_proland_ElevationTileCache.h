#ifndef _WRAPPERS_WRAPPER_PROLAND_ELEVATIONTILECACHE_H_
#define _WRAPPERS_WRAPPER_PROLAND_ELEVATIONTILECACHE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/preprocess/terrain/ApertureMipmap.h>

class wrapper_proland_ElevationTileCache : public proland::ElevationTileCache, public luna_wrapper_base {

public:
		

	~wrapper_proland_ElevationTileCache() {
		logDEBUG3("Calling delete function for wrapper proland_ElevationTileCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ElevationTileCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ElevationTileCache(lua_State* L, lua_Table* dum, proland::DemTileCache * residuals, int capacity = 20) 
		: proland::ElevationTileCache(residuals, capacity), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ElevationTileCache*)this);
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

