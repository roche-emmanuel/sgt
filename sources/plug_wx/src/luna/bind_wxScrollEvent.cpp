#include <plug_common.h>

#include <luna/wrappers/wrapper_wxScrollEvent.h>

class luna_wrapper_wxScrollEvent {
public:
	typedef Luna< wxScrollEvent > luna_t;

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

		wxScrollEvent* self= (wxScrollEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxScrollEvent >::push(L,self,false);
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
		//wxScrollEvent* ptr= dynamic_cast< wxScrollEvent* >(Luna< wxObject >::check(L,1));
		wxScrollEvent* ptr= luna_caster< wxObject, wxScrollEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxScrollEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetOrientation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
	// wxScrollEvent::wxScrollEvent(int commandType = wxEVT_NULL, int id = 0, int pos = 0, int orientation = 0)
	static wxScrollEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxScrollEvent::wxScrollEvent(int commandType = wxEVT_NULL, int id = 0, int pos = 0, int orientation = 0) function, expected prototype:\nwxScrollEvent::wxScrollEvent(int commandType = wxEVT_NULL, int id = 0, int pos = 0, int orientation = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		int pos=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int orientation=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		return new wxScrollEvent(commandType, id, pos, orientation);
	}

	// wxScrollEvent::wxScrollEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0, int pos = 0, int orientation = 0)
	static wxScrollEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxScrollEvent::wxScrollEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0, int pos = 0, int orientation = 0) function, expected prototype:\nwxScrollEvent::wxScrollEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0, int pos = 0, int orientation = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		int pos=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		int orientation=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		return new wrapper_wxScrollEvent(L,NULL, commandType, id, pos, orientation);
	}

	// Overload binder for wxScrollEvent::wxScrollEvent
	static wxScrollEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxScrollEvent, cannot match any of the overloads for function wxScrollEvent:\n  wxScrollEvent(int, int, int, int)\n  wxScrollEvent(lua_Table *, int, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxScrollEvent::GetOrientation() const
	static int _bind_GetOrientation(lua_State *L) {
		if (!_lg_typecheck_GetOrientation(L)) {
			luaL_error(L, "luna typecheck failed in int wxScrollEvent::GetOrientation() const function, expected prototype:\nint wxScrollEvent::GetOrientation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxScrollEvent::GetOrientation() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxScrollEvent::GetPosition() const
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luaL_error(L, "luna typecheck failed in int wxScrollEvent::GetPosition() const function, expected prototype:\nint wxScrollEvent::GetPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxScrollEvent::GetPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxScrollEvent::SetOrientation(int orient)
	static int _bind_SetOrientation(lua_State *L) {
		if (!_lg_typecheck_SetOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void wxScrollEvent::SetOrientation(int orient) function, expected prototype:\nvoid wxScrollEvent::SetOrientation(int orient)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxScrollEvent::SetOrientation(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOrientation(orient);

		return 0;
	}

	// void wxScrollEvent::SetPosition(int pos)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxScrollEvent::SetPosition(int pos) function, expected prototype:\nvoid wxScrollEvent::SetPosition(int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxScrollEvent::SetPosition(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPosition(pos);

		return 0;
	}

	// wxClassInfo * wxScrollEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxScrollEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxScrollEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxScrollEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxScrollEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxScrollEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxScrollEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxScrollEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxScrollEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxScrollEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxScrollEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxScrollEvent::base_Clone() const function, expected prototype:\nwxEvent * wxScrollEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxScrollEvent* self=Luna< wxObject >::checkSubType< wxScrollEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxScrollEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxScrollEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxScrollEvent* LunaTraits< wxScrollEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxScrollEvent::_bind_ctor(L);
}

void LunaTraits< wxScrollEvent >::_bind_dtor(wxScrollEvent* obj) {
	delete obj;
}

const char LunaTraits< wxScrollEvent >::className[] = "wxScrollEvent";
const char LunaTraits< wxScrollEvent >::fullName[] = "wxScrollEvent";
const char LunaTraits< wxScrollEvent >::moduleName[] = "wx";
const char* LunaTraits< wxScrollEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxScrollEvent >::hash = 54815679;
const int LunaTraits< wxScrollEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxScrollEvent >::methods[] = {
	{"GetOrientation", &luna_wrapper_wxScrollEvent::_bind_GetOrientation},
	{"GetPosition", &luna_wrapper_wxScrollEvent::_bind_GetPosition},
	{"SetOrientation", &luna_wrapper_wxScrollEvent::_bind_SetOrientation},
	{"SetPosition", &luna_wrapper_wxScrollEvent::_bind_SetPosition},
	{"base_GetClassInfo", &luna_wrapper_wxScrollEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxScrollEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxScrollEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxScrollEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxScrollEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxScrollEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxScrollEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxScrollEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxScrollEvent >::enumValues[] = {
	{0,0}
};


