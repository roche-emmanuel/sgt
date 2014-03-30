#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSysColourChangedEvent.h>

class luna_wrapper_wxSysColourChangedEvent {
public:
	typedef Luna< wxSysColourChangedEvent > luna_t;

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

		wxSysColourChangedEvent* self= (wxSysColourChangedEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSysColourChangedEvent >::push(L,self,false);
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
		//wxSysColourChangedEvent* ptr= dynamic_cast< wxSysColourChangedEvent* >(Luna< wxObject >::check(L,1));
		wxSysColourChangedEvent* ptr= luna_caster< wxObject, wxSysColourChangedEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSysColourChangedEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSysColourChangedEvent::wxSysColourChangedEvent(lua_Table * data)
	static wxSysColourChangedEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxSysColourChangedEvent::wxSysColourChangedEvent(lua_Table * data) function, expected prototype:\nwxSysColourChangedEvent::wxSysColourChangedEvent(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxSysColourChangedEvent(L,NULL);
	}


	// Function binds:
	// wxClassInfo * wxSysColourChangedEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSysColourChangedEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSysColourChangedEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSysColourChangedEvent* self=Luna< wxObject >::checkSubType< wxSysColourChangedEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSysColourChangedEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSysColourChangedEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxSysColourChangedEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxSysColourChangedEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxSysColourChangedEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSysColourChangedEvent* self=Luna< wxObject >::checkSubType< wxSysColourChangedEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxSysColourChangedEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxSysColourChangedEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSysColourChangedEvent* LunaTraits< wxSysColourChangedEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSysColourChangedEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxSysColourChangedEvent >::_bind_dtor(wxSysColourChangedEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSysColourChangedEvent >::className[] = "wxSysColourChangedEvent";
const char LunaTraits< wxSysColourChangedEvent >::fullName[] = "wxSysColourChangedEvent";
const char LunaTraits< wxSysColourChangedEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSysColourChangedEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxSysColourChangedEvent >::hash = 19204438;
const int LunaTraits< wxSysColourChangedEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSysColourChangedEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxSysColourChangedEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxSysColourChangedEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxSysColourChangedEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSysColourChangedEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSysColourChangedEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSysColourChangedEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSysColourChangedEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSysColourChangedEvent >::enumValues[] = {
	{0,0}
};


