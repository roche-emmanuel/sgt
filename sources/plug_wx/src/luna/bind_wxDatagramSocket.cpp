#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDatagramSocket.h>

class luna_wrapper_wxDatagramSocket {
public:
	typedef Luna< wxDatagramSocket > luna_t;

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

		wxDatagramSocket* self= (wxDatagramSocket*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDatagramSocket >::push(L,self,false);
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
		//wxDatagramSocket* ptr= dynamic_cast< wxDatagramSocket* >(Luna< wxObject >::check(L,1));
		wxDatagramSocket* ptr= luna_caster< wxObject, wxDatagramSocket >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDatagramSocket >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxSockAddress >(L,1))) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxSockAddress >(L,2))) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_SendTo(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetPeer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDatagramSocket::wxDatagramSocket(const wxSockAddress & addr, int flags = ::wxSOCKET_NONE)
	static wxDatagramSocket* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxDatagramSocket::wxDatagramSocket(const wxSockAddress & addr, int flags = ::wxSOCKET_NONE) function, expected prototype:\nwxDatagramSocket::wxDatagramSocket(const wxSockAddress & addr, int flags = ::wxSOCKET_NONE)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,1));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxDatagramSocket::wxDatagramSocket function");
		}
		const wxSockAddress & addr=*addr_ptr;
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxSOCKET_NONE;

		return new wxDatagramSocket(addr, flags);
	}

	// wxDatagramSocket::wxDatagramSocket(lua_Table * data, const wxSockAddress & addr, int flags = ::wxSOCKET_NONE)
	static wxDatagramSocket* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxDatagramSocket::wxDatagramSocket(lua_Table * data, const wxSockAddress & addr, int flags = ::wxSOCKET_NONE) function, expected prototype:\nwxDatagramSocket::wxDatagramSocket(lua_Table * data, const wxSockAddress & addr, int flags = ::wxSOCKET_NONE)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxDatagramSocket::wxDatagramSocket function");
		}
		const wxSockAddress & addr=*addr_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxSOCKET_NONE;

		return new wrapper_wxDatagramSocket(L,NULL, addr, flags);
	}

	// Overload binder for wxDatagramSocket::wxDatagramSocket
	static wxDatagramSocket* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxDatagramSocket, cannot match any of the overloads for function wxDatagramSocket:\n  wxDatagramSocket(const wxSockAddress &, int)\n  wxDatagramSocket(lua_Table *, const wxSockAddress &, int)\n");
		return NULL;
	}


	// Function binds:
	// wxDatagramSocket & wxDatagramSocket::SendTo(const wxSockAddress & address, const void * buffer, unsigned int nbytes)
	static int _bind_SendTo(lua_State *L) {
		if (!_lg_typecheck_SendTo(L)) {
			luaL_error(L, "luna typecheck failed in wxDatagramSocket & wxDatagramSocket::SendTo(const wxSockAddress & address, const void * buffer, unsigned int nbytes) function, expected prototype:\nwxDatagramSocket & wxDatagramSocket::SendTo(const wxSockAddress & address, const void * buffer, unsigned int nbytes)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSockAddress* address_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxDatagramSocket::SendTo function");
		}
		const wxSockAddress & address=*address_ptr;
		const void* buffer=(Luna< void >::check(L,3));
		unsigned int nbytes=(unsigned int)lua_tointeger(L,4);

		wxDatagramSocket* self=Luna< wxObject >::checkSubType< wxDatagramSocket >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDatagramSocket & wxDatagramSocket::SendTo(const wxSockAddress &, const void *, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxDatagramSocket* lret = &self->SendTo(address, buffer, nbytes);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDatagramSocket >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxDatagramSocket::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDatagramSocket::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDatagramSocket::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDatagramSocket* self=Luna< wxObject >::checkSubType< wxDatagramSocket >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDatagramSocket::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDatagramSocket::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxDatagramSocket::base_GetLocal(wxSockAddress & addr) const
	static int _bind_base_GetLocal(lua_State *L) {
		if (!_lg_typecheck_base_GetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDatagramSocket::base_GetLocal(wxSockAddress & addr) const function, expected prototype:\nbool wxDatagramSocket::base_GetLocal(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxDatagramSocket::base_GetLocal function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxDatagramSocket* self=Luna< wxObject >::checkSubType< wxDatagramSocket >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDatagramSocket::base_GetLocal(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDatagramSocket::GetLocal(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDatagramSocket::base_GetPeer(wxSockAddress & addr) const
	static int _bind_base_GetPeer(lua_State *L) {
		if (!_lg_typecheck_base_GetPeer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDatagramSocket::base_GetPeer(wxSockAddress & addr) const function, expected prototype:\nbool wxDatagramSocket::base_GetPeer(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxDatagramSocket::base_GetPeer function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxDatagramSocket* self=Luna< wxObject >::checkSubType< wxDatagramSocket >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDatagramSocket::base_GetPeer(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDatagramSocket::GetPeer(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDatagramSocket::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDatagramSocket::base_Close() function, expected prototype:\nbool wxDatagramSocket::base_Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDatagramSocket* self=Luna< wxObject >::checkSubType< wxDatagramSocket >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDatagramSocket::base_Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDatagramSocket::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDatagramSocket::base_SetLocal(const wxIPV4address & local)
	static int _bind_base_SetLocal(lua_State *L) {
		if (!_lg_typecheck_base_SetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDatagramSocket::base_SetLocal(const wxIPV4address & local) function, expected prototype:\nbool wxDatagramSocket::base_SetLocal(const wxIPV4address & local)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIPV4address* local_ptr=(Luna< wxObject >::checkSubType< wxIPV4address >(L,2));
		if( !local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg local in wxDatagramSocket::base_SetLocal function");
		}
		const wxIPV4address & local=*local_ptr;

		wxDatagramSocket* self=Luna< wxObject >::checkSubType< wxDatagramSocket >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDatagramSocket::base_SetLocal(const wxIPV4address &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDatagramSocket::SetLocal(local);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDatagramSocket* LunaTraits< wxDatagramSocket >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDatagramSocket::_bind_ctor(L);
}

void LunaTraits< wxDatagramSocket >::_bind_dtor(wxDatagramSocket* obj) {
	delete obj;
}

const char LunaTraits< wxDatagramSocket >::className[] = "wxDatagramSocket";
const char LunaTraits< wxDatagramSocket >::fullName[] = "wxDatagramSocket";
const char LunaTraits< wxDatagramSocket >::moduleName[] = "wx";
const char* LunaTraits< wxDatagramSocket >::parents[] = {"wx.wxSocketBase", 0};
const int LunaTraits< wxDatagramSocket >::hash = 50044778;
const int LunaTraits< wxDatagramSocket >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDatagramSocket >::methods[] = {
	{"SendTo", &luna_wrapper_wxDatagramSocket::_bind_SendTo},
	{"base_GetClassInfo", &luna_wrapper_wxDatagramSocket::_bind_base_GetClassInfo},
	{"base_GetLocal", &luna_wrapper_wxDatagramSocket::_bind_base_GetLocal},
	{"base_GetPeer", &luna_wrapper_wxDatagramSocket::_bind_base_GetPeer},
	{"base_Close", &luna_wrapper_wxDatagramSocket::_bind_base_Close},
	{"base_SetLocal", &luna_wrapper_wxDatagramSocket::_bind_base_SetLocal},
	{"fromVoid", &luna_wrapper_wxDatagramSocket::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDatagramSocket::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDatagramSocket::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDatagramSocket >::converters[] = {
	{"wxObject", &luna_wrapper_wxDatagramSocket::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDatagramSocket >::enumValues[] = {
	{0,0}
};


