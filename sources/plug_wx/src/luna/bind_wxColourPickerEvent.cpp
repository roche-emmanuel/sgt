#include <plug_common.h>

#include <luna/wrappers/wrapper_wxColourPickerEvent.h>

class luna_wrapper_wxColourPickerEvent {
public:
	typedef Luna< wxColourPickerEvent > luna_t;

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

		wxColourPickerEvent* self= (wxColourPickerEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxColourPickerEvent >::push(L,self,false);
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
		//wxColourPickerEvent* ptr= dynamic_cast< wxColourPickerEvent* >(Luna< wxObject >::check(L,1));
		wxColourPickerEvent* ptr= luna_caster< wxObject, wxColourPickerEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxColourPickerEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::check(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::check(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxColour >(L,4))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColour(lua_State *L) {
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

	inline static bool _lg_typecheck_base_Clone(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxColourPickerEvent::wxColourPickerEvent(wxObject * generator, int id, const wxColour & colour)
	static wxColourPickerEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxColourPickerEvent::wxColourPickerEvent(wxObject * generator, int id, const wxColour & colour) function, expected prototype:\nwxColourPickerEvent::wxColourPickerEvent(wxObject * generator, int id, const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* generator=(Luna< wxObject >::check(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColourPickerEvent::wxColourPickerEvent function");
		}
		const wxColour & colour=*colour_ptr;

		return new wxColourPickerEvent(generator, id, colour);
	}

	// wxColourPickerEvent::wxColourPickerEvent(lua_Table * data, wxObject * generator, int id, const wxColour & colour)
	static wxColourPickerEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxColourPickerEvent::wxColourPickerEvent(lua_Table * data, wxObject * generator, int id, const wxColour & colour) function, expected prototype:\nwxColourPickerEvent::wxColourPickerEvent(lua_Table * data, wxObject * generator, int id, const wxColour & colour)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* generator=(Luna< wxObject >::check(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,4));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxColourPickerEvent::wxColourPickerEvent function");
		}
		const wxColour & colour=*colour_ptr;

		return new wrapper_wxColourPickerEvent(L,NULL, generator, id, colour);
	}

	// Overload binder for wxColourPickerEvent::wxColourPickerEvent
	static wxColourPickerEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxColourPickerEvent, cannot match any of the overloads for function wxColourPickerEvent:\n  wxColourPickerEvent(wxObject *, int, const wxColour &)\n  wxColourPickerEvent(lua_Table *, wxObject *, int, const wxColour &)\n");
		return NULL;
	}


	// Function binds:
	// wxColour wxColourPickerEvent::GetColour() const
	static int _bind_GetColour(lua_State *L) {
		if (!_lg_typecheck_GetColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxColourPickerEvent::GetColour() const function, expected prototype:\nwxColour wxColourPickerEvent::GetColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxColourPickerEvent* self=Luna< wxObject >::checkSubType< wxColourPickerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxColourPickerEvent::GetColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxColourPickerEvent::SetColour(const wxColour & pos)
	static int _bind_SetColour(lua_State *L) {
		if (!_lg_typecheck_SetColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxColourPickerEvent::SetColour(const wxColour & pos) function, expected prototype:\nvoid wxColourPickerEvent::SetColour(const wxColour & pos)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* pos_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxColourPickerEvent::SetColour function");
		}
		const wxColour & pos=*pos_ptr;

		wxColourPickerEvent* self=Luna< wxObject >::checkSubType< wxColourPickerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxColourPickerEvent::SetColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColour(pos);

		return 0;
	}

	// wxClassInfo * wxColourPickerEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxColourPickerEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxColourPickerEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxColourPickerEvent* self=Luna< wxObject >::checkSubType< wxColourPickerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxColourPickerEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxColourPickerEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxColourPickerEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxColourPickerEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxColourPickerEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxColourPickerEvent* self=Luna< wxObject >::checkSubType< wxColourPickerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxColourPickerEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxColourPickerEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxColourPickerEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxColourPickerEvent::base_Clone() const function, expected prototype:\nwxEvent * wxColourPickerEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxColourPickerEvent* self=Luna< wxObject >::checkSubType< wxColourPickerEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxColourPickerEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxColourPickerEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxColourPickerEvent* LunaTraits< wxColourPickerEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxColourPickerEvent::_bind_ctor(L);
}

void LunaTraits< wxColourPickerEvent >::_bind_dtor(wxColourPickerEvent* obj) {
	delete obj;
}

const char LunaTraits< wxColourPickerEvent >::className[] = "wxColourPickerEvent";
const char LunaTraits< wxColourPickerEvent >::fullName[] = "wxColourPickerEvent";
const char LunaTraits< wxColourPickerEvent >::moduleName[] = "wx";
const char* LunaTraits< wxColourPickerEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxColourPickerEvent >::hash = 43152060;
const int LunaTraits< wxColourPickerEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxColourPickerEvent >::methods[] = {
	{"GetColour", &luna_wrapper_wxColourPickerEvent::_bind_GetColour},
	{"SetColour", &luna_wrapper_wxColourPickerEvent::_bind_SetColour},
	{"base_GetClassInfo", &luna_wrapper_wxColourPickerEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxColourPickerEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxColourPickerEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxColourPickerEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxColourPickerEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxColourPickerEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxColourPickerEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxColourPickerEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxColourPickerEvent >::enumValues[] = {
	{0,0}
};


