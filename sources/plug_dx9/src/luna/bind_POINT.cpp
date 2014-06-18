#include <plug_common.h>

class luna_wrapper_POINT {
public:
	typedef Luna< POINT > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76307824) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(POINT*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		POINT* rhs =(Luna< POINT >::check(L,2));
		POINT* self=(Luna< POINT >::check(L,1));
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

		POINT* self= (POINT*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< POINT >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,76307824) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< POINT >::check(L,1));
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

		POINT* self=(Luna< POINT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("POINT");
		
		return luna_dynamicCast(L,converters,"POINT",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// long POINT::x()
	static int _bind_getX(lua_State *L) {
		if (!_lg_typecheck_getX(L)) {
			luaL_error(L, "luna typecheck failed in long POINT::x() function, expected prototype:\nlong POINT::x()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		POINT* self=(Luna< POINT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long POINT::x(). Got : '%s'\n%s",typeid(Luna< POINT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->x;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long POINT::y()
	static int _bind_getY(lua_State *L) {
		if (!_lg_typecheck_getY(L)) {
			luaL_error(L, "luna typecheck failed in long POINT::y() function, expected prototype:\nlong POINT::y()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		POINT* self=(Luna< POINT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long POINT::y(). Got : '%s'\n%s",typeid(Luna< POINT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->y;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void POINT::x(long value)
	static int _bind_setX(lua_State *L) {
		if (!_lg_typecheck_setX(L)) {
			luaL_error(L, "luna typecheck failed in void POINT::x(long value) function, expected prototype:\nvoid POINT::x(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		POINT* self=(Luna< POINT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void POINT::x(long). Got : '%s'\n%s",typeid(Luna< POINT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x = value;

		return 0;
	}

	// void POINT::y(long value)
	static int _bind_setY(lua_State *L) {
		if (!_lg_typecheck_setY(L)) {
			luaL_error(L, "luna typecheck failed in void POINT::y(long value) function, expected prototype:\nvoid POINT::y(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		POINT* self=(Luna< POINT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void POINT::y(long). Got : '%s'\n%s",typeid(Luna< POINT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y = value;

		return 0;
	}


	// Operator binds:

};

POINT* LunaTraits< POINT >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< POINT >::_bind_dtor(POINT* obj) {
	delete obj;
}

const char LunaTraits< POINT >::className[] = "POINT";
const char LunaTraits< POINT >::fullName[] = "POINT";
const char LunaTraits< POINT >::moduleName[] = "dx9";
const char* LunaTraits< POINT >::parents[] = {0};
const int LunaTraits< POINT >::hash = 76307824;
const int LunaTraits< POINT >::uniqueIDs[] = {76307824,0};

luna_RegType LunaTraits< POINT >::methods[] = {
	{"getX", &luna_wrapper_POINT::_bind_getX},
	{"getY", &luna_wrapper_POINT::_bind_getY},
	{"setX", &luna_wrapper_POINT::_bind_setX},
	{"setY", &luna_wrapper_POINT::_bind_setY},
	{"dynCast", &luna_wrapper_POINT::_bind_dynCast},
	{"__eq", &luna_wrapper_POINT::_bind___eq},
	{"fromVoid", &luna_wrapper_POINT::_bind_fromVoid},
	{"asVoid", &luna_wrapper_POINT::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< POINT >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< POINT >::enumValues[] = {
	{0,0}
};


