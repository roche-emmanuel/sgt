#ifndef _WRAPPERS_WRAPPER_PROLAND_HEIGHTMIPMAP_H_
#define _WRAPPERS_WRAPPER_PROLAND_HEIGHTMIPMAP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/preprocess/terrain/HeightMipmap.h>

class wrapper_proland_HeightMipmap : public proland::HeightMipmap, public luna_wrapper_base {

public:
		

	~wrapper_proland_HeightMipmap() {
		logDEBUG3("Calling delete function for wrapper proland_HeightMipmap");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::HeightMipmap*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_HeightMipmap(lua_State* L, lua_Table* dum, proland::HeightMipmap::HeightFunction * height, int topLevelSize, int baseLevelSize, int tileSize, float scale, const string & cache) 
		: proland::HeightMipmap(height, topLevelSize, baseLevelSize, tileSize, scale, cache), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::HeightMipmap*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// unsigned char * proland::HeightMipmap::readTile(int tx, int ty)
	unsigned char * readTile(int tx, int ty) {
		if(_obj.pushFunction("readTile")) {
			_obj.pushArg((proland::HeightMipmap*)this);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (unsigned char*)(_obj.callFunction<void*>());
		}

		return HeightMipmap::readTile(tx, ty);
	};

public:
	// Public virtual methods:
	// ork::vec4f proland::AbstractTileCache::getTileColor(int x, int y)
	ork::vec4f getTileColor(int x, int y) {
		if(_obj.pushFunction("getTileColor")) {
			_obj.pushArg((proland::HeightMipmap*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return *(_obj.callFunction<ork::vec4f*>());
		}

		return HeightMipmap::getTileColor(x, y);
	};

	// float proland::HeightMipmap::getTileHeight(int x, int y)
	float getTileHeight(int x, int y) {
		if(_obj.pushFunction("getTileHeight")) {
			_obj.pushArg((proland::HeightMipmap*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<float>());
		}

		return HeightMipmap::getTileHeight(x, y);
	};

	// void proland::HeightMipmap::reset(int width, int height, int tileSize)
	void reset(int width, int height, int tileSize) {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((proland::HeightMipmap*)this);
			_obj.pushArg(width);
			_obj.pushArg(height);
			_obj.pushArg(tileSize);
			return (_obj.callFunction<void>());
		}

		return HeightMipmap::reset(width, height, tileSize);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

