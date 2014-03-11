#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAnyButton.h>

class luna_wrapper_wxAnyButton {
public:
	typedef Luna< wxAnyButton > luna_t;

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

		wxAnyButton* self= (wxAnyButton*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAnyButton >::push(L,self,false);
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
		//wxAnyButton* ptr= dynamic_cast< wxAnyButton* >(Luna< wxObject >::check(L,1));
		wxAnyButton* ptr= luna_caster< wxObject, wxAnyButton >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAnyButton >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetBitmap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapCurrent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapDisabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBitmapPressed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBitmap(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapCurrent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapDisabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapPressed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBitmapMargins(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBitmapMargins_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapMargins_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBitmapPosition(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAnyButton::wxAnyButton()
	static wxAnyButton* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAnyButton::wxAnyButton() function, expected prototype:\nwxAnyButton::wxAnyButton()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxAnyButton();
	}

	// wxAnyButton::wxAnyButton(lua_Table * data)
	static wxAnyButton* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAnyButton::wxAnyButton(lua_Table * data) function, expected prototype:\nwxAnyButton::wxAnyButton(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxAnyButton(L,NULL);
	}

	// Overload binder for wxAnyButton::wxAnyButton
	static wxAnyButton* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxAnyButton, cannot match any of the overloads for function wxAnyButton:\n  wxAnyButton()\n  wxAnyButton(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// wxBitmap wxAnyButton::GetBitmap() const
	static int _bind_GetBitmap(lua_State *L) {
		if (!_lg_typecheck_GetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmap() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmap() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetBitmap();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxAnyButton::GetBitmapCurrent() const
	static int _bind_GetBitmapCurrent(lua_State *L) {
		if (!_lg_typecheck_GetBitmapCurrent(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmapCurrent() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmapCurrent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmapCurrent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetBitmapCurrent();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxAnyButton::GetBitmapDisabled() const
	static int _bind_GetBitmapDisabled(lua_State *L) {
		if (!_lg_typecheck_GetBitmapDisabled(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmapDisabled() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmapDisabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmapDisabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetBitmapDisabled();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxAnyButton::GetBitmapFocus() const
	static int _bind_GetBitmapFocus(lua_State *L) {
		if (!_lg_typecheck_GetBitmapFocus(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmapFocus() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmapFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmapFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetBitmapFocus();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxAnyButton::GetBitmapLabel() const
	static int _bind_GetBitmapLabel(lua_State *L) {
		if (!_lg_typecheck_GetBitmapLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmapLabel() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmapLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmapLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetBitmapLabel();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// wxBitmap wxAnyButton::GetBitmapPressed() const
	static int _bind_GetBitmapPressed(lua_State *L) {
		if (!_lg_typecheck_GetBitmapPressed(L)) {
			luaL_error(L, "luna typecheck failed in wxBitmap wxAnyButton::GetBitmapPressed() const function, expected prototype:\nwxBitmap wxAnyButton::GetBitmapPressed() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBitmap wxAnyButton::GetBitmapPressed() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBitmap stack_lret = self->GetBitmapPressed();
		wxBitmap* lret = new wxBitmap(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxBitmap >::push(L,lret,true);

		return 1;
	}

	// void wxAnyButton::SetBitmap(const wxBitmap & bitmap, wxDirection dir = ::wxLEFT)
	static int _bind_SetBitmap(lua_State *L) {
		if (!_lg_typecheck_SetBitmap(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmap(const wxBitmap & bitmap, wxDirection dir = ::wxLEFT) function, expected prototype:\nvoid wxAnyButton::SetBitmap(const wxBitmap & bitmap, wxDirection dir = ::wxLEFT)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmap function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;
		wxDirection dir=luatop>2 ? (wxDirection)lua_tointeger(L,3) : (wxDirection)::wxLEFT;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmap(const wxBitmap &, wxDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmap(bitmap, dir);

		return 0;
	}

	// void wxAnyButton::SetBitmapCurrent(const wxBitmap & bitmap)
	static int _bind_SetBitmapCurrent(lua_State *L) {
		if (!_lg_typecheck_SetBitmapCurrent(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapCurrent(const wxBitmap & bitmap) function, expected prototype:\nvoid wxAnyButton::SetBitmapCurrent(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmapCurrent function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapCurrent(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmapCurrent(bitmap);

		return 0;
	}

	// void wxAnyButton::SetBitmapDisabled(const wxBitmap & bitmap)
	static int _bind_SetBitmapDisabled(lua_State *L) {
		if (!_lg_typecheck_SetBitmapDisabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapDisabled(const wxBitmap & bitmap) function, expected prototype:\nvoid wxAnyButton::SetBitmapDisabled(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmapDisabled function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapDisabled(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmapDisabled(bitmap);

		return 0;
	}

	// void wxAnyButton::SetBitmapFocus(const wxBitmap & bitmap)
	static int _bind_SetBitmapFocus(lua_State *L) {
		if (!_lg_typecheck_SetBitmapFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapFocus(const wxBitmap & bitmap) function, expected prototype:\nvoid wxAnyButton::SetBitmapFocus(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmapFocus function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapFocus(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmapFocus(bitmap);

		return 0;
	}

	// void wxAnyButton::SetBitmapLabel(const wxBitmap & bitmap)
	static int _bind_SetBitmapLabel(lua_State *L) {
		if (!_lg_typecheck_SetBitmapLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapLabel(const wxBitmap & bitmap) function, expected prototype:\nvoid wxAnyButton::SetBitmapLabel(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmapLabel function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapLabel(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmapLabel(bitmap);

		return 0;
	}

	// void wxAnyButton::SetBitmapPressed(const wxBitmap & bitmap)
	static int _bind_SetBitmapPressed(lua_State *L) {
		if (!_lg_typecheck_SetBitmapPressed(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapPressed(const wxBitmap & bitmap) function, expected prototype:\nvoid wxAnyButton::SetBitmapPressed(const wxBitmap & bitmap)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxBitmap* bitmap_ptr=(Luna< wxObject >::checkSubType< wxBitmap >(L,2));
		if( !bitmap_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bitmap in wxAnyButton::SetBitmapPressed function");
		}
		const wxBitmap & bitmap=*bitmap_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapPressed(const wxBitmap &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmapPressed(bitmap);

		return 0;
	}

	// wxSize wxAnyButton::GetBitmapMargins()
	static int _bind_GetBitmapMargins(lua_State *L) {
		if (!_lg_typecheck_GetBitmapMargins(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnyButton::GetBitmapMargins() function, expected prototype:\nwxSize wxAnyButton::GetBitmapMargins()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnyButton::GetBitmapMargins(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetBitmapMargins();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxAnyButton::SetBitmapMargins(int x, int y)
	static int _bind_SetBitmapMargins_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetBitmapMargins_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapMargins(int x, int y) function, expected prototype:\nvoid wxAnyButton::SetBitmapMargins(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapMargins(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmapMargins(x, y);

		return 0;
	}

	// void wxAnyButton::SetBitmapMargins(const wxSize & sz)
	static int _bind_SetBitmapMargins_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetBitmapMargins_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapMargins(const wxSize & sz) function, expected prototype:\nvoid wxAnyButton::SetBitmapMargins(const wxSize & sz)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxAnyButton::SetBitmapMargins function");
		}
		const wxSize & sz=*sz_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapMargins(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmapMargins(sz);

		return 0;
	}

	// Overload binder for wxAnyButton::SetBitmapMargins
	static int _bind_SetBitmapMargins(lua_State *L) {
		if (_lg_typecheck_SetBitmapMargins_overload_1(L)) return _bind_SetBitmapMargins_overload_1(L);
		if (_lg_typecheck_SetBitmapMargins_overload_2(L)) return _bind_SetBitmapMargins_overload_2(L);

		luaL_error(L, "error in function SetBitmapMargins, cannot match any of the overloads for function SetBitmapMargins:\n  SetBitmapMargins(int, int)\n  SetBitmapMargins(const wxSize &)\n");
		return 0;
	}

	// void wxAnyButton::SetBitmapPosition(wxDirection dir)
	static int _bind_SetBitmapPosition(lua_State *L) {
		if (!_lg_typecheck_SetBitmapPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::SetBitmapPosition(wxDirection dir) function, expected prototype:\nvoid wxAnyButton::SetBitmapPosition(wxDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDirection dir=(wxDirection)lua_tointeger(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::SetBitmapPosition(wxDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBitmapPosition(dir);

		return 0;
	}

	// wxClassInfo * wxAnyButton::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxAnyButton::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxAnyButton::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxAnyButton::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxAnyButton::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxAnyButton::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_AcceptsFocus() const function, expected prototype:\nbool wxAnyButton::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxAnyButton::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxAnyButton::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_HasFocus() const function, expected prototype:\nbool wxAnyButton::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAnyButton::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxAnyButton::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetCanFocus(canFocus);

		return 0;
	}

	// void wxAnyButton::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetFocus() function, expected prototype:\nvoid wxAnyButton::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetFocus();

		return 0;
	}

	// void wxAnyButton::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetFocusFromKbd() function, expected prototype:\nvoid wxAnyButton::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetFocusFromKbd();

		return 0;
	}

	// void wxAnyButton::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxAnyButton::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::AddChild(child);

		return 0;
	}

	// void wxAnyButton::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxAnyButton::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::RemoveChild(child);

		return 0;
	}

	// bool wxAnyButton::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxAnyButton::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAnyButton::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxAnyButton::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxAnyButton::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxAnyButton::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxAnyButton::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAnyButton::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAnyButton::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAnyButton::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxAnyButton::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxAnyButton::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAnyButton::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAnyButton::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAnyButton::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxAnyButton::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxAnyButton::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAnyButton::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAnyButton::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxAnyButton::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxAnyButton::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_ScrollLines(int lines) function, expected prototype:\nbool wxAnyButton::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_ScrollPages(int pages) function, expected prototype:\nbool wxAnyButton::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAnyButton::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxAnyButton::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxAnyButton::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxAnyButton::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxAnyButton::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxAnyButton::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxAnyButton::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnyButton::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxAnyButton::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAnyButton::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnyButton::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAnyButton::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAnyButton::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnyButton::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxAnyButton::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAnyButton::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnyButton::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAnyButton::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxAnyButton::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_Fit() function, expected prototype:\nvoid wxAnyButton::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::Fit();

		return 0;
	}

	// void wxAnyButton::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_FitInside() function, expected prototype:\nvoid wxAnyButton::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::FitInside();

		return 0;
	}

	// wxSize wxAnyButton::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnyButton::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxAnyButton::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnyButton::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAnyButton::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAnyButton::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnyButton::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxAnyButton::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnyButton::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAnyButton::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAnyButton::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnyButton::base_GetMaxSize() const function, expected prototype:\nwxSize wxAnyButton::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnyButton::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAnyButton::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAnyButton::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnyButton::base_GetMinClientSize() const function, expected prototype:\nwxSize wxAnyButton::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnyButton::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAnyButton::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAnyButton::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnyButton::base_GetMinSize() const function, expected prototype:\nwxSize wxAnyButton::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnyButton::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAnyButton::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAnyButton::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnyButton::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxAnyButton::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnyButton::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAnyButton::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxAnyButton::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxAnyButton::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxAnyButton::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxAnyButton::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxAnyButton::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxAnyButton::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxAnyButton::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAnyButton::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxAnyButton::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SendSizeEvent(flags);

		return 0;
	}

	// void wxAnyButton::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxAnyButton::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAnyButton::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetMaxClientSize(size);

		return 0;
	}

	// void wxAnyButton::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxAnyButton::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAnyButton::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetMaxSize(size);

		return 0;
	}

	// void wxAnyButton::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxAnyButton::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAnyButton::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetMinClientSize(size);

		return 0;
	}

	// void wxAnyButton::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxAnyButton::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxAnyButton::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetMinSize(size);

		return 0;
	}

	// void wxAnyButton::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxAnyButton::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxAnyButton::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxAnyButton::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxAnyButton::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxAnyButton::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxAnyButton::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxAnyButton::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxAnyButton::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxAnyButton::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxAnyButton::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxAnyButton::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxAnyButton::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxAnyButton::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_ClearBackground() function, expected prototype:\nvoid wxAnyButton::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxAnyButton::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxAnyButton::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxAnyButton::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxAnyButton::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxAnyButton::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAnyButton::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxAnyButton::base_GetCharHeight() const function, expected prototype:\nint wxAnyButton::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAnyButton::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAnyButton::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxAnyButton::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxAnyButton::base_GetCharWidth() const function, expected prototype:\nint wxAnyButton::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxAnyButton::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxAnyButton::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxAnyButton::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxAnyButton::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxAnyButton::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxAnyButton::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxAnyButton::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxAnyButton::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxAnyButton::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxAnyButton::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_Update() function, expected prototype:\nvoid wxAnyButton::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::Update();

		return 0;
	}

	// bool wxAnyButton::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxAnyButton::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxAnyButton::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxAnyButton::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_ShouldInheritColours() const function, expected prototype:\nbool wxAnyButton::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAnyButton::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxAnyButton::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxAnyButton::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_GetThemeEnabled() const function, expected prototype:\nbool wxAnyButton::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_CanSetTransparent() function, expected prototype:\nbool wxAnyButton::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxAnyButton::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAnyButton::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxAnyButton::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetNextHandler(handler);

		return 0;
	}

	// void wxAnyButton::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxAnyButton::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetPreviousHandler(handler);

		return 0;
	}

	// long wxAnyButton::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxAnyButton::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxAnyButton::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxAnyButton::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxAnyButton::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxAnyButton::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxAnyButton::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxAnyButton::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxAnyButton::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxAnyButton::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_Lower() function, expected prototype:\nvoid wxAnyButton::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::Lower();

		return 0;
	}

	// void wxAnyButton::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_Raise() function, expected prototype:\nvoid wxAnyButton::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::Raise();

		return 0;
	}

	// bool wxAnyButton::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxAnyButton::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_IsShown() const function, expected prototype:\nbool wxAnyButton::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_IsShownOnScreen() const function, expected prototype:\nbool wxAnyButton::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_Enable(bool enable = true) function, expected prototype:\nbool wxAnyButton::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_Show(bool show = true) function, expected prototype:\nbool wxAnyButton::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxAnyButton::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxAnyButton::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAnyButton::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxAnyButton::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxAnyButton::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAnyButton::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxAnyButton::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxAnyButton::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxAnyButton::base_GetValidator() function, expected prototype:\nwxValidator * wxAnyButton::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxAnyButton::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxAnyButton::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxAnyButton::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxAnyButton::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxAnyButton::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetValidator(validator);

		return 0;
	}

	// bool wxAnyButton::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_TransferDataFromWindow() function, expected prototype:\nbool wxAnyButton::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_TransferDataToWindow() function, expected prototype:\nbool wxAnyButton::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_Validate() function, expected prototype:\nbool wxAnyButton::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxAnyButton::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxAnyButton::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxAnyButton::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxAnyButton::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxAnyButton::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxAnyButton::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAnyButton::base_GetName() const function, expected prototype:\nwxString wxAnyButton::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAnyButton::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxAnyButton::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAnyButton::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxAnyButton::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetLayoutDirection(dir);

		return 0;
	}

	// void wxAnyButton::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetName(const wxString & name) function, expected prototype:\nvoid wxAnyButton::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetName(name);

		return 0;
	}

	// void wxAnyButton::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxAnyButton::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxAnyButton::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxAnyButton::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_Destroy() function, expected prototype:\nbool wxAnyButton::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxAnyButton::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxAnyButton::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxAnyButton::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxAnyButton::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxAnyButton::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxAnyButton::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxAnyButton::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetDropTarget(target);

		return 0;
	}

	// void wxAnyButton::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxAnyButton::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxAnyButton::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_Layout() function, expected prototype:\nbool wxAnyButton::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_HasCapture() const function, expected prototype:\nbool wxAnyButton::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxAnyButton::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxAnyButton::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAnyButton::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxAnyButton::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::WarpPointer(x, y);

		return 0;
	}

	// void wxAnyButton::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxAnyButton::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxAnyButton::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxAnyButton::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxAnyButton::base_GetHandle() const function, expected prototype:\nHWND wxAnyButton::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxAnyButton::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxAnyButton::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxAnyButton::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_HasMultiplePages() const function, expected prototype:\nbool wxAnyButton::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAnyButton::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_InheritAttributes() function, expected prototype:\nvoid wxAnyButton::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::InheritAttributes();

		return 0;
	}

	// void wxAnyButton::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_InitDialog() function, expected prototype:\nvoid wxAnyButton::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::InitDialog();

		return 0;
	}

	// bool wxAnyButton::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_IsRetained() const function, expected prototype:\nbool wxAnyButton::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_IsTopLevel() const function, expected prototype:\nbool wxAnyButton::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAnyButton::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxAnyButton::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::MakeModal(modal);

		return 0;
	}

	// void wxAnyButton::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_OnInternalIdle() function, expected prototype:\nvoid wxAnyButton::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::OnInternalIdle();

		return 0;
	}

	// bool wxAnyButton::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxAnyButton::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxAnyButton::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAnyButton::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxAnyButton::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAnyButton::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxAnyButton::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxAnyButton::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxAnyButton::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::UpdateWindowUI(flags);

		return 0;
	}

	// void wxAnyButton::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxAnyButton::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxAnyButton::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::Command(event);

		return 0;
	}

	// wxString wxAnyButton::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxAnyButton::base_GetLabel() const function, expected prototype:\nwxString wxAnyButton::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxAnyButton::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxAnyButton::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxAnyButton::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxAnyButton::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxAnyButton::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxAnyButton* self=Luna< wxObject >::checkSubType< wxAnyButton >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxAnyButton::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxAnyButton::SetLabel(label);

		return 0;
	}


	// Operator binds:

};

wxAnyButton* LunaTraits< wxAnyButton >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAnyButton::_bind_ctor(L);
}

void LunaTraits< wxAnyButton >::_bind_dtor(wxAnyButton* obj) {
	delete obj;
}

const char LunaTraits< wxAnyButton >::className[] = "wxAnyButton";
const char LunaTraits< wxAnyButton >::fullName[] = "wxAnyButton";
const char LunaTraits< wxAnyButton >::moduleName[] = "wx";
const char* LunaTraits< wxAnyButton >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxAnyButton >::hash = 39771035;
const int LunaTraits< wxAnyButton >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxAnyButton >::methods[] = {
	{"GetBitmap", &luna_wrapper_wxAnyButton::_bind_GetBitmap},
	{"GetBitmapCurrent", &luna_wrapper_wxAnyButton::_bind_GetBitmapCurrent},
	{"GetBitmapDisabled", &luna_wrapper_wxAnyButton::_bind_GetBitmapDisabled},
	{"GetBitmapFocus", &luna_wrapper_wxAnyButton::_bind_GetBitmapFocus},
	{"GetBitmapLabel", &luna_wrapper_wxAnyButton::_bind_GetBitmapLabel},
	{"GetBitmapPressed", &luna_wrapper_wxAnyButton::_bind_GetBitmapPressed},
	{"SetBitmap", &luna_wrapper_wxAnyButton::_bind_SetBitmap},
	{"SetBitmapCurrent", &luna_wrapper_wxAnyButton::_bind_SetBitmapCurrent},
	{"SetBitmapDisabled", &luna_wrapper_wxAnyButton::_bind_SetBitmapDisabled},
	{"SetBitmapFocus", &luna_wrapper_wxAnyButton::_bind_SetBitmapFocus},
	{"SetBitmapLabel", &luna_wrapper_wxAnyButton::_bind_SetBitmapLabel},
	{"SetBitmapPressed", &luna_wrapper_wxAnyButton::_bind_SetBitmapPressed},
	{"GetBitmapMargins", &luna_wrapper_wxAnyButton::_bind_GetBitmapMargins},
	{"SetBitmapMargins", &luna_wrapper_wxAnyButton::_bind_SetBitmapMargins},
	{"SetBitmapPosition", &luna_wrapper_wxAnyButton::_bind_SetBitmapPosition},
	{"base_GetClassInfo", &luna_wrapper_wxAnyButton::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxAnyButton::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxAnyButton::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxAnyButton::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxAnyButton::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxAnyButton::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxAnyButton::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxAnyButton::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxAnyButton::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxAnyButton::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxAnyButton::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxAnyButton::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxAnyButton::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxAnyButton::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxAnyButton::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxAnyButton::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxAnyButton::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxAnyButton::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxAnyButton::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxAnyButton::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxAnyButton::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxAnyButton::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxAnyButton::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxAnyButton::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxAnyButton::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxAnyButton::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxAnyButton::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxAnyButton::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxAnyButton::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxAnyButton::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxAnyButton::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxAnyButton::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxAnyButton::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxAnyButton::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxAnyButton::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxAnyButton::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxAnyButton::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxAnyButton::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxAnyButton::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxAnyButton::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxAnyButton::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxAnyButton::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxAnyButton::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxAnyButton::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxAnyButton::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxAnyButton::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxAnyButton::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxAnyButton::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxAnyButton::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxAnyButton::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxAnyButton::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxAnyButton::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxAnyButton::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxAnyButton::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxAnyButton::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxAnyButton::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxAnyButton::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxAnyButton::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxAnyButton::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxAnyButton::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxAnyButton::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxAnyButton::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxAnyButton::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxAnyButton::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxAnyButton::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxAnyButton::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxAnyButton::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxAnyButton::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxAnyButton::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxAnyButton::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxAnyButton::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxAnyButton::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxAnyButton::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxAnyButton::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxAnyButton::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxAnyButton::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxAnyButton::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxAnyButton::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxAnyButton::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxAnyButton::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxAnyButton::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxAnyButton::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxAnyButton::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxAnyButton::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxAnyButton::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxAnyButton::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxAnyButton::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxAnyButton::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxAnyButton::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxAnyButton::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxAnyButton::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxAnyButton::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxAnyButton::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxAnyButton::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxAnyButton::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxAnyButton::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxAnyButton::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxAnyButton::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxAnyButton::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxAnyButton::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxAnyButton::_bind_base_SetLabel},
	{"fromVoid", &luna_wrapper_wxAnyButton::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAnyButton::_bind_asVoid},
	{"getTable", &luna_wrapper_wxAnyButton::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAnyButton >::converters[] = {
	{"wxObject", &luna_wrapper_wxAnyButton::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAnyButton >::enumValues[] = {
	{0,0}
};


