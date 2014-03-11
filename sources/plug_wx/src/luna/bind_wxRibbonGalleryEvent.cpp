#include <plug_common.h>

#include <luna/wrappers/wrapper_wxRibbonGalleryEvent.h>

class luna_wrapper_wxRibbonGalleryEvent {
public:
	typedef Luna< wxRibbonGalleryEvent > luna_t;

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

		wxRibbonGalleryEvent* self= (wxRibbonGalleryEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxRibbonGalleryEvent >::push(L,self,false);
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
		//wxRibbonGalleryEvent* ptr= dynamic_cast< wxRibbonGalleryEvent* >(Luna< wxObject >::check(L,1));
		wxRibbonGalleryEvent* ptr= luna_caster< wxObject, wxRibbonGalleryEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxRibbonGalleryEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>4 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxRibbonGallery >(L,3)) ) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56057674)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxRibbonGalleryItem >::check(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxRibbonGallery >(L,4)) ) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56057674)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxRibbonGalleryItem >::check(L,5)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetGallery(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGalleryItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetGallery(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetGalleryItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56057674)) ) return false;
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
	// wxRibbonGalleryEvent::wxRibbonGalleryEvent(int command_type = wxEVT_NULL, int win_id = 0, wxRibbonGallery * gallery = NULL, wxRibbonGalleryItem * item = NULL)
	static wxRibbonGalleryEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryEvent::wxRibbonGalleryEvent(int command_type = wxEVT_NULL, int win_id = 0, wxRibbonGallery * gallery = NULL, wxRibbonGalleryItem * item = NULL) function, expected prototype:\nwxRibbonGalleryEvent::wxRibbonGalleryEvent(int command_type = wxEVT_NULL, int win_id = 0, wxRibbonGallery * gallery = NULL, wxRibbonGalleryItem * item = NULL)\nClass arguments details:\narg 3 ID = 56813631\narg 4 ID = 56057674\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int command_type=luatop>0 ? (int)lua_tointeger(L,1) : (int)wxEVT_NULL;
		int win_id=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		wxRibbonGallery* gallery=luatop>2 ? (Luna< wxObject >::checkSubType< wxRibbonGallery >(L,3)) : (wxRibbonGallery*)NULL;
		wxRibbonGalleryItem* item=luatop>3 ? (Luna< wxRibbonGalleryItem >::check(L,4)) : (wxRibbonGalleryItem*)NULL;

		return new wxRibbonGalleryEvent(command_type, win_id, gallery, item);
	}

	// wxRibbonGalleryEvent::wxRibbonGalleryEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonGallery * gallery = NULL, wxRibbonGalleryItem * item = NULL)
	static wxRibbonGalleryEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryEvent::wxRibbonGalleryEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonGallery * gallery = NULL, wxRibbonGalleryItem * item = NULL) function, expected prototype:\nwxRibbonGalleryEvent::wxRibbonGalleryEvent(lua_Table * data, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonGallery * gallery = NULL, wxRibbonGalleryItem * item = NULL)\nClass arguments details:\narg 4 ID = 56813631\narg 5 ID = 56057674\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int command_type=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxEVT_NULL;
		int win_id=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		wxRibbonGallery* gallery=luatop>3 ? (Luna< wxObject >::checkSubType< wxRibbonGallery >(L,4)) : (wxRibbonGallery*)NULL;
		wxRibbonGalleryItem* item=luatop>4 ? (Luna< wxRibbonGalleryItem >::check(L,5)) : (wxRibbonGalleryItem*)NULL;

		return new wrapper_wxRibbonGalleryEvent(L,NULL, command_type, win_id, gallery, item);
	}

	// Overload binder for wxRibbonGalleryEvent::wxRibbonGalleryEvent
	static wxRibbonGalleryEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxRibbonGalleryEvent, cannot match any of the overloads for function wxRibbonGalleryEvent:\n  wxRibbonGalleryEvent(int, int, wxRibbonGallery *, wxRibbonGalleryItem *)\n  wxRibbonGalleryEvent(lua_Table *, int, int, wxRibbonGallery *, wxRibbonGalleryItem *)\n");
		return NULL;
	}


	// Function binds:
	// wxRibbonGallery * wxRibbonGalleryEvent::GetGallery()
	static int _bind_GetGallery(lua_State *L) {
		if (!_lg_typecheck_GetGallery(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGallery * wxRibbonGalleryEvent::GetGallery() function, expected prototype:\nwxRibbonGallery * wxRibbonGalleryEvent::GetGallery()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGallery * wxRibbonGalleryEvent::GetGallery(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGallery * lret = self->GetGallery();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGallery >::push(L,lret,false);

		return 1;
	}

	// wxRibbonGalleryItem * wxRibbonGalleryEvent::GetGalleryItem()
	static int _bind_GetGalleryItem(lua_State *L) {
		if (!_lg_typecheck_GetGalleryItem(L)) {
			luaL_error(L, "luna typecheck failed in wxRibbonGalleryItem * wxRibbonGalleryEvent::GetGalleryItem() function, expected prototype:\nwxRibbonGalleryItem * wxRibbonGalleryEvent::GetGalleryItem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRibbonGalleryItem * wxRibbonGalleryEvent::GetGalleryItem(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRibbonGalleryItem * lret = self->GetGalleryItem();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRibbonGalleryItem >::push(L,lret,false);

		return 1;
	}

	// void wxRibbonGalleryEvent::SetGallery(wxRibbonGallery * gallery)
	static int _bind_SetGallery(lua_State *L) {
		if (!_lg_typecheck_SetGallery(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGalleryEvent::SetGallery(wxRibbonGallery * gallery) function, expected prototype:\nvoid wxRibbonGalleryEvent::SetGallery(wxRibbonGallery * gallery)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRibbonGallery* gallery=(Luna< wxObject >::checkSubType< wxRibbonGallery >(L,2));

		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGalleryEvent::SetGallery(wxRibbonGallery *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetGallery(gallery);

		return 0;
	}

	// void wxRibbonGalleryEvent::SetGalleryItem(wxRibbonGalleryItem * item)
	static int _bind_SetGalleryItem(lua_State *L) {
		if (!_lg_typecheck_SetGalleryItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxRibbonGalleryEvent::SetGalleryItem(wxRibbonGalleryItem * item) function, expected prototype:\nvoid wxRibbonGalleryEvent::SetGalleryItem(wxRibbonGalleryItem * item)\nClass arguments details:\narg 1 ID = 56057674\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRibbonGalleryItem* item=(Luna< wxRibbonGalleryItem >::check(L,2));

		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxRibbonGalleryEvent::SetGalleryItem(wxRibbonGalleryItem *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetGalleryItem(item);

		return 0;
	}

	// wxClassInfo * wxRibbonGalleryEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxRibbonGalleryEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxRibbonGalleryEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxRibbonGalleryEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxRibbonGalleryEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxRibbonGalleryEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxRibbonGalleryEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxRibbonGalleryEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxRibbonGalleryEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxRibbonGalleryEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxRibbonGalleryEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxRibbonGalleryEvent::base_Clone() const function, expected prototype:\nwxEvent * wxRibbonGalleryEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxRibbonGalleryEvent* self=Luna< wxObject >::checkSubType< wxRibbonGalleryEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxRibbonGalleryEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxRibbonGalleryEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxRibbonGalleryEvent* LunaTraits< wxRibbonGalleryEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxRibbonGalleryEvent::_bind_ctor(L);
}

void LunaTraits< wxRibbonGalleryEvent >::_bind_dtor(wxRibbonGalleryEvent* obj) {
	delete obj;
}

const char LunaTraits< wxRibbonGalleryEvent >::className[] = "wxRibbonGalleryEvent";
const char LunaTraits< wxRibbonGalleryEvent >::fullName[] = "wxRibbonGalleryEvent";
const char LunaTraits< wxRibbonGalleryEvent >::moduleName[] = "wx";
const char* LunaTraits< wxRibbonGalleryEvent >::parents[] = {"wx.wxCommandEvent", 0};
const int LunaTraits< wxRibbonGalleryEvent >::hash = 34153199;
const int LunaTraits< wxRibbonGalleryEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxRibbonGalleryEvent >::methods[] = {
	{"GetGallery", &luna_wrapper_wxRibbonGalleryEvent::_bind_GetGallery},
	{"GetGalleryItem", &luna_wrapper_wxRibbonGalleryEvent::_bind_GetGalleryItem},
	{"SetGallery", &luna_wrapper_wxRibbonGalleryEvent::_bind_SetGallery},
	{"SetGalleryItem", &luna_wrapper_wxRibbonGalleryEvent::_bind_SetGalleryItem},
	{"base_GetClassInfo", &luna_wrapper_wxRibbonGalleryEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxRibbonGalleryEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxRibbonGalleryEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxRibbonGalleryEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxRibbonGalleryEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxRibbonGalleryEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxRibbonGalleryEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxRibbonGalleryEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxRibbonGalleryEvent >::enumValues[] = {
	{0,0}
};


