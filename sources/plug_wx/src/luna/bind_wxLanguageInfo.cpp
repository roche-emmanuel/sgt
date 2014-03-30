#include <plug_common.h>

class luna_wrapper_wxLanguageInfo {
public:
	typedef Luna< wxLanguageInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23681138) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxLanguageInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxLanguageInfo* rhs =(Luna< wxLanguageInfo >::check(L,2));
		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
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

		wxLanguageInfo* self= (wxLanguageInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxLanguageInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23681138) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxLanguageInfo >::check(L,1));
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

		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxLanguageInfo");
		
		return luna_dynamicCast(L,converters,"wxLanguageInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetLCID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocaleName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLanguage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCanonicalName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWinLang(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWinSublang(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLanguage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCanonicalName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWinLang(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setWinSublang(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int wxLanguageInfo::GetLCID() const
	static int _bind_GetLCID(lua_State *L) {
		if (!_lg_typecheck_GetLCID(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxLanguageInfo::GetLCID() const function, expected prototype:\nunsigned int wxLanguageInfo::GetLCID() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxLanguageInfo::GetLCID() const. Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetLCID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxLanguageInfo::GetLocaleName() const
	static int _bind_GetLocaleName(lua_State *L) {
		if (!_lg_typecheck_GetLocaleName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxLanguageInfo::GetLocaleName() const function, expected prototype:\nwxString wxLanguageInfo::GetLocaleName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxLanguageInfo::GetLocaleName() const. Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLocaleName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxLanguageInfo::Language()
	static int _bind_getLanguage(lua_State *L) {
		if (!_lg_typecheck_getLanguage(L)) {
			luaL_error(L, "luna typecheck failed in int wxLanguageInfo::Language() function, expected prototype:\nint wxLanguageInfo::Language()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxLanguageInfo::Language(). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Language;
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxLanguageInfo::CanonicalName()
	static int _bind_getCanonicalName(lua_State *L) {
		if (!_lg_typecheck_getCanonicalName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxLanguageInfo::CanonicalName() function, expected prototype:\nwxString wxLanguageInfo::CanonicalName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxLanguageInfo::CanonicalName(). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->CanonicalName;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// unsigned int wxLanguageInfo::WinLang()
	static int _bind_getWinLang(lua_State *L) {
		if (!_lg_typecheck_getWinLang(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxLanguageInfo::WinLang() function, expected prototype:\nunsigned int wxLanguageInfo::WinLang()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxLanguageInfo::WinLang(). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->WinLang;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxLanguageInfo::WinSublang()
	static int _bind_getWinSublang(lua_State *L) {
		if (!_lg_typecheck_getWinSublang(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxLanguageInfo::WinSublang() function, expected prototype:\nunsigned int wxLanguageInfo::WinSublang()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxLanguageInfo::WinSublang(). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->WinSublang;
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxLanguageInfo::Description()
	static int _bind_getDescription(lua_State *L) {
		if (!_lg_typecheck_getDescription(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxLanguageInfo::Description() function, expected prototype:\nwxString wxLanguageInfo::Description()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxLanguageInfo::Description(). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->Description;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxLanguageInfo::LayoutDirection()
	static int _bind_getLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_getLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxLanguageInfo::LayoutDirection() function, expected prototype:\nwxLayoutDirection wxLanguageInfo::LayoutDirection()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxLanguageInfo::LayoutDirection(). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->LayoutDirection;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxLanguageInfo::Language(int value)
	static int _bind_setLanguage(lua_State *L) {
		if (!_lg_typecheck_setLanguage(L)) {
			luaL_error(L, "luna typecheck failed in void wxLanguageInfo::Language(int value) function, expected prototype:\nvoid wxLanguageInfo::Language(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLanguageInfo::Language(int). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Language = value;

		return 0;
	}

	// void wxLanguageInfo::CanonicalName(wxString value)
	static int _bind_setCanonicalName(lua_State *L) {
		if (!_lg_typecheck_setCanonicalName(L)) {
			luaL_error(L, "luna typecheck failed in void wxLanguageInfo::CanonicalName(wxString value) function, expected prototype:\nvoid wxLanguageInfo::CanonicalName(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLanguageInfo::CanonicalName(wxString). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CanonicalName = value;

		return 0;
	}

	// void wxLanguageInfo::WinLang(unsigned int value)
	static int _bind_setWinLang(lua_State *L) {
		if (!_lg_typecheck_setWinLang(L)) {
			luaL_error(L, "luna typecheck failed in void wxLanguageInfo::WinLang(unsigned int value) function, expected prototype:\nvoid wxLanguageInfo::WinLang(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLanguageInfo::WinLang(unsigned int). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WinLang = value;

		return 0;
	}

	// void wxLanguageInfo::WinSublang(unsigned int value)
	static int _bind_setWinSublang(lua_State *L) {
		if (!_lg_typecheck_setWinSublang(L)) {
			luaL_error(L, "luna typecheck failed in void wxLanguageInfo::WinSublang(unsigned int value) function, expected prototype:\nvoid wxLanguageInfo::WinSublang(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLanguageInfo::WinSublang(unsigned int). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WinSublang = value;

		return 0;
	}

	// void wxLanguageInfo::Description(wxString value)
	static int _bind_setDescription(lua_State *L) {
		if (!_lg_typecheck_setDescription(L)) {
			luaL_error(L, "luna typecheck failed in void wxLanguageInfo::Description(wxString value) function, expected prototype:\nvoid wxLanguageInfo::Description(wxString value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLanguageInfo::Description(wxString). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Description = value;

		return 0;
	}

	// void wxLanguageInfo::LayoutDirection(wxLayoutDirection value)
	static int _bind_setLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_setLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxLanguageInfo::LayoutDirection(wxLayoutDirection value) function, expected prototype:\nvoid wxLanguageInfo::LayoutDirection(wxLayoutDirection value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection value=(wxLayoutDirection)lua_tointeger(L,2);

		wxLanguageInfo* self=(Luna< wxLanguageInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLanguageInfo::LayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxLanguageInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->LayoutDirection = value;

		return 0;
	}


	// Operator binds:

};

wxLanguageInfo* LunaTraits< wxLanguageInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxLanguageInfo >::_bind_dtor(wxLanguageInfo* obj) {
	delete obj;
}

const char LunaTraits< wxLanguageInfo >::className[] = "wxLanguageInfo";
const char LunaTraits< wxLanguageInfo >::fullName[] = "wxLanguageInfo";
const char LunaTraits< wxLanguageInfo >::moduleName[] = "wx";
const char* LunaTraits< wxLanguageInfo >::parents[] = {0};
const int LunaTraits< wxLanguageInfo >::hash = 23681138;
const int LunaTraits< wxLanguageInfo >::uniqueIDs[] = {23681138,0};

luna_RegType LunaTraits< wxLanguageInfo >::methods[] = {
	{"GetLCID", &luna_wrapper_wxLanguageInfo::_bind_GetLCID},
	{"GetLocaleName", &luna_wrapper_wxLanguageInfo::_bind_GetLocaleName},
	{"getLanguage", &luna_wrapper_wxLanguageInfo::_bind_getLanguage},
	{"getCanonicalName", &luna_wrapper_wxLanguageInfo::_bind_getCanonicalName},
	{"getWinLang", &luna_wrapper_wxLanguageInfo::_bind_getWinLang},
	{"getWinSublang", &luna_wrapper_wxLanguageInfo::_bind_getWinSublang},
	{"getDescription", &luna_wrapper_wxLanguageInfo::_bind_getDescription},
	{"getLayoutDirection", &luna_wrapper_wxLanguageInfo::_bind_getLayoutDirection},
	{"setLanguage", &luna_wrapper_wxLanguageInfo::_bind_setLanguage},
	{"setCanonicalName", &luna_wrapper_wxLanguageInfo::_bind_setCanonicalName},
	{"setWinLang", &luna_wrapper_wxLanguageInfo::_bind_setWinLang},
	{"setWinSublang", &luna_wrapper_wxLanguageInfo::_bind_setWinSublang},
	{"setDescription", &luna_wrapper_wxLanguageInfo::_bind_setDescription},
	{"setLayoutDirection", &luna_wrapper_wxLanguageInfo::_bind_setLayoutDirection},
	{"dynCast", &luna_wrapper_wxLanguageInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxLanguageInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_wxLanguageInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxLanguageInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxLanguageInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxLanguageInfo >::enumValues[] = {
	{0,0}
};


