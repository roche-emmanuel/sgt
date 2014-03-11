#include <plug_common.h>

class luna_wrapper_wxMimeTypesManager {
public:
	typedef Luna< wxMimeTypesManager > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,28045951) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxMimeTypesManager*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxMimeTypesManager* rhs =(Luna< wxMimeTypesManager >::check(L,2));
		wxMimeTypesManager* self=(Luna< wxMimeTypesManager >::check(L,1));
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

		wxMimeTypesManager* self= (wxMimeTypesManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMimeTypesManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,28045951) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxMimeTypesManager >::check(L,1));
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

		wxMimeTypesManager* self=(Luna< wxMimeTypesManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxMimeTypesManager");
		
		return luna_dynamicCast(L,converters,"wxMimeTypesManager",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddFallbacks(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3858360)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFileTypeFromExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFileTypeFromMimeType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsOfType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMimeTypesManager::wxMimeTypesManager()
	static wxMimeTypesManager* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxMimeTypesManager::wxMimeTypesManager() function, expected prototype:\nwxMimeTypesManager::wxMimeTypesManager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxMimeTypesManager();
	}


	// Function binds:
	// void wxMimeTypesManager::AddFallbacks(const wxFileTypeInfo * fallbacks)
	static int _bind_AddFallbacks(lua_State *L) {
		if (!_lg_typecheck_AddFallbacks(L)) {
			luaL_error(L, "luna typecheck failed in void wxMimeTypesManager::AddFallbacks(const wxFileTypeInfo * fallbacks) function, expected prototype:\nvoid wxMimeTypesManager::AddFallbacks(const wxFileTypeInfo * fallbacks)\nClass arguments details:\narg 1 ID = 3858360\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFileTypeInfo* fallbacks=(Luna< wxFileTypeInfo >::check(L,2));

		wxMimeTypesManager* self=(Luna< wxMimeTypesManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMimeTypesManager::AddFallbacks(const wxFileTypeInfo *). Got : '%s'\n%s",typeid(Luna< wxMimeTypesManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddFallbacks(fallbacks);

		return 0;
	}

	// wxFileType * wxMimeTypesManager::GetFileTypeFromExtension(const wxString & extension)
	static int _bind_GetFileTypeFromExtension(lua_State *L) {
		if (!_lg_typecheck_GetFileTypeFromExtension(L)) {
			luaL_error(L, "luna typecheck failed in wxFileType * wxMimeTypesManager::GetFileTypeFromExtension(const wxString & extension) function, expected prototype:\nwxFileType * wxMimeTypesManager::GetFileTypeFromExtension(const wxString & extension)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString extension(lua_tostring(L,2),lua_objlen(L,2));

		wxMimeTypesManager* self=(Luna< wxMimeTypesManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFileType * wxMimeTypesManager::GetFileTypeFromExtension(const wxString &). Got : '%s'\n%s",typeid(Luna< wxMimeTypesManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFileType * lret = self->GetFileTypeFromExtension(extension);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileType >::push(L,lret,false);

		return 1;
	}

	// wxFileType * wxMimeTypesManager::GetFileTypeFromMimeType(const wxString & mimeType)
	static int _bind_GetFileTypeFromMimeType(lua_State *L) {
		if (!_lg_typecheck_GetFileTypeFromMimeType(L)) {
			luaL_error(L, "luna typecheck failed in wxFileType * wxMimeTypesManager::GetFileTypeFromMimeType(const wxString & mimeType) function, expected prototype:\nwxFileType * wxMimeTypesManager::GetFileTypeFromMimeType(const wxString & mimeType)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString mimeType(lua_tostring(L,2),lua_objlen(L,2));

		wxMimeTypesManager* self=(Luna< wxMimeTypesManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFileType * wxMimeTypesManager::GetFileTypeFromMimeType(const wxString &). Got : '%s'\n%s",typeid(Luna< wxMimeTypesManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFileType * lret = self->GetFileTypeFromMimeType(mimeType);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFileType >::push(L,lret,false);

		return 1;
	}

	// static bool wxMimeTypesManager::IsOfType(const wxString & mimeType, const wxString & wildcard)
	static int _bind_IsOfType(lua_State *L) {
		if (!_lg_typecheck_IsOfType(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxMimeTypesManager::IsOfType(const wxString & mimeType, const wxString & wildcard) function, expected prototype:\nstatic bool wxMimeTypesManager::IsOfType(const wxString & mimeType, const wxString & wildcard)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString mimeType(lua_tostring(L,1),lua_objlen(L,1));
		wxString wildcard(lua_tostring(L,2),lua_objlen(L,2));

		bool lret = wxMimeTypesManager::IsOfType(mimeType, wildcard);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxMimeTypesManager* LunaTraits< wxMimeTypesManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMimeTypesManager::_bind_ctor(L);
}

void LunaTraits< wxMimeTypesManager >::_bind_dtor(wxMimeTypesManager* obj) {
	delete obj;
}

const char LunaTraits< wxMimeTypesManager >::className[] = "wxMimeTypesManager";
const char LunaTraits< wxMimeTypesManager >::fullName[] = "wxMimeTypesManager";
const char LunaTraits< wxMimeTypesManager >::moduleName[] = "wx";
const char* LunaTraits< wxMimeTypesManager >::parents[] = {0};
const int LunaTraits< wxMimeTypesManager >::hash = 28045951;
const int LunaTraits< wxMimeTypesManager >::uniqueIDs[] = {28045951,0};

luna_RegType LunaTraits< wxMimeTypesManager >::methods[] = {
	{"AddFallbacks", &luna_wrapper_wxMimeTypesManager::_bind_AddFallbacks},
	{"GetFileTypeFromExtension", &luna_wrapper_wxMimeTypesManager::_bind_GetFileTypeFromExtension},
	{"GetFileTypeFromMimeType", &luna_wrapper_wxMimeTypesManager::_bind_GetFileTypeFromMimeType},
	{"IsOfType", &luna_wrapper_wxMimeTypesManager::_bind_IsOfType},
	{"dynCast", &luna_wrapper_wxMimeTypesManager::_bind_dynCast},
	{"__eq", &luna_wrapper_wxMimeTypesManager::_bind___eq},
	{"fromVoid", &luna_wrapper_wxMimeTypesManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMimeTypesManager::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxMimeTypesManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxMimeTypesManager >::enumValues[] = {
	{0,0}
};


