#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTranslationsLoader.h>

class luna_wrapper_wxTranslationsLoader {
public:
	typedef Luna< wxTranslationsLoader > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTranslationsLoader* self=(Luna< wxTranslationsLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxTranslationsLoader,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42502497) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxTranslationsLoader*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxTranslationsLoader* rhs =(Luna< wxTranslationsLoader >::check(L,2));
		wxTranslationsLoader* self=(Luna< wxTranslationsLoader >::check(L,1));
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

		wxTranslationsLoader* self= (wxTranslationsLoader*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTranslationsLoader >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42502497) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxTranslationsLoader >::check(L,1));
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

		wxTranslationsLoader* self=(Luna< wxTranslationsLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxTranslationsLoader");
		
		return luna_dynamicCast(L,converters,"wxTranslationsLoader",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_LoadCatalog(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAvailableTranslations(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTranslationsLoader::wxTranslationsLoader(lua_Table * data)
	static wxTranslationsLoader* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxTranslationsLoader::wxTranslationsLoader(lua_Table * data) function, expected prototype:\nwxTranslationsLoader::wxTranslationsLoader(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxTranslationsLoader(L,NULL);
	}


	// Function binds:
	// wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)
	static int _bind_LoadCatalog(lua_State *L) {
		if (!_lg_typecheck_LoadCatalog(L)) {
			luaL_error(L, "luna typecheck failed in wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang) function, expected prototype:\nwxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));
		wxString lang(lua_tostring(L,3),lua_objlen(L,3));

		wxTranslationsLoader* self=(Luna< wxTranslationsLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxTranslationsLoader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMsgCatalog * lret = self->LoadCatalog(domain, lang);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMsgCatalog >::push(L,lret,false);

		return 1;
	}

	// wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const
	static int _bind_GetAvailableTranslations(lua_State *L) {
		if (!_lg_typecheck_GetAvailableTranslations(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const function, expected prototype:\nwxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString domain(lua_tostring(L,2),lua_objlen(L,2));

		wxTranslationsLoader* self=(Luna< wxTranslationsLoader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxTranslationsLoader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArrayString stack_lret = self->GetAvailableTranslations(domain);
		wxArrayString* lret = new wxArrayString(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayString >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxTranslationsLoader* LunaTraits< wxTranslationsLoader >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTranslationsLoader::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxMsgCatalog * wxTranslationsLoader::LoadCatalog(const wxString & domain, const wxString & lang)
	// wxArrayString wxTranslationsLoader::GetAvailableTranslations(const wxString & domain) const
}

void LunaTraits< wxTranslationsLoader >::_bind_dtor(wxTranslationsLoader* obj) {
	delete obj;
}

const char LunaTraits< wxTranslationsLoader >::className[] = "wxTranslationsLoader";
const char LunaTraits< wxTranslationsLoader >::fullName[] = "wxTranslationsLoader";
const char LunaTraits< wxTranslationsLoader >::moduleName[] = "wx";
const char* LunaTraits< wxTranslationsLoader >::parents[] = {0};
const int LunaTraits< wxTranslationsLoader >::hash = 42502497;
const int LunaTraits< wxTranslationsLoader >::uniqueIDs[] = {42502497,0};

luna_RegType LunaTraits< wxTranslationsLoader >::methods[] = {
	{"LoadCatalog", &luna_wrapper_wxTranslationsLoader::_bind_LoadCatalog},
	{"GetAvailableTranslations", &luna_wrapper_wxTranslationsLoader::_bind_GetAvailableTranslations},
	{"dynCast", &luna_wrapper_wxTranslationsLoader::_bind_dynCast},
	{"__eq", &luna_wrapper_wxTranslationsLoader::_bind___eq},
	{"fromVoid", &luna_wrapper_wxTranslationsLoader::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTranslationsLoader::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTranslationsLoader::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTranslationsLoader >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxTranslationsLoader >::enumValues[] = {
	{0,0}
};


