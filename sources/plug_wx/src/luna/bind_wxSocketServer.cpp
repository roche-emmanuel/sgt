#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSocketServer.h>

class luna_wrapper_wxSocketServer {
public:
	typedef Luna< wxSocketServer > luna_t;

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

		wxSocketServer* self= (wxSocketServer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSocketServer >::push(L,self,false);
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
		//wxSocketServer* ptr= dynamic_cast< wxSocketServer* >(Luna< wxObject >::check(L,1));
		wxSocketServer* ptr= luna_caster< wxObject, wxSocketServer >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSocketServer >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_Accept(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AcceptWith(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WaitForAccept(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
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
	// wxSocketServer::wxSocketServer(const wxSockAddress & address, int flags = ::wxSOCKET_NONE)
	static wxSocketServer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketServer::wxSocketServer(const wxSockAddress & address, int flags = ::wxSOCKET_NONE) function, expected prototype:\nwxSocketServer::wxSocketServer(const wxSockAddress & address, int flags = ::wxSOCKET_NONE)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSockAddress* address_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,1));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxSocketServer::wxSocketServer function");
		}
		const wxSockAddress & address=*address_ptr;
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxSOCKET_NONE;

		return new wxSocketServer(address, flags);
	}

	// wxSocketServer::wxSocketServer(lua_Table * data, const wxSockAddress & address, int flags = ::wxSOCKET_NONE)
	static wxSocketServer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketServer::wxSocketServer(lua_Table * data, const wxSockAddress & address, int flags = ::wxSOCKET_NONE) function, expected prototype:\nwxSocketServer::wxSocketServer(lua_Table * data, const wxSockAddress & address, int flags = ::wxSOCKET_NONE)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSockAddress* address_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !address_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg address in wxSocketServer::wxSocketServer function");
		}
		const wxSockAddress & address=*address_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxSOCKET_NONE;

		return new wrapper_wxSocketServer(L,NULL, address, flags);
	}

	// Overload binder for wxSocketServer::wxSocketServer
	static wxSocketServer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSocketServer, cannot match any of the overloads for function wxSocketServer:\n  wxSocketServer(const wxSockAddress &, int)\n  wxSocketServer(lua_Table *, const wxSockAddress &, int)\n");
		return NULL;
	}


	// Function binds:
	// wxSocketBase * wxSocketServer::Accept(bool wait = true)
	static int _bind_Accept(lua_State *L) {
		if (!_lg_typecheck_Accept(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketBase * wxSocketServer::Accept(bool wait = true) function, expected prototype:\nwxSocketBase * wxSocketServer::Accept(bool wait = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool wait=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxSocketServer* self=Luna< wxObject >::checkSubType< wxSocketServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSocketBase * wxSocketServer::Accept(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSocketBase * lret = self->Accept(wait);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSocketBase >::push(L,lret,false);

		return 1;
	}

	// bool wxSocketServer::AcceptWith(wxSocketBase & socket, bool wait = true)
	static int _bind_AcceptWith(lua_State *L) {
		if (!_lg_typecheck_AcceptWith(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketServer::AcceptWith(wxSocketBase & socket, bool wait = true) function, expected prototype:\nbool wxSocketServer::AcceptWith(wxSocketBase & socket, bool wait = true)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSocketBase* socket_ptr=(Luna< wxObject >::checkSubType< wxSocketBase >(L,2));
		if( !socket_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg socket in wxSocketServer::AcceptWith function");
		}
		wxSocketBase & socket=*socket_ptr;
		bool wait=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxSocketServer* self=Luna< wxObject >::checkSubType< wxSocketServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketServer::AcceptWith(wxSocketBase &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AcceptWith(socket, wait);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketServer::WaitForAccept(long seconds = -1, long millisecond = 0)
	static int _bind_WaitForAccept(lua_State *L) {
		if (!_lg_typecheck_WaitForAccept(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketServer::WaitForAccept(long seconds = -1, long millisecond = 0) function, expected prototype:\nbool wxSocketServer::WaitForAccept(long seconds = -1, long millisecond = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long seconds=luatop>1 ? (long)lua_tonumber(L,2) : (long)-1;
		long millisecond=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxSocketServer* self=Luna< wxObject >::checkSubType< wxSocketServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketServer::WaitForAccept(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WaitForAccept(seconds, millisecond);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxSocketServer::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSocketServer::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSocketServer::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketServer* self=Luna< wxObject >::checkSubType< wxSocketServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSocketServer::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSocketServer::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxSocketServer::base_GetLocal(wxSockAddress & addr) const
	static int _bind_base_GetLocal(lua_State *L) {
		if (!_lg_typecheck_base_GetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketServer::base_GetLocal(wxSockAddress & addr) const function, expected prototype:\nbool wxSocketServer::base_GetLocal(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxSocketServer::base_GetLocal function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxSocketServer* self=Luna< wxObject >::checkSubType< wxSocketServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketServer::base_GetLocal(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketServer::GetLocal(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketServer::base_GetPeer(wxSockAddress & addr) const
	static int _bind_base_GetPeer(lua_State *L) {
		if (!_lg_typecheck_base_GetPeer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketServer::base_GetPeer(wxSockAddress & addr) const function, expected prototype:\nbool wxSocketServer::base_GetPeer(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxSocketServer::base_GetPeer function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxSocketServer* self=Luna< wxObject >::checkSubType< wxSocketServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketServer::base_GetPeer(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketServer::GetPeer(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketServer::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketServer::base_Close() function, expected prototype:\nbool wxSocketServer::base_Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketServer* self=Luna< wxObject >::checkSubType< wxSocketServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketServer::base_Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketServer::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketServer::base_SetLocal(const wxIPV4address & local)
	static int _bind_base_SetLocal(lua_State *L) {
		if (!_lg_typecheck_base_SetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketServer::base_SetLocal(const wxIPV4address & local) function, expected prototype:\nbool wxSocketServer::base_SetLocal(const wxIPV4address & local)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIPV4address* local_ptr=(Luna< wxObject >::checkSubType< wxIPV4address >(L,2));
		if( !local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg local in wxSocketServer::base_SetLocal function");
		}
		const wxIPV4address & local=*local_ptr;

		wxSocketServer* self=Luna< wxObject >::checkSubType< wxSocketServer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketServer::base_SetLocal(const wxIPV4address &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketServer::SetLocal(local);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxSocketServer* LunaTraits< wxSocketServer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSocketServer::_bind_ctor(L);
}

void LunaTraits< wxSocketServer >::_bind_dtor(wxSocketServer* obj) {
	delete obj;
}

const char LunaTraits< wxSocketServer >::className[] = "wxSocketServer";
const char LunaTraits< wxSocketServer >::fullName[] = "wxSocketServer";
const char LunaTraits< wxSocketServer >::moduleName[] = "wx";
const char* LunaTraits< wxSocketServer >::parents[] = {"wx.wxSocketBase", 0};
const int LunaTraits< wxSocketServer >::hash = 85922538;
const int LunaTraits< wxSocketServer >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSocketServer >::methods[] = {
	{"Accept", &luna_wrapper_wxSocketServer::_bind_Accept},
	{"AcceptWith", &luna_wrapper_wxSocketServer::_bind_AcceptWith},
	{"WaitForAccept", &luna_wrapper_wxSocketServer::_bind_WaitForAccept},
	{"base_GetClassInfo", &luna_wrapper_wxSocketServer::_bind_base_GetClassInfo},
	{"base_GetLocal", &luna_wrapper_wxSocketServer::_bind_base_GetLocal},
	{"base_GetPeer", &luna_wrapper_wxSocketServer::_bind_base_GetPeer},
	{"base_Close", &luna_wrapper_wxSocketServer::_bind_base_Close},
	{"base_SetLocal", &luna_wrapper_wxSocketServer::_bind_base_SetLocal},
	{"fromVoid", &luna_wrapper_wxSocketServer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSocketServer::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSocketServer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSocketServer >::converters[] = {
	{"wxObject", &luna_wrapper_wxSocketServer::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSocketServer >::enumValues[] = {
	{0,0}
};


