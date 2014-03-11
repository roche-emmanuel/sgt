#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSocketBase.h>

class luna_wrapper_wxSocketBase {
public:
	typedef Luna< wxSocketBase > luna_t;

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

		wxSocketBase* self= (wxSocketBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSocketBase >::push(L,self,false);
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
		//wxSocketBase* ptr= dynamic_cast< wxSocketBase* >(Luna< wxObject >::check(L,1));
		wxSocketBase* ptr= luna_caster< wxObject, wxSocketBase >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSocketBase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Error(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPeer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTimeout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsConnected(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsDisconnected(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LastCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LastError(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RestoreState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SaveState(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShutdownOutput(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Discard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFlags(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InterruptWait(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Peek(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Read(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadMsg(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFlags(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLocal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTimeout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unread(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Wait(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WaitForLost(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WaitForRead(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WaitForWrite(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Write(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WriteMsg(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClientData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Notify(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEventHandler(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNotify(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Shutdown(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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
	// wxSocketBase::wxSocketBase()
	static wxSocketBase* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketBase::wxSocketBase() function, expected prototype:\nwxSocketBase::wxSocketBase()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxSocketBase();
	}

	// wxSocketBase::wxSocketBase(lua_Table * data)
	static wxSocketBase* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketBase::wxSocketBase(lua_Table * data) function, expected prototype:\nwxSocketBase::wxSocketBase(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxSocketBase(L,NULL);
	}

	// Overload binder for wxSocketBase::wxSocketBase
	static wxSocketBase* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSocketBase, cannot match any of the overloads for function wxSocketBase:\n  wxSocketBase()\n  wxSocketBase(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// bool wxSocketBase::Destroy()
	static int _bind_Destroy(lua_State *L) {
		if (!_lg_typecheck_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::Destroy() function, expected prototype:\nbool wxSocketBase::Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::Error() const
	static int _bind_Error(lua_State *L) {
		if (!_lg_typecheck_Error(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::Error() const function, expected prototype:\nbool wxSocketBase::Error() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::Error() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Error();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::GetLocal(wxSockAddress & addr) const
	static int _bind_GetLocal(lua_State *L) {
		if (!_lg_typecheck_GetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::GetLocal(wxSockAddress & addr) const function, expected prototype:\nbool wxSocketBase::GetLocal(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxSocketBase::GetLocal function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::GetLocal(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetLocal(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::GetPeer(wxSockAddress & addr) const
	static int _bind_GetPeer(lua_State *L) {
		if (!_lg_typecheck_GetPeer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::GetPeer(wxSockAddress & addr) const function, expected prototype:\nbool wxSocketBase::GetPeer(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxSocketBase::GetPeer function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::GetPeer(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetPeer(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxSocketBase::GetTimeout() const
	static int _bind_GetTimeout(lua_State *L) {
		if (!_lg_typecheck_GetTimeout(L)) {
			luaL_error(L, "luna typecheck failed in long wxSocketBase::GetTimeout() const function, expected prototype:\nlong wxSocketBase::GetTimeout() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxSocketBase::GetTimeout() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetTimeout();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxSocketBase::IsConnected() const
	static int _bind_IsConnected(lua_State *L) {
		if (!_lg_typecheck_IsConnected(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::IsConnected() const function, expected prototype:\nbool wxSocketBase::IsConnected() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::IsConnected() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsConnected();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::IsData()
	static int _bind_IsData(lua_State *L) {
		if (!_lg_typecheck_IsData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::IsData() function, expected prototype:\nbool wxSocketBase::IsData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::IsData(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsData();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::IsDisconnected() const
	static int _bind_IsDisconnected(lua_State *L) {
		if (!_lg_typecheck_IsDisconnected(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::IsDisconnected() const function, expected prototype:\nbool wxSocketBase::IsDisconnected() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::IsDisconnected() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsDisconnected();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::IsOk() const function, expected prototype:\nbool wxSocketBase::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxSocketBase::LastCount() const
	static int _bind_LastCount(lua_State *L) {
		if (!_lg_typecheck_LastCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxSocketBase::LastCount() const function, expected prototype:\nunsigned int wxSocketBase::LastCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxSocketBase::LastCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->LastCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSocketError wxSocketBase::LastError() const
	static int _bind_LastError(lua_State *L) {
		if (!_lg_typecheck_LastError(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketError wxSocketBase::LastError() const function, expected prototype:\nwxSocketError wxSocketBase::LastError() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSocketError wxSocketBase::LastError() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSocketError lret = self->LastError();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSocketBase::RestoreState()
	static int _bind_RestoreState(lua_State *L) {
		if (!_lg_typecheck_RestoreState(L)) {
			luaL_error(L, "luna typecheck failed in void wxSocketBase::RestoreState() function, expected prototype:\nvoid wxSocketBase::RestoreState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSocketBase::RestoreState(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RestoreState();

		return 0;
	}

	// void wxSocketBase::SaveState()
	static int _bind_SaveState(lua_State *L) {
		if (!_lg_typecheck_SaveState(L)) {
			luaL_error(L, "luna typecheck failed in void wxSocketBase::SaveState() function, expected prototype:\nvoid wxSocketBase::SaveState()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSocketBase::SaveState(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SaveState();

		return 0;
	}

	// bool wxSocketBase::Close()
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::Close() function, expected prototype:\nbool wxSocketBase::Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSocketBase::ShutdownOutput()
	static int _bind_ShutdownOutput(lua_State *L) {
		if (!_lg_typecheck_ShutdownOutput(L)) {
			luaL_error(L, "luna typecheck failed in void wxSocketBase::ShutdownOutput() function, expected prototype:\nvoid wxSocketBase::ShutdownOutput()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSocketBase::ShutdownOutput(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShutdownOutput();

		return 0;
	}

	// wxSocketBase & wxSocketBase::Discard()
	static int _bind_Discard(lua_State *L) {
		if (!_lg_typecheck_Discard(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketBase & wxSocketBase::Discard() function, expected prototype:\nwxSocketBase & wxSocketBase::Discard()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSocketBase & wxSocketBase::Discard(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxSocketBase* lret = &self->Discard();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSocketBase >::push(L,lret,false);

		return 1;
	}

	// int wxSocketBase::GetFlags() const
	static int _bind_GetFlags(lua_State *L) {
		if (!_lg_typecheck_GetFlags(L)) {
			luaL_error(L, "luna typecheck failed in int wxSocketBase::GetFlags() const function, expected prototype:\nint wxSocketBase::GetFlags() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSocketBase::GetFlags() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFlags();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSocketBase::InterruptWait()
	static int _bind_InterruptWait(lua_State *L) {
		if (!_lg_typecheck_InterruptWait(L)) {
			luaL_error(L, "luna typecheck failed in void wxSocketBase::InterruptWait() function, expected prototype:\nvoid wxSocketBase::InterruptWait()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSocketBase::InterruptWait(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InterruptWait();

		return 0;
	}

	// wxSocketBase & wxSocketBase::Peek(void * buffer, unsigned int nbytes)
	static int _bind_Peek(lua_State *L) {
		if (!_lg_typecheck_Peek(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketBase & wxSocketBase::Peek(void * buffer, unsigned int nbytes) function, expected prototype:\nwxSocketBase & wxSocketBase::Peek(void * buffer, unsigned int nbytes)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buffer=(Luna< void >::check(L,2));
		unsigned int nbytes=(unsigned int)lua_tointeger(L,3);

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSocketBase & wxSocketBase::Peek(void *, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxSocketBase* lret = &self->Peek(buffer, nbytes);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSocketBase >::push(L,lret,false);

		return 1;
	}

	// wxSocketBase & wxSocketBase::Read(void * buffer, unsigned int nbytes)
	static int _bind_Read(lua_State *L) {
		if (!_lg_typecheck_Read(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketBase & wxSocketBase::Read(void * buffer, unsigned int nbytes) function, expected prototype:\nwxSocketBase & wxSocketBase::Read(void * buffer, unsigned int nbytes)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buffer=(Luna< void >::check(L,2));
		unsigned int nbytes=(unsigned int)lua_tointeger(L,3);

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSocketBase & wxSocketBase::Read(void *, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxSocketBase* lret = &self->Read(buffer, nbytes);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSocketBase >::push(L,lret,false);

		return 1;
	}

	// wxSocketBase & wxSocketBase::ReadMsg(void * buffer, unsigned int nbytes)
	static int _bind_ReadMsg(lua_State *L) {
		if (!_lg_typecheck_ReadMsg(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketBase & wxSocketBase::ReadMsg(void * buffer, unsigned int nbytes) function, expected prototype:\nwxSocketBase & wxSocketBase::ReadMsg(void * buffer, unsigned int nbytes)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* buffer=(Luna< void >::check(L,2));
		unsigned int nbytes=(unsigned int)lua_tointeger(L,3);

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSocketBase & wxSocketBase::ReadMsg(void *, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxSocketBase* lret = &self->ReadMsg(buffer, nbytes);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSocketBase >::push(L,lret,false);

		return 1;
	}

	// void wxSocketBase::SetFlags(int flags)
	static int _bind_SetFlags(lua_State *L) {
		if (!_lg_typecheck_SetFlags(L)) {
			luaL_error(L, "luna typecheck failed in void wxSocketBase::SetFlags(int flags) function, expected prototype:\nvoid wxSocketBase::SetFlags(int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flags=(int)lua_tointeger(L,2);

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSocketBase::SetFlags(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFlags(flags);

		return 0;
	}

	// bool wxSocketBase::SetLocal(const wxIPV4address & local)
	static int _bind_SetLocal(lua_State *L) {
		if (!_lg_typecheck_SetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::SetLocal(const wxIPV4address & local) function, expected prototype:\nbool wxSocketBase::SetLocal(const wxIPV4address & local)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIPV4address* local_ptr=(Luna< wxObject >::checkSubType< wxIPV4address >(L,2));
		if( !local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg local in wxSocketBase::SetLocal function");
		}
		const wxIPV4address & local=*local_ptr;

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::SetLocal(const wxIPV4address &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetLocal(local);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSocketBase::SetTimeout(long seconds)
	static int _bind_SetTimeout(lua_State *L) {
		if (!_lg_typecheck_SetTimeout(L)) {
			luaL_error(L, "luna typecheck failed in void wxSocketBase::SetTimeout(long seconds) function, expected prototype:\nvoid wxSocketBase::SetTimeout(long seconds)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long seconds=(long)lua_tonumber(L,2);

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSocketBase::SetTimeout(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTimeout(seconds);

		return 0;
	}

	// wxSocketBase & wxSocketBase::Unread(const void * buffer, unsigned int nbytes)
	static int _bind_Unread(lua_State *L) {
		if (!_lg_typecheck_Unread(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketBase & wxSocketBase::Unread(const void * buffer, unsigned int nbytes) function, expected prototype:\nwxSocketBase & wxSocketBase::Unread(const void * buffer, unsigned int nbytes)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* buffer=(Luna< void >::check(L,2));
		unsigned int nbytes=(unsigned int)lua_tointeger(L,3);

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSocketBase & wxSocketBase::Unread(const void *, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxSocketBase* lret = &self->Unread(buffer, nbytes);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSocketBase >::push(L,lret,false);

		return 1;
	}

	// bool wxSocketBase::Wait(long seconds = -1, long millisecond = 0)
	static int _bind_Wait(lua_State *L) {
		if (!_lg_typecheck_Wait(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::Wait(long seconds = -1, long millisecond = 0) function, expected prototype:\nbool wxSocketBase::Wait(long seconds = -1, long millisecond = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long seconds=luatop>1 ? (long)lua_tonumber(L,2) : (long)-1;
		long millisecond=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::Wait(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Wait(seconds, millisecond);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::WaitForLost(long seconds = -1, long millisecond = 0)
	static int _bind_WaitForLost(lua_State *L) {
		if (!_lg_typecheck_WaitForLost(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::WaitForLost(long seconds = -1, long millisecond = 0) function, expected prototype:\nbool wxSocketBase::WaitForLost(long seconds = -1, long millisecond = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long seconds=luatop>1 ? (long)lua_tonumber(L,2) : (long)-1;
		long millisecond=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::WaitForLost(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WaitForLost(seconds, millisecond);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::WaitForRead(long seconds = -1, long millisecond = 0)
	static int _bind_WaitForRead(lua_State *L) {
		if (!_lg_typecheck_WaitForRead(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::WaitForRead(long seconds = -1, long millisecond = 0) function, expected prototype:\nbool wxSocketBase::WaitForRead(long seconds = -1, long millisecond = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long seconds=luatop>1 ? (long)lua_tonumber(L,2) : (long)-1;
		long millisecond=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::WaitForRead(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WaitForRead(seconds, millisecond);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::WaitForWrite(long seconds = -1, long millisecond = 0)
	static int _bind_WaitForWrite(lua_State *L) {
		if (!_lg_typecheck_WaitForWrite(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::WaitForWrite(long seconds = -1, long millisecond = 0) function, expected prototype:\nbool wxSocketBase::WaitForWrite(long seconds = -1, long millisecond = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long seconds=luatop>1 ? (long)lua_tonumber(L,2) : (long)-1;
		long millisecond=luatop>2 ? (long)lua_tonumber(L,3) : (long)0;

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::WaitForWrite(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WaitForWrite(seconds, millisecond);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSocketBase & wxSocketBase::Write(const void * buffer, unsigned int nbytes)
	static int _bind_Write(lua_State *L) {
		if (!_lg_typecheck_Write(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketBase & wxSocketBase::Write(const void * buffer, unsigned int nbytes) function, expected prototype:\nwxSocketBase & wxSocketBase::Write(const void * buffer, unsigned int nbytes)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* buffer=(Luna< void >::check(L,2));
		unsigned int nbytes=(unsigned int)lua_tointeger(L,3);

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSocketBase & wxSocketBase::Write(const void *, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxSocketBase* lret = &self->Write(buffer, nbytes);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSocketBase >::push(L,lret,false);

		return 1;
	}

	// wxSocketBase & wxSocketBase::WriteMsg(const void * buffer, unsigned int nbytes)
	static int _bind_WriteMsg(lua_State *L) {
		if (!_lg_typecheck_WriteMsg(L)) {
			luaL_error(L, "luna typecheck failed in wxSocketBase & wxSocketBase::WriteMsg(const void * buffer, unsigned int nbytes) function, expected prototype:\nwxSocketBase & wxSocketBase::WriteMsg(const void * buffer, unsigned int nbytes)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const void* buffer=(Luna< void >::check(L,2));
		unsigned int nbytes=(unsigned int)lua_tointeger(L,3);

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSocketBase & wxSocketBase::WriteMsg(const void *, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxSocketBase* lret = &self->WriteMsg(buffer, nbytes);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSocketBase >::push(L,lret,false);

		return 1;
	}

	// void * wxSocketBase::GetClientData() const
	static int _bind_GetClientData(lua_State *L) {
		if (!_lg_typecheck_GetClientData(L)) {
			luaL_error(L, "luna typecheck failed in void * wxSocketBase::GetClientData() const function, expected prototype:\nvoid * wxSocketBase::GetClientData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void * wxSocketBase::GetClientData() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		void * lret = self->GetClientData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< void >::push(L,lret,false);

		return 1;
	}

	// void wxSocketBase::Notify(bool notify)
	static int _bind_Notify(lua_State *L) {
		if (!_lg_typecheck_Notify(L)) {
			luaL_error(L, "luna typecheck failed in void wxSocketBase::Notify(bool notify) function, expected prototype:\nvoid wxSocketBase::Notify(bool notify)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool notify=(bool)(lua_toboolean(L,2)==1);

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSocketBase::Notify(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Notify(notify);

		return 0;
	}

	// void wxSocketBase::SetClientData(void * data)
	static int _bind_SetClientData(lua_State *L) {
		if (!_lg_typecheck_SetClientData(L)) {
			luaL_error(L, "luna typecheck failed in void wxSocketBase::SetClientData(void * data) function, expected prototype:\nvoid wxSocketBase::SetClientData(void * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* data=(Luna< void >::check(L,2));

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSocketBase::SetClientData(void *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClientData(data);

		return 0;
	}

	// void wxSocketBase::SetEventHandler(wxEvtHandler & handler, int id = -1)
	static int _bind_SetEventHandler(lua_State *L) {
		if (!_lg_typecheck_SetEventHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxSocketBase::SetEventHandler(wxEvtHandler & handler, int id = -1) function, expected prototype:\nvoid wxSocketBase::SetEventHandler(wxEvtHandler & handler, int id = -1)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxEvtHandler* handler_ptr=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));
		if( !handler_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg handler in wxSocketBase::SetEventHandler function");
		}
		wxEvtHandler & handler=*handler_ptr;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSocketBase::SetEventHandler(wxEvtHandler &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEventHandler(handler, id);

		return 0;
	}

	// void wxSocketBase::SetNotify(wxSocketEventFlags flags)
	static int _bind_SetNotify(lua_State *L) {
		if (!_lg_typecheck_SetNotify(L)) {
			luaL_error(L, "luna typecheck failed in void wxSocketBase::SetNotify(wxSocketEventFlags flags) function, expected prototype:\nvoid wxSocketBase::SetNotify(wxSocketEventFlags flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSocketEventFlags flags=(wxSocketEventFlags)lua_tointeger(L,2);

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSocketBase::SetNotify(wxSocketEventFlags). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNotify(flags);

		return 0;
	}

	// static bool wxSocketBase::Initialize()
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxSocketBase::Initialize() function, expected prototype:\nstatic bool wxSocketBase::Initialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = wxSocketBase::Initialize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static void wxSocketBase::Shutdown()
	static int _bind_Shutdown(lua_State *L) {
		if (!_lg_typecheck_Shutdown(L)) {
			luaL_error(L, "luna typecheck failed in static void wxSocketBase::Shutdown() function, expected prototype:\nstatic void wxSocketBase::Shutdown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase::Shutdown();

		return 0;
	}

	// wxClassInfo * wxSocketBase::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSocketBase::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSocketBase::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSocketBase::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSocketBase::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxSocketBase::base_GetLocal(wxSockAddress & addr) const
	static int _bind_base_GetLocal(lua_State *L) {
		if (!_lg_typecheck_base_GetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::base_GetLocal(wxSockAddress & addr) const function, expected prototype:\nbool wxSocketBase::base_GetLocal(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxSocketBase::base_GetLocal function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::base_GetLocal(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketBase::GetLocal(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::base_GetPeer(wxSockAddress & addr) const
	static int _bind_base_GetPeer(lua_State *L) {
		if (!_lg_typecheck_base_GetPeer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::base_GetPeer(wxSockAddress & addr) const function, expected prototype:\nbool wxSocketBase::base_GetPeer(wxSockAddress & addr) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSockAddress* addr_ptr=(Luna< wxObject >::checkSubType< wxSockAddress >(L,2));
		if( !addr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg addr in wxSocketBase::base_GetPeer function");
		}
		wxSockAddress & addr=*addr_ptr;

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::base_GetPeer(wxSockAddress &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketBase::GetPeer(addr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::base_Close()
	static int _bind_base_Close(lua_State *L) {
		if (!_lg_typecheck_base_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::base_Close() function, expected prototype:\nbool wxSocketBase::base_Close()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::base_Close(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketBase::Close();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSocketBase::base_SetLocal(const wxIPV4address & local)
	static int _bind_base_SetLocal(lua_State *L) {
		if (!_lg_typecheck_base_SetLocal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSocketBase::base_SetLocal(const wxIPV4address & local) function, expected prototype:\nbool wxSocketBase::base_SetLocal(const wxIPV4address & local)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIPV4address* local_ptr=(Luna< wxObject >::checkSubType< wxIPV4address >(L,2));
		if( !local_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg local in wxSocketBase::base_SetLocal function");
		}
		const wxIPV4address & local=*local_ptr;

		wxSocketBase* self=Luna< wxObject >::checkSubType< wxSocketBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSocketBase::base_SetLocal(const wxIPV4address &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSocketBase::SetLocal(local);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxSocketBase* LunaTraits< wxSocketBase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSocketBase::_bind_ctor(L);
}

void LunaTraits< wxSocketBase >::_bind_dtor(wxSocketBase* obj) {
	delete obj;
}

const char LunaTraits< wxSocketBase >::className[] = "wxSocketBase";
const char LunaTraits< wxSocketBase >::fullName[] = "wxSocketBase";
const char LunaTraits< wxSocketBase >::moduleName[] = "wx";
const char* LunaTraits< wxSocketBase >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxSocketBase >::hash = 35167063;
const int LunaTraits< wxSocketBase >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSocketBase >::methods[] = {
	{"Destroy", &luna_wrapper_wxSocketBase::_bind_Destroy},
	{"Error", &luna_wrapper_wxSocketBase::_bind_Error},
	{"GetLocal", &luna_wrapper_wxSocketBase::_bind_GetLocal},
	{"GetPeer", &luna_wrapper_wxSocketBase::_bind_GetPeer},
	{"GetTimeout", &luna_wrapper_wxSocketBase::_bind_GetTimeout},
	{"IsConnected", &luna_wrapper_wxSocketBase::_bind_IsConnected},
	{"IsData", &luna_wrapper_wxSocketBase::_bind_IsData},
	{"IsDisconnected", &luna_wrapper_wxSocketBase::_bind_IsDisconnected},
	{"IsOk", &luna_wrapper_wxSocketBase::_bind_IsOk},
	{"LastCount", &luna_wrapper_wxSocketBase::_bind_LastCount},
	{"LastError", &luna_wrapper_wxSocketBase::_bind_LastError},
	{"RestoreState", &luna_wrapper_wxSocketBase::_bind_RestoreState},
	{"SaveState", &luna_wrapper_wxSocketBase::_bind_SaveState},
	{"Close", &luna_wrapper_wxSocketBase::_bind_Close},
	{"ShutdownOutput", &luna_wrapper_wxSocketBase::_bind_ShutdownOutput},
	{"Discard", &luna_wrapper_wxSocketBase::_bind_Discard},
	{"GetFlags", &luna_wrapper_wxSocketBase::_bind_GetFlags},
	{"InterruptWait", &luna_wrapper_wxSocketBase::_bind_InterruptWait},
	{"Peek", &luna_wrapper_wxSocketBase::_bind_Peek},
	{"Read", &luna_wrapper_wxSocketBase::_bind_Read},
	{"ReadMsg", &luna_wrapper_wxSocketBase::_bind_ReadMsg},
	{"SetFlags", &luna_wrapper_wxSocketBase::_bind_SetFlags},
	{"SetLocal", &luna_wrapper_wxSocketBase::_bind_SetLocal},
	{"SetTimeout", &luna_wrapper_wxSocketBase::_bind_SetTimeout},
	{"Unread", &luna_wrapper_wxSocketBase::_bind_Unread},
	{"Wait", &luna_wrapper_wxSocketBase::_bind_Wait},
	{"WaitForLost", &luna_wrapper_wxSocketBase::_bind_WaitForLost},
	{"WaitForRead", &luna_wrapper_wxSocketBase::_bind_WaitForRead},
	{"WaitForWrite", &luna_wrapper_wxSocketBase::_bind_WaitForWrite},
	{"Write", &luna_wrapper_wxSocketBase::_bind_Write},
	{"WriteMsg", &luna_wrapper_wxSocketBase::_bind_WriteMsg},
	{"GetClientData", &luna_wrapper_wxSocketBase::_bind_GetClientData},
	{"Notify", &luna_wrapper_wxSocketBase::_bind_Notify},
	{"SetClientData", &luna_wrapper_wxSocketBase::_bind_SetClientData},
	{"SetEventHandler", &luna_wrapper_wxSocketBase::_bind_SetEventHandler},
	{"SetNotify", &luna_wrapper_wxSocketBase::_bind_SetNotify},
	{"Initialize", &luna_wrapper_wxSocketBase::_bind_Initialize},
	{"Shutdown", &luna_wrapper_wxSocketBase::_bind_Shutdown},
	{"base_GetClassInfo", &luna_wrapper_wxSocketBase::_bind_base_GetClassInfo},
	{"base_GetLocal", &luna_wrapper_wxSocketBase::_bind_base_GetLocal},
	{"base_GetPeer", &luna_wrapper_wxSocketBase::_bind_base_GetPeer},
	{"base_Close", &luna_wrapper_wxSocketBase::_bind_base_Close},
	{"base_SetLocal", &luna_wrapper_wxSocketBase::_bind_base_SetLocal},
	{"fromVoid", &luna_wrapper_wxSocketBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSocketBase::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSocketBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSocketBase >::converters[] = {
	{"wxObject", &luna_wrapper_wxSocketBase::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSocketBase >::enumValues[] = {
	{0,0}
};


