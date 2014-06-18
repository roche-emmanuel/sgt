#include <plug_common.h>

class luna_wrapper_D3DVERTEXBUFFER_DESC {
public:
	typedef Luna< D3DVERTEXBUFFER_DESC > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71577553) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DVERTEXBUFFER_DESC*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DVERTEXBUFFER_DESC* rhs =(Luna< D3DVERTEXBUFFER_DESC >::check(L,2));
		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
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

		D3DVERTEXBUFFER_DESC* self= (D3DVERTEXBUFFER_DESC*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DVERTEXBUFFER_DESC >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71577553) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
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

		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DVERTEXBUFFER_DESC");
		
		return luna_dynamicCast(L,converters,"D3DVERTEXBUFFER_DESC",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getFormat(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getUsage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPool(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFVF(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFormat(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setUsage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPool(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFVF(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// D3DFORMAT D3DVERTEXBUFFER_DESC::Format()
	static int _bind_getFormat(lua_State *L) {
		if (!_lg_typecheck_getFormat(L)) {
			luaL_error(L, "luna typecheck failed in D3DFORMAT D3DVERTEXBUFFER_DESC::Format() function, expected prototype:\nD3DFORMAT D3DVERTEXBUFFER_DESC::Format()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DFORMAT D3DVERTEXBUFFER_DESC::Format(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DFORMAT lret = self->Format;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DRESOURCETYPE D3DVERTEXBUFFER_DESC::Type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in D3DRESOURCETYPE D3DVERTEXBUFFER_DESC::Type() function, expected prototype:\nD3DRESOURCETYPE D3DVERTEXBUFFER_DESC::Type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DRESOURCETYPE D3DVERTEXBUFFER_DESC::Type(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DRESOURCETYPE lret = self->Type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DVERTEXBUFFER_DESC::Usage()
	static int _bind_getUsage(lua_State *L) {
		if (!_lg_typecheck_getUsage(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DVERTEXBUFFER_DESC::Usage() function, expected prototype:\nunsigned long D3DVERTEXBUFFER_DESC::Usage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DVERTEXBUFFER_DESC::Usage(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Usage;
		lua_pushnumber(L,lret);

		return 1;
	}

	// D3DPOOL D3DVERTEXBUFFER_DESC::Pool()
	static int _bind_getPool(lua_State *L) {
		if (!_lg_typecheck_getPool(L)) {
			luaL_error(L, "luna typecheck failed in D3DPOOL D3DVERTEXBUFFER_DESC::Pool() function, expected prototype:\nD3DPOOL D3DVERTEXBUFFER_DESC::Pool()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DPOOL D3DVERTEXBUFFER_DESC::Pool(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DPOOL lret = self->Pool;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int D3DVERTEXBUFFER_DESC::Size()
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int D3DVERTEXBUFFER_DESC::Size() function, expected prototype:\nunsigned int D3DVERTEXBUFFER_DESC::Size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int D3DVERTEXBUFFER_DESC::Size(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->Size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long D3DVERTEXBUFFER_DESC::FVF()
	static int _bind_getFVF(lua_State *L) {
		if (!_lg_typecheck_getFVF(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long D3DVERTEXBUFFER_DESC::FVF() function, expected prototype:\nunsigned long D3DVERTEXBUFFER_DESC::FVF()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long D3DVERTEXBUFFER_DESC::FVF(). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->FVF;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DVERTEXBUFFER_DESC::Format(D3DFORMAT value)
	static int _bind_setFormat(lua_State *L) {
		if (!_lg_typecheck_setFormat(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXBUFFER_DESC::Format(D3DFORMAT value) function, expected prototype:\nvoid D3DVERTEXBUFFER_DESC::Format(D3DFORMAT value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DFORMAT value=(D3DFORMAT)lua_tointeger(L,2);

		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXBUFFER_DESC::Format(D3DFORMAT). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Format = value;

		return 0;
	}

	// void D3DVERTEXBUFFER_DESC::Type(D3DRESOURCETYPE value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXBUFFER_DESC::Type(D3DRESOURCETYPE value) function, expected prototype:\nvoid D3DVERTEXBUFFER_DESC::Type(D3DRESOURCETYPE value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DRESOURCETYPE value=(D3DRESOURCETYPE)lua_tointeger(L,2);

		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXBUFFER_DESC::Type(D3DRESOURCETYPE). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Type = value;

		return 0;
	}

	// void D3DVERTEXBUFFER_DESC::Usage(unsigned long value)
	static int _bind_setUsage(lua_State *L) {
		if (!_lg_typecheck_setUsage(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXBUFFER_DESC::Usage(unsigned long value) function, expected prototype:\nvoid D3DVERTEXBUFFER_DESC::Usage(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXBUFFER_DESC::Usage(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Usage = value;

		return 0;
	}

	// void D3DVERTEXBUFFER_DESC::Pool(D3DPOOL value)
	static int _bind_setPool(lua_State *L) {
		if (!_lg_typecheck_setPool(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXBUFFER_DESC::Pool(D3DPOOL value) function, expected prototype:\nvoid D3DVERTEXBUFFER_DESC::Pool(D3DPOOL value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		D3DPOOL value=(D3DPOOL)lua_tointeger(L,2);

		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXBUFFER_DESC::Pool(D3DPOOL). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Pool = value;

		return 0;
	}

	// void D3DVERTEXBUFFER_DESC::Size(unsigned int value)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXBUFFER_DESC::Size(unsigned int value) function, expected prototype:\nvoid D3DVERTEXBUFFER_DESC::Size(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXBUFFER_DESC::Size(unsigned int). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Size = value;

		return 0;
	}

	// void D3DVERTEXBUFFER_DESC::FVF(unsigned long value)
	static int _bind_setFVF(lua_State *L) {
		if (!_lg_typecheck_setFVF(L)) {
			luaL_error(L, "luna typecheck failed in void D3DVERTEXBUFFER_DESC::FVF(unsigned long value) function, expected prototype:\nvoid D3DVERTEXBUFFER_DESC::FVF(unsigned long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long value=(unsigned long)lua_tonumber(L,2);

		D3DVERTEXBUFFER_DESC* self=(Luna< D3DVERTEXBUFFER_DESC >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DVERTEXBUFFER_DESC::FVF(unsigned long). Got : '%s'\n%s",typeid(Luna< D3DVERTEXBUFFER_DESC >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FVF = value;

		return 0;
	}


	// Operator binds:

};

D3DVERTEXBUFFER_DESC* LunaTraits< D3DVERTEXBUFFER_DESC >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< D3DVERTEXBUFFER_DESC >::_bind_dtor(D3DVERTEXBUFFER_DESC* obj) {
	delete obj;
}

const char LunaTraits< D3DVERTEXBUFFER_DESC >::className[] = "D3DVERTEXBUFFER_DESC";
const char LunaTraits< D3DVERTEXBUFFER_DESC >::fullName[] = "D3DVERTEXBUFFER_DESC";
const char LunaTraits< D3DVERTEXBUFFER_DESC >::moduleName[] = "dx9";
const char* LunaTraits< D3DVERTEXBUFFER_DESC >::parents[] = {0};
const int LunaTraits< D3DVERTEXBUFFER_DESC >::hash = 71577553;
const int LunaTraits< D3DVERTEXBUFFER_DESC >::uniqueIDs[] = {71577553,0};

luna_RegType LunaTraits< D3DVERTEXBUFFER_DESC >::methods[] = {
	{"getFormat", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_getFormat},
	{"getType", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_getType},
	{"getUsage", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_getUsage},
	{"getPool", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_getPool},
	{"getSize", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_getSize},
	{"getFVF", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_getFVF},
	{"setFormat", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_setFormat},
	{"setType", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_setType},
	{"setUsage", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_setUsage},
	{"setPool", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_setPool},
	{"setSize", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_setSize},
	{"setFVF", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_setFVF},
	{"dynCast", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DVERTEXBUFFER_DESC::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DVERTEXBUFFER_DESC >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DVERTEXBUFFER_DESC >::enumValues[] = {
	{0,0}
};


