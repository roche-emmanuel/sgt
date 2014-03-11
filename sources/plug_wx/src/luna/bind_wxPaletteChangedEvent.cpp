#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPaletteChangedEvent.h>

class luna_wrapper_wxPaletteChangedEvent {
public:
	typedef Luna< wxPaletteChangedEvent > luna_t;

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

		wxPaletteChangedEvent* self= (wxPaletteChangedEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPaletteChangedEvent >::push(L,self,false);
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
		//wxPaletteChangedEvent* ptr= dynamic_cast< wxPaletteChangedEvent* >(Luna< wxObject >::check(L,1));
		wxPaletteChangedEvent* ptr= luna_caster< wxObject, wxPaletteChangedEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPaletteChangedEvent >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_SetChangedWindow(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChangedWindow(lua_State *L) {
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
	// wxPaletteChangedEvent::wxPaletteChangedEvent(lua_Table * data, int winid = 0)
	static wxPaletteChangedEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxPaletteChangedEvent::wxPaletteChangedEvent(lua_Table * data, int winid = 0) function, expected prototype:\nwxPaletteChangedEvent::wxPaletteChangedEvent(lua_Table * data, int winid = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int winid=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wrapper_wxPaletteChangedEvent(L,NULL, winid);
	}


	// Function binds:
	// void wxPaletteChangedEvent::SetChangedWindow(wxWindow * win)
	static int _bind_SetChangedWindow(lua_State *L) {
		if (!_lg_typecheck_SetChangedWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxPaletteChangedEvent::SetChangedWindow(wxWindow * win) function, expected prototype:\nvoid wxPaletteChangedEvent::SetChangedWindow(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxPaletteChangedEvent* self=Luna< wxObject >::checkSubType< wxPaletteChangedEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPaletteChangedEvent::SetChangedWindow(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetChangedWindow(win);

		return 0;
	}

	// wxWindow * wxPaletteChangedEvent::GetChangedWindow() const
	static int _bind_GetChangedWindow(lua_State *L) {
		if (!_lg_typecheck_GetChangedWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxPaletteChangedEvent::GetChangedWindow() const function, expected prototype:\nwxWindow * wxPaletteChangedEvent::GetChangedWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPaletteChangedEvent* self=Luna< wxObject >::checkSubType< wxPaletteChangedEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxPaletteChangedEvent::GetChangedWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetChangedWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxClassInfo * wxPaletteChangedEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPaletteChangedEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPaletteChangedEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPaletteChangedEvent* self=Luna< wxObject >::checkSubType< wxPaletteChangedEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPaletteChangedEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPaletteChangedEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxPaletteChangedEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxPaletteChangedEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxPaletteChangedEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPaletteChangedEvent* self=Luna< wxObject >::checkSubType< wxPaletteChangedEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxPaletteChangedEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxPaletteChangedEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxPaletteChangedEvent* LunaTraits< wxPaletteChangedEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPaletteChangedEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxPaletteChangedEvent >::_bind_dtor(wxPaletteChangedEvent* obj) {
	delete obj;
}

const char LunaTraits< wxPaletteChangedEvent >::className[] = "wxPaletteChangedEvent";
const char LunaTraits< wxPaletteChangedEvent >::fullName[] = "wxPaletteChangedEvent";
const char LunaTraits< wxPaletteChangedEvent >::moduleName[] = "wx";
const char* LunaTraits< wxPaletteChangedEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxPaletteChangedEvent >::hash = 38526120;
const int LunaTraits< wxPaletteChangedEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxPaletteChangedEvent >::methods[] = {
	{"SetChangedWindow", &luna_wrapper_wxPaletteChangedEvent::_bind_SetChangedWindow},
	{"GetChangedWindow", &luna_wrapper_wxPaletteChangedEvent::_bind_GetChangedWindow},
	{"base_GetClassInfo", &luna_wrapper_wxPaletteChangedEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxPaletteChangedEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxPaletteChangedEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPaletteChangedEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPaletteChangedEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPaletteChangedEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxPaletteChangedEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPaletteChangedEvent >::enumValues[] = {
	{0,0}
};


