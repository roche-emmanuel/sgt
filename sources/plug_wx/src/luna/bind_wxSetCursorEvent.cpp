#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSetCursorEvent.h>

class luna_wrapper_wxSetCursorEvent {
public:
	typedef Luna< wxSetCursorEvent > luna_t;

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

		wxSetCursorEvent* self= (wxSetCursorEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSetCursorEvent >::push(L,self,false);
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
		//wxSetCursorEvent* ptr= dynamic_cast< wxSetCursorEvent* >(Luna< wxObject >::check(L,1));
		wxSetCursorEvent* ptr= luna_caster< wxObject, wxSetCursorEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSetCursorEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCursor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasCursor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
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
	// wxSetCursorEvent::wxSetCursorEvent(lua_Table * data, int x = 0, int y = 0)
	static wxSetCursorEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxSetCursorEvent::wxSetCursorEvent(lua_Table * data, int x = 0, int y = 0) function, expected prototype:\nwxSetCursorEvent::wxSetCursorEvent(lua_Table * data, int x = 0, int y = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int y=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxSetCursorEvent(L,NULL, x, y);
	}


	// Function binds:
	// const wxCursor & wxSetCursorEvent::GetCursor() const
	static int _bind_GetCursor(lua_State *L) {
		if (!_lg_typecheck_GetCursor(L)) {
			luaL_error(L, "luna typecheck failed in const wxCursor & wxSetCursorEvent::GetCursor() const function, expected prototype:\nconst wxCursor & wxSetCursorEvent::GetCursor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSetCursorEvent* self=Luna< wxObject >::checkSubType< wxSetCursorEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxCursor & wxSetCursorEvent::GetCursor() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxCursor* lret = &self->GetCursor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCursor >::push(L,lret,false);

		return 1;
	}

	// int wxSetCursorEvent::GetX() const
	static int _bind_GetX(lua_State *L) {
		if (!_lg_typecheck_GetX(L)) {
			luaL_error(L, "luna typecheck failed in int wxSetCursorEvent::GetX() const function, expected prototype:\nint wxSetCursorEvent::GetX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSetCursorEvent* self=Luna< wxObject >::checkSubType< wxSetCursorEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSetCursorEvent::GetX() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSetCursorEvent::GetY() const
	static int _bind_GetY(lua_State *L) {
		if (!_lg_typecheck_GetY(L)) {
			luaL_error(L, "luna typecheck failed in int wxSetCursorEvent::GetY() const function, expected prototype:\nint wxSetCursorEvent::GetY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSetCursorEvent* self=Luna< wxObject >::checkSubType< wxSetCursorEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSetCursorEvent::GetY() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxSetCursorEvent::HasCursor() const
	static int _bind_HasCursor(lua_State *L) {
		if (!_lg_typecheck_HasCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSetCursorEvent::HasCursor() const function, expected prototype:\nbool wxSetCursorEvent::HasCursor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSetCursorEvent* self=Luna< wxObject >::checkSubType< wxSetCursorEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSetCursorEvent::HasCursor() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasCursor();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSetCursorEvent::SetCursor(const wxCursor & cursor)
	static int _bind_SetCursor(lua_State *L) {
		if (!_lg_typecheck_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in void wxSetCursorEvent::SetCursor(const wxCursor & cursor) function, expected prototype:\nvoid wxSetCursorEvent::SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxSetCursorEvent::SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxSetCursorEvent* self=Luna< wxObject >::checkSubType< wxSetCursorEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSetCursorEvent::SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCursor(cursor);

		return 0;
	}

	// wxClassInfo * wxSetCursorEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSetCursorEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSetCursorEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSetCursorEvent* self=Luna< wxObject >::checkSubType< wxSetCursorEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSetCursorEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSetCursorEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxSetCursorEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxSetCursorEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxSetCursorEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSetCursorEvent* self=Luna< wxObject >::checkSubType< wxSetCursorEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxSetCursorEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxSetCursorEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxSetCursorEvent* LunaTraits< wxSetCursorEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSetCursorEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxSetCursorEvent >::_bind_dtor(wxSetCursorEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSetCursorEvent >::className[] = "wxSetCursorEvent";
const char LunaTraits< wxSetCursorEvent >::fullName[] = "wxSetCursorEvent";
const char LunaTraits< wxSetCursorEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSetCursorEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxSetCursorEvent >::hash = 42186856;
const int LunaTraits< wxSetCursorEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSetCursorEvent >::methods[] = {
	{"GetCursor", &luna_wrapper_wxSetCursorEvent::_bind_GetCursor},
	{"GetX", &luna_wrapper_wxSetCursorEvent::_bind_GetX},
	{"GetY", &luna_wrapper_wxSetCursorEvent::_bind_GetY},
	{"HasCursor", &luna_wrapper_wxSetCursorEvent::_bind_HasCursor},
	{"SetCursor", &luna_wrapper_wxSetCursorEvent::_bind_SetCursor},
	{"base_GetClassInfo", &luna_wrapper_wxSetCursorEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxSetCursorEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxSetCursorEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSetCursorEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSetCursorEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSetCursorEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSetCursorEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSetCursorEvent >::enumValues[] = {
	{0,0}
};


