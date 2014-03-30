#include <plug_common.h>

#include <luna/wrappers/wrapper_wxEventLoopBase.h>

class luna_wrapper_wxEventLoopBase {
public:
	typedef Luna< wxEventLoopBase > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxEventLoopBase,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77241040) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxEventLoopBase*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* rhs =(Luna< wxEventLoopBase >::check(L,2));
		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
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

		wxEventLoopBase* self= (wxEventLoopBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxEventLoopBase >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,77241040) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxEventLoopBase >::check(L,1));
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

		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxEventLoopBase");
		
		return luna_dynamicCast(L,converters,"wxEventLoopBase",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetActive(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,77241040)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsMain(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Run(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsRunning(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Exit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Pending(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Dispatch(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DispatchTimeout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WakeUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WakeUpIdle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ProcessIdle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsYielding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Yield(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_YieldFor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEventAllowedInsideYield(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_WakeUpIdle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ProcessIdle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsYielding(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsEventAllowedInsideYield(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static wxEventLoopBase * wxEventLoopBase::GetActive()
	static int _bind_GetActive(lua_State *L) {
		if (!_lg_typecheck_GetActive(L)) {
			luaL_error(L, "luna typecheck failed in static wxEventLoopBase * wxEventLoopBase::GetActive() function, expected prototype:\nstatic wxEventLoopBase * wxEventLoopBase::GetActive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase * lret = wxEventLoopBase::GetActive();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEventLoopBase >::push(L,lret,false);

		return 1;
	}

	// static void wxEventLoopBase::SetActive(wxEventLoopBase * loop)
	static int _bind_SetActive(lua_State *L) {
		if (!_lg_typecheck_SetActive(L)) {
			luaL_error(L, "luna typecheck failed in static void wxEventLoopBase::SetActive(wxEventLoopBase * loop) function, expected prototype:\nstatic void wxEventLoopBase::SetActive(wxEventLoopBase * loop)\nClass arguments details:\narg 1 ID = 77241040\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventLoopBase* loop=(Luna< wxEventLoopBase >::check(L,1));

		wxEventLoopBase::SetActive(loop);

		return 0;
	}

	// bool wxEventLoopBase::IsMain() const
	static int _bind_IsMain(lua_State *L) {
		if (!_lg_typecheck_IsMain(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::IsMain() const function, expected prototype:\nbool wxEventLoopBase::IsMain() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::IsMain() const. Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsMain();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxEventLoopBase::Run()
	static int _bind_Run(lua_State *L) {
		if (!_lg_typecheck_Run(L)) {
			luaL_error(L, "luna typecheck failed in int wxEventLoopBase::Run() function, expected prototype:\nint wxEventLoopBase::Run()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxEventLoopBase::Run(). Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Run();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxEventLoopBase::IsRunning() const
	static int _bind_IsRunning(lua_State *L) {
		if (!_lg_typecheck_IsRunning(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::IsRunning() const function, expected prototype:\nbool wxEventLoopBase::IsRunning() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::IsRunning() const. Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsRunning();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEventLoopBase::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::IsOk() const function, expected prototype:\nbool wxEventLoopBase::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxEventLoopBase::Exit(int rc = 0)
	static int _bind_Exit(lua_State *L) {
		if (!_lg_typecheck_Exit(L)) {
			luaL_error(L, "luna typecheck failed in void wxEventLoopBase::Exit(int rc = 0) function, expected prototype:\nvoid wxEventLoopBase::Exit(int rc = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int rc=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEventLoopBase::Exit(int). Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Exit(rc);

		return 0;
	}

	// bool wxEventLoopBase::Pending() const
	static int _bind_Pending(lua_State *L) {
		if (!_lg_typecheck_Pending(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::Pending() const function, expected prototype:\nbool wxEventLoopBase::Pending() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::Pending() const. Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Pending();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEventLoopBase::Dispatch()
	static int _bind_Dispatch(lua_State *L) {
		if (!_lg_typecheck_Dispatch(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::Dispatch() function, expected prototype:\nbool wxEventLoopBase::Dispatch()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::Dispatch(). Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Dispatch();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxEventLoopBase::DispatchTimeout(unsigned long timeout)
	static int _bind_DispatchTimeout(lua_State *L) {
		if (!_lg_typecheck_DispatchTimeout(L)) {
			luaL_error(L, "luna typecheck failed in int wxEventLoopBase::DispatchTimeout(unsigned long timeout) function, expected prototype:\nint wxEventLoopBase::DispatchTimeout(unsigned long timeout)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long timeout=(unsigned long)lua_tonumber(L,2);

		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxEventLoopBase::DispatchTimeout(unsigned long). Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DispatchTimeout(timeout);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxEventLoopBase::WakeUp()
	static int _bind_WakeUp(lua_State *L) {
		if (!_lg_typecheck_WakeUp(L)) {
			luaL_error(L, "luna typecheck failed in void wxEventLoopBase::WakeUp() function, expected prototype:\nvoid wxEventLoopBase::WakeUp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEventLoopBase::WakeUp(). Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WakeUp();

		return 0;
	}

	// void wxEventLoopBase::WakeUpIdle()
	static int _bind_WakeUpIdle(lua_State *L) {
		if (!_lg_typecheck_WakeUpIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxEventLoopBase::WakeUpIdle() function, expected prototype:\nvoid wxEventLoopBase::WakeUpIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEventLoopBase::WakeUpIdle(). Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WakeUpIdle();

		return 0;
	}

	// bool wxEventLoopBase::ProcessIdle()
	static int _bind_ProcessIdle(lua_State *L) {
		if (!_lg_typecheck_ProcessIdle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::ProcessIdle() function, expected prototype:\nbool wxEventLoopBase::ProcessIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::ProcessIdle(). Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ProcessIdle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEventLoopBase::IsYielding() const
	static int _bind_IsYielding(lua_State *L) {
		if (!_lg_typecheck_IsYielding(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::IsYielding() const function, expected prototype:\nbool wxEventLoopBase::IsYielding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::IsYielding() const. Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsYielding();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEventLoopBase::Yield(bool onlyIfNeeded = false)
	static int _bind_Yield(lua_State *L) {
		if (!_lg_typecheck_Yield(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::Yield(bool onlyIfNeeded = false) function, expected prototype:\nbool wxEventLoopBase::Yield(bool onlyIfNeeded = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool onlyIfNeeded=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::Yield(bool). Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Yield(onlyIfNeeded);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEventLoopBase::YieldFor(long eventsToProcess)
	static int _bind_YieldFor(lua_State *L) {
		if (!_lg_typecheck_YieldFor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::YieldFor(long eventsToProcess) function, expected prototype:\nbool wxEventLoopBase::YieldFor(long eventsToProcess)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long eventsToProcess=(long)lua_tonumber(L,2);

		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::YieldFor(long). Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->YieldFor(eventsToProcess);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEventLoopBase::IsEventAllowedInsideYield(wxEventCategory cat) const
	static int _bind_IsEventAllowedInsideYield(lua_State *L) {
		if (!_lg_typecheck_IsEventAllowedInsideYield(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::IsEventAllowedInsideYield(wxEventCategory cat) const function, expected prototype:\nbool wxEventLoopBase::IsEventAllowedInsideYield(wxEventCategory cat) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventCategory cat=(wxEventCategory)lua_tointeger(L,2);

		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::IsEventAllowedInsideYield(wxEventCategory) const. Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEventAllowedInsideYield(cat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEventLoopBase::base_IsOk() const
	static int _bind_base_IsOk(lua_State *L) {
		if (!_lg_typecheck_base_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::base_IsOk() const function, expected prototype:\nbool wxEventLoopBase::base_IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::base_IsOk() const. Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxEventLoopBase::IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxEventLoopBase::base_WakeUpIdle()
	static int _bind_base_WakeUpIdle(lua_State *L) {
		if (!_lg_typecheck_base_WakeUpIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxEventLoopBase::base_WakeUpIdle() function, expected prototype:\nvoid wxEventLoopBase::base_WakeUpIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxEventLoopBase::base_WakeUpIdle(). Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxEventLoopBase::WakeUpIdle();

		return 0;
	}

	// bool wxEventLoopBase::base_ProcessIdle()
	static int _bind_base_ProcessIdle(lua_State *L) {
		if (!_lg_typecheck_base_ProcessIdle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::base_ProcessIdle() function, expected prototype:\nbool wxEventLoopBase::base_ProcessIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::base_ProcessIdle(). Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxEventLoopBase::ProcessIdle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEventLoopBase::base_IsYielding() const
	static int _bind_base_IsYielding(lua_State *L) {
		if (!_lg_typecheck_base_IsYielding(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::base_IsYielding() const function, expected prototype:\nbool wxEventLoopBase::base_IsYielding() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::base_IsYielding() const. Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxEventLoopBase::IsYielding();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxEventLoopBase::base_IsEventAllowedInsideYield(wxEventCategory cat) const
	static int _bind_base_IsEventAllowedInsideYield(lua_State *L) {
		if (!_lg_typecheck_base_IsEventAllowedInsideYield(L)) {
			luaL_error(L, "luna typecheck failed in bool wxEventLoopBase::base_IsEventAllowedInsideYield(wxEventCategory cat) const function, expected prototype:\nbool wxEventLoopBase::base_IsEventAllowedInsideYield(wxEventCategory cat) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEventCategory cat=(wxEventCategory)lua_tointeger(L,2);

		wxEventLoopBase* self=(Luna< wxEventLoopBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxEventLoopBase::base_IsEventAllowedInsideYield(wxEventCategory) const. Got : '%s'\n%s",typeid(Luna< wxEventLoopBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxEventLoopBase::IsEventAllowedInsideYield(cat);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxEventLoopBase* LunaTraits< wxEventLoopBase >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int wxEventLoopBase::Run()
	// void wxEventLoopBase::Exit(int rc = 0)
	// bool wxEventLoopBase::Pending() const
	// bool wxEventLoopBase::Dispatch()
	// int wxEventLoopBase::DispatchTimeout(unsigned long timeout)
	// void wxEventLoopBase::WakeUp()
}

void LunaTraits< wxEventLoopBase >::_bind_dtor(wxEventLoopBase* obj) {
	delete obj;
}

const char LunaTraits< wxEventLoopBase >::className[] = "wxEventLoopBase";
const char LunaTraits< wxEventLoopBase >::fullName[] = "wxEventLoopBase";
const char LunaTraits< wxEventLoopBase >::moduleName[] = "wx";
const char* LunaTraits< wxEventLoopBase >::parents[] = {0};
const int LunaTraits< wxEventLoopBase >::hash = 77241040;
const int LunaTraits< wxEventLoopBase >::uniqueIDs[] = {77241040,0};

luna_RegType LunaTraits< wxEventLoopBase >::methods[] = {
	{"GetActive", &luna_wrapper_wxEventLoopBase::_bind_GetActive},
	{"SetActive", &luna_wrapper_wxEventLoopBase::_bind_SetActive},
	{"IsMain", &luna_wrapper_wxEventLoopBase::_bind_IsMain},
	{"Run", &luna_wrapper_wxEventLoopBase::_bind_Run},
	{"IsRunning", &luna_wrapper_wxEventLoopBase::_bind_IsRunning},
	{"IsOk", &luna_wrapper_wxEventLoopBase::_bind_IsOk},
	{"Exit", &luna_wrapper_wxEventLoopBase::_bind_Exit},
	{"Pending", &luna_wrapper_wxEventLoopBase::_bind_Pending},
	{"Dispatch", &luna_wrapper_wxEventLoopBase::_bind_Dispatch},
	{"DispatchTimeout", &luna_wrapper_wxEventLoopBase::_bind_DispatchTimeout},
	{"WakeUp", &luna_wrapper_wxEventLoopBase::_bind_WakeUp},
	{"WakeUpIdle", &luna_wrapper_wxEventLoopBase::_bind_WakeUpIdle},
	{"ProcessIdle", &luna_wrapper_wxEventLoopBase::_bind_ProcessIdle},
	{"IsYielding", &luna_wrapper_wxEventLoopBase::_bind_IsYielding},
	{"Yield", &luna_wrapper_wxEventLoopBase::_bind_Yield},
	{"YieldFor", &luna_wrapper_wxEventLoopBase::_bind_YieldFor},
	{"IsEventAllowedInsideYield", &luna_wrapper_wxEventLoopBase::_bind_IsEventAllowedInsideYield},
	{"base_IsOk", &luna_wrapper_wxEventLoopBase::_bind_base_IsOk},
	{"base_WakeUpIdle", &luna_wrapper_wxEventLoopBase::_bind_base_WakeUpIdle},
	{"base_ProcessIdle", &luna_wrapper_wxEventLoopBase::_bind_base_ProcessIdle},
	{"base_IsYielding", &luna_wrapper_wxEventLoopBase::_bind_base_IsYielding},
	{"base_IsEventAllowedInsideYield", &luna_wrapper_wxEventLoopBase::_bind_base_IsEventAllowedInsideYield},
	{"dynCast", &luna_wrapper_wxEventLoopBase::_bind_dynCast},
	{"__eq", &luna_wrapper_wxEventLoopBase::_bind___eq},
	{"fromVoid", &luna_wrapper_wxEventLoopBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxEventLoopBase::_bind_asVoid},
	{"getTable", &luna_wrapper_wxEventLoopBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxEventLoopBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxEventLoopBase >::enumValues[] = {
	{0,0}
};


