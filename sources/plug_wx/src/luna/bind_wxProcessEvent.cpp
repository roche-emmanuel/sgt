#include <plug_common.h>

#include <luna/wrappers/wrapper_wxProcessEvent.h>

class luna_wrapper_wxProcessEvent {
public:
	typedef Luna< wxProcessEvent > luna_t;

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

		wxProcessEvent* self= (wxProcessEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxProcessEvent >::push(L,self,false);
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
		//wxProcessEvent* ptr= dynamic_cast< wxProcessEvent* >(Luna< wxObject >::check(L,1));
		wxProcessEvent* ptr= luna_caster< wxObject, wxProcessEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxProcessEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetExitCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxProcessEvent::wxProcessEvent(lua_Table * data, int id = 0, int pid = 0, int exitcode = 0)
	static wxProcessEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxProcessEvent::wxProcessEvent(lua_Table * data, int id = 0, int pid = 0, int exitcode = 0) function, expected prototype:\nwxProcessEvent::wxProcessEvent(lua_Table * data, int id = 0, int pid = 0, int exitcode = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int pid=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int exitcode=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		return new wrapper_wxProcessEvent(L,NULL, id, pid, exitcode);
	}


	// Function binds:
	// int wxProcessEvent::GetExitCode()
	static int _bind_GetExitCode(lua_State *L) {
		if (!_lg_typecheck_GetExitCode(L)) {
			luaL_error(L, "luna typecheck failed in int wxProcessEvent::GetExitCode() function, expected prototype:\nint wxProcessEvent::GetExitCode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcessEvent* self=Luna< wxObject >::checkSubType< wxProcessEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxProcessEvent::GetExitCode(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetExitCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxProcessEvent::GetPid()
	static int _bind_GetPid(lua_State *L) {
		if (!_lg_typecheck_GetPid(L)) {
			luaL_error(L, "luna typecheck failed in int wxProcessEvent::GetPid() function, expected prototype:\nint wxProcessEvent::GetPid()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcessEvent* self=Luna< wxObject >::checkSubType< wxProcessEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxProcessEvent::GetPid(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPid();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxProcessEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxProcessEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxProcessEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcessEvent* self=Luna< wxObject >::checkSubType< wxProcessEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxProcessEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxProcessEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxProcessEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxProcessEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxProcessEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProcessEvent* self=Luna< wxObject >::checkSubType< wxProcessEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxProcessEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxProcessEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxProcessEvent* LunaTraits< wxProcessEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxProcessEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxProcessEvent >::_bind_dtor(wxProcessEvent* obj) {
	delete obj;
}

const char LunaTraits< wxProcessEvent >::className[] = "wxProcessEvent";
const char LunaTraits< wxProcessEvent >::fullName[] = "wxProcessEvent";
const char LunaTraits< wxProcessEvent >::moduleName[] = "wx";
const char* LunaTraits< wxProcessEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxProcessEvent >::hash = 24704651;
const int LunaTraits< wxProcessEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxProcessEvent >::methods[] = {
	{"GetExitCode", &luna_wrapper_wxProcessEvent::_bind_GetExitCode},
	{"GetPid", &luna_wrapper_wxProcessEvent::_bind_GetPid},
	{"base_GetClassInfo", &luna_wrapper_wxProcessEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxProcessEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxProcessEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxProcessEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxProcessEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxProcessEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxProcessEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxProcessEvent >::enumValues[] = {
	{0,0}
};


