#include <plug_common.h>

#include <luna/wrappers/wrapper_wxMenuBar.h>

class luna_wrapper_wxMenuBar {
public:
	typedef Luna< wxMenuBar > luna_t;

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

		wxMenuBar* self= (wxMenuBar*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxMenuBar >::push(L,self,false);
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
		//wxMenuBar* ptr= dynamic_cast< wxMenuBar* >(Luna< wxObject >::check(L,1));
		wxMenuBar* ptr= luna_caster< wxObject, wxMenuBar >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxMenuBar >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Append(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Check(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnableTop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindMenuItem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHelpString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLabelTop(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMenu(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMenuCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMenuLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetMenuLabelText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Insert(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsChecked(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Refresh(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Replace(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetHelpString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabelTop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMenuLabel(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsAttached(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Attach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Detach(lua_State *L) {
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

	inline static bool _lg_typecheck_base_Append(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnableTop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_FindMenuItem(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetMenuLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetMenuLabelText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Insert(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Refresh(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Replace(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMenuLabel(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Attach(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Detach(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxMenuBar::wxMenuBar(long style = 0)
	static wxMenuBar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuBar::wxMenuBar(long style = 0) function, expected prototype:\nwxMenuBar::wxMenuBar(long style = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long style=luatop>0 ? (long)lua_tonumber(L,1) : (long)0;

		return new wxMenuBar(style);
	}

	// wxMenuBar::wxMenuBar(lua_Table * data, long style = 0)
	static wxMenuBar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxMenuBar::wxMenuBar(lua_Table * data, long style = 0) function, expected prototype:\nwxMenuBar::wxMenuBar(lua_Table * data, long style = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long style=luatop>1 ? (long)lua_tonumber(L,2) : (long)0;

		return new wrapper_wxMenuBar(L,NULL, style);
	}

	// Overload binder for wxMenuBar::wxMenuBar
	static wxMenuBar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxMenuBar, cannot match any of the overloads for function wxMenuBar:\n  wxMenuBar(long)\n  wxMenuBar(lua_Table *, long)\n");
		return NULL;
	}


	// Function binds:
	// bool wxMenuBar::Append(wxMenu * menu, const wxString & title)
	static int _bind_Append(lua_State *L) {
		if (!_lg_typecheck_Append(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::Append(wxMenu * menu, const wxString & title) function, expected prototype:\nbool wxMenuBar::Append(wxMenu * menu, const wxString & title)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));
		wxString title(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::Append(wxMenu *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Append(menu, title);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::Check(int id, bool check)
	static int _bind_Check(lua_State *L) {
		if (!_lg_typecheck_Check(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::Check(int id, bool check) function, expected prototype:\nvoid wxMenuBar::Check(int id, bool check)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		bool check=(bool)(lua_toboolean(L,3)==1);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::Check(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Check(id, check);

		return 0;
	}

	// void wxMenuBar::Enable(int id, bool enable)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::Enable(int id, bool enable) function, expected prototype:\nvoid wxMenuBar::Enable(int id, bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::Enable(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Enable(id, enable);

		return 0;
	}

	// void wxMenuBar::EnableTop(size_t pos, bool enable)
	static int _bind_EnableTop(lua_State *L) {
		if (!_lg_typecheck_EnableTop(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::EnableTop(size_t pos, bool enable) function, expected prototype:\nvoid wxMenuBar::EnableTop(size_t pos, bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::EnableTop(size_t, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnableTop(pos, enable);

		return 0;
	}

	// int wxMenuBar::FindMenu(const wxString & title) const
	static int _bind_FindMenu(lua_State *L) {
		if (!_lg_typecheck_FindMenu(L)) {
			luaL_error(L, "luna typecheck failed in int wxMenuBar::FindMenu(const wxString & title) const function, expected prototype:\nint wxMenuBar::FindMenu(const wxString & title) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMenuBar::FindMenu(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->FindMenu(title);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMenuBar::FindMenuItem(const wxString & menuString, const wxString & itemString) const
	static int _bind_FindMenuItem(lua_State *L) {
		if (!_lg_typecheck_FindMenuItem(L)) {
			luaL_error(L, "luna typecheck failed in int wxMenuBar::FindMenuItem(const wxString & menuString, const wxString & itemString) const function, expected prototype:\nint wxMenuBar::FindMenuItem(const wxString & menuString, const wxString & itemString) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString menuString(lua_tostring(L,2),lua_objlen(L,2));
		wxString itemString(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMenuBar::FindMenuItem(const wxString &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->FindMenuItem(menuString, itemString);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMenuBar::GetHelpString(int id) const
	static int _bind_GetHelpString(lua_State *L) {
		if (!_lg_typecheck_GetHelpString(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::GetHelpString(int id) const function, expected prototype:\nwxString wxMenuBar::GetHelpString(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::GetHelpString(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetHelpString(id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMenuBar::GetLabel(int id) const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::GetLabel(int id) const function, expected prototype:\nwxString wxMenuBar::GetLabel(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::GetLabel(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLabel(id);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMenuBar::GetLabelTop(size_t pos) const
	static int _bind_GetLabelTop(lua_State *L) {
		if (!_lg_typecheck_GetLabelTop(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::GetLabelTop(size_t pos) const function, expected prototype:\nwxString wxMenuBar::GetLabelTop(size_t pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::GetLabelTop(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLabelTop(pos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxMenu * wxMenuBar::GetMenu(size_t menuIndex) const
	static int _bind_GetMenu(lua_State *L) {
		if (!_lg_typecheck_GetMenu(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuBar::GetMenu(size_t menuIndex) const function, expected prototype:\nwxMenu * wxMenuBar::GetMenu(size_t menuIndex) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t menuIndex=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuBar::GetMenu(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenu * lret = self->GetMenu(menuIndex);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// size_t wxMenuBar::GetMenuCount() const
	static int _bind_GetMenuCount(lua_State *L) {
		if (!_lg_typecheck_GetMenuCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxMenuBar::GetMenuCount() const function, expected prototype:\nsize_t wxMenuBar::GetMenuCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxMenuBar::GetMenuCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetMenuCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMenuBar::GetMenuLabel(size_t pos) const
	static int _bind_GetMenuLabel(lua_State *L) {
		if (!_lg_typecheck_GetMenuLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::GetMenuLabel(size_t pos) const function, expected prototype:\nwxString wxMenuBar::GetMenuLabel(size_t pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::GetMenuLabel(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetMenuLabel(pos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMenuBar::GetMenuLabelText(size_t pos) const
	static int _bind_GetMenuLabelText(lua_State *L) {
		if (!_lg_typecheck_GetMenuLabelText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::GetMenuLabelText(size_t pos) const function, expected prototype:\nwxString wxMenuBar::GetMenuLabelText(size_t pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::GetMenuLabelText(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetMenuLabelText(pos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxMenuBar::Insert(size_t pos, wxMenu * menu, const wxString & title)
	static int _bind_Insert(lua_State *L) {
		if (!_lg_typecheck_Insert(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::Insert(size_t pos, wxMenu * menu, const wxString & title) function, expected prototype:\nbool wxMenuBar::Insert(size_t pos, wxMenu * menu, const wxString & title)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,3));
		wxString title(lua_tostring(L,4),lua_objlen(L,4));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::Insert(size_t, wxMenu *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Insert(pos, menu, title);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::IsChecked(int id) const
	static int _bind_IsChecked(lua_State *L) {
		if (!_lg_typecheck_IsChecked(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::IsChecked(int id) const function, expected prototype:\nbool wxMenuBar::IsChecked(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::IsChecked(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsChecked(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::IsEnabled(int id) const
	static int _bind_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_IsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::IsEnabled(int id) const function, expected prototype:\nbool wxMenuBar::IsEnabled(int id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::IsEnabled(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEnabled(id);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_Refresh(lua_State *L) {
		if (!_lg_typecheck_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxMenuBar::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Refresh(eraseBackground, rect);

		return 0;
	}

	// wxMenu * wxMenuBar::Remove(size_t pos)
	static int _bind_Remove(lua_State *L) {
		if (!_lg_typecheck_Remove(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuBar::Remove(size_t pos) function, expected prototype:\nwxMenu * wxMenuBar::Remove(size_t pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuBar::Remove(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenu * lret = self->Remove(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// wxMenu * wxMenuBar::Replace(size_t pos, wxMenu * menu, const wxString & title)
	static int _bind_Replace(lua_State *L) {
		if (!_lg_typecheck_Replace(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuBar::Replace(size_t pos, wxMenu * menu, const wxString & title) function, expected prototype:\nwxMenu * wxMenuBar::Replace(size_t pos, wxMenu * menu, const wxString & title)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,3));
		wxString title(lua_tostring(L,4),lua_objlen(L,4));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuBar::Replace(size_t, wxMenu *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenu * lret = self->Replace(pos, menu, title);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// void wxMenuBar::SetHelpString(int id, const wxString & helpString)
	static int _bind_SetHelpString(lua_State *L) {
		if (!_lg_typecheck_SetHelpString(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::SetHelpString(int id, const wxString & helpString) function, expected prototype:\nvoid wxMenuBar::SetHelpString(int id, const wxString & helpString)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		wxString helpString(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::SetHelpString(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHelpString(id, helpString);

		return 0;
	}

	// void wxMenuBar::SetLabel(int id, const wxString & label)
	static int _bind_SetLabel(lua_State *L) {
		if (!_lg_typecheck_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::SetLabel(int id, const wxString & label) function, expected prototype:\nvoid wxMenuBar::SetLabel(int id, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int id=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::SetLabel(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLabel(id, label);

		return 0;
	}

	// void wxMenuBar::SetLabelTop(size_t pos, const wxString & label)
	static int _bind_SetLabelTop(lua_State *L) {
		if (!_lg_typecheck_SetLabelTop(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::SetLabelTop(size_t pos, const wxString & label) function, expected prototype:\nvoid wxMenuBar::SetLabelTop(size_t pos, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::SetLabelTop(size_t, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLabelTop(pos, label);

		return 0;
	}

	// void wxMenuBar::SetMenuLabel(size_t pos, const wxString & label)
	static int _bind_SetMenuLabel(lua_State *L) {
		if (!_lg_typecheck_SetMenuLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::SetMenuLabel(size_t pos, const wxString & label) function, expected prototype:\nvoid wxMenuBar::SetMenuLabel(size_t pos, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::SetMenuLabel(size_t, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMenuLabel(pos, label);

		return 0;
	}

	// wxFrame * wxMenuBar::GetFrame() const
	static int _bind_GetFrame(lua_State *L) {
		if (!_lg_typecheck_GetFrame(L)) {
			luaL_error(L, "luna typecheck failed in wxFrame * wxMenuBar::GetFrame() const function, expected prototype:\nwxFrame * wxMenuBar::GetFrame() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFrame * wxMenuBar::GetFrame() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFrame * lret = self->GetFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFrame >::push(L,lret,false);

		return 1;
	}

	// bool wxMenuBar::IsAttached() const
	static int _bind_IsAttached(lua_State *L) {
		if (!_lg_typecheck_IsAttached(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::IsAttached() const function, expected prototype:\nbool wxMenuBar::IsAttached() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::IsAttached() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsAttached();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::Attach(wxFrame * frame)
	static int _bind_Attach(lua_State *L) {
		if (!_lg_typecheck_Attach(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::Attach(wxFrame * frame) function, expected prototype:\nvoid wxMenuBar::Attach(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,2));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::Attach(wxFrame *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Attach(frame);

		return 0;
	}

	// void wxMenuBar::Detach()
	static int _bind_Detach(lua_State *L) {
		if (!_lg_typecheck_Detach(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::Detach() function, expected prototype:\nvoid wxMenuBar::Detach()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::Detach(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Detach();

		return 0;
	}

	// wxClassInfo * wxMenuBar::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxMenuBar::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxMenuBar::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxMenuBar::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxMenuBar::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxMenuBar::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_AcceptsFocus() const function, expected prototype:\nbool wxMenuBar::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxMenuBar::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxMenuBar::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_HasFocus() const function, expected prototype:\nbool wxMenuBar::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxMenuBar::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetCanFocus(canFocus);

		return 0;
	}

	// void wxMenuBar::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetFocus() function, expected prototype:\nvoid wxMenuBar::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetFocus();

		return 0;
	}

	// void wxMenuBar::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetFocusFromKbd() function, expected prototype:\nvoid wxMenuBar::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetFocusFromKbd();

		return 0;
	}

	// void wxMenuBar::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxMenuBar::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::AddChild(child);

		return 0;
	}

	// void wxMenuBar::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxMenuBar::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::RemoveChild(child);

		return 0;
	}

	// bool wxMenuBar::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxMenuBar::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxMenuBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxMenuBar::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxMenuBar::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxMenuBar::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMenuBar::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMenuBar::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMenuBar::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxMenuBar::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxMenuBar::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMenuBar::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMenuBar::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMenuBar::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxMenuBar::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxMenuBar::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMenuBar::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMenuBar::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxMenuBar::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxMenuBar::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_ScrollLines(int lines) function, expected prototype:\nbool wxMenuBar::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_ScrollPages(int pages) function, expected prototype:\nbool wxMenuBar::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxMenuBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxMenuBar::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxMenuBar::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxMenuBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxMenuBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxMenuBar::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMenuBar::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxMenuBar::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMenuBar::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMenuBar::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMenuBar::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMenuBar::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMenuBar::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxMenuBar::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMenuBar::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMenuBar::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMenuBar::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxMenuBar::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_Fit() function, expected prototype:\nvoid wxMenuBar::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::Fit();

		return 0;
	}

	// void wxMenuBar::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_FitInside() function, expected prototype:\nvoid wxMenuBar::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::FitInside();

		return 0;
	}

	// wxSize wxMenuBar::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMenuBar::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxMenuBar::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMenuBar::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMenuBar::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMenuBar::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMenuBar::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxMenuBar::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMenuBar::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMenuBar::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMenuBar::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMenuBar::base_GetMaxSize() const function, expected prototype:\nwxSize wxMenuBar::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMenuBar::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMenuBar::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMenuBar::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMenuBar::base_GetMinClientSize() const function, expected prototype:\nwxSize wxMenuBar::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMenuBar::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMenuBar::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMenuBar::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMenuBar::base_GetMinSize() const function, expected prototype:\nwxSize wxMenuBar::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMenuBar::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMenuBar::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMenuBar::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMenuBar::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxMenuBar::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMenuBar::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMenuBar::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxMenuBar::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxMenuBar::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxMenuBar::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxMenuBar::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxMenuBar::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxMenuBar::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxMenuBar::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxMenuBar::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SendSizeEvent(flags);

		return 0;
	}

	// void wxMenuBar::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxMenuBar::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMenuBar::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetMaxClientSize(size);

		return 0;
	}

	// void wxMenuBar::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxMenuBar::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMenuBar::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetMaxSize(size);

		return 0;
	}

	// void wxMenuBar::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxMenuBar::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMenuBar::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetMinClientSize(size);

		return 0;
	}

	// void wxMenuBar::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxMenuBar::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxMenuBar::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetMinSize(size);

		return 0;
	}

	// void wxMenuBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxMenuBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxMenuBar::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxMenuBar::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxMenuBar::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxMenuBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxMenuBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxMenuBar::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxMenuBar::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxMenuBar::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxMenuBar::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxMenuBar::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxMenuBar::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxMenuBar::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_ClearBackground() function, expected prototype:\nvoid wxMenuBar::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxMenuBar::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxMenuBar::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxMenuBar::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxMenuBar::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxMenuBar::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMenuBar::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxMenuBar::base_GetCharHeight() const function, expected prototype:\nint wxMenuBar::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMenuBar::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMenuBar::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxMenuBar::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxMenuBar::base_GetCharWidth() const function, expected prototype:\nint wxMenuBar::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMenuBar::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMenuBar::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxMenuBar::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxMenuBar::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxMenuBar::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxMenuBar::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxMenuBar::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxMenuBar::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_Update() function, expected prototype:\nvoid wxMenuBar::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::Update();

		return 0;
	}

	// bool wxMenuBar::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxMenuBar::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxMenuBar::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxMenuBar::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_ShouldInheritColours() const function, expected prototype:\nbool wxMenuBar::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxMenuBar::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxMenuBar::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_GetThemeEnabled() const function, expected prototype:\nbool wxMenuBar::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_CanSetTransparent() function, expected prototype:\nbool wxMenuBar::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxMenuBar::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMenuBar::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetNextHandler(handler);

		return 0;
	}

	// void wxMenuBar::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxMenuBar::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetPreviousHandler(handler);

		return 0;
	}

	// long wxMenuBar::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxMenuBar::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxMenuBar::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxMenuBar::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxMenuBar::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxMenuBar::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxMenuBar::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxMenuBar::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxMenuBar::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxMenuBar::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_Lower() function, expected prototype:\nvoid wxMenuBar::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::Lower();

		return 0;
	}

	// void wxMenuBar::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_Raise() function, expected prototype:\nvoid wxMenuBar::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::Raise();

		return 0;
	}

	// bool wxMenuBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxMenuBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_IsShown() const function, expected prototype:\nbool wxMenuBar::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_IsShownOnScreen() const function, expected prototype:\nbool wxMenuBar::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_Show(bool show = true) function, expected prototype:\nbool wxMenuBar::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxMenuBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxMenuBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxMenuBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxMenuBar::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxMenuBar::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxMenuBar::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxMenuBar::base_GetValidator() function, expected prototype:\nwxValidator * wxMenuBar::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxMenuBar::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxMenuBar::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxMenuBar::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxMenuBar::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxMenuBar::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetValidator(validator);

		return 0;
	}

	// bool wxMenuBar::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_TransferDataFromWindow() function, expected prototype:\nbool wxMenuBar::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_TransferDataToWindow() function, expected prototype:\nbool wxMenuBar::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_Validate() function, expected prototype:\nbool wxMenuBar::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxMenuBar::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxMenuBar::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxMenuBar::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxMenuBar::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxMenuBar::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMenuBar::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::base_GetName() const function, expected prototype:\nwxString wxMenuBar::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxMenuBar::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxMenuBar::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxMenuBar::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetLayoutDirection(dir);

		return 0;
	}

	// void wxMenuBar::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetName(const wxString & name) function, expected prototype:\nvoid wxMenuBar::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetName(name);

		return 0;
	}

	// void wxMenuBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxMenuBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxMenuBar::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxMenuBar::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_Destroy() function, expected prototype:\nbool wxMenuBar::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxMenuBar::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxMenuBar::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxMenuBar::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxMenuBar::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxMenuBar::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxMenuBar::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxMenuBar::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetDropTarget(target);

		return 0;
	}

	// void wxMenuBar::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxMenuBar::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxMenuBar::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_Layout() function, expected prototype:\nbool wxMenuBar::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_HasCapture() const function, expected prototype:\nbool wxMenuBar::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxMenuBar::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxMenuBar::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxMenuBar::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::WarpPointer(x, y);

		return 0;
	}

	// void wxMenuBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxMenuBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxMenuBar::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxMenuBar::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxMenuBar::base_GetHandle() const function, expected prototype:\nHWND wxMenuBar::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxMenuBar::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxMenuBar::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxMenuBar::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_HasMultiplePages() const function, expected prototype:\nbool wxMenuBar::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_InheritAttributes() function, expected prototype:\nvoid wxMenuBar::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::InheritAttributes();

		return 0;
	}

	// void wxMenuBar::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_InitDialog() function, expected prototype:\nvoid wxMenuBar::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::InitDialog();

		return 0;
	}

	// bool wxMenuBar::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_IsRetained() const function, expected prototype:\nbool wxMenuBar::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_IsTopLevel() const function, expected prototype:\nbool wxMenuBar::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxMenuBar::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::MakeModal(modal);

		return 0;
	}

	// void wxMenuBar::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_OnInternalIdle() function, expected prototype:\nvoid wxMenuBar::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::OnInternalIdle();

		return 0;
	}

	// bool wxMenuBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxMenuBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxMenuBar::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxMenuBar::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxMenuBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxMenuBar::base_Append(wxMenu * menu, const wxString & title)
	static int _bind_base_Append(lua_State *L) {
		if (!_lg_typecheck_base_Append(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_Append(wxMenu * menu, const wxString & title) function, expected prototype:\nbool wxMenuBar::base_Append(wxMenu * menu, const wxString & title)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));
		wxString title(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_Append(wxMenu *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::Append(menu, title);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_EnableTop(size_t pos, bool enable)
	static int _bind_base_EnableTop(lua_State *L) {
		if (!_lg_typecheck_base_EnableTop(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_EnableTop(size_t pos, bool enable) function, expected prototype:\nvoid wxMenuBar::base_EnableTop(size_t pos, bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		bool enable=(bool)(lua_toboolean(L,3)==1);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_EnableTop(size_t, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::EnableTop(pos, enable);

		return 0;
	}

	// int wxMenuBar::base_FindMenuItem(const wxString & menuString, const wxString & itemString) const
	static int _bind_base_FindMenuItem(lua_State *L) {
		if (!_lg_typecheck_base_FindMenuItem(L)) {
			luaL_error(L, "luna typecheck failed in int wxMenuBar::base_FindMenuItem(const wxString & menuString, const wxString & itemString) const function, expected prototype:\nint wxMenuBar::base_FindMenuItem(const wxString & menuString, const wxString & itemString) const\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString menuString(lua_tostring(L,2),lua_objlen(L,2));
		wxString itemString(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxMenuBar::base_FindMenuItem(const wxString &, const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxMenuBar::FindMenuItem(menuString, itemString);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxMenuBar::base_GetMenuLabel(size_t pos) const
	static int _bind_base_GetMenuLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetMenuLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::base_GetMenuLabel(size_t pos) const function, expected prototype:\nwxString wxMenuBar::base_GetMenuLabel(size_t pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::base_GetMenuLabel(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxMenuBar::GetMenuLabel(pos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxMenuBar::base_GetMenuLabelText(size_t pos) const
	static int _bind_base_GetMenuLabelText(lua_State *L) {
		if (!_lg_typecheck_base_GetMenuLabelText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxMenuBar::base_GetMenuLabelText(size_t pos) const function, expected prototype:\nwxString wxMenuBar::base_GetMenuLabelText(size_t pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxMenuBar::base_GetMenuLabelText(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxMenuBar::GetMenuLabelText(pos);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxMenuBar::base_Insert(size_t pos, wxMenu * menu, const wxString & title)
	static int _bind_base_Insert(lua_State *L) {
		if (!_lg_typecheck_base_Insert(L)) {
			luaL_error(L, "luna typecheck failed in bool wxMenuBar::base_Insert(size_t pos, wxMenu * menu, const wxString & title) function, expected prototype:\nbool wxMenuBar::base_Insert(size_t pos, wxMenu * menu, const wxString & title)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,3));
		wxString title(lua_tostring(L,4),lua_objlen(L,4));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxMenuBar::base_Insert(size_t, wxMenu *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxMenuBar::Insert(pos, menu, title);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxMenuBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxMenuBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::Refresh(eraseBackground, rect);

		return 0;
	}

	// wxMenu * wxMenuBar::base_Remove(size_t pos)
	static int _bind_base_Remove(lua_State *L) {
		if (!_lg_typecheck_base_Remove(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuBar::base_Remove(size_t pos) function, expected prototype:\nwxMenu * wxMenuBar::base_Remove(size_t pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuBar::base_Remove(size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenu * lret = self->wxMenuBar::Remove(pos);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// wxMenu * wxMenuBar::base_Replace(size_t pos, wxMenu * menu, const wxString & title)
	static int _bind_base_Replace(lua_State *L) {
		if (!_lg_typecheck_base_Replace(L)) {
			luaL_error(L, "luna typecheck failed in wxMenu * wxMenuBar::base_Replace(size_t pos, wxMenu * menu, const wxString & title) function, expected prototype:\nwxMenu * wxMenuBar::base_Replace(size_t pos, wxMenu * menu, const wxString & title)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,3));
		wxString title(lua_tostring(L,4),lua_objlen(L,4));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxMenu * wxMenuBar::base_Replace(size_t, wxMenu *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxMenu * lret = self->wxMenuBar::Replace(pos, menu, title);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxMenu >::push(L,lret,false);

		return 1;
	}

	// void wxMenuBar::base_SetMenuLabel(size_t pos, const wxString & label)
	static int _bind_base_SetMenuLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetMenuLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_SetMenuLabel(size_t pos, const wxString & label) function, expected prototype:\nvoid wxMenuBar::base_SetMenuLabel(size_t pos, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t pos=(size_t)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_SetMenuLabel(size_t, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::SetMenuLabel(pos, label);

		return 0;
	}

	// void wxMenuBar::base_Attach(wxFrame * frame)
	static int _bind_base_Attach(lua_State *L) {
		if (!_lg_typecheck_base_Attach(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_Attach(wxFrame * frame) function, expected prototype:\nvoid wxMenuBar::base_Attach(wxFrame * frame)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,2));

		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_Attach(wxFrame *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::Attach(frame);

		return 0;
	}

	// void wxMenuBar::base_Detach()
	static int _bind_base_Detach(lua_State *L) {
		if (!_lg_typecheck_base_Detach(L)) {
			luaL_error(L, "luna typecheck failed in void wxMenuBar::base_Detach() function, expected prototype:\nvoid wxMenuBar::base_Detach()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxMenuBar* self=Luna< wxObject >::checkSubType< wxMenuBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxMenuBar::base_Detach(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxMenuBar::Detach();

		return 0;
	}


	// Operator binds:

};

wxMenuBar* LunaTraits< wxMenuBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxMenuBar::_bind_ctor(L);
}

void LunaTraits< wxMenuBar >::_bind_dtor(wxMenuBar* obj) {
	delete obj;
}

const char LunaTraits< wxMenuBar >::className[] = "wxMenuBar";
const char LunaTraits< wxMenuBar >::fullName[] = "wxMenuBar";
const char LunaTraits< wxMenuBar >::moduleName[] = "wx";
const char* LunaTraits< wxMenuBar >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxMenuBar >::hash = 76241204;
const int LunaTraits< wxMenuBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxMenuBar >::methods[] = {
	{"Append", &luna_wrapper_wxMenuBar::_bind_Append},
	{"Check", &luna_wrapper_wxMenuBar::_bind_Check},
	{"Enable", &luna_wrapper_wxMenuBar::_bind_Enable},
	{"EnableTop", &luna_wrapper_wxMenuBar::_bind_EnableTop},
	{"FindMenu", &luna_wrapper_wxMenuBar::_bind_FindMenu},
	{"FindMenuItem", &luna_wrapper_wxMenuBar::_bind_FindMenuItem},
	{"GetHelpString", &luna_wrapper_wxMenuBar::_bind_GetHelpString},
	{"GetLabel", &luna_wrapper_wxMenuBar::_bind_GetLabel},
	{"GetLabelTop", &luna_wrapper_wxMenuBar::_bind_GetLabelTop},
	{"GetMenu", &luna_wrapper_wxMenuBar::_bind_GetMenu},
	{"GetMenuCount", &luna_wrapper_wxMenuBar::_bind_GetMenuCount},
	{"GetMenuLabel", &luna_wrapper_wxMenuBar::_bind_GetMenuLabel},
	{"GetMenuLabelText", &luna_wrapper_wxMenuBar::_bind_GetMenuLabelText},
	{"Insert", &luna_wrapper_wxMenuBar::_bind_Insert},
	{"IsChecked", &luna_wrapper_wxMenuBar::_bind_IsChecked},
	{"IsEnabled", &luna_wrapper_wxMenuBar::_bind_IsEnabled},
	{"Refresh", &luna_wrapper_wxMenuBar::_bind_Refresh},
	{"Remove", &luna_wrapper_wxMenuBar::_bind_Remove},
	{"Replace", &luna_wrapper_wxMenuBar::_bind_Replace},
	{"SetHelpString", &luna_wrapper_wxMenuBar::_bind_SetHelpString},
	{"SetLabel", &luna_wrapper_wxMenuBar::_bind_SetLabel},
	{"SetLabelTop", &luna_wrapper_wxMenuBar::_bind_SetLabelTop},
	{"SetMenuLabel", &luna_wrapper_wxMenuBar::_bind_SetMenuLabel},
	{"GetFrame", &luna_wrapper_wxMenuBar::_bind_GetFrame},
	{"IsAttached", &luna_wrapper_wxMenuBar::_bind_IsAttached},
	{"Attach", &luna_wrapper_wxMenuBar::_bind_Attach},
	{"Detach", &luna_wrapper_wxMenuBar::_bind_Detach},
	{"base_GetClassInfo", &luna_wrapper_wxMenuBar::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxMenuBar::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxMenuBar::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxMenuBar::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxMenuBar::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxMenuBar::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxMenuBar::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxMenuBar::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxMenuBar::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxMenuBar::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxMenuBar::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxMenuBar::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxMenuBar::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxMenuBar::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxMenuBar::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxMenuBar::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxMenuBar::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxMenuBar::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxMenuBar::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxMenuBar::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxMenuBar::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxMenuBar::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxMenuBar::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxMenuBar::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxMenuBar::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxMenuBar::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxMenuBar::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxMenuBar::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxMenuBar::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxMenuBar::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxMenuBar::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxMenuBar::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxMenuBar::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxMenuBar::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxMenuBar::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxMenuBar::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxMenuBar::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxMenuBar::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxMenuBar::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxMenuBar::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxMenuBar::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxMenuBar::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxMenuBar::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxMenuBar::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxMenuBar::_bind_base_GetDefaultAttributes},
	{"base_Update", &luna_wrapper_wxMenuBar::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxMenuBar::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxMenuBar::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxMenuBar::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxMenuBar::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxMenuBar::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxMenuBar::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxMenuBar::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxMenuBar::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxMenuBar::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxMenuBar::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxMenuBar::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxMenuBar::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxMenuBar::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxMenuBar::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxMenuBar::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxMenuBar::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxMenuBar::_bind_base_IsShownOnScreen},
	{"base_Show", &luna_wrapper_wxMenuBar::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxMenuBar::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxMenuBar::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxMenuBar::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxMenuBar::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxMenuBar::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxMenuBar::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxMenuBar::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxMenuBar::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxMenuBar::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxMenuBar::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxMenuBar::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxMenuBar::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxMenuBar::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxMenuBar::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxMenuBar::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxMenuBar::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxMenuBar::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxMenuBar::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxMenuBar::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxMenuBar::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxMenuBar::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxMenuBar::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxMenuBar::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxMenuBar::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxMenuBar::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxMenuBar::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxMenuBar::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxMenuBar::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxMenuBar::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxMenuBar::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxMenuBar::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxMenuBar::_bind_base_UpdateWindowUI},
	{"base_Append", &luna_wrapper_wxMenuBar::_bind_base_Append},
	{"base_EnableTop", &luna_wrapper_wxMenuBar::_bind_base_EnableTop},
	{"base_FindMenuItem", &luna_wrapper_wxMenuBar::_bind_base_FindMenuItem},
	{"base_GetMenuLabel", &luna_wrapper_wxMenuBar::_bind_base_GetMenuLabel},
	{"base_GetMenuLabelText", &luna_wrapper_wxMenuBar::_bind_base_GetMenuLabelText},
	{"base_Insert", &luna_wrapper_wxMenuBar::_bind_base_Insert},
	{"base_Refresh", &luna_wrapper_wxMenuBar::_bind_base_Refresh},
	{"base_Remove", &luna_wrapper_wxMenuBar::_bind_base_Remove},
	{"base_Replace", &luna_wrapper_wxMenuBar::_bind_base_Replace},
	{"base_SetMenuLabel", &luna_wrapper_wxMenuBar::_bind_base_SetMenuLabel},
	{"base_Attach", &luna_wrapper_wxMenuBar::_bind_base_Attach},
	{"base_Detach", &luna_wrapper_wxMenuBar::_bind_base_Detach},
	{"fromVoid", &luna_wrapper_wxMenuBar::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxMenuBar::_bind_asVoid},
	{"getTable", &luna_wrapper_wxMenuBar::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxMenuBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxMenuBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxMenuBar >::enumValues[] = {
	{0,0}
};


