#include <plug_common.h>

class luna_wrapper_D3DPRESENT_PARAMETERS {
public:
	typedef Luna< D3DPRESENT_PARAMETERS > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19068793) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DPRESENT_PARAMETERS*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DPRESENT_PARAMETERS* rhs =(Luna< D3DPRESENT_PARAMETERS >::check(L,2));
		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
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

		D3DPRESENT_PARAMETERS* self= (D3DPRESENT_PARAMETERS*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DPRESENT_PARAMETERS >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,19068793) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
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

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DPRESENT_PARAMETERS");
		
		return luna_dynamicCast(L,converters,"D3DPRESENT_PARAMETERS",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getBackBufferWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBackBufferHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBackBufferFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBackBufferCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMultiSampleType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMultiSampleQuality(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSwapEffect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHDeviceWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEnableAutoDepthStencil(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAutoDepthStencilFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_FullScreen_RefreshRateInHz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPresentationInterval(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBackBufferWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBackBufferHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBackBufferFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBackBufferCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMultiSampleType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMultiSampleQuality(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSwapEffect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHDeviceWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2231045) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWindowed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setEnableAutoDepthStencil(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAutoDepthStencilFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_FullScreen_RefreshRateInHz(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPresentationInterval(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int D3DPRESENT_PARAMETERS::BackBufferWidth()
	static int _bind_getBackBufferWidth(lua_State *L) {
		if (!_lg_typecheck_getBackBufferWidth(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DPRESENT_PARAMETERS::BackBufferWidth() function, expected prototype:\nunsigned int D3DPRESENT_PARAMETERS::BackBufferWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DPRESENT_PARAMETERS::BackBufferWidth(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->BackBufferWidth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DPRESENT_PARAMETERS::BackBufferHeight()
	static int _bind_getBackBufferHeight(lua_State *L) {
		if (!_lg_typecheck_getBackBufferHeight(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DPRESENT_PARAMETERS::BackBufferHeight() function, expected prototype:\nunsigned int D3DPRESENT_PARAMETERS::BackBufferHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DPRESENT_PARAMETERS::BackBufferHeight(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->BackBufferHeight;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DFORMAT D3DPRESENT_PARAMETERS::BackBufferFormat()
	static int _bind_getBackBufferFormat(lua_State *L) {
		if (!_lg_typecheck_getBackBufferFormat(L)) {
			luaL_error(L, "luna typecheck failed in D3DFORMAT D3DPRESENT_PARAMETERS::BackBufferFormat() function, expected prototype:\nD3DFORMAT D3DPRESENT_PARAMETERS::BackBufferFormat()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DFORMAT D3DPRESENT_PARAMETERS::BackBufferFormat(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DFORMAT lret = self->BackBufferFormat;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DPRESENT_PARAMETERS::BackBufferCount()
	static int _bind_getBackBufferCount(lua_State *L) {
		if (!_lg_typecheck_getBackBufferCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DPRESENT_PARAMETERS::BackBufferCount() function, expected prototype:\nunsigned int D3DPRESENT_PARAMETERS::BackBufferCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DPRESENT_PARAMETERS::BackBufferCount(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->BackBufferCount;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DMULTISAMPLE_TYPE D3DPRESENT_PARAMETERS::MultiSampleType()
	static int _bind_getMultiSampleType(lua_State *L) {
		if (!_lg_typecheck_getMultiSampleType(L)) {
			luaL_error(L, "luna typecheck failed in D3DMULTISAMPLE_TYPE D3DPRESENT_PARAMETERS::MultiSampleType() function, expected prototype:\nD3DMULTISAMPLE_TYPE D3DPRESENT_PARAMETERS::MultiSampleType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DMULTISAMPLE_TYPE D3DPRESENT_PARAMETERS::MultiSampleType(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DMULTISAMPLE_TYPE lret = self->MultiSampleType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DPRESENT_PARAMETERS::MultiSampleQuality()
	static int _bind_getMultiSampleQuality(lua_State *L) {
		if (!_lg_typecheck_getMultiSampleQuality(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DPRESENT_PARAMETERS::MultiSampleQuality() function, expected prototype:\nunsigned long D3DPRESENT_PARAMETERS::MultiSampleQuality()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DPRESENT_PARAMETERS::MultiSampleQuality(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->MultiSampleQuality;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DSWAPEFFECT D3DPRESENT_PARAMETERS::SwapEffect()
	static int _bind_getSwapEffect(lua_State *L) {
		if (!_lg_typecheck_getSwapEffect(L)) {
			luaL_error(L, "luna typecheck failed in D3DSWAPEFFECT D3DPRESENT_PARAMETERS::SwapEffect() function, expected prototype:\nD3DSWAPEFFECT D3DPRESENT_PARAMETERS::SwapEffect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DSWAPEFFECT D3DPRESENT_PARAMETERS::SwapEffect(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DSWAPEFFECT lret = self->SwapEffect;
		lua_pushnumber(L,lret);

		return 1;
	}

	// HWND D3DPRESENT_PARAMETERS::hDeviceWindow()
	static int _bind_getHDeviceWindow(lua_State *L) {
		if (!_lg_typecheck_getHDeviceWindow(L)) {
			luaL_error(L, "luna typecheck failed in HWND D3DPRESENT_PARAMETERS::hDeviceWindow() function, expected prototype:\nHWND D3DPRESENT_PARAMETERS::hDeviceWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND D3DPRESENT_PARAMETERS::hDeviceWindow(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const HWND* lret = &self->hDeviceWindow;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,false);

		return 1;
	}

	// int D3DPRESENT_PARAMETERS::Windowed()
	static int _bind_getWindowed(lua_State *L) {
		if (!_lg_typecheck_getWindowed(L)) {
			luaL_error(L, "luna typecheck failed in int D3DPRESENT_PARAMETERS::Windowed() function, expected prototype:\nint D3DPRESENT_PARAMETERS::Windowed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int D3DPRESENT_PARAMETERS::Windowed(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Windowed;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int D3DPRESENT_PARAMETERS::EnableAutoDepthStencil()
	static int _bind_getEnableAutoDepthStencil(lua_State *L) {
		if (!_lg_typecheck_getEnableAutoDepthStencil(L)) {
			luaL_error(L, "luna typecheck failed in int D3DPRESENT_PARAMETERS::EnableAutoDepthStencil() function, expected prototype:\nint D3DPRESENT_PARAMETERS::EnableAutoDepthStencil()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int D3DPRESENT_PARAMETERS::EnableAutoDepthStencil(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->EnableAutoDepthStencil;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DFORMAT D3DPRESENT_PARAMETERS::AutoDepthStencilFormat()
	static int _bind_getAutoDepthStencilFormat(lua_State *L) {
		if (!_lg_typecheck_getAutoDepthStencilFormat(L)) {
			luaL_error(L, "luna typecheck failed in D3DFORMAT D3DPRESENT_PARAMETERS::AutoDepthStencilFormat() function, expected prototype:\nD3DFORMAT D3DPRESENT_PARAMETERS::AutoDepthStencilFormat()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DFORMAT D3DPRESENT_PARAMETERS::AutoDepthStencilFormat(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DFORMAT lret = self->AutoDepthStencilFormat;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DPRESENT_PARAMETERS::Flags()
	static int _bind_getFlags(lua_State *L) {
		if (!_lg_typecheck_getFlags(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DPRESENT_PARAMETERS::Flags() function, expected prototype:\nunsigned long D3DPRESENT_PARAMETERS::Flags()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DPRESENT_PARAMETERS::Flags(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Flags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DPRESENT_PARAMETERS::FullScreen_RefreshRateInHz()
	static int _bind_get_FullScreen_RefreshRateInHz(lua_State *L) {
		if (!_lg_typecheck_get_FullScreen_RefreshRateInHz(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DPRESENT_PARAMETERS::FullScreen_RefreshRateInHz() function, expected prototype:\nunsigned int D3DPRESENT_PARAMETERS::FullScreen_RefreshRateInHz()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DPRESENT_PARAMETERS::FullScreen_RefreshRateInHz(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->FullScreen_RefreshRateInHz;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DPRESENT_PARAMETERS::PresentationInterval()
	static int _bind_getPresentationInterval(lua_State *L) {
		if (!_lg_typecheck_getPresentationInterval(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DPRESENT_PARAMETERS::PresentationInterval() function, expected prototype:\nunsigned int D3DPRESENT_PARAMETERS::PresentationInterval()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DPRESENT_PARAMETERS::PresentationInterval(). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->PresentationInterval;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DPRESENT_PARAMETERS::BackBufferWidth(unsigned int value)
	static int _bind_setBackBufferWidth(lua_State *L) {
		if (!_lg_typecheck_setBackBufferWidth(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::BackBufferWidth(unsigned int value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::BackBufferWidth(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::BackBufferWidth(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BackBufferWidth = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::BackBufferHeight(unsigned int value)
	static int _bind_setBackBufferHeight(lua_State *L) {
		if (!_lg_typecheck_setBackBufferHeight(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::BackBufferHeight(unsigned int value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::BackBufferHeight(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::BackBufferHeight(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BackBufferHeight = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::BackBufferFormat(D3DFORMAT value)
	static int _bind_setBackBufferFormat(lua_State *L) {
		if (!_lg_typecheck_setBackBufferFormat(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::BackBufferFormat(D3DFORMAT value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::BackBufferFormat(D3DFORMAT value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DFORMAT value=(D3DFORMAT)lua_tointeger(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::BackBufferFormat(D3DFORMAT). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BackBufferFormat = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::BackBufferCount(unsigned int value)
	static int _bind_setBackBufferCount(lua_State *L) {
		if (!_lg_typecheck_setBackBufferCount(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::BackBufferCount(unsigned int value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::BackBufferCount(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::BackBufferCount(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BackBufferCount = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::MultiSampleType(D3DMULTISAMPLE_TYPE value)
	static int _bind_setMultiSampleType(lua_State *L) {
		if (!_lg_typecheck_setMultiSampleType(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::MultiSampleType(D3DMULTISAMPLE_TYPE value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::MultiSampleType(D3DMULTISAMPLE_TYPE value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DMULTISAMPLE_TYPE value=(D3DMULTISAMPLE_TYPE)lua_tointeger(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::MultiSampleType(D3DMULTISAMPLE_TYPE). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiSampleType = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::MultiSampleQuality(unsigned long value)
	static int _bind_setMultiSampleQuality(lua_State *L) {
		if (!_lg_typecheck_setMultiSampleQuality(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::MultiSampleQuality(unsigned long value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::MultiSampleQuality(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::MultiSampleQuality(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MultiSampleQuality = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::SwapEffect(D3DSWAPEFFECT value)
	static int _bind_setSwapEffect(lua_State *L) {
		if (!_lg_typecheck_setSwapEffect(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::SwapEffect(D3DSWAPEFFECT value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::SwapEffect(D3DSWAPEFFECT value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DSWAPEFFECT value=(D3DSWAPEFFECT)lua_tointeger(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::SwapEffect(D3DSWAPEFFECT). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SwapEffect = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::hDeviceWindow(HWND value)
	static int _bind_setHDeviceWindow(lua_State *L) {
		if (!_lg_typecheck_setHDeviceWindow(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::hDeviceWindow(HWND value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::hDeviceWindow(HWND value)\nClass arguments details:\narg 1 ID = 2231045\n\n%s",luna_dumpStack(L).c_str());
		}

		HWND* value_ptr=(Luna< HWND >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DPRESENT_PARAMETERS::hDeviceWindow function");
		}
		HWND value=*value_ptr;

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::hDeviceWindow(HWND). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->hDeviceWindow = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::Windowed(int value)
	static int _bind_setWindowed(lua_State *L) {
		if (!_lg_typecheck_setWindowed(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::Windowed(int value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::Windowed(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::Windowed(int). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Windowed = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::EnableAutoDepthStencil(int value)
	static int _bind_setEnableAutoDepthStencil(lua_State *L) {
		if (!_lg_typecheck_setEnableAutoDepthStencil(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::EnableAutoDepthStencil(int value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::EnableAutoDepthStencil(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::EnableAutoDepthStencil(int). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableAutoDepthStencil = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::AutoDepthStencilFormat(D3DFORMAT value)
	static int _bind_setAutoDepthStencilFormat(lua_State *L) {
		if (!_lg_typecheck_setAutoDepthStencilFormat(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::AutoDepthStencilFormat(D3DFORMAT value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::AutoDepthStencilFormat(D3DFORMAT value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DFORMAT value=(D3DFORMAT)lua_tointeger(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::AutoDepthStencilFormat(D3DFORMAT). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AutoDepthStencilFormat = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::Flags(unsigned long value)
	static int _bind_setFlags(lua_State *L) {
		if (!_lg_typecheck_setFlags(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::Flags(unsigned long value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::Flags(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::Flags(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Flags = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::FullScreen_RefreshRateInHz(unsigned int value)
	static int _bind_set_FullScreen_RefreshRateInHz(lua_State *L) {
		if (!_lg_typecheck_set_FullScreen_RefreshRateInHz(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::FullScreen_RefreshRateInHz(unsigned int value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::FullScreen_RefreshRateInHz(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::FullScreen_RefreshRateInHz(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FullScreen_RefreshRateInHz = value;

		return 0;
	}

	// void D3DPRESENT_PARAMETERS::PresentationInterval(unsigned int value)
	static int _bind_setPresentationInterval(lua_State *L) {
		if (!_lg_typecheck_setPresentationInterval(L)) {
			luaL_error(L, "luna typecheck failed in void D3DPRESENT_PARAMETERS::PresentationInterval(unsigned int value) function, expected prototype:\nvoid D3DPRESENT_PARAMETERS::PresentationInterval(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DPRESENT_PARAMETERS* self=(Luna< D3DPRESENT_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DPRESENT_PARAMETERS::PresentationInterval(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DPRESENT_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PresentationInterval = value;

		return 0;
	}


	// Operator binds:

};

D3DPRESENT_PARAMETERS* LunaTraits< D3DPRESENT_PARAMETERS >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DPRESENT_PARAMETERS >::_bind_dtor(D3DPRESENT_PARAMETERS* obj) {
	delete obj;
}

const char LunaTraits< D3DPRESENT_PARAMETERS >::className[] = "D3DPRESENT_PARAMETERS";
const char LunaTraits< D3DPRESENT_PARAMETERS >::fullName[] = "D3DPRESENT_PARAMETERS";
const char LunaTraits< D3DPRESENT_PARAMETERS >::moduleName[] = "dx9";
const char* LunaTraits< D3DPRESENT_PARAMETERS >::parents[] = {0};
const int LunaTraits< D3DPRESENT_PARAMETERS >::hash = 19068793;
const int LunaTraits< D3DPRESENT_PARAMETERS >::uniqueIDs[] = {19068793,0};

luna_RegType LunaTraits< D3DPRESENT_PARAMETERS >::methods[] = {
	{"getBackBufferWidth", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getBackBufferWidth},
	{"getBackBufferHeight", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getBackBufferHeight},
	{"getBackBufferFormat", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getBackBufferFormat},
	{"getBackBufferCount", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getBackBufferCount},
	{"getMultiSampleType", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getMultiSampleType},
	{"getMultiSampleQuality", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getMultiSampleQuality},
	{"getSwapEffect", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getSwapEffect},
	{"getHDeviceWindow", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getHDeviceWindow},
	{"getWindowed", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getWindowed},
	{"getEnableAutoDepthStencil", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getEnableAutoDepthStencil},
	{"getAutoDepthStencilFormat", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getAutoDepthStencilFormat},
	{"getFlags", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getFlags},
	{"get_FullScreen_RefreshRateInHz", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_get_FullScreen_RefreshRateInHz},
	{"getPresentationInterval", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_getPresentationInterval},
	{"setBackBufferWidth", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setBackBufferWidth},
	{"setBackBufferHeight", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setBackBufferHeight},
	{"setBackBufferFormat", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setBackBufferFormat},
	{"setBackBufferCount", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setBackBufferCount},
	{"setMultiSampleType", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setMultiSampleType},
	{"setMultiSampleQuality", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setMultiSampleQuality},
	{"setSwapEffect", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setSwapEffect},
	{"setHDeviceWindow", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setHDeviceWindow},
	{"setWindowed", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setWindowed},
	{"setEnableAutoDepthStencil", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setEnableAutoDepthStencil},
	{"setAutoDepthStencilFormat", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setAutoDepthStencilFormat},
	{"setFlags", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setFlags},
	{"set_FullScreen_RefreshRateInHz", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_set_FullScreen_RefreshRateInHz},
	{"setPresentationInterval", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_setPresentationInterval},
	{"dynCast", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DPRESENT_PARAMETERS::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DPRESENT_PARAMETERS >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DPRESENT_PARAMETERS >::enumValues[] = {
	{0,0}
};


