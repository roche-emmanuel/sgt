#include <plug_common.h>

#include <luna/wrappers/wrapper_wxIconizeEvent.h>

class luna_wrapper_wxIconizeEvent {
public:
	typedef Luna< wxIconizeEvent > luna_t;

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

		wxIconizeEvent* self= (wxIconizeEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxIconizeEvent >::push(L,self,false);
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
		//wxIconizeEvent* ptr= dynamic_cast< wxIconizeEvent* >(Luna< wxObject >::check(L,1));
		wxIconizeEvent* ptr= luna_caster< wxObject, wxIconizeEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxIconizeEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsIconized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Iconized(lua_State *L) {
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
	// wxIconizeEvent::wxIconizeEvent(lua_Table * data, int id = 0, bool iconized = true)
	static wxIconizeEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxIconizeEvent::wxIconizeEvent(lua_Table * data, int id = 0, bool iconized = true) function, expected prototype:\nwxIconizeEvent::wxIconizeEvent(lua_Table * data, int id = 0, bool iconized = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		bool iconized=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		return new wrapper_wxIconizeEvent(L,NULL, id, iconized);
	}


	// Function binds:
	// bool wxIconizeEvent::IsIconized() const
	static int _bind_IsIconized(lua_State *L) {
		if (!_lg_typecheck_IsIconized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxIconizeEvent::IsIconized() const function, expected prototype:\nbool wxIconizeEvent::IsIconized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIconizeEvent* self=Luna< wxObject >::checkSubType< wxIconizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxIconizeEvent::IsIconized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxIconizeEvent::Iconized() const
	static int _bind_Iconized(lua_State *L) {
		if (!_lg_typecheck_Iconized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxIconizeEvent::Iconized() const function, expected prototype:\nbool wxIconizeEvent::Iconized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIconizeEvent* self=Luna< wxObject >::checkSubType< wxIconizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxIconizeEvent::Iconized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Iconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxIconizeEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxIconizeEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxIconizeEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIconizeEvent* self=Luna< wxObject >::checkSubType< wxIconizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxIconizeEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxIconizeEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxIconizeEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxIconizeEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxIconizeEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxIconizeEvent* self=Luna< wxObject >::checkSubType< wxIconizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxIconizeEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxIconizeEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxIconizeEvent* LunaTraits< wxIconizeEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxIconizeEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxIconizeEvent >::_bind_dtor(wxIconizeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxIconizeEvent >::className[] = "wxIconizeEvent";
const char LunaTraits< wxIconizeEvent >::fullName[] = "wxIconizeEvent";
const char LunaTraits< wxIconizeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxIconizeEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxIconizeEvent >::hash = 42419818;
const int LunaTraits< wxIconizeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxIconizeEvent >::methods[] = {
	{"IsIconized", &luna_wrapper_wxIconizeEvent::_bind_IsIconized},
	{"Iconized", &luna_wrapper_wxIconizeEvent::_bind_Iconized},
	{"base_GetClassInfo", &luna_wrapper_wxIconizeEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxIconizeEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxIconizeEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxIconizeEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxIconizeEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxIconizeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxIconizeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxIconizeEvent >::enumValues[] = {
	{0,0}
};


