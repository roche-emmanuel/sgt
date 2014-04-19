#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMDIParentFrame.h>

class luna_wrapper_wxMDIParentFrame {
public:
	typedef Luna< wxMDIParentFrame > luna_t;

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

		wxMDIParentFrame* self= (wxMDIParentFrame*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMDIParentFrame >::push(L,self,false);
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
		//wxMDIParentFrame* ptr= dynamic_cast< wxMDIParentFrame* >(Luna< wxObject >::check(L,1));
		wxMDIParentFrame* ptr= luna_caster< wxObject, wxMDIParentFrame >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMDIParentFrame >::push(L,ptr,false);
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

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
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
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_ActivateNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ActivatePrevious(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ArrangeIcons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Cascade(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetActiveChild(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindowMenu(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCreateClient(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetWindowMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Tile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsTDI(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
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

	inline static bool _lg_typecheck_base_GetLabel(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_base_CanSetTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_EnableCloseButton(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Iconize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsActive(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsAlwaysMaximized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsFullScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsIconized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsMaximized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Maximize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RequestUserAttention(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetIcons(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMaxSize(lua_State *L) {
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
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetSizeHints_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_base_SetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetTransparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShouldPreventAppExit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OSXSetModified(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OSXIsModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ShowFullScreen(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CreateStatusBar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>5 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CreateToolBar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClientAreaOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMenuBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetStatusBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetToolBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnCreateStatusBar(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnCreateToolBar(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMenuBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStatusBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStatusWidths(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetToolBar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ActivateNext(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ActivatePrevious(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ArrangeIcons(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Cascade(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetActiveChild(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_OnCreateClient(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetWindowMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Tile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMDIParentFrame::wxMDIParentFrame()
	static wxMDIParentFrame* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMDIParentFrame::wxMDIParentFrame() function, expected prototype:\nwxMDIParentFrame::wxMDIParentFrame()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxMDIParentFrame();
	}

	// wxMDIParentFrame::wxMDIParentFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr)
	static wxMDIParentFrame* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMDIParentFrame::wxMDIParentFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxMDIParentFrame::wxMDIParentFrame(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMDIParentFrame::wxMDIParentFrame function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIParentFrame::wxMDIParentFrame function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxMDIParentFrame(parent, id, title, pos, size, style, name);
	}

	// wxMDIParentFrame::wxMDIParentFrame(lua_Table * data)
	static wxMDIParentFrame* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxMDIParentFrame::wxMDIParentFrame(lua_Table * data) function, expected prototype:\nwxMDIParentFrame::wxMDIParentFrame(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxMDIParentFrame(L,NULL);
	}

	// wxMDIParentFrame::wxMDIParentFrame(lua_Table * data, wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr)
	static wxMDIParentFrame* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxMDIParentFrame::wxMDIParentFrame(lua_Table * data, wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr) function, expected prototype:\nwxMDIParentFrame::wxMDIParentFrame(lua_Table * data, wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMDIParentFrame::wxMDIParentFrame function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIParentFrame::wxMDIParentFrame function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>6 ? (long)lua_tonumber(L,7) : (long)wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wrapper_wxMDIParentFrame(L,NULL, parent, id, title, pos, size, style, name);
	}

	// Overload binder for wxMDIParentFrame::wxMDIParentFrame
	static wxMDIParentFrame* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxMDIParentFrame, cannot match any of the overloads for function wxMDIParentFrame:\n  wxMDIParentFrame()\n  wxMDIParentFrame(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n  wxMDIParentFrame(lua_Table *)\n  wxMDIParentFrame(lua_Table *, wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// void wxMDIParentFrame::ActivateNext()
	static int _bind_ActivateNext(lua_State *L) {
		if (!_lg_typecheck_ActivateNext(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::ActivateNext() function, expected prototype:\nvoid wxMDIParentFrame::ActivateNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::ActivateNext(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ActivateNext();

		return 0;
	}

	// void wxMDIParentFrame::ActivatePrevious()
	static int _bind_ActivatePrevious(lua_State *L) {
		if (!_lg_typecheck_ActivatePrevious(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::ActivatePrevious() function, expected prototype:\nvoid wxMDIParentFrame::ActivatePrevious()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::ActivatePrevious(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ActivatePrevious();

		return 0;
	}

	// void wxMDIParentFrame::ArrangeIcons()
	static int _bind_ArrangeIcons(lua_State *L) {
		if (!_lg_typecheck_ArrangeIcons(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::ArrangeIcons() function, expected prototype:\nvoid wxMDIParentFrame::ArrangeIcons()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::ArrangeIcons(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ArrangeIcons();

		return 0;
	}

	// void wxMDIParentFrame::Cascade()
	static int _bind_Cascade(lua_State *L) {
		if (!_lg_typecheck_Cascade(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::Cascade() function, expected prototype:\nvoid wxMDIParentFrame::Cascade()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::Cascade(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Cascade();

		return 0;
	}

	// bool wxMDIParentFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr) function, expected prototype:\nbool wxMDIParentFrame::Create(wxWindow * parent, int id, const wxString & title, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString & name = wxFrameNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		wxString title(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxMDIParentFrame::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIParentFrame::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>6 ? (long)lua_tonumber(L,7) : (long)wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::Create(wxWindow *, int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, title, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxMDIChildFrame * wxMDIParentFrame::GetActiveChild() const
	static int _bind_GetActiveChild(lua_State *L) {
		if (!_lg_typecheck_GetActiveChild(L)) {
			luaL_error(L, "luna typecheck failed in wxMDIChildFrame * wxMDIParentFrame::GetActiveChild() const function, expected prototype:\nwxMDIChildFrame * wxMDIParentFrame::GetActiveChild() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMDIChildFrame * wxMDIParentFrame::GetActiveChild() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMDIChildFrame * lret = self->GetActiveChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMDIChildFrame >::push(L,lret,false);

		return 1;
	}

	// wxMDIClientWindowBase * wxMDIParentFrame::GetClientWindow() const
	static int _bind_GetClientWindow(lua_State *L) {
		if (!_lg_typecheck_GetClientWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxMDIClientWindowBase * wxMDIParentFrame::GetClientWindow() const function, expected prototype:\nwxMDIClientWindowBase * wxMDIParentFrame::GetClientWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMDIClientWindowBase * wxMDIParentFrame::GetClientWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMDIClientWindowBase * lret = self->GetClientWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMDIClientWindowBase >::push(L,lret,false);

		return 1;
	}

	// wxMenu * wxMDIParentFrame::GetWindowMenu() const
	static int _bind_GetWindowMenu(lua_State *L) {
		if (!_lg_typecheck_GetWindowMenu(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu * wxMDIParentFrame::GetWindowMenu() const function, expected prototype:\nwxMenu * wxMDIParentFrame::GetWindowMenu() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenu * wxMDIParentFrame::GetWindowMenu() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenu * lret = self->GetWindowMenu();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// wxMDIClientWindow * wxMDIParentFrame::OnCreateClient()
	static int _bind_OnCreateClient(lua_State *L) {
		if (!_lg_typecheck_OnCreateClient(L)) {
			luaL_error(L, "luna typecheck failed in wxMDIClientWindow * wxMDIParentFrame::OnCreateClient() function, expected prototype:\nwxMDIClientWindow * wxMDIParentFrame::OnCreateClient()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMDIClientWindow * wxMDIParentFrame::OnCreateClient(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMDIClientWindow * lret = self->OnCreateClient();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMDIClientWindow >::push(L,lret,false);

		return 1;
	}

	// void wxMDIParentFrame::SetWindowMenu(wxMenu * menu)
	static int _bind_SetWindowMenu(lua_State *L) {
		if (!_lg_typecheck_SetWindowMenu(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::SetWindowMenu(wxMenu * menu) function, expected prototype:\nvoid wxMDIParentFrame::SetWindowMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::SetWindowMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWindowMenu(menu);

		return 0;
	}

	// void wxMDIParentFrame::Tile(wxOrientation orient = ::wxHORIZONTAL)
	static int _bind_Tile(lua_State *L) {
		if (!_lg_typecheck_Tile(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::Tile(wxOrientation orient = ::wxHORIZONTAL) function, expected prototype:\nvoid wxMDIParentFrame::Tile(wxOrientation orient = ::wxHORIZONTAL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxOrientation orient=luatop>1 ? (wxOrientation)lua_tointeger(L,2) : (wxOrientation)::wxHORIZONTAL;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::Tile(wxOrientation). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Tile(orient);

		return 0;
	}

	// static bool wxMDIParentFrame::IsTDI()
	static int _bind_IsTDI(lua_State *L) {
		if (!_lg_typecheck_IsTDI(L)) {
			luaL_error(L, "luna typecheck failed in static bool wxMDIParentFrame::IsTDI() function, expected prototype:\nstatic bool wxMDIParentFrame::IsTDI()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		bool lret = wxMDIParentFrame::IsTDI();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxMDIParentFrame::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMDIParentFrame::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMDIParentFrame::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMDIParentFrame::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMDIParentFrame::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxMDIParentFrame::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_AcceptsFocus() const function, expected prototype:\nbool wxMDIParentFrame::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxMDIParentFrame::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxMDIParentFrame::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_HasFocus() const function, expected prototype:\nbool wxMDIParentFrame::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxMDIParentFrame::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetCanFocus(canFocus);

		return 0;
	}

	// void wxMDIParentFrame::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetFocus() function, expected prototype:\nvoid wxMDIParentFrame::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetFocus();

		return 0;
	}

	// void wxMDIParentFrame::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetFocusFromKbd() function, expected prototype:\nvoid wxMDIParentFrame::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetFocusFromKbd();

		return 0;
	}

	// void wxMDIParentFrame::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxMDIParentFrame::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::AddChild(child);

		return 0;
	}

	// void wxMDIParentFrame::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxMDIParentFrame::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::RemoveChild(child);

		return 0;
	}

	// bool wxMDIParentFrame::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxMDIParentFrame::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxMDIParentFrame::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxMDIParentFrame::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxMDIParentFrame::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxMDIParentFrame::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMDIParentFrame::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMDIParentFrame::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMDIParentFrame::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxMDIParentFrame::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxMDIParentFrame::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMDIParentFrame::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMDIParentFrame::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMDIParentFrame::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxMDIParentFrame::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxMDIParentFrame::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMDIParentFrame::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMDIParentFrame::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMDIParentFrame::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxMDIParentFrame::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_ScrollLines(int lines) function, expected prototype:\nbool wxMDIParentFrame::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_ScrollPages(int pages) function, expected prototype:\nbool wxMDIParentFrame::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxMDIParentFrame::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxMDIParentFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxMDIParentFrame::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxMDIParentFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxMDIParentFrame::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxMDIParentFrame::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMDIParentFrame::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxMDIParentFrame::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIParentFrame::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMDIParentFrame::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMDIParentFrame::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMDIParentFrame::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMDIParentFrame::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxMDIParentFrame::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIParentFrame::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMDIParentFrame::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMDIParentFrame::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxMDIParentFrame::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_Fit() function, expected prototype:\nvoid wxMDIParentFrame::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::Fit();

		return 0;
	}

	// void wxMDIParentFrame::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_FitInside() function, expected prototype:\nvoid wxMDIParentFrame::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::FitInside();

		return 0;
	}

	// wxSize wxMDIParentFrame::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMDIParentFrame::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxMDIParentFrame::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMDIParentFrame::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMDIParentFrame::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMDIParentFrame::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMDIParentFrame::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxMDIParentFrame::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMDIParentFrame::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMDIParentFrame::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMDIParentFrame::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMDIParentFrame::base_GetMaxSize() const function, expected prototype:\nwxSize wxMDIParentFrame::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMDIParentFrame::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMDIParentFrame::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMDIParentFrame::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMDIParentFrame::base_GetMinClientSize() const function, expected prototype:\nwxSize wxMDIParentFrame::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMDIParentFrame::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMDIParentFrame::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMDIParentFrame::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMDIParentFrame::base_GetMinSize() const function, expected prototype:\nwxSize wxMDIParentFrame::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMDIParentFrame::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMDIParentFrame::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMDIParentFrame::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMDIParentFrame::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxMDIParentFrame::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMDIParentFrame::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMDIParentFrame::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMDIParentFrame::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMDIParentFrame::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxMDIParentFrame::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMDIParentFrame::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMDIParentFrame::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxMDIParentFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxMDIParentFrame::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxMDIParentFrame::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SendSizeEvent(flags);

		return 0;
	}

	// void wxMDIParentFrame::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxMDIParentFrame::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIParentFrame::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetMaxClientSize(size);

		return 0;
	}

	// void wxMDIParentFrame::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxMDIParentFrame::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIParentFrame::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetMinClientSize(size);

		return 0;
	}

	// void wxMDIParentFrame::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_ClearBackground() function, expected prototype:\nvoid wxMDIParentFrame::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxMDIParentFrame::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxMDIParentFrame::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxMDIParentFrame::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxMDIParentFrame::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxMDIParentFrame::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMDIParentFrame::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxMDIParentFrame::base_GetCharHeight() const function, expected prototype:\nint wxMDIParentFrame::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMDIParentFrame::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMDIParentFrame::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMDIParentFrame::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxMDIParentFrame::base_GetCharWidth() const function, expected prototype:\nint wxMDIParentFrame::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMDIParentFrame::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMDIParentFrame::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxMDIParentFrame::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxMDIParentFrame::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxMDIParentFrame::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxMDIParentFrame::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxMDIParentFrame::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxMDIParentFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxMDIParentFrame::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxMDIParentFrame::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_Update() function, expected prototype:\nvoid wxMDIParentFrame::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::Update();

		return 0;
	}

	// bool wxMDIParentFrame::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxMDIParentFrame::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxMDIParentFrame::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxMDIParentFrame::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_ShouldInheritColours() const function, expected prototype:\nbool wxMDIParentFrame::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxMDIParentFrame::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxMDIParentFrame::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_GetThemeEnabled() const function, expected prototype:\nbool wxMDIParentFrame::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMDIParentFrame::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetNextHandler(handler);

		return 0;
	}

	// void wxMDIParentFrame::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMDIParentFrame::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetPreviousHandler(handler);

		return 0;
	}

	// long wxMDIParentFrame::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxMDIParentFrame::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxMDIParentFrame::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxMDIParentFrame::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxMDIParentFrame::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxMDIParentFrame::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxMDIParentFrame::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxMDIParentFrame::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxMDIParentFrame::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxMDIParentFrame::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_Lower() function, expected prototype:\nvoid wxMDIParentFrame::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::Lower();

		return 0;
	}

	// void wxMDIParentFrame::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_Raise() function, expected prototype:\nvoid wxMDIParentFrame::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::Raise();

		return 0;
	}

	// bool wxMDIParentFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxMDIParentFrame::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_IsShown() const function, expected prototype:\nbool wxMDIParentFrame::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_IsShownOnScreen() const function, expected prototype:\nbool wxMDIParentFrame::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_Enable(bool enable = true) function, expected prototype:\nbool wxMDIParentFrame::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_Show(bool show = true) function, expected prototype:\nbool wxMDIParentFrame::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxMDIParentFrame::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxMDIParentFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMDIParentFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxMDIParentFrame::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxMDIParentFrame::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMDIParentFrame::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxMDIParentFrame::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxMDIParentFrame::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxMDIParentFrame::base_GetValidator() function, expected prototype:\nwxValidator * wxMDIParentFrame::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxMDIParentFrame::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxMDIParentFrame::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxMDIParentFrame::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxMDIParentFrame::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxMDIParentFrame::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetValidator(validator);

		return 0;
	}

	// bool wxMDIParentFrame::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_TransferDataFromWindow() function, expected prototype:\nbool wxMDIParentFrame::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_TransferDataToWindow() function, expected prototype:\nbool wxMDIParentFrame::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_Validate() function, expected prototype:\nbool wxMDIParentFrame::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxMDIParentFrame::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMDIParentFrame::base_GetLabel() const function, expected prototype:\nwxString wxMDIParentFrame::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMDIParentFrame::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxMDIParentFrame::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxMDIParentFrame::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxMDIParentFrame::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxMDIParentFrame::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxMDIParentFrame::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxMDIParentFrame::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMDIParentFrame::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMDIParentFrame::base_GetName() const function, expected prototype:\nwxString wxMDIParentFrame::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMDIParentFrame::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxMDIParentFrame::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxMDIParentFrame::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxMDIParentFrame::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetLabel(label);

		return 0;
	}

	// void wxMDIParentFrame::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxMDIParentFrame::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetLayoutDirection(dir);

		return 0;
	}

	// void wxMDIParentFrame::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetName(const wxString & name) function, expected prototype:\nvoid wxMDIParentFrame::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetName(name);

		return 0;
	}

	// void wxMDIParentFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxMDIParentFrame::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxMDIParentFrame::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxMDIParentFrame::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_Destroy() function, expected prototype:\nbool wxMDIParentFrame::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxMDIParentFrame::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxMDIParentFrame::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxMDIParentFrame::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxMDIParentFrame::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxMDIParentFrame::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxMDIParentFrame::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxMDIParentFrame::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetDropTarget(target);

		return 0;
	}

	// void wxMDIParentFrame::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxMDIParentFrame::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxMDIParentFrame::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_HasCapture() const function, expected prototype:\nbool wxMDIParentFrame::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxMDIParentFrame::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxMDIParentFrame::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxMDIParentFrame::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::WarpPointer(x, y);

		return 0;
	}

	// void wxMDIParentFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxMDIParentFrame::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxMDIParentFrame::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxMDIParentFrame::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxMDIParentFrame::base_GetHandle() const function, expected prototype:\nHWND wxMDIParentFrame::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxMDIParentFrame::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxMDIParentFrame::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxMDIParentFrame::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_HasMultiplePages() const function, expected prototype:\nbool wxMDIParentFrame::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_InheritAttributes() function, expected prototype:\nvoid wxMDIParentFrame::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::InheritAttributes();

		return 0;
	}

	// void wxMDIParentFrame::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_InitDialog() function, expected prototype:\nvoid wxMDIParentFrame::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::InitDialog();

		return 0;
	}

	// bool wxMDIParentFrame::base_IsDoubleBuffered() const
	static int _bind_base_IsDoubleBuffered(lua_State *L) {
		if (!_lg_typecheck_base_IsDoubleBuffered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_IsDoubleBuffered() const function, expected prototype:\nbool wxMDIParentFrame::base_IsDoubleBuffered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_IsDoubleBuffered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::IsDoubleBuffered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_IsRetained() const function, expected prototype:\nbool wxMDIParentFrame::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_IsTopLevel() const function, expected prototype:\nbool wxMDIParentFrame::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxMDIParentFrame::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::MakeModal(modal);

		return 0;
	}

	// void wxMDIParentFrame::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_OnInternalIdle() function, expected prototype:\nvoid wxMDIParentFrame::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::OnInternalIdle();

		return 0;
	}

	// bool wxMDIParentFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxMDIParentFrame::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxMDIParentFrame::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxMDIParentFrame::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxMDIParentFrame::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_CanSetTransparent() function, expected prototype:\nbool wxMDIParentFrame::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_EnableCloseButton(bool enable = true)
	static int _bind_base_EnableCloseButton(lua_State *L) {
		if (!_lg_typecheck_base_EnableCloseButton(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_EnableCloseButton(bool enable = true) function, expected prototype:\nbool wxMDIParentFrame::base_EnableCloseButton(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_EnableCloseButton(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::EnableCloseButton(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxMDIParentFrame::base_GetTitle() const
	static int _bind_base_GetTitle(lua_State *L) {
		if (!_lg_typecheck_base_GetTitle(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMDIParentFrame::base_GetTitle() const function, expected prototype:\nwxString wxMDIParentFrame::base_GetTitle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMDIParentFrame::base_GetTitle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxMDIParentFrame::GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxMDIParentFrame::base_Iconize(bool iconize = true)
	static int _bind_base_Iconize(lua_State *L) {
		if (!_lg_typecheck_base_Iconize(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_Iconize(bool iconize = true) function, expected prototype:\nvoid wxMDIParentFrame::base_Iconize(bool iconize = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool iconize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_Iconize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::Iconize(iconize);

		return 0;
	}

	// bool wxMDIParentFrame::base_IsActive()
	static int _bind_base_IsActive(lua_State *L) {
		if (!_lg_typecheck_base_IsActive(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_IsActive() function, expected prototype:\nbool wxMDIParentFrame::base_IsActive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_IsActive(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_IsAlwaysMaximized() const
	static int _bind_base_IsAlwaysMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsAlwaysMaximized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_IsAlwaysMaximized() const function, expected prototype:\nbool wxMDIParentFrame::base_IsAlwaysMaximized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_IsAlwaysMaximized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::IsAlwaysMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_IsFullScreen() const
	static int _bind_base_IsFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsFullScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_IsFullScreen() const function, expected prototype:\nbool wxMDIParentFrame::base_IsFullScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_IsFullScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::IsFullScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_IsIconized() const
	static int _bind_base_IsIconized(lua_State *L) {
		if (!_lg_typecheck_base_IsIconized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_IsIconized() const function, expected prototype:\nbool wxMDIParentFrame::base_IsIconized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_IsIconized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_IsMaximized() const
	static int _bind_base_IsMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsMaximized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_IsMaximized() const function, expected prototype:\nbool wxMDIParentFrame::base_IsMaximized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_IsMaximized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::IsMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_Layout() function, expected prototype:\nbool wxMDIParentFrame::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_Maximize(bool maximize = true)
	static int _bind_base_Maximize(lua_State *L) {
		if (!_lg_typecheck_base_Maximize(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_Maximize(bool maximize = true) function, expected prototype:\nvoid wxMDIParentFrame::base_Maximize(bool maximize = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool maximize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_Maximize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::Maximize(maximize);

		return 0;
	}

	// void wxMDIParentFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	static int _bind_base_RequestUserAttention(lua_State *L) {
		if (!_lg_typecheck_base_RequestUserAttention(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) function, expected prototype:\nvoid wxMDIParentFrame::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxUSER_ATTENTION_INFO;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_RequestUserAttention(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::RequestUserAttention(flags);

		return 0;
	}

	// void wxMDIParentFrame::base_SetIcons(const wxIconBundle & icons)
	static int _bind_base_SetIcons(lua_State *L) {
		if (!_lg_typecheck_base_SetIcons(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetIcons(const wxIconBundle & icons) function, expected prototype:\nvoid wxMDIParentFrame::base_SetIcons(const wxIconBundle & icons)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIconBundle* icons_ptr=(Luna< wxObject >::checkSubType< wxIconBundle >(L,2));
		if( !icons_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icons in wxMDIParentFrame::base_SetIcons function");
		}
		const wxIconBundle & icons=*icons_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetIcons(const wxIconBundle &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetIcons(icons);

		return 0;
	}

	// void wxMDIParentFrame::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxMDIParentFrame::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIParentFrame::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetMaxSize(size);

		return 0;
	}

	// void wxMDIParentFrame::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxMDIParentFrame::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMDIParentFrame::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetMinSize(size);

		return 0;
	}

	// void wxMDIParentFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxMDIParentFrame::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// void wxMDIParentFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxMDIParentFrame::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxMDIParentFrame::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxMDIParentFrame::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxMDIParentFrame::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// Overload binder for wxMDIParentFrame::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(int, int, int, int, int, int)\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n");
		return 0;
	}

	// void wxMDIParentFrame::base_SetTitle(const wxString & title)
	static int _bind_base_SetTitle(lua_State *L) {
		if (!_lg_typecheck_base_SetTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetTitle(const wxString & title) function, expected prototype:\nvoid wxMDIParentFrame::base_SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetTitle(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetTitle(title);

		return 0;
	}

	// bool wxMDIParentFrame::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxMDIParentFrame::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_ShouldPreventAppExit() const
	static int _bind_base_ShouldPreventAppExit(lua_State *L) {
		if (!_lg_typecheck_base_ShouldPreventAppExit(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_ShouldPreventAppExit() const function, expected prototype:\nbool wxMDIParentFrame::base_ShouldPreventAppExit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_ShouldPreventAppExit() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::ShouldPreventAppExit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMDIParentFrame::base_OSXSetModified(bool modified)
	static int _bind_base_OSXSetModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXSetModified(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_OSXSetModified(bool modified) function, expected prototype:\nvoid wxMDIParentFrame::base_OSXSetModified(bool modified)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_OSXSetModified(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::OSXSetModified(modified);

		return 0;
	}

	// bool wxMDIParentFrame::base_OSXIsModified() const
	static int _bind_base_OSXIsModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXIsModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_OSXIsModified() const function, expected prototype:\nbool wxMDIParentFrame::base_OSXIsModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_OSXIsModified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::OSXIsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMDIParentFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	static int _bind_base_ShowFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_ShowFullScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMDIParentFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) function, expected prototype:\nbool wxMDIParentFrame::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		long style=luatop>2 ? (long)lua_tonumber(L,3) : (long)::wxFULLSCREEN_ALL;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMDIParentFrame::base_ShowFullScreen(bool, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMDIParentFrame::ShowFullScreen(show, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxStatusBar * wxMDIParentFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)
	static int _bind_base_CreateStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_CreateStatusBar(L)) {
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxMDIParentFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr) function, expected prototype:\nwxStatusBar * wxMDIParentFrame::base_CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)\nClass arguments details:\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int number=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;
		long style=luatop>2 ? (long)lua_tonumber(L,3) : (long)wxSTB_DEFAULT_STYLE;
		int id=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxStatusBar * wxMDIParentFrame::base_CreateStatusBar(int, long, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxStatusBar * lret = self->wxMDIParentFrame::CreateStatusBar(number, style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxMDIParentFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr)
	static int _bind_base_CreateToolBar(lua_State *L) {
		if (!_lg_typecheck_base_CreateToolBar(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBar * wxMDIParentFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr) function, expected prototype:\nwxToolBar * wxMDIParentFrame::base_CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long style=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxBORDER_NONE | ::wxTB_HORIZONTAL;
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBar * wxMDIParentFrame::base_CreateToolBar(long, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBar * lret = self->wxMDIParentFrame::CreateToolBar(style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxPoint wxMDIParentFrame::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxMDIParentFrame::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxMDIParentFrame::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxMDIParentFrame::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxMDIParentFrame::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxMenuBar * wxMDIParentFrame::base_GetMenuBar() const
	static int _bind_base_GetMenuBar(lua_State *L) {
		if (!_lg_typecheck_base_GetMenuBar(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuBar * wxMDIParentFrame::base_GetMenuBar() const function, expected prototype:\nwxMenuBar * wxMDIParentFrame::base_GetMenuBar() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenuBar * wxMDIParentFrame::base_GetMenuBar() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenuBar * lret = self->wxMDIParentFrame::GetMenuBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenuBar >::push(L,lret,false);

		return 1;
	}

	// wxStatusBar * wxMDIParentFrame::base_GetStatusBar() const
	static int _bind_base_GetStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_GetStatusBar(L)) {
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxMDIParentFrame::base_GetStatusBar() const function, expected prototype:\nwxStatusBar * wxMDIParentFrame::base_GetStatusBar() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxStatusBar * wxMDIParentFrame::base_GetStatusBar() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxStatusBar * lret = self->wxMDIParentFrame::GetStatusBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxMDIParentFrame::base_GetToolBar() const
	static int _bind_base_GetToolBar(lua_State *L) {
		if (!_lg_typecheck_base_GetToolBar(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBar * wxMDIParentFrame::base_GetToolBar() const function, expected prototype:\nwxToolBar * wxMDIParentFrame::base_GetToolBar() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBar * wxMDIParentFrame::base_GetToolBar() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBar * lret = self->wxMDIParentFrame::GetToolBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxStatusBar * wxMDIParentFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name)
	static int _bind_base_OnCreateStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateStatusBar(L)) {
			luaL_error(L, "luna typecheck failed in wxStatusBar * wxMDIParentFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name) function, expected prototype:\nwxStatusBar * wxMDIParentFrame::base_OnCreateStatusBar(int number, long style, int id, const wxString & name)\nClass arguments details:\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int number=(int)lua_tointeger(L,2);
		long style=(long)lua_tonumber(L,3);
		int id=(int)lua_tointeger(L,4);
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxStatusBar * wxMDIParentFrame::base_OnCreateStatusBar(int, long, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxStatusBar * lret = self->wxMDIParentFrame::OnCreateStatusBar(number, style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBar >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxMDIParentFrame::base_OnCreateToolBar(long style, int id, const wxString & name)
	static int _bind_base_OnCreateToolBar(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateToolBar(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBar * wxMDIParentFrame::base_OnCreateToolBar(long style, int id, const wxString & name) function, expected prototype:\nwxToolBar * wxMDIParentFrame::base_OnCreateToolBar(long style, int id, const wxString & name)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);
		int id=(int)lua_tointeger(L,3);
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBar * wxMDIParentFrame::base_OnCreateToolBar(long, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBar * lret = self->wxMDIParentFrame::OnCreateToolBar(style, id, name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// void wxMDIParentFrame::base_SetMenuBar(wxMenuBar * menuBar)
	static int _bind_base_SetMenuBar(lua_State *L) {
		if (!_lg_typecheck_base_SetMenuBar(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetMenuBar(wxMenuBar * menuBar) function, expected prototype:\nvoid wxMDIParentFrame::base_SetMenuBar(wxMenuBar * menuBar)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenuBar* menuBar=(Luna< wxObject >::checkSubType< wxMenuBar >(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetMenuBar(wxMenuBar *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetMenuBar(menuBar);

		return 0;
	}

	// void wxMDIParentFrame::base_SetStatusBar(wxStatusBar * statusBar)
	static int _bind_base_SetStatusBar(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusBar(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetStatusBar(wxStatusBar * statusBar) function, expected prototype:\nvoid wxMDIParentFrame::base_SetStatusBar(wxStatusBar * statusBar)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxStatusBar* statusBar=(Luna< wxObject >::checkSubType< wxStatusBar >(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetStatusBar(wxStatusBar *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetStatusBar(statusBar);

		return 0;
	}

	// void wxMDIParentFrame::base_SetStatusText(const wxString & text, int number = 0)
	static int _bind_base_SetStatusText(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusText(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetStatusText(const wxString & text, int number = 0) function, expected prototype:\nvoid wxMDIParentFrame::base_SetStatusText(const wxString & text, int number = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int number=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetStatusText(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetStatusText(text, number);

		return 0;
	}

	// void wxMDIParentFrame::base_SetStatusWidths(int n, const int * widths_field)
	static int _bind_base_SetStatusWidths(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusWidths(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetStatusWidths(int n, const int * widths_field) function, expected prototype:\nvoid wxMDIParentFrame::base_SetStatusWidths(int n, const int * widths_field)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);
		const int* widths_field=(const int*)Luna< void >::check(L,3);

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetStatusWidths(int, const int *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetStatusWidths(n, widths_field);

		return 0;
	}

	// void wxMDIParentFrame::base_SetToolBar(wxToolBar * toolBar)
	static int _bind_base_SetToolBar(lua_State *L) {
		if (!_lg_typecheck_base_SetToolBar(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetToolBar(wxToolBar * toolBar) function, expected prototype:\nvoid wxMDIParentFrame::base_SetToolBar(wxToolBar * toolBar)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxToolBar* toolBar=(Luna< wxObject >::checkSubType< wxToolBar >(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetToolBar(wxToolBar *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetToolBar(toolBar);

		return 0;
	}

	// void wxMDIParentFrame::base_ActivateNext()
	static int _bind_base_ActivateNext(lua_State *L) {
		if (!_lg_typecheck_base_ActivateNext(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_ActivateNext() function, expected prototype:\nvoid wxMDIParentFrame::base_ActivateNext()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_ActivateNext(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::ActivateNext();

		return 0;
	}

	// void wxMDIParentFrame::base_ActivatePrevious()
	static int _bind_base_ActivatePrevious(lua_State *L) {
		if (!_lg_typecheck_base_ActivatePrevious(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_ActivatePrevious() function, expected prototype:\nvoid wxMDIParentFrame::base_ActivatePrevious()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_ActivatePrevious(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::ActivatePrevious();

		return 0;
	}

	// void wxMDIParentFrame::base_ArrangeIcons()
	static int _bind_base_ArrangeIcons(lua_State *L) {
		if (!_lg_typecheck_base_ArrangeIcons(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_ArrangeIcons() function, expected prototype:\nvoid wxMDIParentFrame::base_ArrangeIcons()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_ArrangeIcons(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::ArrangeIcons();

		return 0;
	}

	// void wxMDIParentFrame::base_Cascade()
	static int _bind_base_Cascade(lua_State *L) {
		if (!_lg_typecheck_base_Cascade(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_Cascade() function, expected prototype:\nvoid wxMDIParentFrame::base_Cascade()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_Cascade(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::Cascade();

		return 0;
	}

	// wxMDIChildFrame * wxMDIParentFrame::base_GetActiveChild() const
	static int _bind_base_GetActiveChild(lua_State *L) {
		if (!_lg_typecheck_base_GetActiveChild(L)) {
			luaL_error(L, "luna typecheck failed in wxMDIChildFrame * wxMDIParentFrame::base_GetActiveChild() const function, expected prototype:\nwxMDIChildFrame * wxMDIParentFrame::base_GetActiveChild() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMDIChildFrame * wxMDIParentFrame::base_GetActiveChild() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMDIChildFrame * lret = self->wxMDIParentFrame::GetActiveChild();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMDIChildFrame >::push(L,lret,false);

		return 1;
	}

	// wxMDIClientWindow * wxMDIParentFrame::base_OnCreateClient()
	static int _bind_base_OnCreateClient(lua_State *L) {
		if (!_lg_typecheck_base_OnCreateClient(L)) {
			luaL_error(L, "luna typecheck failed in wxMDIClientWindow * wxMDIParentFrame::base_OnCreateClient() function, expected prototype:\nwxMDIClientWindow * wxMDIParentFrame::base_OnCreateClient()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMDIClientWindow * wxMDIParentFrame::base_OnCreateClient(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMDIClientWindow * lret = self->wxMDIParentFrame::OnCreateClient();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMDIClientWindow >::push(L,lret,false);

		return 1;
	}

	// void wxMDIParentFrame::base_SetWindowMenu(wxMenu * menu)
	static int _bind_base_SetWindowMenu(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowMenu(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_SetWindowMenu(wxMenu * menu) function, expected prototype:\nvoid wxMDIParentFrame::base_SetWindowMenu(wxMenu * menu)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_SetWindowMenu(wxMenu *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::SetWindowMenu(menu);

		return 0;
	}

	// void wxMDIParentFrame::base_Tile(wxOrientation orient = ::wxHORIZONTAL)
	static int _bind_base_Tile(lua_State *L) {
		if (!_lg_typecheck_base_Tile(L)) {
			luaL_error(L, "luna typecheck failed in void wxMDIParentFrame::base_Tile(wxOrientation orient = ::wxHORIZONTAL) function, expected prototype:\nvoid wxMDIParentFrame::base_Tile(wxOrientation orient = ::wxHORIZONTAL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxOrientation orient=luatop>1 ? (wxOrientation)lua_tointeger(L,2) : (wxOrientation)::wxHORIZONTAL;

		wxMDIParentFrame* self=Luna< wxObject >::checkSubType< wxMDIParentFrame >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMDIParentFrame::base_Tile(wxOrientation). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMDIParentFrame::Tile(orient);

		return 0;
	}


	// Operator binds:

};

wxMDIParentFrame* LunaTraits< wxMDIParentFrame >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMDIParentFrame::_bind_ctor(L);
}

void LunaTraits< wxMDIParentFrame >::_bind_dtor(wxMDIParentFrame* obj) {
	delete obj;
}

const char LunaTraits< wxMDIParentFrame >::className[] = "wxMDIParentFrame";
const char LunaTraits< wxMDIParentFrame >::fullName[] = "wxMDIParentFrame";
const char LunaTraits< wxMDIParentFrame >::moduleName[] = "wx";
const char* LunaTraits< wxMDIParentFrame >::parents[] = {"wx.wxFrame", 0};
const int LunaTraits< wxMDIParentFrame >::hash = 94157277;
const int LunaTraits< wxMDIParentFrame >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMDIParentFrame >::methods[] = {
	{"ActivateNext", &luna_wrapper_wxMDIParentFrame::_bind_ActivateNext},
	{"ActivatePrevious", &luna_wrapper_wxMDIParentFrame::_bind_ActivatePrevious},
	{"ArrangeIcons", &luna_wrapper_wxMDIParentFrame::_bind_ArrangeIcons},
	{"Cascade", &luna_wrapper_wxMDIParentFrame::_bind_Cascade},
	{"Create", &luna_wrapper_wxMDIParentFrame::_bind_Create},
	{"GetActiveChild", &luna_wrapper_wxMDIParentFrame::_bind_GetActiveChild},
	{"GetClientWindow", &luna_wrapper_wxMDIParentFrame::_bind_GetClientWindow},
	{"GetWindowMenu", &luna_wrapper_wxMDIParentFrame::_bind_GetWindowMenu},
	{"OnCreateClient", &luna_wrapper_wxMDIParentFrame::_bind_OnCreateClient},
	{"SetWindowMenu", &luna_wrapper_wxMDIParentFrame::_bind_SetWindowMenu},
	{"Tile", &luna_wrapper_wxMDIParentFrame::_bind_Tile},
	{"IsTDI", &luna_wrapper_wxMDIParentFrame::_bind_IsTDI},
	{"base_GetClassInfo", &luna_wrapper_wxMDIParentFrame::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxMDIParentFrame::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxMDIParentFrame::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxMDIParentFrame::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxMDIParentFrame::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxMDIParentFrame::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxMDIParentFrame::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxMDIParentFrame::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxMDIParentFrame::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxMDIParentFrame::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxMDIParentFrame::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxMDIParentFrame::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxMDIParentFrame::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxMDIParentFrame::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxMDIParentFrame::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxMDIParentFrame::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxMDIParentFrame::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxMDIParentFrame::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxMDIParentFrame::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxMDIParentFrame::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxMDIParentFrame::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxMDIParentFrame::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxMDIParentFrame::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxMDIParentFrame::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxMDIParentFrame::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxMDIParentFrame::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxMDIParentFrame::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxMDIParentFrame::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxMDIParentFrame::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxMDIParentFrame::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxMDIParentFrame::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxMDIParentFrame::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxMDIParentFrame::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxMDIParentFrame::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxMDIParentFrame::_bind_base_SetMaxClientSize},
	{"base_SetMinClientSize", &luna_wrapper_wxMDIParentFrame::_bind_base_SetMinClientSize},
	{"base_ClearBackground", &luna_wrapper_wxMDIParentFrame::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxMDIParentFrame::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxMDIParentFrame::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxMDIParentFrame::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxMDIParentFrame::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxMDIParentFrame::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxMDIParentFrame::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxMDIParentFrame::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxMDIParentFrame::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxMDIParentFrame::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxMDIParentFrame::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxMDIParentFrame::_bind_base_GetThemeEnabled},
	{"base_SetNextHandler", &luna_wrapper_wxMDIParentFrame::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxMDIParentFrame::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxMDIParentFrame::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxMDIParentFrame::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxMDIParentFrame::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxMDIParentFrame::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxMDIParentFrame::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxMDIParentFrame::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxMDIParentFrame::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxMDIParentFrame::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxMDIParentFrame::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxMDIParentFrame::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxMDIParentFrame::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxMDIParentFrame::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxMDIParentFrame::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxMDIParentFrame::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxMDIParentFrame::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxMDIParentFrame::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxMDIParentFrame::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxMDIParentFrame::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxMDIParentFrame::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxMDIParentFrame::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxMDIParentFrame::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxMDIParentFrame::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxMDIParentFrame::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxMDIParentFrame::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxMDIParentFrame::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxMDIParentFrame::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxMDIParentFrame::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxMDIParentFrame::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxMDIParentFrame::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxMDIParentFrame::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxMDIParentFrame::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxMDIParentFrame::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxMDIParentFrame::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxMDIParentFrame::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxMDIParentFrame::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxMDIParentFrame::_bind_base_InitDialog},
	{"base_IsDoubleBuffered", &luna_wrapper_wxMDIParentFrame::_bind_base_IsDoubleBuffered},
	{"base_IsRetained", &luna_wrapper_wxMDIParentFrame::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxMDIParentFrame::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxMDIParentFrame::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxMDIParentFrame::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxMDIParentFrame::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxMDIParentFrame::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxMDIParentFrame::_bind_base_UpdateWindowUI},
	{"base_CanSetTransparent", &luna_wrapper_wxMDIParentFrame::_bind_base_CanSetTransparent},
	{"base_EnableCloseButton", &luna_wrapper_wxMDIParentFrame::_bind_base_EnableCloseButton},
	{"base_GetTitle", &luna_wrapper_wxMDIParentFrame::_bind_base_GetTitle},
	{"base_Iconize", &luna_wrapper_wxMDIParentFrame::_bind_base_Iconize},
	{"base_IsActive", &luna_wrapper_wxMDIParentFrame::_bind_base_IsActive},
	{"base_IsAlwaysMaximized", &luna_wrapper_wxMDIParentFrame::_bind_base_IsAlwaysMaximized},
	{"base_IsFullScreen", &luna_wrapper_wxMDIParentFrame::_bind_base_IsFullScreen},
	{"base_IsIconized", &luna_wrapper_wxMDIParentFrame::_bind_base_IsIconized},
	{"base_IsMaximized", &luna_wrapper_wxMDIParentFrame::_bind_base_IsMaximized},
	{"base_Layout", &luna_wrapper_wxMDIParentFrame::_bind_base_Layout},
	{"base_Maximize", &luna_wrapper_wxMDIParentFrame::_bind_base_Maximize},
	{"base_RequestUserAttention", &luna_wrapper_wxMDIParentFrame::_bind_base_RequestUserAttention},
	{"base_SetIcons", &luna_wrapper_wxMDIParentFrame::_bind_base_SetIcons},
	{"base_SetMaxSize", &luna_wrapper_wxMDIParentFrame::_bind_base_SetMaxSize},
	{"base_SetMinSize", &luna_wrapper_wxMDIParentFrame::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxMDIParentFrame::_bind_base_SetSizeHints},
	{"base_SetTitle", &luna_wrapper_wxMDIParentFrame::_bind_base_SetTitle},
	{"base_SetTransparent", &luna_wrapper_wxMDIParentFrame::_bind_base_SetTransparent},
	{"base_ShouldPreventAppExit", &luna_wrapper_wxMDIParentFrame::_bind_base_ShouldPreventAppExit},
	{"base_OSXSetModified", &luna_wrapper_wxMDIParentFrame::_bind_base_OSXSetModified},
	{"base_OSXIsModified", &luna_wrapper_wxMDIParentFrame::_bind_base_OSXIsModified},
	{"base_ShowFullScreen", &luna_wrapper_wxMDIParentFrame::_bind_base_ShowFullScreen},
	{"base_CreateStatusBar", &luna_wrapper_wxMDIParentFrame::_bind_base_CreateStatusBar},
	{"base_CreateToolBar", &luna_wrapper_wxMDIParentFrame::_bind_base_CreateToolBar},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxMDIParentFrame::_bind_base_GetClientAreaOrigin},
	{"base_GetMenuBar", &luna_wrapper_wxMDIParentFrame::_bind_base_GetMenuBar},
	{"base_GetStatusBar", &luna_wrapper_wxMDIParentFrame::_bind_base_GetStatusBar},
	{"base_GetToolBar", &luna_wrapper_wxMDIParentFrame::_bind_base_GetToolBar},
	{"base_OnCreateStatusBar", &luna_wrapper_wxMDIParentFrame::_bind_base_OnCreateStatusBar},
	{"base_OnCreateToolBar", &luna_wrapper_wxMDIParentFrame::_bind_base_OnCreateToolBar},
	{"base_SetMenuBar", &luna_wrapper_wxMDIParentFrame::_bind_base_SetMenuBar},
	{"base_SetStatusBar", &luna_wrapper_wxMDIParentFrame::_bind_base_SetStatusBar},
	{"base_SetStatusText", &luna_wrapper_wxMDIParentFrame::_bind_base_SetStatusText},
	{"base_SetStatusWidths", &luna_wrapper_wxMDIParentFrame::_bind_base_SetStatusWidths},
	{"base_SetToolBar", &luna_wrapper_wxMDIParentFrame::_bind_base_SetToolBar},
	{"base_ActivateNext", &luna_wrapper_wxMDIParentFrame::_bind_base_ActivateNext},
	{"base_ActivatePrevious", &luna_wrapper_wxMDIParentFrame::_bind_base_ActivatePrevious},
	{"base_ArrangeIcons", &luna_wrapper_wxMDIParentFrame::_bind_base_ArrangeIcons},
	{"base_Cascade", &luna_wrapper_wxMDIParentFrame::_bind_base_Cascade},
	{"base_GetActiveChild", &luna_wrapper_wxMDIParentFrame::_bind_base_GetActiveChild},
	{"base_OnCreateClient", &luna_wrapper_wxMDIParentFrame::_bind_base_OnCreateClient},
	{"base_SetWindowMenu", &luna_wrapper_wxMDIParentFrame::_bind_base_SetWindowMenu},
	{"base_Tile", &luna_wrapper_wxMDIParentFrame::_bind_base_Tile},
	{"fromVoid", &luna_wrapper_wxMDIParentFrame::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMDIParentFrame::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMDIParentFrame::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMDIParentFrame >::converters[] = {
	{"wxObject", &luna_wrapper_wxMDIParentFrame::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMDIParentFrame >::enumValues[] = {
	{0,0}
};


