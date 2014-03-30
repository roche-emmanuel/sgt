#include <plug_common.h>

#include <luna/wrappers/wrapper_wxIPaddress.h>

class luna_wrapper_wxIPaddress {
public:
	typedef Luna< wxIPaddress > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxObject,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		wxIPaddress* self= (wxIPaddress*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxIPaddress >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxObject(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxIPaddress* ptr= dynamic_cast< wxIPaddress* >(Luna< wxObject >::check(L,1));
		wxIPaddress* ptr= luna_caster< wxObject, wxIPaddress >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxIPaddress >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AnyAddress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hostname_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Hostname_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IPAddress(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsLocalHost(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LocalHost(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Service_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Service_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Service_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// bool wxIPaddress::AnyAddress()
	static int _bind_AnyAddress(lua_State *L) {
		if (!_lg_typecheck_AnyAddress(L)) {
			luaL_error(L, "luna typecheck failed in bool wxIPaddress::AnyAddress() function, expected prototype:\nbool wxIPaddress::AnyAddress()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIPaddress* self=Luna< wxObject >::checkSubType< wxIPaddress >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxIPaddress::AnyAddress(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AnyAddress();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIPaddress::Hostname(const wxString & hostname)
	static int _bind_Hostname_overload_1(lua_State *L) {
		if (!_lg_typecheck_Hostname_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxIPaddress::Hostname(const wxString & hostname) function, expected prototype:\nbool wxIPaddress::Hostname(const wxString & hostname)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString hostname(lua_tostring(L,2),lua_objlen(L,2));

		wxIPaddress* self=Luna< wxObject >::checkSubType< wxIPaddress >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxIPaddress::Hostname(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Hostname(hostname);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxIPaddress::Hostname() const
	static int _bind_Hostname_overload_2(lua_State *L) {
		if (!_lg_typecheck_Hostname_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxIPaddress::Hostname() const function, expected prototype:\nwxString wxIPaddress::Hostname() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIPaddress* self=Luna< wxObject >::checkSubType< wxIPaddress >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxIPaddress::Hostname() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->Hostname();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// Overload binder for wxIPaddress::Hostname
	static int _bind_Hostname(lua_State *L) {
		if (_lg_typecheck_Hostname_overload_1(L)) return _bind_Hostname_overload_1(L);
		if (_lg_typecheck_Hostname_overload_2(L)) return _bind_Hostname_overload_2(L);

		luaL_error(L, "error in function Hostname, cannot match any of the overloads for function Hostname:\n  Hostname(const wxString &)\n  Hostname()\n");
		return 0;
	}

	// wxString wxIPaddress::IPAddress() const
	static int _bind_IPAddress(lua_State *L) {
		if (!_lg_typecheck_IPAddress(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxIPaddress::IPAddress() const function, expected prototype:\nwxString wxIPaddress::IPAddress() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIPaddress* self=Luna< wxObject >::checkSubType< wxIPaddress >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxIPaddress::IPAddress() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->IPAddress();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxIPaddress::IsLocalHost() const
	static int _bind_IsLocalHost(lua_State *L) {
		if (!_lg_typecheck_IsLocalHost(L)) {
			luaL_error(L, "luna typecheck failed in bool wxIPaddress::IsLocalHost() const function, expected prototype:\nbool wxIPaddress::IsLocalHost() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIPaddress* self=Luna< wxObject >::checkSubType< wxIPaddress >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxIPaddress::IsLocalHost() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsLocalHost();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIPaddress::LocalHost()
	static int _bind_LocalHost(lua_State *L) {
		if (!_lg_typecheck_LocalHost(L)) {
			luaL_error(L, "luna typecheck failed in bool wxIPaddress::LocalHost() function, expected prototype:\nbool wxIPaddress::LocalHost()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIPaddress* self=Luna< wxObject >::checkSubType< wxIPaddress >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxIPaddress::LocalHost(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LocalHost();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIPaddress::Service(const wxString & service)
	static int _bind_Service_overload_1(lua_State *L) {
		if (!_lg_typecheck_Service_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxIPaddress::Service(const wxString & service) function, expected prototype:\nbool wxIPaddress::Service(const wxString & service)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString service(lua_tostring(L,2),lua_objlen(L,2));

		wxIPaddress* self=Luna< wxObject >::checkSubType< wxIPaddress >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxIPaddress::Service(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Service(service);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIPaddress::Service(unsigned short service)
	static int _bind_Service_overload_2(lua_State *L) {
		if (!_lg_typecheck_Service_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxIPaddress::Service(unsigned short service) function, expected prototype:\nbool wxIPaddress::Service(unsigned short service)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned short service=(unsigned short)lua_tointeger(L,2);

		wxIPaddress* self=Luna< wxObject >::checkSubType< wxIPaddress >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxIPaddress::Service(unsigned short). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Service(service);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned short wxIPaddress::Service() const
	static int _bind_Service_overload_3(lua_State *L) {
		if (!_lg_typecheck_Service_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short wxIPaddress::Service() const function, expected prototype:\nunsigned short wxIPaddress::Service() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIPaddress* self=Luna< wxObject >::checkSubType< wxIPaddress >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short wxIPaddress::Service() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->Service();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxIPaddress::Service
	static int _bind_Service(lua_State *L) {
		if (_lg_typecheck_Service_overload_1(L)) return _bind_Service_overload_1(L);
		if (_lg_typecheck_Service_overload_2(L)) return _bind_Service_overload_2(L);
		if (_lg_typecheck_Service_overload_3(L)) return _bind_Service_overload_3(L);

		luaL_error(L, "error in function Service, cannot match any of the overloads for function Service:\n  Service(const wxString &)\n  Service(unsigned short)\n  Service()\n");
		return 0;
	}

	// wxClassInfo * wxIPaddress::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxIPaddress::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxIPaddress::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIPaddress* self=Luna< wxObject >::checkSubType< wxIPaddress >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxIPaddress::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxIPaddress::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxIPaddress* LunaTraits< wxIPaddress >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxIPaddress::BroadcastAddress()
	// wxString wxIPaddress::IPAddress() const
	// bool wxIPaddress::IsLocalHost() const
	// void wxSockAddress::Clear()
	// wxSockAddress::Family wxSockAddress::Type()
	// wxSockAddress * wxSockAddress::Clone() const
}

void LunaTraits< wxIPaddress >::_bind_dtor(wxIPaddress* obj) {
	delete obj;
}

const char LunaTraits< wxIPaddress >::className[] = "wxIPaddress";
const char LunaTraits< wxIPaddress >::fullName[] = "wxIPaddress";
const char LunaTraits< wxIPaddress >::moduleName[] = "wx";
const char* LunaTraits< wxIPaddress >::parents[] = {"wx.wxSockAddress", 0};
const int LunaTraits< wxIPaddress >::hash = 46698677;
const int LunaTraits< wxIPaddress >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxIPaddress >::methods[] = {
	{"AnyAddress", &luna_wrapper_wxIPaddress::_bind_AnyAddress},
	{"Hostname", &luna_wrapper_wxIPaddress::_bind_Hostname},
	{"IPAddress", &luna_wrapper_wxIPaddress::_bind_IPAddress},
	{"IsLocalHost", &luna_wrapper_wxIPaddress::_bind_IsLocalHost},
	{"LocalHost", &luna_wrapper_wxIPaddress::_bind_LocalHost},
	{"Service", &luna_wrapper_wxIPaddress::_bind_Service},
	{"base_GetClassInfo", &luna_wrapper_wxIPaddress::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxIPaddress::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxIPaddress::_bind_asVoid},
	{"getTable", &luna_wrapper_wxIPaddress::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxIPaddress >::converters[] = {
	{"wxObject", &luna_wrapper_wxIPaddress::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxIPaddress >::enumValues[] = {
	{0,0}
};


