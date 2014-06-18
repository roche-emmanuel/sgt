#include <plug_common.h>

class luna_wrapper_IDirect3D9 {
public:
	typedef Luna< IDirect3D9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74662973) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IDirect3D9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3D9* rhs =(Luna< IDirect3D9 >::check(L,2));
		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
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

		IDirect3D9* self= (IDirect3D9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDirect3D9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74662973) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IDirect3D9 >::check(L,1));
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

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IDirect3D9");
		
		return luna_dynamicCast(L,converters,"IDirect3D9",name);
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

	inline static bool _lg_typecheck_RegisterSoftwareDevice(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAdapterCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetAdapterIdentifier(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,34471055)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAdapterModeCount(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnumAdapterModes(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,90649279)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAdapterDisplayMode(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,90649279)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CheckDeviceType(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CheckDeviceFormat(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CheckDeviceMultiSampleType(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CheckDepthStencilMatch(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CheckDeviceFormatConversion(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDeviceCaps(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,31005348)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAdapterMonitor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned long IDirect3D9::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3D9::AddRef() function, expected prototype:\nunsigned long IDirect3D9::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3D9::AddRef(). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3D9::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3D9::Release() function, expected prototype:\nunsigned long IDirect3D9::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3D9::Release(). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3D9::RegisterSoftwareDevice(void * pInitializeFunction)
	static int _bind_RegisterSoftwareDevice(lua_State *L) {
		if (!_lg_typecheck_RegisterSoftwareDevice(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3D9::RegisterSoftwareDevice(void * pInitializeFunction) function, expected prototype:\nlong IDirect3D9::RegisterSoftwareDevice(void * pInitializeFunction)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* pInitializeFunction=(Luna< void >::check(L,2));

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3D9::RegisterSoftwareDevice(void *). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->RegisterSoftwareDevice(pInitializeFunction);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int IDirect3D9::GetAdapterCount()
	static int _bind_GetAdapterCount(lua_State *L) {
		if (!_lg_typecheck_GetAdapterCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int IDirect3D9::GetAdapterCount() function, expected prototype:\nunsigned int IDirect3D9::GetAdapterCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int IDirect3D9::GetAdapterCount(). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetAdapterCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3D9::GetAdapterIdentifier(unsigned int Adapter, unsigned long Flags, D3DADAPTER_IDENTIFIER9 * pIdentifier)
	static int _bind_GetAdapterIdentifier(lua_State *L) {
		if (!_lg_typecheck_GetAdapterIdentifier(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3D9::GetAdapterIdentifier(unsigned int Adapter, unsigned long Flags, D3DADAPTER_IDENTIFIER9 * pIdentifier) function, expected prototype:\nlong IDirect3D9::GetAdapterIdentifier(unsigned int Adapter, unsigned long Flags, D3DADAPTER_IDENTIFIER9 * pIdentifier)\nClass arguments details:\narg 3 ID = 34471055\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Adapter=(unsigned int)lua_tointeger(L,2);
		unsigned long Flags=(unsigned long)lua_tonumber(L,3);
		D3DADAPTER_IDENTIFIER9* pIdentifier=(Luna< D3DADAPTER_IDENTIFIER9 >::check(L,4));

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3D9::GetAdapterIdentifier(unsigned int, unsigned long, D3DADAPTER_IDENTIFIER9 *). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetAdapterIdentifier(Adapter, Flags, pIdentifier);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int IDirect3D9::GetAdapterModeCount(unsigned int Adapter, D3DFORMAT Format)
	static int _bind_GetAdapterModeCount(lua_State *L) {
		if (!_lg_typecheck_GetAdapterModeCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int IDirect3D9::GetAdapterModeCount(unsigned int Adapter, D3DFORMAT Format) function, expected prototype:\nunsigned int IDirect3D9::GetAdapterModeCount(unsigned int Adapter, D3DFORMAT Format)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Adapter=(unsigned int)lua_tointeger(L,2);
		D3DFORMAT Format=(D3DFORMAT)lua_tointeger(L,3);

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int IDirect3D9::GetAdapterModeCount(unsigned int, D3DFORMAT). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetAdapterModeCount(Adapter, Format);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3D9::EnumAdapterModes(unsigned int Adapter, D3DFORMAT Format, unsigned int Mode, D3DDISPLAYMODE * pMode)
	static int _bind_EnumAdapterModes(lua_State *L) {
		if (!_lg_typecheck_EnumAdapterModes(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3D9::EnumAdapterModes(unsigned int Adapter, D3DFORMAT Format, unsigned int Mode, D3DDISPLAYMODE * pMode) function, expected prototype:\nlong IDirect3D9::EnumAdapterModes(unsigned int Adapter, D3DFORMAT Format, unsigned int Mode, D3DDISPLAYMODE * pMode)\nClass arguments details:\narg 4 ID = 90649279\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Adapter=(unsigned int)lua_tointeger(L,2);
		D3DFORMAT Format=(D3DFORMAT)lua_tointeger(L,3);
		unsigned int Mode=(unsigned int)lua_tointeger(L,4);
		D3DDISPLAYMODE* pMode=(Luna< D3DDISPLAYMODE >::check(L,5));

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3D9::EnumAdapterModes(unsigned int, D3DFORMAT, unsigned int, D3DDISPLAYMODE *). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->EnumAdapterModes(Adapter, Format, Mode, pMode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3D9::GetAdapterDisplayMode(unsigned int Adapter, D3DDISPLAYMODE * pMode)
	static int _bind_GetAdapterDisplayMode(lua_State *L) {
		if (!_lg_typecheck_GetAdapterDisplayMode(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3D9::GetAdapterDisplayMode(unsigned int Adapter, D3DDISPLAYMODE * pMode) function, expected prototype:\nlong IDirect3D9::GetAdapterDisplayMode(unsigned int Adapter, D3DDISPLAYMODE * pMode)\nClass arguments details:\narg 2 ID = 90649279\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Adapter=(unsigned int)lua_tointeger(L,2);
		D3DDISPLAYMODE* pMode=(Luna< D3DDISPLAYMODE >::check(L,3));

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3D9::GetAdapterDisplayMode(unsigned int, D3DDISPLAYMODE *). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetAdapterDisplayMode(Adapter, pMode);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3D9::CheckDeviceType(unsigned int Adapter, D3DDEVTYPE DevType, D3DFORMAT AdapterFormat, D3DFORMAT BackBufferFormat, int bWindowed)
	static int _bind_CheckDeviceType(lua_State *L) {
		if (!_lg_typecheck_CheckDeviceType(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3D9::CheckDeviceType(unsigned int Adapter, D3DDEVTYPE DevType, D3DFORMAT AdapterFormat, D3DFORMAT BackBufferFormat, int bWindowed) function, expected prototype:\nlong IDirect3D9::CheckDeviceType(unsigned int Adapter, D3DDEVTYPE DevType, D3DFORMAT AdapterFormat, D3DFORMAT BackBufferFormat, int bWindowed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Adapter=(unsigned int)lua_tointeger(L,2);
		D3DDEVTYPE DevType=(D3DDEVTYPE)lua_tointeger(L,3);
		D3DFORMAT AdapterFormat=(D3DFORMAT)lua_tointeger(L,4);
		D3DFORMAT BackBufferFormat=(D3DFORMAT)lua_tointeger(L,5);
		int bWindowed=(int)lua_tointeger(L,6);

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3D9::CheckDeviceType(unsigned int, D3DDEVTYPE, D3DFORMAT, D3DFORMAT, int). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->CheckDeviceType(Adapter, DevType, AdapterFormat, BackBufferFormat, bWindowed);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3D9::CheckDeviceFormat(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, unsigned long Usage, D3DRESOURCETYPE RType, D3DFORMAT CheckFormat)
	static int _bind_CheckDeviceFormat(lua_State *L) {
		if (!_lg_typecheck_CheckDeviceFormat(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3D9::CheckDeviceFormat(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, unsigned long Usage, D3DRESOURCETYPE RType, D3DFORMAT CheckFormat) function, expected prototype:\nlong IDirect3D9::CheckDeviceFormat(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, unsigned long Usage, D3DRESOURCETYPE RType, D3DFORMAT CheckFormat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Adapter=(unsigned int)lua_tointeger(L,2);
		D3DDEVTYPE DeviceType=(D3DDEVTYPE)lua_tointeger(L,3);
		D3DFORMAT AdapterFormat=(D3DFORMAT)lua_tointeger(L,4);
		unsigned long Usage=(unsigned long)lua_tonumber(L,5);
		D3DRESOURCETYPE RType=(D3DRESOURCETYPE)lua_tointeger(L,6);
		D3DFORMAT CheckFormat=(D3DFORMAT)lua_tointeger(L,7);

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3D9::CheckDeviceFormat(unsigned int, D3DDEVTYPE, D3DFORMAT, unsigned long, D3DRESOURCETYPE, D3DFORMAT). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->CheckDeviceFormat(Adapter, DeviceType, AdapterFormat, Usage, RType, CheckFormat);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3D9::CheckDeviceMultiSampleType(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SurfaceFormat, int Windowed, D3DMULTISAMPLE_TYPE MultiSampleType, unsigned long * pQualityLevels)
	static int _bind_CheckDeviceMultiSampleType(lua_State *L) {
		if (!_lg_typecheck_CheckDeviceMultiSampleType(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3D9::CheckDeviceMultiSampleType(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SurfaceFormat, int Windowed, D3DMULTISAMPLE_TYPE MultiSampleType, unsigned long * pQualityLevels) function, expected prototype:\nlong IDirect3D9::CheckDeviceMultiSampleType(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SurfaceFormat, int Windowed, D3DMULTISAMPLE_TYPE MultiSampleType, unsigned long * pQualityLevels)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Adapter=(unsigned int)lua_tointeger(L,2);
		D3DDEVTYPE DeviceType=(D3DDEVTYPE)lua_tointeger(L,3);
		D3DFORMAT SurfaceFormat=(D3DFORMAT)lua_tointeger(L,4);
		int Windowed=(int)lua_tointeger(L,5);
		D3DMULTISAMPLE_TYPE MultiSampleType=(D3DMULTISAMPLE_TYPE)lua_tointeger(L,6);
		unsigned long* pQualityLevels=(unsigned long*)Luna< void >::check(L,7);

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3D9::CheckDeviceMultiSampleType(unsigned int, D3DDEVTYPE, D3DFORMAT, int, D3DMULTISAMPLE_TYPE, unsigned long *). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->CheckDeviceMultiSampleType(Adapter, DeviceType, SurfaceFormat, Windowed, MultiSampleType, pQualityLevels);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3D9::CheckDepthStencilMatch(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, D3DFORMAT RenderTargetFormat, D3DFORMAT DepthStencilFormat)
	static int _bind_CheckDepthStencilMatch(lua_State *L) {
		if (!_lg_typecheck_CheckDepthStencilMatch(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3D9::CheckDepthStencilMatch(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, D3DFORMAT RenderTargetFormat, D3DFORMAT DepthStencilFormat) function, expected prototype:\nlong IDirect3D9::CheckDepthStencilMatch(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, D3DFORMAT RenderTargetFormat, D3DFORMAT DepthStencilFormat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Adapter=(unsigned int)lua_tointeger(L,2);
		D3DDEVTYPE DeviceType=(D3DDEVTYPE)lua_tointeger(L,3);
		D3DFORMAT AdapterFormat=(D3DFORMAT)lua_tointeger(L,4);
		D3DFORMAT RenderTargetFormat=(D3DFORMAT)lua_tointeger(L,5);
		D3DFORMAT DepthStencilFormat=(D3DFORMAT)lua_tointeger(L,6);

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3D9::CheckDepthStencilMatch(unsigned int, D3DDEVTYPE, D3DFORMAT, D3DFORMAT, D3DFORMAT). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->CheckDepthStencilMatch(Adapter, DeviceType, AdapterFormat, RenderTargetFormat, DepthStencilFormat);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3D9::CheckDeviceFormatConversion(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SourceFormat, D3DFORMAT TargetFormat)
	static int _bind_CheckDeviceFormatConversion(lua_State *L) {
		if (!_lg_typecheck_CheckDeviceFormatConversion(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3D9::CheckDeviceFormatConversion(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SourceFormat, D3DFORMAT TargetFormat) function, expected prototype:\nlong IDirect3D9::CheckDeviceFormatConversion(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SourceFormat, D3DFORMAT TargetFormat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Adapter=(unsigned int)lua_tointeger(L,2);
		D3DDEVTYPE DeviceType=(D3DDEVTYPE)lua_tointeger(L,3);
		D3DFORMAT SourceFormat=(D3DFORMAT)lua_tointeger(L,4);
		D3DFORMAT TargetFormat=(D3DFORMAT)lua_tointeger(L,5);

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3D9::CheckDeviceFormatConversion(unsigned int, D3DDEVTYPE, D3DFORMAT, D3DFORMAT). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->CheckDeviceFormatConversion(Adapter, DeviceType, SourceFormat, TargetFormat);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long IDirect3D9::GetDeviceCaps(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DCAPS9 * pCaps)
	static int _bind_GetDeviceCaps(lua_State *L) {
		if (!_lg_typecheck_GetDeviceCaps(L)) {
			luaL_error(L, "luna typecheck failed in long IDirect3D9::GetDeviceCaps(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DCAPS9 * pCaps) function, expected prototype:\nlong IDirect3D9::GetDeviceCaps(unsigned int Adapter, D3DDEVTYPE DeviceType, D3DCAPS9 * pCaps)\nClass arguments details:\narg 3 ID = 31005348\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Adapter=(unsigned int)lua_tointeger(L,2);
		D3DDEVTYPE DeviceType=(D3DDEVTYPE)lua_tointeger(L,3);
		D3DCAPS9* pCaps=(Luna< D3DCAPS9 >::check(L,4));

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long IDirect3D9::GetDeviceCaps(unsigned int, D3DDEVTYPE, D3DCAPS9 *). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetDeviceCaps(Adapter, DeviceType, pCaps);
		lua_pushnumber(L,lret);

		return 1;
	}

	// HMONITOR IDirect3D9::GetAdapterMonitor(unsigned int Adapter)
	static int _bind_GetAdapterMonitor(lua_State *L) {
		if (!_lg_typecheck_GetAdapterMonitor(L)) {
			luaL_error(L, "luna typecheck failed in HMONITOR IDirect3D9::GetAdapterMonitor(unsigned int Adapter) function, expected prototype:\nHMONITOR IDirect3D9::GetAdapterMonitor(unsigned int Adapter)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int Adapter=(unsigned int)lua_tointeger(L,2);

		IDirect3D9* self=(Luna< IDirect3D9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call HMONITOR IDirect3D9::GetAdapterMonitor(unsigned int). Got : '%s'\n%s",typeid(Luna< IDirect3D9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HMONITOR stack_lret = self->GetAdapterMonitor(Adapter);
		HMONITOR* lret = new HMONITOR(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HMONITOR >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

IDirect3D9* LunaTraits< IDirect3D9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< IDirect3D9 >::_bind_dtor(IDirect3D9* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< IDirect3D9 >::className[] = "IDirect3D9";
const char LunaTraits< IDirect3D9 >::fullName[] = "IDirect3D9";
const char LunaTraits< IDirect3D9 >::moduleName[] = "dx9";
const char* LunaTraits< IDirect3D9 >::parents[] = {0};
const int LunaTraits< IDirect3D9 >::hash = 74662973;
const int LunaTraits< IDirect3D9 >::uniqueIDs[] = {74662973,0};

luna_RegType LunaTraits< IDirect3D9 >::methods[] = {
	{"AddRef", &luna_wrapper_IDirect3D9::_bind_AddRef},
	{"Release", &luna_wrapper_IDirect3D9::_bind_Release},
	{"RegisterSoftwareDevice", &luna_wrapper_IDirect3D9::_bind_RegisterSoftwareDevice},
	{"GetAdapterCount", &luna_wrapper_IDirect3D9::_bind_GetAdapterCount},
	{"GetAdapterIdentifier", &luna_wrapper_IDirect3D9::_bind_GetAdapterIdentifier},
	{"GetAdapterModeCount", &luna_wrapper_IDirect3D9::_bind_GetAdapterModeCount},
	{"EnumAdapterModes", &luna_wrapper_IDirect3D9::_bind_EnumAdapterModes},
	{"GetAdapterDisplayMode", &luna_wrapper_IDirect3D9::_bind_GetAdapterDisplayMode},
	{"CheckDeviceType", &luna_wrapper_IDirect3D9::_bind_CheckDeviceType},
	{"CheckDeviceFormat", &luna_wrapper_IDirect3D9::_bind_CheckDeviceFormat},
	{"CheckDeviceMultiSampleType", &luna_wrapper_IDirect3D9::_bind_CheckDeviceMultiSampleType},
	{"CheckDepthStencilMatch", &luna_wrapper_IDirect3D9::_bind_CheckDepthStencilMatch},
	{"CheckDeviceFormatConversion", &luna_wrapper_IDirect3D9::_bind_CheckDeviceFormatConversion},
	{"GetDeviceCaps", &luna_wrapper_IDirect3D9::_bind_GetDeviceCaps},
	{"GetAdapterMonitor", &luna_wrapper_IDirect3D9::_bind_GetAdapterMonitor},
	{"dynCast", &luna_wrapper_IDirect3D9::_bind_dynCast},
	{"__eq", &luna_wrapper_IDirect3D9::_bind___eq},
	{"fromVoid", &luna_wrapper_IDirect3D9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDirect3D9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< IDirect3D9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDirect3D9 >::enumValues[] = {
	{0,0}
};


