#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridSizeEvent.h>

class luna_wrapper_wxGridSizeEvent {
public:
	typedef Luna< wxGridSizeEvent > luna_t;

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

		wxGridSizeEvent* self= (wxGridSizeEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridSizeEvent >::push(L,self,false);
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
		//wxGridSizeEvent* ptr= dynamic_cast< wxGridSizeEvent* >(Luna< wxObject >::check(L,1));
		wxGridSizeEvent* ptr= luna_caster< wxObject, wxGridSizeEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridSizeEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::check(L,3)) ) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>6 && (!(Luna< wxObject >::checkSubType< wxKeyboardState >(L,7))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< wxObject >::check(L,4)) ) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!(Luna< wxObject >::checkSubType< wxKeyboardState >(L,8))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AltDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ControlDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRowOrCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MetaDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShiftDown(lua_State *L) {
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
	// wxGridSizeEvent::wxGridSizeEvent()
	static wxGridSizeEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizeEvent::wxGridSizeEvent() function, expected prototype:\nwxGridSizeEvent::wxGridSizeEvent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxGridSizeEvent();
	}

	// wxGridSizeEvent::wxGridSizeEvent(int id, int type, wxObject * obj, int rowOrCol = -1, int x = -1, int y = -1, const wxKeyboardState & kbd = wxKeyboardState ())
	static wxGridSizeEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizeEvent::wxGridSizeEvent(int id, int type, wxObject * obj, int rowOrCol = -1, int x = -1, int y = -1, const wxKeyboardState & kbd = wxKeyboardState ()) function, expected prototype:\nwxGridSizeEvent::wxGridSizeEvent(int id, int type, wxObject * obj, int rowOrCol = -1, int x = -1, int y = -1, const wxKeyboardState & kbd = wxKeyboardState ())\nClass arguments details:\narg 3 ID = 56813631\narg 7 ID = 92036952\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,1);
		int type=(int)lua_tointeger(L,2);
		wxObject* obj=(Luna< wxObject >::check(L,3));
		int rowOrCol=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int x=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int y=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		const wxKeyboardState* kbd_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxKeyboardState >(L,7)) : NULL;
		if( luatop>6 && !kbd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg kbd in wxGridSizeEvent::wxGridSizeEvent function");
		}
		const wxKeyboardState & kbd=luatop>6 ? *kbd_ptr : (const wxKeyboardState&)wxKeyboardState ();

		return new wxGridSizeEvent(id, type, obj, rowOrCol, x, y, kbd);
	}

	// wxGridSizeEvent::wxGridSizeEvent(lua_Table * data)
	static wxGridSizeEvent* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizeEvent::wxGridSizeEvent(lua_Table * data) function, expected prototype:\nwxGridSizeEvent::wxGridSizeEvent(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxGridSizeEvent(L,NULL);
	}

	// wxGridSizeEvent::wxGridSizeEvent(lua_Table * data, int id, int type, wxObject * obj, int rowOrCol = -1, int x = -1, int y = -1, const wxKeyboardState & kbd = wxKeyboardState ())
	static wxGridSizeEvent* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxGridSizeEvent::wxGridSizeEvent(lua_Table * data, int id, int type, wxObject * obj, int rowOrCol = -1, int x = -1, int y = -1, const wxKeyboardState & kbd = wxKeyboardState ()) function, expected prototype:\nwxGridSizeEvent::wxGridSizeEvent(lua_Table * data, int id, int type, wxObject * obj, int rowOrCol = -1, int x = -1, int y = -1, const wxKeyboardState & kbd = wxKeyboardState ())\nClass arguments details:\narg 4 ID = 56813631\narg 8 ID = 92036952\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		int type=(int)lua_tointeger(L,3);
		wxObject* obj=(Luna< wxObject >::check(L,4));
		int rowOrCol=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int x=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int y=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;
		const wxKeyboardState* kbd_ptr=luatop>7 ? (Luna< wxObject >::checkSubType< wxKeyboardState >(L,8)) : NULL;
		if( luatop>7 && !kbd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg kbd in wxGridSizeEvent::wxGridSizeEvent function");
		}
		const wxKeyboardState & kbd=luatop>7 ? *kbd_ptr : (const wxKeyboardState&)wxKeyboardState ();

		return new wrapper_wxGridSizeEvent(L,NULL, id, type, obj, rowOrCol, x, y, kbd);
	}

	// Overload binder for wxGridSizeEvent::wxGridSizeEvent
	static wxGridSizeEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxGridSizeEvent, cannot match any of the overloads for function wxGridSizeEvent:\n  wxGridSizeEvent()\n  wxGridSizeEvent(int, int, wxObject *, int, int, int, const wxKeyboardState &)\n  wxGridSizeEvent(lua_Table *)\n  wxGridSizeEvent(lua_Table *, int, int, wxObject *, int, int, int, const wxKeyboardState &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxGridSizeEvent::AltDown() const
	static int _bind_AltDown(lua_State *L) {
		if (!_lg_typecheck_AltDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizeEvent::AltDown() const function, expected prototype:\nbool wxGridSizeEvent::AltDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizeEvent* self=Luna< wxObject >::checkSubType< wxGridSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizeEvent::AltDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AltDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridSizeEvent::ControlDown() const
	static int _bind_ControlDown(lua_State *L) {
		if (!_lg_typecheck_ControlDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizeEvent::ControlDown() const function, expected prototype:\nbool wxGridSizeEvent::ControlDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizeEvent* self=Luna< wxObject >::checkSubType< wxGridSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizeEvent::ControlDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ControlDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxPoint wxGridSizeEvent::GetPosition()
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxGridSizeEvent::GetPosition() function, expected prototype:\nwxPoint wxGridSizeEvent::GetPosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizeEvent* self=Luna< wxObject >::checkSubType< wxGridSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxGridSizeEvent::GetPosition(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxGridSizeEvent::GetRowOrCol()
	static int _bind_GetRowOrCol(lua_State *L) {
		if (!_lg_typecheck_GetRowOrCol(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridSizeEvent::GetRowOrCol() function, expected prototype:\nint wxGridSizeEvent::GetRowOrCol()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizeEvent* self=Luna< wxObject >::checkSubType< wxGridSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridSizeEvent::GetRowOrCol(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRowOrCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGridSizeEvent::MetaDown() const
	static int _bind_MetaDown(lua_State *L) {
		if (!_lg_typecheck_MetaDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizeEvent::MetaDown() const function, expected prototype:\nbool wxGridSizeEvent::MetaDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizeEvent* self=Luna< wxObject >::checkSubType< wxGridSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizeEvent::MetaDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MetaDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridSizeEvent::ShiftDown() const
	static int _bind_ShiftDown(lua_State *L) {
		if (!_lg_typecheck_ShiftDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridSizeEvent::ShiftDown() const function, expected prototype:\nbool wxGridSizeEvent::ShiftDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizeEvent* self=Luna< wxObject >::checkSubType< wxGridSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridSizeEvent::ShiftDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShiftDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxGridSizeEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGridSizeEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGridSizeEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizeEvent* self=Luna< wxObject >::checkSubType< wxGridSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGridSizeEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGridSizeEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxGridSizeEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxGridSizeEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxGridSizeEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizeEvent* self=Luna< wxObject >::checkSubType< wxGridSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxGridSizeEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxGridSizeEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxGridSizeEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxGridSizeEvent::base_Clone() const function, expected prototype:\nwxEvent * wxGridSizeEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridSizeEvent* self=Luna< wxObject >::checkSubType< wxGridSizeEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxGridSizeEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxGridSizeEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxGridSizeEvent* LunaTraits< wxGridSizeEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridSizeEvent::_bind_ctor(L);
}

void LunaTraits< wxGridSizeEvent >::_bind_dtor(wxGridSizeEvent* obj) {
	delete obj;
}

const char LunaTraits< wxGridSizeEvent >::className[] = "wxGridSizeEvent";
const char LunaTraits< wxGridSizeEvent >::fullName[] = "wxGridSizeEvent";
const char LunaTraits< wxGridSizeEvent >::moduleName[] = "wx";
const char* LunaTraits< wxGridSizeEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxGridSizeEvent >::hash = 32317474;
const int LunaTraits< wxGridSizeEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridSizeEvent >::methods[] = {
	{"AltDown", &luna_wrapper_wxGridSizeEvent::_bind_AltDown},
	{"ControlDown", &luna_wrapper_wxGridSizeEvent::_bind_ControlDown},
	{"GetPosition", &luna_wrapper_wxGridSizeEvent::_bind_GetPosition},
	{"GetRowOrCol", &luna_wrapper_wxGridSizeEvent::_bind_GetRowOrCol},
	{"MetaDown", &luna_wrapper_wxGridSizeEvent::_bind_MetaDown},
	{"ShiftDown", &luna_wrapper_wxGridSizeEvent::_bind_ShiftDown},
	{"base_GetClassInfo", &luna_wrapper_wxGridSizeEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxGridSizeEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxGridSizeEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxGridSizeEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridSizeEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridSizeEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridSizeEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridSizeEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridSizeEvent >::enumValues[] = {
	{0,0}
};


