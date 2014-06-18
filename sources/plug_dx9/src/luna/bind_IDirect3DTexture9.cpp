#include <plug_common.h>

class luna_wrapper_IDirect3DTexture9 {
public:
	typedef Luna< IDirect3DTexture9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49931509) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IDirect3DTexture9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DTexture9* rhs =(Luna< IDirect3DTexture9 >::check(L,2));
		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		IDirect3DTexture9* self= (IDirect3DTexture9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDirect3DTexture9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49931509) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IDirect3DTexture9");
		
		return luna_dynamicCast(L,converters,"IDirect3DTexture9",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AddRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetPriority(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPriority(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PreLoad(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLOD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLOD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLevelCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAutoGenFilterType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAutoGenFilterType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GenerateMipSubLevels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLevelDesc(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,76481686)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LockRect(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,94018592)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,2511332)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnlockRect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddDirtyRect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,2511332)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSurface(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,49931509)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_asBaseTexture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,49931509)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned long IDirect3DTexture9::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DTexture9::AddRef() function, expected prototype:\nunsigned long IDirect3DTexture9::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DTexture9::AddRef(). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3DTexture9::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DTexture9::Release() function, expected prototype:\nunsigned long IDirect3DTexture9::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DTexture9::Release(). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3DTexture9::SetPriority(unsigned long PriorityNew)
	static int _bind_SetPriority(lua_State *L) {
		if (!_lg_typecheck_SetPriority(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DTexture9::SetPriority(unsigned long PriorityNew) function, expected prototype:\nunsigned long IDirect3DTexture9::SetPriority(unsigned long PriorityNew)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long PriorityNew=(unsigned long)lua_tonumber(L,2);

		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DTexture9::SetPriority(unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->SetPriority(PriorityNew);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3DTexture9::GetPriority()
	static int _bind_GetPriority(lua_State *L) {
		if (!_lg_typecheck_GetPriority(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DTexture9::GetPriority() function, expected prototype:\nunsigned long IDirect3DTexture9::GetPriority()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DTexture9::GetPriority(). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->GetPriority();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void IDirect3DTexture9::PreLoad()
	static int _bind_PreLoad(lua_State *L) {
		if (!_lg_typecheck_PreLoad(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DTexture9::PreLoad() function, expected prototype:\nvoid IDirect3DTexture9::PreLoad()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IDirect3DTexture9::PreLoad(). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PreLoad();

		return 0;
	}

	// D3DRESOURCETYPE IDirect3DTexture9::GetType()
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luaL_error(L, "luna typecheck failed in D3DRESOURCETYPE IDirect3DTexture9::GetType() function, expected prototype:\nD3DRESOURCETYPE IDirect3DTexture9::GetType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DRESOURCETYPE IDirect3DTexture9::GetType(). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DRESOURCETYPE lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3DTexture9::SetLOD(unsigned long LODNew)
	static int _bind_SetLOD(lua_State *L) {
		if (!_lg_typecheck_SetLOD(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DTexture9::SetLOD(unsigned long LODNew) function, expected prototype:\nunsigned long IDirect3DTexture9::SetLOD(unsigned long LODNew)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long LODNew=(unsigned long)lua_tonumber(L,2);

		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DTexture9::SetLOD(unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->SetLOD(LODNew);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3DTexture9::GetLOD()
	static int _bind_GetLOD(lua_State *L) {
		if (!_lg_typecheck_GetLOD(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DTexture9::GetLOD() function, expected prototype:\nunsigned long IDirect3DTexture9::GetLOD()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DTexture9::GetLOD(). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->GetLOD();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3DTexture9::GetLevelCount()
	static int _bind_GetLevelCount(lua_State *L) {
		if (!_lg_typecheck_GetLevelCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DTexture9::GetLevelCount() function, expected prototype:\nunsigned long IDirect3DTexture9::GetLevelCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DTexture9::GetLevelCount(). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->GetLevelCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DTexture9::SetAutoGenFilterType(D3DTEXTUREFILTERTYPE FilterType)
	static int _bind_SetAutoGenFilterType(lua_State *L) {
		if (!_lg_typecheck_SetAutoGenFilterType(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DTexture9::SetAutoGenFilterType(D3DTEXTUREFILTERTYPE FilterType) function, expected prototype:\nlong IDirect3DTexture9::SetAutoGenFilterType(D3DTEXTUREFILTERTYPE FilterType)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DTEXTUREFILTERTYPE FilterType=(D3DTEXTUREFILTERTYPE)lua_tointeger(L,2);

		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DTexture9::SetAutoGenFilterType(D3DTEXTUREFILTERTYPE). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetAutoGenFilterType(FilterType);
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DTEXTUREFILTERTYPE IDirect3DTexture9::GetAutoGenFilterType()
	static int _bind_GetAutoGenFilterType(lua_State *L) {
		if (!_lg_typecheck_GetAutoGenFilterType(L)) {
			luaL_error(L, "luna typecheck failed in D3DTEXTUREFILTERTYPE IDirect3DTexture9::GetAutoGenFilterType() function, expected prototype:\nD3DTEXTUREFILTERTYPE IDirect3DTexture9::GetAutoGenFilterType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DTEXTUREFILTERTYPE IDirect3DTexture9::GetAutoGenFilterType(). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DTEXTUREFILTERTYPE lret = self->GetAutoGenFilterType();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void IDirect3DTexture9::GenerateMipSubLevels()
	static int _bind_GenerateMipSubLevels(lua_State *L) {
		if (!_lg_typecheck_GenerateMipSubLevels(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DTexture9::GenerateMipSubLevels() function, expected prototype:\nvoid IDirect3DTexture9::GenerateMipSubLevels()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IDirect3DTexture9::GenerateMipSubLevels(). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GenerateMipSubLevels();

		return 0;
	}

	// long IDirect3DTexture9::GetLevelDesc(unsigned int Level, D3DSURFACE_DESC * pDesc)
	static int _bind_GetLevelDesc(lua_State *L) {
		if (!_lg_typecheck_GetLevelDesc(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DTexture9::GetLevelDesc(unsigned int Level, D3DSURFACE_DESC * pDesc) function, expected prototype:\nlong IDirect3DTexture9::GetLevelDesc(unsigned int Level, D3DSURFACE_DESC * pDesc)\nClass arguments details:\narg 2 ID = 76481686\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Level=(unsigned int)lua_tointeger(L,2);
		D3DSURFACE_DESC* pDesc=(Luna< D3DSURFACE_DESC >::check(L,3));

		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DTexture9::GetLevelDesc(unsigned int, D3DSURFACE_DESC *). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetLevelDesc(Level, pDesc);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DTexture9::LockRect(unsigned int Level, D3DLOCKED_RECT * pLockedRect, const RECT * pRect, unsigned long Flags)
	static int _bind_LockRect(lua_State *L) {
		if (!_lg_typecheck_LockRect(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DTexture9::LockRect(unsigned int Level, D3DLOCKED_RECT * pLockedRect, const RECT * pRect, unsigned long Flags) function, expected prototype:\nlong IDirect3DTexture9::LockRect(unsigned int Level, D3DLOCKED_RECT * pLockedRect, const RECT * pRect, unsigned long Flags)\nClass arguments details:\narg 2 ID = 94018592\narg 3 ID = 2511332\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Level=(unsigned int)lua_tointeger(L,2);
		D3DLOCKED_RECT* pLockedRect=(Luna< D3DLOCKED_RECT >::check(L,3));
		const RECT* pRect=(Luna< RECT >::check(L,4));
		unsigned long Flags=(unsigned long)lua_tonumber(L,5);

		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DTexture9::LockRect(unsigned int, D3DLOCKED_RECT *, const RECT *, unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->LockRect(Level, pLockedRect, pRect, Flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DTexture9::UnlockRect(unsigned int Level)
	static int _bind_UnlockRect(lua_State *L) {
		if (!_lg_typecheck_UnlockRect(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DTexture9::UnlockRect(unsigned int Level) function, expected prototype:\nlong IDirect3DTexture9::UnlockRect(unsigned int Level)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Level=(unsigned int)lua_tointeger(L,2);

		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DTexture9::UnlockRect(unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->UnlockRect(Level);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DTexture9::AddDirtyRect(const RECT * pDirtyRect)
	static int _bind_AddDirtyRect(lua_State *L) {
		if (!_lg_typecheck_AddDirtyRect(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DTexture9::AddDirtyRect(const RECT * pDirtyRect) function, expected prototype:\nlong IDirect3DTexture9::AddDirtyRect(const RECT * pDirtyRect)\nClass arguments details:\narg 1 ID = 2511332\n\n%s",luna_dumpStack(L).c_str());
		}

		const RECT* pDirtyRect=(Luna< RECT >::check(L,2));

		IDirect3DTexture9* self=(Luna< IDirect3DTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DTexture9::AddDirtyRect(const RECT *). Got : '%s'\n%s",typeid(Luna< IDirect3DTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->AddDirtyRect(pDirtyRect);
		lua_pushnumber(L,lret);

		return 1;
	}

	// IDirect3DSurface9 * IDirect3DTexture9::getSurface(IDirect3DTexture9 * texture, unsigned int level = 0)
	static int _bind_getSurface(lua_State *L) {
		if (!_lg_typecheck_getSurface(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DSurface9 * IDirect3DTexture9::getSurface(IDirect3DTexture9 * texture, unsigned int level = 0) function, expected prototype:\nIDirect3DSurface9 * IDirect3DTexture9::getSurface(IDirect3DTexture9 * texture, unsigned int level = 0)\nClass arguments details:\narg 1 ID = 49931509\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		IDirect3DTexture9* texture=(Luna< IDirect3DTexture9 >::check(L,1));
		unsigned int level=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		IDirect3DSurface9 * lret = getSurface(texture, level);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DSurface9 >::push(L,lret,false);

		return 1;
	}

	// IDirect3DBaseTexture9 * IDirect3DTexture9::asBaseTexture(IDirect3DTexture9 * tex)
	static int _bind_asBaseTexture(lua_State *L) {
		if (!_lg_typecheck_asBaseTexture(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DBaseTexture9 * IDirect3DTexture9::asBaseTexture(IDirect3DTexture9 * tex) function, expected prototype:\nIDirect3DBaseTexture9 * IDirect3DTexture9::asBaseTexture(IDirect3DTexture9 * tex)\nClass arguments details:\narg 1 ID = 49931509\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DTexture9* tex=(Luna< IDirect3DTexture9 >::check(L,1));

		IDirect3DBaseTexture9 * lret = asBaseTexture(tex);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DBaseTexture9 >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

IDirect3DTexture9* LunaTraits< IDirect3DTexture9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< IDirect3DTexture9 >::_bind_dtor(IDirect3DTexture9* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< IDirect3DTexture9 >::className[] = "IDirect3DTexture9";
const char LunaTraits< IDirect3DTexture9 >::fullName[] = "IDirect3DTexture9";
const char LunaTraits< IDirect3DTexture9 >::moduleName[] = "dx9";
const char* LunaTraits< IDirect3DTexture9 >::parents[] = {0};
const int LunaTraits< IDirect3DTexture9 >::hash = 49931509;
const int LunaTraits< IDirect3DTexture9 >::uniqueIDs[] = {49931509,0};

luna_RegType LunaTraits< IDirect3DTexture9 >::methods[] = {
	{"AddRef", &luna_wrapper_IDirect3DTexture9::_bind_AddRef},
	{"Release", &luna_wrapper_IDirect3DTexture9::_bind_Release},
	{"SetPriority", &luna_wrapper_IDirect3DTexture9::_bind_SetPriority},
	{"GetPriority", &luna_wrapper_IDirect3DTexture9::_bind_GetPriority},
	{"PreLoad", &luna_wrapper_IDirect3DTexture9::_bind_PreLoad},
	{"GetType", &luna_wrapper_IDirect3DTexture9::_bind_GetType},
	{"SetLOD", &luna_wrapper_IDirect3DTexture9::_bind_SetLOD},
	{"GetLOD", &luna_wrapper_IDirect3DTexture9::_bind_GetLOD},
	{"GetLevelCount", &luna_wrapper_IDirect3DTexture9::_bind_GetLevelCount},
	{"SetAutoGenFilterType", &luna_wrapper_IDirect3DTexture9::_bind_SetAutoGenFilterType},
	{"GetAutoGenFilterType", &luna_wrapper_IDirect3DTexture9::_bind_GetAutoGenFilterType},
	{"GenerateMipSubLevels", &luna_wrapper_IDirect3DTexture9::_bind_GenerateMipSubLevels},
	{"GetLevelDesc", &luna_wrapper_IDirect3DTexture9::_bind_GetLevelDesc},
	{"LockRect", &luna_wrapper_IDirect3DTexture9::_bind_LockRect},
	{"UnlockRect", &luna_wrapper_IDirect3DTexture9::_bind_UnlockRect},
	{"AddDirtyRect", &luna_wrapper_IDirect3DTexture9::_bind_AddDirtyRect},
	{"getSurface", &luna_wrapper_IDirect3DTexture9::_bind_getSurface},
	{"asBaseTexture", &luna_wrapper_IDirect3DTexture9::_bind_asBaseTexture},
	{"dynCast", &luna_wrapper_IDirect3DTexture9::_bind_dynCast},
	{"__eq", &luna_wrapper_IDirect3DTexture9::_bind___eq},
	{"fromVoid", &luna_wrapper_IDirect3DTexture9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDirect3DTexture9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< IDirect3DTexture9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDirect3DTexture9 >::enumValues[] = {
	{0,0}
};


