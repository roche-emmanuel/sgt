#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridEvent.h>

class luna_wrapper_wxGridEvent {
public:
	typedef Luna< wxGridEvent > luna_t;

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

		wxGridEvent* self= (wxGridEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridEvent >::push(L,self,false);
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
		//wxGridEvent* ptr= dynamic_cast< wxGridEvent* >(Luna< wxObject >::check(L,1));
		wxGridEvent* ptr= luna_caster< wxObject, wxGridEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>9 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::check(L,3)) ) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && lua_isboolean(L,8)==0 ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>8 && (!(Luna< wxObject >::checkSubType< wxKeyboardState >(L,9))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< wxObject >::check(L,4)) ) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && lua_isboolean(L,9)==0 ) return false;
		if( luatop>9 && !Luna<void>::has_uniqueid(L,10,56813631) ) return false;
		if( luatop>9 && (!(Luna< wxObject >::checkSubType< wxKeyboardState >(L,10))) ) return false;
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

	inline static bool _lg_typecheck_GetCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MetaDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Selecting(lua_State *L) {
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

	inline static bool _lg_typecheck_base_GetCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridEvent::wxGridEvent()
	static wxGridEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGridEvent::wxGridEvent() function, expected prototype:\nwxGridEvent::wxGridEvent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxGridEvent();
	}

	// wxGridEvent::wxGridEvent(int id, int type, wxObject * obj, int row = -1, int col = -1, int x = -1, int y = -1, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ())
	static wxGridEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGridEvent::wxGridEvent(int id, int type, wxObject * obj, int row = -1, int col = -1, int x = -1, int y = -1, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ()) function, expected prototype:\nwxGridEvent::wxGridEvent(int id, int type, wxObject * obj, int row = -1, int col = -1, int x = -1, int y = -1, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ())\nClass arguments details:\narg 3 ID = 56813631\narg 9 ID = 92036952\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,1);
		int type=(int)lua_tointeger(L,2);
		wxObject* obj=(Luna< wxObject >::check(L,3));
		int row=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int col=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int x=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int y=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;
		bool sel=luatop>7 ? (bool)(lua_toboolean(L,8)==1) : (bool)true;
		const wxKeyboardState* kbd_ptr=luatop>8 ? (Luna< wxObject >::checkSubType< wxKeyboardState >(L,9)) : NULL;
		if( luatop>8 && !kbd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg kbd in wxGridEvent::wxGridEvent function");
		}
		const wxKeyboardState & kbd=luatop>8 ? *kbd_ptr : (const wxKeyboardState&)wxKeyboardState ();

		return new wxGridEvent(id, type, obj, row, col, x, y, sel, kbd);
	}

	// wxGridEvent::wxGridEvent(lua_Table * data)
	static wxGridEvent* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxGridEvent::wxGridEvent(lua_Table * data) function, expected prototype:\nwxGridEvent::wxGridEvent(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxGridEvent(L,NULL);
	}

	// wxGridEvent::wxGridEvent(lua_Table * data, int id, int type, wxObject * obj, int row = -1, int col = -1, int x = -1, int y = -1, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ())
	static wxGridEvent* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxGridEvent::wxGridEvent(lua_Table * data, int id, int type, wxObject * obj, int row = -1, int col = -1, int x = -1, int y = -1, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ()) function, expected prototype:\nwxGridEvent::wxGridEvent(lua_Table * data, int id, int type, wxObject * obj, int row = -1, int col = -1, int x = -1, int y = -1, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ())\nClass arguments details:\narg 4 ID = 56813631\narg 10 ID = 92036952\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		int type=(int)lua_tointeger(L,3);
		wxObject* obj=(Luna< wxObject >::check(L,4));
		int row=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int col=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int x=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;
		int y=luatop>7 ? (int)lua_tointeger(L,8) : (int)-1;
		bool sel=luatop>8 ? (bool)(lua_toboolean(L,9)==1) : (bool)true;
		const wxKeyboardState* kbd_ptr=luatop>9 ? (Luna< wxObject >::checkSubType< wxKeyboardState >(L,10)) : NULL;
		if( luatop>9 && !kbd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg kbd in wxGridEvent::wxGridEvent function");
		}
		const wxKeyboardState & kbd=luatop>9 ? *kbd_ptr : (const wxKeyboardState&)wxKeyboardState ();

		return new wrapper_wxGridEvent(L,NULL, id, type, obj, row, col, x, y, sel, kbd);
	}

	// Overload binder for wxGridEvent::wxGridEvent
	static wxGridEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxGridEvent, cannot match any of the overloads for function wxGridEvent:\n  wxGridEvent()\n  wxGridEvent(int, int, wxObject *, int, int, int, int, bool, const wxKeyboardState &)\n  wxGridEvent(lua_Table *)\n  wxGridEvent(lua_Table *, int, int, wxObject *, int, int, int, int, bool, const wxKeyboardState &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxGridEvent::AltDown() const
	static int _bind_AltDown(lua_State *L) {
		if (!_lg_typecheck_AltDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridEvent::AltDown() const function, expected prototype:\nbool wxGridEvent::AltDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridEvent::AltDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AltDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridEvent::ControlDown() const
	static int _bind_ControlDown(lua_State *L) {
		if (!_lg_typecheck_ControlDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridEvent::ControlDown() const function, expected prototype:\nbool wxGridEvent::ControlDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridEvent::ControlDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ControlDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxGridEvent::GetCol()
	static int _bind_GetCol(lua_State *L) {
		if (!_lg_typecheck_GetCol(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridEvent::GetCol() function, expected prototype:\nint wxGridEvent::GetCol()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridEvent::GetCol(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxGridEvent::GetPosition()
	static int _bind_GetPosition(lua_State *L) {
		if (!_lg_typecheck_GetPosition(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxGridEvent::GetPosition() function, expected prototype:\nwxPoint wxGridEvent::GetPosition()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxGridEvent::GetPosition(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// int wxGridEvent::GetRow()
	static int _bind_GetRow(lua_State *L) {
		if (!_lg_typecheck_GetRow(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridEvent::GetRow() function, expected prototype:\nint wxGridEvent::GetRow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridEvent::GetRow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGridEvent::MetaDown() const
	static int _bind_MetaDown(lua_State *L) {
		if (!_lg_typecheck_MetaDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridEvent::MetaDown() const function, expected prototype:\nbool wxGridEvent::MetaDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridEvent::MetaDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MetaDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridEvent::Selecting()
	static int _bind_Selecting(lua_State *L) {
		if (!_lg_typecheck_Selecting(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridEvent::Selecting() function, expected prototype:\nbool wxGridEvent::Selecting()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridEvent::Selecting(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Selecting();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridEvent::ShiftDown() const
	static int _bind_ShiftDown(lua_State *L) {
		if (!_lg_typecheck_ShiftDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridEvent::ShiftDown() const function, expected prototype:\nbool wxGridEvent::ShiftDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridEvent::ShiftDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShiftDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxGridEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGridEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGridEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGridEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGridEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxGridEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxGridEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxGridEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxGridEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxGridEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxGridEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxGridEvent::base_Clone() const function, expected prototype:\nwxEvent * wxGridEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxGridEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxGridEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}

	// int wxGridEvent::base_GetCol()
	static int _bind_base_GetCol(lua_State *L) {
		if (!_lg_typecheck_base_GetCol(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridEvent::base_GetCol() function, expected prototype:\nint wxGridEvent::base_GetCol()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridEvent::base_GetCol(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGridEvent::GetCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridEvent::base_GetRow()
	static int _bind_base_GetRow(lua_State *L) {
		if (!_lg_typecheck_base_GetRow(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridEvent::base_GetRow() function, expected prototype:\nint wxGridEvent::base_GetRow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridEvent* self=Luna< wxObject >::checkSubType< wxGridEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridEvent::base_GetRow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGridEvent::GetRow();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxGridEvent* LunaTraits< wxGridEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridEvent::_bind_ctor(L);
}

void LunaTraits< wxGridEvent >::_bind_dtor(wxGridEvent* obj) {
	delete obj;
}

const char LunaTraits< wxGridEvent >::className[] = "wxGridEvent";
const char LunaTraits< wxGridEvent >::fullName[] = "wxGridEvent";
const char LunaTraits< wxGridEvent >::moduleName[] = "wx";
const char* LunaTraits< wxGridEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxGridEvent >::hash = 65091525;
const int LunaTraits< wxGridEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridEvent >::methods[] = {
	{"AltDown", &luna_wrapper_wxGridEvent::_bind_AltDown},
	{"ControlDown", &luna_wrapper_wxGridEvent::_bind_ControlDown},
	{"GetCol", &luna_wrapper_wxGridEvent::_bind_GetCol},
	{"GetPosition", &luna_wrapper_wxGridEvent::_bind_GetPosition},
	{"GetRow", &luna_wrapper_wxGridEvent::_bind_GetRow},
	{"MetaDown", &luna_wrapper_wxGridEvent::_bind_MetaDown},
	{"Selecting", &luna_wrapper_wxGridEvent::_bind_Selecting},
	{"ShiftDown", &luna_wrapper_wxGridEvent::_bind_ShiftDown},
	{"base_GetClassInfo", &luna_wrapper_wxGridEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxGridEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxGridEvent::_bind_base_Clone},
	{"base_GetCol", &luna_wrapper_wxGridEvent::_bind_base_GetCol},
	{"base_GetRow", &luna_wrapper_wxGridEvent::_bind_base_GetRow},
	{"fromVoid", &luna_wrapper_wxGridEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridEvent >::enumValues[] = {
	{0,0}
};


