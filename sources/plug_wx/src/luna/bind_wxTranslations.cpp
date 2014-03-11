#include <plug_common.h>

class luna_wrapper_wxTranslations {
public:
	typedef Luna< wxTranslations > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55781891) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTranslations*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTranslations* rhs =(Luna< wxTranslations >::check(L,2));
		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
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

		wxTranslations* self= (wxTranslations*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTranslations >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,55781891) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTranslations >::check(L,1));
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

		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTranslations");
		
		return luna_dynamicCast(L,converters,"wxTranslations",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SetLoader(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,42502497)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLanguage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLanguage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAvailableTranslations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddStdCatalog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddCatalog_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddCatalog_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsLoaded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetString_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetString_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHeaderValue(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Get(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Set(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,55781891)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTranslations::wxTranslations()
	static wxTranslations* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxTranslations::wxTranslations() function, expected prototype:\nwxTranslations::wxTranslations()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTranslations();
	}


	// Function binds:
	// void wxTranslations::SetLoader(wxTranslationsLoader * loader)
	static int _bind_SetLoader(lua_State *L) {
		if (!_lg_typecheck_SetLoader(L)) {
			luaL_error(L, "luna typecheck failed in void wxTranslations::SetLoader(wxTranslationsLoader * loader) function, expected prototype:\nvoid wxTranslations::SetLoader(wxTranslationsLoader * loader)\nClass arguments details:\narg 1 ID = 42502497\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTranslationsLoader* loader=(Luna< wxTranslationsLoader >::check(L,2));

		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTranslations::SetLoader(wxTranslationsLoader *). Got : '%s'\n%s",typeid(Luna< wxTranslations >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLoader(loader);

		return 0;
	}

	// void wxTranslations::SetLanguage(wxLanguage lang)
	static int _bind_SetLanguage_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetLanguage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTranslations::SetLanguage(wxLanguage lang) function, expected prototype:\nvoid wxTranslations::SetLanguage(wxLanguage lang)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLanguage lang=(wxLanguage)lua_tointeger(L,2);

		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTranslations::SetLanguage(wxLanguage). Got : '%s'\n%s",typeid(Luna< wxTranslations >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLanguage(lang);

		return 0;
	}

	// void wxTranslations::SetLanguage(const wxString & lang)
	static int _bind_SetLanguage_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetLanguage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTranslations::SetLanguage(const wxString & lang) function, expected prototype:\nvoid wxTranslations::SetLanguage(const wxString & lang)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString lang(lua_tostring(L,2),lua_objlen(L,2));

		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTranslations::SetLanguage(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTranslations >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLanguage(lang);

		return 0;
	}

	// Overload binder for wxTranslations::SetLanguage
	static int _bind_SetLanguage(lua_State *L) {
		if (_lg_typecheck_SetLanguage_overload_1(L)) return _bind_SetLanguage_overload_1(L);
		if (_lg_typecheck_SetLanguage_overload_2(L)) return _bind_SetLanguage_overload_2(L);

		luaL_error(L, "error in function SetLanguage, cannot match any of the overloads for function SetLanguage:\n  SetLanguage(wxLanguage)\n  SetLanguage(const wxString &)\n");
		return 0;
	}

	// wxArrayString wxTranslations::GetAvailableTranslations(const wxString & domain) const
	static int _bind_GetAvailableTranslations(lua_State *L) {
		if (!_lg_typecheck_GetAvailableTranslations(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayString wxTranslations::GetAvailableTranslations(const wxString & domain) const function, expected prototype:\nwxArrayString wxTranslations::GetAvailableTranslations(const wxString & domain) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));

		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayString wxTranslations::GetAvailableTranslations(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxTranslations >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArrayString stack_lret = self->GetAvailableTranslations(domain);
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}

	// bool wxTranslations::AddStdCatalog()
	static int _bind_AddStdCatalog(lua_State *L) {
		if (!_lg_typecheck_AddStdCatalog(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTranslations::AddStdCatalog() function, expected prototype:\nbool wxTranslations::AddStdCatalog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTranslations::AddStdCatalog(). Got : '%s'\n%s",typeid(Luna< wxTranslations >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AddStdCatalog();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTranslations::AddCatalog(const wxString & domain)
	static int _bind_AddCatalog_overload_1(lua_State *L) {
		if (!_lg_typecheck_AddCatalog_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTranslations::AddCatalog(const wxString & domain) function, expected prototype:\nbool wxTranslations::AddCatalog(const wxString & domain)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));

		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTranslations::AddCatalog(const wxString &). Got : '%s'\n%s",typeid(Luna< wxTranslations >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AddCatalog(domain);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTranslations::AddCatalog(const wxString & domain, wxLanguage msgIdLanguage)
	static int _bind_AddCatalog_overload_2(lua_State *L) {
		if (!_lg_typecheck_AddCatalog_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTranslations::AddCatalog(const wxString & domain, wxLanguage msgIdLanguage) function, expected prototype:\nbool wxTranslations::AddCatalog(const wxString & domain, wxLanguage msgIdLanguage)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));
		wxLanguage msgIdLanguage=(wxLanguage)lua_tointeger(L,3);

		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTranslations::AddCatalog(const wxString &, wxLanguage). Got : '%s'\n%s",typeid(Luna< wxTranslations >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AddCatalog(domain, msgIdLanguage);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxTranslations::AddCatalog
	static int _bind_AddCatalog(lua_State *L) {
		if (_lg_typecheck_AddCatalog_overload_1(L)) return _bind_AddCatalog_overload_1(L);
		if (_lg_typecheck_AddCatalog_overload_2(L)) return _bind_AddCatalog_overload_2(L);

		luaL_error(L, "error in function AddCatalog, cannot match any of the overloads for function AddCatalog:\n  AddCatalog(const wxString &)\n  AddCatalog(const wxString &, wxLanguage)\n");
		return 0;
	}

	// bool wxTranslations::IsLoaded(const wxString & domain) const
	static int _bind_IsLoaded(lua_State *L) {
		if (!_lg_typecheck_IsLoaded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTranslations::IsLoaded(const wxString & domain) const function, expected prototype:\nbool wxTranslations::IsLoaded(const wxString & domain) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));

		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTranslations::IsLoaded(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxTranslations >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsLoaded(domain);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const wxString & wxTranslations::GetString(const wxString & origString, const wxString & domain = wxEmptyString) const
	static int _bind_GetString_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetString_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTranslations::GetString(const wxString & origString, const wxString & domain = wxEmptyString) const function, expected prototype:\nconst wxString & wxTranslations::GetString(const wxString & origString, const wxString & domain = wxEmptyString) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString origString(lua_tostring(L,2),lua_objlen(L,2));
		wxString domain(lua_tostring(L,3),lua_objlen(L,3));

		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTranslations::GetString(const wxString &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxTranslations >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetString(origString, domain);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// const wxString & wxTranslations::GetString(const wxString & origString, const wxString & origString2, unsigned int n, const wxString & domain = wxEmptyString) const
	static int _bind_GetString_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetString_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTranslations::GetString(const wxString & origString, const wxString & origString2, unsigned int n, const wxString & domain = wxEmptyString) const function, expected prototype:\nconst wxString & wxTranslations::GetString(const wxString & origString, const wxString & origString2, unsigned int n, const wxString & domain = wxEmptyString) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString origString(lua_tostring(L,2),lua_objlen(L,2));
		wxString origString2(lua_tostring(L,3),lua_objlen(L,3));
		unsigned n=(unsigned)lua_tointeger(L,4);
		wxString domain(lua_tostring(L,5),lua_objlen(L,5));

		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTranslations::GetString(const wxString &, const wxString &, unsigned int, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxTranslations >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetString(origString, origString2, n, domain);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxTranslations::GetString
	static int _bind_GetString(lua_State *L) {
		if (_lg_typecheck_GetString_overload_1(L)) return _bind_GetString_overload_1(L);
		if (_lg_typecheck_GetString_overload_2(L)) return _bind_GetString_overload_2(L);

		luaL_error(L, "error in function GetString, cannot match any of the overloads for function GetString:\n  GetString(const wxString &, const wxString &)\n  GetString(const wxString &, const wxString &, unsigned int, const wxString &)\n");
		return 0;
	}

	// wxString wxTranslations::GetHeaderValue(const wxString & header, const wxString & domain = wxEmptyString) const
	static int _bind_GetHeaderValue(lua_State *L) {
		if (!_lg_typecheck_GetHeaderValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTranslations::GetHeaderValue(const wxString & header, const wxString & domain = wxEmptyString) const function, expected prototype:\nwxString wxTranslations::GetHeaderValue(const wxString & header, const wxString & domain = wxEmptyString) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString header(lua_tostring(L,2),lua_objlen(L,2));
		wxString domain(lua_tostring(L,3),lua_objlen(L,3));

		wxTranslations* self=(Luna< wxTranslations >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTranslations::GetHeaderValue(const wxString &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxTranslations >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetHeaderValue(header, domain);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxTranslations * wxTranslations::Get()
	static int _bind_Get(lua_State *L) {
		if (!_lg_typecheck_Get(L)) {
			luaL_error(L, "luna typecheck failed in static wxTranslations * wxTranslations::Get() function, expected prototype:\nstatic wxTranslations * wxTranslations::Get()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTranslations * lret = wxTranslations::Get();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTranslations >::push(L,lret,false);

		return 1;
	}

	// static void wxTranslations::Set(wxTranslations * t)
	static int _bind_Set(lua_State *L) {
		if (!_lg_typecheck_Set(L)) {
			luaL_error(L, "luna typecheck failed in static void wxTranslations::Set(wxTranslations * t) function, expected prototype:\nstatic void wxTranslations::Set(wxTranslations * t)\nClass arguments details:\narg 1 ID = 55781891\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTranslations* t=(Luna< wxTranslations >::check(L,1));

		wxTranslations::Set(t);

		return 0;
	}


	// Operator binds:

};

wxTranslations* LunaTraits< wxTranslations >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTranslations::_bind_ctor(L);
}

void LunaTraits< wxTranslations >::_bind_dtor(wxTranslations* obj) {
	delete obj;
}

const char LunaTraits< wxTranslations >::className[] = "wxTranslations";
const char LunaTraits< wxTranslations >::fullName[] = "wxTranslations";
const char LunaTraits< wxTranslations >::moduleName[] = "wx";
const char* LunaTraits< wxTranslations >::parents[] = {0};
const int LunaTraits< wxTranslations >::hash = 55781891;
const int LunaTraits< wxTranslations >::uniqueIDs[] = {55781891,0};

luna_RegType LunaTraits< wxTranslations >::methods[] = {
	{"SetLoader", &luna_wrapper_wxTranslations::_bind_SetLoader},
	{"SetLanguage", &luna_wrapper_wxTranslations::_bind_SetLanguage},
	{"GetAvailableTranslations", &luna_wrapper_wxTranslations::_bind_GetAvailableTranslations},
	{"AddStdCatalog", &luna_wrapper_wxTranslations::_bind_AddStdCatalog},
	{"AddCatalog", &luna_wrapper_wxTranslations::_bind_AddCatalog},
	{"IsLoaded", &luna_wrapper_wxTranslations::_bind_IsLoaded},
	{"GetString", &luna_wrapper_wxTranslations::_bind_GetString},
	{"GetHeaderValue", &luna_wrapper_wxTranslations::_bind_GetHeaderValue},
	{"Get", &luna_wrapper_wxTranslations::_bind_Get},
	{"Set", &luna_wrapper_wxTranslations::_bind_Set},
	{"dynCast", &luna_wrapper_wxTranslations::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTranslations::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTranslations::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTranslations::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxTranslations >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTranslations >::enumValues[] = {
	{0,0}
};


