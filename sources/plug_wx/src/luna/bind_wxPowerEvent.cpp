#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPowerEvent.h>

class luna_wrapper_wxPowerEvent {
public:
	typedef Luna< wxPowerEvent > luna_t;

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

		wxPowerEvent* self= (wxPowerEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPowerEvent >::push(L,self,false);
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
		//wxPowerEvent* ptr= dynamic_cast< wxPowerEvent* >(Luna< wxObject >::check(L,1));
		wxPowerEvent* ptr= luna_caster< wxObject, wxPowerEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPowerEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_Veto(lua_State *L) {
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

	// Function binds:
	// void wxPowerEvent::Veto()
	static int _bind_Veto(lua_State *L) {
		if (!_lg_typecheck_Veto(L)) {
			luaL_error(L, "luna typecheck failed in void wxPowerEvent::Veto() function, expected prototype:\nvoid wxPowerEvent::Veto()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPowerEvent* self=Luna< wxObject >::checkSubType< wxPowerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPowerEvent::Veto(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Veto();

		return 0;
	}

	// wxClassInfo * wxPowerEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPowerEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPowerEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPowerEvent* self=Luna< wxObject >::checkSubType< wxPowerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPowerEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPowerEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxPowerEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxPowerEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxPowerEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPowerEvent* self=Luna< wxObject >::checkSubType< wxPowerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxPowerEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxPowerEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxPowerEvent* LunaTraits< wxPowerEvent >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxPowerEvent >::_bind_dtor(wxPowerEvent* obj) {
	delete obj;
}

const char LunaTraits< wxPowerEvent >::className[] = "wxPowerEvent";
const char LunaTraits< wxPowerEvent >::fullName[] = "wxPowerEvent";
const char LunaTraits< wxPowerEvent >::moduleName[] = "wx";
const char* LunaTraits< wxPowerEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxPowerEvent >::hash = 32451441;
const int LunaTraits< wxPowerEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPowerEvent >::methods[] = {
	{"Veto", &luna_wrapper_wxPowerEvent::_bind_Veto},
	{"base_GetClassInfo", &luna_wrapper_wxPowerEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxPowerEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxPowerEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPowerEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPowerEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPowerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxPowerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPowerEvent >::enumValues[] = {
	{0,0}
};


