#include <plug_common.h>

class luna_wrapper_D3DRECT {
public:
	typedef Luna< D3DRECT > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75644032) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(D3DRECT*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		D3DRECT* rhs =(Luna< D3DRECT >::check(L,2));
		D3DRECT* self=(Luna< D3DRECT >::check(L,1));
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

		D3DRECT* self= (D3DRECT*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< D3DRECT >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75644032) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< D3DRECT >::check(L,1));
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

		D3DRECT* self=(Luna< D3DRECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("D3DRECT");
		
		return luna_dynamicCast(L,converters,"D3DRECT",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getX1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getX2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setX2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// D3DRECT::D3DRECT()
	static D3DRECT* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in D3DRECT::D3DRECT() function, expected prototype:\nD3DRECT::D3DRECT()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new D3DRECT();
	}


	// Function binds:
	// long D3DRECT::x1()
	static int _bind_getX1(lua_State *L) {
		if (!_lg_typecheck_getX1(L)) {
			luaL_error(L, "luna typecheck failed in long D3DRECT::x1() function, expected prototype:\nlong D3DRECT::x1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRECT* self=(Luna< D3DRECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long D3DRECT::x1(). Got : '%s'\n%s",typeid(Luna< D3DRECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->x1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long D3DRECT::y1()
	static int _bind_getY1(lua_State *L) {
		if (!_lg_typecheck_getY1(L)) {
			luaL_error(L, "luna typecheck failed in long D3DRECT::y1() function, expected prototype:\nlong D3DRECT::y1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRECT* self=(Luna< D3DRECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long D3DRECT::y1(). Got : '%s'\n%s",typeid(Luna< D3DRECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->y1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long D3DRECT::x2()
	static int _bind_getX2(lua_State *L) {
		if (!_lg_typecheck_getX2(L)) {
			luaL_error(L, "luna typecheck failed in long D3DRECT::x2() function, expected prototype:\nlong D3DRECT::x2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRECT* self=(Luna< D3DRECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long D3DRECT::x2(). Got : '%s'\n%s",typeid(Luna< D3DRECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->x2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long D3DRECT::y2()
	static int _bind_getY2(lua_State *L) {
		if (!_lg_typecheck_getY2(L)) {
			luaL_error(L, "luna typecheck failed in long D3DRECT::y2() function, expected prototype:\nlong D3DRECT::y2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		D3DRECT* self=(Luna< D3DRECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long D3DRECT::y2(). Got : '%s'\n%s",typeid(Luna< D3DRECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->y2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void D3DRECT::x1(long value)
	static int _bind_setX1(lua_State *L) {
		if (!_lg_typecheck_setX1(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRECT::x1(long value) function, expected prototype:\nvoid D3DRECT::x1(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		D3DRECT* self=(Luna< D3DRECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRECT::x1(long). Got : '%s'\n%s",typeid(Luna< D3DRECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x1 = value;

		return 0;
	}

	// void D3DRECT::y1(long value)
	static int _bind_setY1(lua_State *L) {
		if (!_lg_typecheck_setY1(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRECT::y1(long value) function, expected prototype:\nvoid D3DRECT::y1(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		D3DRECT* self=(Luna< D3DRECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRECT::y1(long). Got : '%s'\n%s",typeid(Luna< D3DRECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y1 = value;

		return 0;
	}

	// void D3DRECT::x2(long value)
	static int _bind_setX2(lua_State *L) {
		if (!_lg_typecheck_setX2(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRECT::x2(long value) function, expected prototype:\nvoid D3DRECT::x2(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		D3DRECT* self=(Luna< D3DRECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRECT::x2(long). Got : '%s'\n%s",typeid(Luna< D3DRECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x2 = value;

		return 0;
	}

	// void D3DRECT::y2(long value)
	static int _bind_setY2(lua_State *L) {
		if (!_lg_typecheck_setY2(L)) {
			luaL_error(L, "luna typecheck failed in void D3DRECT::y2(long value) function, expected prototype:\nvoid D3DRECT::y2(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		D3DRECT* self=(Luna< D3DRECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void D3DRECT::y2(long). Got : '%s'\n%s",typeid(Luna< D3DRECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y2 = value;

		return 0;
	}


	// Operator binds:

};

D3DRECT* LunaTraits< D3DRECT >::_bind_ctor(lua_State *L) {
	return luna_wrapper_D3DRECT::_bind_ctor(L);
}

void LunaTraits< D3DRECT >::_bind_dtor(D3DRECT* obj) {
	delete obj;
}

const char LunaTraits< D3DRECT >::className[] = "D3DRECT";
const char LunaTraits< D3DRECT >::fullName[] = "D3DRECT";
const char LunaTraits< D3DRECT >::moduleName[] = "dx9";
const char* LunaTraits< D3DRECT >::parents[] = {0};
const int LunaTraits< D3DRECT >::hash = 75644032;
const int LunaTraits< D3DRECT >::uniqueIDs[] = {75644032,0};

luna_RegType LunaTraits< D3DRECT >::methods[] = {
	{"getX1", &luna_wrapper_D3DRECT::_bind_getX1},
	{"getY1", &luna_wrapper_D3DRECT::_bind_getY1},
	{"getX2", &luna_wrapper_D3DRECT::_bind_getX2},
	{"getY2", &luna_wrapper_D3DRECT::_bind_getY2},
	{"setX1", &luna_wrapper_D3DRECT::_bind_setX1},
	{"setY1", &luna_wrapper_D3DRECT::_bind_setY1},
	{"setX2", &luna_wrapper_D3DRECT::_bind_setX2},
	{"setY2", &luna_wrapper_D3DRECT::_bind_setY2},
	{"dynCast", &luna_wrapper_D3DRECT::_bind_dynCast},
	{"__eq", &luna_wrapper_D3DRECT::_bind___eq},
	{"fromVoid", &luna_wrapper_D3DRECT::_bind_fromVoid},
	{"asVoid", &luna_wrapper_D3DRECT::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< D3DRECT >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< D3DRECT >::enumValues[] = {
	{0,0}
};


