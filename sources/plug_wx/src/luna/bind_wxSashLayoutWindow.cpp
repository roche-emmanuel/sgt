#include <plug_common.h>

#include <luna/wrappers/wrapper_wxSashLayoutWindow.h>

class luna_wrapper_wxSashLayoutWindow {
public:
	typedef Luna< wxSashLayoutWindow > luna_t;

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

		wxSashLayoutWindow* self= (wxSashLayoutWindow*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxSashLayoutWindow >::push(L,self,false);
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
		//wxSashLayoutWindow* ptr= dynamic_cast< wxSashLayoutWindow* >(Luna< wxObject >::check(L,1));
		wxSashLayoutWindow* ptr= luna_caster< wxObject, wxSashLayoutWindow >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxSashLayoutWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAlignment(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOrientation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_OnCalculateLayout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnQueryLayoutInfo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetAlignment(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDefaultSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOrientation(lua_State *L) {
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

	inline static bool _lg_typecheck_base_GetMaximumSizeX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMaximumSizeY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMinimumSizeX(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMinimumSizeY(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetMaximumSizeX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMaximumSizeY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMinimumSizeX(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMinimumSizeY(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxSashLayoutWindow::wxSashLayoutWindow()
	static wxSashLayoutWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSashLayoutWindow::wxSashLayoutWindow() function, expected prototype:\nwxSashLayoutWindow::wxSashLayoutWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxSashLayoutWindow();
	}

	// wxSashLayoutWindow::wxSashLayoutWindow(wxSashLayoutWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = "layoutWindow")
	static wxSashLayoutWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSashLayoutWindow::wxSashLayoutWindow(wxSashLayoutWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = \"layoutWindow\") function, expected prototype:\nwxSashLayoutWindow::wxSashLayoutWindow(wxSashLayoutWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = \"layoutWindow\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSashLayoutWindow* parent=(Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSashLayoutWindow::wxSashLayoutWindow function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::wxSashLayoutWindow function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)wxCLIP_CHILDREN | wxSW_3D;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxSashLayoutWindow(parent, id, pos, size, style, name);
	}

	// wxSashLayoutWindow::wxSashLayoutWindow(lua_Table * data)
	static wxSashLayoutWindow* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxSashLayoutWindow::wxSashLayoutWindow(lua_Table * data) function, expected prototype:\nwxSashLayoutWindow::wxSashLayoutWindow(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxSashLayoutWindow(L,NULL);
	}

	// wxSashLayoutWindow::wxSashLayoutWindow(lua_Table * data, wxSashLayoutWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = "layoutWindow")
	static wxSashLayoutWindow* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxSashLayoutWindow::wxSashLayoutWindow(lua_Table * data, wxSashLayoutWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = \"layoutWindow\") function, expected prototype:\nwxSashLayoutWindow::wxSashLayoutWindow(lua_Table * data, wxSashLayoutWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = \"layoutWindow\")\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSashLayoutWindow* parent=(Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSashLayoutWindow::wxSashLayoutWindow function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::wxSashLayoutWindow function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxCLIP_CHILDREN | wxSW_3D;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_wxSashLayoutWindow(L,NULL, parent, id, pos, size, style, name);
	}

	// Overload binder for wxSashLayoutWindow::wxSashLayoutWindow
	static wxSashLayoutWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxSashLayoutWindow, cannot match any of the overloads for function wxSashLayoutWindow:\n  wxSashLayoutWindow()\n  wxSashLayoutWindow(wxSashLayoutWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n  wxSashLayoutWindow(lua_Table *)\n  wxSashLayoutWindow(lua_Table *, wxSashLayoutWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxSashLayoutWindow::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = "layoutWindow")
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = \"layoutWindow\") function, expected prototype:\nbool wxSashLayoutWindow::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxCLIP_CHILDREN | wxSW_3D, const wxString & name = \"layoutWindow\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxSashLayoutWindow::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxCLIP_CHILDREN | wxSW_3D;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutAlignment wxSashLayoutWindow::GetAlignment() const
	static int _bind_GetAlignment(lua_State *L) {
		if (!_lg_typecheck_GetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutAlignment wxSashLayoutWindow::GetAlignment() const function, expected prototype:\nwxLayoutAlignment wxSashLayoutWindow::GetAlignment() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutAlignment wxSashLayoutWindow::GetAlignment() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutAlignment lret = self->GetAlignment();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxLayoutOrientation wxSashLayoutWindow::GetOrientation() const
	static int _bind_GetOrientation(lua_State *L) {
		if (!_lg_typecheck_GetOrientation(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutOrientation wxSashLayoutWindow::GetOrientation() const function, expected prototype:\nwxLayoutOrientation wxSashLayoutWindow::GetOrientation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutOrientation wxSashLayoutWindow::GetOrientation() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutOrientation lret = self->GetOrientation();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSashLayoutWindow::OnCalculateLayout(wxCalculateLayoutEvent & event)
	static int _bind_OnCalculateLayout(lua_State *L) {
		if (!_lg_typecheck_OnCalculateLayout(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::OnCalculateLayout(wxCalculateLayoutEvent & event) function, expected prototype:\nvoid wxSashLayoutWindow::OnCalculateLayout(wxCalculateLayoutEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCalculateLayoutEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCalculateLayoutEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxSashLayoutWindow::OnCalculateLayout function");
		}
		wxCalculateLayoutEvent & event=*event_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::OnCalculateLayout(wxCalculateLayoutEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnCalculateLayout(event);

		return 0;
	}

	// void wxSashLayoutWindow::OnQueryLayoutInfo(wxQueryLayoutInfoEvent & event)
	static int _bind_OnQueryLayoutInfo(lua_State *L) {
		if (!_lg_typecheck_OnQueryLayoutInfo(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::OnQueryLayoutInfo(wxQueryLayoutInfoEvent & event) function, expected prototype:\nvoid wxSashLayoutWindow::OnQueryLayoutInfo(wxQueryLayoutInfoEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxQueryLayoutInfoEvent* event_ptr=(Luna< wxObject >::checkSubType< wxQueryLayoutInfoEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxSashLayoutWindow::OnQueryLayoutInfo function");
		}
		wxQueryLayoutInfoEvent & event=*event_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::OnQueryLayoutInfo(wxQueryLayoutInfoEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnQueryLayoutInfo(event);

		return 0;
	}

	// void wxSashLayoutWindow::SetAlignment(wxLayoutAlignment alignment)
	static int _bind_SetAlignment(lua_State *L) {
		if (!_lg_typecheck_SetAlignment(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::SetAlignment(wxLayoutAlignment alignment) function, expected prototype:\nvoid wxSashLayoutWindow::SetAlignment(wxLayoutAlignment alignment)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutAlignment alignment=(wxLayoutAlignment)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::SetAlignment(wxLayoutAlignment). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAlignment(alignment);

		return 0;
	}

	// void wxSashLayoutWindow::SetDefaultSize(const wxSize & size)
	static int _bind_SetDefaultSize(lua_State *L) {
		if (!_lg_typecheck_SetDefaultSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::SetDefaultSize(const wxSize & size) function, expected prototype:\nvoid wxSashLayoutWindow::SetDefaultSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::SetDefaultSize function");
		}
		const wxSize & size=*size_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::SetDefaultSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultSize(size);

		return 0;
	}

	// void wxSashLayoutWindow::SetOrientation(wxLayoutOrientation orientation)
	static int _bind_SetOrientation(lua_State *L) {
		if (!_lg_typecheck_SetOrientation(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::SetOrientation(wxLayoutOrientation orientation) function, expected prototype:\nvoid wxSashLayoutWindow::SetOrientation(wxLayoutOrientation orientation)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutOrientation orientation=(wxLayoutOrientation)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::SetOrientation(wxLayoutOrientation). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOrientation(orientation);

		return 0;
	}

	// wxClassInfo * wxSashLayoutWindow::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxSashLayoutWindow::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxSashLayoutWindow::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxSashLayoutWindow::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxSashLayoutWindow::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxSashLayoutWindow::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_AcceptsFocus() const function, expected prototype:\nbool wxSashLayoutWindow::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxSashLayoutWindow::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxSashLayoutWindow::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_HasFocus() const function, expected prototype:\nbool wxSashLayoutWindow::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSashLayoutWindow::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetCanFocus(canFocus);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetFocus() function, expected prototype:\nvoid wxSashLayoutWindow::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetFocus();

		return 0;
	}

	// void wxSashLayoutWindow::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetFocusFromKbd() function, expected prototype:\nvoid wxSashLayoutWindow::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetFocusFromKbd();

		return 0;
	}

	// void wxSashLayoutWindow::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxSashLayoutWindow::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::AddChild(child);

		return 0;
	}

	// void wxSashLayoutWindow::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxSashLayoutWindow::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::RemoveChild(child);

		return 0;
	}

	// bool wxSashLayoutWindow::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxSashLayoutWindow::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSashLayoutWindow::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxSashLayoutWindow::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxSashLayoutWindow::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxSashLayoutWindow::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxSashLayoutWindow::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSashLayoutWindow::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSashLayoutWindow::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSashLayoutWindow::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxSashLayoutWindow::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxSashLayoutWindow::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSashLayoutWindow::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSashLayoutWindow::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSashLayoutWindow::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxSashLayoutWindow::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxSashLayoutWindow::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSashLayoutWindow::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSashLayoutWindow::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxSashLayoutWindow::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxSashLayoutWindow::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_ScrollLines(int lines) function, expected prototype:\nbool wxSashLayoutWindow::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_ScrollPages(int pages) function, expected prototype:\nbool wxSashLayoutWindow::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSashLayoutWindow::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxSashLayoutWindow::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxSashLayoutWindow::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSashLayoutWindow::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxSashLayoutWindow::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSashLayoutWindow::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSashLayoutWindow::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSashLayoutWindow::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSashLayoutWindow::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxSashLayoutWindow::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSashLayoutWindow::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSashLayoutWindow::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxSashLayoutWindow::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_Fit() function, expected prototype:\nvoid wxSashLayoutWindow::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::Fit();

		return 0;
	}

	// void wxSashLayoutWindow::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_FitInside() function, expected prototype:\nvoid wxSashLayoutWindow::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::FitInside();

		return 0;
	}

	// wxSize wxSashLayoutWindow::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSashLayoutWindow::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxSashLayoutWindow::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSashLayoutWindow::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSashLayoutWindow::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSashLayoutWindow::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSashLayoutWindow::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxSashLayoutWindow::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSashLayoutWindow::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSashLayoutWindow::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSashLayoutWindow::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSashLayoutWindow::base_GetMaxSize() const function, expected prototype:\nwxSize wxSashLayoutWindow::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSashLayoutWindow::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSashLayoutWindow::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSashLayoutWindow::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSashLayoutWindow::base_GetMinClientSize() const function, expected prototype:\nwxSize wxSashLayoutWindow::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSashLayoutWindow::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSashLayoutWindow::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSashLayoutWindow::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSashLayoutWindow::base_GetMinSize() const function, expected prototype:\nwxSize wxSashLayoutWindow::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSashLayoutWindow::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSashLayoutWindow::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSashLayoutWindow::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSashLayoutWindow::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxSashLayoutWindow::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSashLayoutWindow::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSashLayoutWindow::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxSashLayoutWindow::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxSashLayoutWindow::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxSashLayoutWindow::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxSashLayoutWindow::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxSashLayoutWindow::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxSashLayoutWindow::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxSashLayoutWindow::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSashLayoutWindow::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxSashLayoutWindow::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SendSizeEvent(flags);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetMaxClientSize(size);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetMaxSize(size);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetMinClientSize(size);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxSashLayoutWindow::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetMinSize(size);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxSashLayoutWindow::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxSashLayoutWindow::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxSashLayoutWindow::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxSashLayoutWindow::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxSashLayoutWindow::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxSashLayoutWindow::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxSashLayoutWindow::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxSashLayoutWindow::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxSashLayoutWindow::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxSashLayoutWindow::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_ClearBackground() function, expected prototype:\nvoid wxSashLayoutWindow::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxSashLayoutWindow::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxSashLayoutWindow::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxSashLayoutWindow::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxSashLayoutWindow::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxSashLayoutWindow::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSashLayoutWindow::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxSashLayoutWindow::base_GetCharHeight() const function, expected prototype:\nint wxSashLayoutWindow::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSashLayoutWindow::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSashLayoutWindow::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSashLayoutWindow::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxSashLayoutWindow::base_GetCharWidth() const function, expected prototype:\nint wxSashLayoutWindow::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSashLayoutWindow::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSashLayoutWindow::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxSashLayoutWindow::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxSashLayoutWindow::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxSashLayoutWindow::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxSashLayoutWindow::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxSashLayoutWindow::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxSashLayoutWindow::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxSashLayoutWindow::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxSashLayoutWindow::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_Update() function, expected prototype:\nvoid wxSashLayoutWindow::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::Update();

		return 0;
	}

	// bool wxSashLayoutWindow::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxSashLayoutWindow::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxSashLayoutWindow::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxSashLayoutWindow::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_ShouldInheritColours() const function, expected prototype:\nbool wxSashLayoutWindow::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSashLayoutWindow::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxSashLayoutWindow::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_GetThemeEnabled() const function, expected prototype:\nbool wxSashLayoutWindow::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_CanSetTransparent() function, expected prototype:\nbool wxSashLayoutWindow::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxSashLayoutWindow::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSashLayoutWindow::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetNextHandler(handler);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetPreviousHandler(handler);

		return 0;
	}

	// long wxSashLayoutWindow::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxSashLayoutWindow::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxSashLayoutWindow::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxSashLayoutWindow::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxSashLayoutWindow::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSashLayoutWindow::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxSashLayoutWindow::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_Lower() function, expected prototype:\nvoid wxSashLayoutWindow::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::Lower();

		return 0;
	}

	// void wxSashLayoutWindow::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_Raise() function, expected prototype:\nvoid wxSashLayoutWindow::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::Raise();

		return 0;
	}

	// bool wxSashLayoutWindow::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxSashLayoutWindow::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_IsShown() const function, expected prototype:\nbool wxSashLayoutWindow::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_IsShownOnScreen() const function, expected prototype:\nbool wxSashLayoutWindow::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_Enable(bool enable = true) function, expected prototype:\nbool wxSashLayoutWindow::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_Show(bool show = true) function, expected prototype:\nbool wxSashLayoutWindow::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxSashLayoutWindow::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxSashLayoutWindow::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxSashLayoutWindow::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxSashLayoutWindow::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxSashLayoutWindow::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxSashLayoutWindow::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxSashLayoutWindow::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxSashLayoutWindow::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxSashLayoutWindow::base_GetValidator() function, expected prototype:\nwxValidator * wxSashLayoutWindow::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxSashLayoutWindow::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxSashLayoutWindow::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxSashLayoutWindow::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxSashLayoutWindow::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetValidator(validator);

		return 0;
	}

	// bool wxSashLayoutWindow::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_TransferDataFromWindow() function, expected prototype:\nbool wxSashLayoutWindow::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_TransferDataToWindow() function, expected prototype:\nbool wxSashLayoutWindow::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_Validate() function, expected prototype:\nbool wxSashLayoutWindow::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxSashLayoutWindow::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxSashLayoutWindow::base_GetLabel() const function, expected prototype:\nwxString wxSashLayoutWindow::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxSashLayoutWindow::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxSashLayoutWindow::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxSashLayoutWindow::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxSashLayoutWindow::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxSashLayoutWindow::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxSashLayoutWindow::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxSashLayoutWindow::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxSashLayoutWindow::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxSashLayoutWindow::base_GetName() const function, expected prototype:\nwxString wxSashLayoutWindow::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxSashLayoutWindow::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxSashLayoutWindow::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxSashLayoutWindow::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetLabel(label);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetLayoutDirection(dir);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetName(const wxString & name) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetName(name);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxSashLayoutWindow::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxSashLayoutWindow::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_Destroy() function, expected prototype:\nbool wxSashLayoutWindow::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxSashLayoutWindow::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxSashLayoutWindow::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxSashLayoutWindow::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxSashLayoutWindow::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxSashLayoutWindow::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxSashLayoutWindow::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetDropTarget(target);

		return 0;
	}

	// void wxSashLayoutWindow::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxSashLayoutWindow::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxSashLayoutWindow::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_Layout() function, expected prototype:\nbool wxSashLayoutWindow::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_HasCapture() const function, expected prototype:\nbool wxSashLayoutWindow::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxSashLayoutWindow::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxSashLayoutWindow::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSashLayoutWindow::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxSashLayoutWindow::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::WarpPointer(x, y);

		return 0;
	}

	// void wxSashLayoutWindow::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxSashLayoutWindow::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxSashLayoutWindow::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxSashLayoutWindow::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxSashLayoutWindow::base_GetHandle() const function, expected prototype:\nHWND wxSashLayoutWindow::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxSashLayoutWindow::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxSashLayoutWindow::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxSashLayoutWindow::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_HasMultiplePages() const function, expected prototype:\nbool wxSashLayoutWindow::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSashLayoutWindow::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_InheritAttributes() function, expected prototype:\nvoid wxSashLayoutWindow::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::InheritAttributes();

		return 0;
	}

	// void wxSashLayoutWindow::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_InitDialog() function, expected prototype:\nvoid wxSashLayoutWindow::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::InitDialog();

		return 0;
	}

	// bool wxSashLayoutWindow::base_IsDoubleBuffered() const
	static int _bind_base_IsDoubleBuffered(lua_State *L) {
		if (!_lg_typecheck_base_IsDoubleBuffered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_IsDoubleBuffered() const function, expected prototype:\nbool wxSashLayoutWindow::base_IsDoubleBuffered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_IsDoubleBuffered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::IsDoubleBuffered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_IsRetained() const function, expected prototype:\nbool wxSashLayoutWindow::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_IsTopLevel() const function, expected prototype:\nbool wxSashLayoutWindow::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSashLayoutWindow::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxSashLayoutWindow::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::MakeModal(modal);

		return 0;
	}

	// void wxSashLayoutWindow::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_OnInternalIdle() function, expected prototype:\nvoid wxSashLayoutWindow::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::OnInternalIdle();

		return 0;
	}

	// bool wxSashLayoutWindow::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxSashLayoutWindow::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxSashLayoutWindow::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxSashLayoutWindow::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxSashLayoutWindow::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxSashLayoutWindow::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxSashLayoutWindow::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxSashLayoutWindow::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxSashLayoutWindow::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::UpdateWindowUI(flags);

		return 0;
	}

	// int wxSashLayoutWindow::base_GetMaximumSizeX() const
	static int _bind_base_GetMaximumSizeX(lua_State *L) {
		if (!_lg_typecheck_base_GetMaximumSizeX(L)) {
			luaL_error(L, "luna typecheck failed in int wxSashLayoutWindow::base_GetMaximumSizeX() const function, expected prototype:\nint wxSashLayoutWindow::base_GetMaximumSizeX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSashLayoutWindow::base_GetMaximumSizeX() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSashLayoutWindow::GetMaximumSizeX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSashLayoutWindow::base_GetMaximumSizeY() const
	static int _bind_base_GetMaximumSizeY(lua_State *L) {
		if (!_lg_typecheck_base_GetMaximumSizeY(L)) {
			luaL_error(L, "luna typecheck failed in int wxSashLayoutWindow::base_GetMaximumSizeY() const function, expected prototype:\nint wxSashLayoutWindow::base_GetMaximumSizeY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSashLayoutWindow::base_GetMaximumSizeY() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSashLayoutWindow::GetMaximumSizeY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSashLayoutWindow::base_GetMinimumSizeX() const
	static int _bind_base_GetMinimumSizeX(lua_State *L) {
		if (!_lg_typecheck_base_GetMinimumSizeX(L)) {
			luaL_error(L, "luna typecheck failed in int wxSashLayoutWindow::base_GetMinimumSizeX() const function, expected prototype:\nint wxSashLayoutWindow::base_GetMinimumSizeX() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSashLayoutWindow::base_GetMinimumSizeX() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSashLayoutWindow::GetMinimumSizeX();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxSashLayoutWindow::base_GetMinimumSizeY() const
	static int _bind_base_GetMinimumSizeY(lua_State *L) {
		if (!_lg_typecheck_base_GetMinimumSizeY(L)) {
			luaL_error(L, "luna typecheck failed in int wxSashLayoutWindow::base_GetMinimumSizeY() const function, expected prototype:\nint wxSashLayoutWindow::base_GetMinimumSizeY() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxSashLayoutWindow::base_GetMinimumSizeY() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxSashLayoutWindow::GetMinimumSizeY();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxSashLayoutWindow::base_SetMaximumSizeX(int min)
	static int _bind_base_SetMaximumSizeX(lua_State *L) {
		if (!_lg_typecheck_base_SetMaximumSizeX(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetMaximumSizeX(int min) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetMaximumSizeX(int min)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int min=(int)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetMaximumSizeX(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetMaximumSizeX(min);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetMaximumSizeY(int min)
	static int _bind_base_SetMaximumSizeY(lua_State *L) {
		if (!_lg_typecheck_base_SetMaximumSizeY(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetMaximumSizeY(int min) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetMaximumSizeY(int min)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int min=(int)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetMaximumSizeY(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetMaximumSizeY(min);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetMinimumSizeX(int min)
	static int _bind_base_SetMinimumSizeX(lua_State *L) {
		if (!_lg_typecheck_base_SetMinimumSizeX(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetMinimumSizeX(int min) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetMinimumSizeX(int min)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int min=(int)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetMinimumSizeX(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetMinimumSizeX(min);

		return 0;
	}

	// void wxSashLayoutWindow::base_SetMinimumSizeY(int min)
	static int _bind_base_SetMinimumSizeY(lua_State *L) {
		if (!_lg_typecheck_base_SetMinimumSizeY(L)) {
			luaL_error(L, "luna typecheck failed in void wxSashLayoutWindow::base_SetMinimumSizeY(int min) function, expected prototype:\nvoid wxSashLayoutWindow::base_SetMinimumSizeY(int min)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int min=(int)lua_tointeger(L,2);

		wxSashLayoutWindow* self=Luna< wxObject >::checkSubType< wxSashLayoutWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxSashLayoutWindow::base_SetMinimumSizeY(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxSashLayoutWindow::SetMinimumSizeY(min);

		return 0;
	}


	// Operator binds:

};

wxSashLayoutWindow* LunaTraits< wxSashLayoutWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxSashLayoutWindow::_bind_ctor(L);
}

void LunaTraits< wxSashLayoutWindow >::_bind_dtor(wxSashLayoutWindow* obj) {
	delete obj;
}

const char LunaTraits< wxSashLayoutWindow >::className[] = "wxSashLayoutWindow";
const char LunaTraits< wxSashLayoutWindow >::fullName[] = "wxSashLayoutWindow";
const char LunaTraits< wxSashLayoutWindow >::moduleName[] = "wx";
const char* LunaTraits< wxSashLayoutWindow >::parents[] = {"wx.wxSashWindow", 0};
const int LunaTraits< wxSashLayoutWindow >::hash = 8713345;
const int LunaTraits< wxSashLayoutWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxSashLayoutWindow >::methods[] = {
	{"Create", &luna_wrapper_wxSashLayoutWindow::_bind_Create},
	{"GetAlignment", &luna_wrapper_wxSashLayoutWindow::_bind_GetAlignment},
	{"GetOrientation", &luna_wrapper_wxSashLayoutWindow::_bind_GetOrientation},
	{"OnCalculateLayout", &luna_wrapper_wxSashLayoutWindow::_bind_OnCalculateLayout},
	{"OnQueryLayoutInfo", &luna_wrapper_wxSashLayoutWindow::_bind_OnQueryLayoutInfo},
	{"SetAlignment", &luna_wrapper_wxSashLayoutWindow::_bind_SetAlignment},
	{"SetDefaultSize", &luna_wrapper_wxSashLayoutWindow::_bind_SetDefaultSize},
	{"SetOrientation", &luna_wrapper_wxSashLayoutWindow::_bind_SetOrientation},
	{"base_GetClassInfo", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxSashLayoutWindow::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxSashLayoutWindow::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxSashLayoutWindow::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxSashLayoutWindow::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxSashLayoutWindow::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxSashLayoutWindow::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxSashLayoutWindow::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxSashLayoutWindow::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxSashLayoutWindow::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxSashLayoutWindow::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxSashLayoutWindow::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxSashLayoutWindow::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxSashLayoutWindow::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxSashLayoutWindow::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxSashLayoutWindow::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxSashLayoutWindow::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxSashLayoutWindow::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxSashLayoutWindow::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxSashLayoutWindow::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxSashLayoutWindow::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxSashLayoutWindow::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxSashLayoutWindow::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxSashLayoutWindow::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxSashLayoutWindow::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxSashLayoutWindow::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxSashLayoutWindow::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxSashLayoutWindow::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxSashLayoutWindow::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxSashLayoutWindow::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxSashLayoutWindow::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxSashLayoutWindow::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxSashLayoutWindow::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxSashLayoutWindow::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxSashLayoutWindow::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxSashLayoutWindow::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxSashLayoutWindow::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxSashLayoutWindow::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxSashLayoutWindow::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxSashLayoutWindow::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxSashLayoutWindow::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxSashLayoutWindow::_bind_base_InitDialog},
	{"base_IsDoubleBuffered", &luna_wrapper_wxSashLayoutWindow::_bind_base_IsDoubleBuffered},
	{"base_IsRetained", &luna_wrapper_wxSashLayoutWindow::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxSashLayoutWindow::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxSashLayoutWindow::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxSashLayoutWindow::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxSashLayoutWindow::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxSashLayoutWindow::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxSashLayoutWindow::_bind_base_UpdateWindowUI},
	{"base_GetMaximumSizeX", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetMaximumSizeX},
	{"base_GetMaximumSizeY", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetMaximumSizeY},
	{"base_GetMinimumSizeX", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetMinimumSizeX},
	{"base_GetMinimumSizeY", &luna_wrapper_wxSashLayoutWindow::_bind_base_GetMinimumSizeY},
	{"base_SetMaximumSizeX", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetMaximumSizeX},
	{"base_SetMaximumSizeY", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetMaximumSizeY},
	{"base_SetMinimumSizeX", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetMinimumSizeX},
	{"base_SetMinimumSizeY", &luna_wrapper_wxSashLayoutWindow::_bind_base_SetMinimumSizeY},
	{"fromVoid", &luna_wrapper_wxSashLayoutWindow::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxSashLayoutWindow::_bind_asVoid},
	{"getTable", &luna_wrapper_wxSashLayoutWindow::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxSashLayoutWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxSashLayoutWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxSashLayoutWindow >::enumValues[] = {
	{0,0}
};


