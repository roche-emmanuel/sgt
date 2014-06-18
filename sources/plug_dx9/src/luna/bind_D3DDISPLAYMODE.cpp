#include <plug_common.h>

class luna_wrapper_D3DDISPLAYMODE {
public:
	typedef Luna< D3DDISPLAYMODE > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90649279) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DDISPLAYMODE*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DDISPLAYMODE* rhs =(Luna< D3DDISPLAYMODE >::check(L,2));
		D3DDISPLAYMODE* self=(Luna< D3DDISPLAYMODE >::check(L,1));
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

		D3DDISPLAYMODE* self= (D3DDISPLAYMODE*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DDISPLAYMODE >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90649279) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DDISPLAYMODE >::check(L,1));
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

		D3DDISPLAYMODE* self=(Luna< D3DDISPLAYMODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DDISPLAYMODE");
		
		return luna_dynamicCast(L,converters,"D3DDISPLAYMODE",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRefreshRate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRefreshRate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int D3DDISPLAYMODE::Width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DDISPLAYMODE::Width() function, expected prototype:\nunsigned int D3DDISPLAYMODE::Width()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DDISPLAYMODE* self=(Luna< D3DDISPLAYMODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DDISPLAYMODE::Width(). Got : '%s'\n%s",typeid(Luna< D3DDISPLAYMODE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Width;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DDISPLAYMODE::Height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DDISPLAYMODE::Height() function, expected prototype:\nunsigned int D3DDISPLAYMODE::Height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DDISPLAYMODE* self=(Luna< D3DDISPLAYMODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DDISPLAYMODE::Height(). Got : '%s'\n%s",typeid(Luna< D3DDISPLAYMODE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DDISPLAYMODE::RefreshRate()
	static int _bind_getRefreshRate(lua_State *L) {
		if (!_lg_typecheck_getRefreshRate(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DDISPLAYMODE::RefreshRate() function, expected prototype:\nunsigned int D3DDISPLAYMODE::RefreshRate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DDISPLAYMODE* self=(Luna< D3DDISPLAYMODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DDISPLAYMODE::RefreshRate(). Got : '%s'\n%s",typeid(Luna< D3DDISPLAYMODE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->RefreshRate;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DFORMAT D3DDISPLAYMODE::Format()
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luaL_error(L, "luna typecheck failed in D3DFORMAT D3DDISPLAYMODE::Format() function, expected prototype:\nD3DFORMAT D3DDISPLAYMODE::Format()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DDISPLAYMODE* self=(Luna< D3DDISPLAYMODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DFORMAT D3DDISPLAYMODE::Format(). Got : '%s'\n%s",typeid(Luna< D3DDISPLAYMODE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DFORMAT lret = self->Format;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DDISPLAYMODE::Width(unsigned int value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void D3DDISPLAYMODE::Width(unsigned int value) function, expected prototype:\nvoid D3DDISPLAYMODE::Width(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DDISPLAYMODE* self=(Luna< D3DDISPLAYMODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DDISPLAYMODE::Width(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DDISPLAYMODE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Width = value;

		return 0;
	}

	// void D3DDISPLAYMODE::Height(unsigned int value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void D3DDISPLAYMODE::Height(unsigned int value) function, expected prototype:\nvoid D3DDISPLAYMODE::Height(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DDISPLAYMODE* self=(Luna< D3DDISPLAYMODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DDISPLAYMODE::Height(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DDISPLAYMODE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Height = value;

		return 0;
	}

	// void D3DDISPLAYMODE::RefreshRate(unsigned int value)
	static int _bind_setRefreshRate(lua_State *L) {
		if (!_lg_typecheck_setRefreshRate(L)) {
			luaL_error(L, "luna typecheck failed in void D3DDISPLAYMODE::RefreshRate(unsigned int value) function, expected prototype:\nvoid D3DDISPLAYMODE::RefreshRate(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DDISPLAYMODE* self=(Luna< D3DDISPLAYMODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DDISPLAYMODE::RefreshRate(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DDISPLAYMODE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshRate = value;

		return 0;
	}

	// void D3DDISPLAYMODE::Format(D3DFORMAT value)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luaL_error(L, "luna typecheck failed in void D3DDISPLAYMODE::Format(D3DFORMAT value) function, expected prototype:\nvoid D3DDISPLAYMODE::Format(D3DFORMAT value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DFORMAT value=(D3DFORMAT)lua_tointeger(L,2);

		D3DDISPLAYMODE* self=(Luna< D3DDISPLAYMODE >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DDISPLAYMODE::Format(D3DFORMAT). Got : '%s'\n%s",typeid(Luna< D3DDISPLAYMODE >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Format = value;

		return 0;
	}


	// Operator binds:

};

D3DDISPLAYMODE* LunaTraits< D3DDISPLAYMODE >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DDISPLAYMODE >::_bind_dtor(D3DDISPLAYMODE* obj) {
	delete obj;
}

const char LunaTraits< D3DDISPLAYMODE >::className[] = "D3DDISPLAYMODE";
const char LunaTraits< D3DDISPLAYMODE >::fullName[] = "D3DDISPLAYMODE";
const char LunaTraits< D3DDISPLAYMODE >::moduleName[] = "dx9";
const char* LunaTraits< D3DDISPLAYMODE >::parents[] = {0};
const int LunaTraits< D3DDISPLAYMODE >::hash = 90649279;
const int LunaTraits< D3DDISPLAYMODE >::uniqueIDs[] = {90649279,0};

luna_RegType LunaTraits< D3DDISPLAYMODE >::methods[] = {
	{"getWidth", &luna_wrapper_D3DDISPLAYMODE::_bind_getWidth},
	{"getHeight", &luna_wrapper_D3DDISPLAYMODE::_bind_getHeight},
	{"getRefreshRate", &luna_wrapper_D3DDISPLAYMODE::_bind_getRefreshRate},
	{"getFormat", &luna_wrapper_D3DDISPLAYMODE::_bind_getFormat},
	{"setWidth", &luna_wrapper_D3DDISPLAYMODE::_bind_setWidth},
	{"setHeight", &luna_wrapper_D3DDISPLAYMODE::_bind_setHeight},
	{"setRefreshRate", &luna_wrapper_D3DDISPLAYMODE::_bind_setRefreshRate},
	{"setFormat", &luna_wrapper_D3DDISPLAYMODE::_bind_setFormat},
	{"dynCast", &luna_wrapper_D3DDISPLAYMODE::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DDISPLAYMODE::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DDISPLAYMODE::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DDISPLAYMODE::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DDISPLAYMODE >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DDISPLAYMODE >::enumValues[] = {
	{0,0}
};


