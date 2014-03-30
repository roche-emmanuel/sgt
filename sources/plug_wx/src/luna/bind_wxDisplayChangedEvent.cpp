#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDisplayChangedEvent.h>

class luna_wrapper_wxDisplayChangedEvent {
public:
	typedef Luna< wxDisplayChangedEvent > luna_t;

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

		wxDisplayChangedEvent* self= (wxDisplayChangedEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDisplayChangedEvent >::push(L,self,false);
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
		//wxDisplayChangedEvent* ptr= dynamic_cast< wxDisplayChangedEvent* >(Luna< wxObject >::check(L,1));
		wxDisplayChangedEvent* ptr= luna_caster< wxObject, wxDisplayChangedEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDisplayChangedEvent >::push(L,ptr,false);
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
	// wxDisplayChangedEvent::wxDisplayChangedEvent(lua_Table * data)
	static wxDisplayChangedEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDisplayChangedEvent::wxDisplayChangedEvent(lua_Table * data) function, expected prototype:\nwxDisplayChangedEvent::wxDisplayChangedEvent(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxDisplayChangedEvent(L,NULL);
	}


	// Function binds:
	// wxClassInfo * wxDisplayChangedEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxDisplayChangedEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxDisplayChangedEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDisplayChangedEvent* self=Luna< wxObject >::checkSubType< wxDisplayChangedEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxDisplayChangedEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxDisplayChangedEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxDisplayChangedEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxDisplayChangedEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxDisplayChangedEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDisplayChangedEvent* self=Luna< wxObject >::checkSubType< wxDisplayChangedEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxDisplayChangedEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxDisplayChangedEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxDisplayChangedEvent* LunaTraits< wxDisplayChangedEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDisplayChangedEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxDisplayChangedEvent >::_bind_dtor(wxDisplayChangedEvent* obj) {
	delete obj;
}

const char LunaTraits< wxDisplayChangedEvent >::className[] = "wxDisplayChangedEvent";
const char LunaTraits< wxDisplayChangedEvent >::fullName[] = "wxDisplayChangedEvent";
const char LunaTraits< wxDisplayChangedEvent >::moduleName[] = "wx";
const char* LunaTraits< wxDisplayChangedEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxDisplayChangedEvent >::hash = 53874927;
const int LunaTraits< wxDisplayChangedEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxDisplayChangedEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxDisplayChangedEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxDisplayChangedEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxDisplayChangedEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDisplayChangedEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDisplayChangedEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDisplayChangedEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxDisplayChangedEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDisplayChangedEvent >::enumValues[] = {
	{0,0}
};


