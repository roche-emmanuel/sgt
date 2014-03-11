#include <plug_common.h>

#include <luna/wrappers/wrapper_wxContextMenuEvent.h>

class luna_wrapper_wxContextMenuEvent {
public:
	typedef Luna< wxContextMenuEvent > luna_t;

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

		wxContextMenuEvent* self= (wxContextMenuEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxContextMenuEvent >::push(L,self,false);
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
		//wxContextMenuEvent* ptr= dynamic_cast< wxContextMenuEvent* >(Luna< wxObject >::check(L,1));
		wxContextMenuEvent* ptr= luna_caster< wxObject, wxContextMenuEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxContextMenuEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxContextMenuEvent::wxContextMenuEvent(int type = wxEVT_NULL, int id = 0, const wxPoint & pos = wxDefaultPosition)
	static wxContextMenuEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxContextMenuEvent::wxContextMenuEvent(int type = wxEVT_NULL, int id = 0, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nwxContextMenuEvent::wxContextMenuEvent(int type = wxEVT_NULL, int id = 0, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 3 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int type=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxContextMenuEvent::wxContextMenuEvent function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;

		return new wxContextMenuEvent(type, id, pos);
	}

	// wxContextMenuEvent::wxContextMenuEvent(lua_Table * data, int type = wxEVT_NULL, int id = 0, const wxPoint & pos = wxDefaultPosition)
	static wxContextMenuEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxContextMenuEvent::wxContextMenuEvent(lua_Table * data, int type = wxEVT_NULL, int id = 0, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nwxContextMenuEvent::wxContextMenuEvent(lua_Table * data, int type = wxEVT_NULL, int id = 0, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 4 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int type=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxContextMenuEvent::wxContextMenuEvent function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;

		return new wrapper_wxContextMenuEvent(L,NULL, type, id, pos);
	}

	// Overload binder for wxContextMenuEvent::wxContextMenuEvent
	static wxContextMenuEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxContextMenuEvent, cannot match any of the overloads for function wxContextMenuEvent:\n  wxContextMenuEvent(int, int, const wxPoint &)\n  wxContextMenuEvent(lua_Table *, int, int, const wxPoint &)\n");
		return NULL;
	}


	// Function binds:
	// const wxPoint & wxContextMenuEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luaL_error(L, "luna typecheck failed in const wxPoint & wxContextMenuEvent::GetPosition() const function, expected prototype:\nconst wxPoint & wxContextMenuEvent::GetPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxContextMenuEvent* self=Luna< wxObject >::checkSubType< wxContextMenuEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxPoint & wxContextMenuEvent::GetPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPoint* lret = &self->GetPosition();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,false);

		return 1;
	}

	// void wxContextMenuEvent::SetPosition(const wxPoint & point)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxContextMenuEvent::SetPosition(const wxPoint & point) function, expected prototype:\nvoid wxContextMenuEvent::SetPosition(const wxPoint & point)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxContextMenuEvent::SetPosition function");
		}
		const wxPoint & point=*point_ptr;

		wxContextMenuEvent* self=Luna< wxObject >::checkSubType< wxContextMenuEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxContextMenuEvent::SetPosition(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPosition(point);

		return 0;
	}

	// wxClassInfo * wxContextMenuEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxContextMenuEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxContextMenuEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxContextMenuEvent* self=Luna< wxObject >::checkSubType< wxContextMenuEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxContextMenuEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxContextMenuEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxContextMenuEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxContextMenuEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxContextMenuEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxContextMenuEvent* self=Luna< wxObject >::checkSubType< wxContextMenuEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxContextMenuEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxContextMenuEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxContextMenuEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxContextMenuEvent::base_Clone() const function, expected prototype:\nwxEvent * wxContextMenuEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxContextMenuEvent* self=Luna< wxObject >::checkSubType< wxContextMenuEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxContextMenuEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxContextMenuEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxContextMenuEvent* LunaTraits< wxContextMenuEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxContextMenuEvent::_bind_ctor(L);
}

void LunaTraits< wxContextMenuEvent >::_bind_dtor(wxContextMenuEvent* obj) {
	delete obj;
}

const char LunaTraits< wxContextMenuEvent >::className[] = "wxContextMenuEvent";
const char LunaTraits< wxContextMenuEvent >::fullName[] = "wxContextMenuEvent";
const char LunaTraits< wxContextMenuEvent >::moduleName[] = "wx";
const char* LunaTraits< wxContextMenuEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxContextMenuEvent >::hash = 78101839;
const int LunaTraits< wxContextMenuEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxContextMenuEvent >::methods[] = {
	{"GetPosition", &luna_wrapper_wxContextMenuEvent::_bind_GetPosition},
	{"SetPosition", &luna_wrapper_wxContextMenuEvent::_bind_SetPosition},
	{"base_GetClassInfo", &luna_wrapper_wxContextMenuEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxContextMenuEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxContextMenuEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxContextMenuEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxContextMenuEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxContextMenuEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxContextMenuEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxContextMenuEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxContextMenuEvent >::enumValues[] = {
	{0,0}
};


