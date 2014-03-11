#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHyperlinkCtrl.h>

class luna_wrapper_wxHyperlinkCtrl {
public:
	typedef Luna< wxHyperlinkCtrl > luna_t;

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

		wxHyperlinkCtrl* self= (wxHyperlinkCtrl*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHyperlinkCtrl >::push(L,self,false);
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
		//wxHyperlinkCtrl* ptr= dynamic_cast< wxHyperlinkCtrl* >(Luna< wxObject >::check(L,1));
		wxHyperlinkCtrl* ptr= luna_caster< wxObject, wxHyperlinkCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHyperlinkCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,25723480) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,20268751) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetHoverColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNormalColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisited(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVisitedColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetHoverColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNormalColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetURL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVisited(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVisitedColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
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

	inline static bool _lg_typecheck_base_GetHoverColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetNormalColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetURL(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetVisitedColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetHoverColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetNormalColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetURL(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetVisitedColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHyperlinkCtrl::wxHyperlinkCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & label, const wxString & url, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHL_DEFAULT_STYLE, const wxString & name = wxHyperlinkCtrlNameStr)
	static wxHyperlinkCtrl* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxHyperlinkCtrl::wxHyperlinkCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & label, const wxString & url, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHL_DEFAULT_STYLE, const wxString & name = wxHyperlinkCtrlNameStr) function, expected prototype:\nwxHyperlinkCtrl::wxHyperlinkCtrl(lua_Table * data, wxWindow * parent, int id, const wxString & label, const wxString & url, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHL_DEFAULT_STYLE, const wxString & name = wxHyperlinkCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 6 ID = 25723480\narg 7 ID = 20268751\narg 9 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		wxString url(lua_tostring(L,5),lua_objlen(L,5));
		const wxPoint* pos_ptr=luatop>5 ? (Luna< wxPoint >::check(L,6)) : NULL;
		if( luatop>5 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHyperlinkCtrl::wxHyperlinkCtrl function");
		}
		const wxPoint & pos=luatop>5 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>6 ? (Luna< wxSize >::check(L,7)) : NULL;
		if( luatop>6 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHyperlinkCtrl::wxHyperlinkCtrl function");
		}
		const wxSize & size=luatop>6 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>7 ? (long)lua_tonumber(L,8) : (long)wxHL_DEFAULT_STYLE;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wrapper_wxHyperlinkCtrl(L,NULL, parent, id, label, url, pos, size, style, name);
	}


	// Function binds:
	// wxColour wxHyperlinkCtrl::GetHoverColour() const
	static int _bind_GetHoverColour(lua_State *L) {
		if (!_lg_typecheck_GetHoverColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxHyperlinkCtrl::GetHoverColour() const function, expected prototype:\nwxColour wxHyperlinkCtrl::GetHoverColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxHyperlinkCtrl::GetHoverColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetHoverColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxHyperlinkCtrl::GetNormalColour() const
	static int _bind_GetNormalColour(lua_State *L) {
		if (!_lg_typecheck_GetNormalColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxHyperlinkCtrl::GetNormalColour() const function, expected prototype:\nwxColour wxHyperlinkCtrl::GetNormalColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxHyperlinkCtrl::GetNormalColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetNormalColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxString wxHyperlinkCtrl::GetURL() const
	static int _bind_GetURL(lua_State *L) {
		if (!_lg_typecheck_GetURL(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHyperlinkCtrl::GetURL() const function, expected prototype:\nwxString wxHyperlinkCtrl::GetURL() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHyperlinkCtrl::GetURL() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetURL();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxHyperlinkCtrl::GetVisited() const
	static int _bind_GetVisited(lua_State *L) {
		if (!_lg_typecheck_GetVisited(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::GetVisited() const function, expected prototype:\nbool wxHyperlinkCtrl::GetVisited() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::GetVisited() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetVisited();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour wxHyperlinkCtrl::GetVisitedColour() const
	static int _bind_GetVisitedColour(lua_State *L) {
		if (!_lg_typecheck_GetVisitedColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxHyperlinkCtrl::GetVisitedColour() const function, expected prototype:\nwxColour wxHyperlinkCtrl::GetVisitedColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxHyperlinkCtrl::GetVisitedColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetVisitedColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxHyperlinkCtrl::SetHoverColour(const wxColour & colour)
	static int _bind_SetHoverColour(lua_State *L) {
		if (!_lg_typecheck_SetHoverColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::SetHoverColour(const wxColour & colour) function, expected prototype:\nvoid wxHyperlinkCtrl::SetHoverColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxHyperlinkCtrl::SetHoverColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::SetHoverColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHoverColour(colour);

		return 0;
	}

	// void wxHyperlinkCtrl::SetNormalColour(const wxColour & colour)
	static int _bind_SetNormalColour(lua_State *L) {
		if (!_lg_typecheck_SetNormalColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::SetNormalColour(const wxColour & colour) function, expected prototype:\nvoid wxHyperlinkCtrl::SetNormalColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxHyperlinkCtrl::SetNormalColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::SetNormalColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNormalColour(colour);

		return 0;
	}

	// void wxHyperlinkCtrl::SetURL(const wxString & url)
	static int _bind_SetURL(lua_State *L) {
		if (!_lg_typecheck_SetURL(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::SetURL(const wxString & url) function, expected prototype:\nvoid wxHyperlinkCtrl::SetURL(const wxString & url)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString url(lua_tostring(L,2),lua_objlen(L,2));

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::SetURL(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetURL(url);

		return 0;
	}

	// void wxHyperlinkCtrl::SetVisited(bool visited = true)
	static int _bind_SetVisited(lua_State *L) {
		if (!_lg_typecheck_SetVisited(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::SetVisited(bool visited = true) function, expected prototype:\nvoid wxHyperlinkCtrl::SetVisited(bool visited = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool visited=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::SetVisited(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVisited(visited);

		return 0;
	}

	// void wxHyperlinkCtrl::SetVisitedColour(const wxColour & colour)
	static int _bind_SetVisitedColour(lua_State *L) {
		if (!_lg_typecheck_SetVisitedColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::SetVisitedColour(const wxColour & colour) function, expected prototype:\nvoid wxHyperlinkCtrl::SetVisitedColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxHyperlinkCtrl::SetVisitedColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::SetVisitedColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVisitedColour(colour);

		return 0;
	}

	// wxClassInfo * wxHyperlinkCtrl::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHyperlinkCtrl::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHyperlinkCtrl::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHyperlinkCtrl::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHyperlinkCtrl::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_AcceptsFocus() const function, expected prototype:\nbool wxHyperlinkCtrl::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxHyperlinkCtrl::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxHyperlinkCtrl::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_HasFocus() const function, expected prototype:\nbool wxHyperlinkCtrl::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHyperlinkCtrl::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetCanFocus(canFocus);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetFocus() function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetFocus();

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetFocusFromKbd() function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetFocusFromKbd();

		return 0;
	}

	// void wxHyperlinkCtrl::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxHyperlinkCtrl::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::AddChild(child);

		return 0;
	}

	// void wxHyperlinkCtrl::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxHyperlinkCtrl::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::RemoveChild(child);

		return 0;
	}

	// bool wxHyperlinkCtrl::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxHyperlinkCtrl::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHyperlinkCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxHyperlinkCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxHyperlinkCtrl::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxHyperlinkCtrl::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxHyperlinkCtrl::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHyperlinkCtrl::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHyperlinkCtrl::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHyperlinkCtrl::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxHyperlinkCtrl::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxHyperlinkCtrl::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHyperlinkCtrl::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHyperlinkCtrl::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHyperlinkCtrl::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxHyperlinkCtrl::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxHyperlinkCtrl::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHyperlinkCtrl::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHyperlinkCtrl::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxHyperlinkCtrl::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_ScrollLines(int lines) function, expected prototype:\nbool wxHyperlinkCtrl::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_ScrollPages(int pages) function, expected prototype:\nbool wxHyperlinkCtrl::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHyperlinkCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxHyperlinkCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxHyperlinkCtrl::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHyperlinkCtrl::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxHyperlinkCtrl::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHyperlinkCtrl::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHyperlinkCtrl::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHyperlinkCtrl::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHyperlinkCtrl::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHyperlinkCtrl::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxHyperlinkCtrl::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHyperlinkCtrl::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHyperlinkCtrl::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHyperlinkCtrl::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxHyperlinkCtrl::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_Fit() function, expected prototype:\nvoid wxHyperlinkCtrl::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::Fit();

		return 0;
	}

	// void wxHyperlinkCtrl::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_FitInside() function, expected prototype:\nvoid wxHyperlinkCtrl::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::FitInside();

		return 0;
	}

	// wxSize wxHyperlinkCtrl::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHyperlinkCtrl::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxHyperlinkCtrl::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHyperlinkCtrl::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHyperlinkCtrl::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHyperlinkCtrl::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHyperlinkCtrl::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxHyperlinkCtrl::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHyperlinkCtrl::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHyperlinkCtrl::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHyperlinkCtrl::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHyperlinkCtrl::base_GetMaxSize() const function, expected prototype:\nwxSize wxHyperlinkCtrl::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHyperlinkCtrl::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHyperlinkCtrl::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHyperlinkCtrl::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHyperlinkCtrl::base_GetMinClientSize() const function, expected prototype:\nwxSize wxHyperlinkCtrl::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHyperlinkCtrl::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHyperlinkCtrl::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHyperlinkCtrl::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHyperlinkCtrl::base_GetMinSize() const function, expected prototype:\nwxSize wxHyperlinkCtrl::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHyperlinkCtrl::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHyperlinkCtrl::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHyperlinkCtrl::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHyperlinkCtrl::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxHyperlinkCtrl::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHyperlinkCtrl::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHyperlinkCtrl::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHyperlinkCtrl::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHyperlinkCtrl::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxHyperlinkCtrl::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHyperlinkCtrl::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHyperlinkCtrl::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxHyperlinkCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHyperlinkCtrl::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SendSizeEvent(flags);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHyperlinkCtrl::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetMaxClientSize(size);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHyperlinkCtrl::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetMaxSize(size);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHyperlinkCtrl::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetMinClientSize(size);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHyperlinkCtrl::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetMinSize(size);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxHyperlinkCtrl::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxHyperlinkCtrl::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxHyperlinkCtrl::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxHyperlinkCtrl::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxHyperlinkCtrl::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxHyperlinkCtrl::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxHyperlinkCtrl::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxHyperlinkCtrl::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxHyperlinkCtrl::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxHyperlinkCtrl::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_ClearBackground() function, expected prototype:\nvoid wxHyperlinkCtrl::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxHyperlinkCtrl::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxHyperlinkCtrl::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxHyperlinkCtrl::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxHyperlinkCtrl::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxHyperlinkCtrl::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHyperlinkCtrl::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxHyperlinkCtrl::base_GetCharHeight() const function, expected prototype:\nint wxHyperlinkCtrl::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHyperlinkCtrl::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHyperlinkCtrl::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHyperlinkCtrl::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxHyperlinkCtrl::base_GetCharWidth() const function, expected prototype:\nint wxHyperlinkCtrl::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHyperlinkCtrl::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHyperlinkCtrl::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxHyperlinkCtrl::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxHyperlinkCtrl::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxHyperlinkCtrl::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxHyperlinkCtrl::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxHyperlinkCtrl::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxHyperlinkCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxHyperlinkCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxHyperlinkCtrl::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_Update() function, expected prototype:\nvoid wxHyperlinkCtrl::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::Update();

		return 0;
	}

	// bool wxHyperlinkCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxHyperlinkCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxHyperlinkCtrl::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxHyperlinkCtrl::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_ShouldInheritColours() const function, expected prototype:\nbool wxHyperlinkCtrl::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHyperlinkCtrl::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxHyperlinkCtrl::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_GetThemeEnabled() const function, expected prototype:\nbool wxHyperlinkCtrl::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_CanSetTransparent() function, expected prototype:\nbool wxHyperlinkCtrl::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxHyperlinkCtrl::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHyperlinkCtrl::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetNextHandler(handler);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetPreviousHandler(handler);

		return 0;
	}

	// long wxHyperlinkCtrl::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxHyperlinkCtrl::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxHyperlinkCtrl::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxHyperlinkCtrl::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxHyperlinkCtrl::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHyperlinkCtrl::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxHyperlinkCtrl::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_Lower() function, expected prototype:\nvoid wxHyperlinkCtrl::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::Lower();

		return 0;
	}

	// void wxHyperlinkCtrl::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_Raise() function, expected prototype:\nvoid wxHyperlinkCtrl::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::Raise();

		return 0;
	}

	// bool wxHyperlinkCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxHyperlinkCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_IsShown() const function, expected prototype:\nbool wxHyperlinkCtrl::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_IsShownOnScreen() const function, expected prototype:\nbool wxHyperlinkCtrl::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_Enable(bool enable = true) function, expected prototype:\nbool wxHyperlinkCtrl::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_Show(bool show = true) function, expected prototype:\nbool wxHyperlinkCtrl::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxHyperlinkCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxHyperlinkCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHyperlinkCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxHyperlinkCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxHyperlinkCtrl::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHyperlinkCtrl::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxHyperlinkCtrl::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxHyperlinkCtrl::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxHyperlinkCtrl::base_GetValidator() function, expected prototype:\nwxValidator * wxHyperlinkCtrl::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxHyperlinkCtrl::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxHyperlinkCtrl::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxHyperlinkCtrl::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxHyperlinkCtrl::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetValidator(validator);

		return 0;
	}

	// bool wxHyperlinkCtrl::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_TransferDataFromWindow() function, expected prototype:\nbool wxHyperlinkCtrl::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_TransferDataToWindow() function, expected prototype:\nbool wxHyperlinkCtrl::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_Validate() function, expected prototype:\nbool wxHyperlinkCtrl::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxHyperlinkCtrl::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxHyperlinkCtrl::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxHyperlinkCtrl::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxHyperlinkCtrl::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxHyperlinkCtrl::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxHyperlinkCtrl::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHyperlinkCtrl::base_GetName() const function, expected prototype:\nwxString wxHyperlinkCtrl::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHyperlinkCtrl::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxHyperlinkCtrl::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHyperlinkCtrl::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetLayoutDirection(dir);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetName(const wxString & name) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetName(name);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxHyperlinkCtrl::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxHyperlinkCtrl::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_Destroy() function, expected prototype:\nbool wxHyperlinkCtrl::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxHyperlinkCtrl::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxHyperlinkCtrl::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxHyperlinkCtrl::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxHyperlinkCtrl::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxHyperlinkCtrl::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxHyperlinkCtrl::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetDropTarget(target);

		return 0;
	}

	// void wxHyperlinkCtrl::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxHyperlinkCtrl::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxHyperlinkCtrl::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_Layout() function, expected prototype:\nbool wxHyperlinkCtrl::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_HasCapture() const function, expected prototype:\nbool wxHyperlinkCtrl::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxHyperlinkCtrl::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxHyperlinkCtrl::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHyperlinkCtrl::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxHyperlinkCtrl::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::WarpPointer(x, y);

		return 0;
	}

	// void wxHyperlinkCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxHyperlinkCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxHyperlinkCtrl::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxHyperlinkCtrl::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxHyperlinkCtrl::base_GetHandle() const function, expected prototype:\nHWND wxHyperlinkCtrl::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxHyperlinkCtrl::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxHyperlinkCtrl::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_HasMultiplePages() const function, expected prototype:\nbool wxHyperlinkCtrl::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHyperlinkCtrl::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_InheritAttributes() function, expected prototype:\nvoid wxHyperlinkCtrl::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::InheritAttributes();

		return 0;
	}

	// void wxHyperlinkCtrl::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_InitDialog() function, expected prototype:\nvoid wxHyperlinkCtrl::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::InitDialog();

		return 0;
	}

	// bool wxHyperlinkCtrl::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_IsRetained() const function, expected prototype:\nbool wxHyperlinkCtrl::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_IsTopLevel() const function, expected prototype:\nbool wxHyperlinkCtrl::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHyperlinkCtrl::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxHyperlinkCtrl::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::MakeModal(modal);

		return 0;
	}

	// void wxHyperlinkCtrl::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_OnInternalIdle() function, expected prototype:\nvoid wxHyperlinkCtrl::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::OnInternalIdle();

		return 0;
	}

	// bool wxHyperlinkCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxHyperlinkCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHyperlinkCtrl::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHyperlinkCtrl::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxHyperlinkCtrl::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHyperlinkCtrl::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHyperlinkCtrl::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHyperlinkCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxHyperlinkCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::UpdateWindowUI(flags);

		return 0;
	}

	// void wxHyperlinkCtrl::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxHyperlinkCtrl::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxHyperlinkCtrl::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::Command(event);

		return 0;
	}

	// wxString wxHyperlinkCtrl::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHyperlinkCtrl::base_GetLabel() const function, expected prototype:\nwxString wxHyperlinkCtrl::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHyperlinkCtrl::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxHyperlinkCtrl::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHyperlinkCtrl::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetLabel(label);

		return 0;
	}

	// wxColour wxHyperlinkCtrl::base_GetHoverColour() const
	static int _bind_base_GetHoverColour(lua_State *L) {
		if (!_lg_typecheck_base_GetHoverColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxHyperlinkCtrl::base_GetHoverColour() const function, expected prototype:\nwxColour wxHyperlinkCtrl::base_GetHoverColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxHyperlinkCtrl::base_GetHoverColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->wxHyperlinkCtrl::GetHoverColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxColour wxHyperlinkCtrl::base_GetNormalColour() const
	static int _bind_base_GetNormalColour(lua_State *L) {
		if (!_lg_typecheck_base_GetNormalColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxHyperlinkCtrl::base_GetNormalColour() const function, expected prototype:\nwxColour wxHyperlinkCtrl::base_GetNormalColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxHyperlinkCtrl::base_GetNormalColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->wxHyperlinkCtrl::GetNormalColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxString wxHyperlinkCtrl::base_GetURL() const
	static int _bind_base_GetURL(lua_State *L) {
		if (!_lg_typecheck_base_GetURL(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHyperlinkCtrl::base_GetURL() const function, expected prototype:\nwxString wxHyperlinkCtrl::base_GetURL() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHyperlinkCtrl::base_GetURL() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxHyperlinkCtrl::GetURL();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxColour wxHyperlinkCtrl::base_GetVisitedColour() const
	static int _bind_base_GetVisitedColour(lua_State *L) {
		if (!_lg_typecheck_base_GetVisitedColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxHyperlinkCtrl::base_GetVisitedColour() const function, expected prototype:\nwxColour wxHyperlinkCtrl::base_GetVisitedColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxHyperlinkCtrl::base_GetVisitedColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->wxHyperlinkCtrl::GetVisitedColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxHyperlinkCtrl::base_SetHoverColour(const wxColour & colour)
	static int _bind_base_SetHoverColour(lua_State *L) {
		if (!_lg_typecheck_base_SetHoverColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetHoverColour(const wxColour & colour) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetHoverColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxHyperlinkCtrl::base_SetHoverColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetHoverColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetHoverColour(colour);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetNormalColour(const wxColour & colour)
	static int _bind_base_SetNormalColour(lua_State *L) {
		if (!_lg_typecheck_base_SetNormalColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetNormalColour(const wxColour & colour) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetNormalColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxHyperlinkCtrl::base_SetNormalColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetNormalColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetNormalColour(colour);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetURL(const wxString & url)
	static int _bind_base_SetURL(lua_State *L) {
		if (!_lg_typecheck_base_SetURL(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetURL(const wxString & url) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetURL(const wxString & url)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString url(lua_tostring(L,2),lua_objlen(L,2));

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetURL(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetURL(url);

		return 0;
	}

	// void wxHyperlinkCtrl::base_SetVisitedColour(const wxColour & colour)
	static int _bind_base_SetVisitedColour(lua_State *L) {
		if (!_lg_typecheck_base_SetVisitedColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxHyperlinkCtrl::base_SetVisitedColour(const wxColour & colour) function, expected prototype:\nvoid wxHyperlinkCtrl::base_SetVisitedColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxHyperlinkCtrl::base_SetVisitedColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxHyperlinkCtrl* self=Luna< wxObject >::checkSubType< wxHyperlinkCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHyperlinkCtrl::base_SetVisitedColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHyperlinkCtrl::SetVisitedColour(colour);

		return 0;
	}


	// Operator binds:

};

wxHyperlinkCtrl* LunaTraits< wxHyperlinkCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHyperlinkCtrl::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxHyperlinkCtrl::GetVisited() const
	// void wxHyperlinkCtrl::SetVisited(bool visited = true)
}

void LunaTraits< wxHyperlinkCtrl >::_bind_dtor(wxHyperlinkCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxHyperlinkCtrl >::className[] = "wxHyperlinkCtrl";
const char LunaTraits< wxHyperlinkCtrl >::fullName[] = "wxHyperlinkCtrl";
const char LunaTraits< wxHyperlinkCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxHyperlinkCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxHyperlinkCtrl >::hash = 14343672;
const int LunaTraits< wxHyperlinkCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxHyperlinkCtrl >::methods[] = {
	{"GetHoverColour", &luna_wrapper_wxHyperlinkCtrl::_bind_GetHoverColour},
	{"GetNormalColour", &luna_wrapper_wxHyperlinkCtrl::_bind_GetNormalColour},
	{"GetURL", &luna_wrapper_wxHyperlinkCtrl::_bind_GetURL},
	{"GetVisited", &luna_wrapper_wxHyperlinkCtrl::_bind_GetVisited},
	{"GetVisitedColour", &luna_wrapper_wxHyperlinkCtrl::_bind_GetVisitedColour},
	{"SetHoverColour", &luna_wrapper_wxHyperlinkCtrl::_bind_SetHoverColour},
	{"SetNormalColour", &luna_wrapper_wxHyperlinkCtrl::_bind_SetNormalColour},
	{"SetURL", &luna_wrapper_wxHyperlinkCtrl::_bind_SetURL},
	{"SetVisited", &luna_wrapper_wxHyperlinkCtrl::_bind_SetVisited},
	{"SetVisitedColour", &luna_wrapper_wxHyperlinkCtrl::_bind_SetVisitedColour},
	{"base_GetClassInfo", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxHyperlinkCtrl::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxHyperlinkCtrl::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxHyperlinkCtrl::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxHyperlinkCtrl::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxHyperlinkCtrl::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxHyperlinkCtrl::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxHyperlinkCtrl::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxHyperlinkCtrl::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxHyperlinkCtrl::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxHyperlinkCtrl::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxHyperlinkCtrl::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxHyperlinkCtrl::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxHyperlinkCtrl::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxHyperlinkCtrl::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxHyperlinkCtrl::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxHyperlinkCtrl::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxHyperlinkCtrl::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxHyperlinkCtrl::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxHyperlinkCtrl::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxHyperlinkCtrl::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxHyperlinkCtrl::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxHyperlinkCtrl::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxHyperlinkCtrl::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxHyperlinkCtrl::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxHyperlinkCtrl::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxHyperlinkCtrl::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxHyperlinkCtrl::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxHyperlinkCtrl::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxHyperlinkCtrl::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxHyperlinkCtrl::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxHyperlinkCtrl::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxHyperlinkCtrl::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxHyperlinkCtrl::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxHyperlinkCtrl::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxHyperlinkCtrl::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxHyperlinkCtrl::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxHyperlinkCtrl::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetLabel},
	{"base_GetHoverColour", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetHoverColour},
	{"base_GetNormalColour", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetNormalColour},
	{"base_GetURL", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetURL},
	{"base_GetVisitedColour", &luna_wrapper_wxHyperlinkCtrl::_bind_base_GetVisitedColour},
	{"base_SetHoverColour", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetHoverColour},
	{"base_SetNormalColour", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetNormalColour},
	{"base_SetURL", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetURL},
	{"base_SetVisitedColour", &luna_wrapper_wxHyperlinkCtrl::_bind_base_SetVisitedColour},
	{"fromVoid", &luna_wrapper_wxHyperlinkCtrl::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHyperlinkCtrl::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHyperlinkCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHyperlinkCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxHyperlinkCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHyperlinkCtrl >::enumValues[] = {
	{0,0}
};


