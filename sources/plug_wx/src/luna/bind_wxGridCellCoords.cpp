#include <plug_common.h>

class luna_wrapper_wxGridCellCoords {
public:
	typedef Luna< wxGridCellCoords > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxGridCellCoords* self= (wxGridCellCoords*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridCellCoords >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6476046) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxGridCellCoords >::check(L,1));
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

		wxGridCellCoords* self=(Luna< wxGridCellCoords >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGridCellCoords");
		
		return luna_dynamicCast(L,converters,"wxGridCellCoords",name);
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
	inline static bool _lg_typecheck_GetRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,6476046) ) return false;
		return true;
	}


	// Constructor binds:
	// wxGridCellCoords::wxGridCellCoords()
	static wxGridCellCoords* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellCoords::wxGridCellCoords() function, expected prototype:\nwxGridCellCoords::wxGridCellCoords()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxGridCellCoords();
	}

	// wxGridCellCoords::wxGridCellCoords(int r, int c)
	static wxGridCellCoords* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellCoords::wxGridCellCoords(int r, int c) function, expected prototype:\nwxGridCellCoords::wxGridCellCoords(int r, int c)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int r=(int)lua_tointeger(L,1);
		int c=(int)lua_tointeger(L,2);

		return new wxGridCellCoords(r, c);
	}

	// Overload binder for wxGridCellCoords::wxGridCellCoords
	static wxGridCellCoords* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGridCellCoords, cannot match any of the overloads for function wxGridCellCoords:\n  wxGridCellCoords()\n  wxGridCellCoords(int, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxGridCellCoords::GetRow() const
	static int _bind_GetRow(lua_State *L) {
		if (!_lg_typecheck_GetRow(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridCellCoords::GetRow() const function, expected prototype:\nint wxGridCellCoords::GetRow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellCoords* self=(Luna< wxGridCellCoords >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridCellCoords::GetRow() const. Got : '%s'\n%s",typeid(Luna< wxGridCellCoords >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGridCellCoords::SetRow(int n)
	static int _bind_SetRow(lua_State *L) {
		if (!_lg_typecheck_SetRow(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellCoords::SetRow(int n) function, expected prototype:\nvoid wxGridCellCoords::SetRow(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxGridCellCoords* self=(Luna< wxGridCellCoords >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellCoords::SetRow(int). Got : '%s'\n%s",typeid(Luna< wxGridCellCoords >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRow(n);

		return 0;
	}

	// int wxGridCellCoords::GetCol() const
	static int _bind_GetCol(lua_State *L) {
		if (!_lg_typecheck_GetCol(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridCellCoords::GetCol() const function, expected prototype:\nint wxGridCellCoords::GetCol() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridCellCoords* self=(Luna< wxGridCellCoords >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridCellCoords::GetCol() const. Got : '%s'\n%s",typeid(Luna< wxGridCellCoords >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGridCellCoords::SetCol(int n)
	static int _bind_SetCol(lua_State *L) {
		if (!_lg_typecheck_SetCol(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellCoords::SetCol(int n) function, expected prototype:\nvoid wxGridCellCoords::SetCol(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxGridCellCoords* self=(Luna< wxGridCellCoords >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellCoords::SetCol(int). Got : '%s'\n%s",typeid(Luna< wxGridCellCoords >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCol(n);

		return 0;
	}

	// void wxGridCellCoords::Set(int row, int col)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in void wxGridCellCoords::Set(int row, int col) function, expected prototype:\nvoid wxGridCellCoords::Set(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		wxGridCellCoords* self=(Luna< wxGridCellCoords >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGridCellCoords::Set(int, int). Got : '%s'\n%s",typeid(Luna< wxGridCellCoords >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Set(row, col);

		return 0;
	}


	// Operator binds:
	// wxGridCellCoords & wxGridCellCoords::operator=(const wxGridCellCoords & other)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellCoords & wxGridCellCoords::operator=(const wxGridCellCoords & other) function, expected prototype:\nwxGridCellCoords & wxGridCellCoords::operator=(const wxGridCellCoords & other)\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* other_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxGridCellCoords::operator= function");
		}
		const wxGridCellCoords & other=*other_ptr;

		wxGridCellCoords* self=(Luna< wxGridCellCoords >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellCoords & wxGridCellCoords::operator=(const wxGridCellCoords &). Got : '%s'\n%s",typeid(Luna< wxGridCellCoords >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxGridCellCoords* lret = &self->operator=(other);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellCoords >::push(L,lret,false);

		return 1;
	}

	// bool wxGridCellCoords::operator==(const wxGridCellCoords & other) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridCellCoords::operator==(const wxGridCellCoords & other) const function, expected prototype:\nbool wxGridCellCoords::operator==(const wxGridCellCoords & other) const\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* other_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxGridCellCoords::operator== function");
		}
		const wxGridCellCoords & other=*other_ptr;

		wxGridCellCoords* self=(Luna< wxGridCellCoords >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridCellCoords::operator==(const wxGridCellCoords &) const. Got : '%s'\n%s",typeid(Luna< wxGridCellCoords >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridCellCoords::operator!=(const wxGridCellCoords & other) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridCellCoords::operator!=(const wxGridCellCoords & other) const function, expected prototype:\nbool wxGridCellCoords::operator!=(const wxGridCellCoords & other) const\nClass arguments details:\narg 1 ID = 6476046\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGridCellCoords* other_ptr=(Luna< wxGridCellCoords >::check(L,2));
		if( !other_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg other in wxGridCellCoords::operator!= function");
		}
		const wxGridCellCoords & other=*other_ptr;

		wxGridCellCoords* self=(Luna< wxGridCellCoords >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridCellCoords::operator!=(const wxGridCellCoords &) const. Got : '%s'\n%s",typeid(Luna< wxGridCellCoords >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(other);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxGridCellCoords* LunaTraits< wxGridCellCoords >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridCellCoords::_bind_ctor(L);
}

void LunaTraits< wxGridCellCoords >::_bind_dtor(wxGridCellCoords* obj) {
	delete obj;
}

const char LunaTraits< wxGridCellCoords >::className[] = "wxGridCellCoords";
const char LunaTraits< wxGridCellCoords >::fullName[] = "wxGridCellCoords";
const char LunaTraits< wxGridCellCoords >::moduleName[] = "wx";
const char* LunaTraits< wxGridCellCoords >::parents[] = {0};
const int LunaTraits< wxGridCellCoords >::hash = 6476046;
const int LunaTraits< wxGridCellCoords >::uniqueIDs[] = {6476046,0};

luna_RegType LunaTraits< wxGridCellCoords >::methods[] = {
	{"GetRow", &luna_wrapper_wxGridCellCoords::_bind_GetRow},
	{"SetRow", &luna_wrapper_wxGridCellCoords::_bind_SetRow},
	{"GetCol", &luna_wrapper_wxGridCellCoords::_bind_GetCol},
	{"SetCol", &luna_wrapper_wxGridCellCoords::_bind_SetCol},
	{"Set", &luna_wrapper_wxGridCellCoords::_bind_Set},
	{"op_assign", &luna_wrapper_wxGridCellCoords::_bind_op_assign},
	{"__eq", &luna_wrapper_wxGridCellCoords::_bind___eq},
	{"op_neq", &luna_wrapper_wxGridCellCoords::_bind_op_neq},
	{"dynCast", &luna_wrapper_wxGridCellCoords::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxGridCellCoords::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridCellCoords::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridCellCoords >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridCellCoords >::enumValues[] = {
	{0,0}
};


