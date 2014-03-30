#include <plug_common.h>

class luna_wrapper_wxGBSpan {
public:
	typedef Luna< wxGBSpan > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxGBSpan* self= (wxGBSpan*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGBSpan >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,97553085) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxGBSpan >::check(L,1));
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

		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxGBSpan");
		
		return luna_dynamicCast(L,converters,"wxGBSpan",name);
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
	inline static bool _lg_typecheck_GetColspan(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowspan(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColspan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRowspan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,97553085) ) return false;
		return true;
	}


	// Constructor binds:
	// wxGBSpan::wxGBSpan()
	static wxGBSpan* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSpan::wxGBSpan() function, expected prototype:\nwxGBSpan::wxGBSpan()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxGBSpan();
	}

	// wxGBSpan::wxGBSpan(int rowspan, int colspan)
	static wxGBSpan* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGBSpan::wxGBSpan(int rowspan, int colspan) function, expected prototype:\nwxGBSpan::wxGBSpan(int rowspan, int colspan)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rowspan=(int)lua_tointeger(L,1);
		int colspan=(int)lua_tointeger(L,2);

		return new wxGBSpan(rowspan, colspan);
	}

	// Overload binder for wxGBSpan::wxGBSpan
	static wxGBSpan* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxGBSpan, cannot match any of the overloads for function wxGBSpan:\n  wxGBSpan()\n  wxGBSpan(int, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxGBSpan::GetColspan() const
	static int _bind_GetColspan(lua_State *L) {
		if (!_lg_typecheck_GetColspan(L)) {
			luaL_error(L, "luna typecheck failed in int wxGBSpan::GetColspan() const function, expected prototype:\nint wxGBSpan::GetColspan() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGBSpan::GetColspan() const. Got : '%s'\n%s",typeid(Luna< wxGBSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColspan();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGBSpan::GetRowspan() const
	static int _bind_GetRowspan(lua_State *L) {
		if (!_lg_typecheck_GetRowspan(L)) {
			luaL_error(L, "luna typecheck failed in int wxGBSpan::GetRowspan() const function, expected prototype:\nint wxGBSpan::GetRowspan() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGBSpan::GetRowspan() const. Got : '%s'\n%s",typeid(Luna< wxGBSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRowspan();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGBSpan::SetColspan(int colspan)
	static int _bind_SetColspan(lua_State *L) {
		if (!_lg_typecheck_SetColspan(L)) {
			luaL_error(L, "luna typecheck failed in void wxGBSpan::SetColspan(int colspan) function, expected prototype:\nvoid wxGBSpan::SetColspan(int colspan)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int colspan=(int)lua_tointeger(L,2);

		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGBSpan::SetColspan(int). Got : '%s'\n%s",typeid(Luna< wxGBSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColspan(colspan);

		return 0;
	}

	// void wxGBSpan::SetRowspan(int rowspan)
	static int _bind_SetRowspan(lua_State *L) {
		if (!_lg_typecheck_SetRowspan(L)) {
			luaL_error(L, "luna typecheck failed in void wxGBSpan::SetRowspan(int rowspan) function, expected prototype:\nvoid wxGBSpan::SetRowspan(int rowspan)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int rowspan=(int)lua_tointeger(L,2);

		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGBSpan::SetRowspan(int). Got : '%s'\n%s",typeid(Luna< wxGBSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRowspan(rowspan);

		return 0;
	}


	// Operator binds:
	// bool wxGBSpan::operator==(const wxGBSpan & o) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGBSpan::operator==(const wxGBSpan & o) const function, expected prototype:\nbool wxGBSpan::operator==(const wxGBSpan & o) const\nClass arguments details:\narg 1 ID = 97553085\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxGBSpan* o_ptr=(Luna< wxGBSpan >::check(L,2));
		if( !o_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg o in wxGBSpan::operator== function");
		}
		const wxGBSpan & o=*o_ptr;

		wxGBSpan* self=(Luna< wxGBSpan >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGBSpan::operator==(const wxGBSpan &) const. Got : '%s'\n%s",typeid(Luna< wxGBSpan >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(o);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

wxGBSpan* LunaTraits< wxGBSpan >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGBSpan::_bind_ctor(L);
}

void LunaTraits< wxGBSpan >::_bind_dtor(wxGBSpan* obj) {
	delete obj;
}

const char LunaTraits< wxGBSpan >::className[] = "wxGBSpan";
const char LunaTraits< wxGBSpan >::fullName[] = "wxGBSpan";
const char LunaTraits< wxGBSpan >::moduleName[] = "wx";
const char* LunaTraits< wxGBSpan >::parents[] = {0};
const int LunaTraits< wxGBSpan >::hash = 97553085;
const int LunaTraits< wxGBSpan >::uniqueIDs[] = {97553085,0};

luna_RegType LunaTraits< wxGBSpan >::methods[] = {
	{"GetColspan", &luna_wrapper_wxGBSpan::_bind_GetColspan},
	{"GetRowspan", &luna_wrapper_wxGBSpan::_bind_GetRowspan},
	{"SetColspan", &luna_wrapper_wxGBSpan::_bind_SetColspan},
	{"SetRowspan", &luna_wrapper_wxGBSpan::_bind_SetRowspan},
	{"__eq", &luna_wrapper_wxGBSpan::_bind___eq},
	{"dynCast", &luna_wrapper_wxGBSpan::_bind_dynCast},
	{"fromVoid", &luna_wrapper_wxGBSpan::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGBSpan::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxGBSpan >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxGBSpan >::enumValues[] = {
	{0,0}
};


