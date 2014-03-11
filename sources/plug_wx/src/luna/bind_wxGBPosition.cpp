#include <plug_common.h>

class luna_wrapper_wxGBPosition {
public:
	typedef Luna< wxGBPosition > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxGBPosition* self= (wxGBPosition*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGBPosition >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3425779) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxGBPosition >::check(L,1));
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

		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGBPosition");
		
		return luna_dynamicCast(L,converters,"wxGBPosition",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,3425779) ) return false;
		return true;
	}


	// Constructor binds:
	// wxGBPosition::wxGBPosition()
	static wxGBPosition* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGBPosition::wxGBPosition() function, expected prototype:\nwxGBPosition::wxGBPosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxGBPosition();
	}

	// wxGBPosition::wxGBPosition(int row, int col)
	static wxGBPosition* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGBPosition::wxGBPosition(int row, int col) function, expected prototype:\nwxGBPosition::wxGBPosition(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,1);
		int col=(int)lua_tointeger(L,2);

		return new wxGBPosition(row, col);
	}

	// Overload binder for wxGBPosition::wxGBPosition
	static wxGBPosition* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGBPosition, cannot match any of the overloads for function wxGBPosition:\n  wxGBPosition()\n  wxGBPosition(int, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxGBPosition::GetCol() const
	static int _bind_GetCol(lua_State *L) {
		if (!_lg_typecheck_GetCol(L)) {
			luaL_error(L, "luna typecheck failed in int wxGBPosition::GetCol() const function, expected prototype:\nint wxGBPosition::GetCol() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGBPosition::GetCol() const. Got : '%s'\n%s",typeid(Luna< wxGBPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGBPosition::GetRow() const
	static int _bind_GetRow(lua_State *L) {
		if (!_lg_typecheck_GetRow(L)) {
			luaL_error(L, "luna typecheck failed in int wxGBPosition::GetRow() const function, expected prototype:\nint wxGBPosition::GetRow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGBPosition::GetRow() const. Got : '%s'\n%s",typeid(Luna< wxGBPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGBPosition::SetCol(int col)
	static int _bind_SetCol(lua_State *L) {
		if (!_lg_typecheck_SetCol(L)) {
			luaL_error(L, "luna typecheck failed in void wxGBPosition::SetCol(int col) function, expected prototype:\nvoid wxGBPosition::SetCol(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGBPosition::SetCol(int). Got : '%s'\n%s",typeid(Luna< wxGBPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCol(col);

		return 0;
	}

	// void wxGBPosition::SetRow(int row)
	static int _bind_SetRow(lua_State *L) {
		if (!_lg_typecheck_SetRow(L)) {
			luaL_error(L, "luna typecheck failed in void wxGBPosition::SetRow(int row) function, expected prototype:\nvoid wxGBPosition::SetRow(int row)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);

		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGBPosition::SetRow(int). Got : '%s'\n%s",typeid(Luna< wxGBPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRow(row);

		return 0;
	}


	// Operator binds:
	// bool wxGBPosition::operator==(const wxGBPosition & p) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGBPosition::operator==(const wxGBPosition & p) const function, expected prototype:\nbool wxGBPosition::operator==(const wxGBPosition & p) const\nClass arguments details:\narg 1 ID = 3425779\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGBPosition* p_ptr=(Luna< wxGBPosition >::check(L,2));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in wxGBPosition::operator== function");
		}
		const wxGBPosition & p=*p_ptr;

		wxGBPosition* self=(Luna< wxGBPosition >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGBPosition::operator==(const wxGBPosition &) const. Got : '%s'\n%s",typeid(Luna< wxGBPosition >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(p);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxGBPosition* LunaTraits< wxGBPosition >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGBPosition::_bind_ctor(L);
}

void LunaTraits< wxGBPosition >::_bind_dtor(wxGBPosition* obj) {
	delete obj;
}

const char LunaTraits< wxGBPosition >::className[] = "wxGBPosition";
const char LunaTraits< wxGBPosition >::fullName[] = "wxGBPosition";
const char LunaTraits< wxGBPosition >::moduleName[] = "wx";
const char* LunaTraits< wxGBPosition >::parents[] = {0};
const int LunaTraits< wxGBPosition >::hash = 3425779;
const int LunaTraits< wxGBPosition >::uniqueIDs[] = {3425779,0};

luna_RegType LunaTraits< wxGBPosition >::methods[] = {
	{"GetCol", &luna_wrapper_wxGBPosition::_bind_GetCol},
	{"GetRow", &luna_wrapper_wxGBPosition::_bind_GetRow},
	{"SetCol", &luna_wrapper_wxGBPosition::_bind_SetCol},
	{"SetRow", &luna_wrapper_wxGBPosition::_bind_SetRow},
	{"__eq", &luna_wrapper_wxGBPosition::_bind___eq},
	{"dynCast", &luna_wrapper_wxGBPosition::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxGBPosition::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGBPosition::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxGBPosition >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGBPosition >::enumValues[] = {
	{0,0}
};


