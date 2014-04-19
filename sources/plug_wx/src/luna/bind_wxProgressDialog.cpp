#include <plug_common.h>

#include <luna/wrappers/wrapper_wxProgressDialog.h>

class luna_wrapper_wxProgressDialog {
public:
	typedef Luna< wxProgressDialog > luna_t;

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

		wxProgressDialog* self= (wxProgressDialog*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxProgressDialog >::push(L,self,false);
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
		//wxProgressDialog* ptr= dynamic_cast< wxProgressDialog* >(Luna< wxObject >::check(L,1));
		wxProgressDialog* ptr= luna_caster< wxObject, wxProgressDialog >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxProgressDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,4)) ) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,5)) ) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRange(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Pulse(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Resume(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WasCancelled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WasSkipped(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Update(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
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

	inline static bool _lg_typecheck_base_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Pulse(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Update(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxProgressDialog::wxProgressDialog(const wxString & title, const wxString & message, int maximum = 100, wxWindow * parent = NULL, int style = 0x0004|0x0002)
	static wxProgressDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxProgressDialog::wxProgressDialog(const wxString & title, const wxString & message, int maximum = 100, wxWindow * parent = NULL, int style = 0x0004|0x0002) function, expected prototype:\nwxProgressDialog::wxProgressDialog(const wxString & title, const wxString & message, int maximum = 100, wxWindow * parent = NULL, int style = 0x0004|0x0002)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,1),lua_objlen(L,1));
		wxString message(lua_tostring(L,2),lua_objlen(L,2));
		int maximum=luatop>2 ? (int)lua_tointeger(L,3) : (int)100;
		wxWindow* parent=luatop>3 ? (Luna< wxObject >::checkSubType< wxWindow >(L,4)) : (wxWindow*)NULL;
		int style=luatop>4 ? (int)lua_tointeger(L,5) : (int)0x0004|0x0002;

		return new wxProgressDialog(title, message, maximum, parent, style);
	}

	// wxProgressDialog::wxProgressDialog(lua_Table * data, const wxString & title, const wxString & message, int maximum = 100, wxWindow * parent = NULL, int style = 0x0004|0x0002)
	static wxProgressDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxProgressDialog::wxProgressDialog(lua_Table * data, const wxString & title, const wxString & message, int maximum = 100, wxWindow * parent = NULL, int style = 0x0004|0x0002) function, expected prototype:\nwxProgressDialog::wxProgressDialog(lua_Table * data, const wxString & title, const wxString & message, int maximum = 100, wxWindow * parent = NULL, int style = 0x0004|0x0002)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\narg 5 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,2),lua_objlen(L,2));
		wxString message(lua_tostring(L,3),lua_objlen(L,3));
		int maximum=luatop>3 ? (int)lua_tointeger(L,4) : (int)100;
		wxWindow* parent=luatop>4 ? (Luna< wxObject >::checkSubType< wxWindow >(L,5)) : (wxWindow*)NULL;
		int style=luatop>5 ? (int)lua_tointeger(L,6) : (int)0x0004|0x0002;

		return new wrapper_wxProgressDialog(L,NULL, title, message, maximum, parent, style);
	}

	// Overload binder for wxProgressDialog::wxProgressDialog
	static wxProgressDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxProgressDialog, cannot match any of the overloads for function wxProgressDialog:\n  wxProgressDialog(const wxString &, const wxString &, int, wxWindow *, int)\n  wxProgressDialog(lua_Table *, const wxString &, const wxString &, int, wxWindow *, int)\n");
		return NULL;
	}


	// Function binds:
	// int wxProgressDialog::GetValue() const
	static int _bind_GetValue(lua_State *L) {
		if (!_lg_typecheck_GetValue(L)) {
			luaL_error(L, "luna typecheck failed in int wxProgressDialog::GetValue() const function, expected prototype:\nint wxProgressDialog::GetValue() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxProgressDialog::GetValue() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetValue();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxProgressDialog::GetRange() const
	static int _bind_GetRange(lua_State *L) {
		if (!_lg_typecheck_GetRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxProgressDialog::GetRange() const function, expected prototype:\nint wxProgressDialog::GetRange() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxProgressDialog::GetRange() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRange();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxProgressDialog::GetMessage() const
	static int _bind_GetMessage(lua_State *L) {
		if (!_lg_typecheck_GetMessage(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxProgressDialog::GetMessage() const function, expected prototype:\nwxString wxProgressDialog::GetMessage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxProgressDialog::GetMessage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetMessage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxProgressDialog::Pulse(const wxString & newmsg = wxEmptyString, bool * skip = NULL)
	static int _bind_Pulse(lua_State *L) {
		if (!_lg_typecheck_Pulse(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::Pulse(const wxString & newmsg = wxEmptyString, bool * skip = NULL) function, expected prototype:\nbool wxProgressDialog::Pulse(const wxString & newmsg = wxEmptyString, bool * skip = NULL)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString newmsg(lua_tostring(L,2),lua_objlen(L,2));
		bool* skip=luatop>2 ? (bool*)(Luna< void >::check(L,3)) : (bool*)NULL;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::Pulse(const wxString &, bool *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Pulse(newmsg, skip);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::Resume()
	static int _bind_Resume(lua_State *L) {
		if (!_lg_typecheck_Resume(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::Resume() function, expected prototype:\nvoid wxProgressDialog::Resume()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::Resume(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Resume();

		return 0;
	}

	// void wxProgressDialog::SetRange(int maximum)
	static int _bind_SetRange(lua_State *L) {
		if (!_lg_typecheck_SetRange(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::SetRange(int maximum) function, expected prototype:\nvoid wxProgressDialog::SetRange(int maximum)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int maximum=(int)lua_tointeger(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::SetRange(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRange(maximum);

		return 0;
	}

	// bool wxProgressDialog::WasCancelled() const
	static int _bind_WasCancelled(lua_State *L) {
		if (!_lg_typecheck_WasCancelled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::WasCancelled() const function, expected prototype:\nbool wxProgressDialog::WasCancelled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::WasCancelled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WasCancelled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::WasSkipped() const
	static int _bind_WasSkipped(lua_State *L) {
		if (!_lg_typecheck_WasSkipped(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::WasSkipped() const function, expected prototype:\nbool wxProgressDialog::WasSkipped() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::WasSkipped() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->WasSkipped();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::Update(int value, const wxString & newmsg = wxEmptyString, bool * skip = NULL)
	static int _bind_Update(lua_State *L) {
		if (!_lg_typecheck_Update(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::Update(int value, const wxString & newmsg = wxEmptyString, bool * skip = NULL) function, expected prototype:\nbool wxProgressDialog::Update(int value, const wxString & newmsg = wxEmptyString, bool * skip = NULL)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int value=(int)lua_tointeger(L,2);
		wxString newmsg(lua_tostring(L,3),lua_objlen(L,3));
		bool* skip=luatop>3 ? (bool*)(Luna< void >::check(L,4)) : (bool*)NULL;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::Update(int, const wxString &, bool *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Update(value, newmsg, skip);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxProgressDialog::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxProgressDialog::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxProgressDialog::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxProgressDialog::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxProgressDialog::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxProgressDialog::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_AcceptsFocus() const function, expected prototype:\nbool wxProgressDialog::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxProgressDialog::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxProgressDialog::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_HasFocus() const function, expected prototype:\nbool wxProgressDialog::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxProgressDialog::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetCanFocus(canFocus);

		return 0;
	}

	// void wxProgressDialog::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetFocus() function, expected prototype:\nvoid wxProgressDialog::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetFocus();

		return 0;
	}

	// void wxProgressDialog::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetFocusFromKbd() function, expected prototype:\nvoid wxProgressDialog::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetFocusFromKbd();

		return 0;
	}

	// void wxProgressDialog::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxProgressDialog::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::AddChild(child);

		return 0;
	}

	// void wxProgressDialog::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxProgressDialog::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::RemoveChild(child);

		return 0;
	}

	// bool wxProgressDialog::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxProgressDialog::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxProgressDialog::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxProgressDialog::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxProgressDialog::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxProgressDialog::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxProgressDialog::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxProgressDialog::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxProgressDialog::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxProgressDialog::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxProgressDialog::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxProgressDialog::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxProgressDialog::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxProgressDialog::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxProgressDialog::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxProgressDialog::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxProgressDialog::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxProgressDialog::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxProgressDialog::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxProgressDialog::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_ScrollLines(int lines) function, expected prototype:\nbool wxProgressDialog::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_ScrollPages(int pages) function, expected prototype:\nbool wxProgressDialog::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxProgressDialog::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxProgressDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxProgressDialog::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxProgressDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxProgressDialog::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxProgressDialog::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxProgressDialog::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxProgressDialog::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxProgressDialog::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxProgressDialog::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxProgressDialog::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxProgressDialog::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxProgressDialog::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxProgressDialog::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxProgressDialog::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxProgressDialog::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxProgressDialog::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxProgressDialog::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_Fit() function, expected prototype:\nvoid wxProgressDialog::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::Fit();

		return 0;
	}

	// void wxProgressDialog::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_FitInside() function, expected prototype:\nvoid wxProgressDialog::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::FitInside();

		return 0;
	}

	// wxSize wxProgressDialog::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxProgressDialog::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxProgressDialog::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxProgressDialog::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxProgressDialog::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxProgressDialog::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxProgressDialog::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxProgressDialog::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxProgressDialog::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxProgressDialog::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxProgressDialog::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxProgressDialog::base_GetMaxSize() const function, expected prototype:\nwxSize wxProgressDialog::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxProgressDialog::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxProgressDialog::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxProgressDialog::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxProgressDialog::base_GetMinClientSize() const function, expected prototype:\nwxSize wxProgressDialog::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxProgressDialog::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxProgressDialog::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxProgressDialog::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxProgressDialog::base_GetMinSize() const function, expected prototype:\nwxSize wxProgressDialog::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxProgressDialog::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxProgressDialog::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxProgressDialog::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxProgressDialog::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxProgressDialog::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxProgressDialog::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxProgressDialog::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxProgressDialog::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxProgressDialog::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxProgressDialog::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxProgressDialog::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxProgressDialog::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxProgressDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxProgressDialog::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxProgressDialog::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SendSizeEvent(flags);

		return 0;
	}

	// void wxProgressDialog::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxProgressDialog::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxProgressDialog::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetMaxClientSize(size);

		return 0;
	}

	// void wxProgressDialog::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxProgressDialog::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxProgressDialog::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetMinClientSize(size);

		return 0;
	}

	// wxPoint wxProgressDialog::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxProgressDialog::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxProgressDialog::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxProgressDialog::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxProgressDialog::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxProgressDialog::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_ClearBackground() function, expected prototype:\nvoid wxProgressDialog::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxProgressDialog::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxProgressDialog::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxProgressDialog::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxProgressDialog::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxProgressDialog::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxProgressDialog::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxProgressDialog::base_GetCharHeight() const function, expected prototype:\nint wxProgressDialog::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxProgressDialog::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxProgressDialog::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxProgressDialog::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxProgressDialog::base_GetCharWidth() const function, expected prototype:\nint wxProgressDialog::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxProgressDialog::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxProgressDialog::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxProgressDialog::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxProgressDialog::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxProgressDialog::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxProgressDialog::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxProgressDialog::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxProgressDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxProgressDialog::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::Refresh(eraseBackground, rect);

		return 0;
	}

	// bool wxProgressDialog::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxProgressDialog::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxProgressDialog::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxProgressDialog::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_ShouldInheritColours() const function, expected prototype:\nbool wxProgressDialog::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxProgressDialog::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxProgressDialog::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_GetThemeEnabled() const function, expected prototype:\nbool wxProgressDialog::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxProgressDialog::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetNextHandler(handler);

		return 0;
	}

	// void wxProgressDialog::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxProgressDialog::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetPreviousHandler(handler);

		return 0;
	}

	// long wxProgressDialog::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxProgressDialog::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxProgressDialog::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxProgressDialog::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxProgressDialog::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxProgressDialog::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxProgressDialog::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxProgressDialog::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxProgressDialog::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxProgressDialog::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_Lower() function, expected prototype:\nvoid wxProgressDialog::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::Lower();

		return 0;
	}

	// void wxProgressDialog::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_Raise() function, expected prototype:\nvoid wxProgressDialog::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::Raise();

		return 0;
	}

	// bool wxProgressDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxProgressDialog::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsShown() const function, expected prototype:\nbool wxProgressDialog::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsShownOnScreen() const function, expected prototype:\nbool wxProgressDialog::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_Enable(bool enable = true) function, expected prototype:\nbool wxProgressDialog::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxProgressDialog::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxProgressDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxProgressDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxProgressDialog::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxProgressDialog::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxProgressDialog::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxProgressDialog::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxProgressDialog::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxProgressDialog::base_GetValidator() function, expected prototype:\nwxValidator * wxProgressDialog::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxProgressDialog::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxProgressDialog::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxProgressDialog::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxProgressDialog::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxProgressDialog::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetValidator(validator);

		return 0;
	}

	// bool wxProgressDialog::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_TransferDataFromWindow() function, expected prototype:\nbool wxProgressDialog::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_TransferDataToWindow() function, expected prototype:\nbool wxProgressDialog::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_Validate() function, expected prototype:\nbool wxProgressDialog::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxProgressDialog::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxProgressDialog::base_GetLabel() const function, expected prototype:\nwxString wxProgressDialog::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxProgressDialog::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxProgressDialog::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxProgressDialog::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxProgressDialog::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxProgressDialog::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxProgressDialog::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxProgressDialog::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxProgressDialog::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxProgressDialog::base_GetName() const function, expected prototype:\nwxString wxProgressDialog::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxProgressDialog::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxProgressDialog::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxProgressDialog::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxProgressDialog::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetLabel(label);

		return 0;
	}

	// void wxProgressDialog::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxProgressDialog::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetLayoutDirection(dir);

		return 0;
	}

	// void wxProgressDialog::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetName(const wxString & name) function, expected prototype:\nvoid wxProgressDialog::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetName(name);

		return 0;
	}

	// void wxProgressDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxProgressDialog::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxProgressDialog::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxProgressDialog::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_Destroy() function, expected prototype:\nbool wxProgressDialog::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxProgressDialog::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxProgressDialog::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxProgressDialog::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxProgressDialog::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxProgressDialog::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxProgressDialog::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxProgressDialog::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetDropTarget(target);

		return 0;
	}

	// void wxProgressDialog::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxProgressDialog::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxProgressDialog::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_HasCapture() const function, expected prototype:\nbool wxProgressDialog::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxProgressDialog::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxProgressDialog::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxProgressDialog::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::WarpPointer(x, y);

		return 0;
	}

	// void wxProgressDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxProgressDialog::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxProgressDialog::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxProgressDialog::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxProgressDialog::base_GetHandle() const function, expected prototype:\nHWND wxProgressDialog::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxProgressDialog::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxProgressDialog::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxProgressDialog::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_HasMultiplePages() const function, expected prototype:\nbool wxProgressDialog::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_InheritAttributes() function, expected prototype:\nvoid wxProgressDialog::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::InheritAttributes();

		return 0;
	}

	// void wxProgressDialog::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_InitDialog() function, expected prototype:\nvoid wxProgressDialog::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::InitDialog();

		return 0;
	}

	// bool wxProgressDialog::base_IsDoubleBuffered() const
	static int _bind_base_IsDoubleBuffered(lua_State *L) {
		if (!_lg_typecheck_base_IsDoubleBuffered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsDoubleBuffered() const function, expected prototype:\nbool wxProgressDialog::base_IsDoubleBuffered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsDoubleBuffered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsDoubleBuffered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsRetained() const function, expected prototype:\nbool wxProgressDialog::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsTopLevel() const function, expected prototype:\nbool wxProgressDialog::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxProgressDialog::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::MakeModal(modal);

		return 0;
	}

	// void wxProgressDialog::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_OnInternalIdle() function, expected prototype:\nvoid wxProgressDialog::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::OnInternalIdle();

		return 0;
	}

	// bool wxProgressDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxProgressDialog::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxProgressDialog::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxProgressDialog::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxProgressDialog::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_CanSetTransparent() function, expected prototype:\nbool wxProgressDialog::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_EnableCloseButton(bool enable = true)
	static int _bind_base_EnableCloseButton(lua_State *L) {
		if (!_lg_typecheck_base_EnableCloseButton(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_EnableCloseButton(bool enable = true) function, expected prototype:\nbool wxProgressDialog::base_EnableCloseButton(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_EnableCloseButton(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::EnableCloseButton(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxProgressDialog::base_GetTitle() const
	static int _bind_base_GetTitle(lua_State *L) {
		if (!_lg_typecheck_base_GetTitle(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxProgressDialog::base_GetTitle() const function, expected prototype:\nwxString wxProgressDialog::base_GetTitle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxProgressDialog::base_GetTitle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxProgressDialog::GetTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxProgressDialog::base_IsActive()
	static int _bind_base_IsActive(lua_State *L) {
		if (!_lg_typecheck_base_IsActive(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsActive() function, expected prototype:\nbool wxProgressDialog::base_IsActive()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsActive(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsActive();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_IsAlwaysMaximized() const
	static int _bind_base_IsAlwaysMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsAlwaysMaximized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsAlwaysMaximized() const function, expected prototype:\nbool wxProgressDialog::base_IsAlwaysMaximized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsAlwaysMaximized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsAlwaysMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_IsFullScreen() const
	static int _bind_base_IsFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsFullScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsFullScreen() const function, expected prototype:\nbool wxProgressDialog::base_IsFullScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsFullScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsFullScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_IsMaximized() const
	static int _bind_base_IsMaximized(lua_State *L) {
		if (!_lg_typecheck_base_IsMaximized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsMaximized() const function, expected prototype:\nbool wxProgressDialog::base_IsMaximized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsMaximized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsMaximized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_Layout() function, expected prototype:\nbool wxProgressDialog::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_Maximize(bool maximize = true)
	static int _bind_base_Maximize(lua_State *L) {
		if (!_lg_typecheck_base_Maximize(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_Maximize(bool maximize = true) function, expected prototype:\nvoid wxProgressDialog::base_Maximize(bool maximize = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool maximize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_Maximize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::Maximize(maximize);

		return 0;
	}

	// void wxProgressDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	static int _bind_base_RequestUserAttention(lua_State *L) {
		if (!_lg_typecheck_base_RequestUserAttention(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) function, expected prototype:\nvoid wxProgressDialog::base_RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxUSER_ATTENTION_INFO;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_RequestUserAttention(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::RequestUserAttention(flags);

		return 0;
	}

	// void wxProgressDialog::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxProgressDialog::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxProgressDialog::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetMaxSize(size);

		return 0;
	}

	// void wxProgressDialog::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxProgressDialog::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxProgressDialog::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetMinSize(size);

		return 0;
	}

	// void wxProgressDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxProgressDialog::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// void wxProgressDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxProgressDialog::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxProgressDialog::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxProgressDialog::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxProgressDialog::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// Overload binder for wxProgressDialog::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(int, int, int, int, int, int)\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n");
		return 0;
	}

	// void wxProgressDialog::base_SetTitle(const wxString & title)
	static int _bind_base_SetTitle(lua_State *L) {
		if (!_lg_typecheck_base_SetTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetTitle(const wxString & title) function, expected prototype:\nvoid wxProgressDialog::base_SetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetTitle(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetTitle(title);

		return 0;
	}

	// bool wxProgressDialog::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxProgressDialog::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_ShouldPreventAppExit() const
	static int _bind_base_ShouldPreventAppExit(lua_State *L) {
		if (!_lg_typecheck_base_ShouldPreventAppExit(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_ShouldPreventAppExit() const function, expected prototype:\nbool wxProgressDialog::base_ShouldPreventAppExit() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_ShouldPreventAppExit() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::ShouldPreventAppExit();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_OSXSetModified(bool modified)
	static int _bind_base_OSXSetModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXSetModified(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_OSXSetModified(bool modified) function, expected prototype:\nvoid wxProgressDialog::base_OSXSetModified(bool modified)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool modified=(bool)(lua_toboolean(L,2)==1);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_OSXSetModified(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::OSXSetModified(modified);

		return 0;
	}

	// bool wxProgressDialog::base_OSXIsModified() const
	static int _bind_base_OSXIsModified(lua_State *L) {
		if (!_lg_typecheck_base_OSXIsModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_OSXIsModified() const function, expected prototype:\nbool wxProgressDialog::base_OSXIsModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_OSXIsModified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::OSXIsModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	static int _bind_base_ShowFullScreen(lua_State *L) {
		if (!_lg_typecheck_base_ShowFullScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) function, expected prototype:\nbool wxProgressDialog::base_ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=(bool)(lua_toboolean(L,2)==1);
		long style=luatop>2 ? (long)lua_tonumber(L,3) : (long)::wxFULLSCREEN_ALL;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_ShowFullScreen(bool, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::ShowFullScreen(show, style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_CanDoLayoutAdaptation()
	static int _bind_base_CanDoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_base_CanDoLayoutAdaptation(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_CanDoLayoutAdaptation() function, expected prototype:\nbool wxProgressDialog::base_CanDoLayoutAdaptation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_CanDoLayoutAdaptation(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::CanDoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_DoLayoutAdaptation()
	static int _bind_base_DoLayoutAdaptation(lua_State *L) {
		if (!_lg_typecheck_base_DoLayoutAdaptation(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_DoLayoutAdaptation() function, expected prototype:\nbool wxProgressDialog::base_DoLayoutAdaptation()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_DoLayoutAdaptation(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::DoLayoutAdaptation();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_EndModal(int retCode)
	static int _bind_base_EndModal(lua_State *L) {
		if (!_lg_typecheck_base_EndModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_EndModal(int retCode) function, expected prototype:\nvoid wxProgressDialog::base_EndModal(int retCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int retCode=(int)lua_tointeger(L,2);

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_EndModal(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::EndModal(retCode);

		return 0;
	}

	// wxWindow * wxProgressDialog::base_GetContentWindow() const
	static int _bind_base_GetContentWindow(lua_State *L) {
		if (!_lg_typecheck_base_GetContentWindow(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxProgressDialog::base_GetContentWindow() const function, expected prototype:\nwxWindow * wxProgressDialog::base_GetContentWindow() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxProgressDialog::base_GetContentWindow() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->wxProgressDialog::GetContentWindow();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// void wxProgressDialog::base_Iconize(bool iconize = true)
	static int _bind_base_Iconize(lua_State *L) {
		if (!_lg_typecheck_base_Iconize(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_Iconize(bool iconize = true) function, expected prototype:\nvoid wxProgressDialog::base_Iconize(bool iconize = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool iconize=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_Iconize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::Iconize(iconize);

		return 0;
	}

	// bool wxProgressDialog::base_IsIconized() const
	static int _bind_base_IsIconized(lua_State *L) {
		if (!_lg_typecheck_base_IsIconized(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsIconized() const function, expected prototype:\nbool wxProgressDialog::base_IsIconized() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsIconized() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsIconized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_IsModal() const
	static int _bind_base_IsModal(lua_State *L) {
		if (!_lg_typecheck_base_IsModal(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_IsModal() const function, expected prototype:\nbool wxProgressDialog::base_IsModal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_IsModal() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::IsModal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxProgressDialog::base_SetIcons(const wxIconBundle & icons)
	static int _bind_base_SetIcons(lua_State *L) {
		if (!_lg_typecheck_base_SetIcons(L)) {
			luaL_error(L, "luna typecheck failed in void wxProgressDialog::base_SetIcons(const wxIconBundle & icons) function, expected prototype:\nvoid wxProgressDialog::base_SetIcons(const wxIconBundle & icons)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxIconBundle* icons_ptr=(Luna< wxObject >::checkSubType< wxIconBundle >(L,2));
		if( !icons_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icons in wxProgressDialog::base_SetIcons function");
		}
		const wxIconBundle & icons=*icons_ptr;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxProgressDialog::base_SetIcons(const wxIconBundle &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxProgressDialog::SetIcons(icons);

		return 0;
	}

	// bool wxProgressDialog::base_Show(bool show = 1)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_Show(bool show = 1) function, expected prototype:\nbool wxProgressDialog::base_Show(bool show = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)1;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxProgressDialog::base_ShowModal()
	static int _bind_base_ShowModal(lua_State *L) {
		if (!_lg_typecheck_base_ShowModal(L)) {
			luaL_error(L, "luna typecheck failed in int wxProgressDialog::base_ShowModal() function, expected prototype:\nint wxProgressDialog::base_ShowModal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxProgressDialog::base_ShowModal(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxProgressDialog::ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxProgressDialog::base_Pulse(const wxString & newmsg = wxEmptyString, bool * skip = NULL)
	static int _bind_base_Pulse(lua_State *L) {
		if (!_lg_typecheck_base_Pulse(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_Pulse(const wxString & newmsg = wxEmptyString, bool * skip = NULL) function, expected prototype:\nbool wxProgressDialog::base_Pulse(const wxString & newmsg = wxEmptyString, bool * skip = NULL)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString newmsg(lua_tostring(L,2),lua_objlen(L,2));
		bool* skip=luatop>2 ? (bool*)(Luna< void >::check(L,3)) : (bool*)NULL;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_Pulse(const wxString &, bool *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::Pulse(newmsg, skip);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxProgressDialog::base_Update(int value, const wxString & newmsg = wxEmptyString, bool * skip = NULL)
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in bool wxProgressDialog::base_Update(int value, const wxString & newmsg = wxEmptyString, bool * skip = NULL) function, expected prototype:\nbool wxProgressDialog::base_Update(int value, const wxString & newmsg = wxEmptyString, bool * skip = NULL)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int value=(int)lua_tointeger(L,2);
		wxString newmsg(lua_tostring(L,3),lua_objlen(L,3));
		bool* skip=luatop>3 ? (bool*)(Luna< void >::check(L,4)) : (bool*)NULL;

		wxProgressDialog* self=Luna< wxObject >::checkSubType< wxProgressDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxProgressDialog::base_Update(int, const wxString &, bool *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxProgressDialog::Update(value, newmsg, skip);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxProgressDialog* LunaTraits< wxProgressDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxProgressDialog::_bind_ctor(L);
}

void LunaTraits< wxProgressDialog >::_bind_dtor(wxProgressDialog* obj) {
	delete obj;
}

const char LunaTraits< wxProgressDialog >::className[] = "wxProgressDialog";
const char LunaTraits< wxProgressDialog >::fullName[] = "wxProgressDialog";
const char LunaTraits< wxProgressDialog >::moduleName[] = "wx";
const char* LunaTraits< wxProgressDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxProgressDialog >::hash = 94975242;
const int LunaTraits< wxProgressDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxProgressDialog >::methods[] = {
	{"GetValue", &luna_wrapper_wxProgressDialog::_bind_GetValue},
	{"GetRange", &luna_wrapper_wxProgressDialog::_bind_GetRange},
	{"GetMessage", &luna_wrapper_wxProgressDialog::_bind_GetMessage},
	{"Pulse", &luna_wrapper_wxProgressDialog::_bind_Pulse},
	{"Resume", &luna_wrapper_wxProgressDialog::_bind_Resume},
	{"SetRange", &luna_wrapper_wxProgressDialog::_bind_SetRange},
	{"WasCancelled", &luna_wrapper_wxProgressDialog::_bind_WasCancelled},
	{"WasSkipped", &luna_wrapper_wxProgressDialog::_bind_WasSkipped},
	{"Update", &luna_wrapper_wxProgressDialog::_bind_Update},
	{"base_GetClassInfo", &luna_wrapper_wxProgressDialog::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxProgressDialog::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxProgressDialog::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxProgressDialog::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxProgressDialog::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxProgressDialog::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxProgressDialog::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxProgressDialog::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxProgressDialog::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxProgressDialog::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxProgressDialog::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxProgressDialog::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxProgressDialog::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxProgressDialog::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxProgressDialog::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxProgressDialog::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxProgressDialog::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxProgressDialog::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxProgressDialog::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxProgressDialog::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxProgressDialog::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxProgressDialog::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxProgressDialog::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxProgressDialog::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxProgressDialog::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxProgressDialog::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxProgressDialog::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxProgressDialog::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxProgressDialog::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxProgressDialog::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxProgressDialog::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxProgressDialog::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxProgressDialog::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxProgressDialog::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxProgressDialog::_bind_base_SetMaxClientSize},
	{"base_SetMinClientSize", &luna_wrapper_wxProgressDialog::_bind_base_SetMinClientSize},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxProgressDialog::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxProgressDialog::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxProgressDialog::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxProgressDialog::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxProgressDialog::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxProgressDialog::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxProgressDialog::_bind_base_Refresh},
	{"base_SetBackgroundStyle", &luna_wrapper_wxProgressDialog::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxProgressDialog::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxProgressDialog::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxProgressDialog::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxProgressDialog::_bind_base_GetThemeEnabled},
	{"base_SetNextHandler", &luna_wrapper_wxProgressDialog::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxProgressDialog::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxProgressDialog::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxProgressDialog::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxProgressDialog::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxProgressDialog::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxProgressDialog::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxProgressDialog::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxProgressDialog::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxProgressDialog::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxProgressDialog::_bind_base_Enable},
	{"base_ShowWithEffect", &luna_wrapper_wxProgressDialog::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxProgressDialog::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxProgressDialog::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxProgressDialog::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxProgressDialog::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxProgressDialog::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxProgressDialog::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxProgressDialog::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxProgressDialog::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxProgressDialog::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxProgressDialog::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxProgressDialog::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxProgressDialog::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxProgressDialog::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxProgressDialog::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxProgressDialog::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxProgressDialog::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxProgressDialog::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxProgressDialog::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxProgressDialog::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxProgressDialog::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxProgressDialog::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxProgressDialog::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxProgressDialog::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxProgressDialog::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxProgressDialog::_bind_base_InitDialog},
	{"base_IsDoubleBuffered", &luna_wrapper_wxProgressDialog::_bind_base_IsDoubleBuffered},
	{"base_IsRetained", &luna_wrapper_wxProgressDialog::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxProgressDialog::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxProgressDialog::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxProgressDialog::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxProgressDialog::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxProgressDialog::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxProgressDialog::_bind_base_UpdateWindowUI},
	{"base_CanSetTransparent", &luna_wrapper_wxProgressDialog::_bind_base_CanSetTransparent},
	{"base_EnableCloseButton", &luna_wrapper_wxProgressDialog::_bind_base_EnableCloseButton},
	{"base_GetTitle", &luna_wrapper_wxProgressDialog::_bind_base_GetTitle},
	{"base_IsActive", &luna_wrapper_wxProgressDialog::_bind_base_IsActive},
	{"base_IsAlwaysMaximized", &luna_wrapper_wxProgressDialog::_bind_base_IsAlwaysMaximized},
	{"base_IsFullScreen", &luna_wrapper_wxProgressDialog::_bind_base_IsFullScreen},
	{"base_IsMaximized", &luna_wrapper_wxProgressDialog::_bind_base_IsMaximized},
	{"base_Layout", &luna_wrapper_wxProgressDialog::_bind_base_Layout},
	{"base_Maximize", &luna_wrapper_wxProgressDialog::_bind_base_Maximize},
	{"base_RequestUserAttention", &luna_wrapper_wxProgressDialog::_bind_base_RequestUserAttention},
	{"base_SetMaxSize", &luna_wrapper_wxProgressDialog::_bind_base_SetMaxSize},
	{"base_SetMinSize", &luna_wrapper_wxProgressDialog::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxProgressDialog::_bind_base_SetSizeHints},
	{"base_SetTitle", &luna_wrapper_wxProgressDialog::_bind_base_SetTitle},
	{"base_SetTransparent", &luna_wrapper_wxProgressDialog::_bind_base_SetTransparent},
	{"base_ShouldPreventAppExit", &luna_wrapper_wxProgressDialog::_bind_base_ShouldPreventAppExit},
	{"base_OSXSetModified", &luna_wrapper_wxProgressDialog::_bind_base_OSXSetModified},
	{"base_OSXIsModified", &luna_wrapper_wxProgressDialog::_bind_base_OSXIsModified},
	{"base_ShowFullScreen", &luna_wrapper_wxProgressDialog::_bind_base_ShowFullScreen},
	{"base_CanDoLayoutAdaptation", &luna_wrapper_wxProgressDialog::_bind_base_CanDoLayoutAdaptation},
	{"base_DoLayoutAdaptation", &luna_wrapper_wxProgressDialog::_bind_base_DoLayoutAdaptation},
	{"base_EndModal", &luna_wrapper_wxProgressDialog::_bind_base_EndModal},
	{"base_GetContentWindow", &luna_wrapper_wxProgressDialog::_bind_base_GetContentWindow},
	{"base_Iconize", &luna_wrapper_wxProgressDialog::_bind_base_Iconize},
	{"base_IsIconized", &luna_wrapper_wxProgressDialog::_bind_base_IsIconized},
	{"base_IsModal", &luna_wrapper_wxProgressDialog::_bind_base_IsModal},
	{"base_SetIcons", &luna_wrapper_wxProgressDialog::_bind_base_SetIcons},
	{"base_Show", &luna_wrapper_wxProgressDialog::_bind_base_Show},
	{"base_ShowModal", &luna_wrapper_wxProgressDialog::_bind_base_ShowModal},
	{"base_Pulse", &luna_wrapper_wxProgressDialog::_bind_base_Pulse},
	{"base_Update", &luna_wrapper_wxProgressDialog::_bind_base_Update},
	{"fromVoid", &luna_wrapper_wxProgressDialog::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxProgressDialog::_bind_asVoid},
	{"getTable", &luna_wrapper_wxProgressDialog::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxProgressDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxProgressDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxProgressDialog >::enumValues[] = {
	{0,0}
};


