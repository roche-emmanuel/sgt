#include <plug_common.h>

#include <luna/wrappers/wrapper_wxStatusBar.h>

class luna_wrapper_wxStatusBar {
public:
	typedef Luna< wxStatusBar > luna_t;

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

		wxStatusBar* self= (wxStatusBar*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxStatusBar >::push(L,self,false);
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
		//wxStatusBar* ptr= dynamic_cast< wxStatusBar* >(Luna< wxObject >::check(L,1));
		wxStatusBar* ptr= luna_caster< wxObject, wxStatusBar >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStatusBar >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFieldRect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFieldsCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetField(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBorders(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStatusWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStatusStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PushStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFieldsCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStatusStyles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStatusWidths(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFieldsCountVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92299338)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStatusWidthsVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92299338)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStatusStylesVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,92299338)) ) return false;
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

	inline static bool _lg_typecheck_base_GetFieldRect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetStatusText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFieldsCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetMinHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStatusStyles(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStatusBar::wxStatusBar()
	static wxStatusBar* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxStatusBar::wxStatusBar() function, expected prototype:\nwxStatusBar::wxStatusBar()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxStatusBar();
	}

	// wxStatusBar::wxStatusBar(wxWindow * parent, int id = ::wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr)
	static wxStatusBar* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxStatusBar::wxStatusBar(wxWindow * parent, int id = ::wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr) function, expected prototype:\nwxStatusBar::wxStatusBar(wxWindow * parent, int id = ::wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxID_ANY;
		long style=luatop>2 ? (long)lua_tonumber(L,3) : (long)(0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE);
		wxString name(lua_tostring(L,4),lua_objlen(L,4));

		return new wxStatusBar(parent, id, style, name);
	}

	// wxStatusBar::wxStatusBar(lua_Table * data)
	static wxStatusBar* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxStatusBar::wxStatusBar(lua_Table * data) function, expected prototype:\nwxStatusBar::wxStatusBar(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxStatusBar(L,NULL);
	}

	// wxStatusBar::wxStatusBar(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr)
	static wxStatusBar* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxStatusBar::wxStatusBar(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr) function, expected prototype:\nwxStatusBar::wxStatusBar(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 5 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		long style=luatop>3 ? (long)lua_tonumber(L,4) : (long)(0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE);
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		return new wrapper_wxStatusBar(L,NULL, parent, id, style, name);
	}

	// Overload binder for wxStatusBar::wxStatusBar
	static wxStatusBar* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxStatusBar, cannot match any of the overloads for function wxStatusBar:\n  wxStatusBar()\n  wxStatusBar(wxWindow *, int, long, const wxString &)\n  wxStatusBar(lua_Table *)\n  wxStatusBar(lua_Table *, wxWindow *, int, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxStatusBar::Create(wxWindow * parent, int id = ::wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::Create(wxWindow * parent, int id = ::wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr) function, expected prototype:\nbool wxStatusBar::Create(wxWindow * parent, int id = ::wxID_ANY, long style = (0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE), const wxString & name = wxStatusBarNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 4 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		long style=luatop>3 ? (long)lua_tonumber(L,4) : (long)(0x0010|0x0100|0x0020|wxFULL_REPAINT_ON_RESIZE);
		wxString name(lua_tostring(L,5),lua_objlen(L,5));

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::Create(wxWindow *, int, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::GetFieldRect(int i, wxRect & rect) const
	static int _bind_GetFieldRect(lua_State *L) {
		if (!_lg_typecheck_GetFieldRect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::GetFieldRect(int i, wxRect & rect) const function, expected prototype:\nbool wxStatusBar::GetFieldRect(int i, wxRect & rect) const\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxStatusBar::GetFieldRect function");
		}
		wxRect & rect=*rect_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::GetFieldRect(int, wxRect &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetFieldRect(i, rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxStatusBar::GetFieldsCount() const
	static int _bind_GetFieldsCount(lua_State *L) {
		if (!_lg_typecheck_GetFieldsCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxStatusBar::GetFieldsCount() const function, expected prototype:\nint wxStatusBar::GetFieldsCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxStatusBar::GetFieldsCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFieldsCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxStatusBarPane & wxStatusBar::GetField(int n) const
	static int _bind_GetField(lua_State *L) {
		if (!_lg_typecheck_GetField(L)) {
			luaL_error(L, "luna typecheck failed in const wxStatusBarPane & wxStatusBar::GetField(int n) const function, expected prototype:\nconst wxStatusBarPane & wxStatusBar::GetField(int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxStatusBarPane & wxStatusBar::GetField(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxStatusBarPane* lret = &self->GetField(n);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxStatusBarPane >::push(L,lret,false);

		return 1;
	}

	// wxSize wxStatusBar::GetBorders() const
	static int _bind_GetBorders(lua_State *L) {
		if (!_lg_typecheck_GetBorders(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxStatusBar::GetBorders() const function, expected prototype:\nwxSize wxStatusBar::GetBorders() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxStatusBar::GetBorders() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetBorders();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxString wxStatusBar::GetStatusText(int i = 0) const
	static int _bind_GetStatusText(lua_State *L) {
		if (!_lg_typecheck_GetStatusText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStatusBar::GetStatusText(int i = 0) const function, expected prototype:\nwxString wxStatusBar::GetStatusText(int i = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int i=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStatusBar::GetStatusText(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetStatusText(i);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxStatusBar::GetStatusWidth(int n) const
	static int _bind_GetStatusWidth(lua_State *L) {
		if (!_lg_typecheck_GetStatusWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxStatusBar::GetStatusWidth(int n) const function, expected prototype:\nint wxStatusBar::GetStatusWidth(int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxStatusBar::GetStatusWidth(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetStatusWidth(n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStatusBar::GetStatusStyle(int n) const
	static int _bind_GetStatusStyle(lua_State *L) {
		if (!_lg_typecheck_GetStatusStyle(L)) {
			luaL_error(L, "luna typecheck failed in int wxStatusBar::GetStatusStyle(int n) const function, expected prototype:\nint wxStatusBar::GetStatusStyle(int n) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxStatusBar::GetStatusStyle(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetStatusStyle(n);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStatusBar::PopStatusText(int field = 0)
	static int _bind_PopStatusText(lua_State *L) {
		if (!_lg_typecheck_PopStatusText(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::PopStatusText(int field = 0) function, expected prototype:\nvoid wxStatusBar::PopStatusText(int field = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int field=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::PopStatusText(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PopStatusText(field);

		return 0;
	}

	// void wxStatusBar::PushStatusText(const wxString & string, int field = 0)
	static int _bind_PushStatusText(lua_State *L) {
		if (!_lg_typecheck_PushStatusText(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::PushStatusText(const wxString & string, int field = 0) function, expected prototype:\nvoid wxStatusBar::PushStatusText(const wxString & string, int field = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		int field=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::PushStatusText(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PushStatusText(string, field);

		return 0;
	}

	// void wxStatusBar::SetFieldsCount(int number = 1, const int * widths = NULL)
	static int _bind_SetFieldsCount(lua_State *L) {
		if (!_lg_typecheck_SetFieldsCount(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::SetFieldsCount(int number = 1, const int * widths = NULL) function, expected prototype:\nvoid wxStatusBar::SetFieldsCount(int number = 1, const int * widths = NULL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int number=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;
		const int* widths=luatop>2 ? (const int*)Luna< void >::check(L,3) : (const int*)NULL;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::SetFieldsCount(int, const int *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFieldsCount(number, widths);

		return 0;
	}

	// void wxStatusBar::SetMinHeight(int height)
	static int _bind_SetMinHeight(lua_State *L) {
		if (!_lg_typecheck_SetMinHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::SetMinHeight(int height) function, expected prototype:\nvoid wxStatusBar::SetMinHeight(int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int height=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::SetMinHeight(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMinHeight(height);

		return 0;
	}

	// void wxStatusBar::SetStatusStyles(int n, const int * styles)
	static int _bind_SetStatusStyles(lua_State *L) {
		if (!_lg_typecheck_SetStatusStyles(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::SetStatusStyles(int n, const int * styles) function, expected prototype:\nvoid wxStatusBar::SetStatusStyles(int n, const int * styles)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);
		const int* styles=(const int*)Luna< void >::check(L,3);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::SetStatusStyles(int, const int *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStatusStyles(n, styles);

		return 0;
	}

	// void wxStatusBar::SetStatusText(const wxString & text, int i = 0)
	static int _bind_SetStatusText(lua_State *L) {
		if (!_lg_typecheck_SetStatusText(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::SetStatusText(const wxString & text, int i = 0) function, expected prototype:\nvoid wxStatusBar::SetStatusText(const wxString & text, int i = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int i=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::SetStatusText(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStatusText(text, i);

		return 0;
	}

	// void wxStatusBar::SetStatusWidths(int n, const int * widths_field)
	static int _bind_SetStatusWidths(lua_State *L) {
		if (!_lg_typecheck_SetStatusWidths(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::SetStatusWidths(int n, const int * widths_field) function, expected prototype:\nvoid wxStatusBar::SetStatusWidths(int n, const int * widths_field)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);
		const int* widths_field=(const int*)Luna< void >::check(L,3);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::SetStatusWidths(int, const int *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStatusWidths(n, widths_field);

		return 0;
	}

	// void wxStatusBar::setFieldsCountVector(wxStatusBar * bar, std::vector< int > * widths)
	static int _bind_setFieldsCountVector(lua_State *L) {
		if (!_lg_typecheck_setFieldsCountVector(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::setFieldsCountVector(wxStatusBar * bar, std::vector< int > * widths) function, expected prototype:\nvoid wxStatusBar::setFieldsCountVector(wxStatusBar * bar, std::vector< int > * widths)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		wxStatusBar* bar=(Luna< wxObject >::checkSubType< wxStatusBar >(L,1));
		std::vector< int >* widths=(Luna< std::vector< int > >::check(L,2));

		setFieldsCountVector(bar, widths);

		return 0;
	}

	// void wxStatusBar::setStatusWidthsVector(wxStatusBar * bar, std::vector< int > * widths)
	static int _bind_setStatusWidthsVector(lua_State *L) {
		if (!_lg_typecheck_setStatusWidthsVector(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::setStatusWidthsVector(wxStatusBar * bar, std::vector< int > * widths) function, expected prototype:\nvoid wxStatusBar::setStatusWidthsVector(wxStatusBar * bar, std::vector< int > * widths)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		wxStatusBar* bar=(Luna< wxObject >::checkSubType< wxStatusBar >(L,1));
		std::vector< int >* widths=(Luna< std::vector< int > >::check(L,2));

		setStatusWidthsVector(bar, widths);

		return 0;
	}

	// void wxStatusBar::setStatusStylesVector(wxStatusBar * bar, std::vector< int > * styles)
	static int _bind_setStatusStylesVector(lua_State *L) {
		if (!_lg_typecheck_setStatusStylesVector(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::setStatusStylesVector(wxStatusBar * bar, std::vector< int > * styles) function, expected prototype:\nvoid wxStatusBar::setStatusStylesVector(wxStatusBar * bar, std::vector< int > * styles)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		wxStatusBar* bar=(Luna< wxObject >::checkSubType< wxStatusBar >(L,1));
		std::vector< int >* styles=(Luna< std::vector< int > >::check(L,2));

		setStatusStylesVector(bar, styles);

		return 0;
	}

	// wxClassInfo * wxStatusBar::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxStatusBar::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxStatusBar::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxStatusBar::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxStatusBar::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxStatusBar::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_AcceptsFocus() const function, expected prototype:\nbool wxStatusBar::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxStatusBar::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxStatusBar::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_HasFocus() const function, expected prototype:\nbool wxStatusBar::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStatusBar::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxStatusBar::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetCanFocus(canFocus);

		return 0;
	}

	// void wxStatusBar::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetFocus() function, expected prototype:\nvoid wxStatusBar::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetFocus();

		return 0;
	}

	// void wxStatusBar::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetFocusFromKbd() function, expected prototype:\nvoid wxStatusBar::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetFocusFromKbd();

		return 0;
	}

	// void wxStatusBar::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxStatusBar::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::AddChild(child);

		return 0;
	}

	// void wxStatusBar::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxStatusBar::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::RemoveChild(child);

		return 0;
	}

	// bool wxStatusBar::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxStatusBar::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStatusBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxStatusBar::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxStatusBar::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxStatusBar::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxStatusBar::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxStatusBar::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxStatusBar::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStatusBar::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxStatusBar::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxStatusBar::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxStatusBar::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxStatusBar::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStatusBar::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxStatusBar::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxStatusBar::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxStatusBar::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxStatusBar::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxStatusBar::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxStatusBar::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_ScrollLines(int lines) function, expected prototype:\nbool wxStatusBar::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_ScrollPages(int pages) function, expected prototype:\nbool wxStatusBar::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStatusBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxStatusBar::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxStatusBar::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxStatusBar::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxStatusBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxStatusBar::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxStatusBar::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxStatusBar::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxStatusBar::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStatusBar::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxStatusBar::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxStatusBar::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxStatusBar::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxStatusBar::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxStatusBar::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStatusBar::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxStatusBar::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxStatusBar::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxStatusBar::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_Fit() function, expected prototype:\nvoid wxStatusBar::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::Fit();

		return 0;
	}

	// void wxStatusBar::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_FitInside() function, expected prototype:\nvoid wxStatusBar::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::FitInside();

		return 0;
	}

	// wxSize wxStatusBar::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxStatusBar::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxStatusBar::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxStatusBar::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxStatusBar::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxStatusBar::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxStatusBar::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxStatusBar::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxStatusBar::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxStatusBar::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxStatusBar::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxStatusBar::base_GetMaxSize() const function, expected prototype:\nwxSize wxStatusBar::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxStatusBar::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxStatusBar::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxStatusBar::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxStatusBar::base_GetMinClientSize() const function, expected prototype:\nwxSize wxStatusBar::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxStatusBar::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxStatusBar::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxStatusBar::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxStatusBar::base_GetMinSize() const function, expected prototype:\nwxSize wxStatusBar::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxStatusBar::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxStatusBar::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxStatusBar::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxStatusBar::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxStatusBar::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxStatusBar::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxStatusBar::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxStatusBar::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxStatusBar::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxStatusBar::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxStatusBar::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxStatusBar::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxStatusBar::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxStatusBar::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStatusBar::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxStatusBar::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SendSizeEvent(flags);

		return 0;
	}

	// void wxStatusBar::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxStatusBar::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStatusBar::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetMaxClientSize(size);

		return 0;
	}

	// void wxStatusBar::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxStatusBar::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStatusBar::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetMaxSize(size);

		return 0;
	}

	// void wxStatusBar::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxStatusBar::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStatusBar::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetMinClientSize(size);

		return 0;
	}

	// void wxStatusBar::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxStatusBar::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxStatusBar::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetMinSize(size);

		return 0;
	}

	// void wxStatusBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxStatusBar::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxStatusBar::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxStatusBar::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxStatusBar::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxStatusBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxStatusBar::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxStatusBar::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxStatusBar::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxStatusBar::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxStatusBar::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxStatusBar::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxStatusBar::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxStatusBar::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_ClearBackground() function, expected prototype:\nvoid wxStatusBar::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxStatusBar::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxStatusBar::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxStatusBar::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxStatusBar::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxStatusBar::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStatusBar::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxStatusBar::base_GetCharHeight() const function, expected prototype:\nint wxStatusBar::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxStatusBar::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxStatusBar::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxStatusBar::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxStatusBar::base_GetCharWidth() const function, expected prototype:\nint wxStatusBar::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxStatusBar::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxStatusBar::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxStatusBar::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxStatusBar::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxStatusBar::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxStatusBar::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxStatusBar::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxStatusBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxStatusBar::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxStatusBar::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_Update() function, expected prototype:\nvoid wxStatusBar::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::Update();

		return 0;
	}

	// bool wxStatusBar::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxStatusBar::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxStatusBar::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxStatusBar::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_ShouldInheritColours() const function, expected prototype:\nbool wxStatusBar::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStatusBar::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxStatusBar::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxStatusBar::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_GetThemeEnabled() const function, expected prototype:\nbool wxStatusBar::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_CanSetTransparent() function, expected prototype:\nbool wxStatusBar::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxStatusBar::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStatusBar::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxStatusBar::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetNextHandler(handler);

		return 0;
	}

	// void wxStatusBar::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxStatusBar::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetPreviousHandler(handler);

		return 0;
	}

	// long wxStatusBar::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxStatusBar::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxStatusBar::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxStatusBar::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxStatusBar::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxStatusBar::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxStatusBar::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxStatusBar::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxStatusBar::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxStatusBar::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_Lower() function, expected prototype:\nvoid wxStatusBar::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::Lower();

		return 0;
	}

	// void wxStatusBar::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_Raise() function, expected prototype:\nvoid wxStatusBar::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::Raise();

		return 0;
	}

	// bool wxStatusBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxStatusBar::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_IsShown() const function, expected prototype:\nbool wxStatusBar::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_IsShownOnScreen() const function, expected prototype:\nbool wxStatusBar::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_Enable(bool enable = true) function, expected prototype:\nbool wxStatusBar::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_Show(bool show = true) function, expected prototype:\nbool wxStatusBar::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxStatusBar::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxStatusBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStatusBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxStatusBar::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxStatusBar::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStatusBar::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStatusBar::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxStatusBar::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxStatusBar::base_GetValidator() function, expected prototype:\nwxValidator * wxStatusBar::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxStatusBar::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxStatusBar::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxStatusBar::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxStatusBar::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxStatusBar::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetValidator(validator);

		return 0;
	}

	// bool wxStatusBar::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_TransferDataFromWindow() function, expected prototype:\nbool wxStatusBar::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_TransferDataToWindow() function, expected prototype:\nbool wxStatusBar::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_Validate() function, expected prototype:\nbool wxStatusBar::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxStatusBar::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxStatusBar::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxStatusBar::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxStatusBar::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxStatusBar::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxStatusBar::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStatusBar::base_GetName() const function, expected prototype:\nwxString wxStatusBar::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStatusBar::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStatusBar::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxStatusBar::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxStatusBar::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetLayoutDirection(dir);

		return 0;
	}

	// void wxStatusBar::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetName(const wxString & name) function, expected prototype:\nvoid wxStatusBar::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetName(name);

		return 0;
	}

	// void wxStatusBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxStatusBar::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxStatusBar::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxStatusBar::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_Destroy() function, expected prototype:\nbool wxStatusBar::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxStatusBar::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxStatusBar::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxStatusBar::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxStatusBar::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxStatusBar::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxStatusBar::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxStatusBar::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetDropTarget(target);

		return 0;
	}

	// void wxStatusBar::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxStatusBar::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxStatusBar::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_Layout() function, expected prototype:\nbool wxStatusBar::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_HasCapture() const function, expected prototype:\nbool wxStatusBar::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxStatusBar::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxStatusBar::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStatusBar::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxStatusBar::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::WarpPointer(x, y);

		return 0;
	}

	// void wxStatusBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxStatusBar::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxStatusBar::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxStatusBar::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxStatusBar::base_GetHandle() const function, expected prototype:\nHWND wxStatusBar::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxStatusBar::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxStatusBar::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxStatusBar::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_HasMultiplePages() const function, expected prototype:\nbool wxStatusBar::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStatusBar::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_InheritAttributes() function, expected prototype:\nvoid wxStatusBar::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::InheritAttributes();

		return 0;
	}

	// void wxStatusBar::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_InitDialog() function, expected prototype:\nvoid wxStatusBar::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::InitDialog();

		return 0;
	}

	// bool wxStatusBar::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_IsRetained() const function, expected prototype:\nbool wxStatusBar::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_IsTopLevel() const function, expected prototype:\nbool wxStatusBar::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStatusBar::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxStatusBar::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::MakeModal(modal);

		return 0;
	}

	// void wxStatusBar::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_OnInternalIdle() function, expected prototype:\nvoid wxStatusBar::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::OnInternalIdle();

		return 0;
	}

	// bool wxStatusBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxStatusBar::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxStatusBar::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxStatusBar::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxStatusBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxStatusBar::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::UpdateWindowUI(flags);

		return 0;
	}

	// void wxStatusBar::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxStatusBar::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxStatusBar::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::Command(event);

		return 0;
	}

	// wxString wxStatusBar::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStatusBar::base_GetLabel() const function, expected prototype:\nwxString wxStatusBar::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStatusBar::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStatusBar::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxStatusBar::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxStatusBar::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetLabel(label);

		return 0;
	}

	// bool wxStatusBar::base_GetFieldRect(int i, wxRect & rect) const
	static int _bind_base_GetFieldRect(lua_State *L) {
		if (!_lg_typecheck_base_GetFieldRect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxStatusBar::base_GetFieldRect(int i, wxRect & rect) const function, expected prototype:\nbool wxStatusBar::base_GetFieldRect(int i, wxRect & rect) const\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);
		wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxStatusBar::base_GetFieldRect function");
		}
		wxRect & rect=*rect_ptr;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxStatusBar::base_GetFieldRect(int, wxRect &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxStatusBar::GetFieldRect(i, rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxStatusBar::base_GetStatusText(int i = 0) const
	static int _bind_base_GetStatusText(lua_State *L) {
		if (!_lg_typecheck_base_GetStatusText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxStatusBar::base_GetStatusText(int i = 0) const function, expected prototype:\nwxString wxStatusBar::base_GetStatusText(int i = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int i=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxStatusBar::base_GetStatusText(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxStatusBar::GetStatusText(i);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxStatusBar::base_SetFieldsCount(int number = 1, const int * widths = NULL)
	static int _bind_base_SetFieldsCount(lua_State *L) {
		if (!_lg_typecheck_base_SetFieldsCount(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetFieldsCount(int number = 1, const int * widths = NULL) function, expected prototype:\nvoid wxStatusBar::base_SetFieldsCount(int number = 1, const int * widths = NULL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int number=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;
		const int* widths=luatop>2 ? (const int*)Luna< void >::check(L,3) : (const int*)NULL;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetFieldsCount(int, const int *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetFieldsCount(number, widths);

		return 0;
	}

	// void wxStatusBar::base_SetMinHeight(int height)
	static int _bind_base_SetMinHeight(lua_State *L) {
		if (!_lg_typecheck_base_SetMinHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetMinHeight(int height) function, expected prototype:\nvoid wxStatusBar::base_SetMinHeight(int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int height=(int)lua_tointeger(L,2);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetMinHeight(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetMinHeight(height);

		return 0;
	}

	// void wxStatusBar::base_SetStatusStyles(int n, const int * styles)
	static int _bind_base_SetStatusStyles(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusStyles(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetStatusStyles(int n, const int * styles) function, expected prototype:\nvoid wxStatusBar::base_SetStatusStyles(int n, const int * styles)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);
		const int* styles=(const int*)Luna< void >::check(L,3);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetStatusStyles(int, const int *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetStatusStyles(n, styles);

		return 0;
	}

	// void wxStatusBar::base_SetStatusText(const wxString & text, int i = 0)
	static int _bind_base_SetStatusText(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusText(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetStatusText(const wxString & text, int i = 0) function, expected prototype:\nvoid wxStatusBar::base_SetStatusText(const wxString & text, int i = 0)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int i=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetStatusText(const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetStatusText(text, i);

		return 0;
	}

	// void wxStatusBar::base_SetStatusWidths(int n, const int * widths_field)
	static int _bind_base_SetStatusWidths(lua_State *L) {
		if (!_lg_typecheck_base_SetStatusWidths(L)) {
			luaL_error(L, "luna typecheck failed in void wxStatusBar::base_SetStatusWidths(int n, const int * widths_field) function, expected prototype:\nvoid wxStatusBar::base_SetStatusWidths(int n, const int * widths_field)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);
		const int* widths_field=(const int*)Luna< void >::check(L,3);

		wxStatusBar* self=Luna< wxObject >::checkSubType< wxStatusBar >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStatusBar::base_SetStatusWidths(int, const int *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxStatusBar::SetStatusWidths(n, widths_field);

		return 0;
	}


	// Operator binds:

};

wxStatusBar* LunaTraits< wxStatusBar >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStatusBar::_bind_ctor(L);
}

void LunaTraits< wxStatusBar >::_bind_dtor(wxStatusBar* obj) {
	delete obj;
}

const char LunaTraits< wxStatusBar >::className[] = "wxStatusBar";
const char LunaTraits< wxStatusBar >::fullName[] = "wxStatusBar";
const char LunaTraits< wxStatusBar >::moduleName[] = "wx";
const char* LunaTraits< wxStatusBar >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxStatusBar >::hash = 84175488;
const int LunaTraits< wxStatusBar >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxStatusBar >::methods[] = {
	{"Create", &luna_wrapper_wxStatusBar::_bind_Create},
	{"GetFieldRect", &luna_wrapper_wxStatusBar::_bind_GetFieldRect},
	{"GetFieldsCount", &luna_wrapper_wxStatusBar::_bind_GetFieldsCount},
	{"GetField", &luna_wrapper_wxStatusBar::_bind_GetField},
	{"GetBorders", &luna_wrapper_wxStatusBar::_bind_GetBorders},
	{"GetStatusText", &luna_wrapper_wxStatusBar::_bind_GetStatusText},
	{"GetStatusWidth", &luna_wrapper_wxStatusBar::_bind_GetStatusWidth},
	{"GetStatusStyle", &luna_wrapper_wxStatusBar::_bind_GetStatusStyle},
	{"PopStatusText", &luna_wrapper_wxStatusBar::_bind_PopStatusText},
	{"PushStatusText", &luna_wrapper_wxStatusBar::_bind_PushStatusText},
	{"SetFieldsCount", &luna_wrapper_wxStatusBar::_bind_SetFieldsCount},
	{"SetMinHeight", &luna_wrapper_wxStatusBar::_bind_SetMinHeight},
	{"SetStatusStyles", &luna_wrapper_wxStatusBar::_bind_SetStatusStyles},
	{"SetStatusText", &luna_wrapper_wxStatusBar::_bind_SetStatusText},
	{"SetStatusWidths", &luna_wrapper_wxStatusBar::_bind_SetStatusWidths},
	{"setFieldsCountVector", &luna_wrapper_wxStatusBar::_bind_setFieldsCountVector},
	{"setStatusWidthsVector", &luna_wrapper_wxStatusBar::_bind_setStatusWidthsVector},
	{"setStatusStylesVector", &luna_wrapper_wxStatusBar::_bind_setStatusStylesVector},
	{"base_GetClassInfo", &luna_wrapper_wxStatusBar::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxStatusBar::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxStatusBar::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxStatusBar::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxStatusBar::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxStatusBar::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxStatusBar::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxStatusBar::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxStatusBar::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxStatusBar::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxStatusBar::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxStatusBar::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxStatusBar::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxStatusBar::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxStatusBar::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxStatusBar::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxStatusBar::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxStatusBar::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxStatusBar::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxStatusBar::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxStatusBar::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxStatusBar::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxStatusBar::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxStatusBar::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxStatusBar::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxStatusBar::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxStatusBar::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxStatusBar::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxStatusBar::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxStatusBar::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxStatusBar::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxStatusBar::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxStatusBar::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxStatusBar::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxStatusBar::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxStatusBar::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxStatusBar::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxStatusBar::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxStatusBar::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxStatusBar::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxStatusBar::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxStatusBar::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxStatusBar::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxStatusBar::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxStatusBar::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxStatusBar::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxStatusBar::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxStatusBar::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxStatusBar::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxStatusBar::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxStatusBar::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxStatusBar::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxStatusBar::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxStatusBar::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxStatusBar::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxStatusBar::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxStatusBar::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxStatusBar::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxStatusBar::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxStatusBar::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxStatusBar::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxStatusBar::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxStatusBar::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxStatusBar::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxStatusBar::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxStatusBar::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxStatusBar::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxStatusBar::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxStatusBar::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxStatusBar::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxStatusBar::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxStatusBar::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxStatusBar::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxStatusBar::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxStatusBar::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxStatusBar::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxStatusBar::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxStatusBar::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxStatusBar::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxStatusBar::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxStatusBar::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxStatusBar::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxStatusBar::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxStatusBar::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxStatusBar::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxStatusBar::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxStatusBar::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxStatusBar::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxStatusBar::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxStatusBar::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxStatusBar::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxStatusBar::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxStatusBar::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxStatusBar::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxStatusBar::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxStatusBar::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxStatusBar::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxStatusBar::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxStatusBar::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxStatusBar::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxStatusBar::_bind_base_SetLabel},
	{"base_GetFieldRect", &luna_wrapper_wxStatusBar::_bind_base_GetFieldRect},
	{"base_GetStatusText", &luna_wrapper_wxStatusBar::_bind_base_GetStatusText},
	{"base_SetFieldsCount", &luna_wrapper_wxStatusBar::_bind_base_SetFieldsCount},
	{"base_SetMinHeight", &luna_wrapper_wxStatusBar::_bind_base_SetMinHeight},
	{"base_SetStatusStyles", &luna_wrapper_wxStatusBar::_bind_base_SetStatusStyles},
	{"base_SetStatusText", &luna_wrapper_wxStatusBar::_bind_base_SetStatusText},
	{"base_SetStatusWidths", &luna_wrapper_wxStatusBar::_bind_base_SetStatusWidths},
	{"fromVoid", &luna_wrapper_wxStatusBar::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxStatusBar::_bind_asVoid},
	{"getTable", &luna_wrapper_wxStatusBar::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxStatusBar >::converters[] = {
	{"wxObject", &luna_wrapper_wxStatusBar::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStatusBar >::enumValues[] = {
	{0,0}
};


