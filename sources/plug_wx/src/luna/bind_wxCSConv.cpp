#include <plug_common.h>

class luna_wrapper_wxCSConv {
public:
	typedef Luna< wxCSConv > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98259140) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxCSConv*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxCSConv* rhs =(Luna< wxCSConv >::check(L,2));
		wxCSConv* self=(Luna< wxCSConv >::check(L,1));
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

		wxCSConv* self= (wxCSConv*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxCSConv >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,98259140) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxCSConv >::check(L,1));
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

		wxCSConv* self=(Luna< wxCSConv >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxCSConv");
		
		return luna_dynamicCast(L,converters,"wxCSConv",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxCSConv::wxCSConv(const wxString & charset)
	static wxCSConv* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxCSConv::wxCSConv(const wxString & charset) function, expected prototype:\nwxCSConv::wxCSConv(const wxString & charset)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString charset(lua_tostring(L,1),lua_objlen(L,1));

		return new wxCSConv(charset);
	}

	// wxCSConv::wxCSConv(wxFontEncoding encoding)
	static wxCSConv* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxCSConv::wxCSConv(wxFontEncoding encoding) function, expected prototype:\nwxCSConv::wxCSConv(wxFontEncoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFontEncoding encoding=(wxFontEncoding)lua_tointeger(L,1);

		return new wxCSConv(encoding);
	}

	// Overload binder for wxCSConv::wxCSConv
	static wxCSConv* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxCSConv, cannot match any of the overloads for function wxCSConv:\n  wxCSConv(const wxString &)\n  wxCSConv(wxFontEncoding)\n");
		return NULL;
	}


	// Function binds:
	// bool wxCSConv::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxCSConv::IsOk() const function, expected prototype:\nbool wxCSConv::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxCSConv* self=(Luna< wxCSConv >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxCSConv::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxCSConv >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxCSConv* LunaTraits< wxCSConv >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxCSConv::_bind_ctor(L);
}

void LunaTraits< wxCSConv >::_bind_dtor(wxCSConv* obj) {
	delete obj;
}

const char LunaTraits< wxCSConv >::className[] = "wxCSConv";
const char LunaTraits< wxCSConv >::fullName[] = "wxCSConv";
const char LunaTraits< wxCSConv >::moduleName[] = "wx";
const char* LunaTraits< wxCSConv >::parents[] = {0};
const int LunaTraits< wxCSConv >::hash = 98259140;
const int LunaTraits< wxCSConv >::uniqueIDs[] = {98259140,0};

luna_RegType LunaTraits< wxCSConv >::methods[] = {
	{"IsOk", &luna_wrapper_wxCSConv::_bind_IsOk},
	{"dynCast", &luna_wrapper_wxCSConv::_bind_dynCast},
	{"__eq", &luna_wrapper_wxCSConv::_bind___eq},
	{"fromVoid", &luna_wrapper_wxCSConv::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxCSConv::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxCSConv >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxCSConv >::enumValues[] = {
	{0,0}
};


