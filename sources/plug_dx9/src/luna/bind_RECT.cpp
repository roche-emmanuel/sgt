#include <plug_common.h>

class luna_wrapper_RECT {
public:
	typedef Luna< RECT > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2511332) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(RECT*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		RECT* rhs =(Luna< RECT >::check(L,2));
		RECT* self=(Luna< RECT >::check(L,1));
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

		RECT* self= (RECT*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< RECT >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2511332) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< RECT >::check(L,1));
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

		RECT* self=(Luna< RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("RECT");
		
		return luna_dynamicCast(L,converters,"RECT",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getLeft(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTop(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getBottom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setBottom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// RECT::RECT()
	static RECT* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in RECT::RECT() function, expected prototype:\nRECT::RECT()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new RECT();
	}


	// Function binds:
	// long RECT::left()
	static int _bind_getLeft(lua_State *L) {
		if (!_lg_typecheck_getLeft(L)) {
			luaL_error(L, "luna typecheck failed in long RECT::left() function, expected prototype:\nlong RECT::left()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		RECT* self=(Luna< RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long RECT::left(). Got : '%s'\n%s",typeid(Luna< RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->left;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long RECT::top()
	static int _bind_getTop(lua_State *L) {
		if (!_lg_typecheck_getTop(L)) {
			luaL_error(L, "luna typecheck failed in long RECT::top() function, expected prototype:\nlong RECT::top()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		RECT* self=(Luna< RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long RECT::top(). Got : '%s'\n%s",typeid(Luna< RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->top;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long RECT::right()
	static int _bind_getRight(lua_State *L) {
		if (!_lg_typecheck_getRight(L)) {
			luaL_error(L, "luna typecheck failed in long RECT::right() function, expected prototype:\nlong RECT::right()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		RECT* self=(Luna< RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long RECT::right(). Got : '%s'\n%s",typeid(Luna< RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->right;
		lua_pushnumber(L,lret);

		return 1;
	}

	// long RECT::bottom()
	static int _bind_getBottom(lua_State *L) {
		if (!_lg_typecheck_getBottom(L)) {
			luaL_error(L, "luna typecheck failed in long RECT::bottom() function, expected prototype:\nlong RECT::bottom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		RECT* self=(Luna< RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call long RECT::bottom(). Got : '%s'\n%s",typeid(Luna< RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->bottom;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void RECT::left(long value)
	static int _bind_setLeft(lua_State *L) {
		if (!_lg_typecheck_setLeft(L)) {
			luaL_error(L, "luna typecheck failed in void RECT::left(long value) function, expected prototype:\nvoid RECT::left(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		RECT* self=(Luna< RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void RECT::left(long). Got : '%s'\n%s",typeid(Luna< RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->left = value;

		return 0;
	}

	// void RECT::top(long value)
	static int _bind_setTop(lua_State *L) {
		if (!_lg_typecheck_setTop(L)) {
			luaL_error(L, "luna typecheck failed in void RECT::top(long value) function, expected prototype:\nvoid RECT::top(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		RECT* self=(Luna< RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void RECT::top(long). Got : '%s'\n%s",typeid(Luna< RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->top = value;

		return 0;
	}

	// void RECT::right(long value)
	static int _bind_setRight(lua_State *L) {
		if (!_lg_typecheck_setRight(L)) {
			luaL_error(L, "luna typecheck failed in void RECT::right(long value) function, expected prototype:\nvoid RECT::right(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		RECT* self=(Luna< RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void RECT::right(long). Got : '%s'\n%s",typeid(Luna< RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->right = value;

		return 0;
	}

	// void RECT::bottom(long value)
	static int _bind_setBottom(lua_State *L) {
		if (!_lg_typecheck_setBottom(L)) {
			luaL_error(L, "luna typecheck failed in void RECT::bottom(long value) function, expected prototype:\nvoid RECT::bottom(long value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long value=(long)lua_tonumber(L,2);

		RECT* self=(Luna< RECT >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void RECT::bottom(long). Got : '%s'\n%s",typeid(Luna< RECT >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->bottom = value;

		return 0;
	}


	// Operator binds:

};

RECT* LunaTraits< RECT >::_bind_ctor(lua_State *L) {
	return luna_wrapper_RECT::_bind_ctor(L);
}

void LunaTraits< RECT >::_bind_dtor(RECT* obj) {
	delete obj;
}

const char LunaTraits< RECT >::className[] = "RECT";
const char LunaTraits< RECT >::fullName[] = "RECT";
const char LunaTraits< RECT >::moduleName[] = "dx9";
const char* LunaTraits< RECT >::parents[] = {0};
const int LunaTraits< RECT >::hash = 2511332;
const int LunaTraits< RECT >::uniqueIDs[] = {2511332,0};

luna_RegType LunaTraits< RECT >::methods[] = {
	{"getLeft", &luna_wrapper_RECT::_bind_getLeft},
	{"getTop", &luna_wrapper_RECT::_bind_getTop},
	{"getRight", &luna_wrapper_RECT::_bind_getRight},
	{"getBottom", &luna_wrapper_RECT::_bind_getBottom},
	{"setLeft", &luna_wrapper_RECT::_bind_setLeft},
	{"setTop", &luna_wrapper_RECT::_bind_setTop},
	{"setRight", &luna_wrapper_RECT::_bind_setRight},
	{"setBottom", &luna_wrapper_RECT::_bind_setBottom},
	{"dynCast", &luna_wrapper_RECT::_bind_dynCast},
	{"__eq", &luna_wrapper_RECT::_bind___eq},
	{"fromVoid", &luna_wrapper_RECT::_bind_fromVoid},
	{"asVoid", &luna_wrapper_RECT::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< RECT >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< RECT >::enumValues[] = {
	{0,0}
};


