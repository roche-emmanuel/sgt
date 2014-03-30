#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTaskBarIconEvent.h>

class luna_wrapper_wxTaskBarIconEvent {
public:
	typedef Luna< wxTaskBarIconEvent > luna_t;

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

		wxTaskBarIconEvent* self= (wxTaskBarIconEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTaskBarIconEvent >::push(L,self,false);
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
		//wxTaskBarIconEvent* ptr= dynamic_cast< wxTaskBarIconEvent* >(Luna< wxObject >::check(L,1));
		wxTaskBarIconEvent* ptr= luna_caster< wxObject, wxTaskBarIconEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTaskBarIconEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
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
	// wxTaskBarIconEvent::wxTaskBarIconEvent(lua_Table * data, int evtType, wxTaskBarIcon * tbIcon)
	static wxTaskBarIconEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxTaskBarIconEvent::wxTaskBarIconEvent(lua_Table * data, int evtType, wxTaskBarIcon * tbIcon) function, expected prototype:\nwxTaskBarIconEvent::wxTaskBarIconEvent(lua_Table * data, int evtType, wxTaskBarIcon * tbIcon)\nClass arguments details:\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int evtType=(int)lua_tointeger(L,2);
		wxTaskBarIcon* tbIcon=(Luna< wxObject >::checkSubType< wxTaskBarIcon >(L,3));

		return new wrapper_wxTaskBarIconEvent(L,NULL, evtType, tbIcon);
	}


	// Function binds:
	// wxClassInfo * wxTaskBarIconEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTaskBarIconEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTaskBarIconEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTaskBarIconEvent* self=Luna< wxObject >::checkSubType< wxTaskBarIconEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTaskBarIconEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxTaskBarIconEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxTaskBarIconEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxTaskBarIconEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxTaskBarIconEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTaskBarIconEvent* self=Luna< wxObject >::checkSubType< wxTaskBarIconEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxTaskBarIconEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxTaskBarIconEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxTaskBarIconEvent* LunaTraits< wxTaskBarIconEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTaskBarIconEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxTaskBarIconEvent >::_bind_dtor(wxTaskBarIconEvent* obj) {
	delete obj;
}

const char LunaTraits< wxTaskBarIconEvent >::className[] = "wxTaskBarIconEvent";
const char LunaTraits< wxTaskBarIconEvent >::fullName[] = "wxTaskBarIconEvent";
const char LunaTraits< wxTaskBarIconEvent >::moduleName[] = "wx";
const char* LunaTraits< wxTaskBarIconEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxTaskBarIconEvent >::hash = 93929872;
const int LunaTraits< wxTaskBarIconEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTaskBarIconEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxTaskBarIconEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxTaskBarIconEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxTaskBarIconEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTaskBarIconEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTaskBarIconEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTaskBarIconEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxTaskBarIconEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTaskBarIconEvent >::enumValues[] = {
	{0,0}
};


