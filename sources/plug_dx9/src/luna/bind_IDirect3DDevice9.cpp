#include <plug_common.h>

class luna_wrapper_IDirect3DDevice9 {
public:
	typedef Luna< IDirect3DDevice9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44522754) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IDirect3DDevice9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* rhs =(Luna< IDirect3DDevice9 >::check(L,2));
		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
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

		IDirect3DDevice9* self= (IDirect3DDevice9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDirect3DDevice9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44522754) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IDirect3DDevice9 >::check(L,1));
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

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IDirect3DDevice9");
		
		return luna_dynamicCast(L,converters,"IDirect3DDevice9",name);
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

	inline static bool _lg_typecheck_TestCooperativeLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAvailableTextureMem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EvictManagedResources(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDeviceCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,31005348)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDisplayMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,90649279)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCreationParameters(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,29271768)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCursorProperties(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,52064030)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCursorPosition(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNumberOfSwapChains(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Reset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19068793)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRasterStatus(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,29207024)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDialogBoxMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateSurface(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,52064030)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,2511332)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,52064030)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,76307824)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateTexture(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,63045621)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,63045621)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRenderTargetData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,52064030)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,52064030)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFrontBufferData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,52064030)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_StretchRect(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,52064030)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,2511332)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,52064030)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,2511332)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ColorFill(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,52064030)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,2511332)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRenderTarget(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,52064030)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDepthStencilSurface(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,52064030)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BeginScene(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EndScene(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,75644032)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,47575977)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,47575977)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MultiplyTransform(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,47575977)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetViewport(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92207800)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetViewport(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92207800)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaterial(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71539139)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMaterial(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,71539139)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25938411)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,25938411)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LightEnable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLightEnable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClipPlane(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClipPlane(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRenderState(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetRenderState(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_BeginStateBlock(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetClipStatus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,69300229)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClipStatus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,69300229)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTexture(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,63045621)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextureStageState(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextureStageState(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSamplerState(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSamplerState(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ValidateDevice(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCurrentTexturePalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCurrentTexturePalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetScissorRect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,2511332)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetScissorRect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,2511332)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSoftwareVertexProcessing(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSoftwareVertexProcessing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetNPatchMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNPatchMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DrawPrimitive(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawIndexedPrimitive(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawPrimitiveUP(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawIndexedPrimitiveUP(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( (lua_isnil(L,8)==0 && !Luna<void>::has_uniqueid(L,8,3625364)) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessVertices(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,13561783)) ) return false;
		if( (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,46969080)) ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVertexDeclaration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,46969080)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFVF(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFVF(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVertexShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,24265100)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVertexShaderConstantF(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVertexShaderConstantF(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVertexShaderConstantI(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVertexShaderConstantI(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVertexShaderConstantB(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetVertexShaderConstantB(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStreamSource(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,13561783)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStreamSourceFreq(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStreamSourceFreq(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIndices(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,12769028)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPixelShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,47178687)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPixelShaderConstantF(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPixelShaderConstantF(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPixelShaderConstantI(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPixelShaderConstantI(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPixelShaderConstantB(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPixelShaderConstantB(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawRectPatch(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,68363046)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DrawTriPatch(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,38308937)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeletePatch(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compileShaderFromFile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_compileShaderFromMemory(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createVertexShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,41307641)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createPixelShader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,41307641)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createVec3Declaration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createVec4Declaration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createVertexBuffer_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createVertexBuffer_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Vec4Array >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createTextureFromFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createTextureFromMemory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createTexture(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createNoiseTexture(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createDepthSurface(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateTexture(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,49931509)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,49931509)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createFont(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		if( lua_type(L,6)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createSprite(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDefaultState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniform_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniform_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniform_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303235) ) return false;
		if( (!(Luna< osg::Vec4f >::check(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniform_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303233) ) return false;
		if( (!(Luna< osg::Vec4d >::check(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniform_overload_5(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303173) ) return false;
		if( (!(Luna< osg::Vec2f >::check(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniform_overload_6(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303171) ) return false;
		if( (!(Luna< osg::Vec2d >::check(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniform_overload_7(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303204) ) return false;
		if( (!(Luna< osg::Vec3f >::check(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniform_overload_8(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,92303202) ) return false;
		if( (!(Luna< osg::Vec3d >::check(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniform_overload_9(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903840) ) return false;
		if( (!(Luna< osg::Matrixf >::check(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUniform_overload_10(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned long IDirect3DDevice9::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DDevice9::AddRef() function, expected prototype:\nunsigned long IDirect3DDevice9::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DDevice9::AddRef(). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3DDevice9::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DDevice9::Release() function, expected prototype:\nunsigned long IDirect3DDevice9::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DDevice9::Release(). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::TestCooperativeLevel()
	static int _bind_TestCooperativeLevel(lua_State *L) {
		if (!_lg_typecheck_TestCooperativeLevel(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::TestCooperativeLevel() function, expected prototype:\nlong IDirect3DDevice9::TestCooperativeLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::TestCooperativeLevel(). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->TestCooperativeLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int IDirect3DDevice9::GetAvailableTextureMem()
	static int _bind_GetAvailableTextureMem(lua_State *L) {
		if (!_lg_typecheck_GetAvailableTextureMem(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int IDirect3DDevice9::GetAvailableTextureMem() function, expected prototype:\nunsigned int IDirect3DDevice9::GetAvailableTextureMem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int IDirect3DDevice9::GetAvailableTextureMem(). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetAvailableTextureMem();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::EvictManagedResources()
	static int _bind_EvictManagedResources(lua_State *L) {
		if (!_lg_typecheck_EvictManagedResources(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::EvictManagedResources() function, expected prototype:\nlong IDirect3DDevice9::EvictManagedResources()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::EvictManagedResources(). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->EvictManagedResources();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetDeviceCaps(D3DCAPS9 * pCaps)
	static int _bind_GetDeviceCaps(lua_State *L) {
		if (!_lg_typecheck_GetDeviceCaps(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetDeviceCaps(D3DCAPS9 * pCaps) function, expected prototype:\nlong IDirect3DDevice9::GetDeviceCaps(D3DCAPS9 * pCaps)\nClass arguments details:\narg 1 ID = 31005348\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DCAPS9* pCaps=(Luna< D3DCAPS9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetDeviceCaps(D3DCAPS9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetDeviceCaps(pCaps);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetDisplayMode(unsigned int iSwapChain, D3DDISPLAYMODE * pMode)
	static int _bind_GetDisplayMode(lua_State *L) {
		if (!_lg_typecheck_GetDisplayMode(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetDisplayMode(unsigned int iSwapChain, D3DDISPLAYMODE * pMode) function, expected prototype:\nlong IDirect3DDevice9::GetDisplayMode(unsigned int iSwapChain, D3DDISPLAYMODE * pMode)\nClass arguments details:\narg 2 ID = 90649279\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int iSwapChain=(unsigned int)lua_tointeger(L,2);
		D3DDISPLAYMODE* pMode=(Luna< D3DDISPLAYMODE >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetDisplayMode(unsigned int, D3DDISPLAYMODE *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetDisplayMode(iSwapChain, pMode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetCreationParameters(D3DDEVICE_CREATION_PARAMETERS * pParameters)
	static int _bind_GetCreationParameters(lua_State *L) {
		if (!_lg_typecheck_GetCreationParameters(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetCreationParameters(D3DDEVICE_CREATION_PARAMETERS * pParameters) function, expected prototype:\nlong IDirect3DDevice9::GetCreationParameters(D3DDEVICE_CREATION_PARAMETERS * pParameters)\nClass arguments details:\narg 1 ID = 29271768\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DDEVICE_CREATION_PARAMETERS* pParameters=(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetCreationParameters(D3DDEVICE_CREATION_PARAMETERS *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetCreationParameters(pParameters);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetCursorProperties(unsigned int XHotSpot, unsigned int YHotSpot, IDirect3DSurface9 * pCursorBitmap)
	static int _bind_SetCursorProperties(lua_State *L) {
		if (!_lg_typecheck_SetCursorProperties(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetCursorProperties(unsigned int XHotSpot, unsigned int YHotSpot, IDirect3DSurface9 * pCursorBitmap) function, expected prototype:\nlong IDirect3DDevice9::SetCursorProperties(unsigned int XHotSpot, unsigned int YHotSpot, IDirect3DSurface9 * pCursorBitmap)\nClass arguments details:\narg 3 ID = 52064030\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int XHotSpot=(unsigned int)lua_tointeger(L,2);
		unsigned int YHotSpot=(unsigned int)lua_tointeger(L,3);
		IDirect3DSurface9* pCursorBitmap=(Luna< IDirect3DSurface9 >::check(L,4));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetCursorProperties(unsigned int, unsigned int, IDirect3DSurface9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetCursorProperties(XHotSpot, YHotSpot, pCursorBitmap);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void IDirect3DDevice9::SetCursorPosition(int X, int Y, unsigned long Flags)
	static int _bind_SetCursorPosition(lua_State *L) {
		if (!_lg_typecheck_SetCursorPosition(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::SetCursorPosition(int X, int Y, unsigned long Flags) function, expected prototype:\nvoid IDirect3DDevice9::SetCursorPosition(int X, int Y, unsigned long Flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int X=(int)lua_tointeger(L,2);
		int Y=(int)lua_tointeger(L,3);
		unsigned long Flags=(unsigned long)lua_tonumber(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IDirect3DDevice9::SetCursorPosition(int, int, unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCursorPosition(X, Y, Flags);

		return 0;
	}

	// int IDirect3DDevice9::ShowCursor(int bShow)
	static int _bind_ShowCursor(lua_State *L) {
		if (!_lg_typecheck_ShowCursor(L)) {
			luaL_error(L, "luna typecheck failed in int IDirect3DDevice9::ShowCursor(int bShow) function, expected prototype:\nint IDirect3DDevice9::ShowCursor(int bShow)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int bShow=(int)lua_tointeger(L,2);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int IDirect3DDevice9::ShowCursor(int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ShowCursor(bShow);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int IDirect3DDevice9::GetNumberOfSwapChains()
	static int _bind_GetNumberOfSwapChains(lua_State *L) {
		if (!_lg_typecheck_GetNumberOfSwapChains(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int IDirect3DDevice9::GetNumberOfSwapChains() function, expected prototype:\nunsigned int IDirect3DDevice9::GetNumberOfSwapChains()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int IDirect3DDevice9::GetNumberOfSwapChains(). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetNumberOfSwapChains();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::Reset(D3DPRESENT_PARAMETERS * pPresentationParameters)
	static int _bind_Reset(lua_State *L) {
		if (!_lg_typecheck_Reset(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::Reset(D3DPRESENT_PARAMETERS * pPresentationParameters) function, expected prototype:\nlong IDirect3DDevice9::Reset(D3DPRESENT_PARAMETERS * pPresentationParameters)\nClass arguments details:\narg 1 ID = 19068793\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DPRESENT_PARAMETERS* pPresentationParameters=(Luna< D3DPRESENT_PARAMETERS >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::Reset(D3DPRESENT_PARAMETERS *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->Reset(pPresentationParameters);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetRasterStatus(unsigned int iSwapChain, D3DRASTER_STATUS * pRasterStatus)
	static int _bind_GetRasterStatus(lua_State *L) {
		if (!_lg_typecheck_GetRasterStatus(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetRasterStatus(unsigned int iSwapChain, D3DRASTER_STATUS * pRasterStatus) function, expected prototype:\nlong IDirect3DDevice9::GetRasterStatus(unsigned int iSwapChain, D3DRASTER_STATUS * pRasterStatus)\nClass arguments details:\narg 2 ID = 29207024\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int iSwapChain=(unsigned int)lua_tointeger(L,2);
		D3DRASTER_STATUS* pRasterStatus=(Luna< D3DRASTER_STATUS >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetRasterStatus(unsigned int, D3DRASTER_STATUS *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetRasterStatus(iSwapChain, pRasterStatus);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetDialogBoxMode(int bEnableDialogs)
	static int _bind_SetDialogBoxMode(lua_State *L) {
		if (!_lg_typecheck_SetDialogBoxMode(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetDialogBoxMode(int bEnableDialogs) function, expected prototype:\nlong IDirect3DDevice9::SetDialogBoxMode(int bEnableDialogs)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int bEnableDialogs=(int)lua_tointeger(L,2);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetDialogBoxMode(int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetDialogBoxMode(bEnableDialogs);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::UpdateSurface(IDirect3DSurface9 * pSourceSurface, const RECT * pSourceRect, IDirect3DSurface9 * pDestinationSurface, const POINT * pDestPoint)
	static int _bind_UpdateSurface(lua_State *L) {
		if (!_lg_typecheck_UpdateSurface(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::UpdateSurface(IDirect3DSurface9 * pSourceSurface, const RECT * pSourceRect, IDirect3DSurface9 * pDestinationSurface, const POINT * pDestPoint) function, expected prototype:\nlong IDirect3DDevice9::UpdateSurface(IDirect3DSurface9 * pSourceSurface, const RECT * pSourceRect, IDirect3DSurface9 * pDestinationSurface, const POINT * pDestPoint)\nClass arguments details:\narg 1 ID = 52064030\narg 2 ID = 2511332\narg 3 ID = 52064030\narg 4 ID = 76307824\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DSurface9* pSourceSurface=(Luna< IDirect3DSurface9 >::check(L,2));
		const RECT* pSourceRect=(Luna< RECT >::check(L,3));
		IDirect3DSurface9* pDestinationSurface=(Luna< IDirect3DSurface9 >::check(L,4));
		const POINT* pDestPoint=(Luna< POINT >::check(L,5));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::UpdateSurface(IDirect3DSurface9 *, const RECT *, IDirect3DSurface9 *, const POINT *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->UpdateSurface(pSourceSurface, pSourceRect, pDestinationSurface, pDestPoint);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::UpdateTexture(IDirect3DBaseTexture9 * pSourceTexture, IDirect3DBaseTexture9 * pDestinationTexture)
	static int _bind_UpdateTexture(lua_State *L) {
		if (!_lg_typecheck_UpdateTexture(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::UpdateTexture(IDirect3DBaseTexture9 * pSourceTexture, IDirect3DBaseTexture9 * pDestinationTexture) function, expected prototype:\nlong IDirect3DDevice9::UpdateTexture(IDirect3DBaseTexture9 * pSourceTexture, IDirect3DBaseTexture9 * pDestinationTexture)\nClass arguments details:\narg 1 ID = 63045621\narg 2 ID = 63045621\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DBaseTexture9* pSourceTexture=(Luna< IDirect3DBaseTexture9 >::check(L,2));
		IDirect3DBaseTexture9* pDestinationTexture=(Luna< IDirect3DBaseTexture9 >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::UpdateTexture(IDirect3DBaseTexture9 *, IDirect3DBaseTexture9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->UpdateTexture(pSourceTexture, pDestinationTexture);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetRenderTargetData(IDirect3DSurface9 * pRenderTarget, IDirect3DSurface9 * pDestSurface)
	static int _bind_GetRenderTargetData(lua_State *L) {
		if (!_lg_typecheck_GetRenderTargetData(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetRenderTargetData(IDirect3DSurface9 * pRenderTarget, IDirect3DSurface9 * pDestSurface) function, expected prototype:\nlong IDirect3DDevice9::GetRenderTargetData(IDirect3DSurface9 * pRenderTarget, IDirect3DSurface9 * pDestSurface)\nClass arguments details:\narg 1 ID = 52064030\narg 2 ID = 52064030\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DSurface9* pRenderTarget=(Luna< IDirect3DSurface9 >::check(L,2));
		IDirect3DSurface9* pDestSurface=(Luna< IDirect3DSurface9 >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetRenderTargetData(IDirect3DSurface9 *, IDirect3DSurface9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetRenderTargetData(pRenderTarget, pDestSurface);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetFrontBufferData(unsigned int iSwapChain, IDirect3DSurface9 * pDestSurface)
	static int _bind_GetFrontBufferData(lua_State *L) {
		if (!_lg_typecheck_GetFrontBufferData(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetFrontBufferData(unsigned int iSwapChain, IDirect3DSurface9 * pDestSurface) function, expected prototype:\nlong IDirect3DDevice9::GetFrontBufferData(unsigned int iSwapChain, IDirect3DSurface9 * pDestSurface)\nClass arguments details:\narg 2 ID = 52064030\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int iSwapChain=(unsigned int)lua_tointeger(L,2);
		IDirect3DSurface9* pDestSurface=(Luna< IDirect3DSurface9 >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetFrontBufferData(unsigned int, IDirect3DSurface9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetFrontBufferData(iSwapChain, pDestSurface);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::StretchRect(IDirect3DSurface9 * pSourceSurface, const RECT * pSourceRect, IDirect3DSurface9 * pDestSurface, const RECT * pDestRect, D3DTEXTUREFILTERTYPE Filter)
	static int _bind_StretchRect(lua_State *L) {
		if (!_lg_typecheck_StretchRect(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::StretchRect(IDirect3DSurface9 * pSourceSurface, const RECT * pSourceRect, IDirect3DSurface9 * pDestSurface, const RECT * pDestRect, D3DTEXTUREFILTERTYPE Filter) function, expected prototype:\nlong IDirect3DDevice9::StretchRect(IDirect3DSurface9 * pSourceSurface, const RECT * pSourceRect, IDirect3DSurface9 * pDestSurface, const RECT * pDestRect, D3DTEXTUREFILTERTYPE Filter)\nClass arguments details:\narg 1 ID = 52064030\narg 2 ID = 2511332\narg 3 ID = 52064030\narg 4 ID = 2511332\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DSurface9* pSourceSurface=(Luna< IDirect3DSurface9 >::check(L,2));
		const RECT* pSourceRect=(Luna< RECT >::check(L,3));
		IDirect3DSurface9* pDestSurface=(Luna< IDirect3DSurface9 >::check(L,4));
		const RECT* pDestRect=(Luna< RECT >::check(L,5));
		D3DTEXTUREFILTERTYPE Filter=(D3DTEXTUREFILTERTYPE)lua_tointeger(L,6);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::StretchRect(IDirect3DSurface9 *, const RECT *, IDirect3DSurface9 *, const RECT *, D3DTEXTUREFILTERTYPE). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->StretchRect(pSourceSurface, pSourceRect, pDestSurface, pDestRect, Filter);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::ColorFill(IDirect3DSurface9 * pSurface, const RECT * pRect, unsigned long color)
	static int _bind_ColorFill(lua_State *L) {
		if (!_lg_typecheck_ColorFill(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::ColorFill(IDirect3DSurface9 * pSurface, const RECT * pRect, unsigned long color) function, expected prototype:\nlong IDirect3DDevice9::ColorFill(IDirect3DSurface9 * pSurface, const RECT * pRect, unsigned long color)\nClass arguments details:\narg 1 ID = 52064030\narg 2 ID = 2511332\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DSurface9* pSurface=(Luna< IDirect3DSurface9 >::check(L,2));
		const RECT* pRect=(Luna< RECT >::check(L,3));
		unsigned long color=(unsigned long)lua_tonumber(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::ColorFill(IDirect3DSurface9 *, const RECT *, unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->ColorFill(pSurface, pRect, color);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetRenderTarget(unsigned long RenderTargetIndex, IDirect3DSurface9 * pRenderTarget)
	static int _bind_SetRenderTarget(lua_State *L) {
		if (!_lg_typecheck_SetRenderTarget(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetRenderTarget(unsigned long RenderTargetIndex, IDirect3DSurface9 * pRenderTarget) function, expected prototype:\nlong IDirect3DDevice9::SetRenderTarget(unsigned long RenderTargetIndex, IDirect3DSurface9 * pRenderTarget)\nClass arguments details:\narg 2 ID = 52064030\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long RenderTargetIndex=(unsigned long)lua_tonumber(L,2);
		IDirect3DSurface9* pRenderTarget=(Luna< IDirect3DSurface9 >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetRenderTarget(unsigned long, IDirect3DSurface9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetRenderTarget(RenderTargetIndex, pRenderTarget);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetDepthStencilSurface(IDirect3DSurface9 * pNewZStencil)
	static int _bind_SetDepthStencilSurface(lua_State *L) {
		if (!_lg_typecheck_SetDepthStencilSurface(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetDepthStencilSurface(IDirect3DSurface9 * pNewZStencil) function, expected prototype:\nlong IDirect3DDevice9::SetDepthStencilSurface(IDirect3DSurface9 * pNewZStencil)\nClass arguments details:\narg 1 ID = 52064030\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DSurface9* pNewZStencil=(Luna< IDirect3DSurface9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetDepthStencilSurface(IDirect3DSurface9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetDepthStencilSurface(pNewZStencil);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::BeginScene()
	static int _bind_BeginScene(lua_State *L) {
		if (!_lg_typecheck_BeginScene(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::BeginScene() function, expected prototype:\nlong IDirect3DDevice9::BeginScene()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::BeginScene(). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->BeginScene();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::EndScene()
	static int _bind_EndScene(lua_State *L) {
		if (!_lg_typecheck_EndScene(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::EndScene() function, expected prototype:\nlong IDirect3DDevice9::EndScene()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::EndScene(). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->EndScene();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::Clear(unsigned long Count, const D3DRECT * pRects, unsigned long Flags, unsigned long Color, float Z, unsigned long Stencil)
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::Clear(unsigned long Count, const D3DRECT * pRects, unsigned long Flags, unsigned long Color, float Z, unsigned long Stencil) function, expected prototype:\nlong IDirect3DDevice9::Clear(unsigned long Count, const D3DRECT * pRects, unsigned long Flags, unsigned long Color, float Z, unsigned long Stencil)\nClass arguments details:\narg 2 ID = 75644032\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Count=(unsigned long)lua_tonumber(L,2);
		const D3DRECT* pRects=(Luna< D3DRECT >::check(L,3));
		unsigned long Flags=(unsigned long)lua_tonumber(L,4);
		unsigned long Color=(unsigned long)lua_tonumber(L,5);
		float Z=(float)lua_tonumber(L,6);
		unsigned long Stencil=(unsigned long)lua_tonumber(L,7);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::Clear(unsigned long, const D3DRECT *, unsigned long, unsigned long, float, unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->Clear(Count, pRects, Flags, Color, Z, Stencil);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetTransform(D3DTRANSFORMSTATETYPE State, const D3DMATRIX * pMatrix)
	static int _bind_SetTransform(lua_State *L) {
		if (!_lg_typecheck_SetTransform(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetTransform(D3DTRANSFORMSTATETYPE State, const D3DMATRIX * pMatrix) function, expected prototype:\nlong IDirect3DDevice9::SetTransform(D3DTRANSFORMSTATETYPE State, const D3DMATRIX * pMatrix)\nClass arguments details:\narg 2 ID = 47575977\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DTRANSFORMSTATETYPE State=(D3DTRANSFORMSTATETYPE)lua_tointeger(L,2);
		const D3DMATRIX* pMatrix=(Luna< D3DMATRIX >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetTransform(D3DTRANSFORMSTATETYPE, const D3DMATRIX *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetTransform(State, pMatrix);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX * pMatrix)
	static int _bind_GetTransform(lua_State *L) {
		if (!_lg_typecheck_GetTransform(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX * pMatrix) function, expected prototype:\nlong IDirect3DDevice9::GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX * pMatrix)\nClass arguments details:\narg 2 ID = 47575977\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DTRANSFORMSTATETYPE State=(D3DTRANSFORMSTATETYPE)lua_tointeger(L,2);
		D3DMATRIX* pMatrix=(Luna< D3DMATRIX >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetTransform(D3DTRANSFORMSTATETYPE, D3DMATRIX *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetTransform(State, pMatrix);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::MultiplyTransform(D3DTRANSFORMSTATETYPE arg1, const D3DMATRIX * arg2)
	static int _bind_MultiplyTransform(lua_State *L) {
		if (!_lg_typecheck_MultiplyTransform(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::MultiplyTransform(D3DTRANSFORMSTATETYPE arg1, const D3DMATRIX * arg2) function, expected prototype:\nlong IDirect3DDevice9::MultiplyTransform(D3DTRANSFORMSTATETYPE arg1, const D3DMATRIX * arg2)\nClass arguments details:\narg 2 ID = 47575977\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DTRANSFORMSTATETYPE _arg1=(D3DTRANSFORMSTATETYPE)lua_tointeger(L,2);
		const D3DMATRIX* _arg2=(Luna< D3DMATRIX >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::MultiplyTransform(D3DTRANSFORMSTATETYPE, const D3DMATRIX *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->MultiplyTransform(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetViewport(const D3DVIEWPORT9 * pViewport)
	static int _bind_SetViewport(lua_State *L) {
		if (!_lg_typecheck_SetViewport(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetViewport(const D3DVIEWPORT9 * pViewport) function, expected prototype:\nlong IDirect3DDevice9::SetViewport(const D3DVIEWPORT9 * pViewport)\nClass arguments details:\narg 1 ID = 92207800\n\n%s",luna_dumpStack(L).c_str());
		}

		const D3DVIEWPORT9* pViewport=(Luna< D3DVIEWPORT9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetViewport(const D3DVIEWPORT9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetViewport(pViewport);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetViewport(D3DVIEWPORT9 * pViewport)
	static int _bind_GetViewport(lua_State *L) {
		if (!_lg_typecheck_GetViewport(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetViewport(D3DVIEWPORT9 * pViewport) function, expected prototype:\nlong IDirect3DDevice9::GetViewport(D3DVIEWPORT9 * pViewport)\nClass arguments details:\narg 1 ID = 92207800\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DVIEWPORT9* pViewport=(Luna< D3DVIEWPORT9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetViewport(D3DVIEWPORT9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetViewport(pViewport);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetMaterial(const D3DMATERIAL9 * pMaterial)
	static int _bind_SetMaterial(lua_State *L) {
		if (!_lg_typecheck_SetMaterial(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetMaterial(const D3DMATERIAL9 * pMaterial) function, expected prototype:\nlong IDirect3DDevice9::SetMaterial(const D3DMATERIAL9 * pMaterial)\nClass arguments details:\narg 1 ID = 71539139\n\n%s",luna_dumpStack(L).c_str());
		}

		const D3DMATERIAL9* pMaterial=(Luna< D3DMATERIAL9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetMaterial(const D3DMATERIAL9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetMaterial(pMaterial);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetMaterial(D3DMATERIAL9 * pMaterial)
	static int _bind_GetMaterial(lua_State *L) {
		if (!_lg_typecheck_GetMaterial(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetMaterial(D3DMATERIAL9 * pMaterial) function, expected prototype:\nlong IDirect3DDevice9::GetMaterial(D3DMATERIAL9 * pMaterial)\nClass arguments details:\narg 1 ID = 71539139\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DMATERIAL9* pMaterial=(Luna< D3DMATERIAL9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetMaterial(D3DMATERIAL9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetMaterial(pMaterial);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetLight(unsigned long Index, const D3DLIGHT9 * arg2)
	static int _bind_SetLight(lua_State *L) {
		if (!_lg_typecheck_SetLight(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetLight(unsigned long Index, const D3DLIGHT9 * arg2) function, expected prototype:\nlong IDirect3DDevice9::SetLight(unsigned long Index, const D3DLIGHT9 * arg2)\nClass arguments details:\narg 2 ID = 25938411\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Index=(unsigned long)lua_tonumber(L,2);
		const D3DLIGHT9* _arg2=(Luna< D3DLIGHT9 >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetLight(unsigned long, const D3DLIGHT9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetLight(Index, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetLight(unsigned long Index, D3DLIGHT9 * arg2)
	static int _bind_GetLight(lua_State *L) {
		if (!_lg_typecheck_GetLight(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetLight(unsigned long Index, D3DLIGHT9 * arg2) function, expected prototype:\nlong IDirect3DDevice9::GetLight(unsigned long Index, D3DLIGHT9 * arg2)\nClass arguments details:\narg 2 ID = 25938411\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Index=(unsigned long)lua_tonumber(L,2);
		D3DLIGHT9* _arg2=(Luna< D3DLIGHT9 >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetLight(unsigned long, D3DLIGHT9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetLight(Index, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::LightEnable(unsigned long Index, int Enable)
	static int _bind_LightEnable(lua_State *L) {
		if (!_lg_typecheck_LightEnable(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::LightEnable(unsigned long Index, int Enable) function, expected prototype:\nlong IDirect3DDevice9::LightEnable(unsigned long Index, int Enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Index=(unsigned long)lua_tonumber(L,2);
		int Enable=(int)lua_tointeger(L,3);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::LightEnable(unsigned long, int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->LightEnable(Index, Enable);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetLightEnable(unsigned long Index, int * pEnable)
	static int _bind_GetLightEnable(lua_State *L) {
		if (!_lg_typecheck_GetLightEnable(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetLightEnable(unsigned long Index, int * pEnable) function, expected prototype:\nlong IDirect3DDevice9::GetLightEnable(unsigned long Index, int * pEnable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Index=(unsigned long)lua_tonumber(L,2);
		int* pEnable=(int*)Luna< void >::check(L,3);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetLightEnable(unsigned long, int *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetLightEnable(Index, pEnable);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetClipPlane(unsigned long Index, const float * pPlane)
	static int _bind_SetClipPlane(lua_State *L) {
		if (!_lg_typecheck_SetClipPlane(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetClipPlane(unsigned long Index, const float * pPlane) function, expected prototype:\nlong IDirect3DDevice9::SetClipPlane(unsigned long Index, const float * pPlane)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Index=(unsigned long)lua_tonumber(L,2);
		const float* pPlane=(const float*)Luna< void >::check(L,3);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetClipPlane(unsigned long, const float *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetClipPlane(Index, pPlane);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetClipPlane(unsigned long Index, float * pPlane)
	static int _bind_GetClipPlane(lua_State *L) {
		if (!_lg_typecheck_GetClipPlane(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetClipPlane(unsigned long Index, float * pPlane) function, expected prototype:\nlong IDirect3DDevice9::GetClipPlane(unsigned long Index, float * pPlane)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Index=(unsigned long)lua_tonumber(L,2);
		float* pPlane=(float*)Luna< void >::check(L,3);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetClipPlane(unsigned long, float *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetClipPlane(Index, pPlane);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetRenderState(D3DRENDERSTATETYPE State, unsigned long Value)
	static int _bind_SetRenderState(lua_State *L) {
		if (!_lg_typecheck_SetRenderState(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetRenderState(D3DRENDERSTATETYPE State, unsigned long Value) function, expected prototype:\nlong IDirect3DDevice9::SetRenderState(D3DRENDERSTATETYPE State, unsigned long Value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DRENDERSTATETYPE State=(D3DRENDERSTATETYPE)lua_tointeger(L,2);
		unsigned long Value=(unsigned long)lua_tonumber(L,3);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetRenderState(D3DRENDERSTATETYPE, unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetRenderState(State, Value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetRenderState(D3DRENDERSTATETYPE State, unsigned long * pValue)
	static int _bind_GetRenderState(lua_State *L) {
		if (!_lg_typecheck_GetRenderState(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetRenderState(D3DRENDERSTATETYPE State, unsigned long * pValue) function, expected prototype:\nlong IDirect3DDevice9::GetRenderState(D3DRENDERSTATETYPE State, unsigned long * pValue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DRENDERSTATETYPE State=(D3DRENDERSTATETYPE)lua_tointeger(L,2);
		unsigned long* pValue=(unsigned long*)Luna< void >::check(L,3);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetRenderState(D3DRENDERSTATETYPE, unsigned long *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetRenderState(State, pValue);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::BeginStateBlock()
	static int _bind_BeginStateBlock(lua_State *L) {
		if (!_lg_typecheck_BeginStateBlock(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::BeginStateBlock() function, expected prototype:\nlong IDirect3DDevice9::BeginStateBlock()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::BeginStateBlock(). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->BeginStateBlock();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetClipStatus(const D3DCLIPSTATUS9 * pClipStatus)
	static int _bind_SetClipStatus(lua_State *L) {
		if (!_lg_typecheck_SetClipStatus(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetClipStatus(const D3DCLIPSTATUS9 * pClipStatus) function, expected prototype:\nlong IDirect3DDevice9::SetClipStatus(const D3DCLIPSTATUS9 * pClipStatus)\nClass arguments details:\narg 1 ID = 69300229\n\n%s",luna_dumpStack(L).c_str());
		}

		const D3DCLIPSTATUS9* pClipStatus=(Luna< D3DCLIPSTATUS9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetClipStatus(const D3DCLIPSTATUS9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetClipStatus(pClipStatus);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetClipStatus(D3DCLIPSTATUS9 * pClipStatus)
	static int _bind_GetClipStatus(lua_State *L) {
		if (!_lg_typecheck_GetClipStatus(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetClipStatus(D3DCLIPSTATUS9 * pClipStatus) function, expected prototype:\nlong IDirect3DDevice9::GetClipStatus(D3DCLIPSTATUS9 * pClipStatus)\nClass arguments details:\narg 1 ID = 69300229\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DCLIPSTATUS9* pClipStatus=(Luna< D3DCLIPSTATUS9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetClipStatus(D3DCLIPSTATUS9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetClipStatus(pClipStatus);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetTexture(unsigned long Stage, IDirect3DBaseTexture9 * pTexture)
	static int _bind_SetTexture(lua_State *L) {
		if (!_lg_typecheck_SetTexture(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetTexture(unsigned long Stage, IDirect3DBaseTexture9 * pTexture) function, expected prototype:\nlong IDirect3DDevice9::SetTexture(unsigned long Stage, IDirect3DBaseTexture9 * pTexture)\nClass arguments details:\narg 2 ID = 63045621\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Stage=(unsigned long)lua_tonumber(L,2);
		IDirect3DBaseTexture9* pTexture=(Luna< IDirect3DBaseTexture9 >::check(L,3));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetTexture(unsigned long, IDirect3DBaseTexture9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetTexture(Stage, pTexture);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetTextureStageState(unsigned long Stage, D3DTEXTURESTAGESTATETYPE Type, unsigned long * pValue)
	static int _bind_GetTextureStageState(lua_State *L) {
		if (!_lg_typecheck_GetTextureStageState(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetTextureStageState(unsigned long Stage, D3DTEXTURESTAGESTATETYPE Type, unsigned long * pValue) function, expected prototype:\nlong IDirect3DDevice9::GetTextureStageState(unsigned long Stage, D3DTEXTURESTAGESTATETYPE Type, unsigned long * pValue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Stage=(unsigned long)lua_tonumber(L,2);
		D3DTEXTURESTAGESTATETYPE Type=(D3DTEXTURESTAGESTATETYPE)lua_tointeger(L,3);
		unsigned long* pValue=(unsigned long*)Luna< void >::check(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetTextureStageState(unsigned long, D3DTEXTURESTAGESTATETYPE, unsigned long *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetTextureStageState(Stage, Type, pValue);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetTextureStageState(unsigned long Stage, D3DTEXTURESTAGESTATETYPE Type, unsigned long Value)
	static int _bind_SetTextureStageState(lua_State *L) {
		if (!_lg_typecheck_SetTextureStageState(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetTextureStageState(unsigned long Stage, D3DTEXTURESTAGESTATETYPE Type, unsigned long Value) function, expected prototype:\nlong IDirect3DDevice9::SetTextureStageState(unsigned long Stage, D3DTEXTURESTAGESTATETYPE Type, unsigned long Value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Stage=(unsigned long)lua_tonumber(L,2);
		D3DTEXTURESTAGESTATETYPE Type=(D3DTEXTURESTAGESTATETYPE)lua_tointeger(L,3);
		unsigned long Value=(unsigned long)lua_tonumber(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetTextureStageState(unsigned long, D3DTEXTURESTAGESTATETYPE, unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetTextureStageState(Stage, Type, Value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetSamplerState(unsigned long Sampler, D3DSAMPLERSTATETYPE Type, unsigned long * pValue)
	static int _bind_GetSamplerState(lua_State *L) {
		if (!_lg_typecheck_GetSamplerState(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetSamplerState(unsigned long Sampler, D3DSAMPLERSTATETYPE Type, unsigned long * pValue) function, expected prototype:\nlong IDirect3DDevice9::GetSamplerState(unsigned long Sampler, D3DSAMPLERSTATETYPE Type, unsigned long * pValue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Sampler=(unsigned long)lua_tonumber(L,2);
		D3DSAMPLERSTATETYPE Type=(D3DSAMPLERSTATETYPE)lua_tointeger(L,3);
		unsigned long* pValue=(unsigned long*)Luna< void >::check(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetSamplerState(unsigned long, D3DSAMPLERSTATETYPE, unsigned long *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetSamplerState(Sampler, Type, pValue);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetSamplerState(unsigned long Sampler, D3DSAMPLERSTATETYPE Type, unsigned long Value)
	static int _bind_SetSamplerState(lua_State *L) {
		if (!_lg_typecheck_SetSamplerState(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetSamplerState(unsigned long Sampler, D3DSAMPLERSTATETYPE Type, unsigned long Value) function, expected prototype:\nlong IDirect3DDevice9::SetSamplerState(unsigned long Sampler, D3DSAMPLERSTATETYPE Type, unsigned long Value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long Sampler=(unsigned long)lua_tonumber(L,2);
		D3DSAMPLERSTATETYPE Type=(D3DSAMPLERSTATETYPE)lua_tointeger(L,3);
		unsigned long Value=(unsigned long)lua_tonumber(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetSamplerState(unsigned long, D3DSAMPLERSTATETYPE, unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetSamplerState(Sampler, Type, Value);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::ValidateDevice(unsigned long * pNumPasses)
	static int _bind_ValidateDevice(lua_State *L) {
		if (!_lg_typecheck_ValidateDevice(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::ValidateDevice(unsigned long * pNumPasses) function, expected prototype:\nlong IDirect3DDevice9::ValidateDevice(unsigned long * pNumPasses)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long* pNumPasses=(unsigned long*)Luna< void >::check(L,2);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::ValidateDevice(unsigned long *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->ValidateDevice(pNumPasses);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetCurrentTexturePalette(unsigned int PaletteNumber)
	static int _bind_SetCurrentTexturePalette(lua_State *L) {
		if (!_lg_typecheck_SetCurrentTexturePalette(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetCurrentTexturePalette(unsigned int PaletteNumber) function, expected prototype:\nlong IDirect3DDevice9::SetCurrentTexturePalette(unsigned int PaletteNumber)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int PaletteNumber=(unsigned int)lua_tointeger(L,2);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetCurrentTexturePalette(unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetCurrentTexturePalette(PaletteNumber);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetCurrentTexturePalette(unsigned int * PaletteNumber)
	static int _bind_GetCurrentTexturePalette(lua_State *L) {
		if (!_lg_typecheck_GetCurrentTexturePalette(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetCurrentTexturePalette(unsigned int * PaletteNumber) function, expected prototype:\nlong IDirect3DDevice9::GetCurrentTexturePalette(unsigned int * PaletteNumber)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int* PaletteNumber=(unsigned int*)Luna< void >::check(L,2);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetCurrentTexturePalette(unsigned int *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetCurrentTexturePalette(PaletteNumber);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetScissorRect(const RECT * pRect)
	static int _bind_SetScissorRect(lua_State *L) {
		if (!_lg_typecheck_SetScissorRect(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetScissorRect(const RECT * pRect) function, expected prototype:\nlong IDirect3DDevice9::SetScissorRect(const RECT * pRect)\nClass arguments details:\narg 1 ID = 2511332\n\n%s",luna_dumpStack(L).c_str());
		}

		const RECT* pRect=(Luna< RECT >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetScissorRect(const RECT *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetScissorRect(pRect);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetScissorRect(RECT * pRect)
	static int _bind_GetScissorRect(lua_State *L) {
		if (!_lg_typecheck_GetScissorRect(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetScissorRect(RECT * pRect) function, expected prototype:\nlong IDirect3DDevice9::GetScissorRect(RECT * pRect)\nClass arguments details:\narg 1 ID = 2511332\n\n%s",luna_dumpStack(L).c_str());
		}

		RECT* pRect=(Luna< RECT >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetScissorRect(RECT *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetScissorRect(pRect);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetSoftwareVertexProcessing(int bSoftware)
	static int _bind_SetSoftwareVertexProcessing(lua_State *L) {
		if (!_lg_typecheck_SetSoftwareVertexProcessing(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetSoftwareVertexProcessing(int bSoftware) function, expected prototype:\nlong IDirect3DDevice9::SetSoftwareVertexProcessing(int bSoftware)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int bSoftware=(int)lua_tointeger(L,2);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetSoftwareVertexProcessing(int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetSoftwareVertexProcessing(bSoftware);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int IDirect3DDevice9::GetSoftwareVertexProcessing()
	static int _bind_GetSoftwareVertexProcessing(lua_State *L) {
		if (!_lg_typecheck_GetSoftwareVertexProcessing(L)) {
			luaL_error(L, "luna typecheck failed in int IDirect3DDevice9::GetSoftwareVertexProcessing() function, expected prototype:\nint IDirect3DDevice9::GetSoftwareVertexProcessing()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int IDirect3DDevice9::GetSoftwareVertexProcessing(). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSoftwareVertexProcessing();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetNPatchMode(float nSegments)
	static int _bind_SetNPatchMode(lua_State *L) {
		if (!_lg_typecheck_SetNPatchMode(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetNPatchMode(float nSegments) function, expected prototype:\nlong IDirect3DDevice9::SetNPatchMode(float nSegments)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float nSegments=(float)lua_tonumber(L,2);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetNPatchMode(float). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetNPatchMode(nSegments);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float IDirect3DDevice9::GetNPatchMode()
	static int _bind_GetNPatchMode(lua_State *L) {
		if (!_lg_typecheck_GetNPatchMode(L)) {
			luaL_error(L, "luna typecheck failed in float IDirect3DDevice9::GetNPatchMode() function, expected prototype:\nfloat IDirect3DDevice9::GetNPatchMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float IDirect3DDevice9::GetNPatchMode(). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->GetNPatchMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType, unsigned int StartVertex, unsigned int PrimitiveCount)
	static int _bind_DrawPrimitive(lua_State *L) {
		if (!_lg_typecheck_DrawPrimitive(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType, unsigned int StartVertex, unsigned int PrimitiveCount) function, expected prototype:\nlong IDirect3DDevice9::DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType, unsigned int StartVertex, unsigned int PrimitiveCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DPRIMITIVETYPE PrimitiveType=(D3DPRIMITIVETYPE)lua_tointeger(L,2);
		unsigned int StartVertex=(unsigned int)lua_tointeger(L,3);
		unsigned int PrimitiveCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::DrawPrimitive(D3DPRIMITIVETYPE, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->DrawPrimitive(PrimitiveType, StartVertex, PrimitiveCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::DrawIndexedPrimitive(D3DPRIMITIVETYPE arg1, int BaseVertexIndex, unsigned int MinVertexIndex, unsigned int NumVertices, unsigned int startIndex, unsigned int primCount)
	static int _bind_DrawIndexedPrimitive(lua_State *L) {
		if (!_lg_typecheck_DrawIndexedPrimitive(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::DrawIndexedPrimitive(D3DPRIMITIVETYPE arg1, int BaseVertexIndex, unsigned int MinVertexIndex, unsigned int NumVertices, unsigned int startIndex, unsigned int primCount) function, expected prototype:\nlong IDirect3DDevice9::DrawIndexedPrimitive(D3DPRIMITIVETYPE arg1, int BaseVertexIndex, unsigned int MinVertexIndex, unsigned int NumVertices, unsigned int startIndex, unsigned int primCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DPRIMITIVETYPE _arg1=(D3DPRIMITIVETYPE)lua_tointeger(L,2);
		int BaseVertexIndex=(int)lua_tointeger(L,3);
		unsigned int MinVertexIndex=(unsigned int)lua_tointeger(L,4);
		unsigned int NumVertices=(unsigned int)lua_tointeger(L,5);
		unsigned int startIndex=(unsigned int)lua_tointeger(L,6);
		unsigned int primCount=(unsigned int)lua_tointeger(L,7);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::DrawIndexedPrimitive(D3DPRIMITIVETYPE, int, unsigned int, unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->DrawIndexedPrimitive(_arg1, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::DrawPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, unsigned int PrimitiveCount, const void * pVertexStreamZeroData, unsigned int VertexStreamZeroStride)
	static int _bind_DrawPrimitiveUP(lua_State *L) {
		if (!_lg_typecheck_DrawPrimitiveUP(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::DrawPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, unsigned int PrimitiveCount, const void * pVertexStreamZeroData, unsigned int VertexStreamZeroStride) function, expected prototype:\nlong IDirect3DDevice9::DrawPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, unsigned int PrimitiveCount, const void * pVertexStreamZeroData, unsigned int VertexStreamZeroStride)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DPRIMITIVETYPE PrimitiveType=(D3DPRIMITIVETYPE)lua_tointeger(L,2);
		unsigned int PrimitiveCount=(unsigned int)lua_tointeger(L,3);
		const void* pVertexStreamZeroData=(Luna< void >::check(L,4));
		unsigned int VertexStreamZeroStride=(unsigned int)lua_tointeger(L,5);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::DrawPrimitiveUP(D3DPRIMITIVETYPE, unsigned int, const void *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->DrawPrimitiveUP(PrimitiveType, PrimitiveCount, pVertexStreamZeroData, VertexStreamZeroStride);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::DrawIndexedPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, unsigned int MinVertexIndex, unsigned int NumVertices, unsigned int PrimitiveCount, const void * pIndexData, D3DFORMAT IndexDataFormat, const void * pVertexStreamZeroData, unsigned int VertexStreamZeroStride)
	static int _bind_DrawIndexedPrimitiveUP(lua_State *L) {
		if (!_lg_typecheck_DrawIndexedPrimitiveUP(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::DrawIndexedPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, unsigned int MinVertexIndex, unsigned int NumVertices, unsigned int PrimitiveCount, const void * pIndexData, D3DFORMAT IndexDataFormat, const void * pVertexStreamZeroData, unsigned int VertexStreamZeroStride) function, expected prototype:\nlong IDirect3DDevice9::DrawIndexedPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, unsigned int MinVertexIndex, unsigned int NumVertices, unsigned int PrimitiveCount, const void * pIndexData, D3DFORMAT IndexDataFormat, const void * pVertexStreamZeroData, unsigned int VertexStreamZeroStride)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DPRIMITIVETYPE PrimitiveType=(D3DPRIMITIVETYPE)lua_tointeger(L,2);
		unsigned int MinVertexIndex=(unsigned int)lua_tointeger(L,3);
		unsigned int NumVertices=(unsigned int)lua_tointeger(L,4);
		unsigned int PrimitiveCount=(unsigned int)lua_tointeger(L,5);
		const void* pIndexData=(Luna< void >::check(L,6));
		D3DFORMAT IndexDataFormat=(D3DFORMAT)lua_tointeger(L,7);
		const void* pVertexStreamZeroData=(Luna< void >::check(L,8));
		unsigned int VertexStreamZeroStride=(unsigned int)lua_tointeger(L,9);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::DrawIndexedPrimitiveUP(D3DPRIMITIVETYPE, unsigned int, unsigned int, unsigned int, const void *, D3DFORMAT, const void *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->DrawIndexedPrimitiveUP(PrimitiveType, MinVertexIndex, NumVertices, PrimitiveCount, pIndexData, IndexDataFormat, pVertexStreamZeroData, VertexStreamZeroStride);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::ProcessVertices(unsigned int SrcStartIndex, unsigned int DestIndex, unsigned int VertexCount, IDirect3DVertexBuffer9 * pDestBuffer, IDirect3DVertexDeclaration9 * pVertexDecl, unsigned long Flags)
	static int _bind_ProcessVertices(lua_State *L) {
		if (!_lg_typecheck_ProcessVertices(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::ProcessVertices(unsigned int SrcStartIndex, unsigned int DestIndex, unsigned int VertexCount, IDirect3DVertexBuffer9 * pDestBuffer, IDirect3DVertexDeclaration9 * pVertexDecl, unsigned long Flags) function, expected prototype:\nlong IDirect3DDevice9::ProcessVertices(unsigned int SrcStartIndex, unsigned int DestIndex, unsigned int VertexCount, IDirect3DVertexBuffer9 * pDestBuffer, IDirect3DVertexDeclaration9 * pVertexDecl, unsigned long Flags)\nClass arguments details:\narg 4 ID = 13561783\narg 5 ID = 46969080\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int SrcStartIndex=(unsigned int)lua_tointeger(L,2);
		unsigned int DestIndex=(unsigned int)lua_tointeger(L,3);
		unsigned int VertexCount=(unsigned int)lua_tointeger(L,4);
		IDirect3DVertexBuffer9* pDestBuffer=(Luna< IDirect3DVertexBuffer9 >::check(L,5));
		IDirect3DVertexDeclaration9* pVertexDecl=(Luna< IDirect3DVertexDeclaration9 >::check(L,6));
		unsigned long Flags=(unsigned long)lua_tonumber(L,7);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::ProcessVertices(unsigned int, unsigned int, unsigned int, IDirect3DVertexBuffer9 *, IDirect3DVertexDeclaration9 *, unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->ProcessVertices(SrcStartIndex, DestIndex, VertexCount, pDestBuffer, pVertexDecl, Flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetVertexDeclaration(IDirect3DVertexDeclaration9 * pDecl)
	static int _bind_SetVertexDeclaration(lua_State *L) {
		if (!_lg_typecheck_SetVertexDeclaration(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetVertexDeclaration(IDirect3DVertexDeclaration9 * pDecl) function, expected prototype:\nlong IDirect3DDevice9::SetVertexDeclaration(IDirect3DVertexDeclaration9 * pDecl)\nClass arguments details:\narg 1 ID = 46969080\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DVertexDeclaration9* pDecl=(Luna< IDirect3DVertexDeclaration9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetVertexDeclaration(IDirect3DVertexDeclaration9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetVertexDeclaration(pDecl);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetFVF(unsigned long FVF)
	static int _bind_SetFVF(lua_State *L) {
		if (!_lg_typecheck_SetFVF(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetFVF(unsigned long FVF) function, expected prototype:\nlong IDirect3DDevice9::SetFVF(unsigned long FVF)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long FVF=(unsigned long)lua_tonumber(L,2);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetFVF(unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetFVF(FVF);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetFVF(unsigned long * pFVF)
	static int _bind_GetFVF(lua_State *L) {
		if (!_lg_typecheck_GetFVF(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetFVF(unsigned long * pFVF) function, expected prototype:\nlong IDirect3DDevice9::GetFVF(unsigned long * pFVF)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long* pFVF=(unsigned long*)Luna< void >::check(L,2);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetFVF(unsigned long *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetFVF(pFVF);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetVertexShader(IDirect3DVertexShader9 * pShader)
	static int _bind_SetVertexShader(lua_State *L) {
		if (!_lg_typecheck_SetVertexShader(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetVertexShader(IDirect3DVertexShader9 * pShader) function, expected prototype:\nlong IDirect3DDevice9::SetVertexShader(IDirect3DVertexShader9 * pShader)\nClass arguments details:\narg 1 ID = 24265100\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DVertexShader9* pShader=(Luna< IDirect3DVertexShader9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetVertexShader(IDirect3DVertexShader9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetVertexShader(pShader);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetVertexShaderConstantF(unsigned int StartRegister, const float * pConstantData, unsigned int Vector4fCount)
	static int _bind_SetVertexShaderConstantF(lua_State *L) {
		if (!_lg_typecheck_SetVertexShaderConstantF(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetVertexShaderConstantF(unsigned int StartRegister, const float * pConstantData, unsigned int Vector4fCount) function, expected prototype:\nlong IDirect3DDevice9::SetVertexShaderConstantF(unsigned int StartRegister, const float * pConstantData, unsigned int Vector4fCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		const float* pConstantData=(const float*)Luna< void >::check(L,3);
		unsigned int Vector4fCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetVertexShaderConstantF(unsigned int, const float *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetVertexShaderConstantF(StartRegister, pConstantData, Vector4fCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetVertexShaderConstantF(unsigned int StartRegister, float * pConstantData, unsigned int Vector4fCount)
	static int _bind_GetVertexShaderConstantF(lua_State *L) {
		if (!_lg_typecheck_GetVertexShaderConstantF(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetVertexShaderConstantF(unsigned int StartRegister, float * pConstantData, unsigned int Vector4fCount) function, expected prototype:\nlong IDirect3DDevice9::GetVertexShaderConstantF(unsigned int StartRegister, float * pConstantData, unsigned int Vector4fCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		float* pConstantData=(float*)Luna< void >::check(L,3);
		unsigned int Vector4fCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetVertexShaderConstantF(unsigned int, float *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetVertexShaderConstantF(StartRegister, pConstantData, Vector4fCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetVertexShaderConstantI(unsigned int StartRegister, const int * pConstantData, unsigned int Vector4iCount)
	static int _bind_SetVertexShaderConstantI(lua_State *L) {
		if (!_lg_typecheck_SetVertexShaderConstantI(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetVertexShaderConstantI(unsigned int StartRegister, const int * pConstantData, unsigned int Vector4iCount) function, expected prototype:\nlong IDirect3DDevice9::SetVertexShaderConstantI(unsigned int StartRegister, const int * pConstantData, unsigned int Vector4iCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		const int* pConstantData=(const int*)Luna< void >::check(L,3);
		unsigned int Vector4iCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetVertexShaderConstantI(unsigned int, const int *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetVertexShaderConstantI(StartRegister, pConstantData, Vector4iCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetVertexShaderConstantI(unsigned int StartRegister, int * pConstantData, unsigned int Vector4iCount)
	static int _bind_GetVertexShaderConstantI(lua_State *L) {
		if (!_lg_typecheck_GetVertexShaderConstantI(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetVertexShaderConstantI(unsigned int StartRegister, int * pConstantData, unsigned int Vector4iCount) function, expected prototype:\nlong IDirect3DDevice9::GetVertexShaderConstantI(unsigned int StartRegister, int * pConstantData, unsigned int Vector4iCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		int* pConstantData=(int*)Luna< void >::check(L,3);
		unsigned int Vector4iCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetVertexShaderConstantI(unsigned int, int *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetVertexShaderConstantI(StartRegister, pConstantData, Vector4iCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetVertexShaderConstantB(unsigned int StartRegister, const int * pConstantData, unsigned int BoolCount)
	static int _bind_SetVertexShaderConstantB(lua_State *L) {
		if (!_lg_typecheck_SetVertexShaderConstantB(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetVertexShaderConstantB(unsigned int StartRegister, const int * pConstantData, unsigned int BoolCount) function, expected prototype:\nlong IDirect3DDevice9::SetVertexShaderConstantB(unsigned int StartRegister, const int * pConstantData, unsigned int BoolCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		const int* pConstantData=(const int*)Luna< void >::check(L,3);
		unsigned int BoolCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetVertexShaderConstantB(unsigned int, const int *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetVertexShaderConstantB(StartRegister, pConstantData, BoolCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetVertexShaderConstantB(unsigned int StartRegister, int * pConstantData, unsigned int BoolCount)
	static int _bind_GetVertexShaderConstantB(lua_State *L) {
		if (!_lg_typecheck_GetVertexShaderConstantB(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetVertexShaderConstantB(unsigned int StartRegister, int * pConstantData, unsigned int BoolCount) function, expected prototype:\nlong IDirect3DDevice9::GetVertexShaderConstantB(unsigned int StartRegister, int * pConstantData, unsigned int BoolCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		int* pConstantData=(int*)Luna< void >::check(L,3);
		unsigned int BoolCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetVertexShaderConstantB(unsigned int, int *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetVertexShaderConstantB(StartRegister, pConstantData, BoolCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetStreamSource(unsigned int StreamNumber, IDirect3DVertexBuffer9 * pStreamData, unsigned int OffsetInBytes, unsigned int Stride)
	static int _bind_SetStreamSource(lua_State *L) {
		if (!_lg_typecheck_SetStreamSource(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetStreamSource(unsigned int StreamNumber, IDirect3DVertexBuffer9 * pStreamData, unsigned int OffsetInBytes, unsigned int Stride) function, expected prototype:\nlong IDirect3DDevice9::SetStreamSource(unsigned int StreamNumber, IDirect3DVertexBuffer9 * pStreamData, unsigned int OffsetInBytes, unsigned int Stride)\nClass arguments details:\narg 2 ID = 13561783\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StreamNumber=(unsigned int)lua_tointeger(L,2);
		IDirect3DVertexBuffer9* pStreamData=(Luna< IDirect3DVertexBuffer9 >::check(L,3));
		unsigned int OffsetInBytes=(unsigned int)lua_tointeger(L,4);
		unsigned int Stride=(unsigned int)lua_tointeger(L,5);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetStreamSource(unsigned int, IDirect3DVertexBuffer9 *, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetStreamSource(StreamNumber, pStreamData, OffsetInBytes, Stride);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetStreamSourceFreq(unsigned int StreamNumber, unsigned int Setting)
	static int _bind_SetStreamSourceFreq(lua_State *L) {
		if (!_lg_typecheck_SetStreamSourceFreq(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetStreamSourceFreq(unsigned int StreamNumber, unsigned int Setting) function, expected prototype:\nlong IDirect3DDevice9::SetStreamSourceFreq(unsigned int StreamNumber, unsigned int Setting)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StreamNumber=(unsigned int)lua_tointeger(L,2);
		unsigned int Setting=(unsigned int)lua_tointeger(L,3);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetStreamSourceFreq(unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetStreamSourceFreq(StreamNumber, Setting);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetStreamSourceFreq(unsigned int StreamNumber, unsigned int * pSetting)
	static int _bind_GetStreamSourceFreq(lua_State *L) {
		if (!_lg_typecheck_GetStreamSourceFreq(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetStreamSourceFreq(unsigned int StreamNumber, unsigned int * pSetting) function, expected prototype:\nlong IDirect3DDevice9::GetStreamSourceFreq(unsigned int StreamNumber, unsigned int * pSetting)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StreamNumber=(unsigned int)lua_tointeger(L,2);
		unsigned int* pSetting=(unsigned int*)Luna< void >::check(L,3);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetStreamSourceFreq(unsigned int, unsigned int *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetStreamSourceFreq(StreamNumber, pSetting);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetIndices(IDirect3DIndexBuffer9 * pIndexData)
	static int _bind_SetIndices(lua_State *L) {
		if (!_lg_typecheck_SetIndices(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetIndices(IDirect3DIndexBuffer9 * pIndexData) function, expected prototype:\nlong IDirect3DDevice9::SetIndices(IDirect3DIndexBuffer9 * pIndexData)\nClass arguments details:\narg 1 ID = 12769028\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DIndexBuffer9* pIndexData=(Luna< IDirect3DIndexBuffer9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetIndices(IDirect3DIndexBuffer9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetIndices(pIndexData);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetPixelShader(IDirect3DPixelShader9 * pShader)
	static int _bind_SetPixelShader(lua_State *L) {
		if (!_lg_typecheck_SetPixelShader(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetPixelShader(IDirect3DPixelShader9 * pShader) function, expected prototype:\nlong IDirect3DDevice9::SetPixelShader(IDirect3DPixelShader9 * pShader)\nClass arguments details:\narg 1 ID = 47178687\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DPixelShader9* pShader=(Luna< IDirect3DPixelShader9 >::check(L,2));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetPixelShader(IDirect3DPixelShader9 *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetPixelShader(pShader);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetPixelShaderConstantF(unsigned int StartRegister, const float * pConstantData, unsigned int Vector4fCount)
	static int _bind_SetPixelShaderConstantF(lua_State *L) {
		if (!_lg_typecheck_SetPixelShaderConstantF(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetPixelShaderConstantF(unsigned int StartRegister, const float * pConstantData, unsigned int Vector4fCount) function, expected prototype:\nlong IDirect3DDevice9::SetPixelShaderConstantF(unsigned int StartRegister, const float * pConstantData, unsigned int Vector4fCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		const float* pConstantData=(const float*)Luna< void >::check(L,3);
		unsigned int Vector4fCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetPixelShaderConstantF(unsigned int, const float *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetPixelShaderConstantF(StartRegister, pConstantData, Vector4fCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetPixelShaderConstantF(unsigned int StartRegister, float * pConstantData, unsigned int Vector4fCount)
	static int _bind_GetPixelShaderConstantF(lua_State *L) {
		if (!_lg_typecheck_GetPixelShaderConstantF(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetPixelShaderConstantF(unsigned int StartRegister, float * pConstantData, unsigned int Vector4fCount) function, expected prototype:\nlong IDirect3DDevice9::GetPixelShaderConstantF(unsigned int StartRegister, float * pConstantData, unsigned int Vector4fCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		float* pConstantData=(float*)Luna< void >::check(L,3);
		unsigned int Vector4fCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetPixelShaderConstantF(unsigned int, float *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetPixelShaderConstantF(StartRegister, pConstantData, Vector4fCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetPixelShaderConstantI(unsigned int StartRegister, const int * pConstantData, unsigned int Vector4iCount)
	static int _bind_SetPixelShaderConstantI(lua_State *L) {
		if (!_lg_typecheck_SetPixelShaderConstantI(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetPixelShaderConstantI(unsigned int StartRegister, const int * pConstantData, unsigned int Vector4iCount) function, expected prototype:\nlong IDirect3DDevice9::SetPixelShaderConstantI(unsigned int StartRegister, const int * pConstantData, unsigned int Vector4iCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		const int* pConstantData=(const int*)Luna< void >::check(L,3);
		unsigned int Vector4iCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetPixelShaderConstantI(unsigned int, const int *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetPixelShaderConstantI(StartRegister, pConstantData, Vector4iCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetPixelShaderConstantI(unsigned int StartRegister, int * pConstantData, unsigned int Vector4iCount)
	static int _bind_GetPixelShaderConstantI(lua_State *L) {
		if (!_lg_typecheck_GetPixelShaderConstantI(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetPixelShaderConstantI(unsigned int StartRegister, int * pConstantData, unsigned int Vector4iCount) function, expected prototype:\nlong IDirect3DDevice9::GetPixelShaderConstantI(unsigned int StartRegister, int * pConstantData, unsigned int Vector4iCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		int* pConstantData=(int*)Luna< void >::check(L,3);
		unsigned int Vector4iCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetPixelShaderConstantI(unsigned int, int *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetPixelShaderConstantI(StartRegister, pConstantData, Vector4iCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::SetPixelShaderConstantB(unsigned int StartRegister, const int * pConstantData, unsigned int BoolCount)
	static int _bind_SetPixelShaderConstantB(lua_State *L) {
		if (!_lg_typecheck_SetPixelShaderConstantB(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::SetPixelShaderConstantB(unsigned int StartRegister, const int * pConstantData, unsigned int BoolCount) function, expected prototype:\nlong IDirect3DDevice9::SetPixelShaderConstantB(unsigned int StartRegister, const int * pConstantData, unsigned int BoolCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		const int* pConstantData=(const int*)Luna< void >::check(L,3);
		unsigned int BoolCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::SetPixelShaderConstantB(unsigned int, const int *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetPixelShaderConstantB(StartRegister, pConstantData, BoolCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::GetPixelShaderConstantB(unsigned int StartRegister, int * pConstantData, unsigned int BoolCount)
	static int _bind_GetPixelShaderConstantB(lua_State *L) {
		if (!_lg_typecheck_GetPixelShaderConstantB(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::GetPixelShaderConstantB(unsigned int StartRegister, int * pConstantData, unsigned int BoolCount) function, expected prototype:\nlong IDirect3DDevice9::GetPixelShaderConstantB(unsigned int StartRegister, int * pConstantData, unsigned int BoolCount)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int StartRegister=(unsigned int)lua_tointeger(L,2);
		int* pConstantData=(int*)Luna< void >::check(L,3);
		unsigned int BoolCount=(unsigned int)lua_tointeger(L,4);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::GetPixelShaderConstantB(unsigned int, int *, unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetPixelShaderConstantB(StartRegister, pConstantData, BoolCount);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::DrawRectPatch(unsigned int Handle, const float * pNumSegs, const D3DRECTPATCH_INFO * pRectPatchInfo)
	static int _bind_DrawRectPatch(lua_State *L) {
		if (!_lg_typecheck_DrawRectPatch(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::DrawRectPatch(unsigned int Handle, const float * pNumSegs, const D3DRECTPATCH_INFO * pRectPatchInfo) function, expected prototype:\nlong IDirect3DDevice9::DrawRectPatch(unsigned int Handle, const float * pNumSegs, const D3DRECTPATCH_INFO * pRectPatchInfo)\nClass arguments details:\narg 3 ID = 68363046\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Handle=(unsigned int)lua_tointeger(L,2);
		const float* pNumSegs=(const float*)Luna< void >::check(L,3);
		const D3DRECTPATCH_INFO* pRectPatchInfo=(Luna< D3DRECTPATCH_INFO >::check(L,4));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::DrawRectPatch(unsigned int, const float *, const D3DRECTPATCH_INFO *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->DrawRectPatch(Handle, pNumSegs, pRectPatchInfo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::DrawTriPatch(unsigned int Handle, const float * pNumSegs, const D3DTRIPATCH_INFO * pTriPatchInfo)
	static int _bind_DrawTriPatch(lua_State *L) {
		if (!_lg_typecheck_DrawTriPatch(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::DrawTriPatch(unsigned int Handle, const float * pNumSegs, const D3DTRIPATCH_INFO * pTriPatchInfo) function, expected prototype:\nlong IDirect3DDevice9::DrawTriPatch(unsigned int Handle, const float * pNumSegs, const D3DTRIPATCH_INFO * pTriPatchInfo)\nClass arguments details:\narg 3 ID = 38308937\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Handle=(unsigned int)lua_tointeger(L,2);
		const float* pNumSegs=(const float*)Luna< void >::check(L,3);
		const D3DTRIPATCH_INFO* pTriPatchInfo=(Luna< D3DTRIPATCH_INFO >::check(L,4));

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::DrawTriPatch(unsigned int, const float *, const D3DTRIPATCH_INFO *). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->DrawTriPatch(Handle, pNumSegs, pTriPatchInfo);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3DDevice9::DeletePatch(unsigned int Handle)
	static int _bind_DeletePatch(lua_State *L) {
		if (!_lg_typecheck_DeletePatch(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3DDevice9::DeletePatch(unsigned int Handle) function, expected prototype:\nlong IDirect3DDevice9::DeletePatch(unsigned int Handle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Handle=(unsigned int)lua_tointeger(L,2);

		IDirect3DDevice9* self=(Luna< IDirect3DDevice9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3DDevice9::DeletePatch(unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3DDevice9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->DeletePatch(Handle);
		lua_pushnumber(L,lret);

		return 1;
	}

	// ID3DXBuffer * IDirect3DDevice9::compileShaderFromFile(IDirect3DDevice9 * device, const std::string & filename, const std::string & func, const std::string & profile)
	static int _bind_compileShaderFromFile(lua_State *L) {
		if (!_lg_typecheck_compileShaderFromFile(L)) {
			luaL_error(L, "luna typecheck failed in ID3DXBuffer * IDirect3DDevice9::compileShaderFromFile(IDirect3DDevice9 * device, const std::string & filename, const std::string & func, const std::string & profile) function, expected prototype:\nID3DXBuffer * IDirect3DDevice9::compileShaderFromFile(IDirect3DDevice9 * device, const std::string & filename, const std::string & func, const std::string & profile)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		std::string func(lua_tostring(L,3),lua_objlen(L,3));
		std::string profile(lua_tostring(L,4),lua_objlen(L,4));

		ID3DXBuffer * lret = compileShaderFromFile(device, filename, func, profile);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ID3DXBuffer >::push(L,lret,false);

		return 1;
	}

	// ID3DXBuffer * IDirect3DDevice9::compileShaderFromMemory(IDirect3DDevice9 * device, const std::string & src, const std::string & func, const std::string & profile)
	static int _bind_compileShaderFromMemory(lua_State *L) {
		if (!_lg_typecheck_compileShaderFromMemory(L)) {
			luaL_error(L, "luna typecheck failed in ID3DXBuffer * IDirect3DDevice9::compileShaderFromMemory(IDirect3DDevice9 * device, const std::string & src, const std::string & func, const std::string & profile) function, expected prototype:\nID3DXBuffer * IDirect3DDevice9::compileShaderFromMemory(IDirect3DDevice9 * device, const std::string & src, const std::string & func, const std::string & profile)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		std::string src(lua_tostring(L,2),lua_objlen(L,2));
		std::string func(lua_tostring(L,3),lua_objlen(L,3));
		std::string profile(lua_tostring(L,4),lua_objlen(L,4));

		ID3DXBuffer * lret = compileShaderFromMemory(device, src, func, profile);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ID3DXBuffer >::push(L,lret,false);

		return 1;
	}

	// IDirect3DVertexShader9 * IDirect3DDevice9::createVertexShader(IDirect3DDevice9 * device, ID3DXBuffer * code)
	static int _bind_createVertexShader(lua_State *L) {
		if (!_lg_typecheck_createVertexShader(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DVertexShader9 * IDirect3DDevice9::createVertexShader(IDirect3DDevice9 * device, ID3DXBuffer * code) function, expected prototype:\nIDirect3DVertexShader9 * IDirect3DDevice9::createVertexShader(IDirect3DDevice9 * device, ID3DXBuffer * code)\nClass arguments details:\narg 1 ID = 44522754\narg 2 ID = 41307641\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		ID3DXBuffer* code=(Luna< ID3DXBuffer >::check(L,2));

		IDirect3DVertexShader9 * lret = createVertexShader(device, code);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DVertexShader9 >::push(L,lret,false);

		return 1;
	}

	// IDirect3DPixelShader9 * IDirect3DDevice9::createPixelShader(IDirect3DDevice9 * device, ID3DXBuffer * code)
	static int _bind_createPixelShader(lua_State *L) {
		if (!_lg_typecheck_createPixelShader(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DPixelShader9 * IDirect3DDevice9::createPixelShader(IDirect3DDevice9 * device, ID3DXBuffer * code) function, expected prototype:\nIDirect3DPixelShader9 * IDirect3DDevice9::createPixelShader(IDirect3DDevice9 * device, ID3DXBuffer * code)\nClass arguments details:\narg 1 ID = 44522754\narg 2 ID = 41307641\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		ID3DXBuffer* code=(Luna< ID3DXBuffer >::check(L,2));

		IDirect3DPixelShader9 * lret = createPixelShader(device, code);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DPixelShader9 >::push(L,lret,false);

		return 1;
	}

	// IDirect3DVertexDeclaration9 * IDirect3DDevice9::createVec3Declaration(IDirect3DDevice9 * device)
	static int _bind_createVec3Declaration(lua_State *L) {
		if (!_lg_typecheck_createVec3Declaration(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DVertexDeclaration9 * IDirect3DDevice9::createVec3Declaration(IDirect3DDevice9 * device) function, expected prototype:\nIDirect3DVertexDeclaration9 * IDirect3DDevice9::createVec3Declaration(IDirect3DDevice9 * device)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));

		IDirect3DVertexDeclaration9 * lret = createVec3Declaration(device);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DVertexDeclaration9 >::push(L,lret,false);

		return 1;
	}

	// IDirect3DVertexDeclaration9 * IDirect3DDevice9::createVec4Declaration(IDirect3DDevice9 * device)
	static int _bind_createVec4Declaration(lua_State *L) {
		if (!_lg_typecheck_createVec4Declaration(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DVertexDeclaration9 * IDirect3DDevice9::createVec4Declaration(IDirect3DDevice9 * device) function, expected prototype:\nIDirect3DVertexDeclaration9 * IDirect3DDevice9::createVec4Declaration(IDirect3DDevice9 * device)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));

		IDirect3DVertexDeclaration9 * lret = createVec4Declaration(device);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DVertexDeclaration9 >::push(L,lret,false);

		return 1;
	}

	// IDirect3DVertexBuffer9 * IDirect3DDevice9::createVertexBuffer(IDirect3DDevice9 * device, const osg::Vec3Array & vertices)
	static int _bind_createVertexBuffer_overload_1(lua_State *L) {
		if (!_lg_typecheck_createVertexBuffer_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DVertexBuffer9 * IDirect3DDevice9::createVertexBuffer(IDirect3DDevice9 * device, const osg::Vec3Array & vertices) function, expected prototype:\nIDirect3DVertexBuffer9 * IDirect3DDevice9::createVertexBuffer(IDirect3DDevice9 * device, const osg::Vec3Array & vertices)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		const osg::Vec3Array* vertices_ptr=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in IDirect3DDevice9::createVertexBuffer function");
		}
		const osg::Vec3Array & vertices=*vertices_ptr;

		IDirect3DVertexBuffer9 * lret = createVertexBuffer(device, vertices);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DVertexBuffer9 >::push(L,lret,false);

		return 1;
	}

	// IDirect3DVertexBuffer9 * IDirect3DDevice9::createVertexBuffer(IDirect3DDevice9 * device, const osg::Vec4Array & vertices)
	static int _bind_createVertexBuffer_overload_2(lua_State *L) {
		if (!_lg_typecheck_createVertexBuffer_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DVertexBuffer9 * IDirect3DDevice9::createVertexBuffer(IDirect3DDevice9 * device, const osg::Vec4Array & vertices) function, expected prototype:\nIDirect3DVertexBuffer9 * IDirect3DDevice9::createVertexBuffer(IDirect3DDevice9 * device, const osg::Vec4Array & vertices)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		const osg::Vec4Array* vertices_ptr=(Luna< osg::Referenced >::checkSubType< osg::Vec4Array >(L,2));
		if( !vertices_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertices in IDirect3DDevice9::createVertexBuffer function");
		}
		const osg::Vec4Array & vertices=*vertices_ptr;

		IDirect3DVertexBuffer9 * lret = createVertexBuffer(device, vertices);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DVertexBuffer9 >::push(L,lret,false);

		return 1;
	}

	// Overload binder for IDirect3DDevice9::createVertexBuffer
	static int _bind_createVertexBuffer(lua_State *L) {
		if (_lg_typecheck_createVertexBuffer_overload_1(L)) return _bind_createVertexBuffer_overload_1(L);
		if (_lg_typecheck_createVertexBuffer_overload_2(L)) return _bind_createVertexBuffer_overload_2(L);

		luaL_error(L, "error in function createVertexBuffer, cannot match any of the overloads for function createVertexBuffer:\n  createVertexBuffer(IDirect3DDevice9 *, const osg::Vec3Array &)\n  createVertexBuffer(IDirect3DDevice9 *, const osg::Vec4Array &)\n");
		return 0;
	}

	// IDirect3DTexture9 * IDirect3DDevice9::createTextureFromFile(IDirect3DDevice9 * device, const std::string & filename)
	static int _bind_createTextureFromFile(lua_State *L) {
		if (!_lg_typecheck_createTextureFromFile(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DTexture9 * IDirect3DDevice9::createTextureFromFile(IDirect3DDevice9 * device, const std::string & filename) function, expected prototype:\nIDirect3DTexture9 * IDirect3DDevice9::createTextureFromFile(IDirect3DDevice9 * device, const std::string & filename)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		std::string filename(lua_tostring(L,2),lua_objlen(L,2));

		IDirect3DTexture9 * lret = createTextureFromFile(device, filename);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DTexture9 >::push(L,lret,false);

		return 1;
	}

	// IDirect3DTexture9 * IDirect3DDevice9::createTextureFromMemory(IDirect3DDevice9 * device, const std::string & image)
	static int _bind_createTextureFromMemory(lua_State *L) {
		if (!_lg_typecheck_createTextureFromMemory(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DTexture9 * IDirect3DDevice9::createTextureFromMemory(IDirect3DDevice9 * device, const std::string & image) function, expected prototype:\nIDirect3DTexture9 * IDirect3DDevice9::createTextureFromMemory(IDirect3DDevice9 * device, const std::string & image)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		std::string image(lua_tostring(L,2),lua_objlen(L,2));

		IDirect3DTexture9 * lret = createTextureFromMemory(device, image);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DTexture9 >::push(L,lret,false);

		return 1;
	}

	// IDirect3DTexture9 * IDirect3DDevice9::createTexture(IDirect3DDevice9 * device, unsigned int width, unsigned int height, D3DFORMAT fmt = ::D3DFMT_A8R8G8B8, int usage = D3DUSAGE_RENDERTARGET, D3DPOOL pool = ::D3DPOOL_DEFAULT)
	static int _bind_createTexture(lua_State *L) {
		if (!_lg_typecheck_createTexture(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DTexture9 * IDirect3DDevice9::createTexture(IDirect3DDevice9 * device, unsigned int width, unsigned int height, D3DFORMAT fmt = ::D3DFMT_A8R8G8B8, int usage = D3DUSAGE_RENDERTARGET, D3DPOOL pool = ::D3DPOOL_DEFAULT) function, expected prototype:\nIDirect3DTexture9 * IDirect3DDevice9::createTexture(IDirect3DDevice9 * device, unsigned int width, unsigned int height, D3DFORMAT fmt = ::D3DFMT_A8R8G8B8, int usage = D3DUSAGE_RENDERTARGET, D3DPOOL pool = ::D3DPOOL_DEFAULT)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int width=(unsigned int)lua_tointeger(L,2);
		unsigned int height=(unsigned int)lua_tointeger(L,3);
		D3DFORMAT fmt=luatop>3 ? (D3DFORMAT)lua_tointeger(L,4) : (D3DFORMAT)::D3DFMT_A8R8G8B8;
		int usage=luatop>4 ? (int)lua_tointeger(L,5) : (int)D3DUSAGE_RENDERTARGET;
		D3DPOOL pool=luatop>5 ? (D3DPOOL)lua_tointeger(L,6) : (D3DPOOL)::D3DPOOL_DEFAULT;

		IDirect3DTexture9 * lret = createTexture(device, width, height, fmt, usage, pool);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DTexture9 >::push(L,lret,false);

		return 1;
	}

	// IDirect3DTexture9 * IDirect3DDevice9::createNoiseTexture(IDirect3DDevice9 * device, unsigned int width, unsigned int height, D3DFORMAT fmt = ::D3DFMT_A8R8G8B8, int usage = D3DUSAGE_DYNAMIC, D3DPOOL pool = ::D3DPOOL_DEFAULT)
	static int _bind_createNoiseTexture(lua_State *L) {
		if (!_lg_typecheck_createNoiseTexture(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DTexture9 * IDirect3DDevice9::createNoiseTexture(IDirect3DDevice9 * device, unsigned int width, unsigned int height, D3DFORMAT fmt = ::D3DFMT_A8R8G8B8, int usage = D3DUSAGE_DYNAMIC, D3DPOOL pool = ::D3DPOOL_DEFAULT) function, expected prototype:\nIDirect3DTexture9 * IDirect3DDevice9::createNoiseTexture(IDirect3DDevice9 * device, unsigned int width, unsigned int height, D3DFORMAT fmt = ::D3DFMT_A8R8G8B8, int usage = D3DUSAGE_DYNAMIC, D3DPOOL pool = ::D3DPOOL_DEFAULT)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int width=(unsigned int)lua_tointeger(L,2);
		unsigned int height=(unsigned int)lua_tointeger(L,3);
		D3DFORMAT fmt=luatop>3 ? (D3DFORMAT)lua_tointeger(L,4) : (D3DFORMAT)::D3DFMT_A8R8G8B8;
		int usage=luatop>4 ? (int)lua_tointeger(L,5) : (int)D3DUSAGE_DYNAMIC;
		D3DPOOL pool=luatop>5 ? (D3DPOOL)lua_tointeger(L,6) : (D3DPOOL)::D3DPOOL_DEFAULT;

		IDirect3DTexture9 * lret = createNoiseTexture(device, width, height, fmt, usage, pool);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DTexture9 >::push(L,lret,false);

		return 1;
	}

	// IDirect3DSurface9 * IDirect3DDevice9::createDepthSurface(IDirect3DDevice9 * device, unsigned int width, unsigned int height, D3DFORMAT fmt = ::D3DFMT_D24S8)
	static int _bind_createDepthSurface(lua_State *L) {
		if (!_lg_typecheck_createDepthSurface(L)) {
			luaL_error(L, "luna typecheck failed in IDirect3DSurface9 * IDirect3DDevice9::createDepthSurface(IDirect3DDevice9 * device, unsigned int width, unsigned int height, D3DFORMAT fmt = ::D3DFMT_D24S8) function, expected prototype:\nIDirect3DSurface9 * IDirect3DDevice9::createDepthSurface(IDirect3DDevice9 * device, unsigned int width, unsigned int height, D3DFORMAT fmt = ::D3DFMT_D24S8)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int width=(unsigned int)lua_tointeger(L,2);
		unsigned int height=(unsigned int)lua_tointeger(L,3);
		D3DFORMAT fmt=luatop>3 ? (D3DFORMAT)lua_tointeger(L,4) : (D3DFORMAT)::D3DFMT_D24S8;

		IDirect3DSurface9 * lret = createDepthSurface(device, width, height, fmt);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< IDirect3DSurface9 >::push(L,lret,false);

		return 1;
	}

	// void IDirect3DDevice9::updateTexture(IDirect3DDevice9 * device, IDirect3DTexture9 * src, IDirect3DTexture9 * dest)
	static int _bind_updateTexture(lua_State *L) {
		if (!_lg_typecheck_updateTexture(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::updateTexture(IDirect3DDevice9 * device, IDirect3DTexture9 * src, IDirect3DTexture9 * dest) function, expected prototype:\nvoid IDirect3DDevice9::updateTexture(IDirect3DDevice9 * device, IDirect3DTexture9 * src, IDirect3DTexture9 * dest)\nClass arguments details:\narg 1 ID = 44522754\narg 2 ID = 49931509\narg 3 ID = 49931509\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		IDirect3DTexture9* src=(Luna< IDirect3DTexture9 >::check(L,2));
		IDirect3DTexture9* dest=(Luna< IDirect3DTexture9 >::check(L,3));

		updateTexture(device, src, dest);

		return 0;
	}

	// ID3DXFont * IDirect3DDevice9::createFont(IDirect3DDevice9 * device, int width, int height, bool bold, bool italic, const std::string & faceName)
	static int _bind_createFont(lua_State *L) {
		if (!_lg_typecheck_createFont(L)) {
			luaL_error(L, "luna typecheck failed in ID3DXFont * IDirect3DDevice9::createFont(IDirect3DDevice9 * device, int width, int height, bool bold, bool italic, const std::string & faceName) function, expected prototype:\nID3DXFont * IDirect3DDevice9::createFont(IDirect3DDevice9 * device, int width, int height, bool bold, bool italic, const std::string & faceName)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));
		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		bool bold=(bool)(lua_toboolean(L,4)==1);
		bool italic=(bool)(lua_toboolean(L,5)==1);
		std::string faceName(lua_tostring(L,6),lua_objlen(L,6));

		ID3DXFont * lret = createFont(device, width, height, bold, italic, faceName);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ID3DXFont >::push(L,lret,false);

		return 1;
	}

	// ID3DXSprite * IDirect3DDevice9::createSprite(IDirect3DDevice9 * device)
	static int _bind_createSprite(lua_State *L) {
		if (!_lg_typecheck_createSprite(L)) {
			luaL_error(L, "luna typecheck failed in ID3DXSprite * IDirect3DDevice9::createSprite(IDirect3DDevice9 * device) function, expected prototype:\nID3DXSprite * IDirect3DDevice9::createSprite(IDirect3DDevice9 * device)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));

		ID3DXSprite * lret = createSprite(device);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ID3DXSprite >::push(L,lret,false);

		return 1;
	}

	// void IDirect3DDevice9::setDefaultState(IDirect3DDevice9 * d3dd)
	static int _bind_setDefaultState(lua_State *L) {
		if (!_lg_typecheck_setDefaultState(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::setDefaultState(IDirect3DDevice9 * d3dd) function, expected prototype:\nvoid IDirect3DDevice9::setDefaultState(IDirect3DDevice9 * d3dd)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* d3dd=(Luna< IDirect3DDevice9 >::check(L,1));

		setDefaultState(d3dd);

		return 0;
	}

	// void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, bool val, int target)
	static int _bind_setUniform_overload_1(lua_State *L) {
		if (!_lg_typecheck_setUniform_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, bool val, int target) function, expected prototype:\nvoid IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, bool val, int target)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* cbi=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int reg=(unsigned int)lua_tointeger(L,2);
		bool val=(bool)(lua_toboolean(L,3)==1);
		int target=(int)lua_tointeger(L,4);

		setUniform(cbi, reg, val, target);

		return 0;
	}

	// void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, float val, int target)
	static int _bind_setUniform_overload_2(lua_State *L) {
		if (!_lg_typecheck_setUniform_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, float val, int target) function, expected prototype:\nvoid IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, float val, int target)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* cbi=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int reg=(unsigned int)lua_tointeger(L,2);
		float val=(float)lua_tonumber(L,3);
		int target=(int)lua_tointeger(L,4);

		setUniform(cbi, reg, val, target);

		return 0;
	}

	// void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec4f val, int target)
	static int _bind_setUniform_overload_3(lua_State *L) {
		if (!_lg_typecheck_setUniform_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec4f val, int target) function, expected prototype:\nvoid IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec4f val, int target)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* cbi=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int reg=(unsigned int)lua_tointeger(L,2);
		osg::Vec4f* val_ptr=(Luna< osg::Vec4f >::check(L,3));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in IDirect3DDevice9::setUniform function");
		}
		osg::Vec4f val=*val_ptr;
		int target=(int)lua_tointeger(L,4);

		setUniform(cbi, reg, val, target);

		return 0;
	}

	// void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec4d val, int target)
	static int _bind_setUniform_overload_4(lua_State *L) {
		if (!_lg_typecheck_setUniform_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec4d val, int target) function, expected prototype:\nvoid IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec4d val, int target)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* cbi=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int reg=(unsigned int)lua_tointeger(L,2);
		osg::Vec4d* val_ptr=(Luna< osg::Vec4d >::check(L,3));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in IDirect3DDevice9::setUniform function");
		}
		osg::Vec4d val=*val_ptr;
		int target=(int)lua_tointeger(L,4);

		setUniform(cbi, reg, val, target);

		return 0;
	}

	// void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec2f val, int target)
	static int _bind_setUniform_overload_5(lua_State *L) {
		if (!_lg_typecheck_setUniform_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec2f val, int target) function, expected prototype:\nvoid IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec2f val, int target)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* cbi=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int reg=(unsigned int)lua_tointeger(L,2);
		osg::Vec2f* val_ptr=(Luna< osg::Vec2f >::check(L,3));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in IDirect3DDevice9::setUniform function");
		}
		osg::Vec2f val=*val_ptr;
		int target=(int)lua_tointeger(L,4);

		setUniform(cbi, reg, val, target);

		return 0;
	}

	// void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec2d val, int target)
	static int _bind_setUniform_overload_6(lua_State *L) {
		if (!_lg_typecheck_setUniform_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec2d val, int target) function, expected prototype:\nvoid IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec2d val, int target)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* cbi=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int reg=(unsigned int)lua_tointeger(L,2);
		osg::Vec2d* val_ptr=(Luna< osg::Vec2d >::check(L,3));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in IDirect3DDevice9::setUniform function");
		}
		osg::Vec2d val=*val_ptr;
		int target=(int)lua_tointeger(L,4);

		setUniform(cbi, reg, val, target);

		return 0;
	}

	// void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec3f val, int target)
	static int _bind_setUniform_overload_7(lua_State *L) {
		if (!_lg_typecheck_setUniform_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec3f val, int target) function, expected prototype:\nvoid IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec3f val, int target)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* cbi=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int reg=(unsigned int)lua_tointeger(L,2);
		osg::Vec3f* val_ptr=(Luna< osg::Vec3f >::check(L,3));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in IDirect3DDevice9::setUniform function");
		}
		osg::Vec3f val=*val_ptr;
		int target=(int)lua_tointeger(L,4);

		setUniform(cbi, reg, val, target);

		return 0;
	}

	// void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec3d val, int target)
	static int _bind_setUniform_overload_8(lua_State *L) {
		if (!_lg_typecheck_setUniform_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec3d val, int target) function, expected prototype:\nvoid IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Vec3d val, int target)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* cbi=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int reg=(unsigned int)lua_tointeger(L,2);
		osg::Vec3d* val_ptr=(Luna< osg::Vec3d >::check(L,3));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in IDirect3DDevice9::setUniform function");
		}
		osg::Vec3d val=*val_ptr;
		int target=(int)lua_tointeger(L,4);

		setUniform(cbi, reg, val, target);

		return 0;
	}

	// void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Matrixf val, int target)
	static int _bind_setUniform_overload_9(lua_State *L) {
		if (!_lg_typecheck_setUniform_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Matrixf val, int target) function, expected prototype:\nvoid IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Matrixf val, int target)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* cbi=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int reg=(unsigned int)lua_tointeger(L,2);
		osg::Matrixf* val_ptr=(Luna< osg::Matrixf >::check(L,3));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in IDirect3DDevice9::setUniform function");
		}
		osg::Matrixf val=*val_ptr;
		int target=(int)lua_tointeger(L,4);

		setUniform(cbi, reg, val, target);

		return 0;
	}

	// void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Matrixd val, int target)
	static int _bind_setUniform_overload_10(lua_State *L) {
		if (!_lg_typecheck_setUniform_overload_10(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Matrixd val, int target) function, expected prototype:\nvoid IDirect3DDevice9::setUniform(IDirect3DDevice9 * cbi, unsigned int reg, osg::Matrixd val, int target)\nClass arguments details:\narg 1 ID = 44522754\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* cbi=(Luna< IDirect3DDevice9 >::check(L,1));
		unsigned int reg=(unsigned int)lua_tointeger(L,2);
		osg::Matrixd* val_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !val_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg val in IDirect3DDevice9::setUniform function");
		}
		osg::Matrixd val=*val_ptr;
		int target=(int)lua_tointeger(L,4);

		setUniform(cbi, reg, val, target);

		return 0;
	}

	// Overload binder for IDirect3DDevice9::setUniform
	static int _bind_setUniform(lua_State *L) {
		if (_lg_typecheck_setUniform_overload_1(L)) return _bind_setUniform_overload_1(L);
		if (_lg_typecheck_setUniform_overload_2(L)) return _bind_setUniform_overload_2(L);
		if (_lg_typecheck_setUniform_overload_3(L)) return _bind_setUniform_overload_3(L);
		if (_lg_typecheck_setUniform_overload_4(L)) return _bind_setUniform_overload_4(L);
		if (_lg_typecheck_setUniform_overload_5(L)) return _bind_setUniform_overload_5(L);
		if (_lg_typecheck_setUniform_overload_6(L)) return _bind_setUniform_overload_6(L);
		if (_lg_typecheck_setUniform_overload_7(L)) return _bind_setUniform_overload_7(L);
		if (_lg_typecheck_setUniform_overload_8(L)) return _bind_setUniform_overload_8(L);
		if (_lg_typecheck_setUniform_overload_9(L)) return _bind_setUniform_overload_9(L);
		if (_lg_typecheck_setUniform_overload_10(L)) return _bind_setUniform_overload_10(L);

		luaL_error(L, "error in function setUniform, cannot match any of the overloads for function setUniform:\n  setUniform(IDirect3DDevice9 *, unsigned int, bool, int)\n  setUniform(IDirect3DDevice9 *, unsigned int, float, int)\n  setUniform(IDirect3DDevice9 *, unsigned int, osg::Vec4f, int)\n  setUniform(IDirect3DDevice9 *, unsigned int, osg::Vec4d, int)\n  setUniform(IDirect3DDevice9 *, unsigned int, osg::Vec2f, int)\n  setUniform(IDirect3DDevice9 *, unsigned int, osg::Vec2d, int)\n  setUniform(IDirect3DDevice9 *, unsigned int, osg::Vec3f, int)\n  setUniform(IDirect3DDevice9 *, unsigned int, osg::Vec3d, int)\n  setUniform(IDirect3DDevice9 *, unsigned int, osg::Matrixf, int)\n  setUniform(IDirect3DDevice9 *, unsigned int, osg::Matrixd, int)\n");
		return 0;
	}


	// Operator binds:

};

IDirect3DDevice9* LunaTraits< IDirect3DDevice9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< IDirect3DDevice9 >::_bind_dtor(IDirect3DDevice9* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< IDirect3DDevice9 >::className[] = "IDirect3DDevice9";
const char LunaTraits< IDirect3DDevice9 >::fullName[] = "IDirect3DDevice9";
const char LunaTraits< IDirect3DDevice9 >::moduleName[] = "dx9";
const char* LunaTraits< IDirect3DDevice9 >::parents[] = {0};
const int LunaTraits< IDirect3DDevice9 >::hash = 44522754;
const int LunaTraits< IDirect3DDevice9 >::uniqueIDs[] = {44522754,0};

luna_RegType LunaTraits< IDirect3DDevice9 >::methods[] = {
	{"AddRef", &luna_wrapper_IDirect3DDevice9::_bind_AddRef},
	{"Release", &luna_wrapper_IDirect3DDevice9::_bind_Release},
	{"TestCooperativeLevel", &luna_wrapper_IDirect3DDevice9::_bind_TestCooperativeLevel},
	{"GetAvailableTextureMem", &luna_wrapper_IDirect3DDevice9::_bind_GetAvailableTextureMem},
	{"EvictManagedResources", &luna_wrapper_IDirect3DDevice9::_bind_EvictManagedResources},
	{"GetDeviceCaps", &luna_wrapper_IDirect3DDevice9::_bind_GetDeviceCaps},
	{"GetDisplayMode", &luna_wrapper_IDirect3DDevice9::_bind_GetDisplayMode},
	{"GetCreationParameters", &luna_wrapper_IDirect3DDevice9::_bind_GetCreationParameters},
	{"SetCursorProperties", &luna_wrapper_IDirect3DDevice9::_bind_SetCursorProperties},
	{"SetCursorPosition", &luna_wrapper_IDirect3DDevice9::_bind_SetCursorPosition},
	{"ShowCursor", &luna_wrapper_IDirect3DDevice9::_bind_ShowCursor},
	{"GetNumberOfSwapChains", &luna_wrapper_IDirect3DDevice9::_bind_GetNumberOfSwapChains},
	{"Reset", &luna_wrapper_IDirect3DDevice9::_bind_Reset},
	{"GetRasterStatus", &luna_wrapper_IDirect3DDevice9::_bind_GetRasterStatus},
	{"SetDialogBoxMode", &luna_wrapper_IDirect3DDevice9::_bind_SetDialogBoxMode},
	{"UpdateSurface", &luna_wrapper_IDirect3DDevice9::_bind_UpdateSurface},
	{"UpdateTexture", &luna_wrapper_IDirect3DDevice9::_bind_UpdateTexture},
	{"GetRenderTargetData", &luna_wrapper_IDirect3DDevice9::_bind_GetRenderTargetData},
	{"GetFrontBufferData", &luna_wrapper_IDirect3DDevice9::_bind_GetFrontBufferData},
	{"StretchRect", &luna_wrapper_IDirect3DDevice9::_bind_StretchRect},
	{"ColorFill", &luna_wrapper_IDirect3DDevice9::_bind_ColorFill},
	{"SetRenderTarget", &luna_wrapper_IDirect3DDevice9::_bind_SetRenderTarget},
	{"SetDepthStencilSurface", &luna_wrapper_IDirect3DDevice9::_bind_SetDepthStencilSurface},
	{"BeginScene", &luna_wrapper_IDirect3DDevice9::_bind_BeginScene},
	{"EndScene", &luna_wrapper_IDirect3DDevice9::_bind_EndScene},
	{"Clear", &luna_wrapper_IDirect3DDevice9::_bind_Clear},
	{"SetTransform", &luna_wrapper_IDirect3DDevice9::_bind_SetTransform},
	{"GetTransform", &luna_wrapper_IDirect3DDevice9::_bind_GetTransform},
	{"MultiplyTransform", &luna_wrapper_IDirect3DDevice9::_bind_MultiplyTransform},
	{"SetViewport", &luna_wrapper_IDirect3DDevice9::_bind_SetViewport},
	{"GetViewport", &luna_wrapper_IDirect3DDevice9::_bind_GetViewport},
	{"SetMaterial", &luna_wrapper_IDirect3DDevice9::_bind_SetMaterial},
	{"GetMaterial", &luna_wrapper_IDirect3DDevice9::_bind_GetMaterial},
	{"SetLight", &luna_wrapper_IDirect3DDevice9::_bind_SetLight},
	{"GetLight", &luna_wrapper_IDirect3DDevice9::_bind_GetLight},
	{"LightEnable", &luna_wrapper_IDirect3DDevice9::_bind_LightEnable},
	{"GetLightEnable", &luna_wrapper_IDirect3DDevice9::_bind_GetLightEnable},
	{"SetClipPlane", &luna_wrapper_IDirect3DDevice9::_bind_SetClipPlane},
	{"GetClipPlane", &luna_wrapper_IDirect3DDevice9::_bind_GetClipPlane},
	{"SetRenderState", &luna_wrapper_IDirect3DDevice9::_bind_SetRenderState},
	{"GetRenderState", &luna_wrapper_IDirect3DDevice9::_bind_GetRenderState},
	{"BeginStateBlock", &luna_wrapper_IDirect3DDevice9::_bind_BeginStateBlock},
	{"SetClipStatus", &luna_wrapper_IDirect3DDevice9::_bind_SetClipStatus},
	{"GetClipStatus", &luna_wrapper_IDirect3DDevice9::_bind_GetClipStatus},
	{"SetTexture", &luna_wrapper_IDirect3DDevice9::_bind_SetTexture},
	{"GetTextureStageState", &luna_wrapper_IDirect3DDevice9::_bind_GetTextureStageState},
	{"SetTextureStageState", &luna_wrapper_IDirect3DDevice9::_bind_SetTextureStageState},
	{"GetSamplerState", &luna_wrapper_IDirect3DDevice9::_bind_GetSamplerState},
	{"SetSamplerState", &luna_wrapper_IDirect3DDevice9::_bind_SetSamplerState},
	{"ValidateDevice", &luna_wrapper_IDirect3DDevice9::_bind_ValidateDevice},
	{"SetCurrentTexturePalette", &luna_wrapper_IDirect3DDevice9::_bind_SetCurrentTexturePalette},
	{"GetCurrentTexturePalette", &luna_wrapper_IDirect3DDevice9::_bind_GetCurrentTexturePalette},
	{"SetScissorRect", &luna_wrapper_IDirect3DDevice9::_bind_SetScissorRect},
	{"GetScissorRect", &luna_wrapper_IDirect3DDevice9::_bind_GetScissorRect},
	{"SetSoftwareVertexProcessing", &luna_wrapper_IDirect3DDevice9::_bind_SetSoftwareVertexProcessing},
	{"GetSoftwareVertexProcessing", &luna_wrapper_IDirect3DDevice9::_bind_GetSoftwareVertexProcessing},
	{"SetNPatchMode", &luna_wrapper_IDirect3DDevice9::_bind_SetNPatchMode},
	{"GetNPatchMode", &luna_wrapper_IDirect3DDevice9::_bind_GetNPatchMode},
	{"DrawPrimitive", &luna_wrapper_IDirect3DDevice9::_bind_DrawPrimitive},
	{"DrawIndexedPrimitive", &luna_wrapper_IDirect3DDevice9::_bind_DrawIndexedPrimitive},
	{"DrawPrimitiveUP", &luna_wrapper_IDirect3DDevice9::_bind_DrawPrimitiveUP},
	{"DrawIndexedPrimitiveUP", &luna_wrapper_IDirect3DDevice9::_bind_DrawIndexedPrimitiveUP},
	{"ProcessVertices", &luna_wrapper_IDirect3DDevice9::_bind_ProcessVertices},
	{"SetVertexDeclaration", &luna_wrapper_IDirect3DDevice9::_bind_SetVertexDeclaration},
	{"SetFVF", &luna_wrapper_IDirect3DDevice9::_bind_SetFVF},
	{"GetFVF", &luna_wrapper_IDirect3DDevice9::_bind_GetFVF},
	{"SetVertexShader", &luna_wrapper_IDirect3DDevice9::_bind_SetVertexShader},
	{"SetVertexShaderConstantF", &luna_wrapper_IDirect3DDevice9::_bind_SetVertexShaderConstantF},
	{"GetVertexShaderConstantF", &luna_wrapper_IDirect3DDevice9::_bind_GetVertexShaderConstantF},
	{"SetVertexShaderConstantI", &luna_wrapper_IDirect3DDevice9::_bind_SetVertexShaderConstantI},
	{"GetVertexShaderConstantI", &luna_wrapper_IDirect3DDevice9::_bind_GetVertexShaderConstantI},
	{"SetVertexShaderConstantB", &luna_wrapper_IDirect3DDevice9::_bind_SetVertexShaderConstantB},
	{"GetVertexShaderConstantB", &luna_wrapper_IDirect3DDevice9::_bind_GetVertexShaderConstantB},
	{"SetStreamSource", &luna_wrapper_IDirect3DDevice9::_bind_SetStreamSource},
	{"SetStreamSourceFreq", &luna_wrapper_IDirect3DDevice9::_bind_SetStreamSourceFreq},
	{"GetStreamSourceFreq", &luna_wrapper_IDirect3DDevice9::_bind_GetStreamSourceFreq},
	{"SetIndices", &luna_wrapper_IDirect3DDevice9::_bind_SetIndices},
	{"SetPixelShader", &luna_wrapper_IDirect3DDevice9::_bind_SetPixelShader},
	{"SetPixelShaderConstantF", &luna_wrapper_IDirect3DDevice9::_bind_SetPixelShaderConstantF},
	{"GetPixelShaderConstantF", &luna_wrapper_IDirect3DDevice9::_bind_GetPixelShaderConstantF},
	{"SetPixelShaderConstantI", &luna_wrapper_IDirect3DDevice9::_bind_SetPixelShaderConstantI},
	{"GetPixelShaderConstantI", &luna_wrapper_IDirect3DDevice9::_bind_GetPixelShaderConstantI},
	{"SetPixelShaderConstantB", &luna_wrapper_IDirect3DDevice9::_bind_SetPixelShaderConstantB},
	{"GetPixelShaderConstantB", &luna_wrapper_IDirect3DDevice9::_bind_GetPixelShaderConstantB},
	{"DrawRectPatch", &luna_wrapper_IDirect3DDevice9::_bind_DrawRectPatch},
	{"DrawTriPatch", &luna_wrapper_IDirect3DDevice9::_bind_DrawTriPatch},
	{"DeletePatch", &luna_wrapper_IDirect3DDevice9::_bind_DeletePatch},
	{"compileShaderFromFile", &luna_wrapper_IDirect3DDevice9::_bind_compileShaderFromFile},
	{"compileShaderFromMemory", &luna_wrapper_IDirect3DDevice9::_bind_compileShaderFromMemory},
	{"createVertexShader", &luna_wrapper_IDirect3DDevice9::_bind_createVertexShader},
	{"createPixelShader", &luna_wrapper_IDirect3DDevice9::_bind_createPixelShader},
	{"createVec3Declaration", &luna_wrapper_IDirect3DDevice9::_bind_createVec3Declaration},
	{"createVec4Declaration", &luna_wrapper_IDirect3DDevice9::_bind_createVec4Declaration},
	{"createVertexBuffer", &luna_wrapper_IDirect3DDevice9::_bind_createVertexBuffer},
	{"createTextureFromFile", &luna_wrapper_IDirect3DDevice9::_bind_createTextureFromFile},
	{"createTextureFromMemory", &luna_wrapper_IDirect3DDevice9::_bind_createTextureFromMemory},
	{"createTexture", &luna_wrapper_IDirect3DDevice9::_bind_createTexture},
	{"createNoiseTexture", &luna_wrapper_IDirect3DDevice9::_bind_createNoiseTexture},
	{"createDepthSurface", &luna_wrapper_IDirect3DDevice9::_bind_createDepthSurface},
	{"updateTexture", &luna_wrapper_IDirect3DDevice9::_bind_updateTexture},
	{"createFont", &luna_wrapper_IDirect3DDevice9::_bind_createFont},
	{"createSprite", &luna_wrapper_IDirect3DDevice9::_bind_createSprite},
	{"setDefaultState", &luna_wrapper_IDirect3DDevice9::_bind_setDefaultState},
	{"setUniform", &luna_wrapper_IDirect3DDevice9::_bind_setUniform},
	{"dynCast", &luna_wrapper_IDirect3DDevice9::_bind_dynCast},
	{"__eq", &luna_wrapper_IDirect3DDevice9::_bind___eq},
	{"fromVoid", &luna_wrapper_IDirect3DDevice9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDirect3DDevice9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< IDirect3DDevice9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDirect3DDevice9 >::enumValues[] = {
	{0,0}
};


