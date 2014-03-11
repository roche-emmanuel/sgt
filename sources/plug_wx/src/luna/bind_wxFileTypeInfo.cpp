#include <plug_common.h>

class luna_wrapper_wxFileTypeInfo {
public:
	typedef Luna< wxFileTypeInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3858360) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxFileTypeInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxFileTypeInfo* rhs =(Luna< wxFileTypeInfo >::check(L,2));
		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
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

		wxFileTypeInfo* self= (wxFileTypeInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileTypeInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3858360) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxFileTypeInfo >::check(L,1));
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

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxFileTypeInfo");
		
		return luna_dynamicCast(L,converters,"wxFileTypeInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddExtension(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOpenCommand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPrintCommand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetShortDesc(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileTypeInfo::wxFileTypeInfo()
	static wxFileTypeInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFileTypeInfo::wxFileTypeInfo() function, expected prototype:\nwxFileTypeInfo::wxFileTypeInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxFileTypeInfo();
	}

	// wxFileTypeInfo::wxFileTypeInfo(const wxString & mimeType)
	static wxFileTypeInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFileTypeInfo::wxFileTypeInfo(const wxString & mimeType) function, expected prototype:\nwxFileTypeInfo::wxFileTypeInfo(const wxString & mimeType)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString mimeType(lua_tostring(L,1),lua_objlen(L,1));

		return new wxFileTypeInfo(mimeType);
	}

	// Overload binder for wxFileTypeInfo::wxFileTypeInfo
	static wxFileTypeInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFileTypeInfo, cannot match any of the overloads for function wxFileTypeInfo:\n  wxFileTypeInfo()\n  wxFileTypeInfo(const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxFileTypeInfo::AddExtension(const wxString & ext)
	static int _bind_AddExtension(lua_State *L) {
		if (!_lg_typecheck_AddExtension(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileTypeInfo::AddExtension(const wxString & ext) function, expected prototype:\nvoid wxFileTypeInfo::AddExtension(const wxString & ext)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString ext(lua_tostring(L,2),lua_objlen(L,2));

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileTypeInfo::AddExtension(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileTypeInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddExtension(ext);

		return 0;
	}

	// void wxFileTypeInfo::SetDescription(const wxString & description)
	static int _bind_SetDescription(lua_State *L) {
		if (!_lg_typecheck_SetDescription(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileTypeInfo::SetDescription(const wxString & description) function, expected prototype:\nvoid wxFileTypeInfo::SetDescription(const wxString & description)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString description(lua_tostring(L,2),lua_objlen(L,2));

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileTypeInfo::SetDescription(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileTypeInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDescription(description);

		return 0;
	}

	// void wxFileTypeInfo::SetOpenCommand(const wxString & command)
	static int _bind_SetOpenCommand(lua_State *L) {
		if (!_lg_typecheck_SetOpenCommand(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileTypeInfo::SetOpenCommand(const wxString & command) function, expected prototype:\nvoid wxFileTypeInfo::SetOpenCommand(const wxString & command)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString command(lua_tostring(L,2),lua_objlen(L,2));

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileTypeInfo::SetOpenCommand(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileTypeInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOpenCommand(command);

		return 0;
	}

	// void wxFileTypeInfo::SetPrintCommand(const wxString & command)
	static int _bind_SetPrintCommand(lua_State *L) {
		if (!_lg_typecheck_SetPrintCommand(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileTypeInfo::SetPrintCommand(const wxString & command) function, expected prototype:\nvoid wxFileTypeInfo::SetPrintCommand(const wxString & command)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString command(lua_tostring(L,2),lua_objlen(L,2));

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileTypeInfo::SetPrintCommand(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileTypeInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPrintCommand(command);

		return 0;
	}

	// void wxFileTypeInfo::SetShortDesc(const wxString & shortDesc)
	static int _bind_SetShortDesc(lua_State *L) {
		if (!_lg_typecheck_SetShortDesc(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileTypeInfo::SetShortDesc(const wxString & shortDesc) function, expected prototype:\nvoid wxFileTypeInfo::SetShortDesc(const wxString & shortDesc)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString shortDesc(lua_tostring(L,2),lua_objlen(L,2));

		wxFileTypeInfo* self=(Luna< wxFileTypeInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileTypeInfo::SetShortDesc(const wxString &). Got : '%s'\n%s",typeid(Luna< wxFileTypeInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetShortDesc(shortDesc);

		return 0;
	}


	// Operator binds:

};

wxFileTypeInfo* LunaTraits< wxFileTypeInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileTypeInfo::_bind_ctor(L);
}

void LunaTraits< wxFileTypeInfo >::_bind_dtor(wxFileTypeInfo* obj) {
	delete obj;
}

const char LunaTraits< wxFileTypeInfo >::className[] = "wxFileTypeInfo";
const char LunaTraits< wxFileTypeInfo >::fullName[] = "wxFileTypeInfo";
const char LunaTraits< wxFileTypeInfo >::moduleName[] = "wx";
const char* LunaTraits< wxFileTypeInfo >::parents[] = {0};
const int LunaTraits< wxFileTypeInfo >::hash = 3858360;
const int LunaTraits< wxFileTypeInfo >::uniqueIDs[] = {3858360,0};

luna_RegType LunaTraits< wxFileTypeInfo >::methods[] = {
	{"AddExtension", &luna_wrapper_wxFileTypeInfo::_bind_AddExtension},
	{"SetDescription", &luna_wrapper_wxFileTypeInfo::_bind_SetDescription},
	{"SetOpenCommand", &luna_wrapper_wxFileTypeInfo::_bind_SetOpenCommand},
	{"SetPrintCommand", &luna_wrapper_wxFileTypeInfo::_bind_SetPrintCommand},
	{"SetShortDesc", &luna_wrapper_wxFileTypeInfo::_bind_SetShortDesc},
	{"dynCast", &luna_wrapper_wxFileTypeInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxFileTypeInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_wxFileTypeInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileTypeInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileTypeInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileTypeInfo >::enumValues[] = {
	{0,0}
};


