#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_GPUTileStorage.h>

class luna_wrapper_proland_GPUTileStorage {
public:
	typedef Luna< proland::GPUTileStorage > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::GPUTileStorage* self= (proland::GPUTileStorage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::GPUTileStorage >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::GPUTileStorage* ptr= dynamic_cast< proland::GPUTileStorage* >(Luna< ork::Object >::check(L,1));
		proland::GPUTileStorage* ptr= luna_caster< ork::Object, proland::GPUTileStorage >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::GPUTileStorage >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,84580371) ) return false;
		if( (!(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,6))) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,84580371) ) return false;
		if( (!(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,7))) ) return false;
		if( luatop>7 && lua_isboolean(L,8)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTextureCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTexture(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTileMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_notifyChange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71475540)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateMipMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::GPUTileStorage::GPUTileStorage(int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false)
	static proland::GPUTileStorage* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::GPUTileStorage::GPUTileStorage(int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false) function, expected prototype:\nproland::GPUTileStorage::GPUTileStorage(int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false)\nClass arguments details:\narg 6 ID = 84580371\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int tileSize=(int)lua_tointeger(L,1);
		int nTiles=(int)lua_tointeger(L,2);
		ork::TextureInternalFormat internalf=(ork::TextureInternalFormat)lua_tointeger(L,3);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,4);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,5);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,6));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in proland::GPUTileStorage::GPUTileStorage function");
		}
		const ork::Texture::Parameters & params=*params_ptr;
		bool useTileMap=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;

		return new proland::GPUTileStorage(tileSize, nTiles, internalf, f, t, params, useTileMap);
	}

	// proland::GPUTileStorage::GPUTileStorage(lua_Table * data, int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false)
	static proland::GPUTileStorage* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::GPUTileStorage::GPUTileStorage(lua_Table * data, int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false) function, expected prototype:\nproland::GPUTileStorage::GPUTileStorage(lua_Table * data, int tileSize, int nTiles, ork::TextureInternalFormat internalf, ork::TextureFormat f, ork::PixelType t, const ork::Texture::Parameters & params, bool useTileMap = false)\nClass arguments details:\narg 7 ID = 84580371\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int tileSize=(int)lua_tointeger(L,2);
		int nTiles=(int)lua_tointeger(L,3);
		ork::TextureInternalFormat internalf=(ork::TextureInternalFormat)lua_tointeger(L,4);
		ork::TextureFormat f=(ork::TextureFormat)lua_tointeger(L,5);
		ork::PixelType t=(ork::PixelType)lua_tointeger(L,6);
		const ork::Texture::Parameters* params_ptr=(Luna< ork::Sampler::Parameters >::checkSubType< ork::Texture::Parameters >(L,7));
		if( !params_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg params in proland::GPUTileStorage::GPUTileStorage function");
		}
		const ork::Texture::Parameters & params=*params_ptr;
		bool useTileMap=luatop>7 ? (bool)(lua_toboolean(L,8)==1) : (bool)false;

		return new wrapper_proland_GPUTileStorage(L,NULL, tileSize, nTiles, internalf, f, t, params, useTileMap);
	}

	// Overload binder for proland::GPUTileStorage::GPUTileStorage
	static proland::GPUTileStorage* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GPUTileStorage, cannot match any of the overloads for function GPUTileStorage:\n  GPUTileStorage(int, int, ork::TextureInternalFormat, ork::TextureFormat, ork::PixelType, const ork::Texture::Parameters &, bool)\n  GPUTileStorage(lua_Table *, int, int, ork::TextureInternalFormat, ork::TextureFormat, ork::PixelType, const ork::Texture::Parameters &, bool)\n");
		return NULL;
	}


	// Function binds:
	// int proland::GPUTileStorage::getTextureCount()
	static int _bind_getTextureCount(lua_State *L) {
		if (!_lg_typecheck_getTextureCount(L)) {
			luaL_error(L, "luna typecheck failed in int proland::GPUTileStorage::getTextureCount() function, expected prototype:\nint proland::GPUTileStorage::getTextureCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GPUTileStorage* self=Luna< ork::Object >::checkSubType< proland::GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::GPUTileStorage::getTextureCount(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getTextureCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::ptr< ork::Texture2DArray > proland::GPUTileStorage::getTexture(int index)
	static int _bind_getTexture(lua_State *L) {
		if (!_lg_typecheck_getTexture(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture2DArray > proland::GPUTileStorage::getTexture(int index) function, expected prototype:\nork::ptr< ork::Texture2DArray > proland::GPUTileStorage::getTexture(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		proland::GPUTileStorage* self=Luna< ork::Object >::checkSubType< proland::GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture2DArray > proland::GPUTileStorage::getTexture(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture2DArray > lret = self->getTexture(index);
		Luna< ork::Texture2DArray >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::Texture2D > proland::GPUTileStorage::getTileMap()
	static int _bind_getTileMap(lua_State *L) {
		if (!_lg_typecheck_getTileMap(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Texture2D > proland::GPUTileStorage::getTileMap() function, expected prototype:\nork::ptr< ork::Texture2D > proland::GPUTileStorage::getTileMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GPUTileStorage* self=Luna< ork::Object >::checkSubType< proland::GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Texture2D > proland::GPUTileStorage::getTileMap(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Texture2D > lret = self->getTileMap();
		Luna< ork::Texture2D >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::GPUTileStorage::notifyChange(proland::GPUTileStorage::GPUSlot * s)
	static int _bind_notifyChange(lua_State *L) {
		if (!_lg_typecheck_notifyChange(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GPUTileStorage::notifyChange(proland::GPUTileStorage::GPUSlot * s) function, expected prototype:\nvoid proland::GPUTileStorage::notifyChange(proland::GPUTileStorage::GPUSlot * s)\nClass arguments details:\narg 1 ID = 71475540\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::GPUTileStorage::GPUSlot* s=(Luna< proland::GPUTileStorage::GPUSlot >::check(L,2));

		proland::GPUTileStorage* self=Luna< ork::Object >::checkSubType< proland::GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GPUTileStorage::notifyChange(proland::GPUTileStorage::GPUSlot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->notifyChange(s);

		return 0;
	}

	// void proland::GPUTileStorage::generateMipMap()
	static int _bind_generateMipMap(lua_State *L) {
		if (!_lg_typecheck_generateMipMap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::GPUTileStorage::generateMipMap() function, expected prototype:\nvoid proland::GPUTileStorage::generateMipMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GPUTileStorage* self=Luna< ork::Object >::checkSubType< proland::GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::GPUTileStorage::generateMipMap(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->generateMipMap();

		return 0;
	}

	// const char * proland::GPUTileStorage::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::GPUTileStorage::base_toString() function, expected prototype:\nconst char * proland::GPUTileStorage::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::GPUTileStorage* self=Luna< ork::Object >::checkSubType< proland::GPUTileStorage >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::GPUTileStorage::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->GPUTileStorage::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::GPUTileStorage* LunaTraits< proland::GPUTileStorage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_GPUTileStorage::_bind_ctor(L);
}

void LunaTraits< proland::GPUTileStorage >::_bind_dtor(proland::GPUTileStorage* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::GPUTileStorage >::className[] = "GPUTileStorage";
const char LunaTraits< proland::GPUTileStorage >::fullName[] = "proland::GPUTileStorage";
const char LunaTraits< proland::GPUTileStorage >::moduleName[] = "proland";
const char* LunaTraits< proland::GPUTileStorage >::parents[] = {"proland.TileStorage", 0};
const int LunaTraits< proland::GPUTileStorage >::hash = 92318219;
const int LunaTraits< proland::GPUTileStorage >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::GPUTileStorage >::methods[] = {
	{"getTextureCount", &luna_wrapper_proland_GPUTileStorage::_bind_getTextureCount},
	{"getTexture", &luna_wrapper_proland_GPUTileStorage::_bind_getTexture},
	{"getTileMap", &luna_wrapper_proland_GPUTileStorage::_bind_getTileMap},
	{"notifyChange", &luna_wrapper_proland_GPUTileStorage::_bind_notifyChange},
	{"generateMipMap", &luna_wrapper_proland_GPUTileStorage::_bind_generateMipMap},
	{"base_toString", &luna_wrapper_proland_GPUTileStorage::_bind_base_toString},
	{"fromVoid", &luna_wrapper_proland_GPUTileStorage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_GPUTileStorage::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_GPUTileStorage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::GPUTileStorage >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_GPUTileStorage::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::GPUTileStorage >::enumValues[] = {
	{0,0}
};


