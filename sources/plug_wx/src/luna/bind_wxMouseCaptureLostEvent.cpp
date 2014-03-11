#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMouseCaptureLostEvent.h>

class luna_wrapper_wxMouseCaptureLostEvent {
public:
	typedef Luna< wxMouseCaptureLostEvent > luna_t;

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

		wxMouseCaptureLostEvent* self= (wxMouseCaptureLostEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMouseCaptureLostEvent >::push(L,self,false);
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
		//wxMouseCaptureLostEvent* ptr= dynamic_cast< wxMouseCaptureLostEvent* >(Luna< wxObject >::check(L,1));
		wxMouseCaptureLostEvent* ptr= luna_caster< wxObject, wxMouseCaptureLostEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMouseCaptureLostEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// wxMouseCaptureLostEvent::wxMouseCaptureLostEvent(lua_Table * data, int windowId = 0)
	static wxMouseCaptureLostEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxMouseCaptureLostEvent::wxMouseCaptureLostEvent(lua_Table * data, int windowId = 0) function, expected prototype:\nwxMouseCaptureLostEvent::wxMouseCaptureLostEvent(lua_Table * data, int windowId = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int windowId=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wrapper_wxMouseCaptureLostEvent(L,NULL, windowId);
	}


	// Function binds:
	// wxClassInfo * wxMouseCaptureLostEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMouseCaptureLostEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMouseCaptureLostEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMouseCaptureLostEvent* self=Luna< wxObject >::checkSubType< wxMouseCaptureLostEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMouseCaptureLostEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMouseCaptureLostEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxMouseCaptureLostEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxMouseCaptureLostEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxMouseCaptureLostEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMouseCaptureLostEvent* self=Luna< wxObject >::checkSubType< wxMouseCaptureLostEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxMouseCaptureLostEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxMouseCaptureLostEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMouseCaptureLostEvent* LunaTraits< wxMouseCaptureLostEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMouseCaptureLostEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxMouseCaptureLostEvent >::_bind_dtor(wxMouseCaptureLostEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMouseCaptureLostEvent >::className[] = "wxMouseCaptureLostEvent";
const char LunaTraits< wxMouseCaptureLostEvent >::fullName[] = "wxMouseCaptureLostEvent";
const char LunaTraits< wxMouseCaptureLostEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMouseCaptureLostEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMouseCaptureLostEvent >::hash = 86144117;
const int LunaTraits< wxMouseCaptureLostEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMouseCaptureLostEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxMouseCaptureLostEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxMouseCaptureLostEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxMouseCaptureLostEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMouseCaptureLostEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMouseCaptureLostEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMouseCaptureLostEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMouseCaptureLostEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMouseCaptureLostEvent >::enumValues[] = {
	{0,0}
};


