#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMaximizeEvent.h>

class luna_wrapper_wxMaximizeEvent {
public:
	typedef Luna< wxMaximizeEvent > luna_t;

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

		wxMaximizeEvent* self= (wxMaximizeEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMaximizeEvent >::push(L,self,false);
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
		//wxMaximizeEvent* ptr= dynamic_cast< wxMaximizeEvent* >(Luna< wxObject >::check(L,1));
		wxMaximizeEvent* ptr= luna_caster< wxObject, wxMaximizeEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMaximizeEvent >::push(L,ptr,false);
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
	// wxMaximizeEvent::wxMaximizeEvent(lua_Table * data, int id = 0)
	static wxMaximizeEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxMaximizeEvent::wxMaximizeEvent(lua_Table * data, int id = 0) function, expected prototype:\nwxMaximizeEvent::wxMaximizeEvent(lua_Table * data, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wrapper_wxMaximizeEvent(L,NULL, id);
	}


	// Function binds:
	// wxClassInfo * wxMaximizeEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMaximizeEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMaximizeEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMaximizeEvent* self=Luna< wxObject >::checkSubType< wxMaximizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMaximizeEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMaximizeEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxMaximizeEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxMaximizeEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxMaximizeEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMaximizeEvent* self=Luna< wxObject >::checkSubType< wxMaximizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxMaximizeEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxMaximizeEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMaximizeEvent* LunaTraits< wxMaximizeEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMaximizeEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxMaximizeEvent >::_bind_dtor(wxMaximizeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMaximizeEvent >::className[] = "wxMaximizeEvent";
const char LunaTraits< wxMaximizeEvent >::fullName[] = "wxMaximizeEvent";
const char LunaTraits< wxMaximizeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMaximizeEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMaximizeEvent >::hash = 65226599;
const int LunaTraits< wxMaximizeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMaximizeEvent >::methods[] = {
	{"base_GetClassInfo", &luna_wrapper_wxMaximizeEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxMaximizeEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxMaximizeEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMaximizeEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMaximizeEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMaximizeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMaximizeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMaximizeEvent >::enumValues[] = {
	{0,0}
};


