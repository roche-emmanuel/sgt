#include <plug_common.h>

class luna_wrapper_D3DDEVICE_CREATION_PARAMETERS {
public:
	typedef Luna< D3DDEVICE_CREATION_PARAMETERS > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29271768) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DDEVICE_CREATION_PARAMETERS*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DDEVICE_CREATION_PARAMETERS* rhs =(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,2));
		D3DDEVICE_CREATION_PARAMETERS* self=(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1));
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

		D3DDEVICE_CREATION_PARAMETERS* self= (D3DDEVICE_CREATION_PARAMETERS*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DDEVICE_CREATION_PARAMETERS >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,29271768) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1));
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

		D3DDEVICE_CREATION_PARAMETERS* self=(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DDEVICE_CREATION_PARAMETERS");
		
		return luna_dynamicCast(L,converters,"D3DDEVICE_CREATION_PARAMETERS",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getAdapterOrdinal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeviceType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHFocusWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBehaviorFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setAdapterOrdinal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeviceType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHFocusWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2231045) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBehaviorFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int D3DDEVICE_CREATION_PARAMETERS::AdapterOrdinal()
	static int _bind_getAdapterOrdinal(lua_State *L) {
		if (!_lg_typecheck_getAdapterOrdinal(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DDEVICE_CREATION_PARAMETERS::AdapterOrdinal() function, expected prototype:\nunsigned int D3DDEVICE_CREATION_PARAMETERS::AdapterOrdinal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DDEVICE_CREATION_PARAMETERS* self=(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DDEVICE_CREATION_PARAMETERS::AdapterOrdinal(). Got : '%s'\n%s",typeid(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->AdapterOrdinal;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DDEVTYPE D3DDEVICE_CREATION_PARAMETERS::DeviceType()
	static int _bind_getDeviceType(lua_State *L) {
		if (!_lg_typecheck_getDeviceType(L)) {
			luaL_error(L, "luna typecheck failed in D3DDEVTYPE D3DDEVICE_CREATION_PARAMETERS::DeviceType() function, expected prototype:\nD3DDEVTYPE D3DDEVICE_CREATION_PARAMETERS::DeviceType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DDEVICE_CREATION_PARAMETERS* self=(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DDEVTYPE D3DDEVICE_CREATION_PARAMETERS::DeviceType(). Got : '%s'\n%s",typeid(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DDEVTYPE lret = self->DeviceType;
		lua_pushnumber(L,lret);

		return 1;
	}

	// HWND D3DDEVICE_CREATION_PARAMETERS::hFocusWindow()
	static int _bind_getHFocusWindow(lua_State *L) {
		if (!_lg_typecheck_getHFocusWindow(L)) {
			luaL_error(L, "luna typecheck failed in HWND D3DDEVICE_CREATION_PARAMETERS::hFocusWindow() function, expected prototype:\nHWND D3DDEVICE_CREATION_PARAMETERS::hFocusWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DDEVICE_CREATION_PARAMETERS* self=(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND D3DDEVICE_CREATION_PARAMETERS::hFocusWindow(). Got : '%s'\n%s",typeid(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const HWND* lret = &self->hFocusWindow;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,false);

		return 1;
	}

	// unsigned long D3DDEVICE_CREATION_PARAMETERS::BehaviorFlags()
	static int _bind_getBehaviorFlags(lua_State *L) {
		if (!_lg_typecheck_getBehaviorFlags(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DDEVICE_CREATION_PARAMETERS::BehaviorFlags() function, expected prototype:\nunsigned long D3DDEVICE_CREATION_PARAMETERS::BehaviorFlags()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DDEVICE_CREATION_PARAMETERS* self=(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DDEVICE_CREATION_PARAMETERS::BehaviorFlags(). Got : '%s'\n%s",typeid(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->BehaviorFlags;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DDEVICE_CREATION_PARAMETERS::AdapterOrdinal(unsigned int value)
	static int _bind_setAdapterOrdinal(lua_State *L) {
		if (!_lg_typecheck_setAdapterOrdinal(L)) {
			luaL_error(L, "luna typecheck failed in void D3DDEVICE_CREATION_PARAMETERS::AdapterOrdinal(unsigned int value) function, expected prototype:\nvoid D3DDEVICE_CREATION_PARAMETERS::AdapterOrdinal(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DDEVICE_CREATION_PARAMETERS* self=(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DDEVICE_CREATION_PARAMETERS::AdapterOrdinal(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AdapterOrdinal = value;

		return 0;
	}

	// void D3DDEVICE_CREATION_PARAMETERS::DeviceType(D3DDEVTYPE value)
	static int _bind_setDeviceType(lua_State *L) {
		if (!_lg_typecheck_setDeviceType(L)) {
			luaL_error(L, "luna typecheck failed in void D3DDEVICE_CREATION_PARAMETERS::DeviceType(D3DDEVTYPE value) function, expected prototype:\nvoid D3DDEVICE_CREATION_PARAMETERS::DeviceType(D3DDEVTYPE value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DDEVTYPE value=(D3DDEVTYPE)lua_tointeger(L,2);

		D3DDEVICE_CREATION_PARAMETERS* self=(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DDEVICE_CREATION_PARAMETERS::DeviceType(D3DDEVTYPE). Got : '%s'\n%s",typeid(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeviceType = value;

		return 0;
	}

	// void D3DDEVICE_CREATION_PARAMETERS::hFocusWindow(HWND value)
	static int _bind_setHFocusWindow(lua_State *L) {
		if (!_lg_typecheck_setHFocusWindow(L)) {
			luaL_error(L, "luna typecheck failed in void D3DDEVICE_CREATION_PARAMETERS::hFocusWindow(HWND value) function, expected prototype:\nvoid D3DDEVICE_CREATION_PARAMETERS::hFocusWindow(HWND value)\nClass arguments details:\narg 1 ID = 2231045\n\n%s",luna_dumpStack(L).c_str());
		}

		HWND* value_ptr=(Luna< HWND >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in D3DDEVICE_CREATION_PARAMETERS::hFocusWindow function");
		}
		HWND value=*value_ptr;

		D3DDEVICE_CREATION_PARAMETERS* self=(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DDEVICE_CREATION_PARAMETERS::hFocusWindow(HWND). Got : '%s'\n%s",typeid(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->hFocusWindow = value;

		return 0;
	}

	// void D3DDEVICE_CREATION_PARAMETERS::BehaviorFlags(unsigned long value)
	static int _bind_setBehaviorFlags(lua_State *L) {
		if (!_lg_typecheck_setBehaviorFlags(L)) {
			luaL_error(L, "luna typecheck failed in void D3DDEVICE_CREATION_PARAMETERS::BehaviorFlags(unsigned long value) function, expected prototype:\nvoid D3DDEVICE_CREATION_PARAMETERS::BehaviorFlags(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DDEVICE_CREATION_PARAMETERS* self=(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DDEVICE_CREATION_PARAMETERS::BehaviorFlags(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DDEVICE_CREATION_PARAMETERS >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->BehaviorFlags = value;

		return 0;
	}


	// Operator binds:

};

D3DDEVICE_CREATION_PARAMETERS* LunaTraits< D3DDEVICE_CREATION_PARAMETERS >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DDEVICE_CREATION_PARAMETERS >::_bind_dtor(D3DDEVICE_CREATION_PARAMETERS* obj) {
	delete obj;
}

const char LunaTraits< D3DDEVICE_CREATION_PARAMETERS >::className[] = "D3DDEVICE_CREATION_PARAMETERS";
const char LunaTraits< D3DDEVICE_CREATION_PARAMETERS >::fullName[] = "D3DDEVICE_CREATION_PARAMETERS";
const char LunaTraits< D3DDEVICE_CREATION_PARAMETERS >::moduleName[] = "dx9";
const char* LunaTraits< D3DDEVICE_CREATION_PARAMETERS >::parents[] = {0};
const int LunaTraits< D3DDEVICE_CREATION_PARAMETERS >::hash = 29271768;
const int LunaTraits< D3DDEVICE_CREATION_PARAMETERS >::uniqueIDs[] = {29271768,0};

luna_RegType LunaTraits< D3DDEVICE_CREATION_PARAMETERS >::methods[] = {
	{"getAdapterOrdinal", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind_getAdapterOrdinal},
	{"getDeviceType", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind_getDeviceType},
	{"getHFocusWindow", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind_getHFocusWindow},
	{"getBehaviorFlags", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind_getBehaviorFlags},
	{"setAdapterOrdinal", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind_setAdapterOrdinal},
	{"setDeviceType", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind_setDeviceType},
	{"setHFocusWindow", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind_setHFocusWindow},
	{"setBehaviorFlags", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind_setBehaviorFlags},
	{"dynCast", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DDEVICE_CREATION_PARAMETERS::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DDEVICE_CREATION_PARAMETERS >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DDEVICE_CREATION_PARAMETERS >::enumValues[] = {
	{0,0}
};


