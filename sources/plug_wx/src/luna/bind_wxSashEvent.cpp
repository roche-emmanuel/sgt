#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSashEvent.h>

class luna_wrapper_wxSashEvent {
public:
	typedef Luna< wxSashEvent > luna_t;

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

		wxSashEvent* self= (wxSashEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSashEvent >::push(L,self,false);
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
		//wxSashEvent* ptr= dynamic_cast< wxSashEvent* >(Luna< wxObject >::check(L,1));
		wxSashEvent* ptr= luna_caster< wxObject, wxSashEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSashEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDragRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDragStatus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEdge(lua_State *L) {
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

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSashEvent::wxSashEvent(int id = 0, wxSashEdgePosition edge = ::wxSASH_NONE)
	static wxSashEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSashEvent::wxSashEvent(int id = 0, wxSashEdgePosition edge = ::wxSASH_NONE) function, expected prototype:\nwxSashEvent::wxSashEvent(int id = 0, wxSashEdgePosition edge = ::wxSASH_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=luatop>0 ? (int)lua_tointeger(L,1) : (int)0;
		wxSashEdgePosition edge=luatop>1 ? (wxSashEdgePosition)lua_tointeger(L,2) : (wxSashEdgePosition)::wxSASH_NONE;

		return new wxSashEvent(id, edge);
	}

	// wxSashEvent::wxSashEvent(lua_Table * data, int id = 0, wxSashEdgePosition edge = ::wxSASH_NONE)
	static wxSashEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSashEvent::wxSashEvent(lua_Table * data, int id = 0, wxSashEdgePosition edge = ::wxSASH_NONE) function, expected prototype:\nwxSashEvent::wxSashEvent(lua_Table * data, int id = 0, wxSashEdgePosition edge = ::wxSASH_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		wxSashEdgePosition edge=luatop>2 ? (wxSashEdgePosition)lua_tointeger(L,3) : (wxSashEdgePosition)::wxSASH_NONE;

		return new wrapper_wxSashEvent(L,NULL, id, edge);
	}

	// Overload binder for wxSashEvent::wxSashEvent
	static wxSashEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxSashEvent, cannot match any of the overloads for function wxSashEvent:\n  wxSashEvent(int, wxSashEdgePosition)\n  wxSashEvent(lua_Table *, int, wxSashEdgePosition)\n");
		return NULL;
	}


	// Function binds:
	// wxRect wxSashEvent::GetDragRect() const
	static int _bind_GetDragRect(lua_State *L) {
		if (!_lg_typecheck_GetDragRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxSashEvent::GetDragRect() const function, expected prototype:\nwxRect wxSashEvent::GetDragRect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashEvent* self=Luna< wxObject >::checkSubType< wxSashEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxSashEvent::GetDragRect() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetDragRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxSashDragStatus wxSashEvent::GetDragStatus() const
	static int _bind_GetDragStatus(lua_State *L) {
		if (!_lg_typecheck_GetDragStatus(L)) {
			luaL_error(L, "luna typecheck failed in wxSashDragStatus wxSashEvent::GetDragStatus() const function, expected prototype:\nwxSashDragStatus wxSashEvent::GetDragStatus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashEvent* self=Luna< wxObject >::checkSubType< wxSashEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSashDragStatus wxSashEvent::GetDragStatus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSashDragStatus lret = self->GetDragStatus();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxSashEdgePosition wxSashEvent::GetEdge() const
	static int _bind_GetEdge(lua_State *L) {
		if (!_lg_typecheck_GetEdge(L)) {
			luaL_error(L, "luna typecheck failed in wxSashEdgePosition wxSashEvent::GetEdge() const function, expected prototype:\nwxSashEdgePosition wxSashEvent::GetEdge() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashEvent* self=Luna< wxObject >::checkSubType< wxSashEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSashEdgePosition wxSashEvent::GetEdge() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSashEdgePosition lret = self->GetEdge();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxSashEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSashEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSashEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashEvent* self=Luna< wxObject >::checkSubType< wxSashEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSashEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSashEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxSashEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxSashEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxSashEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashEvent* self=Luna< wxObject >::checkSubType< wxSashEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxSashEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxSashEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxSashEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxSashEvent::base_Clone() const function, expected prototype:\nwxEvent * wxSashEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashEvent* self=Luna< wxObject >::checkSubType< wxSashEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxSashEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxSashEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxSashEvent* LunaTraits< wxSashEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSashEvent::_bind_ctor(L);
}

void LunaTraits< wxSashEvent >::_bind_dtor(wxSashEvent* obj) {
	delete obj;
}

const char LunaTraits< wxSashEvent >::className[] = "wxSashEvent";
const char LunaTraits< wxSashEvent >::fullName[] = "wxSashEvent";
const char LunaTraits< wxSashEvent >::moduleName[] = "wx";
const char* LunaTraits< wxSashEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxSashEvent >::hash = 31863192;
const int LunaTraits< wxSashEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxSashEvent >::methods[] = {
	{"GetDragRect", &luna_wrapper_wxSashEvent::_bind_GetDragRect},
	{"GetDragStatus", &luna_wrapper_wxSashEvent::_bind_GetDragStatus},
	{"GetEdge", &luna_wrapper_wxSashEvent::_bind_GetEdge},
	{"base_GetClassInfo", &luna_wrapper_wxSashEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxSashEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxSashEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxSashEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSashEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSashEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSashEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxSashEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSashEvent >::enumValues[] = {
	{0,0}
};


