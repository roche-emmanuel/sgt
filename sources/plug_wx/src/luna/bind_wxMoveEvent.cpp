#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMoveEvent.h>

class luna_wrapper_wxMoveEvent {
public:
	typedef Luna< wxMoveEvent > luna_t;

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

		wxMoveEvent* self= (wxMoveEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMoveEvent >::push(L,self,false);
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
		//wxMoveEvent* ptr= dynamic_cast< wxMoveEvent* >(Luna< wxObject >::check(L,1));
		wxMoveEvent* ptr= luna_caster< wxObject, wxMoveEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMoveEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
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
	// wxMoveEvent::wxMoveEvent(lua_Table * data, const wxPoint & pt, int id = 0)
	static wxMoveEvent* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxMoveEvent::wxMoveEvent(lua_Table * data, const wxPoint & pt, int id = 0) function, expected prototype:\nwxMoveEvent::wxMoveEvent(lua_Table * data, const wxPoint & pt, int id = 0)\nClass arguments details:\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxMoveEvent::wxMoveEvent function");
		}
		const wxPoint & pt=*pt_ptr;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxMoveEvent(L,NULL, pt, id);
	}


	// Function binds:
	// wxPoint wxMoveEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxMoveEvent::GetPosition() const function, expected prototype:\nwxPoint wxMoveEvent::GetPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMoveEvent* self=Luna< wxObject >::checkSubType< wxMoveEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxMoveEvent::GetPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxRect wxMoveEvent::GetRect() const
	static int _bind_GetRect(lua_State *L) {
		if (!_lg_typecheck_GetRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxMoveEvent::GetRect() const function, expected prototype:\nwxRect wxMoveEvent::GetRect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMoveEvent* self=Luna< wxObject >::checkSubType< wxMoveEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxMoveEvent::GetRect() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// void wxMoveEvent::SetRect(const wxRect & rect)
	static int _bind_SetRect(lua_State *L) {
		if (!_lg_typecheck_SetRect(L)) {
			luaL_error(L, "luna typecheck failed in void wxMoveEvent::SetRect(const wxRect & rect) function, expected prototype:\nvoid wxMoveEvent::SetRect(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxMoveEvent::SetRect function");
		}
		const wxRect & rect=*rect_ptr;

		wxMoveEvent* self=Luna< wxObject >::checkSubType< wxMoveEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMoveEvent::SetRect(const wxRect &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRect(rect);

		return 0;
	}

	// void wxMoveEvent::SetPosition(const wxPoint & pos)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxMoveEvent::SetPosition(const wxPoint & pos) function, expected prototype:\nvoid wxMoveEvent::SetPosition(const wxPoint & pos)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMoveEvent::SetPosition function");
		}
		const wxPoint & pos=*pos_ptr;

		wxMoveEvent* self=Luna< wxObject >::checkSubType< wxMoveEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMoveEvent::SetPosition(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPosition(pos);

		return 0;
	}

	// wxClassInfo * wxMoveEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMoveEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMoveEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMoveEvent* self=Luna< wxObject >::checkSubType< wxMoveEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMoveEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMoveEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxMoveEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxMoveEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxMoveEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMoveEvent* self=Luna< wxObject >::checkSubType< wxMoveEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxMoveEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxMoveEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxMoveEvent* LunaTraits< wxMoveEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMoveEvent::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// wxEvent * wxEvent::Clone() const
}

void LunaTraits< wxMoveEvent >::_bind_dtor(wxMoveEvent* obj) {
	delete obj;
}

const char LunaTraits< wxMoveEvent >::className[] = "wxMoveEvent";
const char LunaTraits< wxMoveEvent >::fullName[] = "wxMoveEvent";
const char LunaTraits< wxMoveEvent >::moduleName[] = "wx";
const char* LunaTraits< wxMoveEvent >::parents[] = {"wx.wxEvent", 0};
const int LunaTraits< wxMoveEvent >::hash = 39255760;
const int LunaTraits< wxMoveEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxMoveEvent >::methods[] = {
	{"GetPosition", &luna_wrapper_wxMoveEvent::_bind_GetPosition},
	{"GetRect", &luna_wrapper_wxMoveEvent::_bind_GetRect},
	{"SetRect", &luna_wrapper_wxMoveEvent::_bind_SetRect},
	{"SetPosition", &luna_wrapper_wxMoveEvent::_bind_SetPosition},
	{"base_GetClassInfo", &luna_wrapper_wxMoveEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxMoveEvent::_bind_base_GetEventCategory},
	{"fromVoid", &luna_wrapper_wxMoveEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMoveEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMoveEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMoveEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxMoveEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMoveEvent >::enumValues[] = {
	{0,0}
};


