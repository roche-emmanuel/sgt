#include <plug_common.h>

#include <luna/wrappers/wrapper_wxComboCtrl.h>

class luna_wrapper_wxComboCtrl {
public:
	typedef Luna< wxComboCtrl > luna_t;

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

		wxComboCtrl* self= (wxComboCtrl*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxComboCtrl >::push(L,self,false);
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
		//wxComboCtrl* ptr= dynamic_cast< wxComboCtrl* >(Luna< wxObject >::check(L,1));
		wxComboCtrl* ptr= luna_caster< wxObject, wxComboCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxComboCtrl >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxTextEntry(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxComboCtrl* ptr= dynamic_cast< wxComboCtrl* >(Luna< wxTextEntry >::check(L,1));
		wxComboCtrl* ptr= luna_caster< wxTextEntry, wxComboCtrl >::cast(Luna< wxTextEntry >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxComboCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>8 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>6 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,7))) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>7 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,8))) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,56813631) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Dismiss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_EnablePopupAnimation(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmapDisabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapHover(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapPressed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetButtonSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCustomPaintWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLastPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPopupControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPopupWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HidePopup(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsPopupShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPopupWindowState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnButtonClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Paste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Popup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetButtonBitmaps(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetButtonPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCustomPaintWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInsertionPointEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMargins_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPopupAnchor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPopupControl(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,7956593)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPopupExtents(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPopupMaxHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPopupMinWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextCtrlStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetValueWithEvent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowPopup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UseAltPopupWindow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFeatures(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

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

	inline static bool _lg_typecheck_base_AppendText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CanCopy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanCut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanPaste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanRedo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_CanUndo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ChangeValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetRange(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetStringSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsEditable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Redo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetEditable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxLength(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_WriteText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Copy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Cut(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Dismiss(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetLastPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_HidePopup(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnButtonClick(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Paste(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Popup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Remove(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetHint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetInsertionPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetInsertionPointEnd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetSelection(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowPopup(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Undo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxComboCtrl::wxComboCtrl()
	static wxComboCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxComboCtrl::wxComboCtrl() function, expected prototype:\nwxComboCtrl::wxComboCtrl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxComboCtrl();
	}

	// wxComboCtrl::wxComboCtrl(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)
	static wxComboCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxComboCtrl::wxComboCtrl(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) function, expected prototype:\nwxComboCtrl::wxComboCtrl(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxID_ANY;
		wxString value(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxComboCtrl::wxComboCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::wxComboCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxComboCtrl::wxComboCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wxComboCtrl(parent, id, value, pos, size, style, validator, name);
	}

	// wxComboCtrl::wxComboCtrl(lua_Table * data)
	static wxComboCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxComboCtrl::wxComboCtrl(lua_Table * data) function, expected prototype:\nwxComboCtrl::wxComboCtrl(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxComboCtrl(L,NULL);
	}

	// wxComboCtrl::wxComboCtrl(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)
	static wxComboCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxComboCtrl::wxComboCtrl(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) function, expected prototype:\nwxComboCtrl::wxComboCtrl(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 56813631\narg 9 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxComboCtrl::wxComboCtrl function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::wxComboCtrl function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>6 ? (long)lua_tonumber(L,7) : (long)0;
		const wxValidator* validator_ptr=luatop>7 ? (Luna< wxObject >::checkSubType< wxValidator >(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxComboCtrl::wxComboCtrl function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wrapper_wxComboCtrl(L,NULL, parent, id, value, pos, size, style, validator, name);
	}

	// Overload binder for wxComboCtrl::wxComboCtrl
	static wxComboCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxComboCtrl, cannot match any of the overloads for function wxComboCtrl:\n  wxComboCtrl()\n  wxComboCtrl(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxComboCtrl(lua_Table *)\n  wxComboCtrl(lua_Table *, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxComboCtrl::Copy()
	static int _bind_Copy(lua_State *L) {
		if (!_lg_typecheck_Copy(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Copy() function, expected prototype:\nvoid wxComboCtrl::Copy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Copy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Copy();

		return 0;
	}

	// bool wxComboCtrl::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) function, expected prototype:\nbool wxComboCtrl::Create(wxWindow * parent, int id = ::wxID_ANY, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		wxString value(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxComboCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>6 ? (long)lua_tonumber(L,7) : (long)0;
		const wxValidator* validator_ptr=luatop>7 ? (Luna< wxObject >::checkSubType< wxValidator >(L,8)) : NULL;
		if( luatop>7 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxComboCtrl::Create function");
		}
		const wxValidator & validator=luatop>7 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, value, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::Cut()
	static int _bind_Cut(lua_State *L) {
		if (!_lg_typecheck_Cut(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Cut() function, expected prototype:\nvoid wxComboCtrl::Cut()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Cut(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Cut();

		return 0;
	}

	// void wxComboCtrl::Dismiss()
	static int _bind_Dismiss(lua_State *L) {
		if (!_lg_typecheck_Dismiss(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Dismiss() function, expected prototype:\nvoid wxComboCtrl::Dismiss()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Dismiss(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Dismiss();

		return 0;
	}

	// void wxComboCtrl::EnablePopupAnimation(bool enable = true)
	static int _bind_EnablePopupAnimation(lua_State *L) {
		if (!_lg_typecheck_EnablePopupAnimation(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::EnablePopupAnimation(bool enable = true) function, expected prototype:\nvoid wxComboCtrl::EnablePopupAnimation(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::EnablePopupAnimation(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnablePopupAnimation(enable);

		return 0;
	}

	// const wxBitmap & wxComboCtrl::GetBitmapDisabled() const
	static int _bind_GetBitmapDisabled(lua_State *L) {
		if (!_lg_typecheck_GetBitmapDisabled(L)) {
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxComboCtrl::GetBitmapDisabled() const function, expected prototype:\nconst wxBitmap & wxComboCtrl::GetBitmapDisabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxBitmap & wxComboCtrl::GetBitmapDisabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxBitmap* lret = &self->GetBitmapDisabled();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// const wxBitmap & wxComboCtrl::GetBitmapHover() const
	static int _bind_GetBitmapHover(lua_State *L) {
		if (!_lg_typecheck_GetBitmapHover(L)) {
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxComboCtrl::GetBitmapHover() const function, expected prototype:\nconst wxBitmap & wxComboCtrl::GetBitmapHover() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxBitmap & wxComboCtrl::GetBitmapHover() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxBitmap* lret = &self->GetBitmapHover();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// const wxBitmap & wxComboCtrl::GetBitmapNormal() const
	static int _bind_GetBitmapNormal(lua_State *L) {
		if (!_lg_typecheck_GetBitmapNormal(L)) {
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxComboCtrl::GetBitmapNormal() const function, expected prototype:\nconst wxBitmap & wxComboCtrl::GetBitmapNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxBitmap & wxComboCtrl::GetBitmapNormal() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxBitmap* lret = &self->GetBitmapNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// const wxBitmap & wxComboCtrl::GetBitmapPressed() const
	static int _bind_GetBitmapPressed(lua_State *L) {
		if (!_lg_typecheck_GetBitmapPressed(L)) {
			luaL_error(L, "luna typecheck failed in const wxBitmap & wxComboCtrl::GetBitmapPressed() const function, expected prototype:\nconst wxBitmap & wxComboCtrl::GetBitmapPressed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxBitmap & wxComboCtrl::GetBitmapPressed() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxBitmap* lret = &self->GetBitmapPressed();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,false);

		return 1;
	}

	// wxSize wxComboCtrl::GetButtonSize()
	static int _bind_GetButtonSize(lua_State *L) {
		if (!_lg_typecheck_GetButtonSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxComboCtrl::GetButtonSize() function, expected prototype:\nwxSize wxComboCtrl::GetButtonSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxComboCtrl::GetButtonSize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetButtonSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxComboCtrl::GetCustomPaintWidth() const
	static int _bind_GetCustomPaintWidth(lua_State *L) {
		if (!_lg_typecheck_GetCustomPaintWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxComboCtrl::GetCustomPaintWidth() const function, expected prototype:\nint wxComboCtrl::GetCustomPaintWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxComboCtrl::GetCustomPaintWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCustomPaintWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxComboCtrl::GetHint() const
	static int _bind_GetHint(lua_State *L) {
		if (!_lg_typecheck_GetHint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxComboCtrl::GetHint() const function, expected prototype:\nwxString wxComboCtrl::GetHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxComboCtrl::GetHint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetHint();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxComboCtrl::GetInsertionPoint() const
	static int _bind_GetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_GetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in long wxComboCtrl::GetInsertionPoint() const function, expected prototype:\nlong wxComboCtrl::GetInsertionPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxComboCtrl::GetInsertionPoint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetInsertionPoint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxComboCtrl::GetLastPosition() const
	static int _bind_GetLastPosition(lua_State *L) {
		if (!_lg_typecheck_GetLastPosition(L)) {
			luaL_error(L, "luna typecheck failed in long wxComboCtrl::GetLastPosition() const function, expected prototype:\nlong wxComboCtrl::GetLastPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxComboCtrl::GetLastPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetLastPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPoint wxComboCtrl::GetMargins() const
	static int _bind_GetMargins(lua_State *L) {
		if (!_lg_typecheck_GetMargins(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxComboCtrl::GetMargins() const function, expected prototype:\nwxPoint wxComboCtrl::GetMargins() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxComboCtrl::GetMargins() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetMargins();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxComboPopup * wxComboCtrl::GetPopupControl()
	static int _bind_GetPopupControl(lua_State *L) {
		if (!_lg_typecheck_GetPopupControl(L)) {
			luaL_error(L, "luna typecheck failed in wxComboPopup * wxComboCtrl::GetPopupControl() function, expected prototype:\nwxComboPopup * wxComboCtrl::GetPopupControl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxComboPopup * wxComboCtrl::GetPopupControl(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxComboPopup * lret = self->GetPopupControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxComboPopup >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxComboCtrl::GetPopupWindow() const
	static int _bind_GetPopupWindow(lua_State *L) {
		if (!_lg_typecheck_GetPopupWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxComboCtrl::GetPopupWindow() const function, expected prototype:\nwxWindow * wxComboCtrl::GetPopupWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxComboCtrl::GetPopupWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetPopupWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxTextCtrl * wxComboCtrl::GetTextCtrl() const
	static int _bind_GetTextCtrl(lua_State *L) {
		if (!_lg_typecheck_GetTextCtrl(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxComboCtrl::GetTextCtrl() const function, expected prototype:\nwxTextCtrl * wxComboCtrl::GetTextCtrl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxComboCtrl::GetTextCtrl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextCtrl * lret = self->GetTextCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// int wxComboCtrl::GetTextIndent() const
	static int _bind_GetTextIndent(lua_State *L) {
		if (!_lg_typecheck_GetTextIndent(L)) {
			luaL_error(L, "luna typecheck failed in int wxComboCtrl::GetTextIndent() const function, expected prototype:\nint wxComboCtrl::GetTextIndent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxComboCtrl::GetTextIndent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetTextIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxRect & wxComboCtrl::GetTextRect() const
	static int _bind_GetTextRect(lua_State *L) {
		if (!_lg_typecheck_GetTextRect(L)) {
			luaL_error(L, "luna typecheck failed in const wxRect & wxComboCtrl::GetTextRect() const function, expected prototype:\nconst wxRect & wxComboCtrl::GetTextRect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxRect & wxComboCtrl::GetTextRect() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxRect* lret = &self->GetTextRect();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,false);

		return 1;
	}

	// wxString wxComboCtrl::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxComboCtrl::GetValue() const function, expected prototype:\nwxString wxComboCtrl::GetValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxComboCtrl::GetValue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxComboCtrl::HidePopup(bool generateEvent = false)
	static int _bind_HidePopup(lua_State *L) {
		if (!_lg_typecheck_HidePopup(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::HidePopup(bool generateEvent = false) function, expected prototype:\nvoid wxComboCtrl::HidePopup(bool generateEvent = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool generateEvent=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::HidePopup(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HidePopup(generateEvent);

		return 0;
	}

	// bool wxComboCtrl::IsPopupShown() const
	static int _bind_IsPopupShown(lua_State *L) {
		if (!_lg_typecheck_IsPopupShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::IsPopupShown() const function, expected prototype:\nbool wxComboCtrl::IsPopupShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::IsPopupShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsPopupShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::IsPopupWindowState(int state) const
	static int _bind_IsPopupWindowState(lua_State *L) {
		if (!_lg_typecheck_IsPopupWindowState(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::IsPopupWindowState(int state) const function, expected prototype:\nbool wxComboCtrl::IsPopupWindowState(int state) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int state=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::IsPopupWindowState(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsPopupWindowState(state);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::OnButtonClick()
	static int _bind_OnButtonClick(lua_State *L) {
		if (!_lg_typecheck_OnButtonClick(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::OnButtonClick() function, expected prototype:\nvoid wxComboCtrl::OnButtonClick()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::OnButtonClick(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnButtonClick();

		return 0;
	}

	// void wxComboCtrl::Paste()
	static int _bind_Paste(lua_State *L) {
		if (!_lg_typecheck_Paste(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Paste() function, expected prototype:\nvoid wxComboCtrl::Paste()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Paste(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Paste();

		return 0;
	}

	// void wxComboCtrl::Popup()
	static int _bind_Popup(lua_State *L) {
		if (!_lg_typecheck_Popup(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Popup() function, expected prototype:\nvoid wxComboCtrl::Popup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Popup(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Popup();

		return 0;
	}

	// void wxComboCtrl::Remove(long from, long to)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Remove(long from, long to) function, expected prototype:\nvoid wxComboCtrl::Remove(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Remove(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Remove(from, to);

		return 0;
	}

	// void wxComboCtrl::Replace(long from, long to, const wxString & text)
	static int _bind_Replace(lua_State *L) {
		if (!_lg_typecheck_Replace(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Replace(long from, long to, const wxString & text) function, expected prototype:\nvoid wxComboCtrl::Replace(long from, long to, const wxString & text)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);
		wxString text(lua_tostring(L,4),lua_objlen(L,4));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Replace(long, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Replace(from, to, text);

		return 0;
	}

	// void wxComboCtrl::SetButtonBitmaps(const wxBitmap & bmpNormal, bool pushButtonBg = false, const wxBitmap & bmpPressed = wxNullBitmap, const wxBitmap & bmpHover = wxNullBitmap, const wxBitmap & bmpDisabled = wxNullBitmap)
	static int _bind_SetButtonBitmaps(lua_State *L) {
		if (!_lg_typecheck_SetButtonBitmaps(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetButtonBitmaps(const wxBitmap & bmpNormal, bool pushButtonBg = false, const wxBitmap & bmpPressed = wxNullBitmap, const wxBitmap & bmpHover = wxNullBitmap, const wxBitmap & bmpDisabled = wxNullBitmap) function, expected prototype:\nvoid wxComboCtrl::SetButtonBitmaps(const wxBitmap & bmpNormal, bool pushButtonBg = false, const wxBitmap & bmpPressed = wxNullBitmap, const wxBitmap & bmpHover = wxNullBitmap, const wxBitmap & bmpDisabled = wxNullBitmap)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bmpNormal_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bmpNormal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpNormal in wxComboCtrl::SetButtonBitmaps function");
		}
		const wxBitmap & bmpNormal=*bmpNormal_ptr;
		bool pushButtonBg=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;
		const wxBitmap* bmpPressed_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,4)) : NULL;
		if( luatop>3 && !bmpPressed_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpPressed in wxComboCtrl::SetButtonBitmaps function");
		}
		const wxBitmap & bmpPressed=luatop>3 ? *bmpPressed_ptr : (const wxBitmap&)wxNullBitmap;
		const wxBitmap* bmpHover_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,5)) : NULL;
		if( luatop>4 && !bmpHover_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpHover in wxComboCtrl::SetButtonBitmaps function");
		}
		const wxBitmap & bmpHover=luatop>4 ? *bmpHover_ptr : (const wxBitmap&)wxNullBitmap;
		const wxBitmap* bmpDisabled_ptr=luatop>5 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,6)) : NULL;
		if( luatop>5 && !bmpDisabled_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmpDisabled in wxComboCtrl::SetButtonBitmaps function");
		}
		const wxBitmap & bmpDisabled=luatop>5 ? *bmpDisabled_ptr : (const wxBitmap&)wxNullBitmap;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetButtonBitmaps(const wxBitmap &, bool, const wxBitmap &, const wxBitmap &, const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetButtonBitmaps(bmpNormal, pushButtonBg, bmpPressed, bmpHover, bmpDisabled);

		return 0;
	}

	// void wxComboCtrl::SetButtonPosition(int width = -1, int height = -1, int side = ::wxRIGHT, int spacingX = 0)
	static int _bind_SetButtonPosition(lua_State *L) {
		if (!_lg_typecheck_SetButtonPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetButtonPosition(int width = -1, int height = -1, int side = ::wxRIGHT, int spacingX = 0) function, expected prototype:\nvoid wxComboCtrl::SetButtonPosition(int width = -1, int height = -1, int side = ::wxRIGHT, int spacingX = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=luatop>1 ? (int)lua_tointeger(L,2) : (int)-1;
		int height=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;
		int side=luatop>3 ? (int)lua_tointeger(L,4) : (int)::wxRIGHT;
		int spacingX=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetButtonPosition(int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetButtonPosition(width, height, side, spacingX);

		return 0;
	}

	// void wxComboCtrl::SetCustomPaintWidth(int width)
	static int _bind_SetCustomPaintWidth(lua_State *L) {
		if (!_lg_typecheck_SetCustomPaintWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetCustomPaintWidth(int width) function, expected prototype:\nvoid wxComboCtrl::SetCustomPaintWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetCustomPaintWidth(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCustomPaintWidth(width);

		return 0;
	}

	// bool wxComboCtrl::SetHint(const wxString & hint)
	static int _bind_SetHint(lua_State *L) {
		if (!_lg_typecheck_SetHint(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::SetHint(const wxString & hint) function, expected prototype:\nbool wxComboCtrl::SetHint(const wxString & hint)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString hint(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::SetHint(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetHint(hint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::SetInsertionPoint(long pos)
	static int _bind_SetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_SetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetInsertionPoint(long pos) function, expected prototype:\nvoid wxComboCtrl::SetInsertionPoint(long pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long pos=(long)lua_tonumber(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetInsertionPoint(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetInsertionPoint(pos);

		return 0;
	}

	// void wxComboCtrl::SetInsertionPointEnd()
	static int _bind_SetInsertionPointEnd(lua_State *L) {
		if (!_lg_typecheck_SetInsertionPointEnd(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetInsertionPointEnd() function, expected prototype:\nvoid wxComboCtrl::SetInsertionPointEnd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetInsertionPointEnd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetInsertionPointEnd();

		return 0;
	}

	// bool wxComboCtrl::SetMargins(const wxPoint & pt)
	static int _bind_SetMargins_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::SetMargins(const wxPoint & pt) function, expected prototype:\nbool wxComboCtrl::SetMargins(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxComboCtrl::SetMargins function");
		}
		const wxPoint & pt=*pt_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::SetMargins(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetMargins(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::SetMargins(int left, int top = -1)
	static int _bind_SetMargins_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetMargins_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::SetMargins(int left, int top = -1) function, expected prototype:\nbool wxComboCtrl::SetMargins(int left, int top = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int left=(int)lua_tointeger(L,2);
		int top=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::SetMargins(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetMargins(left, top);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxComboCtrl::SetMargins
	static int _bind_SetMargins(lua_State *L) {
		if (_lg_typecheck_SetMargins_overload_1(L)) return _bind_SetMargins_overload_1(L);
		if (_lg_typecheck_SetMargins_overload_2(L)) return _bind_SetMargins_overload_2(L);

		luaL_error(L, "error in function SetMargins, cannot match any of the overloads for function SetMargins:\n  SetMargins(const wxPoint &)\n  SetMargins(int, int)\n");
		return 0;
	}

	// void wxComboCtrl::SetPopupAnchor(int anchorSide)
	static int _bind_SetPopupAnchor(lua_State *L) {
		if (!_lg_typecheck_SetPopupAnchor(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetPopupAnchor(int anchorSide) function, expected prototype:\nvoid wxComboCtrl::SetPopupAnchor(int anchorSide)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int anchorSide=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetPopupAnchor(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPopupAnchor(anchorSide);

		return 0;
	}

	// void wxComboCtrl::SetPopupControl(wxComboPopup * popup)
	static int _bind_SetPopupControl(lua_State *L) {
		if (!_lg_typecheck_SetPopupControl(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetPopupControl(wxComboPopup * popup) function, expected prototype:\nvoid wxComboCtrl::SetPopupControl(wxComboPopup * popup)\nClass arguments details:\narg 1 ID = 7956593\n\n%s",luna_dumpStack(L).c_str());
		}

		wxComboPopup* popup=(Luna< wxComboPopup >::check(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetPopupControl(wxComboPopup *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPopupControl(popup);

		return 0;
	}

	// void wxComboCtrl::SetPopupExtents(int extLeft, int extRight)
	static int _bind_SetPopupExtents(lua_State *L) {
		if (!_lg_typecheck_SetPopupExtents(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetPopupExtents(int extLeft, int extRight) function, expected prototype:\nvoid wxComboCtrl::SetPopupExtents(int extLeft, int extRight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int extLeft=(int)lua_tointeger(L,2);
		int extRight=(int)lua_tointeger(L,3);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetPopupExtents(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPopupExtents(extLeft, extRight);

		return 0;
	}

	// void wxComboCtrl::SetPopupMaxHeight(int height)
	static int _bind_SetPopupMaxHeight(lua_State *L) {
		if (!_lg_typecheck_SetPopupMaxHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetPopupMaxHeight(int height) function, expected prototype:\nvoid wxComboCtrl::SetPopupMaxHeight(int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int height=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetPopupMaxHeight(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPopupMaxHeight(height);

		return 0;
	}

	// void wxComboCtrl::SetPopupMinWidth(int width)
	static int _bind_SetPopupMinWidth(lua_State *L) {
		if (!_lg_typecheck_SetPopupMinWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetPopupMinWidth(int width) function, expected prototype:\nvoid wxComboCtrl::SetPopupMinWidth(int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetPopupMinWidth(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPopupMinWidth(width);

		return 0;
	}

	// void wxComboCtrl::SetSelection(long from, long to)
	static int _bind_SetSelection(lua_State *L) {
		if (!_lg_typecheck_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetSelection(long from, long to) function, expected prototype:\nvoid wxComboCtrl::SetSelection(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetSelection(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSelection(from, to);

		return 0;
	}

	// void wxComboCtrl::SetText(const wxString & value)
	static int _bind_SetText(lua_State *L) {
		if (!_lg_typecheck_SetText(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetText(const wxString & value) function, expected prototype:\nvoid wxComboCtrl::SetText(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetText(value);

		return 0;
	}

	// void wxComboCtrl::SetTextCtrlStyle(int style)
	static int _bind_SetTextCtrlStyle(lua_State *L) {
		if (!_lg_typecheck_SetTextCtrlStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetTextCtrlStyle(int style) function, expected prototype:\nvoid wxComboCtrl::SetTextCtrlStyle(int style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int style=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetTextCtrlStyle(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextCtrlStyle(style);

		return 0;
	}

	// void wxComboCtrl::SetTextIndent(int indent)
	static int _bind_SetTextIndent(lua_State *L) {
		if (!_lg_typecheck_SetTextIndent(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetTextIndent(int indent) function, expected prototype:\nvoid wxComboCtrl::SetTextIndent(int indent)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int indent=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetTextIndent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextIndent(indent);

		return 0;
	}

	// void wxComboCtrl::SetValue(const wxString & value)
	static int _bind_SetValue(lua_State *L) {
		if (!_lg_typecheck_SetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetValue(const wxString & value) function, expected prototype:\nvoid wxComboCtrl::SetValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValue(value);

		return 0;
	}

	// void wxComboCtrl::SetValueWithEvent(const wxString & value, bool withEvent = true)
	static int _bind_SetValueWithEvent(lua_State *L) {
		if (!_lg_typecheck_SetValueWithEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::SetValueWithEvent(const wxString & value, bool withEvent = true) function, expected prototype:\nvoid wxComboCtrl::SetValueWithEvent(const wxString & value, bool withEvent = true)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString value(lua_tostring(L,2),lua_objlen(L,2));
		bool withEvent=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::SetValueWithEvent(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValueWithEvent(value, withEvent);

		return 0;
	}

	// void wxComboCtrl::ShowPopup()
	static int _bind_ShowPopup(lua_State *L) {
		if (!_lg_typecheck_ShowPopup(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::ShowPopup() function, expected prototype:\nvoid wxComboCtrl::ShowPopup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::ShowPopup(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShowPopup();

		return 0;
	}

	// void wxComboCtrl::Undo()
	static int _bind_Undo(lua_State *L) {
		if (!_lg_typecheck_Undo(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::Undo() function, expected prototype:\nvoid wxComboCtrl::Undo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::Undo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Undo();

		return 0;
	}

	// void wxComboCtrl::UseAltPopupWindow(bool enable = true)
	static int _bind_UseAltPopupWindow(lua_State *L) {
		if (!_lg_typecheck_UseAltPopupWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::UseAltPopupWindow(bool enable = true) function, expected prototype:\nvoid wxComboCtrl::UseAltPopupWindow(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::UseAltPopupWindow(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UseAltPopupWindow(enable);

		return 0;
	}

	// static int wxComboCtrl::GetFeatures()
	static int _bind_GetFeatures(lua_State *L) {
		if (!_lg_typecheck_GetFeatures(L)) {
			luaL_error(L, "luna typecheck failed in static int wxComboCtrl::GetFeatures() function, expected prototype:\nstatic int wxComboCtrl::GetFeatures()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		int lret = wxComboCtrl::GetFeatures();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxComboCtrl::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxComboCtrl::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxComboCtrl::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxComboCtrl::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxComboCtrl::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxComboCtrl::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_AcceptsFocus() const function, expected prototype:\nbool wxComboCtrl::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxComboCtrl::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxComboCtrl::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_HasFocus() const function, expected prototype:\nbool wxComboCtrl::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxComboCtrl::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetCanFocus(canFocus);

		return 0;
	}

	// void wxComboCtrl::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetFocus() function, expected prototype:\nvoid wxComboCtrl::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetFocus();

		return 0;
	}

	// void wxComboCtrl::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetFocusFromKbd() function, expected prototype:\nvoid wxComboCtrl::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetFocusFromKbd();

		return 0;
	}

	// void wxComboCtrl::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxComboCtrl::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::AddChild(child);

		return 0;
	}

	// void wxComboCtrl::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxComboCtrl::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::RemoveChild(child);

		return 0;
	}

	// bool wxComboCtrl::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxComboCtrl::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxComboCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxComboCtrl::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxComboCtrl::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxComboCtrl::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxComboCtrl::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxComboCtrl::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxComboCtrl::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxComboCtrl::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxComboCtrl::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxComboCtrl::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxComboCtrl::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxComboCtrl::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxComboCtrl::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxComboCtrl::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxComboCtrl::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxComboCtrl::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxComboCtrl::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxComboCtrl::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_ScrollLines(int lines) function, expected prototype:\nbool wxComboCtrl::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_ScrollPages(int pages) function, expected prototype:\nbool wxComboCtrl::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxComboCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxComboCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxComboCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxComboCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxComboCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxComboCtrl::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxComboCtrl::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxComboCtrl::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxComboCtrl::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxComboCtrl::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxComboCtrl::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxComboCtrl::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxComboCtrl::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxComboCtrl::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxComboCtrl::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxComboCtrl::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Fit() function, expected prototype:\nvoid wxComboCtrl::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Fit();

		return 0;
	}

	// void wxComboCtrl::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_FitInside() function, expected prototype:\nvoid wxComboCtrl::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::FitInside();

		return 0;
	}

	// wxSize wxComboCtrl::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxComboCtrl::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxComboCtrl::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxComboCtrl::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxComboCtrl::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxComboCtrl::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxComboCtrl::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxComboCtrl::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxComboCtrl::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxComboCtrl::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxComboCtrl::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxComboCtrl::base_GetMaxSize() const function, expected prototype:\nwxSize wxComboCtrl::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxComboCtrl::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxComboCtrl::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxComboCtrl::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxComboCtrl::base_GetMinClientSize() const function, expected prototype:\nwxSize wxComboCtrl::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxComboCtrl::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxComboCtrl::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxComboCtrl::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxComboCtrl::base_GetMinSize() const function, expected prototype:\nwxSize wxComboCtrl::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxComboCtrl::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxComboCtrl::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxComboCtrl::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxComboCtrl::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxComboCtrl::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxComboCtrl::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxComboCtrl::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxComboCtrl::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxComboCtrl::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxComboCtrl::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxComboCtrl::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxComboCtrl::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxComboCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxComboCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxComboCtrl::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SendSizeEvent(flags);

		return 0;
	}

	// void wxComboCtrl::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxComboCtrl::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetMaxClientSize(size);

		return 0;
	}

	// void wxComboCtrl::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxComboCtrl::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetMaxSize(size);

		return 0;
	}

	// void wxComboCtrl::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxComboCtrl::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetMinClientSize(size);

		return 0;
	}

	// void wxComboCtrl::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxComboCtrl::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxComboCtrl::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetMinSize(size);

		return 0;
	}

	// void wxComboCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxComboCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxComboCtrl::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxComboCtrl::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxComboCtrl::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxComboCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxComboCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxComboCtrl::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxComboCtrl::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxComboCtrl::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxComboCtrl::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxComboCtrl::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxComboCtrl::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxComboCtrl::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_ClearBackground() function, expected prototype:\nvoid wxComboCtrl::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxComboCtrl::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxComboCtrl::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxComboCtrl::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxComboCtrl::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxComboCtrl::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxComboCtrl::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxComboCtrl::base_GetCharHeight() const function, expected prototype:\nint wxComboCtrl::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxComboCtrl::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxComboCtrl::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxComboCtrl::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxComboCtrl::base_GetCharWidth() const function, expected prototype:\nint wxComboCtrl::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxComboCtrl::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxComboCtrl::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxComboCtrl::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxComboCtrl::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxComboCtrl::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxComboCtrl::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxComboCtrl::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxComboCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxComboCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxComboCtrl::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Update() function, expected prototype:\nvoid wxComboCtrl::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Update();

		return 0;
	}

	// bool wxComboCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxComboCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxComboCtrl::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxComboCtrl::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_ShouldInheritColours() const function, expected prototype:\nbool wxComboCtrl::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxComboCtrl::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxComboCtrl::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_GetThemeEnabled() const function, expected prototype:\nbool wxComboCtrl::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_CanSetTransparent() function, expected prototype:\nbool wxComboCtrl::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxComboCtrl::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxComboCtrl::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetNextHandler(handler);

		return 0;
	}

	// void wxComboCtrl::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxComboCtrl::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetPreviousHandler(handler);

		return 0;
	}

	// long wxComboCtrl::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxComboCtrl::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxComboCtrl::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxComboCtrl::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxComboCtrl::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxComboCtrl::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxComboCtrl::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxComboCtrl::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxComboCtrl::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxComboCtrl::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Lower() function, expected prototype:\nvoid wxComboCtrl::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Lower();

		return 0;
	}

	// void wxComboCtrl::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Raise() function, expected prototype:\nvoid wxComboCtrl::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Raise();

		return 0;
	}

	// bool wxComboCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxComboCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_IsShown() const function, expected prototype:\nbool wxComboCtrl::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_IsShownOnScreen() const function, expected prototype:\nbool wxComboCtrl::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_Enable(bool enable = true) function, expected prototype:\nbool wxComboCtrl::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_Show(bool show = true) function, expected prototype:\nbool wxComboCtrl::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxComboCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxComboCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxComboCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxComboCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxComboCtrl::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxComboCtrl::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxComboCtrl::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxComboCtrl::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxComboCtrl::base_GetValidator() function, expected prototype:\nwxValidator * wxComboCtrl::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxComboCtrl::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxComboCtrl::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxComboCtrl::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxComboCtrl::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxComboCtrl::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetValidator(validator);

		return 0;
	}

	// bool wxComboCtrl::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_TransferDataFromWindow() function, expected prototype:\nbool wxComboCtrl::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_TransferDataToWindow() function, expected prototype:\nbool wxComboCtrl::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_Validate() function, expected prototype:\nbool wxComboCtrl::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxComboCtrl::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxComboCtrl::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxComboCtrl::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxComboCtrl::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxComboCtrl::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxComboCtrl::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxComboCtrl::base_GetName() const function, expected prototype:\nwxString wxComboCtrl::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxComboCtrl::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxComboCtrl::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxComboCtrl::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxComboCtrl::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetLayoutDirection(dir);

		return 0;
	}

	// void wxComboCtrl::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetName(const wxString & name) function, expected prototype:\nvoid wxComboCtrl::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetName(name);

		return 0;
	}

	// void wxComboCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxComboCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxComboCtrl::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxComboCtrl::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_Destroy() function, expected prototype:\nbool wxComboCtrl::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxComboCtrl::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxComboCtrl::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxComboCtrl::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxComboCtrl::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxComboCtrl::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxComboCtrl::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxComboCtrl::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetDropTarget(target);

		return 0;
	}

	// void wxComboCtrl::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxComboCtrl::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxComboCtrl::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_Layout() function, expected prototype:\nbool wxComboCtrl::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_HasCapture() const function, expected prototype:\nbool wxComboCtrl::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxComboCtrl::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxComboCtrl::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxComboCtrl::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::WarpPointer(x, y);

		return 0;
	}

	// void wxComboCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxComboCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxComboCtrl::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxComboCtrl::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxComboCtrl::base_GetHandle() const function, expected prototype:\nHWND wxComboCtrl::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxComboCtrl::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxComboCtrl::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxComboCtrl::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_HasMultiplePages() const function, expected prototype:\nbool wxComboCtrl::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_InheritAttributes() function, expected prototype:\nvoid wxComboCtrl::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::InheritAttributes();

		return 0;
	}

	// void wxComboCtrl::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_InitDialog() function, expected prototype:\nvoid wxComboCtrl::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::InitDialog();

		return 0;
	}

	// bool wxComboCtrl::base_IsDoubleBuffered() const
	static int _bind_base_IsDoubleBuffered(lua_State *L) {
		if (!_lg_typecheck_base_IsDoubleBuffered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_IsDoubleBuffered() const function, expected prototype:\nbool wxComboCtrl::base_IsDoubleBuffered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_IsDoubleBuffered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::IsDoubleBuffered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_IsRetained() const function, expected prototype:\nbool wxComboCtrl::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_IsTopLevel() const function, expected prototype:\nbool wxComboCtrl::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxComboCtrl::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::MakeModal(modal);

		return 0;
	}

	// void wxComboCtrl::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_OnInternalIdle() function, expected prototype:\nvoid wxComboCtrl::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::OnInternalIdle();

		return 0;
	}

	// bool wxComboCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxComboCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxComboCtrl::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxComboCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::UpdateWindowUI(flags);

		return 0;
	}

	// void wxComboCtrl::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxComboCtrl::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxComboCtrl::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Command(event);

		return 0;
	}

	// wxString wxComboCtrl::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxComboCtrl::base_GetLabel() const function, expected prototype:\nwxString wxComboCtrl::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxComboCtrl::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxComboCtrl::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxComboCtrl::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxComboCtrl::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetLabel(label);

		return 0;
	}

	// void wxComboCtrl::base_AppendText(const wxString & text)
	static int _bind_base_AppendText(lua_State *L) {
		if (!_lg_typecheck_base_AppendText(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_AppendText(const wxString & text) function, expected prototype:\nvoid wxComboCtrl::base_AppendText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_AppendText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::AppendText(text);

		return 0;
	}

	// bool wxComboCtrl::base_CanCopy() const
	static int _bind_base_CanCopy(lua_State *L) {
		if (!_lg_typecheck_base_CanCopy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_CanCopy() const function, expected prototype:\nbool wxComboCtrl::base_CanCopy() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_CanCopy() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::CanCopy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_CanCut() const
	static int _bind_base_CanCut(lua_State *L) {
		if (!_lg_typecheck_base_CanCut(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_CanCut() const function, expected prototype:\nbool wxComboCtrl::base_CanCut() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_CanCut() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::CanCut();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_CanPaste() const
	static int _bind_base_CanPaste(lua_State *L) {
		if (!_lg_typecheck_base_CanPaste(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_CanPaste() const function, expected prototype:\nbool wxComboCtrl::base_CanPaste() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_CanPaste() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::CanPaste();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_CanRedo() const
	static int _bind_base_CanRedo(lua_State *L) {
		if (!_lg_typecheck_base_CanRedo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_CanRedo() const function, expected prototype:\nbool wxComboCtrl::base_CanRedo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_CanRedo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::CanRedo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_CanUndo() const
	static int _bind_base_CanUndo(lua_State *L) {
		if (!_lg_typecheck_base_CanUndo(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_CanUndo() const function, expected prototype:\nbool wxComboCtrl::base_CanUndo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_CanUndo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::CanUndo();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_ChangeValue(const wxString & value)
	static int _bind_base_ChangeValue(lua_State *L) {
		if (!_lg_typecheck_base_ChangeValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_ChangeValue(const wxString & value) function, expected prototype:\nvoid wxComboCtrl::base_ChangeValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_ChangeValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::ChangeValue(value);

		return 0;
	}

	// void wxComboCtrl::base_Clear()
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Clear() function, expected prototype:\nvoid wxComboCtrl::base_Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Clear();

		return 0;
	}

	// wxString wxComboCtrl::base_GetRange(long from, long to) const
	static int _bind_base_GetRange(lua_State *L) {
		if (!_lg_typecheck_base_GetRange(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxComboCtrl::base_GetRange(long from, long to) const function, expected prototype:\nwxString wxComboCtrl::base_GetRange(long from, long to) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxComboCtrl::base_GetRange(long, long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxComboCtrl::GetRange(from, to);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxComboCtrl::base_GetSelection(long * from, long * to) const
	static int _bind_base_GetSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_GetSelection(long * from, long * to) const function, expected prototype:\nvoid wxComboCtrl::base_GetSelection(long * from, long * to) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long* from=(long*)Luna< void >::check(L,2);
		long* to=(long*)Luna< void >::check(L,3);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_GetSelection(long *, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::GetSelection(from, to);

		return 0;
	}

	// wxString wxComboCtrl::base_GetStringSelection() const
	static int _bind_base_GetStringSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetStringSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxComboCtrl::base_GetStringSelection() const function, expected prototype:\nwxString wxComboCtrl::base_GetStringSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxComboCtrl::base_GetStringSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxComboCtrl::GetStringSelection();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxComboCtrl::base_IsEditable() const
	static int _bind_base_IsEditable(lua_State *L) {
		if (!_lg_typecheck_base_IsEditable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_IsEditable() const function, expected prototype:\nbool wxComboCtrl::base_IsEditable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_IsEditable() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::IsEditable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxComboCtrl::base_IsEmpty() const
	static int _bind_base_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_base_IsEmpty(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_IsEmpty() const function, expected prototype:\nbool wxComboCtrl::base_IsEmpty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_IsEmpty() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_Redo()
	static int _bind_base_Redo(lua_State *L) {
		if (!_lg_typecheck_base_Redo(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Redo() function, expected prototype:\nvoid wxComboCtrl::base_Redo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Redo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Redo();

		return 0;
	}

	// void wxComboCtrl::base_SetEditable(bool editable)
	static int _bind_base_SetEditable(lua_State *L) {
		if (!_lg_typecheck_base_SetEditable(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetEditable(bool editable) function, expected prototype:\nvoid wxComboCtrl::base_SetEditable(bool editable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool editable=(bool)(lua_toboolean(L,2)==1);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetEditable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetEditable(editable);

		return 0;
	}

	// void wxComboCtrl::base_SetMaxLength(unsigned long len)
	static int _bind_base_SetMaxLength(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxLength(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetMaxLength(unsigned long len) function, expected prototype:\nvoid wxComboCtrl::base_SetMaxLength(unsigned long len)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long len=(unsigned long)lua_tonumber(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetMaxLength(unsigned long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetMaxLength(len);

		return 0;
	}

	// void wxComboCtrl::base_SelectAll()
	static int _bind_base_SelectAll(lua_State *L) {
		if (!_lg_typecheck_base_SelectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SelectAll() function, expected prototype:\nvoid wxComboCtrl::base_SelectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SelectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SelectAll();

		return 0;
	}

	// void wxComboCtrl::base_WriteText(const wxString & text)
	static int _bind_base_WriteText(lua_State *L) {
		if (!_lg_typecheck_base_WriteText(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_WriteText(const wxString & text) function, expected prototype:\nvoid wxComboCtrl::base_WriteText(const wxString & text)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_WriteText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::WriteText(text);

		return 0;
	}

	// void wxComboCtrl::base_Copy()
	static int _bind_base_Copy(lua_State *L) {
		if (!_lg_typecheck_base_Copy(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Copy() function, expected prototype:\nvoid wxComboCtrl::base_Copy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Copy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Copy();

		return 0;
	}

	// void wxComboCtrl::base_Cut()
	static int _bind_base_Cut(lua_State *L) {
		if (!_lg_typecheck_base_Cut(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Cut() function, expected prototype:\nvoid wxComboCtrl::base_Cut()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Cut(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Cut();

		return 0;
	}

	// void wxComboCtrl::base_Dismiss()
	static int _bind_base_Dismiss(lua_State *L) {
		if (!_lg_typecheck_base_Dismiss(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Dismiss() function, expected prototype:\nvoid wxComboCtrl::base_Dismiss()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Dismiss(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Dismiss();

		return 0;
	}

	// wxString wxComboCtrl::base_GetHint() const
	static int _bind_base_GetHint(lua_State *L) {
		if (!_lg_typecheck_base_GetHint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxComboCtrl::base_GetHint() const function, expected prototype:\nwxString wxComboCtrl::base_GetHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxComboCtrl::base_GetHint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxComboCtrl::GetHint();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// long wxComboCtrl::base_GetInsertionPoint() const
	static int _bind_base_GetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in long wxComboCtrl::base_GetInsertionPoint() const function, expected prototype:\nlong wxComboCtrl::base_GetInsertionPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxComboCtrl::base_GetInsertionPoint() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxComboCtrl::GetInsertionPoint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxComboCtrl::base_GetLastPosition() const
	static int _bind_base_GetLastPosition(lua_State *L) {
		if (!_lg_typecheck_base_GetLastPosition(L)) {
			luaL_error(L, "luna typecheck failed in long wxComboCtrl::base_GetLastPosition() const function, expected prototype:\nlong wxComboCtrl::base_GetLastPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxComboCtrl::base_GetLastPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxComboCtrl::GetLastPosition();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxComboCtrl::base_GetValue() const
	static int _bind_base_GetValue(lua_State *L) {
		if (!_lg_typecheck_base_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxComboCtrl::base_GetValue() const function, expected prototype:\nwxString wxComboCtrl::base_GetValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxComboCtrl::base_GetValue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxComboCtrl::GetValue();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxComboCtrl::base_HidePopup(bool generateEvent = false)
	static int _bind_base_HidePopup(lua_State *L) {
		if (!_lg_typecheck_base_HidePopup(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_HidePopup(bool generateEvent = false) function, expected prototype:\nvoid wxComboCtrl::base_HidePopup(bool generateEvent = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool generateEvent=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_HidePopup(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::HidePopup(generateEvent);

		return 0;
	}

	// void wxComboCtrl::base_OnButtonClick()
	static int _bind_base_OnButtonClick(lua_State *L) {
		if (!_lg_typecheck_base_OnButtonClick(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_OnButtonClick() function, expected prototype:\nvoid wxComboCtrl::base_OnButtonClick()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_OnButtonClick(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::OnButtonClick();

		return 0;
	}

	// void wxComboCtrl::base_Paste()
	static int _bind_base_Paste(lua_State *L) {
		if (!_lg_typecheck_base_Paste(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Paste() function, expected prototype:\nvoid wxComboCtrl::base_Paste()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Paste(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Paste();

		return 0;
	}

	// void wxComboCtrl::base_Popup()
	static int _bind_base_Popup(lua_State *L) {
		if (!_lg_typecheck_base_Popup(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Popup() function, expected prototype:\nvoid wxComboCtrl::base_Popup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Popup(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Popup();

		return 0;
	}

	// void wxComboCtrl::base_Remove(long from, long to)
	static int _bind_base_Remove(lua_State *L) {
		if (!_lg_typecheck_base_Remove(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Remove(long from, long to) function, expected prototype:\nvoid wxComboCtrl::base_Remove(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Remove(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Remove(from, to);

		return 0;
	}

	// void wxComboCtrl::base_Replace(long from, long to, const wxString & text)
	static int _bind_base_Replace(lua_State *L) {
		if (!_lg_typecheck_base_Replace(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Replace(long from, long to, const wxString & text) function, expected prototype:\nvoid wxComboCtrl::base_Replace(long from, long to, const wxString & text)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);
		wxString text(lua_tostring(L,4),lua_objlen(L,4));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Replace(long, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Replace(from, to, text);

		return 0;
	}

	// bool wxComboCtrl::base_SetHint(const wxString & hint)
	static int _bind_base_SetHint(lua_State *L) {
		if (!_lg_typecheck_base_SetHint(L)) {
			luaL_error(L, "luna typecheck failed in bool wxComboCtrl::base_SetHint(const wxString & hint) function, expected prototype:\nbool wxComboCtrl::base_SetHint(const wxString & hint)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString hint(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxComboCtrl::base_SetHint(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxComboCtrl::SetHint(hint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxComboCtrl::base_SetInsertionPoint(long pos)
	static int _bind_base_SetInsertionPoint(lua_State *L) {
		if (!_lg_typecheck_base_SetInsertionPoint(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetInsertionPoint(long pos) function, expected prototype:\nvoid wxComboCtrl::base_SetInsertionPoint(long pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long pos=(long)lua_tonumber(L,2);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetInsertionPoint(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetInsertionPoint(pos);

		return 0;
	}

	// void wxComboCtrl::base_SetInsertionPointEnd()
	static int _bind_base_SetInsertionPointEnd(lua_State *L) {
		if (!_lg_typecheck_base_SetInsertionPointEnd(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetInsertionPointEnd() function, expected prototype:\nvoid wxComboCtrl::base_SetInsertionPointEnd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetInsertionPointEnd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetInsertionPointEnd();

		return 0;
	}

	// void wxComboCtrl::base_SetSelection(long from, long to)
	static int _bind_base_SetSelection(lua_State *L) {
		if (!_lg_typecheck_base_SetSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetSelection(long from, long to) function, expected prototype:\nvoid wxComboCtrl::base_SetSelection(long from, long to)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long from=(long)lua_tonumber(L,2);
		long to=(long)lua_tonumber(L,3);

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetSelection(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetSelection(from, to);

		return 0;
	}

	// void wxComboCtrl::base_SetValue(const wxString & value)
	static int _bind_base_SetValue(lua_State *L) {
		if (!_lg_typecheck_base_SetValue(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_SetValue(const wxString & value) function, expected prototype:\nvoid wxComboCtrl::base_SetValue(const wxString & value)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString value(lua_tostring(L,2),lua_objlen(L,2));

		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_SetValue(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::SetValue(value);

		return 0;
	}

	// void wxComboCtrl::base_ShowPopup()
	static int _bind_base_ShowPopup(lua_State *L) {
		if (!_lg_typecheck_base_ShowPopup(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_ShowPopup() function, expected prototype:\nvoid wxComboCtrl::base_ShowPopup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_ShowPopup(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::ShowPopup();

		return 0;
	}

	// void wxComboCtrl::base_Undo()
	static int _bind_base_Undo(lua_State *L) {
		if (!_lg_typecheck_base_Undo(L)) {
			luaL_error(L, "luna typecheck failed in void wxComboCtrl::base_Undo() function, expected prototype:\nvoid wxComboCtrl::base_Undo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxComboCtrl* self=Luna< wxObject >::checkSubType< wxComboCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxComboCtrl::base_Undo(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxComboCtrl::Undo();

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_wxTextEntry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_wxTextEntry(lua_State *L) {
		if (!_lg_typecheck_baseCast_wxTextEntry(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_wxTextEntry function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		wxTextEntry* res = luna_caster<wxObject,wxTextEntry>::cast(self); // dynamic_cast<wxTextEntry*>(self);
		if(!res)
			return 0;
			
		Luna< wxTextEntry >::push(L,res,false);
		return 1;

	}

};

wxComboCtrl* LunaTraits< wxComboCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxComboCtrl::_bind_ctor(L);
}

void LunaTraits< wxComboCtrl >::_bind_dtor(wxComboCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxComboCtrl >::className[] = "wxComboCtrl";
const char LunaTraits< wxComboCtrl >::fullName[] = "wxComboCtrl";
const char LunaTraits< wxComboCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxComboCtrl >::parents[] = {"wx.wxControl", "wx.wxTextEntry", 0};
const int LunaTraits< wxComboCtrl >::hash = 93422634;
const int LunaTraits< wxComboCtrl >::uniqueIDs[] = {56813631, 53506535, 54144136,0};

luna_RegType LunaTraits< wxComboCtrl >::methods[] = {
	{"Copy", &luna_wrapper_wxComboCtrl::_bind_Copy},
	{"Create", &luna_wrapper_wxComboCtrl::_bind_Create},
	{"Cut", &luna_wrapper_wxComboCtrl::_bind_Cut},
	{"Dismiss", &luna_wrapper_wxComboCtrl::_bind_Dismiss},
	{"EnablePopupAnimation", &luna_wrapper_wxComboCtrl::_bind_EnablePopupAnimation},
	{"GetBitmapDisabled", &luna_wrapper_wxComboCtrl::_bind_GetBitmapDisabled},
	{"GetBitmapHover", &luna_wrapper_wxComboCtrl::_bind_GetBitmapHover},
	{"GetBitmapNormal", &luna_wrapper_wxComboCtrl::_bind_GetBitmapNormal},
	{"GetBitmapPressed", &luna_wrapper_wxComboCtrl::_bind_GetBitmapPressed},
	{"GetButtonSize", &luna_wrapper_wxComboCtrl::_bind_GetButtonSize},
	{"GetCustomPaintWidth", &luna_wrapper_wxComboCtrl::_bind_GetCustomPaintWidth},
	{"GetHint", &luna_wrapper_wxComboCtrl::_bind_GetHint},
	{"GetInsertionPoint", &luna_wrapper_wxComboCtrl::_bind_GetInsertionPoint},
	{"GetLastPosition", &luna_wrapper_wxComboCtrl::_bind_GetLastPosition},
	{"GetMargins", &luna_wrapper_wxComboCtrl::_bind_GetMargins},
	{"GetPopupControl", &luna_wrapper_wxComboCtrl::_bind_GetPopupControl},
	{"GetPopupWindow", &luna_wrapper_wxComboCtrl::_bind_GetPopupWindow},
	{"GetTextCtrl", &luna_wrapper_wxComboCtrl::_bind_GetTextCtrl},
	{"GetTextIndent", &luna_wrapper_wxComboCtrl::_bind_GetTextIndent},
	{"GetTextRect", &luna_wrapper_wxComboCtrl::_bind_GetTextRect},
	{"GetValue", &luna_wrapper_wxComboCtrl::_bind_GetValue},
	{"HidePopup", &luna_wrapper_wxComboCtrl::_bind_HidePopup},
	{"IsPopupShown", &luna_wrapper_wxComboCtrl::_bind_IsPopupShown},
	{"IsPopupWindowState", &luna_wrapper_wxComboCtrl::_bind_IsPopupWindowState},
	{"OnButtonClick", &luna_wrapper_wxComboCtrl::_bind_OnButtonClick},
	{"Paste", &luna_wrapper_wxComboCtrl::_bind_Paste},
	{"Popup", &luna_wrapper_wxComboCtrl::_bind_Popup},
	{"Remove", &luna_wrapper_wxComboCtrl::_bind_Remove},
	{"Replace", &luna_wrapper_wxComboCtrl::_bind_Replace},
	{"SetButtonBitmaps", &luna_wrapper_wxComboCtrl::_bind_SetButtonBitmaps},
	{"SetButtonPosition", &luna_wrapper_wxComboCtrl::_bind_SetButtonPosition},
	{"SetCustomPaintWidth", &luna_wrapper_wxComboCtrl::_bind_SetCustomPaintWidth},
	{"SetHint", &luna_wrapper_wxComboCtrl::_bind_SetHint},
	{"SetInsertionPoint", &luna_wrapper_wxComboCtrl::_bind_SetInsertionPoint},
	{"SetInsertionPointEnd", &luna_wrapper_wxComboCtrl::_bind_SetInsertionPointEnd},
	{"SetMargins", &luna_wrapper_wxComboCtrl::_bind_SetMargins},
	{"SetPopupAnchor", &luna_wrapper_wxComboCtrl::_bind_SetPopupAnchor},
	{"SetPopupControl", &luna_wrapper_wxComboCtrl::_bind_SetPopupControl},
	{"SetPopupExtents", &luna_wrapper_wxComboCtrl::_bind_SetPopupExtents},
	{"SetPopupMaxHeight", &luna_wrapper_wxComboCtrl::_bind_SetPopupMaxHeight},
	{"SetPopupMinWidth", &luna_wrapper_wxComboCtrl::_bind_SetPopupMinWidth},
	{"SetSelection", &luna_wrapper_wxComboCtrl::_bind_SetSelection},
	{"SetText", &luna_wrapper_wxComboCtrl::_bind_SetText},
	{"SetTextCtrlStyle", &luna_wrapper_wxComboCtrl::_bind_SetTextCtrlStyle},
	{"SetTextIndent", &luna_wrapper_wxComboCtrl::_bind_SetTextIndent},
	{"SetValue", &luna_wrapper_wxComboCtrl::_bind_SetValue},
	{"SetValueWithEvent", &luna_wrapper_wxComboCtrl::_bind_SetValueWithEvent},
	{"ShowPopup", &luna_wrapper_wxComboCtrl::_bind_ShowPopup},
	{"Undo", &luna_wrapper_wxComboCtrl::_bind_Undo},
	{"UseAltPopupWindow", &luna_wrapper_wxComboCtrl::_bind_UseAltPopupWindow},
	{"GetFeatures", &luna_wrapper_wxComboCtrl::_bind_GetFeatures},
	{"base_GetClassInfo", &luna_wrapper_wxComboCtrl::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxComboCtrl::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxComboCtrl::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxComboCtrl::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxComboCtrl::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxComboCtrl::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxComboCtrl::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxComboCtrl::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxComboCtrl::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxComboCtrl::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxComboCtrl::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxComboCtrl::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxComboCtrl::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxComboCtrl::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxComboCtrl::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxComboCtrl::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxComboCtrl::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxComboCtrl::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxComboCtrl::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxComboCtrl::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxComboCtrl::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxComboCtrl::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxComboCtrl::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxComboCtrl::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxComboCtrl::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxComboCtrl::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxComboCtrl::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxComboCtrl::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxComboCtrl::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxComboCtrl::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxComboCtrl::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxComboCtrl::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxComboCtrl::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxComboCtrl::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxComboCtrl::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxComboCtrl::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxComboCtrl::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxComboCtrl::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxComboCtrl::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxComboCtrl::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxComboCtrl::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxComboCtrl::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxComboCtrl::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxComboCtrl::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxComboCtrl::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxComboCtrl::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxComboCtrl::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxComboCtrl::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxComboCtrl::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxComboCtrl::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxComboCtrl::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxComboCtrl::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxComboCtrl::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxComboCtrl::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxComboCtrl::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxComboCtrl::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxComboCtrl::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxComboCtrl::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxComboCtrl::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxComboCtrl::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxComboCtrl::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxComboCtrl::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxComboCtrl::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxComboCtrl::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxComboCtrl::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxComboCtrl::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxComboCtrl::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxComboCtrl::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxComboCtrl::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxComboCtrl::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxComboCtrl::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxComboCtrl::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxComboCtrl::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxComboCtrl::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxComboCtrl::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxComboCtrl::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxComboCtrl::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxComboCtrl::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxComboCtrl::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxComboCtrl::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxComboCtrl::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxComboCtrl::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxComboCtrl::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxComboCtrl::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxComboCtrl::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxComboCtrl::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxComboCtrl::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxComboCtrl::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxComboCtrl::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxComboCtrl::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxComboCtrl::_bind_base_InitDialog},
	{"base_IsDoubleBuffered", &luna_wrapper_wxComboCtrl::_bind_base_IsDoubleBuffered},
	{"base_IsRetained", &luna_wrapper_wxComboCtrl::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxComboCtrl::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxComboCtrl::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxComboCtrl::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxComboCtrl::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxComboCtrl::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxComboCtrl::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxComboCtrl::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxComboCtrl::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxComboCtrl::_bind_base_SetLabel},
	{"base_AppendText", &luna_wrapper_wxComboCtrl::_bind_base_AppendText},
	{"base_CanCopy", &luna_wrapper_wxComboCtrl::_bind_base_CanCopy},
	{"base_CanCut", &luna_wrapper_wxComboCtrl::_bind_base_CanCut},
	{"base_CanPaste", &luna_wrapper_wxComboCtrl::_bind_base_CanPaste},
	{"base_CanRedo", &luna_wrapper_wxComboCtrl::_bind_base_CanRedo},
	{"base_CanUndo", &luna_wrapper_wxComboCtrl::_bind_base_CanUndo},
	{"base_ChangeValue", &luna_wrapper_wxComboCtrl::_bind_base_ChangeValue},
	{"base_Clear", &luna_wrapper_wxComboCtrl::_bind_base_Clear},
	{"base_GetRange", &luna_wrapper_wxComboCtrl::_bind_base_GetRange},
	{"base_GetSelection", &luna_wrapper_wxComboCtrl::_bind_base_GetSelection},
	{"base_GetStringSelection", &luna_wrapper_wxComboCtrl::_bind_base_GetStringSelection},
	{"base_IsEditable", &luna_wrapper_wxComboCtrl::_bind_base_IsEditable},
	{"base_IsEmpty", &luna_wrapper_wxComboCtrl::_bind_base_IsEmpty},
	{"base_Redo", &luna_wrapper_wxComboCtrl::_bind_base_Redo},
	{"base_SetEditable", &luna_wrapper_wxComboCtrl::_bind_base_SetEditable},
	{"base_SetMaxLength", &luna_wrapper_wxComboCtrl::_bind_base_SetMaxLength},
	{"base_SelectAll", &luna_wrapper_wxComboCtrl::_bind_base_SelectAll},
	{"base_WriteText", &luna_wrapper_wxComboCtrl::_bind_base_WriteText},
	{"base_Copy", &luna_wrapper_wxComboCtrl::_bind_base_Copy},
	{"base_Cut", &luna_wrapper_wxComboCtrl::_bind_base_Cut},
	{"base_Dismiss", &luna_wrapper_wxComboCtrl::_bind_base_Dismiss},
	{"base_GetHint", &luna_wrapper_wxComboCtrl::_bind_base_GetHint},
	{"base_GetInsertionPoint", &luna_wrapper_wxComboCtrl::_bind_base_GetInsertionPoint},
	{"base_GetLastPosition", &luna_wrapper_wxComboCtrl::_bind_base_GetLastPosition},
	{"base_GetValue", &luna_wrapper_wxComboCtrl::_bind_base_GetValue},
	{"base_HidePopup", &luna_wrapper_wxComboCtrl::_bind_base_HidePopup},
	{"base_OnButtonClick", &luna_wrapper_wxComboCtrl::_bind_base_OnButtonClick},
	{"base_Paste", &luna_wrapper_wxComboCtrl::_bind_base_Paste},
	{"base_Popup", &luna_wrapper_wxComboCtrl::_bind_base_Popup},
	{"base_Remove", &luna_wrapper_wxComboCtrl::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxComboCtrl::_bind_base_Replace},
	{"base_SetHint", &luna_wrapper_wxComboCtrl::_bind_base_SetHint},
	{"base_SetInsertionPoint", &luna_wrapper_wxComboCtrl::_bind_base_SetInsertionPoint},
	{"base_SetInsertionPointEnd", &luna_wrapper_wxComboCtrl::_bind_base_SetInsertionPointEnd},
	{"base_SetSelection", &luna_wrapper_wxComboCtrl::_bind_base_SetSelection},
	{"base_SetValue", &luna_wrapper_wxComboCtrl::_bind_base_SetValue},
	{"base_ShowPopup", &luna_wrapper_wxComboCtrl::_bind_base_ShowPopup},
	{"base_Undo", &luna_wrapper_wxComboCtrl::_bind_base_Undo},
	{"fromVoid", &luna_wrapper_wxComboCtrl::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxComboCtrl::_bind_asVoid},
	{"getTable", &luna_wrapper_wxComboCtrl::_bind_getTable},
	{"aswxTextEntry", &luna_wrapper_wxComboCtrl::_bind_baseCast_wxTextEntry},
	{0,0}
};

luna_ConverterType LunaTraits< wxComboCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxComboCtrl::_cast_from_wxObject},
	{"wxTextEntry", &luna_wrapper_wxComboCtrl::_cast_from_wxTextEntry},
	{0,0}
};

luna_RegEnumType LunaTraits< wxComboCtrl >::enumValues[] = {
	{0,0}
};


