#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDialUpManager.h>

class luna_wrapper_wxDialUpManager {
public:
	typedef Luna< wxDialUpManager > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxDialUpManager,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12907201) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDialUpManager*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDialUpManager* rhs =(Luna< wxDialUpManager >::check(L,2));
		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
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

		wxDialUpManager* self= (wxDialUpManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDialUpManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12907201) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDialUpManager >::check(L,1));
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

		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDialUpManager");
		
		return luna_dynamicCast(L,converters,"wxDialUpManager",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_CancelDialing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Dial(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DisableAutoCheckOnlineStatus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EnableAutoCheckOnlineStatus(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetISPNames(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HangUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsAlwaysOnline(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDialing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOnline(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetConnectCommand(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOnlineStatus(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWellKnownHost(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxDialUpManager::CancelDialing()
	static int _bind_CancelDialing(lua_State *L) {
		if (!_lg_typecheck_CancelDialing(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialUpManager::CancelDialing() function, expected prototype:\nbool wxDialUpManager::CancelDialing()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialUpManager::CancelDialing(). Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CancelDialing();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDialUpManager::Dial(const wxString & nameOfISP = wxEmptyString, const wxString & username = wxEmptyString, const wxString & password = wxEmptyString, bool async = true)
	static int _bind_Dial(lua_State *L) {
		if (!_lg_typecheck_Dial(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialUpManager::Dial(const wxString & nameOfISP = wxEmptyString, const wxString & username = wxEmptyString, const wxString & password = wxEmptyString, bool async = true) function, expected prototype:\nbool wxDialUpManager::Dial(const wxString & nameOfISP = wxEmptyString, const wxString & username = wxEmptyString, const wxString & password = wxEmptyString, bool async = true)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString nameOfISP(lua_tostring(L,2),lua_objlen(L,2));
		wxString username(lua_tostring(L,3),lua_objlen(L,3));
		wxString password(lua_tostring(L,4),lua_objlen(L,4));
		bool async=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;

		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialUpManager::Dial(const wxString &, const wxString &, const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Dial(nameOfISP, username, password, async);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDialUpManager::DisableAutoCheckOnlineStatus()
	static int _bind_DisableAutoCheckOnlineStatus(lua_State *L) {
		if (!_lg_typecheck_DisableAutoCheckOnlineStatus(L)) {
			luaL_error(L, "luna typecheck failed in void wxDialUpManager::DisableAutoCheckOnlineStatus() function, expected prototype:\nvoid wxDialUpManager::DisableAutoCheckOnlineStatus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDialUpManager::DisableAutoCheckOnlineStatus(). Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DisableAutoCheckOnlineStatus();

		return 0;
	}

	// bool wxDialUpManager::EnableAutoCheckOnlineStatus(size_t nSeconds = 60)
	static int _bind_EnableAutoCheckOnlineStatus(lua_State *L) {
		if (!_lg_typecheck_EnableAutoCheckOnlineStatus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialUpManager::EnableAutoCheckOnlineStatus(size_t nSeconds = 60) function, expected prototype:\nbool wxDialUpManager::EnableAutoCheckOnlineStatus(size_t nSeconds = 60)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		size_t nSeconds=luatop>1 ? (size_t)lua_tointeger(L,2) : (size_t)60;

		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialUpManager::EnableAutoCheckOnlineStatus(size_t). Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EnableAutoCheckOnlineStatus(nSeconds);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxDialUpManager::GetISPNames(wxArrayString & names) const
	static int _bind_GetISPNames(lua_State *L) {
		if (!_lg_typecheck_GetISPNames(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxDialUpManager::GetISPNames(wxArrayString & names) const function, expected prototype:\nsize_t wxDialUpManager::GetISPNames(wxArrayString & names) const\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayString* names_ptr=(Luna< wxArrayString >::check(L,2));
		if( !names_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg names in wxDialUpManager::GetISPNames function");
		}
		wxArrayString & names=*names_ptr;

		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxDialUpManager::GetISPNames(wxArrayString &) const. Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetISPNames(names);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDialUpManager::HangUp()
	static int _bind_HangUp(lua_State *L) {
		if (!_lg_typecheck_HangUp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialUpManager::HangUp() function, expected prototype:\nbool wxDialUpManager::HangUp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialUpManager::HangUp(). Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HangUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDialUpManager::IsAlwaysOnline() const
	static int _bind_IsAlwaysOnline(lua_State *L) {
		if (!_lg_typecheck_IsAlwaysOnline(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialUpManager::IsAlwaysOnline() const function, expected prototype:\nbool wxDialUpManager::IsAlwaysOnline() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialUpManager::IsAlwaysOnline() const. Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsAlwaysOnline();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDialUpManager::IsDialing() const
	static int _bind_IsDialing(lua_State *L) {
		if (!_lg_typecheck_IsDialing(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialUpManager::IsDialing() const function, expected prototype:\nbool wxDialUpManager::IsDialing() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialUpManager::IsDialing() const. Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsDialing();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDialUpManager::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialUpManager::IsOk() const function, expected prototype:\nbool wxDialUpManager::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialUpManager::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDialUpManager::IsOnline() const
	static int _bind_IsOnline(lua_State *L) {
		if (!_lg_typecheck_IsOnline(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDialUpManager::IsOnline() const function, expected prototype:\nbool wxDialUpManager::IsOnline() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDialUpManager::IsOnline() const. Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOnline();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDialUpManager::SetConnectCommand(const wxString & commandDial = "/usr/bin/pon", const wxString & commandHangup = "/usr/bin/poff")
	static int _bind_SetConnectCommand(lua_State *L) {
		if (!_lg_typecheck_SetConnectCommand(L)) {
			luaL_error(L, "luna typecheck failed in void wxDialUpManager::SetConnectCommand(const wxString & commandDial = \"/usr/bin/pon\", const wxString & commandHangup = \"/usr/bin/poff\") function, expected prototype:\nvoid wxDialUpManager::SetConnectCommand(const wxString & commandDial = \"/usr/bin/pon\", const wxString & commandHangup = \"/usr/bin/poff\")\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString commandDial(lua_tostring(L,2),lua_objlen(L,2));
		wxString commandHangup(lua_tostring(L,3),lua_objlen(L,3));

		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDialUpManager::SetConnectCommand(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetConnectCommand(commandDial, commandHangup);

		return 0;
	}

	// void wxDialUpManager::SetOnlineStatus(bool isOnline = true)
	static int _bind_SetOnlineStatus(lua_State *L) {
		if (!_lg_typecheck_SetOnlineStatus(L)) {
			luaL_error(L, "luna typecheck failed in void wxDialUpManager::SetOnlineStatus(bool isOnline = true) function, expected prototype:\nvoid wxDialUpManager::SetOnlineStatus(bool isOnline = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool isOnline=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDialUpManager::SetOnlineStatus(bool). Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOnlineStatus(isOnline);

		return 0;
	}

	// void wxDialUpManager::SetWellKnownHost(const wxString & hostname, int portno = 80)
	static int _bind_SetWellKnownHost(lua_State *L) {
		if (!_lg_typecheck_SetWellKnownHost(L)) {
			luaL_error(L, "luna typecheck failed in void wxDialUpManager::SetWellKnownHost(const wxString & hostname, int portno = 80) function, expected prototype:\nvoid wxDialUpManager::SetWellKnownHost(const wxString & hostname, int portno = 80)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString hostname(lua_tostring(L,2),lua_objlen(L,2));
		int portno=luatop>2 ? (int)lua_tointeger(L,3) : (int)80;

		wxDialUpManager* self=(Luna< wxDialUpManager >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDialUpManager::SetWellKnownHost(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxDialUpManager >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWellKnownHost(hostname, portno);

		return 0;
	}

	// static wxDialUpManager * wxDialUpManager::Create()
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in static wxDialUpManager * wxDialUpManager::Create() function, expected prototype:\nstatic wxDialUpManager * wxDialUpManager::Create()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDialUpManager * lret = wxDialUpManager::Create();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDialUpManager >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxDialUpManager* LunaTraits< wxDialUpManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxDialUpManager::CancelDialing()
	// bool wxDialUpManager::Dial(const wxString & nameOfISP = wxEmptyString, const wxString & username = wxEmptyString, const wxString & password = wxEmptyString, bool async = true)
	// void wxDialUpManager::DisableAutoCheckOnlineStatus()
	// bool wxDialUpManager::EnableAutoCheckOnlineStatus(size_t nSeconds = 60)
	// size_t wxDialUpManager::GetISPNames(wxArrayString & names) const
	// bool wxDialUpManager::HangUp()
	// bool wxDialUpManager::IsAlwaysOnline() const
	// bool wxDialUpManager::IsDialing() const
	// bool wxDialUpManager::IsOk() const
	// bool wxDialUpManager::IsOnline() const
	// void wxDialUpManager::SetConnectCommand(const wxString & commandDial = "/usr/bin/pon", const wxString & commandHangup = "/usr/bin/poff")
	// void wxDialUpManager::SetOnlineStatus(bool isOnline = true)
	// void wxDialUpManager::SetWellKnownHost(const wxString & hostname, int portno = 80)
}

void LunaTraits< wxDialUpManager >::_bind_dtor(wxDialUpManager* obj) {
	delete obj;
}

const char LunaTraits< wxDialUpManager >::className[] = "wxDialUpManager";
const char LunaTraits< wxDialUpManager >::fullName[] = "wxDialUpManager";
const char LunaTraits< wxDialUpManager >::moduleName[] = "wx";
const char* LunaTraits< wxDialUpManager >::parents[] = {0};
const int LunaTraits< wxDialUpManager >::hash = 12907201;
const int LunaTraits< wxDialUpManager >::uniqueIDs[] = {12907201,0};

luna_RegType LunaTraits< wxDialUpManager >::methods[] = {
	{"CancelDialing", &luna_wrapper_wxDialUpManager::_bind_CancelDialing},
	{"Dial", &luna_wrapper_wxDialUpManager::_bind_Dial},
	{"DisableAutoCheckOnlineStatus", &luna_wrapper_wxDialUpManager::_bind_DisableAutoCheckOnlineStatus},
	{"EnableAutoCheckOnlineStatus", &luna_wrapper_wxDialUpManager::_bind_EnableAutoCheckOnlineStatus},
	{"GetISPNames", &luna_wrapper_wxDialUpManager::_bind_GetISPNames},
	{"HangUp", &luna_wrapper_wxDialUpManager::_bind_HangUp},
	{"IsAlwaysOnline", &luna_wrapper_wxDialUpManager::_bind_IsAlwaysOnline},
	{"IsDialing", &luna_wrapper_wxDialUpManager::_bind_IsDialing},
	{"IsOk", &luna_wrapper_wxDialUpManager::_bind_IsOk},
	{"IsOnline", &luna_wrapper_wxDialUpManager::_bind_IsOnline},
	{"SetConnectCommand", &luna_wrapper_wxDialUpManager::_bind_SetConnectCommand},
	{"SetOnlineStatus", &luna_wrapper_wxDialUpManager::_bind_SetOnlineStatus},
	{"SetWellKnownHost", &luna_wrapper_wxDialUpManager::_bind_SetWellKnownHost},
	{"Create", &luna_wrapper_wxDialUpManager::_bind_Create},
	{"dynCast", &luna_wrapper_wxDialUpManager::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDialUpManager::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDialUpManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDialUpManager::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDialUpManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDialUpManager >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDialUpManager >::enumValues[] = {
	{0,0}
};


