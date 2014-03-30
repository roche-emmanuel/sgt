#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTreeEvent.h>

class luna_wrapper_wxTreeEvent {
public:
	typedef Luna< wxTreeEvent > luna_t;

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

		wxTreeEvent* self= (wxTreeEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTreeEvent >::push(L,self,false);
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
		//wxTreeEvent* ptr= dynamic_cast< wxTreeEvent* >(Luna< wxObject >::check(L,1));
		wxTreeEvent* ptr= luna_caster< wxObject, wxTreeEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTreeEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxTreeCtrl >(L,2)) ) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,28400299) ) return false;
		if( luatop>2 && (!(Luna< wxTreeItemId >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxTreeCtrl >(L,3)) ) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,28400299) ) return false;
		if( luatop>3 && (!(Luna< wxTreeItemId >::check(L,4))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKeyCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKeyEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOldItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditCancelled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetToolTip(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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
	// wxTreeEvent::wxTreeEvent(int commandType, wxTreeCtrl * tree, const wxTreeItemId & item = wxTreeItemId ())
	static wxTreeEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeEvent::wxTreeEvent(int commandType, wxTreeCtrl * tree, const wxTreeItemId & item = wxTreeItemId ()) function, expected prototype:\nwxTreeEvent::wxTreeEvent(int commandType, wxTreeCtrl * tree, const wxTreeItemId & item = wxTreeItemId ())\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=(int)lua_tointeger(L,1);
		wxTreeCtrl* tree=(Luna< wxObject >::checkSubType< wxTreeCtrl >(L,2));
		const wxTreeItemId* item_ptr=luatop>2 ? (Luna< wxTreeItemId >::check(L,3)) : NULL;
		if( luatop>2 && !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeEvent::wxTreeEvent function");
		}
		const wxTreeItemId & item=luatop>2 ? *item_ptr : (const wxTreeItemId&)wxTreeItemId ();

		return new wxTreeEvent(commandType, tree, item);
	}

	// wxTreeEvent::wxTreeEvent(lua_Table * data, int commandType, wxTreeCtrl * tree, const wxTreeItemId & item = wxTreeItemId ())
	static wxTreeEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeEvent::wxTreeEvent(lua_Table * data, int commandType, wxTreeCtrl * tree, const wxTreeItemId & item = wxTreeItemId ()) function, expected prototype:\nwxTreeEvent::wxTreeEvent(lua_Table * data, int commandType, wxTreeCtrl * tree, const wxTreeItemId & item = wxTreeItemId ())\nClass arguments details:\narg 3 ID = 56813631\narg 4 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=(int)lua_tointeger(L,2);
		wxTreeCtrl* tree=(Luna< wxObject >::checkSubType< wxTreeCtrl >(L,3));
		const wxTreeItemId* item_ptr=luatop>3 ? (Luna< wxTreeItemId >::check(L,4)) : NULL;
		if( luatop>3 && !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeEvent::wxTreeEvent function");
		}
		const wxTreeItemId & item=luatop>3 ? *item_ptr : (const wxTreeItemId&)wxTreeItemId ();

		return new wrapper_wxTreeEvent(L,NULL, commandType, tree, item);
	}

	// Overload binder for wxTreeEvent::wxTreeEvent
	static wxTreeEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTreeEvent, cannot match any of the overloads for function wxTreeEvent:\n  wxTreeEvent(int, wxTreeCtrl *, const wxTreeItemId &)\n  wxTreeEvent(lua_Table *, int, wxTreeCtrl *, const wxTreeItemId &)\n");
		return NULL;
	}


	// Function binds:
	// wxTreeItemId wxTreeEvent::GetItem() const
	static int _bind_GetItem(lua_State *L) {
		if (!_lg_typecheck_GetItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeEvent::GetItem() const function, expected prototype:\nwxTreeItemId wxTreeEvent::GetItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeEvent* self=Luna< wxObject >::checkSubType< wxTreeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeEvent::GetItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// int wxTreeEvent::GetKeyCode() const
	static int _bind_GetKeyCode(lua_State *L) {
		if (!_lg_typecheck_GetKeyCode(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeEvent::GetKeyCode() const function, expected prototype:\nint wxTreeEvent::GetKeyCode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeEvent* self=Luna< wxObject >::checkSubType< wxTreeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeEvent::GetKeyCode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetKeyCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxKeyEvent & wxTreeEvent::GetKeyEvent() const
	static int _bind_GetKeyEvent(lua_State *L) {
		if (!_lg_typecheck_GetKeyEvent(L)) {
			luaL_error(L, "luna typecheck failed in const wxKeyEvent & wxTreeEvent::GetKeyEvent() const function, expected prototype:\nconst wxKeyEvent & wxTreeEvent::GetKeyEvent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeEvent* self=Luna< wxObject >::checkSubType< wxTreeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxKeyEvent & wxTreeEvent::GetKeyEvent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxKeyEvent* lret = &self->GetKeyEvent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxKeyEvent >::push(L,lret,false);

		return 1;
	}

	// const wxString & wxTreeEvent::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTreeEvent::GetLabel() const function, expected prototype:\nconst wxString & wxTreeEvent::GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeEvent* self=Luna< wxObject >::checkSubType< wxTreeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTreeEvent::GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxTreeItemId wxTreeEvent::GetOldItem() const
	static int _bind_GetOldItem(lua_State *L) {
		if (!_lg_typecheck_GetOldItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeEvent::GetOldItem() const function, expected prototype:\nwxTreeItemId wxTreeEvent::GetOldItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeEvent* self=Luna< wxObject >::checkSubType< wxTreeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeEvent::GetOldItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetOldItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxTreeEvent::GetPoint() const
	static int _bind_GetPoint(lua_State *L) {
		if (!_lg_typecheck_GetPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxTreeEvent::GetPoint() const function, expected prototype:\nwxPoint wxTreeEvent::GetPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeEvent* self=Luna< wxObject >::checkSubType< wxTreeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxTreeEvent::GetPoint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPoint();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// bool wxTreeEvent::IsEditCancelled() const
	static int _bind_IsEditCancelled(lua_State *L) {
		if (!_lg_typecheck_IsEditCancelled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeEvent::IsEditCancelled() const function, expected prototype:\nbool wxTreeEvent::IsEditCancelled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeEvent* self=Luna< wxObject >::checkSubType< wxTreeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeEvent::IsEditCancelled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEditCancelled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeEvent::SetToolTip(const wxString & tooltip)
	static int _bind_SetToolTip(lua_State *L) {
		if (!_lg_typecheck_SetToolTip(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeEvent::SetToolTip(const wxString & tooltip) function, expected prototype:\nvoid wxTreeEvent::SetToolTip(const wxString & tooltip)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString tooltip(lua_tostring(L,2),lua_objlen(L,2));

		wxTreeEvent* self=Luna< wxObject >::checkSubType< wxTreeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeEvent::SetToolTip(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolTip(tooltip);

		return 0;
	}

	// wxClassInfo * wxTreeEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTreeEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTreeEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeEvent* self=Luna< wxObject >::checkSubType< wxTreeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTreeEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxTreeEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxTreeEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxTreeEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxTreeEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeEvent* self=Luna< wxObject >::checkSubType< wxTreeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxTreeEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxTreeEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxTreeEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxTreeEvent::base_Clone() const function, expected prototype:\nwxEvent * wxTreeEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeEvent* self=Luna< wxObject >::checkSubType< wxTreeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxTreeEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxTreeEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxTreeEvent* LunaTraits< wxTreeEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeEvent::_bind_ctor(L);
}

void LunaTraits< wxTreeEvent >::_bind_dtor(wxTreeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxTreeEvent >::className[] = "wxTreeEvent";
const char LunaTraits< wxTreeEvent >::fullName[] = "wxTreeEvent";
const char LunaTraits< wxTreeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxTreeEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxTreeEvent >::hash = 26313969;
const int LunaTraits< wxTreeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxTreeEvent >::methods[] = {
	{"GetItem", &luna_wrapper_wxTreeEvent::_bind_GetItem},
	{"GetKeyCode", &luna_wrapper_wxTreeEvent::_bind_GetKeyCode},
	{"GetKeyEvent", &luna_wrapper_wxTreeEvent::_bind_GetKeyEvent},
	{"GetLabel", &luna_wrapper_wxTreeEvent::_bind_GetLabel},
	{"GetOldItem", &luna_wrapper_wxTreeEvent::_bind_GetOldItem},
	{"GetPoint", &luna_wrapper_wxTreeEvent::_bind_GetPoint},
	{"IsEditCancelled", &luna_wrapper_wxTreeEvent::_bind_IsEditCancelled},
	{"SetToolTip", &luna_wrapper_wxTreeEvent::_bind_SetToolTip},
	{"base_GetClassInfo", &luna_wrapper_wxTreeEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxTreeEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxTreeEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxTreeEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTreeEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTreeEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxTreeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeEvent >::enumValues[] = {
	{0,0}
};


