#include <plug_common.h>

#include <luna/wrappers/wrapper_wxInitDialogEvent.h>

class luna_wrapper_wxInitDialogEvent {
public:
	typedef Luna< wxInitDialogEvent > luna_t;

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

		wxInitDialogEvent* self= (wxInitDialogEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxInitDialogEvent >::push(L,self,false);
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
		//wxInitDialogEvent* ptr= dynamic_cast< wxInitDialogEvent* >(Luna< wxObject >::check(L,1));
		wxInitDialogEvent* ptr= luna_caster< wxObject, wxInitDialogEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxInitDialogEvent >::push(L,ptr,false);
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
	// wxInitDialogEvent::wxInitDialogEvent(lua_Table * data, int id = 0)
	static wxInitDialogEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxInitDialogEvent::wxInitDialogEvent(lua_Table * data, int id = 0) function, expected prototype:\nwxInitDialogEvent::wxInitDialogEvent(lua_Table * data, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wrapper_wxInitDialogEvent(L,NULL, id);
	}


	// Function binds:
	// wxClassInfo * wxInitDialogEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxInitDialogEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxInitDialogEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxInitDialogEvent* self=Luna< wxObject >::checkSubType< wxInitDialogEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxInitDialogEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxInitDialogEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxInitDialogEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxInitDialogEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxInitDialogEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxInitDialogEvent* self=Luna< wxObject >::checkSubType< wxInitDialogEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxInitDialogEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxInitDialogEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxInitDialogEvent* LunaTraits< wxInitDialogEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxInitDialogEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxInitDialogEvent >::_bind_dtor(wxInitDialogEvent* obj) {
	delete obj;
}

const char LunaTraits< wxInitDialogEvent >::className[] = "wxInitDialogEvent";
const char LunaTraits< wxInitDialogEvent >::fullName[] = "wxInitDialogEvent";
const char LunaTraits< wxInitDialogEvent >::moduleName[] = "wx";
const char* LunaTraits< wxInitDialogEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxInitDialogEvent >::hash = 96243584;
const int LunaTraits< wxInitDialogEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxInitDialogEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxInitDialogEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxInitDialogEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxInitDialogEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxInitDialogEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxInitDialogEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxInitDialogEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxInitDialogEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxInitDialogEvent >::enumValues[] = {
	{0,0}
};


