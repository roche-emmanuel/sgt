#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFontEnumerator.h>

class luna_wrapper_wxFontEnumerator {
public:
	typedef Luna< wxFontEnumerator > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxFontEnumerator,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75930373) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxFontEnumerator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxFontEnumerator* rhs =(Luna< wxFontEnumerator >::check(L,2));
		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
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

		wxFontEnumerator* self= (wxFontEnumerator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFontEnumerator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,75930373) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxFontEnumerator >::check(L,1));
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

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFontEnumerator");
		
		return luna_dynamicCast(L,converters,"wxFontEnumerator",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_EnumerateEncodings(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnumerateFacenames(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFacename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnFontEncoding(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEncodings(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFacenames(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsValidFacename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnumerateEncodings(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnumerateFacenames(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnFacename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnFontEncoding(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxFontEnumerator::EnumerateEncodings(const wxString & font = wxEmptyString)
	static int _bind_EnumerateEncodings(lua_State *L) {
		if (!_lg_typecheck_EnumerateEncodings(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::EnumerateEncodings(const wxString & font = wxEmptyString) function, expected prototype:\nbool wxFontEnumerator::EnumerateEncodings(const wxString & font = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString font(lua_tostring(L,2),lua_objlen(L,2));

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::EnumerateEncodings(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFontEnumerator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EnumerateEncodings(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontEnumerator::EnumerateFacenames(wxFontEncoding encoding = ::wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false)
	static int _bind_EnumerateFacenames(lua_State *L) {
		if (!_lg_typecheck_EnumerateFacenames(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::EnumerateFacenames(wxFontEncoding encoding = ::wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false) function, expected prototype:\nbool wxFontEnumerator::EnumerateFacenames(wxFontEncoding encoding = ::wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxFontEncoding encoding=luatop>1 ? (wxFontEncoding)lua_tointeger(L,2) : (wxFontEncoding)::wxFONTENCODING_SYSTEM;
		bool fixedWidthOnly=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::EnumerateFacenames(wxFontEncoding, bool). Got : '%s'\n%s",typeid(Luna< wxFontEnumerator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EnumerateFacenames(encoding, fixedWidthOnly);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontEnumerator::OnFacename(const wxString & font)
	static int _bind_OnFacename(lua_State *L) {
		if (!_lg_typecheck_OnFacename(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::OnFacename(const wxString & font) function, expected prototype:\nbool wxFontEnumerator::OnFacename(const wxString & font)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString font(lua_tostring(L,2),lua_objlen(L,2));

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::OnFacename(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFontEnumerator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnFacename(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontEnumerator::OnFontEncoding(const wxString & font, const wxString & encoding)
	static int _bind_OnFontEncoding(lua_State *L) {
		if (!_lg_typecheck_OnFontEncoding(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::OnFontEncoding(const wxString & font, const wxString & encoding) function, expected prototype:\nbool wxFontEnumerator::OnFontEncoding(const wxString & font, const wxString & encoding)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString font(lua_tostring(L,2),lua_objlen(L,2));
		wxString encoding(lua_tostring(L,3),lua_objlen(L,3));

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::OnFontEncoding(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxFontEnumerator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OnFontEncoding(font, encoding);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxArrayString wxFontEnumerator::GetEncodings(const wxString & facename = wxEmptyString)
	static int _bind_GetEncodings(lua_State *L) {
		if (!_lg_typecheck_GetEncodings(L)) {
			luaL_error(L, "luna typecheck failed in static wxArrayString wxFontEnumerator::GetEncodings(const wxString & facename = wxEmptyString) function, expected prototype:\nstatic wxArrayString wxFontEnumerator::GetEncodings(const wxString & facename = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString facename(lua_tostring(L,1),lua_objlen(L,1));

		wxArrayString stack_lret = wxFontEnumerator::GetEncodings(facename);
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}

	// static wxArrayString wxFontEnumerator::GetFacenames(wxFontEncoding encoding = ::wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false)
	static int _bind_GetFacenames(lua_State *L) {
		if (!_lg_typecheck_GetFacenames(L)) {
			luaL_error(L, "luna typecheck failed in static wxArrayString wxFontEnumerator::GetFacenames(wxFontEncoding encoding = ::wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false) function, expected prototype:\nstatic wxArrayString wxFontEnumerator::GetFacenames(wxFontEncoding encoding = ::wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxFontEncoding encoding=luatop>0 ? (wxFontEncoding)lua_tointeger(L,1) : (wxFontEncoding)::wxFONTENCODING_SYSTEM;
		bool fixedWidthOnly=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxArrayString stack_lret = wxFontEnumerator::GetFacenames(encoding, fixedWidthOnly);
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}

	// static bool wxFontEnumerator::IsValidFacename(const wxString & facename)
	static int _bind_IsValidFacename(lua_State *L) {
		if (!_lg_typecheck_IsValidFacename(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxFontEnumerator::IsValidFacename(const wxString & facename) function, expected prototype:\nstatic bool wxFontEnumerator::IsValidFacename(const wxString & facename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString facename(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = wxFontEnumerator::IsValidFacename(facename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontEnumerator::base_EnumerateEncodings(const wxString & font = wxEmptyString)
	static int _bind_base_EnumerateEncodings(lua_State *L) {
		if (!_lg_typecheck_base_EnumerateEncodings(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::base_EnumerateEncodings(const wxString & font = wxEmptyString) function, expected prototype:\nbool wxFontEnumerator::base_EnumerateEncodings(const wxString & font = wxEmptyString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString font(lua_tostring(L,2),lua_objlen(L,2));

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::base_EnumerateEncodings(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFontEnumerator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFontEnumerator::EnumerateEncodings(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontEnumerator::base_EnumerateFacenames(wxFontEncoding encoding = ::wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false)
	static int _bind_base_EnumerateFacenames(lua_State *L) {
		if (!_lg_typecheck_base_EnumerateFacenames(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::base_EnumerateFacenames(wxFontEncoding encoding = ::wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false) function, expected prototype:\nbool wxFontEnumerator::base_EnumerateFacenames(wxFontEncoding encoding = ::wxFONTENCODING_SYSTEM, bool fixedWidthOnly = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxFontEncoding encoding=luatop>1 ? (wxFontEncoding)lua_tointeger(L,2) : (wxFontEncoding)::wxFONTENCODING_SYSTEM;
		bool fixedWidthOnly=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::base_EnumerateFacenames(wxFontEncoding, bool). Got : '%s'\n%s",typeid(Luna< wxFontEnumerator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFontEnumerator::EnumerateFacenames(encoding, fixedWidthOnly);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontEnumerator::base_OnFacename(const wxString & font)
	static int _bind_base_OnFacename(lua_State *L) {
		if (!_lg_typecheck_base_OnFacename(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::base_OnFacename(const wxString & font) function, expected prototype:\nbool wxFontEnumerator::base_OnFacename(const wxString & font)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString font(lua_tostring(L,2),lua_objlen(L,2));

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::base_OnFacename(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFontEnumerator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFontEnumerator::OnFacename(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFontEnumerator::base_OnFontEncoding(const wxString & font, const wxString & encoding)
	static int _bind_base_OnFontEncoding(lua_State *L) {
		if (!_lg_typecheck_base_OnFontEncoding(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFontEnumerator::base_OnFontEncoding(const wxString & font, const wxString & encoding) function, expected prototype:\nbool wxFontEnumerator::base_OnFontEncoding(const wxString & font, const wxString & encoding)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString font(lua_tostring(L,2),lua_objlen(L,2));
		wxString encoding(lua_tostring(L,3),lua_objlen(L,3));

		wxFontEnumerator* self=(Luna< wxFontEnumerator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFontEnumerator::base_OnFontEncoding(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxFontEnumerator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFontEnumerator::OnFontEncoding(font, encoding);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxFontEnumerator* LunaTraits< wxFontEnumerator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxFontEnumerator >::_bind_dtor(wxFontEnumerator* obj) {
	delete obj;
}

const char LunaTraits< wxFontEnumerator >::className[] = "wxFontEnumerator";
const char LunaTraits< wxFontEnumerator >::fullName[] = "wxFontEnumerator";
const char LunaTraits< wxFontEnumerator >::moduleName[] = "wx";
const char* LunaTraits< wxFontEnumerator >::parents[] = {0};
const int LunaTraits< wxFontEnumerator >::hash = 75930373;
const int LunaTraits< wxFontEnumerator >::uniqueIDs[] = {75930373,0};

luna_RegType LunaTraits< wxFontEnumerator >::methods[] = {
	{"EnumerateEncodings", &luna_wrapper_wxFontEnumerator::_bind_EnumerateEncodings},
	{"EnumerateFacenames", &luna_wrapper_wxFontEnumerator::_bind_EnumerateFacenames},
	{"OnFacename", &luna_wrapper_wxFontEnumerator::_bind_OnFacename},
	{"OnFontEncoding", &luna_wrapper_wxFontEnumerator::_bind_OnFontEncoding},
	{"GetEncodings", &luna_wrapper_wxFontEnumerator::_bind_GetEncodings},
	{"GetFacenames", &luna_wrapper_wxFontEnumerator::_bind_GetFacenames},
	{"IsValidFacename", &luna_wrapper_wxFontEnumerator::_bind_IsValidFacename},
	{"base_EnumerateEncodings", &luna_wrapper_wxFontEnumerator::_bind_base_EnumerateEncodings},
	{"base_EnumerateFacenames", &luna_wrapper_wxFontEnumerator::_bind_base_EnumerateFacenames},
	{"base_OnFacename", &luna_wrapper_wxFontEnumerator::_bind_base_OnFacename},
	{"base_OnFontEncoding", &luna_wrapper_wxFontEnumerator::_bind_base_OnFontEncoding},
	{"dynCast", &luna_wrapper_wxFontEnumerator::_bind_dynCast},
	{"__eq", &luna_wrapper_wxFontEnumerator::_bind___eq},
	{"fromVoid", &luna_wrapper_wxFontEnumerator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFontEnumerator::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFontEnumerator::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFontEnumerator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFontEnumerator >::enumValues[] = {
	{0,0}
};


