#include <plug_common.h>

class luna_wrapper_wxDynamicLibrary {
public:
	typedef Luna< wxDynamicLibrary > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46471472) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDynamicLibrary*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDynamicLibrary* rhs =(Luna< wxDynamicLibrary >::check(L,2));
		wxDynamicLibrary* self=(Luna< wxDynamicLibrary >::check(L,1));
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

		wxDynamicLibrary* self= (wxDynamicLibrary*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDynamicLibrary >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,46471472) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDynamicLibrary >::check(L,1));
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

		wxDynamicLibrary* self=(Luna< wxDynamicLibrary >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDynamicLibrary");
		
		return luna_dynamicCast(L,converters,"wxDynamicLibrary",name);
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
	inline static bool _lg_typecheck_GetSymbol(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSymbolAorW(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasSymbol(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsLoaded(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Load(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unload(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanonicalizeName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanonicalizePluginName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ListLoaded(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDynamicLibrary::wxDynamicLibrary()
	static wxDynamicLibrary* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDynamicLibrary::wxDynamicLibrary() function, expected prototype:\nwxDynamicLibrary::wxDynamicLibrary()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxDynamicLibrary();
	}

	// wxDynamicLibrary::wxDynamicLibrary(const wxString & name, int flags = ::wxDL_DEFAULT)
	static wxDynamicLibrary* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDynamicLibrary::wxDynamicLibrary(const wxString & name, int flags = ::wxDL_DEFAULT) function, expected prototype:\nwxDynamicLibrary::wxDynamicLibrary(const wxString & name, int flags = ::wxDL_DEFAULT)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxDL_DEFAULT;

		return new wxDynamicLibrary(name, flags);
	}

	// Overload binder for wxDynamicLibrary::wxDynamicLibrary
	static wxDynamicLibrary* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDynamicLibrary, cannot match any of the overloads for function wxDynamicLibrary:\n  wxDynamicLibrary()\n  wxDynamicLibrary(const wxString &, int)\n");
		return NULL;
	}


	// Function binds:
	// void * wxDynamicLibrary::GetSymbol(const wxString & name, bool * success = 0) const
	static int _bind_GetSymbol(lua_State *L) {
		if (!_lg_typecheck_GetSymbol(L)) {
			luaL_error(L, "luna typecheck failed in void * wxDynamicLibrary::GetSymbol(const wxString & name, bool * success = 0) const function, expected prototype:\nvoid * wxDynamicLibrary::GetSymbol(const wxString & name, bool * success = 0) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		bool* success=luatop>2 ? (bool*)(Luna< void >::check(L,3)) : (bool*)0;

		wxDynamicLibrary* self=(Luna< wxDynamicLibrary >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxDynamicLibrary::GetSymbol(const wxString &, bool *) const. Got : '%s'\n%s",typeid(Luna< wxDynamicLibrary >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetSymbol(name, success);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void * wxDynamicLibrary::GetSymbolAorW(const wxString & name) const
	static int _bind_GetSymbolAorW(lua_State *L) {
		if (!_lg_typecheck_GetSymbolAorW(L)) {
			luaL_error(L, "luna typecheck failed in void * wxDynamicLibrary::GetSymbolAorW(const wxString & name) const function, expected prototype:\nvoid * wxDynamicLibrary::GetSymbolAorW(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxDynamicLibrary* self=(Luna< wxDynamicLibrary >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxDynamicLibrary::GetSymbolAorW(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxDynamicLibrary >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetSymbolAorW(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// bool wxDynamicLibrary::HasSymbol(const wxString & name) const
	static int _bind_HasSymbol(lua_State *L) {
		if (!_lg_typecheck_HasSymbol(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDynamicLibrary::HasSymbol(const wxString & name) const function, expected prototype:\nbool wxDynamicLibrary::HasSymbol(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxDynamicLibrary* self=(Luna< wxDynamicLibrary >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDynamicLibrary::HasSymbol(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxDynamicLibrary >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasSymbol(name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDynamicLibrary::IsLoaded() const
	static int _bind_IsLoaded(lua_State *L) {
		if (!_lg_typecheck_IsLoaded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDynamicLibrary::IsLoaded() const function, expected prototype:\nbool wxDynamicLibrary::IsLoaded() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDynamicLibrary* self=(Luna< wxDynamicLibrary >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDynamicLibrary::IsLoaded() const. Got : '%s'\n%s",typeid(Luna< wxDynamicLibrary >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsLoaded();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDynamicLibrary::Load(const wxString & name, int flags = ::wxDL_DEFAULT)
	static int _bind_Load(lua_State *L) {
		if (!_lg_typecheck_Load(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDynamicLibrary::Load(const wxString & name, int flags = ::wxDL_DEFAULT) function, expected prototype:\nbool wxDynamicLibrary::Load(const wxString & name, int flags = ::wxDL_DEFAULT)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,2),lua_objlen(L,2));
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxDL_DEFAULT;

		wxDynamicLibrary* self=(Luna< wxDynamicLibrary >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDynamicLibrary::Load(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxDynamicLibrary >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Load(name, flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDynamicLibrary::Unload()
	static int _bind_Unload(lua_State *L) {
		if (!_lg_typecheck_Unload(L)) {
			luaL_error(L, "luna typecheck failed in void wxDynamicLibrary::Unload() function, expected prototype:\nvoid wxDynamicLibrary::Unload()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDynamicLibrary* self=(Luna< wxDynamicLibrary >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDynamicLibrary::Unload(). Got : '%s'\n%s",typeid(Luna< wxDynamicLibrary >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Unload();

		return 0;
	}

	// static wxString wxDynamicLibrary::CanonicalizeName(const wxString & name, wxDynamicLibraryCategory cat = ::wxDL_LIBRARY)
	static int _bind_CanonicalizeName(lua_State *L) {
		if (!_lg_typecheck_CanonicalizeName(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxDynamicLibrary::CanonicalizeName(const wxString & name, wxDynamicLibraryCategory cat = ::wxDL_LIBRARY) function, expected prototype:\nstatic wxString wxDynamicLibrary::CanonicalizeName(const wxString & name, wxDynamicLibraryCategory cat = ::wxDL_LIBRARY)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxDynamicLibraryCategory cat=luatop>1 ? (wxDynamicLibraryCategory)lua_tointeger(L,2) : (wxDynamicLibraryCategory)::wxDL_LIBRARY;

		wxString lret = wxDynamicLibrary::CanonicalizeName(name, cat);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxString wxDynamicLibrary::CanonicalizePluginName(const wxString & name, wxPluginCategory cat = ::wxDL_PLUGIN_GUI)
	static int _bind_CanonicalizePluginName(lua_State *L) {
		if (!_lg_typecheck_CanonicalizePluginName(L)) {
			luaL_error(L, "luna typecheck failed in static wxString wxDynamicLibrary::CanonicalizePluginName(const wxString & name, wxPluginCategory cat = ::wxDL_PLUGIN_GUI) function, expected prototype:\nstatic wxString wxDynamicLibrary::CanonicalizePluginName(const wxString & name, wxPluginCategory cat = ::wxDL_PLUGIN_GUI)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		wxPluginCategory cat=luatop>1 ? (wxPluginCategory)lua_tointeger(L,2) : (wxPluginCategory)::wxDL_PLUGIN_GUI;

		wxString lret = wxDynamicLibrary::CanonicalizePluginName(name, cat);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static wxDynamicLibraryDetailsArray wxDynamicLibrary::ListLoaded()
	static int _bind_ListLoaded(lua_State *L) {
		if (!_lg_typecheck_ListLoaded(L)) {
			luaL_error(L, "luna typecheck failed in static wxDynamicLibraryDetailsArray wxDynamicLibrary::ListLoaded() function, expected prototype:\nstatic wxDynamicLibraryDetailsArray wxDynamicLibrary::ListLoaded()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDynamicLibraryDetailsArray stack_lret = wxDynamicLibrary::ListLoaded();
		wxDynamicLibraryDetailsArray* lret = new wxDynamicLibraryDetailsArray(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDynamicLibraryDetailsArray >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

wxDynamicLibrary* LunaTraits< wxDynamicLibrary >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDynamicLibrary::_bind_ctor(L);
}

void LunaTraits< wxDynamicLibrary >::_bind_dtor(wxDynamicLibrary* obj) {
	delete obj;
}

const char LunaTraits< wxDynamicLibrary >::className[] = "wxDynamicLibrary";
const char LunaTraits< wxDynamicLibrary >::fullName[] = "wxDynamicLibrary";
const char LunaTraits< wxDynamicLibrary >::moduleName[] = "wx";
const char* LunaTraits< wxDynamicLibrary >::parents[] = {0};
const int LunaTraits< wxDynamicLibrary >::hash = 46471472;
const int LunaTraits< wxDynamicLibrary >::uniqueIDs[] = {46471472,0};

luna_RegType LunaTraits< wxDynamicLibrary >::methods[] = {
	{"GetSymbol", &luna_wrapper_wxDynamicLibrary::_bind_GetSymbol},
	{"GetSymbolAorW", &luna_wrapper_wxDynamicLibrary::_bind_GetSymbolAorW},
	{"HasSymbol", &luna_wrapper_wxDynamicLibrary::_bind_HasSymbol},
	{"IsLoaded", &luna_wrapper_wxDynamicLibrary::_bind_IsLoaded},
	{"Load", &luna_wrapper_wxDynamicLibrary::_bind_Load},
	{"Unload", &luna_wrapper_wxDynamicLibrary::_bind_Unload},
	{"CanonicalizeName", &luna_wrapper_wxDynamicLibrary::_bind_CanonicalizeName},
	{"CanonicalizePluginName", &luna_wrapper_wxDynamicLibrary::_bind_CanonicalizePluginName},
	{"ListLoaded", &luna_wrapper_wxDynamicLibrary::_bind_ListLoaded},
	{"dynCast", &luna_wrapper_wxDynamicLibrary::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDynamicLibrary::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDynamicLibrary::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDynamicLibrary::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxDynamicLibrary >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDynamicLibrary >::enumValues[] = {
	{0,0}
};


