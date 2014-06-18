#include <plug_common.h>

class luna_wrapper_D3DVERTEXELEMENT9 {
public:
	typedef Luna< D3DVERTEXELEMENT9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11753552) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DVERTEXELEMENT9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DVERTEXELEMENT9* rhs =(Luna< D3DVERTEXELEMENT9 >::check(L,2));
		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
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

		D3DVERTEXELEMENT9* self= (D3DVERTEXELEMENT9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DVERTEXELEMENT9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,11753552) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DVERTEXELEMENT9 >::check(L,1));
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

		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DVERTEXELEMENT9");
		
		return luna_dynamicCast(L,converters,"D3DVERTEXELEMENT9",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOffset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMethod(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsageIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setStream(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOffset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMethod(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUsageIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned short D3DVERTEXELEMENT9::Stream()
	static int _bind_getStream(lua_State *L) {
		if (!_lg_typecheck_getStream(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short D3DVERTEXELEMENT9::Stream() function, expected prototype:\nunsigned short D3DVERTEXELEMENT9::Stream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short D3DVERTEXELEMENT9::Stream(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->Stream;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned short D3DVERTEXELEMENT9::Offset()
	static int _bind_getOffset(lua_State *L) {
		if (!_lg_typecheck_getOffset(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short D3DVERTEXELEMENT9::Offset() function, expected prototype:\nunsigned short D3DVERTEXELEMENT9::Offset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short D3DVERTEXELEMENT9::Offset(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->Offset;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned char D3DVERTEXELEMENT9::Type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char D3DVERTEXELEMENT9::Type() function, expected prototype:\nunsigned char D3DVERTEXELEMENT9::Type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char D3DVERTEXELEMENT9::Type(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Type;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char D3DVERTEXELEMENT9::Method()
	static int _bind_getMethod(lua_State *L) {
		if (!_lg_typecheck_getMethod(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char D3DVERTEXELEMENT9::Method() function, expected prototype:\nunsigned char D3DVERTEXELEMENT9::Method()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char D3DVERTEXELEMENT9::Method(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Method;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char D3DVERTEXELEMENT9::Usage()
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char D3DVERTEXELEMENT9::Usage() function, expected prototype:\nunsigned char D3DVERTEXELEMENT9::Usage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char D3DVERTEXELEMENT9::Usage(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->Usage;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// unsigned char D3DVERTEXELEMENT9::UsageIndex()
	static int _bind_getUsageIndex(lua_State *L) {
		if (!_lg_typecheck_getUsageIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned char D3DVERTEXELEMENT9::UsageIndex() function, expected prototype:\nunsigned char D3DVERTEXELEMENT9::UsageIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned char D3DVERTEXELEMENT9::UsageIndex(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned char lret = self->UsageIndex;
		lua_pushnumber(L,(int)lret);

		return 1;
	}

	// void D3DVERTEXELEMENT9::Stream(unsigned short value)
	static int _bind_setStream(lua_State *L) {
		if (!_lg_typecheck_setStream(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXELEMENT9::Stream(unsigned short value) function, expected prototype:\nvoid D3DVERTEXELEMENT9::Stream(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXELEMENT9::Stream(unsigned short). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Stream = value;

		return 0;
	}

	// void D3DVERTEXELEMENT9::Offset(unsigned short value)
	static int _bind_setOffset(lua_State *L) {
		if (!_lg_typecheck_setOffset(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXELEMENT9::Offset(unsigned short value) function, expected prototype:\nvoid D3DVERTEXELEMENT9::Offset(unsigned short value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short value=(unsigned short)lua_tointeger(L,2);

		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXELEMENT9::Offset(unsigned short). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Offset = value;

		return 0;
	}

	// void D3DVERTEXELEMENT9::Type(unsigned char value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXELEMENT9::Type(unsigned char value) function, expected prototype:\nvoid D3DVERTEXELEMENT9::Type(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXELEMENT9::Type(unsigned char). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Type = value;

		return 0;
	}

	// void D3DVERTEXELEMENT9::Method(unsigned char value)
	static int _bind_setMethod(lua_State *L) {
		if (!_lg_typecheck_setMethod(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXELEMENT9::Method(unsigned char value) function, expected prototype:\nvoid D3DVERTEXELEMENT9::Method(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXELEMENT9::Method(unsigned char). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Method = value;

		return 0;
	}

	// void D3DVERTEXELEMENT9::Usage(unsigned char value)
	static int _bind_setUsage(lua_State *L) {
		if (!_lg_typecheck_setUsage(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXELEMENT9::Usage(unsigned char value) function, expected prototype:\nvoid D3DVERTEXELEMENT9::Usage(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXELEMENT9::Usage(unsigned char). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Usage = value;

		return 0;
	}

	// void D3DVERTEXELEMENT9::UsageIndex(unsigned char value)
	static int _bind_setUsageIndex(lua_State *L) {
		if (!_lg_typecheck_setUsageIndex(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXELEMENT9::UsageIndex(unsigned char value) function, expected prototype:\nvoid D3DVERTEXELEMENT9::UsageIndex(unsigned char value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char value = (unsigned char)(lua_tointeger(L,2));

		D3DVERTEXELEMENT9* self=(Luna< D3DVERTEXELEMENT9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXELEMENT9::UsageIndex(unsigned char). Got : '%s'\n%s",typeid(Luna< D3DVERTEXELEMENT9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UsageIndex = value;

		return 0;
	}


	// Operator binds:

};

D3DVERTEXELEMENT9* LunaTraits< D3DVERTEXELEMENT9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DVERTEXELEMENT9 >::_bind_dtor(D3DVERTEXELEMENT9* obj) {
	delete obj;
}

const char LunaTraits< D3DVERTEXELEMENT9 >::className[] = "D3DVERTEXELEMENT9";
const char LunaTraits< D3DVERTEXELEMENT9 >::fullName[] = "D3DVERTEXELEMENT9";
const char LunaTraits< D3DVERTEXELEMENT9 >::moduleName[] = "dx9";
const char* LunaTraits< D3DVERTEXELEMENT9 >::parents[] = {0};
const int LunaTraits< D3DVERTEXELEMENT9 >::hash = 11753552;
const int LunaTraits< D3DVERTEXELEMENT9 >::uniqueIDs[] = {11753552,0};

luna_RegType LunaTraits< D3DVERTEXELEMENT9 >::methods[] = {
	{"getStream", &luna_wrapper_D3DVERTEXELEMENT9::_bind_getStream},
	{"getOffset", &luna_wrapper_D3DVERTEXELEMENT9::_bind_getOffset},
	{"getType", &luna_wrapper_D3DVERTEXELEMENT9::_bind_getType},
	{"getMethod", &luna_wrapper_D3DVERTEXELEMENT9::_bind_getMethod},
	{"getUsage", &luna_wrapper_D3DVERTEXELEMENT9::_bind_getUsage},
	{"getUsageIndex", &luna_wrapper_D3DVERTEXELEMENT9::_bind_getUsageIndex},
	{"setStream", &luna_wrapper_D3DVERTEXELEMENT9::_bind_setStream},
	{"setOffset", &luna_wrapper_D3DVERTEXELEMENT9::_bind_setOffset},
	{"setType", &luna_wrapper_D3DVERTEXELEMENT9::_bind_setType},
	{"setMethod", &luna_wrapper_D3DVERTEXELEMENT9::_bind_setMethod},
	{"setUsage", &luna_wrapper_D3DVERTEXELEMENT9::_bind_setUsage},
	{"setUsageIndex", &luna_wrapper_D3DVERTEXELEMENT9::_bind_setUsageIndex},
	{"dynCast", &luna_wrapper_D3DVERTEXELEMENT9::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DVERTEXELEMENT9::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DVERTEXELEMENT9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DVERTEXELEMENT9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DVERTEXELEMENT9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DVERTEXELEMENT9 >::enumValues[] = {
	{0,0}
};


