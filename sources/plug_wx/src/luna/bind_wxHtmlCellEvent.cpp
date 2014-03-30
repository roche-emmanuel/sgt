#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlCellEvent.h>

class luna_wrapper_wxHtmlCellEvent {
public:
	typedef Luna< wxHtmlCellEvent > luna_t;

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

		wxHtmlCellEvent* self= (wxHtmlCellEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlCellEvent >::push(L,self,false);
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
		//wxHtmlCellEvent* ptr= dynamic_cast< wxHtmlCellEvent* >(Luna< wxObject >::check(L,1));
		wxHtmlCellEvent* ptr= luna_caster< wxObject, wxHtmlCellEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlCellEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxHtmlCell >(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxMouseEvent >(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxHtmlCell >(L,4)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxMouseEvent >(L,6))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetCell(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLinkClicked(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLinkClicked(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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
	// wxHtmlCellEvent::wxHtmlCellEvent(int commandType, int id, wxHtmlCell * cell, const wxPoint & point, const wxMouseEvent & ev)
	static wxHtmlCellEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlCellEvent::wxHtmlCellEvent(int commandType, int id, wxHtmlCell * cell, const wxPoint & point, const wxMouseEvent & ev) function, expected prototype:\nwxHtmlCellEvent::wxHtmlCellEvent(int commandType, int id, wxHtmlCell * cell, const wxPoint & point, const wxMouseEvent & ev)\nClass arguments details:\narg 3 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int commandType=(int)lua_tointeger(L,1);
		int id=(int)lua_tointeger(L,2);
		wxHtmlCell* cell=(Luna< wxObject >::checkSubType< wxHtmlCell >(L,3));
		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,4));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxHtmlCellEvent::wxHtmlCellEvent function");
		}
		const wxPoint & point=*point_ptr;
		const wxMouseEvent* ev_ptr=(Luna< wxObject >::checkSubType< wxMouseEvent >(L,5));
		if( !ev_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ev in wxHtmlCellEvent::wxHtmlCellEvent function");
		}
		const wxMouseEvent & ev=*ev_ptr;

		return new wxHtmlCellEvent(commandType, id, cell, point, ev);
	}

	// wxHtmlCellEvent::wxHtmlCellEvent(lua_Table * data, int commandType, int id, wxHtmlCell * cell, const wxPoint & point, const wxMouseEvent & ev)
	static wxHtmlCellEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlCellEvent::wxHtmlCellEvent(lua_Table * data, int commandType, int id, wxHtmlCell * cell, const wxPoint & point, const wxMouseEvent & ev) function, expected prototype:\nwxHtmlCellEvent::wxHtmlCellEvent(lua_Table * data, int commandType, int id, wxHtmlCell * cell, const wxPoint & point, const wxMouseEvent & ev)\nClass arguments details:\narg 4 ID = 56813631\narg 5 ID = 25723480\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int commandType=(int)lua_tointeger(L,2);
		int id=(int)lua_tointeger(L,3);
		wxHtmlCell* cell=(Luna< wxObject >::checkSubType< wxHtmlCell >(L,4));
		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,5));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxHtmlCellEvent::wxHtmlCellEvent function");
		}
		const wxPoint & point=*point_ptr;
		const wxMouseEvent* ev_ptr=(Luna< wxObject >::checkSubType< wxMouseEvent >(L,6));
		if( !ev_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ev in wxHtmlCellEvent::wxHtmlCellEvent function");
		}
		const wxMouseEvent & ev=*ev_ptr;

		return new wrapper_wxHtmlCellEvent(L,NULL, commandType, id, cell, point, ev);
	}

	// Overload binder for wxHtmlCellEvent::wxHtmlCellEvent
	static wxHtmlCellEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxHtmlCellEvent, cannot match any of the overloads for function wxHtmlCellEvent:\n  wxHtmlCellEvent(int, int, wxHtmlCell *, const wxPoint &, const wxMouseEvent &)\n  wxHtmlCellEvent(lua_Table *, int, int, wxHtmlCell *, const wxPoint &, const wxMouseEvent &)\n");
		return NULL;
	}


	// Function binds:
	// wxHtmlCell * wxHtmlCellEvent::GetCell() const
	static int _bind_GetCell(lua_State *L) {
		if (!_lg_typecheck_GetCell(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlCell * wxHtmlCellEvent::GetCell() const function, expected prototype:\nwxHtmlCell * wxHtmlCellEvent::GetCell() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlCell * wxHtmlCellEvent::GetCell() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlCell * lret = self->GetCell();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlCell >::push(L,lret,false);

		return 1;
	}

	// bool wxHtmlCellEvent::GetLinkClicked() const
	static int _bind_GetLinkClicked(lua_State *L) {
		if (!_lg_typecheck_GetLinkClicked(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlCellEvent::GetLinkClicked() const function, expected prototype:\nbool wxHtmlCellEvent::GetLinkClicked() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlCellEvent::GetLinkClicked() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetLinkClicked();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxHtmlCellEvent::GetPoint() const
	static int _bind_GetPoint(lua_State *L) {
		if (!_lg_typecheck_GetPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxHtmlCellEvent::GetPoint() const function, expected prototype:\nwxPoint wxHtmlCellEvent::GetPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxHtmlCellEvent::GetPoint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPoint();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxHtmlCellEvent::SetLinkClicked(bool linkclicked)
	static int _bind_SetLinkClicked(lua_State *L) {
		if (!_lg_typecheck_SetLinkClicked(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlCellEvent::SetLinkClicked(bool linkclicked) function, expected prototype:\nvoid wxHtmlCellEvent::SetLinkClicked(bool linkclicked)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool linkclicked=(bool)(lua_toboolean(L,2)==1);

		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlCellEvent::SetLinkClicked(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLinkClicked(linkclicked);

		return 0;
	}

	// wxClassInfo * wxHtmlCellEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlCellEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlCellEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlCellEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHtmlCellEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxHtmlCellEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxHtmlCellEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxHtmlCellEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxHtmlCellEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxHtmlCellEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxHtmlCellEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxHtmlCellEvent::base_Clone() const function, expected prototype:\nwxEvent * wxHtmlCellEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlCellEvent* self=Luna< wxObject >::checkSubType< wxHtmlCellEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxHtmlCellEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxHtmlCellEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxHtmlCellEvent* LunaTraits< wxHtmlCellEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlCellEvent::_bind_ctor(L);
}

void LunaTraits< wxHtmlCellEvent >::_bind_dtor(wxHtmlCellEvent* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlCellEvent >::className[] = "wxHtmlCellEvent";
const char LunaTraits< wxHtmlCellEvent >::fullName[] = "wxHtmlCellEvent";
const char LunaTraits< wxHtmlCellEvent >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlCellEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxHtmlCellEvent >::hash = 96689520;
const int LunaTraits< wxHtmlCellEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxHtmlCellEvent >::methods[] = {
	{"GetCell", &luna_wrapper_wxHtmlCellEvent::_bind_GetCell},
	{"GetLinkClicked", &luna_wrapper_wxHtmlCellEvent::_bind_GetLinkClicked},
	{"GetPoint", &luna_wrapper_wxHtmlCellEvent::_bind_GetPoint},
	{"SetLinkClicked", &luna_wrapper_wxHtmlCellEvent::_bind_SetLinkClicked},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlCellEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxHtmlCellEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxHtmlCellEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxHtmlCellEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlCellEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlCellEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlCellEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlCellEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlCellEvent >::enumValues[] = {
	{0,0}
};


