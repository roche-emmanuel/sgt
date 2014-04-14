#ifndef _WRAPPERS_WRAPPER_PROLAND_FLOATTILECACHE_H_
#define _WRAPPERS_WRAPPER_PROLAND_FLOATTILECACHE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/preprocess/terrain/ApertureMipmap.h>

class wrapper_proland_FloatTileCache : public proland::FloatTileCache, public luna_wrapper_base {

public:
		

	~wrapper_proland_FloatTileCache() {
		logDEBUG3("Calling delete function for wrapper proland_FloatTileCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::FloatTileCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_FloatTileCache(lua_State* L, lua_Table* dum, int capacity = 20) 
		: proland::FloatTileCache(capacity), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::FloatTileCache*)this);
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


protected:
// float * proland::FloatTileCache::readTile(int level, int tx, int ty)
float * readTile(int, int, int) {
	THROW_IF(true,"The function call float * proland::FloatTileCache::readTile(int, int, int) is not implemented in wrapper.");
	return NULL;
};

};




#endif

