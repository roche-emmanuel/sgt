#ifndef _WRAPPERS_WRAPPER_PROLAND_ABSTRACTTILECACHE_H_
#define _WRAPPERS_WRAPPER_PROLAND_ABSTRACTTILECACHE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/preprocess/terrain/AbstractTileCache.h>

class wrapper_proland_AbstractTileCache : public proland::AbstractTileCache, public luna_wrapper_base {

public:
		

	~wrapper_proland_AbstractTileCache() {
		logDEBUG3("Calling delete function for wrapper proland_AbstractTileCache");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::AbstractTileCache*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_AbstractTileCache(lua_State* L, lua_Table* dum, int width, int height, int tileSize, int channels, int capacity = 20) 
		: proland::AbstractTileCache(width, height, tileSize, channels, capacity), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::AbstractTileCache*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// unsigned char * proland::AbstractTileCache::readTile(int tx, int ty)
	unsigned char * readTile(int tx, int ty) {
		THROW_IF(!_obj.pushFunction("readTile"),"No implementation for abstract function proland::AbstractTileCache::readTile");
		_obj.pushArg((proland::AbstractTileCache*)this);
		_obj.pushArg(tx);
		_obj.pushArg(ty);
		return (unsigned char*)(_obj.callFunction<void*>());
	};

public:
	// Public virtual methods:
	// float proland::AbstractTileCache::getTileHeight(int x, int y)
	float getTileHeight(int x, int y) {
		if(_obj.pushFunction("getTileHeight")) {
			_obj.pushArg((proland::AbstractTileCache*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<float>());
		}

		return AbstractTileCache::getTileHeight(x, y);
	};

	// ork::vec4f proland::AbstractTileCache::getTileColor(int x, int y)
	ork::vec4f getTileColor(int x, int y) {
		if(_obj.pushFunction("getTileColor")) {
			_obj.pushArg((proland::AbstractTileCache*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return *(_obj.callFunction<ork::vec4f*>());
		}

		return AbstractTileCache::getTileColor(x, y);
	};

	// void proland::AbstractTileCache::reset(int width, int height, int tileSize)
	void reset(int width, int height, int tileSize) {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((proland::AbstractTileCache*)this);
			_obj.pushArg(width);
			_obj.pushArg(height);
			_obj.pushArg(tileSize);
			return (_obj.callFunction<void>());
		}

		return AbstractTileCache::reset(width, height, tileSize);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

