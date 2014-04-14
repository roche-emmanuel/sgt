#ifndef _WRAPPERS_WRAPPER_PROLAND_COLORMIPMAP_H_
#define _WRAPPERS_WRAPPER_PROLAND_COLORMIPMAP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/preprocess/terrain/ColorMipmap.h>

class wrapper_proland_ColorMipmap : public proland::ColorMipmap, public luna_wrapper_base {

public:
		

	~wrapper_proland_ColorMipmap() {
		logDEBUG3("Calling delete function for wrapper proland_ColorMipmap");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ColorMipmap*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// unsigned char * proland::ColorMipmap::readTile(int tx, int ty)
	unsigned char * readTile(int tx, int ty) {
		if(_obj.pushFunction("readTile")) {
			_obj.pushArg((proland::ColorMipmap*)this);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (unsigned char*)(_obj.callFunction<void*>());
		}

		return ColorMipmap::readTile(tx, ty);
	};

	// void proland::ColorMipmap::buildMipmapLevel(int level)
	void buildMipmapLevel(int level) {
		if(_obj.pushFunction("buildMipmapLevel")) {
			_obj.pushArg((proland::ColorMipmap*)this);
			_obj.pushArg(level);
			return (_obj.callFunction<void>());
		}

		return ColorMipmap::buildMipmapLevel(level);
	};

	// void proland::ColorMipmap::produceTile(int level, int tx, int ty)
	void produceTile(int level, int tx, int ty) {
		if(_obj.pushFunction("produceTile")) {
			_obj.pushArg((proland::ColorMipmap*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return ColorMipmap::produceTile(level, tx, ty);
	};

public:
	// Public virtual methods:
	// float proland::AbstractTileCache::getTileHeight(int x, int y)
	float getTileHeight(int x, int y) {
		if(_obj.pushFunction("getTileHeight")) {
			_obj.pushArg((proland::ColorMipmap*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<float>());
		}

		return ColorMipmap::getTileHeight(x, y);
	};

	// ork::vec4f proland::AbstractTileCache::getTileColor(int x, int y)
	ork::vec4f getTileColor(int x, int y) {
		if(_obj.pushFunction("getTileColor")) {
			_obj.pushArg((proland::ColorMipmap*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return *(_obj.callFunction<ork::vec4f*>());
		}

		return ColorMipmap::getTileColor(x, y);
	};

	// void proland::AbstractTileCache::reset(int width, int height, int tileSize)
	void reset(int width, int height, int tileSize) {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((proland::ColorMipmap*)this);
			_obj.pushArg(width);
			_obj.pushArg(height);
			_obj.pushArg(tileSize);
			return (_obj.callFunction<void>());
		}

		return ColorMipmap::reset(width, height, tileSize);
	};


	// Protected non-virtual methods:
	// void proland::ColorMipmap::buildBaseLevelTiles()
	void public_buildBaseLevelTiles() {
		return proland::ColorMipmap::buildBaseLevelTiles();
	};

	// void proland::ColorMipmap::produceRawTile(int level, int tx, int ty)
	void public_produceRawTile(int level, int tx, int ty) {
		return proland::ColorMipmap::produceRawTile(level, tx, ty);
	};

	// void proland::ColorMipmap::readInputTile(int level, int tx, int ty)
	void public_readInputTile(int level, int tx, int ty) {
		return proland::ColorMipmap::readInputTile(level, tx, ty);
	};

	// void proland::ColorMipmap::convertTile(int level, int tx, int ty, unsigned char * parent)
	void public_convertTile(int level, int tx, int ty, unsigned char * parent) {
		return proland::ColorMipmap::convertTile(level, tx, ty, parent);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_buildBaseLevelTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_produceRawTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_readInputTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_convertTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::ColorMipmap::public_buildBaseLevelTiles()
	static int _bind_public_buildBaseLevelTiles(lua_State *L) {
		if (!_lg_typecheck_public_buildBaseLevelTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::public_buildBaseLevelTiles() function, expected prototype:\nvoid proland::ColorMipmap::public_buildBaseLevelTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_proland_ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< wrapper_proland_ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::public_buildBaseLevelTiles(). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_buildBaseLevelTiles();

		return 0;
	}

	// void proland::ColorMipmap::public_produceRawTile(int level, int tx, int ty)
	static int _bind_public_produceRawTile(lua_State *L) {
		if (!_lg_typecheck_public_produceRawTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::public_produceRawTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::ColorMipmap::public_produceRawTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		wrapper_proland_ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< wrapper_proland_ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::public_produceRawTile(int, int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_produceRawTile(level, tx, ty);

		return 0;
	}

	// void proland::ColorMipmap::public_readInputTile(int level, int tx, int ty)
	static int _bind_public_readInputTile(lua_State *L) {
		if (!_lg_typecheck_public_readInputTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::public_readInputTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::ColorMipmap::public_readInputTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		wrapper_proland_ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< wrapper_proland_ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::public_readInputTile(int, int, int). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_readInputTile(level, tx, ty);

		return 0;
	}

	// void proland::ColorMipmap::public_convertTile(int level, int tx, int ty, unsigned char * parent)
	static int _bind_public_convertTile(lua_State *L) {
		if (!_lg_typecheck_public_convertTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ColorMipmap::public_convertTile(int level, int tx, int ty, unsigned char * parent) function, expected prototype:\nvoid proland::ColorMipmap::public_convertTile(int level, int tx, int ty, unsigned char * parent)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned char parent = (unsigned char)(lua_tointeger(L,5));

		wrapper_proland_ColorMipmap* self=Luna< proland::AbstractTileCache >::checkSubType< wrapper_proland_ColorMipmap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ColorMipmap::public_convertTile(int, int, int, unsigned char *). Got : '%s'\n%s",typeid(Luna< proland::AbstractTileCache >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_convertTile(level, tx, ty, &parent);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"buildBaseLevelTiles",_bind_public_buildBaseLevelTiles},
		{"produceRawTile",_bind_public_produceRawTile},
		{"readInputTile",_bind_public_readInputTile},
		{"convertTile",_bind_public_convertTile},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

