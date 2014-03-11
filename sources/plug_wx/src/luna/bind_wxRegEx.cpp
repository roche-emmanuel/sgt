#include <plug_common.h>

class luna_wrapper_wxRegEx {
public:
	typedef Luna< wxRegEx > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27269423) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxRegEx*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxRegEx* rhs =(Luna< wxRegEx >::check(L,2));
		wxRegEx* self=(Luna< wxRegEx >::check(L,1));
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

		wxRegEx* self= (wxRegEx*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRegEx >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,27269423) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxRegEx >::check(L,1));
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

		wxRegEx* self=(Luna< wxRegEx >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxRegEx");
		
		return luna_dynamicCast(L,converters,"wxRegEx",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Compile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMatch_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMatch_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMatchCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsValid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Replace(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReplaceAll(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReplaceFirst(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxRegEx::wxRegEx()
	static wxRegEx* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxRegEx::wxRegEx() function, expected prototype:\nwxRegEx::wxRegEx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxRegEx();
	}

	// wxRegEx::wxRegEx(const wxString & expr, int flags = ::wxRE_DEFAULT)
	static wxRegEx* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxRegEx::wxRegEx(const wxString & expr, int flags = ::wxRE_DEFAULT) function, expected prototype:\nwxRegEx::wxRegEx(const wxString & expr, int flags = ::wxRE_DEFAULT)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString expr(lua_tostring(L,1),lua_objlen(L,1));
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxRE_DEFAULT;

		return new wxRegEx(expr, flags);
	}

	// Overload binder for wxRegEx::wxRegEx
	static wxRegEx* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRegEx, cannot match any of the overloads for function wxRegEx:\n  wxRegEx()\n  wxRegEx(const wxString &, int)\n");
		return NULL;
	}


	// Function binds:
	// bool wxRegEx::Compile(const wxString & pattern, int flags = ::wxRE_DEFAULT)
	static int _bind_Compile(lua_State *L) {
		if (!_lg_typecheck_Compile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRegEx::Compile(const wxString & pattern, int flags = ::wxRE_DEFAULT) function, expected prototype:\nbool wxRegEx::Compile(const wxString & pattern, int flags = ::wxRE_DEFAULT)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString pattern(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxRE_DEFAULT;

		wxRegEx* self=(Luna< wxRegEx >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRegEx::Compile(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxRegEx >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Compile(pattern, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxRegEx::GetMatch(size_t * start, size_t * len, size_t index = 0) const
	static int _bind_GetMatch_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetMatch_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRegEx::GetMatch(size_t * start, size_t * len, size_t index = 0) const function, expected prototype:\nbool wxRegEx::GetMatch(size_t * start, size_t * len, size_t index = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t* start=(size_t*)Luna< void >::check(L,2);
		size_t* len=(size_t*)Luna< void >::check(L,3);
		size_t index=luatop>3 ? (size_t)lua_tointeger(L,4) : (size_t)0;

		wxRegEx* self=(Luna< wxRegEx >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRegEx::GetMatch(size_t *, size_t *, size_t) const. Got : '%s'\n%s",typeid(Luna< wxRegEx >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetMatch(start, len, index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxRegEx::GetMatch(const wxString & text, size_t index = 0) const
	static int _bind_GetMatch_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetMatch_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxRegEx::GetMatch(const wxString & text, size_t index = 0) const function, expected prototype:\nwxString wxRegEx::GetMatch(const wxString & text, size_t index = 0) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		size_t index=luatop>2 ? (size_t)lua_tointeger(L,3) : (size_t)0;

		wxRegEx* self=(Luna< wxRegEx >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxRegEx::GetMatch(const wxString &, size_t) const. Got : '%s'\n%s",typeid(Luna< wxRegEx >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetMatch(text, index);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxRegEx::GetMatch
	static int _bind_GetMatch(lua_State *L) {
		if (_lg_typecheck_GetMatch_overload_1(L)) return _bind_GetMatch_overload_1(L);
		if (_lg_typecheck_GetMatch_overload_2(L)) return _bind_GetMatch_overload_2(L);

		luaL_error(L, "error in function GetMatch, cannot match any of the overloads for function GetMatch:\n  GetMatch(size_t *, size_t *, size_t)\n  GetMatch(const wxString &, size_t)\n");
		return 0;
	}

	// size_t wxRegEx::GetMatchCount() const
	static int _bind_GetMatchCount(lua_State *L) {
		if (!_lg_typecheck_GetMatchCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxRegEx::GetMatchCount() const function, expected prototype:\nsize_t wxRegEx::GetMatchCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRegEx* self=(Luna< wxRegEx >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxRegEx::GetMatchCount() const. Got : '%s'\n%s",typeid(Luna< wxRegEx >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetMatchCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxRegEx::IsValid() const
	static int _bind_IsValid(lua_State *L) {
		if (!_lg_typecheck_IsValid(L)) {
			luaL_error(L, "luna typecheck failed in bool wxRegEx::IsValid() const function, expected prototype:\nbool wxRegEx::IsValid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRegEx* self=(Luna< wxRegEx >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxRegEx::IsValid() const. Got : '%s'\n%s",typeid(Luna< wxRegEx >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsValid();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxRegEx::Replace(wxString * text, const wxString & replacement, size_t maxMatches = 0) const
	static int _bind_Replace(lua_State *L) {
		if (!_lg_typecheck_Replace(L)) {
			luaL_error(L, "luna typecheck failed in int wxRegEx::Replace(wxString * text, const wxString & replacement, size_t maxMatches = 0) const function, expected prototype:\nint wxRegEx::Replace(wxString * text, const wxString & replacement, size_t maxMatches = 0) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		wxString replacement(lua_tostring(L,3),lua_objlen(L,3));
		size_t maxMatches=luatop>3 ? (size_t)lua_tointeger(L,4) : (size_t)0;

		wxRegEx* self=(Luna< wxRegEx >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRegEx::Replace(wxString *, const wxString &, size_t) const. Got : '%s'\n%s",typeid(Luna< wxRegEx >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Replace(&text, replacement, maxMatches);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRegEx::ReplaceAll(wxString * text, const wxString & replacement) const
	static int _bind_ReplaceAll(lua_State *L) {
		if (!_lg_typecheck_ReplaceAll(L)) {
			luaL_error(L, "luna typecheck failed in int wxRegEx::ReplaceAll(wxString * text, const wxString & replacement) const function, expected prototype:\nint wxRegEx::ReplaceAll(wxString * text, const wxString & replacement) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		wxString replacement(lua_tostring(L,3),lua_objlen(L,3));

		wxRegEx* self=(Luna< wxRegEx >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRegEx::ReplaceAll(wxString *, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxRegEx >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ReplaceAll(&text, replacement);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxRegEx::ReplaceFirst(wxString * text, const wxString & replacement) const
	static int _bind_ReplaceFirst(lua_State *L) {
		if (!_lg_typecheck_ReplaceFirst(L)) {
			luaL_error(L, "luna typecheck failed in int wxRegEx::ReplaceFirst(wxString * text, const wxString & replacement) const function, expected prototype:\nint wxRegEx::ReplaceFirst(wxString * text, const wxString & replacement) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		wxString replacement(lua_tostring(L,3),lua_objlen(L,3));

		wxRegEx* self=(Luna< wxRegEx >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxRegEx::ReplaceFirst(wxString *, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxRegEx >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ReplaceFirst(&text, replacement);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxRegEx* LunaTraits< wxRegEx >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRegEx::_bind_ctor(L);
}

void LunaTraits< wxRegEx >::_bind_dtor(wxRegEx* obj) {
	delete obj;
}

const char LunaTraits< wxRegEx >::className[] = "wxRegEx";
const char LunaTraits< wxRegEx >::fullName[] = "wxRegEx";
const char LunaTraits< wxRegEx >::moduleName[] = "wx";
const char* LunaTraits< wxRegEx >::parents[] = {0};
const int LunaTraits< wxRegEx >::hash = 27269423;
const int LunaTraits< wxRegEx >::uniqueIDs[] = {27269423,0};

luna_RegType LunaTraits< wxRegEx >::methods[] = {
	{"Compile", &luna_wrapper_wxRegEx::_bind_Compile},
	{"GetMatch", &luna_wrapper_wxRegEx::_bind_GetMatch},
	{"GetMatchCount", &luna_wrapper_wxRegEx::_bind_GetMatchCount},
	{"IsValid", &luna_wrapper_wxRegEx::_bind_IsValid},
	{"Replace", &luna_wrapper_wxRegEx::_bind_Replace},
	{"ReplaceAll", &luna_wrapper_wxRegEx::_bind_ReplaceAll},
	{"ReplaceFirst", &luna_wrapper_wxRegEx::_bind_ReplaceFirst},
	{"dynCast", &luna_wrapper_wxRegEx::_bind_dynCast},
	{"__eq", &luna_wrapper_wxRegEx::_bind___eq},
	{"fromVoid", &luna_wrapper_wxRegEx::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRegEx::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxRegEx >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxRegEx >::enumValues[] = {
	{0,0}
};


