#include <plug_common.h>

#include <luna/wrappers/wrapper_wxFileDialog.h>

class luna_wrapper_wxFileDialog {
public:
	typedef Luna< wxFileDialog > luna_t;

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

		wxFileDialog* self= (wxFileDialog*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxFileDialog >::push(L,self,false);
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
		//wxFileDialog* ptr= dynamic_cast< wxFileDialog* >(Luna< wxObject >::check(L,1));
		wxFileDialog* ptr= luna_caster< wxObject, wxFileDialog >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxFileDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,25723480) ) return false;
		if( luatop>6 && (!(Luna< wxPoint >::check(L,7))) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,20268751) ) return false;
		if( luatop>7 && (!(Luna< wxSize >::check(L,8))) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TSTRING ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,25723480) ) return false;
		if( luatop>7 && (!(Luna< wxPoint >::check(L,8))) ) return false;
		if( luatop>8 && !Luna<void>::has_uniqueid(L,9,20268751) ) return false;
		if( luatop>8 && (!(Luna< wxSize >::check(L,9))) ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetDirectory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetExtraControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilenames(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPaths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetWildcard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDirectory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWildcard(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_CanDoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DoLayoutAdaptation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_EndModal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetContentWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Iconize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsIconized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetIcons(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDirectory(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetFilenames(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetPaths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetWildcard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetDirectory(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFilename(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetWildcard(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxFileDialog::wxFileDialog(wxWindow * parent, const wxString & message = wxFileSelectorPromptStr, const wxString & defaultDir = wxEmptyString, const wxString & defaultFile = wxEmptyString, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, long style = wxFD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileDialogNameStr)
	static wxFileDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxFileDialog::wxFileDialog(wxWindow * parent, const wxString & message = wxFileSelectorPromptStr, const wxString & defaultDir = wxEmptyString, const wxString & defaultFile = wxEmptyString, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, long style = wxFD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileDialogNameStr) function, expected prototype:\nwxFileDialog::wxFileDialog(wxWindow * parent, const wxString & message = wxFileSelectorPromptStr, const wxString & defaultDir = wxEmptyString, const wxString & defaultFile = wxEmptyString, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, long style = wxFD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileDialogNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 7 ID = 25723480\narg 8 ID = 20268751\narg 9 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		wxString defaultDir(lua_tostring(L,3),lua_objlen(L,3));
		wxString defaultFile(lua_tostring(L,4),lua_objlen(L,4));
		wxString wildcard(lua_tostring(L,5),lua_objlen(L,5));
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxFD_DEFAULT_STYLE;
		const wxPoint* pos_ptr=luatop>6 ? (Luna< wxPoint >::check(L,7)) : NULL;
		if( luatop>6 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxFileDialog::wxFileDialog function");
		}
		const wxPoint & pos=luatop>6 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>7 ? (Luna< wxSize >::check(L,8)) : NULL;
		if( luatop>7 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFileDialog::wxFileDialog function");
		}
		const wxSize & size=luatop>7 ? *size_ptr : (const wxSize&)wxDefaultSize;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxFileDialog(parent, message, defaultDir, defaultFile, wildcard, style, pos, size, name);
	}

	// wxFileDialog::wxFileDialog(lua_Table * data, wxWindow * parent, const wxString & message = wxFileSelectorPromptStr, const wxString & defaultDir = wxEmptyString, const wxString & defaultFile = wxEmptyString, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, long style = wxFD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileDialogNameStr)
	static wxFileDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxFileDialog::wxFileDialog(lua_Table * data, wxWindow * parent, const wxString & message = wxFileSelectorPromptStr, const wxString & defaultDir = wxEmptyString, const wxString & defaultFile = wxEmptyString, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, long style = wxFD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileDialogNameStr) function, expected prototype:\nwxFileDialog::wxFileDialog(lua_Table * data, wxWindow * parent, const wxString & message = wxFileSelectorPromptStr, const wxString & defaultDir = wxEmptyString, const wxString & defaultFile = wxEmptyString, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, long style = wxFD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileDialogNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 88196105\narg 5 ID = 88196105\narg 6 ID = 88196105\narg 8 ID = 25723480\narg 9 ID = 20268751\narg 10 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxString message(lua_tostring(L,3),lua_objlen(L,3));
		wxString defaultDir(lua_tostring(L,4),lua_objlen(L,4));
		wxString defaultFile(lua_tostring(L,5),lua_objlen(L,5));
		wxString wildcard(lua_tostring(L,6),lua_objlen(L,6));
		long style=luatop>6 ? (long)lua_tonumber(L,7) : (long)wxFD_DEFAULT_STYLE;
		const wxPoint* pos_ptr=luatop>7 ? (Luna< wxPoint >::check(L,8)) : NULL;
		if( luatop>7 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxFileDialog::wxFileDialog function");
		}
		const wxPoint & pos=luatop>7 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>8 ? (Luna< wxSize >::check(L,9)) : NULL;
		if( luatop>8 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFileDialog::wxFileDialog function");
		}
		const wxSize & size=luatop>8 ? *size_ptr : (const wxSize&)wxDefaultSize;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wrapper_wxFileDialog(L,NULL, parent, message, defaultDir, defaultFile, wildcard, style, pos, size, name);
	}

	// Overload binder for wxFileDialog::wxFileDialog
	static wxFileDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxFileDialog, cannot match any of the overloads for function wxFileDialog:\n  wxFileDialog(wxWindow *, const wxString &, const wxString &, const wxString &, const wxString &, long, const wxPoint &, const wxSize &, const wxString &)\n  wxFileDialog(lua_Table *, wxWindow *, const wxString &, const wxString &, const wxString &, const wxString &, long, const wxPoint &, const wxSize &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxString wxFileDialog::GetDirectory() const
	static int _bind_GetDirectory(lua_State *L) {
		if (!_lg_typecheck_GetDirectory(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::GetDirectory() const function, expected prototype:\nwxString wxFileDialog::GetDirectory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::GetDirectory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDirectory();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxWindow * wxFileDialog::GetExtraControl() const
	static int _bind_GetExtraControl(lua_State *L) {
		if (!_lg_typecheck_GetExtraControl(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxFileDialog::GetExtraControl() const function, expected prototype:\nwxWindow * wxFileDialog::GetExtraControl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxFileDialog::GetExtraControl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetExtraControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxString wxFileDialog::GetFilename() const
	static int _bind_GetFilename(lua_State *L) {
		if (!_lg_typecheck_GetFilename(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::GetFilename() const function, expected prototype:\nwxString wxFileDialog::GetFilename() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::GetFilename() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetFilename();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDialog::GetFilenames(wxArrayString & filenames) const
	static int _bind_GetFilenames(lua_State *L) {
		if (!_lg_typecheck_GetFilenames(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::GetFilenames(wxArrayString & filenames) const function, expected prototype:\nvoid wxFileDialog::GetFilenames(wxArrayString & filenames) const\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayString* filenames_ptr=(Luna< wxArrayString >::check(L,2));
		if( !filenames_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filenames in wxFileDialog::GetFilenames function");
		}
		wxArrayString & filenames=*filenames_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::GetFilenames(wxArrayString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetFilenames(filenames);

		return 0;
	}

	// int wxFileDialog::GetFilterIndex() const
	static int _bind_GetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_GetFilterIndex(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileDialog::GetFilterIndex() const function, expected prototype:\nint wxFileDialog::GetFilterIndex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileDialog::GetFilterIndex() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFilterIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFileDialog::GetMessage() const
	static int _bind_GetMessage(lua_State *L) {
		if (!_lg_typecheck_GetMessage(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::GetMessage() const function, expected prototype:\nwxString wxFileDialog::GetMessage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::GetMessage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetMessage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileDialog::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::GetPath() const function, expected prototype:\nwxString wxFileDialog::GetPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::GetPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDialog::GetPaths(wxArrayString & paths) const
	static int _bind_GetPaths(lua_State *L) {
		if (!_lg_typecheck_GetPaths(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::GetPaths(wxArrayString & paths) const function, expected prototype:\nvoid wxFileDialog::GetPaths(wxArrayString & paths) const\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxFileDialog::GetPaths function");
		}
		wxArrayString & paths=*paths_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::GetPaths(wxArrayString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetPaths(paths);

		return 0;
	}

	// wxString wxFileDialog::GetWildcard() const
	static int _bind_GetWildcard(lua_State *L) {
		if (!_lg_typecheck_GetWildcard(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::GetWildcard() const function, expected prototype:\nwxString wxFileDialog::GetWildcard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::GetWildcard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetWildcard();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDialog::SetDirectory(const wxString & directory)
	static int _bind_SetDirectory(lua_State *L) {
		if (!_lg_typecheck_SetDirectory(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetDirectory(const wxString & directory) function, expected prototype:\nvoid wxFileDialog::SetDirectory(const wxString & directory)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString directory(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetDirectory(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDirectory(directory);

		return 0;
	}

	// void wxFileDialog::SetFilename(const wxString & setfilename)
	static int _bind_SetFilename(lua_State *L) {
		if (!_lg_typecheck_SetFilename(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetFilename(const wxString & setfilename) function, expected prototype:\nvoid wxFileDialog::SetFilename(const wxString & setfilename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString setfilename(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetFilename(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFilename(setfilename);

		return 0;
	}

	// void wxFileDialog::SetFilterIndex(int filterIndex)
	static int _bind_SetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_SetFilterIndex(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetFilterIndex(int filterIndex) function, expected prototype:\nvoid wxFileDialog::SetFilterIndex(int filterIndex)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int filterIndex=(int)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetFilterIndex(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFilterIndex(filterIndex);

		return 0;
	}

	// void wxFileDialog::SetMessage(const wxString & message)
	static int _bind_SetMessage(lua_State *L) {
		if (!_lg_typecheck_SetMessage(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetMessage(const wxString & message) function, expected prototype:\nvoid wxFileDialog::SetMessage(const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetMessage(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMessage(message);

		return 0;
	}

	// void wxFileDialog::SetPath(const wxString & path)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetPath(const wxString & path) function, expected prototype:\nvoid wxFileDialog::SetPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPath(path);

		return 0;
	}

	// void wxFileDialog::SetWildcard(const wxString & wildCard)
	static int _bind_SetWildcard(lua_State *L) {
		if (!_lg_typecheck_SetWildcard(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::SetWildcard(const wxString & wildCard) function, expected prototype:\nvoid wxFileDialog::SetWildcard(const wxString & wildCard)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString wildCard(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::SetWildcard(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWildcard(wildCard);

		return 0;
	}

	// int wxFileDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileDialog::ShowModal() function, expected prototype:\nint wxFileDialog::ShowModal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileDialog::ShowModal(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxFileDialog::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxFileDialog::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxFileDialog::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxFileDialog::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxFileDialog::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxFileDialog::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_AcceptsFocus() const function, expected prototype:\nbool wxFileDialog::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxFileDialog::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxFileDialog::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_HasFocus() const function, expected prototype:\nbool wxFileDialog::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxFileDialog::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetCanFocus(canFocus);

		return 0;
	}

	// void wxFileDialog::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetFocus() function, expected prototype:\nvoid wxFileDialog::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetFocus();

		return 0;
	}

	// void wxFileDialog::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetFocusFromKbd() function, expected prototype:\nvoid wxFileDialog::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetFocusFromKbd();

		return 0;
	}

	// void wxFileDialog::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxFileDialog::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::AddChild(child);

		return 0;
	}

	// void wxFileDialog::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxFileDialog::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::RemoveChild(child);

		return 0;
	}

	// bool wxFileDialog::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxFileDialog::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxFileDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxFileDialog::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileDialog::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxFileDialog::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileDialog::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxFileDialog::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFileDialog::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileDialog::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxFileDialog::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileDialog::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxFileDialog::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFileDialog::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileDialog::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxFileDialog::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileDialog::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxFileDialog::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxFileDialog::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxFileDialog::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_ScrollLines(int lines) function, expected prototype:\nbool wxFileDialog::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_ScrollPages(int pages) function, expected prototype:\nbool wxFileDialog::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxFileDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxFileDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxFileDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxFileDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxFileDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxFileDialog::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFileDialog::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxFileDialog::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFileDialog::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFileDialog::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxFileDialog::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFileDialog::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFileDialog::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxFileDialog::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFileDialog::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFileDialog::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxFileDialog::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxFileDialog::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_Fit() function, expected prototype:\nvoid wxFileDialog::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::Fit();

		return 0;
	}

	// void wxFileDialog::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_FitInside() function, expected prototype:\nvoid wxFileDialog::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::FitInside();

		return 0;
	}

	// wxSize wxFileDialog::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFileDialog::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxFileDialog::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFileDialog::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxFileDialog::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFileDialog::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFileDialog::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxFileDialog::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFileDialog::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxFileDialog::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFileDialog::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFileDialog::base_GetMaxSize() const function, expected prototype:\nwxSize wxFileDialog::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFileDialog::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxFileDialog::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFileDialog::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFileDialog::base_GetMinClientSize() const function, expected prototype:\nwxSize wxFileDialog::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFileDialog::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxFileDialog::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFileDialog::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFileDialog::base_GetMinSize() const function, expected prototype:\nwxSize wxFileDialog::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFileDialog::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxFileDialog::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFileDialog::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFileDialog::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxFileDialog::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFileDialog::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxFileDialog::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxFileDialog::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxFileDialog::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxFileDialog::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxFileDialog::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxFileDialog::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxFileDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxFileDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxFileDialog::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SendSizeEvent(flags);

		return 0;
	}

	// void wxFileDialog::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxFileDialog::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFileDialog::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetMaxClientSize(size);

		return 0;
	}

	// void wxFileDialog::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxFileDialog::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFileDialog::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetMinClientSize(size);

		return 0;
	}

	// wxPoint wxFileDialog::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxFileDialog::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxFileDialog::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxFileDialog::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxFileDialog::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxFileDialog::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_ClearBackground() function, expected prototype:\nvoid wxFileDialog::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxFileDialog::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxFileDialog::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxFileDialog::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxFileDialog::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxFileDialog::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFileDialog::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileDialog::base_GetCharHeight() const function, expected prototype:\nint wxFileDialog::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileDialog::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxFileDialog::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxFileDialog::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileDialog::base_GetCharWidth() const function, expected prototype:\nint wxFileDialog::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileDialog::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxFileDialog::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxFileDialog::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxFileDialog::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxFileDialog::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxFileDialog::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxFileDialog::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxFileDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxFileDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxFileDialog::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_Update() function, expected prototype:\nvoid wxFileDialog::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::Update();

		return 0;
	}

	// bool wxFileDialog::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxFileDialog::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxFileDialog::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxFileDialog::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_ShouldInheritColours() const function, expected prototype:\nbool wxFileDialog::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxFileDialog::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxFileDialog::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_GetThemeEnabled() const function, expected prototype:\nbool wxFileDialog::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxFileDialog::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetNextHandler(handler);

		return 0;
	}

	// void wxFileDialog::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxFileDialog::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetPreviousHandler(handler);

		return 0;
	}

	// long wxFileDialog::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxFileDialog::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxFileDialog::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxFileDialog::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxFileDialog::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxFileDialog::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxFileDialog::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxFileDialog::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxFileDialog::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxFileDialog::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_Lower() function, expected prototype:\nvoid wxFileDialog::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::Lower();

		return 0;
	}

	// void wxFileDialog::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_Raise() function, expected prototype:\nvoid wxFileDialog::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::Raise();

		return 0;
	}

	// bool wxFileDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxFileDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_IsShown() const function, expected prototype:\nbool wxFileDialog::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_IsShownOnScreen() const function, expected prototype:\nbool wxFileDialog::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_Enable(bool enable = true) function, expected prototype:\nbool wxFileDialog::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxFileDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxFileDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxFileDialog::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileDialog::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxFileDialog::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxFileDialog::base_GetValidator() function, expected prototype:\nwxValidator * wxFileDialog::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxFileDialog::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxFileDialog::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxFileDialog::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxFileDialog::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxFileDialog::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetValidator(validator);

		return 0;
	}

	// bool wxFileDialog::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_TransferDataFromWindow() function, expected prototype:\nbool wxFileDialog::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_TransferDataToWindow() function, expected prototype:\nbool wxFileDialog::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_Validate() function, expected prototype:\nbool wxFileDialog::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileDialog::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::base_GetLabel() const function, expected prototype:\nwxString wxFileDialog::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileDialog::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxFileDialog::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxFileDialog::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxFileDialog::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxFileDialog::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxFileDialog::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFileDialog::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::base_GetName() const function, expected prototype:\nwxString wxFileDialog::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileDialog::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDialog::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxFileDialog::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetLabel(label);

		return 0;
	}

	// void wxFileDialog::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxFileDialog::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetLayoutDirection(dir);

		return 0;
	}

	// void wxFileDialog::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetName(const wxString & name) function, expected prototype:\nvoid wxFileDialog::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetName(name);

		return 0;
	}

	// void wxFileDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxFileDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxFileDialog::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxFileDialog::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_Destroy() function, expected prototype:\nbool wxFileDialog::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxFileDialog::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxFileDialog::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxFileDialog::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxFileDialog::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxFileDialog::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxFileDialog::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxFileDialog::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetDropTarget(target);

		return 0;
	}

	// void wxFileDialog::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxFileDialog::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxFileDialog::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_HasCapture() const function, expected prototype:\nbool wxFileDialog::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxFileDialog::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxFileDialog::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxFileDialog::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::WarpPointer(x, y);

		return 0;
	}

	// void wxFileDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxFileDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxFileDialog::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxFileDialog::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxFileDialog::base_GetHandle() const function, expected prototype:\nHWND wxFileDialog::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxFileDialog::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxFileDialog::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxFileDialog::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_HasMultiplePages() const function, expected prototype:\nbool wxFileDialog::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_InheritAttributes() function, expected prototype:\nvoid wxFileDialog::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::InheritAttributes();

		return 0;
	}

	// void wxFileDialog::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_InitDialog() function, expected prototype:\nvoid wxFileDialog::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::InitDialog();

		return 0;
	}

	// bool wxFileDialog::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_IsRetained() const function, expected prototype:\nbool wxFileDialog::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_IsTopLevel() const function, expected prototype:\nbool wxFileDialog::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxFileDialog::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::MakeModal(modal);

		return 0;
	}

	// void wxFileDialog::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_OnInternalIdle() function, expected prototype:\nvoid wxFileDialog::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::OnInternalIdle();

		return 0;
	}

	// bool wxFileDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxFileDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxFileDialog::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxFileDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxFileDialog::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_CanSetTransparent() function, expected prototype:\nbool wxFileDialog::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_EnableCloseButton(bool enable = true)
	static int _bind_base_EnableCloseButton(lua_State *L) {
		if (!_lg_typecheck_base_EnableCloseButton(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_EnableCloseButton(bool enable = true) function, expected prototype:\nbool wxFileDialog::base_EnableCloseButton(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_EnableCloseButton(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::EnableCloseButton(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileDialog::base_GetTitle() const
	static int _bind_base_GetTitle(lua_State *L) {
		if (!_lg_typecheck_base_GetTitle(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::base_GetTitle() const function, expected prototype:\nwxString wxFileDialog::base_GetTitle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::base_GetTitle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileDialog::GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxFileDialog::base_IsActive()
	static int _bind_base_IsActive(lua_State *L) {
		if (!_lg_typecheck_base_IsActive(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_IsActive() function, expected prototype:\nbool wxFileDialog::base_IsActive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_IsActive(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_IsAlwaysMaximized() const
	static int _bind_base_IsAlwaysMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsAlwaysMaximized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_IsAlwaysMaximized() const function, expected prototype:\nbool wxFileDialog::base_IsAlwaysMaximized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_IsAlwaysMaximized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::IsAlwaysMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_IsFullScreen() const
	static int _bind_base_IsFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsFullScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_IsFullScreen() const function, expected prototype:\nbool wxFileDialog::base_IsFullScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_IsFullScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::IsFullScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_IsMaximized() const
	static int _bind_base_IsMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsMaximized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_IsMaximized() const function, expected prototype:\nbool wxFileDialog::base_IsMaximized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_IsMaximized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::IsMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_Layout() function, expected prototype:\nbool wxFileDialog::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_Maximize(bool maximize = true)
	static int _bind_base_Maximize(lua_State *L) {
		if (!_lg_typecheck_base_Maximize(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_Maximize(bool maximize = true) function, expected prototype:\nvoid wxFileDialog::base_Maximize(bool maximize = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool maximize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_Maximize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::Maximize(maximize);

		return 0;
	}

	// void wxFileDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	static int _bind_base_RequestUserAttention(lua_State *L) {
		if (!_lg_typecheck_base_RequestUserAttention(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) function, expected prototype:\nvoid wxFileDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxUSER_ATTENTION_INFO;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_RequestUserAttention(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::RequestUserAttention(flags);

		return 0;
	}

	// void wxFileDialog::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxFileDialog::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFileDialog::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetMaxSize(size);

		return 0;
	}

	// void wxFileDialog::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxFileDialog::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxFileDialog::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetMinSize(size);

		return 0;
	}

	// void wxFileDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxFileDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// void wxFileDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxFileDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxFileDialog::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxFileDialog::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxFileDialog::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// Overload binder for wxFileDialog::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(int, int, int, int, int, int)\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n");
		return 0;
	}

	// void wxFileDialog::base_SetTitle(const wxString & title)
	static int _bind_base_SetTitle(lua_State *L) {
		if (!_lg_typecheck_base_SetTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetTitle(const wxString & title) function, expected prototype:\nvoid wxFileDialog::base_SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetTitle(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetTitle(title);

		return 0;
	}

	// bool wxFileDialog::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxFileDialog::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_ShouldPreventAppExit() const
	static int _bind_base_ShouldPreventAppExit(lua_State *L) {
		if (!_lg_typecheck_base_ShouldPreventAppExit(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_ShouldPreventAppExit() const function, expected prototype:\nbool wxFileDialog::base_ShouldPreventAppExit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_ShouldPreventAppExit() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::ShouldPreventAppExit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_OSXSetModified(bool modified)
	static int _bind_base_OSXSetModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXSetModified(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_OSXSetModified(bool modified) function, expected prototype:\nvoid wxFileDialog::base_OSXSetModified(bool modified)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_OSXSetModified(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::OSXSetModified(modified);

		return 0;
	}

	// bool wxFileDialog::base_OSXIsModified() const
	static int _bind_base_OSXIsModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXIsModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_OSXIsModified() const function, expected prototype:\nbool wxFileDialog::base_OSXIsModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_OSXIsModified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::OSXIsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	static int _bind_base_ShowFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_ShowFullScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) function, expected prototype:\nbool wxFileDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		long style=luatop>2 ? (long)lua_tonumber(L,3) : (long)::wxFULLSCREEN_ALL;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_ShowFullScreen(bool, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::ShowFullScreen(show, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_CanDoLayoutAdaptation()
	static int _bind_base_CanDoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_base_CanDoLayoutAdaptation(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_CanDoLayoutAdaptation() function, expected prototype:\nbool wxFileDialog::base_CanDoLayoutAdaptation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_CanDoLayoutAdaptation(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::CanDoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_DoLayoutAdaptation()
	static int _bind_base_DoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_base_DoLayoutAdaptation(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_DoLayoutAdaptation() function, expected prototype:\nbool wxFileDialog::base_DoLayoutAdaptation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_DoLayoutAdaptation(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::DoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_EndModal(int retCode)
	static int _bind_base_EndModal(lua_State *L) {
		if (!_lg_typecheck_base_EndModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_EndModal(int retCode) function, expected prototype:\nvoid wxFileDialog::base_EndModal(int retCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int retCode=(int)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_EndModal(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::EndModal(retCode);

		return 0;
	}

	// wxWindow * wxFileDialog::base_GetContentWindow() const
	static int _bind_base_GetContentWindow(lua_State *L) {
		if (!_lg_typecheck_base_GetContentWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxFileDialog::base_GetContentWindow() const function, expected prototype:\nwxWindow * wxFileDialog::base_GetContentWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxFileDialog::base_GetContentWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->wxFileDialog::GetContentWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxFileDialog::base_Iconize(bool iconize = true)
	static int _bind_base_Iconize(lua_State *L) {
		if (!_lg_typecheck_base_Iconize(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_Iconize(bool iconize = true) function, expected prototype:\nvoid wxFileDialog::base_Iconize(bool iconize = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool iconize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_Iconize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::Iconize(iconize);

		return 0;
	}

	// bool wxFileDialog::base_IsIconized() const
	static int _bind_base_IsIconized(lua_State *L) {
		if (!_lg_typecheck_base_IsIconized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_IsIconized() const function, expected prototype:\nbool wxFileDialog::base_IsIconized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_IsIconized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxFileDialog::base_IsModal() const
	static int _bind_base_IsModal(lua_State *L) {
		if (!_lg_typecheck_base_IsModal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_IsModal() const function, expected prototype:\nbool wxFileDialog::base_IsModal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_IsModal() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::IsModal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxFileDialog::base_SetIcons(const wxIconBundle & icons)
	static int _bind_base_SetIcons(lua_State *L) {
		if (!_lg_typecheck_base_SetIcons(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetIcons(const wxIconBundle & icons) function, expected prototype:\nvoid wxFileDialog::base_SetIcons(const wxIconBundle & icons)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIconBundle* icons_ptr=(Luna< wxObject >::checkSubType< wxIconBundle >(L,2));
		if( !icons_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icons in wxFileDialog::base_SetIcons function");
		}
		const wxIconBundle & icons=*icons_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetIcons(const wxIconBundle &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetIcons(icons);

		return 0;
	}

	// bool wxFileDialog::base_Show(bool show = 1)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxFileDialog::base_Show(bool show = 1) function, expected prototype:\nbool wxFileDialog::base_Show(bool show = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)1;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxFileDialog::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxFileDialog::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxFileDialog::base_GetDirectory() const
	static int _bind_base_GetDirectory(lua_State *L) {
		if (!_lg_typecheck_base_GetDirectory(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::base_GetDirectory() const function, expected prototype:\nwxString wxFileDialog::base_GetDirectory() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::base_GetDirectory() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileDialog::GetDirectory();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileDialog::base_GetFilename() const
	static int _bind_base_GetFilename(lua_State *L) {
		if (!_lg_typecheck_base_GetFilename(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::base_GetFilename() const function, expected prototype:\nwxString wxFileDialog::base_GetFilename() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::base_GetFilename() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileDialog::GetFilename();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDialog::base_GetFilenames(wxArrayString & filenames) const
	static int _bind_base_GetFilenames(lua_State *L) {
		if (!_lg_typecheck_base_GetFilenames(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_GetFilenames(wxArrayString & filenames) const function, expected prototype:\nvoid wxFileDialog::base_GetFilenames(wxArrayString & filenames) const\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayString* filenames_ptr=(Luna< wxArrayString >::check(L,2));
		if( !filenames_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filenames in wxFileDialog::base_GetFilenames function");
		}
		wxArrayString & filenames=*filenames_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_GetFilenames(wxArrayString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::GetFilenames(filenames);

		return 0;
	}

	// int wxFileDialog::base_GetFilterIndex() const
	static int _bind_base_GetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_base_GetFilterIndex(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileDialog::base_GetFilterIndex() const function, expected prototype:\nint wxFileDialog::base_GetFilterIndex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileDialog::base_GetFilterIndex() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxFileDialog::GetFilterIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxFileDialog::base_GetMessage() const
	static int _bind_base_GetMessage(lua_State *L) {
		if (!_lg_typecheck_base_GetMessage(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::base_GetMessage() const function, expected prototype:\nwxString wxFileDialog::base_GetMessage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::base_GetMessage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileDialog::GetMessage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxFileDialog::base_GetPath() const
	static int _bind_base_GetPath(lua_State *L) {
		if (!_lg_typecheck_base_GetPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::base_GetPath() const function, expected prototype:\nwxString wxFileDialog::base_GetPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::base_GetPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileDialog::GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDialog::base_GetPaths(wxArrayString & paths) const
	static int _bind_base_GetPaths(lua_State *L) {
		if (!_lg_typecheck_base_GetPaths(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_GetPaths(wxArrayString & paths) const function, expected prototype:\nvoid wxFileDialog::base_GetPaths(wxArrayString & paths) const\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxFileDialog::base_GetPaths function");
		}
		wxArrayString & paths=*paths_ptr;

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_GetPaths(wxArrayString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::GetPaths(paths);

		return 0;
	}

	// wxString wxFileDialog::base_GetWildcard() const
	static int _bind_base_GetWildcard(lua_State *L) {
		if (!_lg_typecheck_base_GetWildcard(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxFileDialog::base_GetWildcard() const function, expected prototype:\nwxString wxFileDialog::base_GetWildcard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxFileDialog::base_GetWildcard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxFileDialog::GetWildcard();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxFileDialog::base_SetDirectory(const wxString & directory)
	static int _bind_base_SetDirectory(lua_State *L) {
		if (!_lg_typecheck_base_SetDirectory(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetDirectory(const wxString & directory) function, expected prototype:\nvoid wxFileDialog::base_SetDirectory(const wxString & directory)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString directory(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetDirectory(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetDirectory(directory);

		return 0;
	}

	// void wxFileDialog::base_SetFilename(const wxString & setfilename)
	static int _bind_base_SetFilename(lua_State *L) {
		if (!_lg_typecheck_base_SetFilename(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetFilename(const wxString & setfilename) function, expected prototype:\nvoid wxFileDialog::base_SetFilename(const wxString & setfilename)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString setfilename(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetFilename(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetFilename(setfilename);

		return 0;
	}

	// void wxFileDialog::base_SetFilterIndex(int filterIndex)
	static int _bind_base_SetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_base_SetFilterIndex(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetFilterIndex(int filterIndex) function, expected prototype:\nvoid wxFileDialog::base_SetFilterIndex(int filterIndex)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int filterIndex=(int)lua_tointeger(L,2);

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetFilterIndex(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetFilterIndex(filterIndex);

		return 0;
	}

	// void wxFileDialog::base_SetMessage(const wxString & message)
	static int _bind_base_SetMessage(lua_State *L) {
		if (!_lg_typecheck_base_SetMessage(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetMessage(const wxString & message) function, expected prototype:\nvoid wxFileDialog::base_SetMessage(const wxString & message)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString message(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetMessage(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetMessage(message);

		return 0;
	}

	// void wxFileDialog::base_SetPath(const wxString & path)
	static int _bind_base_SetPath(lua_State *L) {
		if (!_lg_typecheck_base_SetPath(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetPath(const wxString & path) function, expected prototype:\nvoid wxFileDialog::base_SetPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetPath(path);

		return 0;
	}

	// void wxFileDialog::base_SetWildcard(const wxString & wildCard)
	static int _bind_base_SetWildcard(lua_State *L) {
		if (!_lg_typecheck_base_SetWildcard(L)) {
			luaL_error(L, "luna typecheck failed in void wxFileDialog::base_SetWildcard(const wxString & wildCard) function, expected prototype:\nvoid wxFileDialog::base_SetWildcard(const wxString & wildCard)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString wildCard(lua_tostring(L,2),lua_objlen(L,2));

		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxFileDialog::base_SetWildcard(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxFileDialog::SetWildcard(wildCard);

		return 0;
	}

	// int wxFileDialog::base_ShowModal()
	static int _bind_base_ShowModal(lua_State *L) {
		if (!_lg_typecheck_base_ShowModal(L)) {
			luaL_error(L, "luna typecheck failed in int wxFileDialog::base_ShowModal() function, expected prototype:\nint wxFileDialog::base_ShowModal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxFileDialog* self=Luna< wxObject >::checkSubType< wxFileDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxFileDialog::base_ShowModal(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxFileDialog::ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxFileDialog* LunaTraits< wxFileDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxFileDialog::_bind_ctor(L);
}

void LunaTraits< wxFileDialog >::_bind_dtor(wxFileDialog* obj) {
	delete obj;
}

const char LunaTraits< wxFileDialog >::className[] = "wxFileDialog";
const char LunaTraits< wxFileDialog >::fullName[] = "wxFileDialog";
const char LunaTraits< wxFileDialog >::moduleName[] = "wx";
const char* LunaTraits< wxFileDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxFileDialog >::hash = 63975219;
const int LunaTraits< wxFileDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxFileDialog >::methods[] = {
	{"GetDirectory", &luna_wrapper_wxFileDialog::_bind_GetDirectory},
	{"GetExtraControl", &luna_wrapper_wxFileDialog::_bind_GetExtraControl},
	{"GetFilename", &luna_wrapper_wxFileDialog::_bind_GetFilename},
	{"GetFilenames", &luna_wrapper_wxFileDialog::_bind_GetFilenames},
	{"GetFilterIndex", &luna_wrapper_wxFileDialog::_bind_GetFilterIndex},
	{"GetMessage", &luna_wrapper_wxFileDialog::_bind_GetMessage},
	{"GetPath", &luna_wrapper_wxFileDialog::_bind_GetPath},
	{"GetPaths", &luna_wrapper_wxFileDialog::_bind_GetPaths},
	{"GetWildcard", &luna_wrapper_wxFileDialog::_bind_GetWildcard},
	{"SetDirectory", &luna_wrapper_wxFileDialog::_bind_SetDirectory},
	{"SetFilename", &luna_wrapper_wxFileDialog::_bind_SetFilename},
	{"SetFilterIndex", &luna_wrapper_wxFileDialog::_bind_SetFilterIndex},
	{"SetMessage", &luna_wrapper_wxFileDialog::_bind_SetMessage},
	{"SetPath", &luna_wrapper_wxFileDialog::_bind_SetPath},
	{"SetWildcard", &luna_wrapper_wxFileDialog::_bind_SetWildcard},
	{"ShowModal", &luna_wrapper_wxFileDialog::_bind_ShowModal},
	{"base_GetClassInfo", &luna_wrapper_wxFileDialog::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxFileDialog::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxFileDialog::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxFileDialog::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxFileDialog::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxFileDialog::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxFileDialog::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxFileDialog::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxFileDialog::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxFileDialog::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxFileDialog::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxFileDialog::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxFileDialog::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxFileDialog::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxFileDialog::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxFileDialog::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxFileDialog::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxFileDialog::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxFileDialog::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxFileDialog::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxFileDialog::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxFileDialog::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxFileDialog::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxFileDialog::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxFileDialog::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxFileDialog::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxFileDialog::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxFileDialog::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxFileDialog::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxFileDialog::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxFileDialog::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxFileDialog::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxFileDialog::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxFileDialog::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxFileDialog::_bind_base_SetMaxClientSize},
	{"base_SetMinClientSize", &luna_wrapper_wxFileDialog::_bind_base_SetMinClientSize},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxFileDialog::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxFileDialog::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxFileDialog::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxFileDialog::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxFileDialog::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxFileDialog::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxFileDialog::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxFileDialog::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxFileDialog::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxFileDialog::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxFileDialog::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxFileDialog::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxFileDialog::_bind_base_GetThemeEnabled},
	{"base_SetNextHandler", &luna_wrapper_wxFileDialog::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxFileDialog::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxFileDialog::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxFileDialog::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxFileDialog::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxFileDialog::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxFileDialog::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxFileDialog::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxFileDialog::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxFileDialog::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxFileDialog::_bind_base_Enable},
	{"base_ShowWithEffect", &luna_wrapper_wxFileDialog::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxFileDialog::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxFileDialog::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxFileDialog::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxFileDialog::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxFileDialog::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxFileDialog::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxFileDialog::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxFileDialog::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxFileDialog::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxFileDialog::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxFileDialog::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxFileDialog::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxFileDialog::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxFileDialog::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxFileDialog::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxFileDialog::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxFileDialog::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxFileDialog::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxFileDialog::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxFileDialog::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxFileDialog::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxFileDialog::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxFileDialog::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxFileDialog::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxFileDialog::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxFileDialog::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxFileDialog::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxFileDialog::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxFileDialog::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxFileDialog::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxFileDialog::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxFileDialog::_bind_base_UpdateWindowUI},
	{"base_CanSetTransparent", &luna_wrapper_wxFileDialog::_bind_base_CanSetTransparent},
	{"base_EnableCloseButton", &luna_wrapper_wxFileDialog::_bind_base_EnableCloseButton},
	{"base_GetTitle", &luna_wrapper_wxFileDialog::_bind_base_GetTitle},
	{"base_IsActive", &luna_wrapper_wxFileDialog::_bind_base_IsActive},
	{"base_IsAlwaysMaximized", &luna_wrapper_wxFileDialog::_bind_base_IsAlwaysMaximized},
	{"base_IsFullScreen", &luna_wrapper_wxFileDialog::_bind_base_IsFullScreen},
	{"base_IsMaximized", &luna_wrapper_wxFileDialog::_bind_base_IsMaximized},
	{"base_Layout", &luna_wrapper_wxFileDialog::_bind_base_Layout},
	{"base_Maximize", &luna_wrapper_wxFileDialog::_bind_base_Maximize},
	{"base_RequestUserAttention", &luna_wrapper_wxFileDialog::_bind_base_RequestUserAttention},
	{"base_SetMaxSize", &luna_wrapper_wxFileDialog::_bind_base_SetMaxSize},
	{"base_SetMinSize", &luna_wrapper_wxFileDialog::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxFileDialog::_bind_base_SetSizeHints},
	{"base_SetTitle", &luna_wrapper_wxFileDialog::_bind_base_SetTitle},
	{"base_SetTransparent", &luna_wrapper_wxFileDialog::_bind_base_SetTransparent},
	{"base_ShouldPreventAppExit", &luna_wrapper_wxFileDialog::_bind_base_ShouldPreventAppExit},
	{"base_OSXSetModified", &luna_wrapper_wxFileDialog::_bind_base_OSXSetModified},
	{"base_OSXIsModified", &luna_wrapper_wxFileDialog::_bind_base_OSXIsModified},
	{"base_ShowFullScreen", &luna_wrapper_wxFileDialog::_bind_base_ShowFullScreen},
	{"base_CanDoLayoutAdaptation", &luna_wrapper_wxFileDialog::_bind_base_CanDoLayoutAdaptation},
	{"base_DoLayoutAdaptation", &luna_wrapper_wxFileDialog::_bind_base_DoLayoutAdaptation},
	{"base_EndModal", &luna_wrapper_wxFileDialog::_bind_base_EndModal},
	{"base_GetContentWindow", &luna_wrapper_wxFileDialog::_bind_base_GetContentWindow},
	{"base_Iconize", &luna_wrapper_wxFileDialog::_bind_base_Iconize},
	{"base_IsIconized", &luna_wrapper_wxFileDialog::_bind_base_IsIconized},
	{"base_IsModal", &luna_wrapper_wxFileDialog::_bind_base_IsModal},
	{"base_SetIcons", &luna_wrapper_wxFileDialog::_bind_base_SetIcons},
	{"base_Show", &luna_wrapper_wxFileDialog::_bind_base_Show},
	{"base_GetDirectory", &luna_wrapper_wxFileDialog::_bind_base_GetDirectory},
	{"base_GetFilename", &luna_wrapper_wxFileDialog::_bind_base_GetFilename},
	{"base_GetFilenames", &luna_wrapper_wxFileDialog::_bind_base_GetFilenames},
	{"base_GetFilterIndex", &luna_wrapper_wxFileDialog::_bind_base_GetFilterIndex},
	{"base_GetMessage", &luna_wrapper_wxFileDialog::_bind_base_GetMessage},
	{"base_GetPath", &luna_wrapper_wxFileDialog::_bind_base_GetPath},
	{"base_GetPaths", &luna_wrapper_wxFileDialog::_bind_base_GetPaths},
	{"base_GetWildcard", &luna_wrapper_wxFileDialog::_bind_base_GetWildcard},
	{"base_SetDirectory", &luna_wrapper_wxFileDialog::_bind_base_SetDirectory},
	{"base_SetFilename", &luna_wrapper_wxFileDialog::_bind_base_SetFilename},
	{"base_SetFilterIndex", &luna_wrapper_wxFileDialog::_bind_base_SetFilterIndex},
	{"base_SetMessage", &luna_wrapper_wxFileDialog::_bind_base_SetMessage},
	{"base_SetPath", &luna_wrapper_wxFileDialog::_bind_base_SetPath},
	{"base_SetWildcard", &luna_wrapper_wxFileDialog::_bind_base_SetWildcard},
	{"base_ShowModal", &luna_wrapper_wxFileDialog::_bind_base_ShowModal},
	{"fromVoid", &luna_wrapper_wxFileDialog::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxFileDialog::_bind_asVoid},
	{"getTable", &luna_wrapper_wxFileDialog::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxFileDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxFileDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxFileDialog >::enumValues[] = {
	{0,0}
};


