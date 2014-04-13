#include <plug_common.h>

class luna_wrapper_TiXmlCursor {
public:
	typedef Luna< TiXmlCursor > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95715994) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(TiXmlCursor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		TiXmlCursor* rhs =(Luna< TiXmlCursor >::check(L,2));
		TiXmlCursor* self=(Luna< TiXmlCursor >::check(L,1));
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

		TiXmlCursor* self= (TiXmlCursor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< TiXmlCursor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,95715994) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< TiXmlCursor >::check(L,1));
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

		TiXmlCursor* self=(Luna< TiXmlCursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("TiXmlCursor");
		
		return luna_dynamicCast(L,converters,"TiXmlCursor",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// TiXmlCursor::TiXmlCursor()
	static TiXmlCursor* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in TiXmlCursor::TiXmlCursor() function, expected prototype:\nTiXmlCursor::TiXmlCursor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new TiXmlCursor();
	}


	// Function binds:
	// void TiXmlCursor::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlCursor::Clear() function, expected prototype:\nvoid TiXmlCursor::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlCursor* self=(Luna< TiXmlCursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlCursor::Clear(). Got : '%s'\n%s",typeid(Luna< TiXmlCursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// int TiXmlCursor::row()
	static int _bind_getRow(lua_State *L) {
		if (!_lg_typecheck_getRow(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlCursor::row() function, expected prototype:\nint TiXmlCursor::row()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlCursor* self=(Luna< TiXmlCursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlCursor::row(). Got : '%s'\n%s",typeid(Luna< TiXmlCursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->row;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int TiXmlCursor::col()
	static int _bind_getCol(lua_State *L) {
		if (!_lg_typecheck_getCol(L)) {
			luaL_error(L, "luna typecheck failed in int TiXmlCursor::col() function, expected prototype:\nint TiXmlCursor::col()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		TiXmlCursor* self=(Luna< TiXmlCursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int TiXmlCursor::col(). Got : '%s'\n%s",typeid(Luna< TiXmlCursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->col;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void TiXmlCursor::row(int value)
	static int _bind_setRow(lua_State *L) {
		if (!_lg_typecheck_setRow(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlCursor::row(int value) function, expected prototype:\nvoid TiXmlCursor::row(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		TiXmlCursor* self=(Luna< TiXmlCursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlCursor::row(int). Got : '%s'\n%s",typeid(Luna< TiXmlCursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->row = value;

		return 0;
	}

	// void TiXmlCursor::col(int value)
	static int _bind_setCol(lua_State *L) {
		if (!_lg_typecheck_setCol(L)) {
			luaL_error(L, "luna typecheck failed in void TiXmlCursor::col(int value) function, expected prototype:\nvoid TiXmlCursor::col(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		TiXmlCursor* self=(Luna< TiXmlCursor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void TiXmlCursor::col(int). Got : '%s'\n%s",typeid(Luna< TiXmlCursor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->col = value;

		return 0;
	}


	// Operator binds:

};

TiXmlCursor* LunaTraits< TiXmlCursor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_TiXmlCursor::_bind_ctor(L);
}

void LunaTraits< TiXmlCursor >::_bind_dtor(TiXmlCursor* obj) {
	delete obj;
}

const char LunaTraits< TiXmlCursor >::className[] = "TiXmlCursor";
const char LunaTraits< TiXmlCursor >::fullName[] = "TiXmlCursor";
const char LunaTraits< TiXmlCursor >::moduleName[] = "land";
const char* LunaTraits< TiXmlCursor >::parents[] = {0};
const int LunaTraits< TiXmlCursor >::hash = 95715994;
const int LunaTraits< TiXmlCursor >::uniqueIDs[] = {95715994,0};

luna_RegType LunaTraits< TiXmlCursor >::methods[] = {
	{"Clear", &luna_wrapper_TiXmlCursor::_bind_Clear},
	{"getRow", &luna_wrapper_TiXmlCursor::_bind_getRow},
	{"getCol", &luna_wrapper_TiXmlCursor::_bind_getCol},
	{"setRow", &luna_wrapper_TiXmlCursor::_bind_setRow},
	{"setCol", &luna_wrapper_TiXmlCursor::_bind_setCol},
	{"dynCast", &luna_wrapper_TiXmlCursor::_bind_dynCast},
	{"__eq", &luna_wrapper_TiXmlCursor::_bind___eq},
	{"fromVoid", &luna_wrapper_TiXmlCursor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_TiXmlCursor::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< TiXmlCursor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< TiXmlCursor >::enumValues[] = {
	{0,0}
};


