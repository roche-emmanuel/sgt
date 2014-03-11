#include <plug_common.h>

#include <luna/wrappers/wrapper_wxProcess.h>

class luna_wrapper_wxProcess {
public:
	typedef Luna< wxProcess > luna_t;

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

		wxProcess* self= (wxProcess*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxProcess >::push(L,self,false);
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
		//wxProcess* ptr= dynamic_cast< wxProcess* >(Luna< wxObject >::check(L,1));
		wxProcess* ptr= luna_caster< wxObject, wxProcess >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxProcess >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxEvtHandler >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CloseOutput(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetErrorStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInputStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOutputStream(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsErrorAvailable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsInputAvailable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsInputOpened(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnTerminate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Redirect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Exists(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Open(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_QueueEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AddPendingEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ProcessEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnTerminate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxProcess::wxProcess(wxEvtHandler * parent = NULL, int id = -1)
	static wxProcess* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxProcess::wxProcess(wxEvtHandler * parent = NULL, int id = -1) function, expected prototype:\nwxProcess::wxProcess(wxEvtHandler * parent = NULL, int id = -1)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxEvtHandler* parent=luatop>0 ? (Luna< wxObject >::checkSubType< wxEvtHandler >(L,1)) : (wxEvtHandler*)NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)-1;

		return new wxProcess(parent, id);
	}

	// wxProcess::wxProcess(int flags)
	static wxProcess* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxProcess::wxProcess(int flags) function, expected prototype:\nwxProcess::wxProcess(int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flags=(int)lua_tointeger(L,1);

		return new wxProcess(flags);
	}

	// wxProcess::wxProcess(lua_Table * data, wxEvtHandler * parent = NULL, int id = -1)
	static wxProcess* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxProcess::wxProcess(lua_Table * data, wxEvtHandler * parent = NULL, int id = -1) function, expected prototype:\nwxProcess::wxProcess(lua_Table * data, wxEvtHandler * parent = NULL, int id = -1)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxEvtHandler* parent=luatop>1 ? (Luna< wxObject >::checkSubType< wxEvtHandler >(L,2)) : (wxEvtHandler*)NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		return new wrapper_wxProcess(L,NULL, parent, id);
	}

	// wxProcess::wxProcess(lua_Table * data, int flags)
	static wxProcess* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxProcess::wxProcess(lua_Table * data, int flags) function, expected prototype:\nwxProcess::wxProcess(lua_Table * data, int flags)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flags=(int)lua_tointeger(L,2);

		return new wrapper_wxProcess(L,NULL, flags);
	}

	// Overload binder for wxProcess::wxProcess
	static wxProcess* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxProcess, cannot match any of the overloads for function wxProcess:\n  wxProcess(wxEvtHandler *, int)\n  wxProcess(int)\n  wxProcess(lua_Table *, wxEvtHandler *, int)\n  wxProcess(lua_Table *, int)\n");
		return NULL;
	}


	// Function binds:
	// void wxProcess::CloseOutput()
	static int _bind_CloseOutput(lua_State *L) {
		if (!_lg_typecheck_CloseOutput(L)) {
			luaL_error(L, "luna typecheck failed in void wxProcess::CloseOutput() function, expected prototype:\nvoid wxProcess::CloseOutput()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProcess::CloseOutput(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CloseOutput();

		return 0;
	}

	// void wxProcess::Detach()
	static int _bind_Detach(lua_State *L) {
		if (!_lg_typecheck_Detach(L)) {
			luaL_error(L, "luna typecheck failed in void wxProcess::Detach() function, expected prototype:\nvoid wxProcess::Detach()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProcess::Detach(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Detach();

		return 0;
	}

	// wxInputStream * wxProcess::GetErrorStream() const
	static int _bind_GetErrorStream(lua_State *L) {
		if (!_lg_typecheck_GetErrorStream(L)) {
			luaL_error(L, "luna typecheck failed in wxInputStream * wxProcess::GetErrorStream() const function, expected prototype:\nwxInputStream * wxProcess::GetErrorStream() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxInputStream * wxProcess::GetErrorStream() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxInputStream * lret = self->GetErrorStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// wxInputStream * wxProcess::GetInputStream() const
	static int _bind_GetInputStream(lua_State *L) {
		if (!_lg_typecheck_GetInputStream(L)) {
			luaL_error(L, "luna typecheck failed in wxInputStream * wxProcess::GetInputStream() const function, expected prototype:\nwxInputStream * wxProcess::GetInputStream() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxInputStream * wxProcess::GetInputStream() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxInputStream * lret = self->GetInputStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxInputStream >::push(L,lret,false);

		return 1;
	}

	// wxOutputStream * wxProcess::GetOutputStream() const
	static int _bind_GetOutputStream(lua_State *L) {
		if (!_lg_typecheck_GetOutputStream(L)) {
			luaL_error(L, "luna typecheck failed in wxOutputStream * wxProcess::GetOutputStream() const function, expected prototype:\nwxOutputStream * wxProcess::GetOutputStream() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxOutputStream * wxProcess::GetOutputStream() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxOutputStream * lret = self->GetOutputStream();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxOutputStream >::push(L,lret,false);

		return 1;
	}

	// long wxProcess::GetPid() const
	static int _bind_GetPid(lua_State *L) {
		if (!_lg_typecheck_GetPid(L)) {
			luaL_error(L, "luna typecheck failed in long wxProcess::GetPid() const function, expected prototype:\nlong wxProcess::GetPid() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxProcess::GetPid() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetPid();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxProcess::IsErrorAvailable() const
	static int _bind_IsErrorAvailable(lua_State *L) {
		if (!_lg_typecheck_IsErrorAvailable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProcess::IsErrorAvailable() const function, expected prototype:\nbool wxProcess::IsErrorAvailable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProcess::IsErrorAvailable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsErrorAvailable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProcess::IsInputAvailable() const
	static int _bind_IsInputAvailable(lua_State *L) {
		if (!_lg_typecheck_IsInputAvailable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProcess::IsInputAvailable() const function, expected prototype:\nbool wxProcess::IsInputAvailable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProcess::IsInputAvailable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsInputAvailable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProcess::IsInputOpened() const
	static int _bind_IsInputOpened(lua_State *L) {
		if (!_lg_typecheck_IsInputOpened(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProcess::IsInputOpened() const function, expected prototype:\nbool wxProcess::IsInputOpened() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProcess::IsInputOpened() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsInputOpened();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProcess::OnTerminate(int pid, int status)
	static int _bind_OnTerminate(lua_State *L) {
		if (!_lg_typecheck_OnTerminate(L)) {
			luaL_error(L, "luna typecheck failed in void wxProcess::OnTerminate(int pid, int status) function, expected prototype:\nvoid wxProcess::OnTerminate(int pid, int status)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pid=(int)lua_tointeger(L,2);
		int status=(int)lua_tointeger(L,3);

		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProcess::OnTerminate(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnTerminate(pid, status);

		return 0;
	}

	// void wxProcess::Redirect()
	static int _bind_Redirect(lua_State *L) {
		if (!_lg_typecheck_Redirect(L)) {
			luaL_error(L, "luna typecheck failed in void wxProcess::Redirect() function, expected prototype:\nvoid wxProcess::Redirect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProcess::Redirect(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Redirect();

		return 0;
	}

	// static bool wxProcess::Exists(int pid)
	static int _bind_Exists(lua_State *L) {
		if (!_lg_typecheck_Exists(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxProcess::Exists(int pid) function, expected prototype:\nstatic bool wxProcess::Exists(int pid)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pid=(int)lua_tointeger(L,1);

		bool lret = wxProcess::Exists(pid);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static wxProcess * wxProcess::Open(const wxString & cmd, int flags = ::wxEXEC_ASYNC)
	static int _bind_Open(lua_State *L) {
		if (!_lg_typecheck_Open(L)) {
			luaL_error(L, "luna typecheck failed in static wxProcess * wxProcess::Open(const wxString & cmd, int flags = ::wxEXEC_ASYNC) function, expected prototype:\nstatic wxProcess * wxProcess::Open(const wxString & cmd, int flags = ::wxEXEC_ASYNC)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString cmd(lua_tostring(L,1),lua_objlen(L,1));
		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxEXEC_ASYNC;

		wxProcess * lret = wxProcess::Open(cmd, flags);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxProcess >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxProcess::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxProcess::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxProcess::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxProcess::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxProcess::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// void wxProcess::base_QueueEvent(wxEvent * event)
	static int _bind_base_QueueEvent(lua_State *L) {
		if (!_lg_typecheck_base_QueueEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxProcess::base_QueueEvent(wxEvent * event) function, expected prototype:\nvoid wxProcess::base_QueueEvent(wxEvent * event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event=(Luna< wxObject >::checkSubType< wxEvent >(L,2));

		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProcess::base_QueueEvent(wxEvent *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProcess::QueueEvent(event);

		return 0;
	}

	// void wxProcess::base_AddPendingEvent(const wxEvent & event)
	static int _bind_base_AddPendingEvent(lua_State *L) {
		if (!_lg_typecheck_base_AddPendingEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxProcess::base_AddPendingEvent(const wxEvent & event) function, expected prototype:\nvoid wxProcess::base_AddPendingEvent(const wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxProcess::base_AddPendingEvent function");
		}
		const wxEvent & event=*event_ptr;

		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProcess::base_AddPendingEvent(const wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProcess::AddPendingEvent(event);

		return 0;
	}

	// bool wxProcess::base_ProcessEvent(wxEvent & event)
	static int _bind_base_ProcessEvent(lua_State *L) {
		if (!_lg_typecheck_base_ProcessEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProcess::base_ProcessEvent(wxEvent & event) function, expected prototype:\nbool wxProcess::base_ProcessEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxProcess::base_ProcessEvent function");
		}
		wxEvent & event=*event_ptr;

		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProcess::base_ProcessEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProcess::ProcessEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProcess::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxProcess::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxProcess::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProcess::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProcess::SetNextHandler(handler);

		return 0;
	}

	// void wxProcess::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxProcess::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxProcess::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProcess::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProcess::SetPreviousHandler(handler);

		return 0;
	}

	// void wxProcess::base_OnTerminate(int pid, int status)
	static int _bind_base_OnTerminate(lua_State *L) {
		if (!_lg_typecheck_base_OnTerminate(L)) {
			luaL_error(L, "luna typecheck failed in void wxProcess::base_OnTerminate(int pid, int status) function, expected prototype:\nvoid wxProcess::base_OnTerminate(int pid, int status)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pid=(int)lua_tointeger(L,2);
		int status=(int)lua_tointeger(L,3);

		wxProcess* self=Luna< wxObject >::checkSubType< wxProcess >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProcess::base_OnTerminate(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProcess::OnTerminate(pid, status);

		return 0;
	}


	// Operator binds:

};

wxProcess* LunaTraits< wxProcess >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxProcess::_bind_ctor(L);
}

void LunaTraits< wxProcess >::_bind_dtor(wxProcess* obj) {
	delete obj;
}

const char LunaTraits< wxProcess >::className[] = "wxProcess";
const char LunaTraits< wxProcess >::fullName[] = "wxProcess";
const char LunaTraits< wxProcess >::moduleName[] = "wx";
const char* LunaTraits< wxProcess >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxProcess >::hash = 11352439;
const int LunaTraits< wxProcess >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxProcess >::methods[] = {
	{"CloseOutput", &luna_wrapper_wxProcess::_bind_CloseOutput},
	{"Detach", &luna_wrapper_wxProcess::_bind_Detach},
	{"GetErrorStream", &luna_wrapper_wxProcess::_bind_GetErrorStream},
	{"GetInputStream", &luna_wrapper_wxProcess::_bind_GetInputStream},
	{"GetOutputStream", &luna_wrapper_wxProcess::_bind_GetOutputStream},
	{"GetPid", &luna_wrapper_wxProcess::_bind_GetPid},
	{"IsErrorAvailable", &luna_wrapper_wxProcess::_bind_IsErrorAvailable},
	{"IsInputAvailable", &luna_wrapper_wxProcess::_bind_IsInputAvailable},
	{"IsInputOpened", &luna_wrapper_wxProcess::_bind_IsInputOpened},
	{"OnTerminate", &luna_wrapper_wxProcess::_bind_OnTerminate},
	{"Redirect", &luna_wrapper_wxProcess::_bind_Redirect},
	{"Exists", &luna_wrapper_wxProcess::_bind_Exists},
	{"Open", &luna_wrapper_wxProcess::_bind_Open},
	{"base_GetClassInfo", &luna_wrapper_wxProcess::_bind_base_GetClassInfo},
	{"base_QueueEvent", &luna_wrapper_wxProcess::_bind_base_QueueEvent},
	{"base_AddPendingEvent", &luna_wrapper_wxProcess::_bind_base_AddPendingEvent},
	{"base_ProcessEvent", &luna_wrapper_wxProcess::_bind_base_ProcessEvent},
	{"base_SetNextHandler", &luna_wrapper_wxProcess::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxProcess::_bind_base_SetPreviousHandler},
	{"base_OnTerminate", &luna_wrapper_wxProcess::_bind_base_OnTerminate},
	{"fromVoid", &luna_wrapper_wxProcess::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxProcess::_bind_asVoid},
	{"getTable", &luna_wrapper_wxProcess::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxProcess >::converters[] = {
	{"wxObject", &luna_wrapper_wxProcess::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxProcess >::enumValues[] = {
	{0,0}
};


