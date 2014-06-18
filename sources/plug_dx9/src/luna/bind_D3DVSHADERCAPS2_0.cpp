#include <plug_common.h>

class luna_wrapper_D3DVSHADERCAPS2_0 {
public:
	typedef Luna< D3DVSHADERCAPS2_0 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90177932) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DVSHADERCAPS2_0*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DVSHADERCAPS2_0* rhs =(Luna< D3DVSHADERCAPS2_0 >::check(L,2));
		D3DVSHADERCAPS2_0* self=(Luna< D3DVSHADERCAPS2_0 >::check(L,1));
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

		D3DVSHADERCAPS2_0* self= (D3DVSHADERCAPS2_0*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DVSHADERCAPS2_0 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90177932) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DVSHADERCAPS2_0 >::check(L,1));
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

		D3DVSHADERCAPS2_0* self=(Luna< D3DVSHADERCAPS2_0 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DVSHADERCAPS2_0");
		
		return luna_dynamicCast(L,converters,"D3DVSHADERCAPS2_0",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getCaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDynamicFlowControlDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumTemps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getStaticFlowControlDepth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCaps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDynamicFlowControlDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNumTemps(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStaticFlowControlDepth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned long D3DVSHADERCAPS2_0::Caps()
	static int _bind_getCaps(lua_State *L) {
		if (!_lg_typecheck_getCaps(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DVSHADERCAPS2_0::Caps() function, expected prototype:\nunsigned long D3DVSHADERCAPS2_0::Caps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVSHADERCAPS2_0* self=(Luna< D3DVSHADERCAPS2_0 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DVSHADERCAPS2_0::Caps(). Got : '%s'\n%s",typeid(Luna< D3DVSHADERCAPS2_0 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Caps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int D3DVSHADERCAPS2_0::DynamicFlowControlDepth()
	static int _bind_getDynamicFlowControlDepth(lua_State *L) {
		if (!_lg_typecheck_getDynamicFlowControlDepth(L)) {
			luaL_error(L, "luna typecheck failed in int D3DVSHADERCAPS2_0::DynamicFlowControlDepth() function, expected prototype:\nint D3DVSHADERCAPS2_0::DynamicFlowControlDepth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVSHADERCAPS2_0* self=(Luna< D3DVSHADERCAPS2_0 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int D3DVSHADERCAPS2_0::DynamicFlowControlDepth(). Got : '%s'\n%s",typeid(Luna< D3DVSHADERCAPS2_0 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DynamicFlowControlDepth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int D3DVSHADERCAPS2_0::NumTemps()
	static int _bind_getNumTemps(lua_State *L) {
		if (!_lg_typecheck_getNumTemps(L)) {
			luaL_error(L, "luna typecheck failed in int D3DVSHADERCAPS2_0::NumTemps() function, expected prototype:\nint D3DVSHADERCAPS2_0::NumTemps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVSHADERCAPS2_0* self=(Luna< D3DVSHADERCAPS2_0 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int D3DVSHADERCAPS2_0::NumTemps(). Got : '%s'\n%s",typeid(Luna< D3DVSHADERCAPS2_0 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->NumTemps;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int D3DVSHADERCAPS2_0::StaticFlowControlDepth()
	static int _bind_getStaticFlowControlDepth(lua_State *L) {
		if (!_lg_typecheck_getStaticFlowControlDepth(L)) {
			luaL_error(L, "luna typecheck failed in int D3DVSHADERCAPS2_0::StaticFlowControlDepth() function, expected prototype:\nint D3DVSHADERCAPS2_0::StaticFlowControlDepth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVSHADERCAPS2_0* self=(Luna< D3DVSHADERCAPS2_0 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int D3DVSHADERCAPS2_0::StaticFlowControlDepth(). Got : '%s'\n%s",typeid(Luna< D3DVSHADERCAPS2_0 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->StaticFlowControlDepth;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DVSHADERCAPS2_0::Caps(unsigned long value)
	static int _bind_setCaps(lua_State *L) {
		if (!_lg_typecheck_setCaps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVSHADERCAPS2_0::Caps(unsigned long value) function, expected prototype:\nvoid D3DVSHADERCAPS2_0::Caps(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DVSHADERCAPS2_0* self=(Luna< D3DVSHADERCAPS2_0 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVSHADERCAPS2_0::Caps(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DVSHADERCAPS2_0 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Caps = value;

		return 0;
	}

	// void D3DVSHADERCAPS2_0::DynamicFlowControlDepth(int value)
	static int _bind_setDynamicFlowControlDepth(lua_State *L) {
		if (!_lg_typecheck_setDynamicFlowControlDepth(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVSHADERCAPS2_0::DynamicFlowControlDepth(int value) function, expected prototype:\nvoid D3DVSHADERCAPS2_0::DynamicFlowControlDepth(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		D3DVSHADERCAPS2_0* self=(Luna< D3DVSHADERCAPS2_0 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVSHADERCAPS2_0::DynamicFlowControlDepth(int). Got : '%s'\n%s",typeid(Luna< D3DVSHADERCAPS2_0 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DynamicFlowControlDepth = value;

		return 0;
	}

	// void D3DVSHADERCAPS2_0::NumTemps(int value)
	static int _bind_setNumTemps(lua_State *L) {
		if (!_lg_typecheck_setNumTemps(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVSHADERCAPS2_0::NumTemps(int value) function, expected prototype:\nvoid D3DVSHADERCAPS2_0::NumTemps(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		D3DVSHADERCAPS2_0* self=(Luna< D3DVSHADERCAPS2_0 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVSHADERCAPS2_0::NumTemps(int). Got : '%s'\n%s",typeid(Luna< D3DVSHADERCAPS2_0 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NumTemps = value;

		return 0;
	}

	// void D3DVSHADERCAPS2_0::StaticFlowControlDepth(int value)
	static int _bind_setStaticFlowControlDepth(lua_State *L) {
		if (!_lg_typecheck_setStaticFlowControlDepth(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVSHADERCAPS2_0::StaticFlowControlDepth(int value) function, expected prototype:\nvoid D3DVSHADERCAPS2_0::StaticFlowControlDepth(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		D3DVSHADERCAPS2_0* self=(Luna< D3DVSHADERCAPS2_0 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVSHADERCAPS2_0::StaticFlowControlDepth(int). Got : '%s'\n%s",typeid(Luna< D3DVSHADERCAPS2_0 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->StaticFlowControlDepth = value;

		return 0;
	}


	// Operator binds:

};

D3DVSHADERCAPS2_0* LunaTraits< D3DVSHADERCAPS2_0 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DVSHADERCAPS2_0 >::_bind_dtor(D3DVSHADERCAPS2_0* obj) {
	delete obj;
}

const char LunaTraits< D3DVSHADERCAPS2_0 >::className[] = "D3DVSHADERCAPS2_0";
const char LunaTraits< D3DVSHADERCAPS2_0 >::fullName[] = "D3DVSHADERCAPS2_0";
const char LunaTraits< D3DVSHADERCAPS2_0 >::moduleName[] = "dx9";
const char* LunaTraits< D3DVSHADERCAPS2_0 >::parents[] = {0};
const int LunaTraits< D3DVSHADERCAPS2_0 >::hash = 90177932;
const int LunaTraits< D3DVSHADERCAPS2_0 >::uniqueIDs[] = {90177932,0};

luna_RegType LunaTraits< D3DVSHADERCAPS2_0 >::methods[] = {
	{"getCaps", &luna_wrapper_D3DVSHADERCAPS2_0::_bind_getCaps},
	{"getDynamicFlowControlDepth", &luna_wrapper_D3DVSHADERCAPS2_0::_bind_getDynamicFlowControlDepth},
	{"getNumTemps", &luna_wrapper_D3DVSHADERCAPS2_0::_bind_getNumTemps},
	{"getStaticFlowControlDepth", &luna_wrapper_D3DVSHADERCAPS2_0::_bind_getStaticFlowControlDepth},
	{"setCaps", &luna_wrapper_D3DVSHADERCAPS2_0::_bind_setCaps},
	{"setDynamicFlowControlDepth", &luna_wrapper_D3DVSHADERCAPS2_0::_bind_setDynamicFlowControlDepth},
	{"setNumTemps", &luna_wrapper_D3DVSHADERCAPS2_0::_bind_setNumTemps},
	{"setStaticFlowControlDepth", &luna_wrapper_D3DVSHADERCAPS2_0::_bind_setStaticFlowControlDepth},
	{"dynCast", &luna_wrapper_D3DVSHADERCAPS2_0::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DVSHADERCAPS2_0::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DVSHADERCAPS2_0::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DVSHADERCAPS2_0::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DVSHADERCAPS2_0 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DVSHADERCAPS2_0 >::enumValues[] = {
	{0,0}
};


