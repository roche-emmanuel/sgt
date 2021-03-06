#include <plug_common.h>

#include <luna/wrappers/wrapper_wxClipboardTextEvent.h>

class luna_wrapper_wxClipboardTextEvent {
public:
	typedef Luna< wxClipboardTextEvent > luna_t;

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

		wxClipboardTextEvent* self= (wxClipboardTextEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxClipboardTextEvent >::push(L,self,false);
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
		//wxClipboardTextEvent* ptr= dynamic_cast< wxClipboardTextEvent* >(Luna< wxObject >::check(L,1));
		wxClipboardTextEvent* ptr= luna_caster< wxObject, wxClipboardTextEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxClipboardTextEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEventCategory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxClipboardTextEvent::wxClipboardTextEvent(int commandType = wxEVT_NULL, int id = 0)
	static wxClipboardTextEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxClipboardTextEvent::wxClipboardTextEvent(int commandType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxClipboardTextEvent::wxClipboardTextEvent(int commandType = wxEVT_NULL, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wxClipboardTextEvent(commandType, id);
	}

	// wxClipboardTextEvent::wxClipboardTextEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0)
	static wxClipboardTextEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxClipboardTextEvent::wxClipboardTextEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxClipboardTextEvent::wxClipboardTextEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxClipboardTextEvent(L,NULL, commandType, id);
	}

	// Overload binder for wxClipboardTextEvent::wxClipboardTextEvent
	static wxClipboardTextEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxClipboardTextEvent, cannot match any of the overloads for function wxClipboardTextEvent:\n  wxClipboardTextEvent(int, int)\n  wxClipboardTextEvent(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// wxClassInfo * wxClipboardTextEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxClipboardTextEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxClipboardTextEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboardTextEvent* self=Luna< wxObject >::checkSubType< wxClipboardTextEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxClipboardTextEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxClipboardTextEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxClipboardTextEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxClipboardTextEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxClipboardTextEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboardTextEvent* self=Luna< wxObject >::checkSubType< wxClipboardTextEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxClipboardTextEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxClipboardTextEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxClipboardTextEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxClipboardTextEvent::base_Clone() const function, expected prototype:\nwxEvent * wxClipboardTextEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxClipboardTextEvent* self=Luna< wxObject >::checkSubType< wxClipboardTextEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxClipboardTextEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxClipboardTextEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxClipboardTextEvent* LunaTraits< wxClipboardTextEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxClipboardTextEvent::_bind_ctor(L);
}

void LunaTraits< wxClipboardTextEvent >::_bind_dtor(wxClipboardTextEvent* obj) {
	delete obj;
}

const char LunaTraits< wxClipboardTextEvent >::className[] = "wxClipboardTextEvent";
const char LunaTraits< wxClipboardTextEvent >::fullName[] = "wxClipboardTextEvent";
const char LunaTraits< wxClipboardTextEvent >::moduleName[] = "wx";
const char* LunaTraits< wxClipboardTextEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxClipboardTextEvent >::hash = 44745418;
const int LunaTraits< wxClipboardTextEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxClipboardTextEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxClipboardTextEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxClipboardTextEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxClipboardTextEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxClipboardTextEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxClipboardTextEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxClipboardTextEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxClipboardTextEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxClipboardTextEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxClipboardTextEvent >::enumValues[] = {
	{0,0}
};


