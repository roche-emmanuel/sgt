#ifndef _WRAPPERS_WRAPPER_PROLAND_GPUTILESTORAGE_H_
#define _WRAPPERS_WRAPPER_PROLAND_GPUTILESTORAGE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/producer/GPUTileStorage.h>

class wrapper_proland_GPUTileStorage : public proland::GPUTileStorage, public luna_wrapper_base {

public:
		

	~wrapper_proland_GPUTileStorage() {
		logDEBUG3("Calling delete function for wrapper proland_GPUTileStorage");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::GPUTileStorage*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_GPUTileStorage(lua_State* L, lua_Table* dum, int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false) 
		: proland::GPUTileStorage(tileSize, nTiles, internalf, f, t, params, useTileMap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::GPUTileStorage*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_GPUTileStorage(lua_State* L, lua_Table* dum) 
		: proland::GPUTileStorage(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::GPUTileStorage*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::GPUTileStorage*)this);
			return (_obj.callFunction<void>());
		}

		return GPUTileStorage::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::GPUTileStorage*)this);
			return (_obj.callFunction<const char*>());
		}

		return GPUTileStorage::toString();
	};


	// Protected non-virtual methods:
	// void proland::GPUTileStorage::init(int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false)
	void public_init(int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false) {
		return proland::GPUTileStorage::init(tileSize, nTiles, internalf, f, t, params, useTileMap);
	};

	// void proland::GPUTileStorage::swap(ork::ptr< proland::GPUTileStorage > s)
	void public_swap(ork::ptr< proland::GPUTileStorage > s) {
		return proland::GPUTileStorage::swap(s);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,84580371) ) return false;
		if( luatop>7 && lua_isboolean(L,8)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GPUTileStorage >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::GPUTileStorage::public_init(int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GPUTileStorage::public_init(int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false) function, expected prototype:\nvoid proland::GPUTileStorage::public_init(int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false)\nClass arguments details:\narg 6 ID = 84580371\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int tileSize=(int)lua_tointeger(L,2);
		int nTiles=(int)lua_tointeger(L,3);
		ork::TextureInternalFormat internalf=(ork::TextureInternalFormat)lua_tointeger(L,4);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,5);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,6);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,7));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in proland::GPUTileStorage::public_init function");
		}
		const ork::Texture::Parameters & params=*params_ptr;
		bool useTileMap=luatop>7 ? (bool)(lua_toboolean(L,8)==1) : (bool)false;

		wrapper_proland_GPUTileStorage* self=Luna< ork::Object >::checkSubType< wrapper_proland_GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GPUTileStorage::public_init(int, int, ork::TextureInternalFormat, ork::TextureFormat, ork::PixelType, const ork::Texture::Parameters &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(tileSize, nTiles, internalf, f, t, params, useTileMap);

		return 0;
	}

	// void proland::GPUTileStorage::public_swap(ork::ptr< proland::GPUTileStorage > s)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GPUTileStorage::public_swap(ork::ptr< proland::GPUTileStorage > s) function, expected prototype:\nvoid proland::GPUTileStorage::public_swap(ork::ptr< proland::GPUTileStorage > s)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::GPUTileStorage > s = Luna< ork::Object >::checkSubType< proland::GPUTileStorage >(L,2);

		wrapper_proland_GPUTileStorage* self=Luna< ork::Object >::checkSubType< wrapper_proland_GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GPUTileStorage::public_swap(ork::ptr< proland::GPUTileStorage >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(s);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

