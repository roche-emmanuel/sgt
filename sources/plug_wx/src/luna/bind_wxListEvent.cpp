#include <plug_common.h>

#include <luna/wrappers/wrapper_wxListEvent.h>

class luna_wrapper_wxListEvent {
public:
	typedef Luna< wxListEvent > luna_t;

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

		wxListEvent* self= (wxListEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxListEvent >::push(L,self,false);
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
		//wxListEvent* ptr= dynamic_cast< wxListEvent* >(Luna< wxObject >::check(L,1));
		wxListEvent* ptr= luna_caster< wxObject, wxListEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListEvent >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_GetCacheFrom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCacheTo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetImage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetKeyCode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsEditCancelled(lua_State *L) {
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
	// wxListEvent::wxListEvent(int commandType = wxEVT_NULL, int id = 0)
	static wxListEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxListEvent::wxListEvent(int commandType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxListEvent::wxListEvent(int commandType = wxEVT_NULL, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		return new wxListEvent(commandType, id);
	}

	// wxListEvent::wxListEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0)
	static wxListEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxListEvent::wxListEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0) function, expected prototype:\nwxListEvent::wxListEvent(lua_Table * data, int commandType = wxEVT_NULL, int id = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int commandType=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		return new wrapper_wxListEvent(L,NULL, commandType, id);
	}

	// Overload binder for wxListEvent::wxListEvent
	static wxListEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxListEvent, cannot match any of the overloads for function wxListEvent:\n  wxListEvent(int, int)\n  wxListEvent(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// long wxListEvent::GetCacheFrom() const
	static int _bind_GetCacheFrom(lua_State *L) {
		if (!_lg_typecheck_GetCacheFrom(L)) {
			luaL_error(L, "luna typecheck failed in long wxListEvent::GetCacheFrom() const function, expected prototype:\nlong wxListEvent::GetCacheFrom() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListEvent::GetCacheFrom() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetCacheFrom();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListEvent::GetCacheTo() const
	static int _bind_GetCacheTo(lua_State *L) {
		if (!_lg_typecheck_GetCacheTo(L)) {
			luaL_error(L, "luna typecheck failed in long wxListEvent::GetCacheTo() const function, expected prototype:\nlong wxListEvent::GetCacheTo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListEvent::GetCacheTo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetCacheTo();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListEvent::GetColumn() const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luaL_error(L, "luna typecheck failed in int wxListEvent::GetColumn() const function, expected prototype:\nint wxListEvent::GetColumn() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListEvent::GetColumn() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumn();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListEvent::GetData() const
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luaL_error(L, "luna typecheck failed in long wxListEvent::GetData() const function, expected prototype:\nlong wxListEvent::GetData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListEvent::GetData() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetData();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListEvent::GetImage() const
	static int _bind_GetImage(lua_State *L) {
		if (!_lg_typecheck_GetImage(L)) {
			luaL_error(L, "luna typecheck failed in int wxListEvent::GetImage() const function, expected prototype:\nint wxListEvent::GetImage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListEvent::GetImage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetImage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListEvent::GetIndex() const
	static int _bind_GetIndex(lua_State *L) {
		if (!_lg_typecheck_GetIndex(L)) {
			luaL_error(L, "luna typecheck failed in long wxListEvent::GetIndex() const function, expected prototype:\nlong wxListEvent::GetIndex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListEvent::GetIndex() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxListItem & wxListEvent::GetItem() const
	static int _bind_GetItem(lua_State *L) {
		if (!_lg_typecheck_GetItem(L)) {
			luaL_error(L, "luna typecheck failed in const wxListItem & wxListEvent::GetItem() const function, expected prototype:\nconst wxListItem & wxListEvent::GetItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxListItem & wxListEvent::GetItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxListItem* lret = &self->GetItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxListItem >::push(L,lret,false);

		return 1;
	}

	// int wxListEvent::GetKeyCode() const
	static int _bind_GetKeyCode(lua_State *L) {
		if (!_lg_typecheck_GetKeyCode(L)) {
			luaL_error(L, "luna typecheck failed in int wxListEvent::GetKeyCode() const function, expected prototype:\nint wxListEvent::GetKeyCode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListEvent::GetKeyCode() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetKeyCode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxListEvent::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxListEvent::GetLabel() const function, expected prototype:\nconst wxString & wxListEvent::GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxListEvent::GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxListEvent::GetMask() const
	static int _bind_GetMask(lua_State *L) {
		if (!_lg_typecheck_GetMask(L)) {
			luaL_error(L, "luna typecheck failed in long wxListEvent::GetMask() const function, expected prototype:\nlong wxListEvent::GetMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListEvent::GetMask() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxListEvent::GetPoint() const
	static int _bind_GetPoint(lua_State *L) {
		if (!_lg_typecheck_GetPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxListEvent::GetPoint() const function, expected prototype:\nwxPoint wxListEvent::GetPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxListEvent::GetPoint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPoint();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// const wxString & wxListEvent::GetText() const
	static int _bind_GetText(lua_State *L) {
		if (!_lg_typecheck_GetText(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxListEvent::GetText() const function, expected prototype:\nconst wxString & wxListEvent::GetText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxListEvent::GetText() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxListEvent::IsEditCancelled() const
	static int _bind_IsEditCancelled(lua_State *L) {
		if (!_lg_typecheck_IsEditCancelled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListEvent::IsEditCancelled() const function, expected prototype:\nbool wxListEvent::IsEditCancelled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListEvent::IsEditCancelled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEditCancelled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxListEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxListEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxListEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxListEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxListEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxListEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxListEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxListEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxListEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxListEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxListEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxListEvent::base_Clone() const function, expected prototype:\nwxEvent * wxListEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListEvent* self=Luna< wxObject >::checkSubType< wxListEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxListEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxListEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxListEvent* LunaTraits< wxListEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxListEvent::_bind_ctor(L);
}

void LunaTraits< wxListEvent >::_bind_dtor(wxListEvent* obj) {
	delete obj;
}

const char LunaTraits< wxListEvent >::className[] = "wxListEvent";
const char LunaTraits< wxListEvent >::fullName[] = "wxListEvent";
const char LunaTraits< wxListEvent >::moduleName[] = "wx";
const char* LunaTraits< wxListEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxListEvent >::hash = 39522497;
const int LunaTraits< wxListEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxListEvent >::methods[] = {
	{"GetCacheFrom", &luna_wrapper_wxListEvent::_bind_GetCacheFrom},
	{"GetCacheTo", &luna_wrapper_wxListEvent::_bind_GetCacheTo},
	{"GetColumn", &luna_wrapper_wxListEvent::_bind_GetColumn},
	{"GetData", &luna_wrapper_wxListEvent::_bind_GetData},
	{"GetImage", &luna_wrapper_wxListEvent::_bind_GetImage},
	{"GetIndex", &luna_wrapper_wxListEvent::_bind_GetIndex},
	{"GetItem", &luna_wrapper_wxListEvent::_bind_GetItem},
	{"GetKeyCode", &luna_wrapper_wxListEvent::_bind_GetKeyCode},
	{"GetLabel", &luna_wrapper_wxListEvent::_bind_GetLabel},
	{"GetMask", &luna_wrapper_wxListEvent::_bind_GetMask},
	{"GetPoint", &luna_wrapper_wxListEvent::_bind_GetPoint},
	{"GetText", &luna_wrapper_wxListEvent::_bind_GetText},
	{"IsEditCancelled", &luna_wrapper_wxListEvent::_bind_IsEditCancelled},
	{"base_GetClassInfo", &luna_wrapper_wxListEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxListEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxListEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxListEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxListEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxListEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxListEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxListEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxListEvent >::enumValues[] = {
	{0,0}
};


