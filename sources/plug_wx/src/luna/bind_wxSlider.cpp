#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSlider.h>

class luna_wrapper_wxSlider {
public:
	typedef Luna< wxSlider > luna_t;

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

		wxSlider* self= (wxSlider*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSlider >::push(L,self,false);
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
		//wxSlider* ptr= dynamic_cast< wxSlider* >(Luna< wxObject >::check(L,1));
		wxSlider* ptr= luna_caster< wxObject, wxSlider >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSlider >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>10 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>5 && (!(Luna< wxPoint >::check(L,6))) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>6 && (!(Luna< wxSize >::check(L,7))) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,56813631) ) return false;
		if( luatop>8 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,9))) ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>11 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,25723480) ) return false;
		if( luatop>6 && (!(Luna< wxPoint >::check(L,7))) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,20268751) ) return false;
		if( luatop>7 && (!(Luna< wxSize >::check(L,8))) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( luatop>9 && !Luna<void>::has_uniqueid(L,10,56813631) ) return false;
		if( luatop>9 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,10))) ) return false;
		if( luatop>10 && lua_type(L,11)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ClearSel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearTicks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>11 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,25723480) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,20268751) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( luatop>9 && !Luna<void>::has_uniqueid(L,10,56813631) ) return false;
		if( luatop>10 && lua_type(L,11)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLineSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetThumbLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTickFreq(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetLineSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetThumbLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTick(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTickFreq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AcceptsFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AcceptsFocusRecursively(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HasFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetCanFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFocusFromKbd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_AddChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RemoveChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Reparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_AlwaysShowScrollbars(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetScrollPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetScrollRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetScrollThumb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsScrollbarAlwaysShown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollLines(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollPages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollWindow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetScrollPos(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetScrollbar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ClientToWindowSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_WindowToClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Fit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_FitInside(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEffectiveMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMaxClientSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMaxSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetBestVirtualSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetWindowBorderSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SendSizeEvent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMinSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSizeHints_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,20268751) ) return false;
		if( luatop>2 && (!(Luna< wxSize >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!(Luna< wxSize >::check(L,4))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSizeHints_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClientAreaOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ClearBackground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetBackgroundStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetCharHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetCharWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDefaultAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Refresh(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetBackgroundStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShouldInheritColours(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetThemeEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetThemeEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanSetTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetTransparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetExtraStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Lower(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Raise(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HideWithEffect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsShownOnScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Enable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowWithEffect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetHelpTextAtPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetValidator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetValidator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_TransferDataFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_TransferDataToWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Validate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetAcceleratorTable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetDropTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetDropTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93694316)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DragAcceptFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HasCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_WarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DoUpdateWindowUI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HasMultiplePages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InheritAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InitDialog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsDoubleBuffered(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsRetained(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsTopLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_MakeModal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnInternalIdle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_RegisterHotKey(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UnregisterHotKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UpdateWindowUI(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Command(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ClearSel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ClearTicks(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLineSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMax(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetPageSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelStart(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetThumbLength(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetTickFreq(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetLineSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPageSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetThumbLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetTick(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetTickFreq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSlider::wxSlider()
	static wxSlider* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSlider::wxSlider() function, expected prototype:\nwxSlider::wxSlider()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxSlider();
	}

	// wxSlider::wxSlider(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr)
	static wxSlider* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSlider::wxSlider(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr) function, expected prototype:\nwxSlider::wxSlider(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 6 ID = 25723480\narg 7 ID = 20268751\narg 9 ID = 56813631\narg 10 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		int value=(int)lua_tointeger(L,3);
		int minValue=(int)lua_tointeger(L,4);
		int maxValue=(int)lua_tointeger(L,5);
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSlider::wxSlider function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSlider::wxSlider function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>7 ? (long)lua_tonumber(L,8) : (long)::wxHORIZONTAL;
		const wxValidator* validator_ptr=luatop>8 ? (Luna< wxObject >::checkSubType< wxValidator >(L,9)) : NULL;
		if( luatop>8 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSlider::wxSlider function");
		}
		const wxValidator & validator=luatop>8 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wxSlider(parent, id, value, minValue, maxValue, pos, size, style, validator, name);
	}

	// wxSlider::wxSlider(lua_Table * data)
	static wxSlider* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxSlider::wxSlider(lua_Table * data) function, expected prototype:\nwxSlider::wxSlider(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxSlider(L,NULL);
	}

	// wxSlider::wxSlider(lua_Table * data, wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr)
	static wxSlider* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxSlider::wxSlider(lua_Table * data, wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr) function, expected prototype:\nwxSlider::wxSlider(lua_Table * data, wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 7 ID = 25723480\narg 8 ID = 20268751\narg 10 ID = 56813631\narg 11 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		int value=(int)lua_tointeger(L,4);
		int minValue=(int)lua_tointeger(L,5);
		int maxValue=(int)lua_tointeger(L,6);
		const wxPoint* pos_ptr=luatop>6 ? (Luna< wxPoint >::check(L,7)) : NULL;
		if( luatop>6 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSlider::wxSlider function");
		}
		const wxPoint & pos=luatop>6 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>7 ? (Luna< wxSize >::check(L,8)) : NULL;
		if( luatop>7 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSlider::wxSlider function");
		}
		const wxSize & size=luatop>7 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>8 ? (long)lua_tonumber(L,9) : (long)::wxHORIZONTAL;
		const wxValidator* validator_ptr=luatop>9 ? (Luna< wxObject >::checkSubType< wxValidator >(L,10)) : NULL;
		if( luatop>9 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSlider::wxSlider function");
		}
		const wxValidator & validator=luatop>9 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,11),lua_objlen(L,11));

		return new wrapper_wxSlider(L,NULL, parent, id, value, minValue, maxValue, pos, size, style, validator, name);
	}

	// Overload binder for wxSlider::wxSlider
	static wxSlider* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxSlider, cannot match any of the overloads for function wxSlider:\n  wxSlider()\n  wxSlider(wxWindow *, int, int, int, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxSlider(lua_Table *)\n  wxSlider(lua_Table *, wxWindow *, int, int, int, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxSlider::ClearSel()
	static int _bind_ClearSel(lua_State *L) {
		if (!_lg_typecheck_ClearSel(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::ClearSel() function, expected prototype:\nvoid wxSlider::ClearSel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::ClearSel(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearSel();

		return 0;
	}

	// void wxSlider::ClearTicks()
	static int _bind_ClearTicks(lua_State *L) {
		if (!_lg_typecheck_ClearTicks(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::ClearTicks() function, expected prototype:\nvoid wxSlider::ClearTicks()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::ClearTicks(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearTicks();

		return 0;
	}

	// bool wxSlider::Create(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & point = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::Create(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & point = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr) function, expected prototype:\nbool wxSlider::Create(wxWindow * parent, int id, int value, int minValue, int maxValue, const wxPoint & point = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxHORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSliderNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 6 ID = 25723480\narg 7 ID = 20268751\narg 9 ID = 56813631\narg 10 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		int value=(int)lua_tointeger(L,4);
		int minValue=(int)lua_tointeger(L,5);
		int maxValue=(int)lua_tointeger(L,6);
		const wxPoint* point_ptr=luatop>6 ? (Luna< wxPoint >::check(L,7)) : NULL;
		if( luatop>6 && !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxSlider::Create function");
		}
		const wxPoint & point=luatop>6 ? *point_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>7 ? (Luna< wxSize >::check(L,8)) : NULL;
		if( luatop>7 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSlider::Create function");
		}
		const wxSize & size=luatop>7 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>8 ? (long)lua_tonumber(L,9) : (long)::wxHORIZONTAL;
		const wxValidator* validator_ptr=luatop>9 ? (Luna< wxObject >::checkSubType< wxValidator >(L,10)) : NULL;
		if( luatop>9 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSlider::Create function");
		}
		const wxValidator & validator=luatop>9 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,11),lua_objlen(L,11));

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::Create(wxWindow *, int, int, int, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, value, minValue, maxValue, point, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxSlider::GetLineSize() const
	static int _bind_GetLineSize(lua_State *L) {
		if (!_lg_typecheck_GetLineSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::GetLineSize() const function, expected prototype:\nint wxSlider::GetLineSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::GetLineSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetLineSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetMax() const
	static int _bind_GetMax(lua_State *L) {
		if (!_lg_typecheck_GetMax(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::GetMax() const function, expected prototype:\nint wxSlider::GetMax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::GetMax() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetMin() const
	static int _bind_GetMin(lua_State *L) {
		if (!_lg_typecheck_GetMin(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::GetMin() const function, expected prototype:\nint wxSlider::GetMin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::GetMin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetPageSize() const
	static int _bind_GetPageSize(lua_State *L) {
		if (!_lg_typecheck_GetPageSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::GetPageSize() const function, expected prototype:\nint wxSlider::GetPageSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::GetPageSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPageSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetSelEnd() const
	static int _bind_GetSelEnd(lua_State *L) {
		if (!_lg_typecheck_GetSelEnd(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::GetSelEnd() const function, expected prototype:\nint wxSlider::GetSelEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::GetSelEnd() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSelEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetSelStart() const
	static int _bind_GetSelStart(lua_State *L) {
		if (!_lg_typecheck_GetSelStart(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::GetSelStart() const function, expected prototype:\nint wxSlider::GetSelStart() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::GetSelStart() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSelStart();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetThumbLength() const
	static int _bind_GetThumbLength(lua_State *L) {
		if (!_lg_typecheck_GetThumbLength(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::GetThumbLength() const function, expected prototype:\nint wxSlider::GetThumbLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::GetThumbLength() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetThumbLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetTickFreq() const
	static int _bind_GetTickFreq(lua_State *L) {
		if (!_lg_typecheck_GetTickFreq(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::GetTickFreq() const function, expected prototype:\nint wxSlider::GetTickFreq() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::GetTickFreq() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetTickFreq();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::GetValue() const function, expected prototype:\nint wxSlider::GetValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::GetValue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSlider::SetLineSize(int lineSize)
	static int _bind_SetLineSize(lua_State *L) {
		if (!_lg_typecheck_SetLineSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::SetLineSize(int lineSize) function, expected prototype:\nvoid wxSlider::SetLineSize(int lineSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lineSize=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::SetLineSize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLineSize(lineSize);

		return 0;
	}

	// void wxSlider::SetPageSize(int pageSize)
	static int _bind_SetPageSize(lua_State *L) {
		if (!_lg_typecheck_SetPageSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::SetPageSize(int pageSize) function, expected prototype:\nvoid wxSlider::SetPageSize(int pageSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pageSize=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::SetPageSize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPageSize(pageSize);

		return 0;
	}

	// void wxSlider::SetRange(int minValue, int maxValue)
	static int _bind_SetRange(lua_State *L) {
		if (!_lg_typecheck_SetRange(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::SetRange(int minValue, int maxValue) function, expected prototype:\nvoid wxSlider::SetRange(int minValue, int maxValue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int minValue=(int)lua_tointeger(L,2);
		int maxValue=(int)lua_tointeger(L,3);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::SetRange(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRange(minValue, maxValue);

		return 0;
	}

	// void wxSlider::SetSelection(int startPos, int endPos)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::SetSelection(int startPos, int endPos) function, expected prototype:\nvoid wxSlider::SetSelection(int startPos, int endPos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int startPos=(int)lua_tointeger(L,2);
		int endPos=(int)lua_tointeger(L,3);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::SetSelection(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelection(startPos, endPos);

		return 0;
	}

	// void wxSlider::SetThumbLength(int len)
	static int _bind_SetThumbLength(lua_State *L) {
		if (!_lg_typecheck_SetThumbLength(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::SetThumbLength(int len) function, expected prototype:\nvoid wxSlider::SetThumbLength(int len)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int len=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::SetThumbLength(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetThumbLength(len);

		return 0;
	}

	// void wxSlider::SetTick(int tickPos)
	static int _bind_SetTick(lua_State *L) {
		if (!_lg_typecheck_SetTick(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::SetTick(int tickPos) function, expected prototype:\nvoid wxSlider::SetTick(int tickPos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tickPos=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::SetTick(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTick(tickPos);

		return 0;
	}

	// void wxSlider::SetTickFreq(int n)
	static int _bind_SetTickFreq(lua_State *L) {
		if (!_lg_typecheck_SetTickFreq(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::SetTickFreq(int n) function, expected prototype:\nvoid wxSlider::SetTickFreq(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::SetTickFreq(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTickFreq(n);

		return 0;
	}

	// void wxSlider::SetValue(int value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::SetValue(int value) function, expected prototype:\nvoid wxSlider::SetValue(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::SetValue(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValue(value);

		return 0;
	}

	// wxClassInfo * wxSlider::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSlider::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSlider::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSlider::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSlider::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxSlider::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_AcceptsFocus() const function, expected prototype:\nbool wxSlider::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxSlider::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxSlider::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_HasFocus() const function, expected prototype:\nbool wxSlider::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSlider::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxSlider::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetCanFocus(canFocus);

		return 0;
	}

	// void wxSlider::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetFocus() function, expected prototype:\nvoid wxSlider::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetFocus();

		return 0;
	}

	// void wxSlider::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetFocusFromKbd() function, expected prototype:\nvoid wxSlider::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetFocusFromKbd();

		return 0;
	}

	// void wxSlider::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxSlider::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::AddChild(child);

		return 0;
	}

	// void wxSlider::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxSlider::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::RemoveChild(child);

		return 0;
	}

	// bool wxSlider::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxSlider::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSlider::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxSlider::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxSlider::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxSlider::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxSlider::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxSlider::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxSlider::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxSlider::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_ScrollLines(int lines) function, expected prototype:\nbool wxSlider::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_ScrollPages(int pages) function, expected prototype:\nbool wxSlider::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSlider::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxSlider::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxSlider::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxSlider::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxSlider::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxSlider::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxSlider::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSlider::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxSlider::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSlider::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSlider::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSlider::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSlider::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSlider::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxSlider::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSlider::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSlider::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSlider::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSlider::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_Fit() function, expected prototype:\nvoid wxSlider::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::Fit();

		return 0;
	}

	// void wxSlider::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_FitInside() function, expected prototype:\nvoid wxSlider::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::FitInside();

		return 0;
	}

	// wxSize wxSlider::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSlider::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxSlider::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSlider::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSlider::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSlider::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSlider::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxSlider::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSlider::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSlider::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSlider::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSlider::base_GetMaxSize() const function, expected prototype:\nwxSize wxSlider::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSlider::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSlider::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSlider::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSlider::base_GetMinClientSize() const function, expected prototype:\nwxSize wxSlider::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSlider::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSlider::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSlider::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSlider::base_GetMinSize() const function, expected prototype:\nwxSize wxSlider::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSlider::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSlider::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSlider::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSlider::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxSlider::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSlider::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSlider::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSlider::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSlider::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxSlider::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSlider::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSlider::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxSlider::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxSlider::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSlider::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxSlider::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SendSizeEvent(flags);

		return 0;
	}

	// void wxSlider::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxSlider::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSlider::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetMaxClientSize(size);

		return 0;
	}

	// void wxSlider::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxSlider::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSlider::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetMaxSize(size);

		return 0;
	}

	// void wxSlider::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxSlider::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSlider::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetMinClientSize(size);

		return 0;
	}

	// void wxSlider::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxSlider::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSlider::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetMinSize(size);

		return 0;
	}

	// void wxSlider::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxSlider::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxSlider::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxSlider::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxSlider::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxSlider::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxSlider::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxSlider::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxSlider::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxSlider::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxSlider::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxSlider::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxSlider::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxSlider::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_ClearBackground() function, expected prototype:\nvoid wxSlider::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxSlider::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxSlider::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxSlider::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxSlider::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxSlider::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetCharHeight() const function, expected prototype:\nint wxSlider::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetCharWidth() const function, expected prototype:\nint wxSlider::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxSlider::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxSlider::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxSlider::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxSlider::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxSlider::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxSlider::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxSlider::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxSlider::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_Update() function, expected prototype:\nvoid wxSlider::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::Update();

		return 0;
	}

	// bool wxSlider::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxSlider::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxSlider::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxSlider::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_ShouldInheritColours() const function, expected prototype:\nbool wxSlider::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSlider::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxSlider::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxSlider::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_GetThemeEnabled() const function, expected prototype:\nbool wxSlider::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_CanSetTransparent() function, expected prototype:\nbool wxSlider::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxSlider::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSlider::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxSlider::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetNextHandler(handler);

		return 0;
	}

	// void wxSlider::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxSlider::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetPreviousHandler(handler);

		return 0;
	}

	// long wxSlider::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxSlider::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxSlider::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxSlider::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxSlider::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSlider::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxSlider::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxSlider::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxSlider::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxSlider::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_Lower() function, expected prototype:\nvoid wxSlider::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::Lower();

		return 0;
	}

	// void wxSlider::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_Raise() function, expected prototype:\nvoid wxSlider::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::Raise();

		return 0;
	}

	// bool wxSlider::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxSlider::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_IsShown() const function, expected prototype:\nbool wxSlider::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_IsShownOnScreen() const function, expected prototype:\nbool wxSlider::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_Enable(bool enable = true) function, expected prototype:\nbool wxSlider::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_Show(bool show = true) function, expected prototype:\nbool wxSlider::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxSlider::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxSlider::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxSlider::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxSlider::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxSlider::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxSlider::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxSlider::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxSlider::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxSlider::base_GetValidator() function, expected prototype:\nwxValidator * wxSlider::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxSlider::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxSlider::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxSlider::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxSlider::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSlider::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetValidator(validator);

		return 0;
	}

	// bool wxSlider::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_TransferDataFromWindow() function, expected prototype:\nbool wxSlider::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_TransferDataToWindow() function, expected prototype:\nbool wxSlider::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_Validate() function, expected prototype:\nbool wxSlider::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxSlider::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxSlider::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxSlider::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxSlider::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxSlider::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxSlider::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxSlider::base_GetName() const function, expected prototype:\nwxString wxSlider::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxSlider::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxSlider::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxSlider::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxSlider::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetLayoutDirection(dir);

		return 0;
	}

	// void wxSlider::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetName(const wxString & name) function, expected prototype:\nvoid wxSlider::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetName(name);

		return 0;
	}

	// void wxSlider::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxSlider::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxSlider::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxSlider::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_Destroy() function, expected prototype:\nbool wxSlider::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxSlider::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxSlider::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxSlider::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxSlider::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxSlider::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxSlider::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxSlider::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetDropTarget(target);

		return 0;
	}

	// void wxSlider::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxSlider::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxSlider::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_Layout() function, expected prototype:\nbool wxSlider::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_HasCapture() const function, expected prototype:\nbool wxSlider::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxSlider::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxSlider::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSlider::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxSlider::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::WarpPointer(x, y);

		return 0;
	}

	// void wxSlider::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxSlider::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxSlider::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxSlider::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxSlider::base_GetHandle() const function, expected prototype:\nHWND wxSlider::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxSlider::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxSlider::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxSlider::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_HasMultiplePages() const function, expected prototype:\nbool wxSlider::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSlider::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_InheritAttributes() function, expected prototype:\nvoid wxSlider::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::InheritAttributes();

		return 0;
	}

	// void wxSlider::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_InitDialog() function, expected prototype:\nvoid wxSlider::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::InitDialog();

		return 0;
	}

	// bool wxSlider::base_IsDoubleBuffered() const
	static int _bind_base_IsDoubleBuffered(lua_State *L) {
		if (!_lg_typecheck_base_IsDoubleBuffered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_IsDoubleBuffered() const function, expected prototype:\nbool wxSlider::base_IsDoubleBuffered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_IsDoubleBuffered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::IsDoubleBuffered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_IsRetained() const function, expected prototype:\nbool wxSlider::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_IsTopLevel() const function, expected prototype:\nbool wxSlider::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSlider::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxSlider::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::MakeModal(modal);

		return 0;
	}

	// void wxSlider::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_OnInternalIdle() function, expected prototype:\nvoid wxSlider::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::OnInternalIdle();

		return 0;
	}

	// bool wxSlider::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxSlider::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSlider::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSlider::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxSlider::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSlider::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSlider::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSlider::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxSlider::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::UpdateWindowUI(flags);

		return 0;
	}

	// void wxSlider::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxSlider::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxSlider::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::Command(event);

		return 0;
	}

	// wxString wxSlider::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxSlider::base_GetLabel() const function, expected prototype:\nwxString wxSlider::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxSlider::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxSlider::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxSlider::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxSlider::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetLabel(label);

		return 0;
	}

	// void wxSlider::base_ClearSel()
	static int _bind_base_ClearSel(lua_State *L) {
		if (!_lg_typecheck_base_ClearSel(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_ClearSel() function, expected prototype:\nvoid wxSlider::base_ClearSel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_ClearSel(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::ClearSel();

		return 0;
	}

	// void wxSlider::base_ClearTicks()
	static int _bind_base_ClearTicks(lua_State *L) {
		if (!_lg_typecheck_base_ClearTicks(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_ClearTicks() function, expected prototype:\nvoid wxSlider::base_ClearTicks()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_ClearTicks(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::ClearTicks();

		return 0;
	}

	// int wxSlider::base_GetLineSize() const
	static int _bind_base_GetLineSize(lua_State *L) {
		if (!_lg_typecheck_base_GetLineSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetLineSize() const function, expected prototype:\nint wxSlider::base_GetLineSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetLineSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetLineSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetMax() const
	static int _bind_base_GetMax(lua_State *L) {
		if (!_lg_typecheck_base_GetMax(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetMax() const function, expected prototype:\nint wxSlider::base_GetMax() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetMax() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetMax();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetMin() const
	static int _bind_base_GetMin(lua_State *L) {
		if (!_lg_typecheck_base_GetMin(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetMin() const function, expected prototype:\nint wxSlider::base_GetMin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetMin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetMin();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetPageSize() const
	static int _bind_base_GetPageSize(lua_State *L) {
		if (!_lg_typecheck_base_GetPageSize(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetPageSize() const function, expected prototype:\nint wxSlider::base_GetPageSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetPageSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetPageSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetSelEnd() const
	static int _bind_base_GetSelEnd(lua_State *L) {
		if (!_lg_typecheck_base_GetSelEnd(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetSelEnd() const function, expected prototype:\nint wxSlider::base_GetSelEnd() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetSelEnd() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetSelEnd();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetSelStart() const
	static int _bind_base_GetSelStart(lua_State *L) {
		if (!_lg_typecheck_base_GetSelStart(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetSelStart() const function, expected prototype:\nint wxSlider::base_GetSelStart() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetSelStart() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetSelStart();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetThumbLength() const
	static int _bind_base_GetThumbLength(lua_State *L) {
		if (!_lg_typecheck_base_GetThumbLength(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetThumbLength() const function, expected prototype:\nint wxSlider::base_GetThumbLength() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetThumbLength() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetThumbLength();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetTickFreq() const
	static int _bind_base_GetTickFreq(lua_State *L) {
		if (!_lg_typecheck_base_GetTickFreq(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetTickFreq() const function, expected prototype:\nint wxSlider::base_GetTickFreq() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetTickFreq() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetTickFreq();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSlider::base_GetValue() const
	static int _bind_base_GetValue(lua_State *L) {
		if (!_lg_typecheck_base_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in int wxSlider::base_GetValue() const function, expected prototype:\nint wxSlider::base_GetValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSlider::base_GetValue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSlider::GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSlider::base_SetLineSize(int lineSize)
	static int _bind_base_SetLineSize(lua_State *L) {
		if (!_lg_typecheck_base_SetLineSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetLineSize(int lineSize) function, expected prototype:\nvoid wxSlider::base_SetLineSize(int lineSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lineSize=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetLineSize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetLineSize(lineSize);

		return 0;
	}

	// void wxSlider::base_SetPageSize(int pageSize)
	static int _bind_base_SetPageSize(lua_State *L) {
		if (!_lg_typecheck_base_SetPageSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetPageSize(int pageSize) function, expected prototype:\nvoid wxSlider::base_SetPageSize(int pageSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pageSize=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetPageSize(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetPageSize(pageSize);

		return 0;
	}

	// void wxSlider::base_SetRange(int minValue, int maxValue)
	static int _bind_base_SetRange(lua_State *L) {
		if (!_lg_typecheck_base_SetRange(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetRange(int minValue, int maxValue) function, expected prototype:\nvoid wxSlider::base_SetRange(int minValue, int maxValue)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int minValue=(int)lua_tointeger(L,2);
		int maxValue=(int)lua_tointeger(L,3);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetRange(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetRange(minValue, maxValue);

		return 0;
	}

	// void wxSlider::base_SetSelection(int startPos, int endPos)
	static int _bind_base_SetSelection(lua_State *L) {
		if (!_lg_typecheck_base_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetSelection(int startPos, int endPos) function, expected prototype:\nvoid wxSlider::base_SetSelection(int startPos, int endPos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int startPos=(int)lua_tointeger(L,2);
		int endPos=(int)lua_tointeger(L,3);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetSelection(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetSelection(startPos, endPos);

		return 0;
	}

	// void wxSlider::base_SetThumbLength(int len)
	static int _bind_base_SetThumbLength(lua_State *L) {
		if (!_lg_typecheck_base_SetThumbLength(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetThumbLength(int len) function, expected prototype:\nvoid wxSlider::base_SetThumbLength(int len)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int len=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetThumbLength(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetThumbLength(len);

		return 0;
	}

	// void wxSlider::base_SetTick(int tickPos)
	static int _bind_base_SetTick(lua_State *L) {
		if (!_lg_typecheck_base_SetTick(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetTick(int tickPos) function, expected prototype:\nvoid wxSlider::base_SetTick(int tickPos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tickPos=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetTick(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetTick(tickPos);

		return 0;
	}

	// void wxSlider::base_SetTickFreq(int n)
	static int _bind_base_SetTickFreq(lua_State *L) {
		if (!_lg_typecheck_base_SetTickFreq(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetTickFreq(int n) function, expected prototype:\nvoid wxSlider::base_SetTickFreq(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetTickFreq(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetTickFreq(n);

		return 0;
	}

	// void wxSlider::base_SetValue(int value)
	static int _bind_base_SetValue(lua_State *L) {
		if (!_lg_typecheck_base_SetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxSlider::base_SetValue(int value) function, expected prototype:\nvoid wxSlider::base_SetValue(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxSlider* self=Luna< wxObject >::checkSubType< wxSlider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSlider::base_SetValue(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSlider::SetValue(value);

		return 0;
	}


	// Operator binds:

};

wxSlider* LunaTraits< wxSlider >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSlider::_bind_ctor(L);
}

void LunaTraits< wxSlider >::_bind_dtor(wxSlider* obj) {
	delete obj;
}

const char LunaTraits< wxSlider >::className[] = "wxSlider";
const char LunaTraits< wxSlider >::fullName[] = "wxSlider";
const char LunaTraits< wxSlider >::moduleName[] = "wx";
const char* LunaTraits< wxSlider >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxSlider >::hash = 80534745;
const int LunaTraits< wxSlider >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSlider >::methods[] = {
	{"ClearSel", &luna_wrapper_wxSlider::_bind_ClearSel},
	{"ClearTicks", &luna_wrapper_wxSlider::_bind_ClearTicks},
	{"Create", &luna_wrapper_wxSlider::_bind_Create},
	{"GetLineSize", &luna_wrapper_wxSlider::_bind_GetLineSize},
	{"GetMax", &luna_wrapper_wxSlider::_bind_GetMax},
	{"GetMin", &luna_wrapper_wxSlider::_bind_GetMin},
	{"GetPageSize", &luna_wrapper_wxSlider::_bind_GetPageSize},
	{"GetSelEnd", &luna_wrapper_wxSlider::_bind_GetSelEnd},
	{"GetSelStart", &luna_wrapper_wxSlider::_bind_GetSelStart},
	{"GetThumbLength", &luna_wrapper_wxSlider::_bind_GetThumbLength},
	{"GetTickFreq", &luna_wrapper_wxSlider::_bind_GetTickFreq},
	{"GetValue", &luna_wrapper_wxSlider::_bind_GetValue},
	{"SetLineSize", &luna_wrapper_wxSlider::_bind_SetLineSize},
	{"SetPageSize", &luna_wrapper_wxSlider::_bind_SetPageSize},
	{"SetRange", &luna_wrapper_wxSlider::_bind_SetRange},
	{"SetSelection", &luna_wrapper_wxSlider::_bind_SetSelection},
	{"SetThumbLength", &luna_wrapper_wxSlider::_bind_SetThumbLength},
	{"SetTick", &luna_wrapper_wxSlider::_bind_SetTick},
	{"SetTickFreq", &luna_wrapper_wxSlider::_bind_SetTickFreq},
	{"SetValue", &luna_wrapper_wxSlider::_bind_SetValue},
	{"base_GetClassInfo", &luna_wrapper_wxSlider::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxSlider::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxSlider::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxSlider::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxSlider::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxSlider::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxSlider::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxSlider::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxSlider::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxSlider::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxSlider::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxSlider::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxSlider::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxSlider::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxSlider::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxSlider::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxSlider::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxSlider::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxSlider::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxSlider::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxSlider::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxSlider::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxSlider::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxSlider::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxSlider::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxSlider::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxSlider::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxSlider::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxSlider::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxSlider::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxSlider::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxSlider::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxSlider::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxSlider::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxSlider::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxSlider::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxSlider::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxSlider::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxSlider::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxSlider::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxSlider::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxSlider::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxSlider::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxSlider::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxSlider::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxSlider::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxSlider::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxSlider::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxSlider::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxSlider::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxSlider::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxSlider::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxSlider::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxSlider::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxSlider::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxSlider::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxSlider::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxSlider::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxSlider::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxSlider::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxSlider::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxSlider::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxSlider::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxSlider::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxSlider::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxSlider::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxSlider::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxSlider::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxSlider::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxSlider::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxSlider::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxSlider::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxSlider::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxSlider::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxSlider::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxSlider::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxSlider::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxSlider::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxSlider::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxSlider::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxSlider::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxSlider::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxSlider::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxSlider::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxSlider::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxSlider::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxSlider::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxSlider::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxSlider::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxSlider::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxSlider::_bind_base_InitDialog},
	{"base_IsDoubleBuffered", &luna_wrapper_wxSlider::_bind_base_IsDoubleBuffered},
	{"base_IsRetained", &luna_wrapper_wxSlider::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxSlider::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxSlider::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxSlider::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxSlider::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxSlider::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxSlider::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxSlider::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxSlider::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxSlider::_bind_base_SetLabel},
	{"base_ClearSel", &luna_wrapper_wxSlider::_bind_base_ClearSel},
	{"base_ClearTicks", &luna_wrapper_wxSlider::_bind_base_ClearTicks},
	{"base_GetLineSize", &luna_wrapper_wxSlider::_bind_base_GetLineSize},
	{"base_GetMax", &luna_wrapper_wxSlider::_bind_base_GetMax},
	{"base_GetMin", &luna_wrapper_wxSlider::_bind_base_GetMin},
	{"base_GetPageSize", &luna_wrapper_wxSlider::_bind_base_GetPageSize},
	{"base_GetSelEnd", &luna_wrapper_wxSlider::_bind_base_GetSelEnd},
	{"base_GetSelStart", &luna_wrapper_wxSlider::_bind_base_GetSelStart},
	{"base_GetThumbLength", &luna_wrapper_wxSlider::_bind_base_GetThumbLength},
	{"base_GetTickFreq", &luna_wrapper_wxSlider::_bind_base_GetTickFreq},
	{"base_GetValue", &luna_wrapper_wxSlider::_bind_base_GetValue},
	{"base_SetLineSize", &luna_wrapper_wxSlider::_bind_base_SetLineSize},
	{"base_SetPageSize", &luna_wrapper_wxSlider::_bind_base_SetPageSize},
	{"base_SetRange", &luna_wrapper_wxSlider::_bind_base_SetRange},
	{"base_SetSelection", &luna_wrapper_wxSlider::_bind_base_SetSelection},
	{"base_SetThumbLength", &luna_wrapper_wxSlider::_bind_base_SetThumbLength},
	{"base_SetTick", &luna_wrapper_wxSlider::_bind_base_SetTick},
	{"base_SetTickFreq", &luna_wrapper_wxSlider::_bind_base_SetTickFreq},
	{"base_SetValue", &luna_wrapper_wxSlider::_bind_base_SetValue},
	{"fromVoid", &luna_wrapper_wxSlider::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSlider::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSlider::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSlider >::converters[] = {
	{"wxObject", &luna_wrapper_wxSlider::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSlider >::enumValues[] = {
	{0,0}
};


