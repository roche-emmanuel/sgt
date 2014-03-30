#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGridRangeSelectEvent.h>

class luna_wrapper_wxGridRangeSelectEvent {
public:
	typedef Luna< wxGridRangeSelectEvent > luna_t;

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

		wxGridRangeSelectEvent* self= (wxGridRangeSelectEvent*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGridRangeSelectEvent >::push(L,self,false);
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
		//wxGridRangeSelectEvent* ptr= dynamic_cast< wxGridRangeSelectEvent* >(Luna< wxObject >::check(L,1));
		wxGridRangeSelectEvent* ptr= luna_caster< wxObject, wxGridRangeSelectEvent >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGridRangeSelectEvent >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>7 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< wxObject >::check(L,3)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,4))) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,5))) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
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
		if( luatop<6 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< wxObject >::check(L,4)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,6476046) ) return false;
		if( (!(Luna< wxGridCellCoords >::check(L,6))) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
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

	inline static bool _lg_typecheck_GetBottomRightCoords(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBottomRow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLeftCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRightCol(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopLeftCoords(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopRow(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGridRangeSelectEvent::wxGridRangeSelectEvent()
	static wxGridRangeSelectEvent* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGridRangeSelectEvent::wxGridRangeSelectEvent() function, expected prototype:\nwxGridRangeSelectEvent::wxGridRangeSelectEvent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxGridRangeSelectEvent();
	}

	// wxGridRangeSelectEvent::wxGridRangeSelectEvent(int id, int type, wxObject * obj, const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ())
	static wxGridRangeSelectEvent* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGridRangeSelectEvent::wxGridRangeSelectEvent(int id, int type, wxObject * obj, const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ()) function, expected prototype:\nwxGridRangeSelectEvent::wxGridRangeSelectEvent(int id, int type, wxObject * obj, const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ())\nClass arguments details:\narg 3 ID = 56813631\narg 4 ID = 6476046\narg 5 ID = 6476046\narg 7 ID = 92036952\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,1);
		int type=(int)lua_tointeger(L,2);
		wxObject* obj=(Luna< wxObject >::check(L,3));
		const wxGridCellCoords* topLeft_ptr=(Luna< wxGridCellCoords >::check(L,4));
		if( !topLeft_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg topLeft in wxGridRangeSelectEvent::wxGridRangeSelectEvent function");
		}
		const wxGridCellCoords & topLeft=*topLeft_ptr;
		const wxGridCellCoords* bottomRight_ptr=(Luna< wxGridCellCoords >::check(L,5));
		if( !bottomRight_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bottomRight in wxGridRangeSelectEvent::wxGridRangeSelectEvent function");
		}
		const wxGridCellCoords & bottomRight=*bottomRight_ptr;
		bool sel=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;
		const wxKeyboardState* kbd_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxKeyboardState >(L,7)) : NULL;
		if( luatop>6 && !kbd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg kbd in wxGridRangeSelectEvent::wxGridRangeSelectEvent function");
		}
		const wxKeyboardState & kbd=luatop>6 ? *kbd_ptr : (const wxKeyboardState&)wxKeyboardState ();

		return new wxGridRangeSelectEvent(id, type, obj, topLeft, bottomRight, sel, kbd);
	}

	// wxGridRangeSelectEvent::wxGridRangeSelectEvent(lua_Table * data)
	static wxGridRangeSelectEvent* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxGridRangeSelectEvent::wxGridRangeSelectEvent(lua_Table * data) function, expected prototype:\nwxGridRangeSelectEvent::wxGridRangeSelectEvent(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxGridRangeSelectEvent(L,NULL);
	}

	// wxGridRangeSelectEvent::wxGridRangeSelectEvent(lua_Table * data, int id, int type, wxObject * obj, const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ())
	static wxGridRangeSelectEvent* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxGridRangeSelectEvent::wxGridRangeSelectEvent(lua_Table * data, int id, int type, wxObject * obj, const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ()) function, expected prototype:\nwxGridRangeSelectEvent::wxGridRangeSelectEvent(lua_Table * data, int id, int type, wxObject * obj, const wxGridCellCoords & topLeft, const wxGridCellCoords & bottomRight, bool sel = true, const wxKeyboardState & kbd = wxKeyboardState ())\nClass arguments details:\narg 4 ID = 56813631\narg 5 ID = 6476046\narg 6 ID = 6476046\narg 8 ID = 92036952\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,2);
		int type=(int)lua_tointeger(L,3);
		wxObject* obj=(Luna< wxObject >::check(L,4));
		const wxGridCellCoords* topLeft_ptr=(Luna< wxGridCellCoords >::check(L,5));
		if( !topLeft_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg topLeft in wxGridRangeSelectEvent::wxGridRangeSelectEvent function");
		}
		const wxGridCellCoords & topLeft=*topLeft_ptr;
		const wxGridCellCoords* bottomRight_ptr=(Luna< wxGridCellCoords >::check(L,6));
		if( !bottomRight_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bottomRight in wxGridRangeSelectEvent::wxGridRangeSelectEvent function");
		}
		const wxGridCellCoords & bottomRight=*bottomRight_ptr;
		bool sel=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)true;
		const wxKeyboardState* kbd_ptr=luatop>7 ? (Luna< wxObject >::checkSubType< wxKeyboardState >(L,8)) : NULL;
		if( luatop>7 && !kbd_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg kbd in wxGridRangeSelectEvent::wxGridRangeSelectEvent function");
		}
		const wxKeyboardState & kbd=luatop>7 ? *kbd_ptr : (const wxKeyboardState&)wxKeyboardState ();

		return new wrapper_wxGridRangeSelectEvent(L,NULL, id, type, obj, topLeft, bottomRight, sel, kbd);
	}

	// Overload binder for wxGridRangeSelectEvent::wxGridRangeSelectEvent
	static wxGridRangeSelectEvent* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxGridRangeSelectEvent, cannot match any of the overloads for function wxGridRangeSelectEvent:\n  wxGridRangeSelectEvent()\n  wxGridRangeSelectEvent(int, int, wxObject *, const wxGridCellCoords &, const wxGridCellCoords &, bool, const wxKeyboardState &)\n  wxGridRangeSelectEvent(lua_Table *)\n  wxGridRangeSelectEvent(lua_Table *, int, int, wxObject *, const wxGridCellCoords &, const wxGridCellCoords &, bool, const wxKeyboardState &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxGridRangeSelectEvent::AltDown() const
	static int _bind_AltDown(lua_State *L) {
		if (!_lg_typecheck_AltDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridRangeSelectEvent::AltDown() const function, expected prototype:\nbool wxGridRangeSelectEvent::AltDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridRangeSelectEvent::AltDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AltDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridRangeSelectEvent::ControlDown() const
	static int _bind_ControlDown(lua_State *L) {
		if (!_lg_typecheck_ControlDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridRangeSelectEvent::ControlDown() const function, expected prototype:\nbool wxGridRangeSelectEvent::ControlDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridRangeSelectEvent::ControlDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ControlDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxGridCellCoords wxGridRangeSelectEvent::GetBottomRightCoords()
	static int _bind_GetBottomRightCoords(lua_State *L) {
		if (!_lg_typecheck_GetBottomRightCoords(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellCoords wxGridRangeSelectEvent::GetBottomRightCoords() function, expected prototype:\nwxGridCellCoords wxGridRangeSelectEvent::GetBottomRightCoords()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellCoords wxGridRangeSelectEvent::GetBottomRightCoords(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellCoords stack_lret = self->GetBottomRightCoords();
		wxGridCellCoords* lret = new wxGridCellCoords(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellCoords >::push(L,lret,true);

		return 1;
	}

	// int wxGridRangeSelectEvent::GetBottomRow()
	static int _bind_GetBottomRow(lua_State *L) {
		if (!_lg_typecheck_GetBottomRow(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridRangeSelectEvent::GetBottomRow() function, expected prototype:\nint wxGridRangeSelectEvent::GetBottomRow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridRangeSelectEvent::GetBottomRow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetBottomRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridRangeSelectEvent::GetLeftCol()
	static int _bind_GetLeftCol(lua_State *L) {
		if (!_lg_typecheck_GetLeftCol(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridRangeSelectEvent::GetLeftCol() function, expected prototype:\nint wxGridRangeSelectEvent::GetLeftCol()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridRangeSelectEvent::GetLeftCol(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetLeftCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGridRangeSelectEvent::GetRightCol()
	static int _bind_GetRightCol(lua_State *L) {
		if (!_lg_typecheck_GetRightCol(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridRangeSelectEvent::GetRightCol() function, expected prototype:\nint wxGridRangeSelectEvent::GetRightCol()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridRangeSelectEvent::GetRightCol(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRightCol();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxGridCellCoords wxGridRangeSelectEvent::GetTopLeftCoords()
	static int _bind_GetTopLeftCoords(lua_State *L) {
		if (!_lg_typecheck_GetTopLeftCoords(L)) {
			luaL_error(L, "luna typecheck failed in wxGridCellCoords wxGridRangeSelectEvent::GetTopLeftCoords() function, expected prototype:\nwxGridCellCoords wxGridRangeSelectEvent::GetTopLeftCoords()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxGridCellCoords wxGridRangeSelectEvent::GetTopLeftCoords(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxGridCellCoords stack_lret = self->GetTopLeftCoords();
		wxGridCellCoords* lret = new wxGridCellCoords(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxGridCellCoords >::push(L,lret,true);

		return 1;
	}

	// int wxGridRangeSelectEvent::GetTopRow()
	static int _bind_GetTopRow(lua_State *L) {
		if (!_lg_typecheck_GetTopRow(L)) {
			luaL_error(L, "luna typecheck failed in int wxGridRangeSelectEvent::GetTopRow() function, expected prototype:\nint wxGridRangeSelectEvent::GetTopRow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGridRangeSelectEvent::GetTopRow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetTopRow();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGridRangeSelectEvent::MetaDown() const
	static int _bind_MetaDown(lua_State *L) {
		if (!_lg_typecheck_MetaDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridRangeSelectEvent::MetaDown() const function, expected prototype:\nbool wxGridRangeSelectEvent::MetaDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridRangeSelectEvent::MetaDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MetaDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridRangeSelectEvent::Selecting()
	static int _bind_Selecting(lua_State *L) {
		if (!_lg_typecheck_Selecting(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridRangeSelectEvent::Selecting() function, expected prototype:\nbool wxGridRangeSelectEvent::Selecting()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridRangeSelectEvent::Selecting(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Selecting();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGridRangeSelectEvent::ShiftDown() const
	static int _bind_ShiftDown(lua_State *L) {
		if (!_lg_typecheck_ShiftDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGridRangeSelectEvent::ShiftDown() const function, expected prototype:\nbool wxGridRangeSelectEvent::ShiftDown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGridRangeSelectEvent::ShiftDown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShiftDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxGridRangeSelectEvent::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGridRangeSelectEvent::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGridRangeSelectEvent::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGridRangeSelectEvent::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGridRangeSelectEvent::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// wxEventCategory wxGridRangeSelectEvent::base_GetEventCategory() const
	static int _bind_base_GetEventCategory(lua_State *L) {
		if (!_lg_typecheck_base_GetEventCategory(L)) {
			luaL_error(L, "luna typecheck failed in wxEventCategory wxGridRangeSelectEvent::base_GetEventCategory() const function, expected prototype:\nwxEventCategory wxGridRangeSelectEvent::base_GetEventCategory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEventCategory wxGridRangeSelectEvent::base_GetEventCategory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEventCategory lret = self->wxGridRangeSelectEvent::GetEventCategory();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxEvent * wxGridRangeSelectEvent::base_Clone() const
	static int _bind_base_Clone(lua_State *L) {
		if (!_lg_typecheck_base_Clone(L)) {
			luaL_error(L, "luna typecheck failed in wxEvent * wxGridRangeSelectEvent::base_Clone() const function, expected prototype:\nwxEvent * wxGridRangeSelectEvent::base_Clone() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGridRangeSelectEvent* self=Luna< wxObject >::checkSubType< wxGridRangeSelectEvent >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvent * wxGridRangeSelectEvent::base_Clone() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvent * lret = self->wxGridRangeSelectEvent::Clone();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvent >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxGridRangeSelectEvent* LunaTraits< wxGridRangeSelectEvent >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGridRangeSelectEvent::_bind_ctor(L);
}

void LunaTraits< wxGridRangeSelectEvent >::_bind_dtor(wxGridRangeSelectEvent* obj) {
	delete obj;
}

const char LunaTraits< wxGridRangeSelectEvent >::className[] = "wxGridRangeSelectEvent";
const char LunaTraits< wxGridRangeSelectEvent >::fullName[] = "wxGridRangeSelectEvent";
const char LunaTraits< wxGridRangeSelectEvent >::moduleName[] = "wx";
const char* LunaTraits< wxGridRangeSelectEvent >::parents[] = {"wx.wxNotifyEvent", 0};
const int LunaTraits< wxGridRangeSelectEvent >::hash = 75623635;
const int LunaTraits< wxGridRangeSelectEvent >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxGridRangeSelectEvent >::methods[] = {
	{"AltDown", &luna_wrapper_wxGridRangeSelectEvent::_bind_AltDown},
	{"ControlDown", &luna_wrapper_wxGridRangeSelectEvent::_bind_ControlDown},
	{"GetBottomRightCoords", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetBottomRightCoords},
	{"GetBottomRow", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetBottomRow},
	{"GetLeftCol", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetLeftCol},
	{"GetRightCol", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetRightCol},
	{"GetTopLeftCoords", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetTopLeftCoords},
	{"GetTopRow", &luna_wrapper_wxGridRangeSelectEvent::_bind_GetTopRow},
	{"MetaDown", &luna_wrapper_wxGridRangeSelectEvent::_bind_MetaDown},
	{"Selecting", &luna_wrapper_wxGridRangeSelectEvent::_bind_Selecting},
	{"ShiftDown", &luna_wrapper_wxGridRangeSelectEvent::_bind_ShiftDown},
	{"base_GetClassInfo", &luna_wrapper_wxGridRangeSelectEvent::_bind_base_GetClassInfo},
	{"base_GetEventCategory", &luna_wrapper_wxGridRangeSelectEvent::_bind_base_GetEventCategory},
	{"base_Clone", &luna_wrapper_wxGridRangeSelectEvent::_bind_base_Clone},
	{"fromVoid", &luna_wrapper_wxGridRangeSelectEvent::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGridRangeSelectEvent::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGridRangeSelectEvent::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGridRangeSelectEvent >::converters[] = {
	{"wxObject", &luna_wrapper_wxGridRangeSelectEvent::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGridRangeSelectEvent >::enumValues[] = {
	{0,0}
};


