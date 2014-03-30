#include <plug_common.h>

#include <luna/wrappers/wrapper_wxWindow.h>

class luna_wrapper_wxWindow {
public:
	typedef Luna< wxWindow > luna_t;

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

		wxWindow* self= (wxWindow*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxWindow >::push(L,self,false);
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
		//wxWindow* ptr= dynamic_cast< wxWindow* >(Luna< wxObject >::check(L,1));
		wxWindow* ptr= luna_caster< wxObject, wxWindow >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxWindow >::push(L,ptr,false);
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
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
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
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
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
		if( luatop<3 || luatop>7 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AcceptsFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AcceptsFocusFromKeyboard(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AcceptsFocusRecursively(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCanFocus(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFocusFromKbd(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_AddChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroyChildren(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FindWindow_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindWindow_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildren_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetChildren_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RemoveChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetGrandParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNextSibling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPrevSibling(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Reparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AlwaysShowScrollbars(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetScrollPos(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetScrollRange(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetScrollThumb(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CanScroll(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasScrollbar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsScrollbarAlwaysShown(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollLines(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollPages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollWindow(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LineUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LineDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PageUp(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PageDown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetScrollPos(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetScrollbar(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CacheBestSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClientToWindowSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WindowToClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Fit(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FitInside(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBestSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClientSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEffectiveMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxClientSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMinHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetMaxHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVirtualSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetVirtualSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBestVirtualSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindowBorderSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InformFirstDirection(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InvalidateBestSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PostSizeEvent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PostSizeEventToParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SendSizeEvent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SendSizeEventToParent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetClientSize_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetContainingSizer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetInitialSize(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaxClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMaxSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinClientSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetMinSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSize_overload_4(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSizeHints_overload_1(lua_State *L) {
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

	inline static bool _lg_typecheck_SetSizeHints_overload_2(lua_State *L) {
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

	inline static bool _lg_typecheck_SetVirtualSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetVirtualSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Center(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CenterOnParent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Centre(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CentreOnParent(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetScreenPosition_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetScreenPosition_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetScreenRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientAreaOrigin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetClientRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Move_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Move_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClientToScreen_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClientToScreen_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertDialogToPixels_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertDialogToPixels_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertPixelsToDialog_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ConvertPixelsToDialog_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20268751) ) return false;
		if( (!(Luna< wxSize >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScreenToClient_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScreenToClient_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearBackground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Freeze(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Thaw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFrozen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetBackgroundStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCharHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCharWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDefaultAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFont(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetForegroundColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTextExtent_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,3625364)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,3625364)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,3625364)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,56813631)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxObject >::checkSubType< wxFont >(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextExtent_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetUpdateRegion(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetUpdateClientRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasTransparentBackground(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Refresh(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,20234418)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetForegroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOwnBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOwnFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetOwnForegroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPalette(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShouldInheritColours(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetThemeEnabled(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetThemeEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CanSetTransparent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetTransparent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetEventHandler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HandleAsNavigationKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HandleWindowEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessWindowEvent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ProcessWindowEventLocally(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopEventHandler(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PushEventHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveEventHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetEventHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetNextHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPreviousHandler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetExtraStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindowStyle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasExtraStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetExtraStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindowStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToggleWindowStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveAfterInTabOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_MoveBeforeInTabOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Navigate(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_NavigateIn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Lower(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Raise(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Hide(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HideWithEffect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsExposed_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExposed_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExposed_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExposed_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,20234418) ) return false;
		if( (!(Luna< wxRect >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsShown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsShownOnScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Disable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Enable(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Show(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowWithEffect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHelpText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetHelpText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHelpTextAtPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetToolTip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolTipText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetToolTip_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetToolTip_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxToolTip >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnsetToolTip(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPopupMenuSelectionFromUser_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxMenu >(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPopupMenuSelectionFromUser_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxMenu >(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopupMenu_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxMenu >(L,2)) ) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PopupMenu_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxMenu >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetValidator(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetValidator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_TransferDataFromWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_TransferDataToWindow(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Validate(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLabel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetWindowVariant(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetLayoutDirection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindowVariant(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAcceleratorTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAcceleratorTable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Close(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Destroy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsBeingDeleted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDropTarget(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDropTarget(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93694316)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DragAcceptFiles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetContainingSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSizer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetSizer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSizerAndFit(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetConstraints(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetConstraints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetAutoLayout(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAutoLayout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CaptureMouse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCaret(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCursor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasCapture(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReleaseMouse(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetCaret(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,13309003)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetCursor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WarpPointer(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HitTest_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HitTest_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBorder_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBorder_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DoUpdateWindowUI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetHandle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasMultiplePages(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InheritAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InitDialog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsRetained(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsThisEnabled(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsTopLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_MakeModal(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnInternalIdle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_RegisterHotKey(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnregisterHotKey(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateWindowUI(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetClassDefaultAttributes(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindFocus(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_FindWindowById(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindWindowByLabel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindWindowByName(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCapture(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_NewControlId(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnreserveControlId(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxWindow::wxWindow()
	static wxWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow::wxWindow() function, expected prototype:\nwxWindow::wxWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxWindow();
	}

	// wxWindow::wxWindow(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr)
	static wxWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow::wxWindow(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr) function, expected prototype:\nwxWindow::wxWindow(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWindow::wxWindow function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::wxWindow function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)0;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxWindow(parent, id, pos, size, style, name);
	}

	// wxWindow::wxWindow(lua_Table * data)
	static wxWindow* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow::wxWindow(lua_Table * data) function, expected prototype:\nwxWindow::wxWindow(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxWindow(L,NULL);
	}

	// wxWindow::wxWindow(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr)
	static wxWindow* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow::wxWindow(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr) function, expected prototype:\nwxWindow::wxWindow(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWindow::wxWindow function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::wxWindow function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_wxWindow(L,NULL, parent, id, pos, size, style, name);
	}

	// Overload binder for wxWindow::wxWindow
	static wxWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxWindow, cannot match any of the overloads for function wxWindow:\n  wxWindow()\n  wxWindow(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n  wxWindow(lua_Table *)\n  wxWindow(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxWindow::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr) function, expected prototype:\nbool wxWindow::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxString & name = wxPanelNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWindow::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)0;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::AcceptsFocus() const
	static int _bind_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::AcceptsFocus() const function, expected prototype:\nbool wxWindow::AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	static int _bind_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxWindow::AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::AcceptsFocusRecursively() const
	static int _bind_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::AcceptsFocusRecursively() const function, expected prototype:\nbool wxWindow::AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::HasFocus() const
	static int _bind_HasFocus(lua_State *L) {
		if (!_lg_typecheck_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasFocus() const function, expected prototype:\nbool wxWindow::HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetCanFocus(bool canFocus)
	static int _bind_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxWindow::SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCanFocus(canFocus);

		return 0;
	}

	// void wxWindow::SetFocus()
	static int _bind_SetFocus(lua_State *L) {
		if (!_lg_typecheck_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetFocus() function, expected prototype:\nvoid wxWindow::SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFocus();

		return 0;
	}

	// void wxWindow::SetFocusFromKbd()
	static int _bind_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetFocusFromKbd() function, expected prototype:\nvoid wxWindow::SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFocusFromKbd();

		return 0;
	}

	// void wxWindow::AddChild(wxWindow * child)
	static int _bind_AddChild(lua_State *L) {
		if (!_lg_typecheck_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::AddChild(wxWindow * child) function, expected prototype:\nvoid wxWindow::AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddChild(child);

		return 0;
	}

	// bool wxWindow::DestroyChildren()
	static int _bind_DestroyChildren(lua_State *L) {
		if (!_lg_typecheck_DestroyChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::DestroyChildren() function, expected prototype:\nbool wxWindow::DestroyChildren()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::DestroyChildren(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DestroyChildren();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxWindow * wxWindow::FindWindow(long id) const
	static int _bind_FindWindow_overload_1(lua_State *L) {
		if (!_lg_typecheck_FindWindow_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::FindWindow(long id) const function, expected prototype:\nwxWindow * wxWindow::FindWindow(long id) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long id=(long)lua_tonumber(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::FindWindow(long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->FindWindow(id);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxWindow::FindWindow(const wxString & name) const
	static int _bind_FindWindow_overload_2(lua_State *L) {
		if (!_lg_typecheck_FindWindow_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::FindWindow(const wxString & name) const function, expected prototype:\nwxWindow * wxWindow::FindWindow(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::FindWindow(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->FindWindow(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxWindow::FindWindow
	static int _bind_FindWindow(lua_State *L) {
		if (_lg_typecheck_FindWindow_overload_1(L)) return _bind_FindWindow_overload_1(L);
		if (_lg_typecheck_FindWindow_overload_2(L)) return _bind_FindWindow_overload_2(L);

		luaL_error(L, "error in function FindWindow, cannot match any of the overloads for function FindWindow:\n  FindWindow(long)\n  FindWindow(const wxString &)\n");
		return 0;
	}

	// wxWindowList & wxWindow::GetChildren()
	static int _bind_GetChildren_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetChildren_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxWindowList & wxWindow::GetChildren() function, expected prototype:\nwxWindowList & wxWindow::GetChildren()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindowList & wxWindow::GetChildren(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxWindowList* lret = &self->GetChildren();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindowList >::push(L,lret,false);

		return 1;
	}

	// const wxWindowList & wxWindow::GetChildren() const
	static int _bind_GetChildren_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetChildren_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const wxWindowList & wxWindow::GetChildren() const function, expected prototype:\nconst wxWindowList & wxWindow::GetChildren() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxWindowList & wxWindow::GetChildren() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxWindowList* lret = &self->GetChildren();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindowList >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxWindow::GetChildren
	static int _bind_GetChildren(lua_State *L) {
		if (_lg_typecheck_GetChildren_overload_1(L)) return _bind_GetChildren_overload_1(L);
		if (_lg_typecheck_GetChildren_overload_2(L)) return _bind_GetChildren_overload_2(L);

		luaL_error(L, "error in function GetChildren, cannot match any of the overloads for function GetChildren:\n  GetChildren()\n  GetChildren()\n");
		return 0;
	}

	// void wxWindow::RemoveChild(wxWindow * child)
	static int _bind_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxWindow::RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveChild(child);

		return 0;
	}

	// wxWindow * wxWindow::GetGrandParent() const
	static int _bind_GetGrandParent(lua_State *L) {
		if (!_lg_typecheck_GetGrandParent(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::GetGrandParent() const function, expected prototype:\nwxWindow * wxWindow::GetGrandParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::GetGrandParent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetGrandParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxWindow::GetNextSibling() const
	static int _bind_GetNextSibling(lua_State *L) {
		if (!_lg_typecheck_GetNextSibling(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::GetNextSibling() const function, expected prototype:\nwxWindow * wxWindow::GetNextSibling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::GetNextSibling() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetNextSibling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxWindow::GetParent() const
	static int _bind_GetParent(lua_State *L) {
		if (!_lg_typecheck_GetParent(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::GetParent() const function, expected prototype:\nwxWindow * wxWindow::GetParent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::GetParent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxWindow * wxWindow::GetPrevSibling() const
	static int _bind_GetPrevSibling(lua_State *L) {
		if (!_lg_typecheck_GetPrevSibling(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxWindow::GetPrevSibling() const function, expected prototype:\nwxWindow * wxWindow::GetPrevSibling() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxWindow::GetPrevSibling() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetPrevSibling();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// bool wxWindow::Reparent(wxWindow * newParent)
	static int _bind_Reparent(lua_State *L) {
		if (!_lg_typecheck_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::Reparent(wxWindow * newParent) function, expected prototype:\nbool wxWindow::Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxWindow::GetScrollPos(int orientation) const
	static int _bind_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetScrollPos(int orientation) const function, expected prototype:\nint wxWindow::GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetScrollRange(int orientation) const
	static int _bind_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetScrollRange(int orientation) const function, expected prototype:\nint wxWindow::GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetScrollThumb(int orientation) const
	static int _bind_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetScrollThumb(int orientation) const function, expected prototype:\nint wxWindow::GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxWindow::CanScroll(int orient) const
	static int _bind_CanScroll(lua_State *L) {
		if (!_lg_typecheck_CanScroll(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::CanScroll(int orient) const function, expected prototype:\nbool wxWindow::CanScroll(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::CanScroll(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanScroll(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::HasScrollbar(int orient) const
	static int _bind_HasScrollbar(lua_State *L) {
		if (!_lg_typecheck_HasScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasScrollbar(int orient) const function, expected prototype:\nbool wxWindow::HasScrollbar(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::HasScrollbar(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasScrollbar(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	static int _bind_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxWindow::IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::ScrollLines(int lines)
	static int _bind_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::ScrollLines(int lines) function, expected prototype:\nbool wxWindow::ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::ScrollPages(int pages)
	static int _bind_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::ScrollPages(int pages) function, expected prototype:\nbool wxWindow::ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScrollWindow(dx, dy, rect);

		return 0;
	}

	// bool wxWindow::LineUp()
	static int _bind_LineUp(lua_State *L) {
		if (!_lg_typecheck_LineUp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::LineUp() function, expected prototype:\nbool wxWindow::LineUp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::LineUp(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LineUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::LineDown()
	static int _bind_LineDown(lua_State *L) {
		if (!_lg_typecheck_LineDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::LineDown() function, expected prototype:\nbool wxWindow::LineDown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::LineDown(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LineDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::PageUp()
	static int _bind_PageUp(lua_State *L) {
		if (!_lg_typecheck_PageUp(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::PageUp() function, expected prototype:\nbool wxWindow::PageUp()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::PageUp(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PageUp();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::PageDown()
	static int _bind_PageDown(lua_State *L) {
		if (!_lg_typecheck_PageDown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::PageDown() function, expected prototype:\nbool wxWindow::PageDown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::PageDown(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PageDown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// void wxWindow::CacheBestSize(const wxSize & size) const
	static int _bind_CacheBestSize(lua_State *L) {
		if (!_lg_typecheck_CacheBestSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::CacheBestSize(const wxSize & size) const function, expected prototype:\nvoid wxWindow::CacheBestSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::CacheBestSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::CacheBestSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CacheBestSize(size);

		return 0;
	}

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	static int _bind_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxWindow::ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	static int _bind_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxWindow::WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::Fit()
	static int _bind_Fit(lua_State *L) {
		if (!_lg_typecheck_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::Fit() function, expected prototype:\nvoid wxWindow::Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Fit();

		return 0;
	}

	// void wxWindow::FitInside()
	static int _bind_FitInside(lua_State *L) {
		if (!_lg_typecheck_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::FitInside() function, expected prototype:\nvoid wxWindow::FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FitInside();

		return 0;
	}

	// wxSize wxWindow::GetBestSize() const
	static int _bind_GetBestSize(lua_State *L) {
		if (!_lg_typecheck_GetBestSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetBestSize() const function, expected prototype:\nwxSize wxWindow::GetBestSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetBestSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetBestSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::GetClientSize(int * width, int * height) const
	static int _bind_GetClientSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetClientSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::GetClientSize(int * width, int * height) const function, expected prototype:\nvoid wxWindow::GetClientSize(int * width, int * height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* width=(int*)Luna< void >::check(L,2);
		int* height=(int*)Luna< void >::check(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::GetClientSize(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetClientSize(width, height);

		return 0;
	}

	// wxSize wxWindow::GetClientSize() const
	static int _bind_GetClientSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetClientSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetClientSize() const function, expected prototype:\nwxSize wxWindow::GetClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::GetClientSize
	static int _bind_GetClientSize(lua_State *L) {
		if (_lg_typecheck_GetClientSize_overload_1(L)) return _bind_GetClientSize_overload_1(L);
		if (_lg_typecheck_GetClientSize_overload_2(L)) return _bind_GetClientSize_overload_2(L);

		luaL_error(L, "error in function GetClientSize, cannot match any of the overloads for function GetClientSize:\n  GetClientSize(int *, int *)\n  GetClientSize()\n");
		return 0;
	}

	// wxSize wxWindow::GetEffectiveMinSize() const
	static int _bind_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetEffectiveMinSize() const function, expected prototype:\nwxSize wxWindow::GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::GetMaxClientSize() const
	static int _bind_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetMaxClientSize() const function, expected prototype:\nwxSize wxWindow::GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::GetMaxSize() const
	static int _bind_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetMaxSize() const function, expected prototype:\nwxSize wxWindow::GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::GetMinClientSize() const
	static int _bind_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetMinClientSize() const function, expected prototype:\nwxSize wxWindow::GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::GetMinSize() const
	static int _bind_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetMinSize() const function, expected prototype:\nwxSize wxWindow::GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxWindow::GetMinWidth() const
	static int _bind_GetMinWidth(lua_State *L) {
		if (!_lg_typecheck_GetMinWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetMinWidth() const function, expected prototype:\nint wxWindow::GetMinWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetMinWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMinWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetMinHeight() const
	static int _bind_GetMinHeight(lua_State *L) {
		if (!_lg_typecheck_GetMinHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetMinHeight() const function, expected prototype:\nint wxWindow::GetMinHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetMinHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMinHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetMaxWidth() const
	static int _bind_GetMaxWidth(lua_State *L) {
		if (!_lg_typecheck_GetMaxWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetMaxWidth() const function, expected prototype:\nint wxWindow::GetMaxWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetMaxWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMaxWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetMaxHeight() const
	static int _bind_GetMaxHeight(lua_State *L) {
		if (!_lg_typecheck_GetMaxHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetMaxHeight() const function, expected prototype:\nint wxWindow::GetMaxHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetMaxHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetMaxHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxWindow::GetSize(int * width, int * height) const
	static int _bind_GetSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::GetSize(int * width, int * height) const function, expected prototype:\nvoid wxWindow::GetSize(int * width, int * height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* width=(int*)Luna< void >::check(L,2);
		int* height=(int*)Luna< void >::check(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::GetSize(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetSize(width, height);

		return 0;
	}

	// wxSize wxWindow::GetSize() const
	static int _bind_GetSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetSize() const function, expected prototype:\nwxSize wxWindow::GetSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::GetSize
	static int _bind_GetSize(lua_State *L) {
		if (_lg_typecheck_GetSize_overload_1(L)) return _bind_GetSize_overload_1(L);
		if (_lg_typecheck_GetSize_overload_2(L)) return _bind_GetSize_overload_2(L);

		luaL_error(L, "error in function GetSize, cannot match any of the overloads for function GetSize:\n  GetSize(int *, int *)\n  GetSize()\n");
		return 0;
	}

	// wxSize wxWindow::GetVirtualSize() const
	static int _bind_GetVirtualSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetVirtualSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetVirtualSize() const function, expected prototype:\nwxSize wxWindow::GetVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::GetVirtualSize(int * width, int * height) const
	static int _bind_GetVirtualSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetVirtualSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::GetVirtualSize(int * width, int * height) const function, expected prototype:\nvoid wxWindow::GetVirtualSize(int * width, int * height) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* width=(int*)Luna< void >::check(L,2);
		int* height=(int*)Luna< void >::check(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::GetVirtualSize(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetVirtualSize(width, height);

		return 0;
	}

	// Overload binder for wxWindow::GetVirtualSize
	static int _bind_GetVirtualSize(lua_State *L) {
		if (_lg_typecheck_GetVirtualSize_overload_1(L)) return _bind_GetVirtualSize_overload_1(L);
		if (_lg_typecheck_GetVirtualSize_overload_2(L)) return _bind_GetVirtualSize_overload_2(L);

		luaL_error(L, "error in function GetVirtualSize, cannot match any of the overloads for function GetVirtualSize:\n  GetVirtualSize()\n  GetVirtualSize(int *, int *)\n");
		return 0;
	}

	// wxSize wxWindow::GetBestVirtualSize() const
	static int _bind_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetBestVirtualSize() const function, expected prototype:\nwxSize wxWindow::GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::GetWindowBorderSize() const
	static int _bind_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetWindowBorderSize() const function, expected prototype:\nwxSize wxWindow::GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::InvalidateBestSize()
	static int _bind_InvalidateBestSize(lua_State *L) {
		if (!_lg_typecheck_InvalidateBestSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::InvalidateBestSize() function, expected prototype:\nvoid wxWindow::InvalidateBestSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::InvalidateBestSize(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InvalidateBestSize();

		return 0;
	}

	// void wxWindow::PostSizeEvent()
	static int _bind_PostSizeEvent(lua_State *L) {
		if (!_lg_typecheck_PostSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::PostSizeEvent() function, expected prototype:\nvoid wxWindow::PostSizeEvent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::PostSizeEvent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PostSizeEvent();

		return 0;
	}

	// void wxWindow::PostSizeEventToParent()
	static int _bind_PostSizeEventToParent(lua_State *L) {
		if (!_lg_typecheck_PostSizeEventToParent(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::PostSizeEventToParent() function, expected prototype:\nvoid wxWindow::PostSizeEventToParent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::PostSizeEventToParent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PostSizeEventToParent();

		return 0;
	}

	// void wxWindow::SendSizeEvent(int flags = 0)
	static int _bind_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxWindow::SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SendSizeEvent(flags);

		return 0;
	}

	// void wxWindow::SendSizeEventToParent(int flags = 0)
	static int _bind_SendSizeEventToParent(lua_State *L) {
		if (!_lg_typecheck_SendSizeEventToParent(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SendSizeEventToParent(int flags = 0) function, expected prototype:\nvoid wxWindow::SendSizeEventToParent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SendSizeEventToParent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SendSizeEventToParent(flags);

		return 0;
	}

	// void wxWindow::SetClientSize(int width, int height)
	static int _bind_SetClientSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetClientSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetClientSize(int width, int height) function, expected prototype:\nvoid wxWindow::SetClientSize(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetClientSize(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClientSize(width, height);

		return 0;
	}

	// void wxWindow::SetClientSize(const wxSize & size)
	static int _bind_SetClientSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetClientSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetClientSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClientSize(size);

		return 0;
	}

	// void wxWindow::SetClientSize(const wxRect & rect)
	static int _bind_SetClientSize_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetClientSize_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetClientSize(const wxRect & rect) function, expected prototype:\nvoid wxWindow::SetClientSize(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxWindow::SetClientSize function");
		}
		const wxRect & rect=*rect_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetClientSize(const wxRect &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetClientSize(rect);

		return 0;
	}

	// Overload binder for wxWindow::SetClientSize
	static int _bind_SetClientSize(lua_State *L) {
		if (_lg_typecheck_SetClientSize_overload_1(L)) return _bind_SetClientSize_overload_1(L);
		if (_lg_typecheck_SetClientSize_overload_2(L)) return _bind_SetClientSize_overload_2(L);
		if (_lg_typecheck_SetClientSize_overload_3(L)) return _bind_SetClientSize_overload_3(L);

		luaL_error(L, "error in function SetClientSize, cannot match any of the overloads for function SetClientSize:\n  SetClientSize(int, int)\n  SetClientSize(const wxSize &)\n  SetClientSize(const wxRect &)\n");
		return 0;
	}

	// void wxWindow::SetContainingSizer(wxSizer * sizer)
	static int _bind_SetContainingSizer(lua_State *L) {
		if (!_lg_typecheck_SetContainingSizer(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetContainingSizer(wxSizer * sizer) function, expected prototype:\nvoid wxWindow::SetContainingSizer(wxSizer * sizer)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetContainingSizer(wxSizer *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetContainingSizer(sizer);

		return 0;
	}

	// void wxWindow::SetInitialSize(const wxSize & size = wxDefaultSize)
	static int _bind_SetInitialSize(lua_State *L) {
		if (!_lg_typecheck_SetInitialSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetInitialSize(const wxSize & size = wxDefaultSize) function, expected prototype:\nvoid wxWindow::SetInitialSize(const wxSize & size = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* size_ptr=luatop>1 ? (Luna< wxSize >::check(L,2)) : NULL;
		if( luatop>1 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetInitialSize function");
		}
		const wxSize & size=luatop>1 ? *size_ptr : (const wxSize&)wxDefaultSize;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetInitialSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetInitialSize(size);

		return 0;
	}

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	static int _bind_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMaxClientSize(size);

		return 0;
	}

	// void wxWindow::SetMaxSize(const wxSize & size)
	static int _bind_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMaxSize(size);

		return 0;
	}

	// void wxWindow::SetMinClientSize(const wxSize & size)
	static int _bind_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMinClientSize(size);

		return 0;
	}

	// void wxWindow::SetMinSize(const wxSize & size)
	static int _bind_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetMinSize(size);

		return 0;
	}

	// void wxWindow::SetSize(int x, int y, int width, int height, int sizeFlags = wxSIZE_AUTO)
	static int _bind_SetSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSize(int x, int y, int width, int height, int sizeFlags = wxSIZE_AUTO) function, expected prototype:\nvoid wxWindow::SetSize(int x, int y, int width, int height, int sizeFlags = wxSIZE_AUTO)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		int sizeFlags=luatop>5 ? (int)lua_tointeger(L,6) : (int)wxSIZE_AUTO;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetSize(int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSize(x, y, width, height, sizeFlags);

		return 0;
	}

	// void wxWindow::SetSize(const wxRect & rect)
	static int _bind_SetSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSize(const wxRect & rect) function, expected prototype:\nvoid wxWindow::SetSize(const wxRect & rect)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxWindow::SetSize function");
		}
		const wxRect & rect=*rect_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetSize(const wxRect &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSize(rect);

		return 0;
	}

	// void wxWindow::SetSize(const wxSize & size)
	static int _bind_SetSize_overload_3(lua_State *L) {
		if (!_lg_typecheck_SetSize_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSize(size);

		return 0;
	}

	// void wxWindow::SetSize(int width, int height)
	static int _bind_SetSize_overload_4(lua_State *L) {
		if (!_lg_typecheck_SetSize_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSize(int width, int height) function, expected prototype:\nvoid wxWindow::SetSize(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetSize(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSize(width, height);

		return 0;
	}

	// Overload binder for wxWindow::SetSize
	static int _bind_SetSize(lua_State *L) {
		if (_lg_typecheck_SetSize_overload_1(L)) return _bind_SetSize_overload_1(L);
		if (_lg_typecheck_SetSize_overload_2(L)) return _bind_SetSize_overload_2(L);
		if (_lg_typecheck_SetSize_overload_3(L)) return _bind_SetSize_overload_3(L);
		if (_lg_typecheck_SetSize_overload_4(L)) return _bind_SetSize_overload_4(L);

		luaL_error(L, "error in function SetSize, cannot match any of the overloads for function SetSize:\n  SetSize(int, int, int, int, int)\n  SetSize(const wxRect &)\n  SetSize(const wxSize &)\n  SetSize(int, int)\n");
		return 0;
	}

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxWindow::SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxWindow::SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxWindow::SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxWindow::SetSizeHints
	static int _bind_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_SetSizeHints_overload_1(L)) return _bind_SetSizeHints_overload_1(L);
		if (_lg_typecheck_SetSizeHints_overload_2(L)) return _bind_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function SetSizeHints, cannot match any of the overloads for function SetSizeHints:\n  SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// void wxWindow::SetVirtualSize(int width, int height)
	static int _bind_SetVirtualSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetVirtualSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetVirtualSize(int width, int height) function, expected prototype:\nvoid wxWindow::SetVirtualSize(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetVirtualSize(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVirtualSize(width, height);

		return 0;
	}

	// void wxWindow::SetVirtualSize(const wxSize & size)
	static int _bind_SetVirtualSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetVirtualSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetVirtualSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::SetVirtualSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::SetVirtualSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetVirtualSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetVirtualSize(size);

		return 0;
	}

	// Overload binder for wxWindow::SetVirtualSize
	static int _bind_SetVirtualSize(lua_State *L) {
		if (_lg_typecheck_SetVirtualSize_overload_1(L)) return _bind_SetVirtualSize_overload_1(L);
		if (_lg_typecheck_SetVirtualSize_overload_2(L)) return _bind_SetVirtualSize_overload_2(L);

		luaL_error(L, "error in function SetVirtualSize, cannot match any of the overloads for function SetVirtualSize:\n  SetVirtualSize(int, int)\n  SetVirtualSize(const wxSize &)\n");
		return 0;
	}

	// void wxWindow::Center(int dir = ::wxBOTH)
	static int _bind_Center(lua_State *L) {
		if (!_lg_typecheck_Center(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::Center(int dir = ::wxBOTH) function, expected prototype:\nvoid wxWindow::Center(int dir = ::wxBOTH)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dir=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxBOTH;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::Center(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Center(dir);

		return 0;
	}

	// void wxWindow::CenterOnParent(int dir = ::wxBOTH)
	static int _bind_CenterOnParent(lua_State *L) {
		if (!_lg_typecheck_CenterOnParent(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::CenterOnParent(int dir = ::wxBOTH) function, expected prototype:\nvoid wxWindow::CenterOnParent(int dir = ::wxBOTH)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dir=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxBOTH;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::CenterOnParent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CenterOnParent(dir);

		return 0;
	}

	// void wxWindow::Centre(int direction = ::wxBOTH)
	static int _bind_Centre(lua_State *L) {
		if (!_lg_typecheck_Centre(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::Centre(int direction = ::wxBOTH) function, expected prototype:\nvoid wxWindow::Centre(int direction = ::wxBOTH)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int direction=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxBOTH;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::Centre(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Centre(direction);

		return 0;
	}

	// void wxWindow::CentreOnParent(int direction = ::wxBOTH)
	static int _bind_CentreOnParent(lua_State *L) {
		if (!_lg_typecheck_CentreOnParent(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::CentreOnParent(int direction = ::wxBOTH) function, expected prototype:\nvoid wxWindow::CentreOnParent(int direction = ::wxBOTH)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int direction=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxBOTH;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::CentreOnParent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CentreOnParent(direction);

		return 0;
	}

	// void wxWindow::GetPosition(int * x, int * y) const
	static int _bind_GetPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::GetPosition(int * x, int * y) const function, expected prototype:\nvoid wxWindow::GetPosition(int * x, int * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* x=(int*)Luna< void >::check(L,2);
		int* y=(int*)Luna< void >::check(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::GetPosition(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetPosition(x, y);

		return 0;
	}

	// wxPoint wxWindow::GetPosition() const
	static int _bind_GetPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPosition_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::GetPosition() const function, expected prototype:\nwxPoint wxWindow::GetPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::GetPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::GetPosition
	static int _bind_GetPosition(lua_State *L) {
		if (_lg_typecheck_GetPosition_overload_1(L)) return _bind_GetPosition_overload_1(L);
		if (_lg_typecheck_GetPosition_overload_2(L)) return _bind_GetPosition_overload_2(L);

		luaL_error(L, "error in function GetPosition, cannot match any of the overloads for function GetPosition:\n  GetPosition(int *, int *)\n  GetPosition()\n");
		return 0;
	}

	// wxRect wxWindow::GetRect() const
	static int _bind_GetRect(lua_State *L) {
		if (!_lg_typecheck_GetRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxWindow::GetRect() const function, expected prototype:\nwxRect wxWindow::GetRect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxWindow::GetRect() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::GetScreenPosition(int * x, int * y) const
	static int _bind_GetScreenPosition_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetScreenPosition_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::GetScreenPosition(int * x, int * y) const function, expected prototype:\nvoid wxWindow::GetScreenPosition(int * x, int * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* x=(int*)Luna< void >::check(L,2);
		int* y=(int*)Luna< void >::check(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::GetScreenPosition(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetScreenPosition(x, y);

		return 0;
	}

	// wxPoint wxWindow::GetScreenPosition() const
	static int _bind_GetScreenPosition_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetScreenPosition_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::GetScreenPosition() const function, expected prototype:\nwxPoint wxWindow::GetScreenPosition() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::GetScreenPosition() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetScreenPosition();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::GetScreenPosition
	static int _bind_GetScreenPosition(lua_State *L) {
		if (_lg_typecheck_GetScreenPosition_overload_1(L)) return _bind_GetScreenPosition_overload_1(L);
		if (_lg_typecheck_GetScreenPosition_overload_2(L)) return _bind_GetScreenPosition_overload_2(L);

		luaL_error(L, "error in function GetScreenPosition, cannot match any of the overloads for function GetScreenPosition:\n  GetScreenPosition(int *, int *)\n  GetScreenPosition()\n");
		return 0;
	}

	// wxRect wxWindow::GetScreenRect() const
	static int _bind_GetScreenRect(lua_State *L) {
		if (!_lg_typecheck_GetScreenRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxWindow::GetScreenRect() const function, expected prototype:\nwxRect wxWindow::GetScreenRect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxWindow::GetScreenRect() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetScreenRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// wxPoint wxWindow::GetClientAreaOrigin() const
	static int _bind_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxWindow::GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxRect wxWindow::GetClientRect() const
	static int _bind_GetClientRect(lua_State *L) {
		if (!_lg_typecheck_GetClientRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxWindow::GetClientRect() const function, expected prototype:\nwxRect wxWindow::GetClientRect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxWindow::GetClientRect() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetClientRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::Move(int x, int y, int flags = wxSIZE_USE_EXISTING)
	static int _bind_Move_overload_1(lua_State *L) {
		if (!_lg_typecheck_Move_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::Move(int x, int y, int flags = wxSIZE_USE_EXISTING) function, expected prototype:\nvoid wxWindow::Move(int x, int y, int flags = wxSIZE_USE_EXISTING)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int flags=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxSIZE_USE_EXISTING;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::Move(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Move(x, y, flags);

		return 0;
	}

	// void wxWindow::Move(const wxPoint & pt, int flags = wxSIZE_USE_EXISTING)
	static int _bind_Move_overload_2(lua_State *L) {
		if (!_lg_typecheck_Move_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::Move(const wxPoint & pt, int flags = wxSIZE_USE_EXISTING) function, expected prototype:\nvoid wxWindow::Move(const wxPoint & pt, int flags = wxSIZE_USE_EXISTING)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::Move function");
		}
		const wxPoint & pt=*pt_ptr;
		int flags=luatop>2 ? (int)lua_tointeger(L,3) : (int)wxSIZE_USE_EXISTING;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::Move(const wxPoint &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Move(pt, flags);

		return 0;
	}

	// Overload binder for wxWindow::Move
	static int _bind_Move(lua_State *L) {
		if (_lg_typecheck_Move_overload_1(L)) return _bind_Move_overload_1(L);
		if (_lg_typecheck_Move_overload_2(L)) return _bind_Move_overload_2(L);

		luaL_error(L, "error in function Move, cannot match any of the overloads for function Move:\n  Move(int, int, int)\n  Move(const wxPoint &, int)\n");
		return 0;
	}

	// void wxWindow::SetPosition(const wxPoint & pt)
	static int _bind_SetPosition(lua_State *L) {
		if (!_lg_typecheck_SetPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetPosition(const wxPoint & pt) function, expected prototype:\nvoid wxWindow::SetPosition(const wxPoint & pt)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::SetPosition function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetPosition(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPosition(pt);

		return 0;
	}

	// void wxWindow::ClientToScreen(int * x, int * y) const
	static int _bind_ClientToScreen_overload_1(lua_State *L) {
		if (!_lg_typecheck_ClientToScreen_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::ClientToScreen(int * x, int * y) const function, expected prototype:\nvoid wxWindow::ClientToScreen(int * x, int * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* x=(int*)Luna< void >::check(L,2);
		int* y=(int*)Luna< void >::check(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::ClientToScreen(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClientToScreen(x, y);

		return 0;
	}

	// wxPoint wxWindow::ClientToScreen(const wxPoint & pt) const
	static int _bind_ClientToScreen_overload_2(lua_State *L) {
		if (!_lg_typecheck_ClientToScreen_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::ClientToScreen(const wxPoint & pt) const function, expected prototype:\nwxPoint wxWindow::ClientToScreen(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::ClientToScreen function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::ClientToScreen(const wxPoint &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->ClientToScreen(pt);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::ClientToScreen
	static int _bind_ClientToScreen(lua_State *L) {
		if (_lg_typecheck_ClientToScreen_overload_1(L)) return _bind_ClientToScreen_overload_1(L);
		if (_lg_typecheck_ClientToScreen_overload_2(L)) return _bind_ClientToScreen_overload_2(L);

		luaL_error(L, "error in function ClientToScreen, cannot match any of the overloads for function ClientToScreen:\n  ClientToScreen(int *, int *)\n  ClientToScreen(const wxPoint &)\n");
		return 0;
	}

	// wxPoint wxWindow::ConvertDialogToPixels(const wxPoint & pt) const
	static int _bind_ConvertDialogToPixels_overload_1(lua_State *L) {
		if (!_lg_typecheck_ConvertDialogToPixels_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::ConvertDialogToPixels(const wxPoint & pt) const function, expected prototype:\nwxPoint wxWindow::ConvertDialogToPixels(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::ConvertDialogToPixels function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::ConvertDialogToPixels(const wxPoint &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->ConvertDialogToPixels(pt);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::ConvertDialogToPixels(const wxSize & sz) const
	static int _bind_ConvertDialogToPixels_overload_2(lua_State *L) {
		if (!_lg_typecheck_ConvertDialogToPixels_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::ConvertDialogToPixels(const wxSize & sz) const function, expected prototype:\nwxSize wxWindow::ConvertDialogToPixels(const wxSize & sz) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxWindow::ConvertDialogToPixels function");
		}
		const wxSize & sz=*sz_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::ConvertDialogToPixels(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->ConvertDialogToPixels(sz);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::ConvertDialogToPixels
	static int _bind_ConvertDialogToPixels(lua_State *L) {
		if (_lg_typecheck_ConvertDialogToPixels_overload_1(L)) return _bind_ConvertDialogToPixels_overload_1(L);
		if (_lg_typecheck_ConvertDialogToPixels_overload_2(L)) return _bind_ConvertDialogToPixels_overload_2(L);

		luaL_error(L, "error in function ConvertDialogToPixels, cannot match any of the overloads for function ConvertDialogToPixels:\n  ConvertDialogToPixels(const wxPoint &)\n  ConvertDialogToPixels(const wxSize &)\n");
		return 0;
	}

	// wxPoint wxWindow::ConvertPixelsToDialog(const wxPoint & pt) const
	static int _bind_ConvertPixelsToDialog_overload_1(lua_State *L) {
		if (!_lg_typecheck_ConvertPixelsToDialog_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::ConvertPixelsToDialog(const wxPoint & pt) const function, expected prototype:\nwxPoint wxWindow::ConvertPixelsToDialog(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::ConvertPixelsToDialog function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::ConvertPixelsToDialog(const wxPoint &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->ConvertPixelsToDialog(pt);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::ConvertPixelsToDialog(const wxSize & sz) const
	static int _bind_ConvertPixelsToDialog_overload_2(lua_State *L) {
		if (!_lg_typecheck_ConvertPixelsToDialog_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::ConvertPixelsToDialog(const wxSize & sz) const function, expected prototype:\nwxSize wxWindow::ConvertPixelsToDialog(const wxSize & sz) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* sz_ptr=(Luna< wxSize >::check(L,2));
		if( !sz_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg sz in wxWindow::ConvertPixelsToDialog function");
		}
		const wxSize & sz=*sz_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::ConvertPixelsToDialog(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->ConvertPixelsToDialog(sz);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::ConvertPixelsToDialog
	static int _bind_ConvertPixelsToDialog(lua_State *L) {
		if (_lg_typecheck_ConvertPixelsToDialog_overload_1(L)) return _bind_ConvertPixelsToDialog_overload_1(L);
		if (_lg_typecheck_ConvertPixelsToDialog_overload_2(L)) return _bind_ConvertPixelsToDialog_overload_2(L);

		luaL_error(L, "error in function ConvertPixelsToDialog, cannot match any of the overloads for function ConvertPixelsToDialog:\n  ConvertPixelsToDialog(const wxPoint &)\n  ConvertPixelsToDialog(const wxSize &)\n");
		return 0;
	}

	// void wxWindow::ScreenToClient(int * x, int * y) const
	static int _bind_ScreenToClient_overload_1(lua_State *L) {
		if (!_lg_typecheck_ScreenToClient_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::ScreenToClient(int * x, int * y) const function, expected prototype:\nvoid wxWindow::ScreenToClient(int * x, int * y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int* x=(int*)Luna< void >::check(L,2);
		int* y=(int*)Luna< void >::check(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::ScreenToClient(int *, int *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenToClient(x, y);

		return 0;
	}

	// wxPoint wxWindow::ScreenToClient(const wxPoint & pt) const
	static int _bind_ScreenToClient_overload_2(lua_State *L) {
		if (!_lg_typecheck_ScreenToClient_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::ScreenToClient(const wxPoint & pt) const function, expected prototype:\nwxPoint wxWindow::ScreenToClient(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::ScreenToClient function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::ScreenToClient(const wxPoint &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->ScreenToClient(pt);
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::ScreenToClient
	static int _bind_ScreenToClient(lua_State *L) {
		if (_lg_typecheck_ScreenToClient_overload_1(L)) return _bind_ScreenToClient_overload_1(L);
		if (_lg_typecheck_ScreenToClient_overload_2(L)) return _bind_ScreenToClient_overload_2(L);

		luaL_error(L, "error in function ScreenToClient, cannot match any of the overloads for function ScreenToClient:\n  ScreenToClient(int *, int *)\n  ScreenToClient(const wxPoint &)\n");
		return 0;
	}

	// void wxWindow::ClearBackground()
	static int _bind_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::ClearBackground() function, expected prototype:\nvoid wxWindow::ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearBackground();

		return 0;
	}

	// void wxWindow::Freeze()
	static int _bind_Freeze(lua_State *L) {
		if (!_lg_typecheck_Freeze(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::Freeze() function, expected prototype:\nvoid wxWindow::Freeze()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::Freeze(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Freeze();

		return 0;
	}

	// void wxWindow::Thaw()
	static int _bind_Thaw(lua_State *L) {
		if (!_lg_typecheck_Thaw(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::Thaw() function, expected prototype:\nvoid wxWindow::Thaw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::Thaw(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Thaw();

		return 0;
	}

	// bool wxWindow::IsFrozen() const
	static int _bind_IsFrozen(lua_State *L) {
		if (!_lg_typecheck_IsFrozen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsFrozen() const function, expected prototype:\nbool wxWindow::IsFrozen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsFrozen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFrozen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour wxWindow::GetBackgroundColour() const
	static int _bind_GetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxWindow::GetBackgroundColour() const function, expected prototype:\nwxColour wxWindow::GetBackgroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxWindow::GetBackgroundColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetBackgroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	static int _bind_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxWindow::GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxWindow::GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxWindow::GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetCharHeight() const
	static int _bind_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetCharHeight() const function, expected prototype:\nint wxWindow::GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetCharWidth() const
	static int _bind_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetCharWidth() const function, expected prototype:\nint wxWindow::GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	static int _bind_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxWindow::GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxWindow::GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxWindow::GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// wxFont wxWindow::GetFont() const
	static int _bind_GetFont(lua_State *L) {
		if (!_lg_typecheck_GetFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxWindow::GetFont() const function, expected prototype:\nwxFont wxWindow::GetFont() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxWindow::GetFont() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetFont();
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// wxColour wxWindow::GetForegroundColour() const
	static int _bind_GetForegroundColour(lua_State *L) {
		if (!_lg_typecheck_GetForegroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxWindow::GetForegroundColour() const function, expected prototype:\nwxColour wxWindow::GetForegroundColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxWindow::GetForegroundColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetForegroundColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::GetTextExtent(const wxString & string, int * w, int * h, int * descent = NULL, int * externalLeading = NULL, const wxFont * font = NULL) const
	static int _bind_GetTextExtent_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetTextExtent_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::GetTextExtent(const wxString & string, int * w, int * h, int * descent = NULL, int * externalLeading = NULL, const wxFont * font = NULL) const function, expected prototype:\nvoid wxWindow::GetTextExtent(const wxString & string, int * w, int * h, int * descent = NULL, int * externalLeading = NULL, const wxFont * font = NULL) const\nClass arguments details:\narg 1 ID = 88196105\narg 6 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString string(lua_tostring(L,2),lua_objlen(L,2));
		int* w=(int*)Luna< void >::check(L,3);
		int* h=(int*)Luna< void >::check(L,4);
		int* descent=luatop>4 ? (int*)Luna< void >::check(L,5) : (int*)NULL;
		int* externalLeading=luatop>5 ? (int*)Luna< void >::check(L,6) : (int*)NULL;
		const wxFont* font=luatop>6 ? (Luna< wxObject >::checkSubType< wxFont >(L,7)) : (const wxFont*)NULL;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::GetTextExtent(const wxString &, int *, int *, int *, int *, const wxFont *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetTextExtent(string, w, h, descent, externalLeading, font);

		return 0;
	}

	// wxSize wxWindow::GetTextExtent(const wxString & string) const
	static int _bind_GetTextExtent_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetTextExtent_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::GetTextExtent(const wxString & string) const function, expected prototype:\nwxSize wxWindow::GetTextExtent(const wxString & string) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString string(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::GetTextExtent(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetTextExtent(string);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxWindow::GetTextExtent
	static int _bind_GetTextExtent(lua_State *L) {
		if (_lg_typecheck_GetTextExtent_overload_1(L)) return _bind_GetTextExtent_overload_1(L);
		if (_lg_typecheck_GetTextExtent_overload_2(L)) return _bind_GetTextExtent_overload_2(L);

		luaL_error(L, "error in function GetTextExtent, cannot match any of the overloads for function GetTextExtent:\n  GetTextExtent(const wxString &, int *, int *, int *, int *, const wxFont *)\n  GetTextExtent(const wxString &)\n");
		return 0;
	}

	// const wxRegion & wxWindow::GetUpdateRegion() const
	static int _bind_GetUpdateRegion(lua_State *L) {
		if (!_lg_typecheck_GetUpdateRegion(L)) {
			luaL_error(L, "luna typecheck failed in const wxRegion & wxWindow::GetUpdateRegion() const function, expected prototype:\nconst wxRegion & wxWindow::GetUpdateRegion() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxRegion & wxWindow::GetUpdateRegion() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxRegion* lret = &self->GetUpdateRegion();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRegion >::push(L,lret,false);

		return 1;
	}

	// wxRect wxWindow::GetUpdateClientRect() const
	static int _bind_GetUpdateClientRect(lua_State *L) {
		if (!_lg_typecheck_GetUpdateClientRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxWindow::GetUpdateClientRect() const function, expected prototype:\nwxRect wxWindow::GetUpdateClientRect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxWindow::GetUpdateClientRect() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetUpdateClientRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// bool wxWindow::HasTransparentBackground()
	static int _bind_HasTransparentBackground(lua_State *L) {
		if (!_lg_typecheck_HasTransparentBackground(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasTransparentBackground() function, expected prototype:\nbool wxWindow::HasTransparentBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::HasTransparentBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasTransparentBackground();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_Refresh(lua_State *L) {
		if (!_lg_typecheck_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxWindow::RefreshRect(const wxRect & rect, bool eraseBackground = true)
	static int _bind_RefreshRect(lua_State *L) {
		if (!_lg_typecheck_RefreshRect(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::RefreshRect(const wxRect & rect, bool eraseBackground = true) function, expected prototype:\nvoid wxWindow::RefreshRect(const wxRect & rect, bool eraseBackground = true)\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxWindow::RefreshRect function");
		}
		const wxRect & rect=*rect_ptr;
		bool eraseBackground=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::RefreshRect(const wxRect &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshRect(rect, eraseBackground);

		return 0;
	}

	// void wxWindow::Update()
	static int _bind_Update(lua_State *L) {
		if (!_lg_typecheck_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::Update() function, expected prototype:\nvoid wxWindow::Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Update();

		return 0;
	}

	// bool wxWindow::SetBackgroundColour(const wxColour & colour)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetBackgroundColour(const wxColour & colour) function, expected prototype:\nbool wxWindow::SetBackgroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxWindow::SetBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::SetBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetBackgroundColour(colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::SetFont(const wxFont & font)
	static int _bind_SetFont(lua_State *L) {
		if (!_lg_typecheck_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetFont(const wxFont & font) function, expected prototype:\nbool wxWindow::SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxWindow::SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::SetForegroundColour(const wxColour & colour)
	static int _bind_SetForegroundColour(lua_State *L) {
		if (!_lg_typecheck_SetForegroundColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetForegroundColour(const wxColour & colour) function, expected prototype:\nbool wxWindow::SetForegroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxWindow::SetForegroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::SetForegroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetForegroundColour(colour);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetOwnBackgroundColour(const wxColour & colour)
	static int _bind_SetOwnBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetOwnBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetOwnBackgroundColour(const wxColour & colour) function, expected prototype:\nvoid wxWindow::SetOwnBackgroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxWindow::SetOwnBackgroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetOwnBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOwnBackgroundColour(colour);

		return 0;
	}

	// void wxWindow::SetOwnFont(const wxFont & font)
	static int _bind_SetOwnFont(lua_State *L) {
		if (!_lg_typecheck_SetOwnFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetOwnFont(const wxFont & font) function, expected prototype:\nvoid wxWindow::SetOwnFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxWindow::SetOwnFont function");
		}
		const wxFont & font=*font_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetOwnFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOwnFont(font);

		return 0;
	}

	// void wxWindow::SetOwnForegroundColour(const wxColour & colour)
	static int _bind_SetOwnForegroundColour(lua_State *L) {
		if (!_lg_typecheck_SetOwnForegroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetOwnForegroundColour(const wxColour & colour) function, expected prototype:\nvoid wxWindow::SetOwnForegroundColour(const wxColour & colour)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* colour_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !colour_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg colour in wxWindow::SetOwnForegroundColour function");
		}
		const wxColour & colour=*colour_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetOwnForegroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOwnForegroundColour(colour);

		return 0;
	}

	// void wxWindow::SetPalette(const wxPalette & pal)
	static int _bind_SetPalette(lua_State *L) {
		if (!_lg_typecheck_SetPalette(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetPalette(const wxPalette & pal) function, expected prototype:\nvoid wxWindow::SetPalette(const wxPalette & pal)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPalette* pal_ptr=(Luna< wxObject >::checkSubType< wxPalette >(L,2));
		if( !pal_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pal in wxWindow::SetPalette function");
		}
		const wxPalette & pal=*pal_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetPalette(const wxPalette &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPalette(pal);

		return 0;
	}

	// bool wxWindow::ShouldInheritColours() const
	static int _bind_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::ShouldInheritColours() const function, expected prototype:\nbool wxWindow::ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetThemeEnabled(bool enable)
	static int _bind_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxWindow::SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetThemeEnabled(enable);

		return 0;
	}

	// bool wxWindow::GetThemeEnabled() const
	static int _bind_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::GetThemeEnabled() const function, expected prototype:\nbool wxWindow::GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::CanSetTransparent()
	static int _bind_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::CanSetTransparent() function, expected prototype:\nbool wxWindow::CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::SetTransparent(unsigned char alpha)
	static int _bind_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxWindow::SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxEvtHandler * wxWindow::GetEventHandler() const
	static int _bind_GetEventHandler(lua_State *L) {
		if (!_lg_typecheck_GetEventHandler(L)) {
			luaL_error(L, "luna typecheck failed in wxEvtHandler * wxWindow::GetEventHandler() const function, expected prototype:\nwxEvtHandler * wxWindow::GetEventHandler() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvtHandler * wxWindow::GetEventHandler() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvtHandler * lret = self->GetEventHandler();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvtHandler >::push(L,lret,false);

		return 1;
	}

	// bool wxWindow::HandleAsNavigationKey(const wxKeyEvent & event)
	static int _bind_HandleAsNavigationKey(lua_State *L) {
		if (!_lg_typecheck_HandleAsNavigationKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::HandleAsNavigationKey(const wxKeyEvent & event) function, expected prototype:\nbool wxWindow::HandleAsNavigationKey(const wxKeyEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxKeyEvent* event_ptr=(Luna< wxObject >::checkSubType< wxKeyEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWindow::HandleAsNavigationKey function");
		}
		const wxKeyEvent & event=*event_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::HandleAsNavigationKey(const wxKeyEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HandleAsNavigationKey(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::HandleWindowEvent(wxEvent & event) const
	static int _bind_HandleWindowEvent(lua_State *L) {
		if (!_lg_typecheck_HandleWindowEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::HandleWindowEvent(wxEvent & event) const function, expected prototype:\nbool wxWindow::HandleWindowEvent(wxEvent & event) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWindow::HandleWindowEvent function");
		}
		wxEvent & event=*event_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::HandleWindowEvent(wxEvent &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HandleWindowEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::ProcessWindowEvent(wxEvent & event)
	static int _bind_ProcessWindowEvent(lua_State *L) {
		if (!_lg_typecheck_ProcessWindowEvent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::ProcessWindowEvent(wxEvent & event) function, expected prototype:\nbool wxWindow::ProcessWindowEvent(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWindow::ProcessWindowEvent function");
		}
		wxEvent & event=*event_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::ProcessWindowEvent(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ProcessWindowEvent(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::ProcessWindowEventLocally(wxEvent & event)
	static int _bind_ProcessWindowEventLocally(lua_State *L) {
		if (!_lg_typecheck_ProcessWindowEventLocally(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::ProcessWindowEventLocally(wxEvent & event) function, expected prototype:\nbool wxWindow::ProcessWindowEventLocally(wxEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvent* event_ptr=(Luna< wxObject >::checkSubType< wxEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWindow::ProcessWindowEventLocally function");
		}
		wxEvent & event=*event_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::ProcessWindowEventLocally(wxEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ProcessWindowEventLocally(event);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxEvtHandler * wxWindow::PopEventHandler(bool deleteHandler = false)
	static int _bind_PopEventHandler(lua_State *L) {
		if (!_lg_typecheck_PopEventHandler(L)) {
			luaL_error(L, "luna typecheck failed in wxEvtHandler * wxWindow::PopEventHandler(bool deleteHandler = false) function, expected prototype:\nwxEvtHandler * wxWindow::PopEventHandler(bool deleteHandler = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool deleteHandler=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxEvtHandler * wxWindow::PopEventHandler(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxEvtHandler * lret = self->PopEventHandler(deleteHandler);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxEvtHandler >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::PushEventHandler(wxEvtHandler * handler)
	static int _bind_PushEventHandler(lua_State *L) {
		if (!_lg_typecheck_PushEventHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::PushEventHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWindow::PushEventHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::PushEventHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PushEventHandler(handler);

		return 0;
	}

	// bool wxWindow::RemoveEventHandler(wxEvtHandler * handler)
	static int _bind_RemoveEventHandler(lua_State *L) {
		if (!_lg_typecheck_RemoveEventHandler(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::RemoveEventHandler(wxEvtHandler * handler) function, expected prototype:\nbool wxWindow::RemoveEventHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::RemoveEventHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemoveEventHandler(handler);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetEventHandler(wxEvtHandler * handler)
	static int _bind_SetEventHandler(lua_State *L) {
		if (!_lg_typecheck_SetEventHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetEventHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWindow::SetEventHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetEventHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetEventHandler(handler);

		return 0;
	}

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	static int _bind_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWindow::SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetNextHandler(handler);

		return 0;
	}

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWindow::SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPreviousHandler(handler);

		return 0;
	}

	// long wxWindow::GetExtraStyle() const
	static int _bind_GetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_GetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in long wxWindow::GetExtraStyle() const function, expected prototype:\nlong wxWindow::GetExtraStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxWindow::GetExtraStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetExtraStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxWindow::GetWindowStyleFlag() const
	static int _bind_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxWindow::GetWindowStyleFlag() const function, expected prototype:\nlong wxWindow::GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxWindow::GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxWindow::GetWindowStyle() const
	static int _bind_GetWindowStyle(lua_State *L) {
		if (!_lg_typecheck_GetWindowStyle(L)) {
			luaL_error(L, "luna typecheck failed in long wxWindow::GetWindowStyle() const function, expected prototype:\nlong wxWindow::GetWindowStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxWindow::GetWindowStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetWindowStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxWindow::HasExtraStyle(int exFlag) const
	static int _bind_HasExtraStyle(lua_State *L) {
		if (!_lg_typecheck_HasExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasExtraStyle(int exFlag) const function, expected prototype:\nbool wxWindow::HasExtraStyle(int exFlag) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int exFlag=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::HasExtraStyle(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasExtraStyle(exFlag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::HasFlag(int flag) const
	static int _bind_HasFlag(lua_State *L) {
		if (!_lg_typecheck_HasFlag(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasFlag(int flag) const function, expected prototype:\nbool wxWindow::HasFlag(int flag) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flag=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::HasFlag(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasFlag(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetExtraStyle(long exStyle)
	static int _bind_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxWindow::SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetExtraStyle(exStyle);

		return 0;
	}

	// void wxWindow::SetWindowStyleFlag(long style)
	static int _bind_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxWindow::SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWindowStyleFlag(style);

		return 0;
	}

	// void wxWindow::SetWindowStyle(long style)
	static int _bind_SetWindowStyle(lua_State *L) {
		if (!_lg_typecheck_SetWindowStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetWindowStyle(long style) function, expected prototype:\nvoid wxWindow::SetWindowStyle(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetWindowStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWindowStyle(style);

		return 0;
	}

	// bool wxWindow::ToggleWindowStyle(int flag)
	static int _bind_ToggleWindowStyle(lua_State *L) {
		if (!_lg_typecheck_ToggleWindowStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::ToggleWindowStyle(int flag) function, expected prototype:\nbool wxWindow::ToggleWindowStyle(int flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int flag=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::ToggleWindowStyle(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ToggleWindowStyle(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::MoveAfterInTabOrder(wxWindow * win)
	static int _bind_MoveAfterInTabOrder(lua_State *L) {
		if (!_lg_typecheck_MoveAfterInTabOrder(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::MoveAfterInTabOrder(wxWindow * win) function, expected prototype:\nvoid wxWindow::MoveAfterInTabOrder(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::MoveAfterInTabOrder(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MoveAfterInTabOrder(win);

		return 0;
	}

	// void wxWindow::MoveBeforeInTabOrder(wxWindow * win)
	static int _bind_MoveBeforeInTabOrder(lua_State *L) {
		if (!_lg_typecheck_MoveBeforeInTabOrder(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::MoveBeforeInTabOrder(wxWindow * win) function, expected prototype:\nvoid wxWindow::MoveBeforeInTabOrder(wxWindow * win)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* win=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::MoveBeforeInTabOrder(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MoveBeforeInTabOrder(win);

		return 0;
	}

	// bool wxWindow::Navigate(int flags = wxNavigationKeyEvent::IsForward)
	static int _bind_Navigate(lua_State *L) {
		if (!_lg_typecheck_Navigate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::Navigate(int flags = wxNavigationKeyEvent::IsForward) function, expected prototype:\nbool wxWindow::Navigate(int flags = wxNavigationKeyEvent::IsForward)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxNavigationKeyEvent::IsForward;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::Navigate(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Navigate(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::NavigateIn(int flags = wxNavigationKeyEvent::IsForward)
	static int _bind_NavigateIn(lua_State *L) {
		if (!_lg_typecheck_NavigateIn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::NavigateIn(int flags = wxNavigationKeyEvent::IsForward) function, expected prototype:\nbool wxWindow::NavigateIn(int flags = wxNavigationKeyEvent::IsForward)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)wxNavigationKeyEvent::IsForward;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::NavigateIn(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->NavigateIn(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::Lower()
	static int _bind_Lower(lua_State *L) {
		if (!_lg_typecheck_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::Lower() function, expected prototype:\nvoid wxWindow::Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Lower();

		return 0;
	}

	// void wxWindow::Raise()
	static int _bind_Raise(lua_State *L) {
		if (!_lg_typecheck_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::Raise() function, expected prototype:\nvoid wxWindow::Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Raise();

		return 0;
	}

	// bool wxWindow::Hide()
	static int _bind_Hide(lua_State *L) {
		if (!_lg_typecheck_Hide(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::Hide() function, expected prototype:\nbool wxWindow::Hide()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::Hide(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Hide();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsEnabled() const
	static int _bind_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_IsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsEnabled() const function, expected prototype:\nbool wxWindow::IsEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsExposed(int x, int y) const
	static int _bind_IsExposed_overload_1(lua_State *L) {
		if (!_lg_typecheck_IsExposed_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsExposed(int x, int y) const function, expected prototype:\nbool wxWindow::IsExposed(int x, int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsExposed(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsExposed(x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsExposed(wxPoint & pt) const
	static int _bind_IsExposed_overload_2(lua_State *L) {
		if (!_lg_typecheck_IsExposed_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsExposed(wxPoint & pt) const function, expected prototype:\nbool wxWindow::IsExposed(wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::IsExposed function");
		}
		wxPoint & pt=*pt_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsExposed(wxPoint &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsExposed(pt);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsExposed(int x, int y, int w, int h) const
	static int _bind_IsExposed_overload_3(lua_State *L) {
		if (!_lg_typecheck_IsExposed_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsExposed(int x, int y, int w, int h) const function, expected prototype:\nbool wxWindow::IsExposed(int x, int y, int w, int h) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);
		int w=(int)lua_tointeger(L,4);
		int h=(int)lua_tointeger(L,5);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsExposed(int, int, int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsExposed(x, y, w, h);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsExposed(wxRect & rect) const
	static int _bind_IsExposed_overload_4(lua_State *L) {
		if (!_lg_typecheck_IsExposed_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsExposed(wxRect & rect) const function, expected prototype:\nbool wxWindow::IsExposed(wxRect & rect) const\nClass arguments details:\narg 1 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		wxRect* rect_ptr=(Luna< wxRect >::check(L,2));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxWindow::IsExposed function");
		}
		wxRect & rect=*rect_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsExposed(wxRect &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsExposed(rect);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxWindow::IsExposed
	static int _bind_IsExposed(lua_State *L) {
		if (_lg_typecheck_IsExposed_overload_1(L)) return _bind_IsExposed_overload_1(L);
		if (_lg_typecheck_IsExposed_overload_2(L)) return _bind_IsExposed_overload_2(L);
		if (_lg_typecheck_IsExposed_overload_3(L)) return _bind_IsExposed_overload_3(L);
		if (_lg_typecheck_IsExposed_overload_4(L)) return _bind_IsExposed_overload_4(L);

		luaL_error(L, "error in function IsExposed, cannot match any of the overloads for function IsExposed:\n  IsExposed(int, int)\n  IsExposed(wxPoint &)\n  IsExposed(int, int, int, int)\n  IsExposed(wxRect &)\n");
		return 0;
	}

	// bool wxWindow::IsShown() const
	static int _bind_IsShown(lua_State *L) {
		if (!_lg_typecheck_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsShown() const function, expected prototype:\nbool wxWindow::IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsShownOnScreen() const
	static int _bind_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsShownOnScreen() const function, expected prototype:\nbool wxWindow::IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::Disable()
	static int _bind_Disable(lua_State *L) {
		if (!_lg_typecheck_Disable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::Disable() function, expected prototype:\nbool wxWindow::Disable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::Disable(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Disable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::Enable(bool enable = true)
	static int _bind_Enable(lua_State *L) {
		if (!_lg_typecheck_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::Enable(bool enable = true) function, expected prototype:\nbool wxWindow::Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::Show(bool show = true)
	static int _bind_Show(lua_State *L) {
		if (!_lg_typecheck_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::Show(bool show = true) function, expected prototype:\nbool wxWindow::Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxWindow::GetHelpText() const
	static int _bind_GetHelpText(lua_State *L) {
		if (!_lg_typecheck_GetHelpText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWindow::GetHelpText() const function, expected prototype:\nwxString wxWindow::GetHelpText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWindow::GetHelpText() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetHelpText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxWindow::SetHelpText(const wxString & helpText)
	static int _bind_SetHelpText(lua_State *L) {
		if (!_lg_typecheck_SetHelpText(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetHelpText(const wxString & helpText) function, expected prototype:\nvoid wxWindow::SetHelpText(const wxString & helpText)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString helpText(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetHelpText(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetHelpText(helpText);

		return 0;
	}

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxWindow::GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWindow::GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxToolTip * wxWindow::GetToolTip() const
	static int _bind_GetToolTip(lua_State *L) {
		if (!_lg_typecheck_GetToolTip(L)) {
			luaL_error(L, "luna typecheck failed in wxToolTip * wxWindow::GetToolTip() const function, expected prototype:\nwxToolTip * wxWindow::GetToolTip() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolTip * wxWindow::GetToolTip() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolTip * lret = self->GetToolTip();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolTip >::push(L,lret,false);

		return 1;
	}

	// wxString wxWindow::GetToolTipText() const
	static int _bind_GetToolTipText(lua_State *L) {
		if (!_lg_typecheck_GetToolTipText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWindow::GetToolTipText() const function, expected prototype:\nwxString wxWindow::GetToolTipText() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWindow::GetToolTipText() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetToolTipText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxWindow::SetToolTip(const wxString & tipString)
	static int _bind_SetToolTip_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetToolTip_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetToolTip(const wxString & tipString) function, expected prototype:\nvoid wxWindow::SetToolTip(const wxString & tipString)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString tipString(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetToolTip(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolTip(tipString);

		return 0;
	}

	// void wxWindow::SetToolTip(wxToolTip * tip)
	static int _bind_SetToolTip_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetToolTip_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetToolTip(wxToolTip * tip) function, expected prototype:\nvoid wxWindow::SetToolTip(wxToolTip * tip)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxToolTip* tip=(Luna< wxObject >::checkSubType< wxToolTip >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetToolTip(wxToolTip *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetToolTip(tip);

		return 0;
	}

	// Overload binder for wxWindow::SetToolTip
	static int _bind_SetToolTip(lua_State *L) {
		if (_lg_typecheck_SetToolTip_overload_1(L)) return _bind_SetToolTip_overload_1(L);
		if (_lg_typecheck_SetToolTip_overload_2(L)) return _bind_SetToolTip_overload_2(L);

		luaL_error(L, "error in function SetToolTip, cannot match any of the overloads for function SetToolTip:\n  SetToolTip(const wxString &)\n  SetToolTip(wxToolTip *)\n");
		return 0;
	}

	// void wxWindow::UnsetToolTip()
	static int _bind_UnsetToolTip(lua_State *L) {
		if (!_lg_typecheck_UnsetToolTip(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::UnsetToolTip() function, expected prototype:\nvoid wxWindow::UnsetToolTip()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::UnsetToolTip(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnsetToolTip();

		return 0;
	}

	// int wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, const wxPoint & pos = wxDefaultPosition)
	static int _bind_GetPopupMenuSelectionFromUser_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPopupMenuSelectionFromUser_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nint wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxMenu* menu_ptr=(Luna< wxObject >::checkSubType< wxMenu >(L,2));
		if( !menu_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg menu in wxWindow::GetPopupMenuSelectionFromUser function");
		}
		wxMenu & menu=*menu_ptr;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWindow::GetPopupMenuSelectionFromUser function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetPopupMenuSelectionFromUser(wxMenu &, const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPopupMenuSelectionFromUser(menu, pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, int x, int y)
	static int _bind_GetPopupMenuSelectionFromUser_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPopupMenuSelectionFromUser_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, int x, int y) function, expected prototype:\nint wxWindow::GetPopupMenuSelectionFromUser(wxMenu & menu, int x, int y)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu_ptr=(Luna< wxObject >::checkSubType< wxMenu >(L,2));
		if( !menu_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg menu in wxWindow::GetPopupMenuSelectionFromUser function");
		}
		wxMenu & menu=*menu_ptr;
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetPopupMenuSelectionFromUser(wxMenu &, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPopupMenuSelectionFromUser(menu, x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxWindow::GetPopupMenuSelectionFromUser
	static int _bind_GetPopupMenuSelectionFromUser(lua_State *L) {
		if (_lg_typecheck_GetPopupMenuSelectionFromUser_overload_1(L)) return _bind_GetPopupMenuSelectionFromUser_overload_1(L);
		if (_lg_typecheck_GetPopupMenuSelectionFromUser_overload_2(L)) return _bind_GetPopupMenuSelectionFromUser_overload_2(L);

		luaL_error(L, "error in function GetPopupMenuSelectionFromUser, cannot match any of the overloads for function GetPopupMenuSelectionFromUser:\n  GetPopupMenuSelectionFromUser(wxMenu &, const wxPoint &)\n  GetPopupMenuSelectionFromUser(wxMenu &, int, int)\n");
		return 0;
	}

	// bool wxWindow::PopupMenu(wxMenu * menu, const wxPoint & pos = wxDefaultPosition)
	static int _bind_PopupMenu_overload_1(lua_State *L) {
		if (!_lg_typecheck_PopupMenu_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::PopupMenu(wxMenu * menu, const wxPoint & pos = wxDefaultPosition) function, expected prototype:\nbool wxWindow::PopupMenu(wxMenu * menu, const wxPoint & pos = wxDefaultPosition)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxWindow::PopupMenu function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::PopupMenu(wxMenu *, const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PopupMenu(menu, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::PopupMenu(wxMenu * menu, int x, int y)
	static int _bind_PopupMenu_overload_2(lua_State *L) {
		if (!_lg_typecheck_PopupMenu_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::PopupMenu(wxMenu * menu, int x, int y) function, expected prototype:\nbool wxWindow::PopupMenu(wxMenu * menu, int x, int y)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxMenu* menu=(Luna< wxObject >::checkSubType< wxMenu >(L,2));
		int x=(int)lua_tointeger(L,3);
		int y=(int)lua_tointeger(L,4);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::PopupMenu(wxMenu *, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PopupMenu(menu, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for wxWindow::PopupMenu
	static int _bind_PopupMenu(lua_State *L) {
		if (_lg_typecheck_PopupMenu_overload_1(L)) return _bind_PopupMenu_overload_1(L);
		if (_lg_typecheck_PopupMenu_overload_2(L)) return _bind_PopupMenu_overload_2(L);

		luaL_error(L, "error in function PopupMenu, cannot match any of the overloads for function PopupMenu:\n  PopupMenu(wxMenu *, const wxPoint &)\n  PopupMenu(wxMenu *, int, int)\n");
		return 0;
	}

	// wxValidator * wxWindow::GetValidator()
	static int _bind_GetValidator(lua_State *L) {
		if (!_lg_typecheck_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxWindow::GetValidator() function, expected prototype:\nwxValidator * wxWindow::GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxWindow::GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::SetValidator(const wxValidator & validator)
	static int _bind_SetValidator(lua_State *L) {
		if (!_lg_typecheck_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxWindow::SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxWindow::SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetValidator(validator);

		return 0;
	}

	// bool wxWindow::TransferDataFromWindow()
	static int _bind_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::TransferDataFromWindow() function, expected prototype:\nbool wxWindow::TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::TransferDataToWindow()
	static int _bind_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::TransferDataToWindow() function, expected prototype:\nbool wxWindow::TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::Validate()
	static int _bind_Validate(lua_State *L) {
		if (!_lg_typecheck_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::Validate() function, expected prototype:\nbool wxWindow::Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxWindow::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::GetId() const function, expected prototype:\nint wxWindow::GetId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::GetId() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetId();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxWindow::GetLabel() const
	static int _bind_GetLabel(lua_State *L) {
		if (!_lg_typecheck_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWindow::GetLabel() const function, expected prototype:\nwxString wxWindow::GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWindow::GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	static int _bind_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxWindow::GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxWindow::GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxWindow::GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxWindow::GetName() const
	static int _bind_GetName(lua_State *L) {
		if (!_lg_typecheck_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWindow::GetName() const function, expected prototype:\nwxString wxWindow::GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWindow::GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxWindowVariant wxWindow::GetWindowVariant() const
	static int _bind_GetWindowVariant(lua_State *L) {
		if (!_lg_typecheck_GetWindowVariant(L)) {
			luaL_error(L, "luna typecheck failed in wxWindowVariant wxWindow::GetWindowVariant() const function, expected prototype:\nwxWindowVariant wxWindow::GetWindowVariant() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindowVariant wxWindow::GetWindowVariant() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindowVariant lret = self->GetWindowVariant();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxWindow::SetId(int winid)
	static int _bind_SetId(lua_State *L) {
		if (!_lg_typecheck_SetId(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetId(int winid) function, expected prototype:\nvoid wxWindow::SetId(int winid)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int winid=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetId(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetId(winid);

		return 0;
	}

	// void wxWindow::SetLabel(const wxString & label)
	static int _bind_SetLabel(lua_State *L) {
		if (!_lg_typecheck_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetLabel(const wxString & label) function, expected prototype:\nvoid wxWindow::SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLabel(label);

		return 0;
	}

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxWindow::SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetLayoutDirection(dir);

		return 0;
	}

	// void wxWindow::SetName(const wxString & name)
	static int _bind_SetName(lua_State *L) {
		if (!_lg_typecheck_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetName(const wxString & name) function, expected prototype:\nvoid wxWindow::SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetName(name);

		return 0;
	}

	// void wxWindow::SetWindowVariant(wxWindowVariant variant)
	static int _bind_SetWindowVariant(lua_State *L) {
		if (!_lg_typecheck_SetWindowVariant(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetWindowVariant(wxWindowVariant variant) function, expected prototype:\nvoid wxWindow::SetWindowVariant(wxWindowVariant variant)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindowVariant variant=(wxWindowVariant)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetWindowVariant(wxWindowVariant). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWindowVariant(variant);

		return 0;
	}

	// wxAcceleratorTable * wxWindow::GetAcceleratorTable()
	static int _bind_GetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_GetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in wxAcceleratorTable * wxWindow::GetAcceleratorTable() function, expected prototype:\nwxAcceleratorTable * wxWindow::GetAcceleratorTable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxAcceleratorTable * wxWindow::GetAcceleratorTable(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxAcceleratorTable * lret = self->GetAcceleratorTable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxAcceleratorTable >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxWindow::SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxWindow::Close(bool force = false)
	static int _bind_Close(lua_State *L) {
		if (!_lg_typecheck_Close(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::Close(bool force = false) function, expected prototype:\nbool wxWindow::Close(bool force = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool force=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::Close(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Close(force);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::Destroy()
	static int _bind_Destroy(lua_State *L) {
		if (!_lg_typecheck_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::Destroy() function, expected prototype:\nbool wxWindow::Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsBeingDeleted() const
	static int _bind_IsBeingDeleted(lua_State *L) {
		if (!_lg_typecheck_IsBeingDeleted(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsBeingDeleted() const function, expected prototype:\nbool wxWindow::IsBeingDeleted() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsBeingDeleted() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsBeingDeleted();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxWindow::GetDropTarget() const
	static int _bind_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxWindow::GetDropTarget() const function, expected prototype:\nwxDropTarget * wxWindow::GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxWindow::GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	static int _bind_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxWindow::SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDropTarget(target);

		return 0;
	}

	// void wxWindow::DragAcceptFiles(bool accept)
	static int _bind_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxWindow::DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DragAcceptFiles(accept);

		return 0;
	}

	// wxSizer * wxWindow::GetContainingSizer() const
	static int _bind_GetContainingSizer(lua_State *L) {
		if (!_lg_typecheck_GetContainingSizer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizer * wxWindow::GetContainingSizer() const function, expected prototype:\nwxSizer * wxWindow::GetContainingSizer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizer * wxWindow::GetContainingSizer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizer * lret = self->GetContainingSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// wxSizer * wxWindow::GetSizer() const
	static int _bind_GetSizer(lua_State *L) {
		if (!_lg_typecheck_GetSizer(L)) {
			luaL_error(L, "luna typecheck failed in wxSizer * wxWindow::GetSizer() const function, expected prototype:\nwxSizer * wxWindow::GetSizer() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSizer * wxWindow::GetSizer() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSizer * lret = self->GetSizer();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSizer >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::SetSizer(wxSizer * sizer, bool deleteOld = true)
	static int _bind_SetSizer(lua_State *L) {
		if (!_lg_typecheck_SetSizer(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSizer(wxSizer * sizer, bool deleteOld = true) function, expected prototype:\nvoid wxWindow::SetSizer(wxSizer * sizer, bool deleteOld = true)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		bool deleteOld=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetSizer(wxSizer *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSizer(sizer, deleteOld);

		return 0;
	}

	// void wxWindow::SetSizerAndFit(wxSizer * sizer, bool deleteOld = true)
	static int _bind_SetSizerAndFit(lua_State *L) {
		if (!_lg_typecheck_SetSizerAndFit(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetSizerAndFit(wxSizer * sizer, bool deleteOld = true) function, expected prototype:\nvoid wxWindow::SetSizerAndFit(wxSizer * sizer, bool deleteOld = true)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxSizer* sizer=(Luna< wxObject >::checkSubType< wxSizer >(L,2));
		bool deleteOld=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetSizerAndFit(wxSizer *, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSizerAndFit(sizer, deleteOld);

		return 0;
	}

	// wxLayoutConstraints * wxWindow::GetConstraints() const
	static int _bind_GetConstraints(lua_State *L) {
		if (!_lg_typecheck_GetConstraints(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutConstraints * wxWindow::GetConstraints() const function, expected prototype:\nwxLayoutConstraints * wxWindow::GetConstraints() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutConstraints * wxWindow::GetConstraints() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutConstraints * lret = self->GetConstraints();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxLayoutConstraints >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::SetConstraints(wxLayoutConstraints * constraints)
	static int _bind_SetConstraints(lua_State *L) {
		if (!_lg_typecheck_SetConstraints(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetConstraints(wxLayoutConstraints * constraints) function, expected prototype:\nvoid wxWindow::SetConstraints(wxLayoutConstraints * constraints)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutConstraints* constraints=(Luna< wxObject >::checkSubType< wxLayoutConstraints >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetConstraints(wxLayoutConstraints *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetConstraints(constraints);

		return 0;
	}

	// bool wxWindow::Layout()
	static int _bind_Layout(lua_State *L) {
		if (!_lg_typecheck_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::Layout() function, expected prototype:\nbool wxWindow::Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::SetAutoLayout(bool autoLayout)
	static int _bind_SetAutoLayout(lua_State *L) {
		if (!_lg_typecheck_SetAutoLayout(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetAutoLayout(bool autoLayout) function, expected prototype:\nvoid wxWindow::SetAutoLayout(bool autoLayout)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool autoLayout=(bool)(lua_toboolean(L,2)==1);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetAutoLayout(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetAutoLayout(autoLayout);

		return 0;
	}

	// bool wxWindow::GetAutoLayout() const
	static int _bind_GetAutoLayout(lua_State *L) {
		if (!_lg_typecheck_GetAutoLayout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::GetAutoLayout() const function, expected prototype:\nbool wxWindow::GetAutoLayout() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::GetAutoLayout() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetAutoLayout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::CaptureMouse()
	static int _bind_CaptureMouse(lua_State *L) {
		if (!_lg_typecheck_CaptureMouse(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::CaptureMouse() function, expected prototype:\nvoid wxWindow::CaptureMouse()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::CaptureMouse(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CaptureMouse();

		return 0;
	}

	// wxCaret * wxWindow::GetCaret() const
	static int _bind_GetCaret(lua_State *L) {
		if (!_lg_typecheck_GetCaret(L)) {
			luaL_error(L, "luna typecheck failed in wxCaret * wxWindow::GetCaret() const function, expected prototype:\nwxCaret * wxWindow::GetCaret() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxCaret * wxWindow::GetCaret() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxCaret * lret = self->GetCaret();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCaret >::push(L,lret,false);

		return 1;
	}

	// const wxCursor & wxWindow::GetCursor() const
	static int _bind_GetCursor(lua_State *L) {
		if (!_lg_typecheck_GetCursor(L)) {
			luaL_error(L, "luna typecheck failed in const wxCursor & wxWindow::GetCursor() const function, expected prototype:\nconst wxCursor & wxWindow::GetCursor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxCursor & wxWindow::GetCursor() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxCursor* lret = &self->GetCursor();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxCursor >::push(L,lret,false);

		return 1;
	}

	// bool wxWindow::HasCapture() const
	static int _bind_HasCapture(lua_State *L) {
		if (!_lg_typecheck_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasCapture() const function, expected prototype:\nbool wxWindow::HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::ReleaseMouse()
	static int _bind_ReleaseMouse(lua_State *L) {
		if (!_lg_typecheck_ReleaseMouse(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::ReleaseMouse() function, expected prototype:\nvoid wxWindow::ReleaseMouse()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::ReleaseMouse(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReleaseMouse();

		return 0;
	}

	// void wxWindow::SetCaret(wxCaret * caret)
	static int _bind_SetCaret(lua_State *L) {
		if (!_lg_typecheck_SetCaret(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::SetCaret(wxCaret * caret) function, expected prototype:\nvoid wxWindow::SetCaret(wxCaret * caret)\nClass arguments details:\narg 1 ID = 13309003\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCaret* caret=(Luna< wxCaret >::check(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::SetCaret(wxCaret *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetCaret(caret);

		return 0;
	}

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	static int _bind_SetCursor(lua_State *L) {
		if (!_lg_typecheck_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxWindow::SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxWindow::SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::WarpPointer(int x, int y)
	static int _bind_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::WarpPointer(int x, int y) function, expected prototype:\nvoid wxWindow::WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WarpPointer(x, y);

		return 0;
	}

	// wxHitTest wxWindow::HitTest(int x, int y) const
	static int _bind_HitTest_overload_1(lua_State *L) {
		if (!_lg_typecheck_HitTest_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHitTest wxWindow::HitTest(int x, int y) const function, expected prototype:\nwxHitTest wxWindow::HitTest(int x, int y) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHitTest wxWindow::HitTest(int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHitTest lret = self->HitTest(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxHitTest wxWindow::HitTest(const wxPoint & pt) const
	static int _bind_HitTest_overload_2(lua_State *L) {
		if (!_lg_typecheck_HitTest_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHitTest wxWindow::HitTest(const wxPoint & pt) const function, expected prototype:\nwxHitTest wxWindow::HitTest(const wxPoint & pt) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,2));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxWindow::HitTest function");
		}
		const wxPoint & pt=*pt_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHitTest wxWindow::HitTest(const wxPoint &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHitTest lret = self->HitTest(pt);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxWindow::HitTest
	static int _bind_HitTest(lua_State *L) {
		if (_lg_typecheck_HitTest_overload_1(L)) return _bind_HitTest_overload_1(L);
		if (_lg_typecheck_HitTest_overload_2(L)) return _bind_HitTest_overload_2(L);

		luaL_error(L, "error in function HitTest, cannot match any of the overloads for function HitTest:\n  HitTest(int, int)\n  HitTest(const wxPoint &)\n");
		return 0;
	}

	// wxBorder wxWindow::GetBorder(long flags) const
	static int _bind_GetBorder_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetBorder_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxBorder wxWindow::GetBorder(long flags) const function, expected prototype:\nwxBorder wxWindow::GetBorder(long flags) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long flags=(long)lua_tonumber(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBorder wxWindow::GetBorder(long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBorder lret = self->GetBorder(flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxBorder wxWindow::GetBorder() const
	static int _bind_GetBorder_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetBorder_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxBorder wxWindow::GetBorder() const function, expected prototype:\nwxBorder wxWindow::GetBorder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBorder wxWindow::GetBorder() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBorder lret = self->GetBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxWindow::GetBorder
	static int _bind_GetBorder(lua_State *L) {
		if (_lg_typecheck_GetBorder_overload_1(L)) return _bind_GetBorder_overload_1(L);
		if (_lg_typecheck_GetBorder_overload_2(L)) return _bind_GetBorder_overload_2(L);

		luaL_error(L, "error in function GetBorder, cannot match any of the overloads for function GetBorder:\n  GetBorder(long)\n  GetBorder()\n");
		return 0;
	}

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWindow::DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxWindow::GetHandle() const
	static int _bind_GetHandle(lua_State *L) {
		if (!_lg_typecheck_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxWindow::GetHandle() const function, expected prototype:\nHWND wxWindow::GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxWindow::GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxWindow::HasMultiplePages() const
	static int _bind_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::HasMultiplePages() const function, expected prototype:\nbool wxWindow::HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::InheritAttributes()
	static int _bind_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::InheritAttributes() function, expected prototype:\nvoid wxWindow::InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InheritAttributes();

		return 0;
	}

	// void wxWindow::InitDialog()
	static int _bind_InitDialog(lua_State *L) {
		if (!_lg_typecheck_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::InitDialog() function, expected prototype:\nvoid wxWindow::InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InitDialog();

		return 0;
	}

	// bool wxWindow::IsRetained() const
	static int _bind_IsRetained(lua_State *L) {
		if (!_lg_typecheck_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsRetained() const function, expected prototype:\nbool wxWindow::IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsThisEnabled() const
	static int _bind_IsThisEnabled(lua_State *L) {
		if (!_lg_typecheck_IsThisEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsThisEnabled() const function, expected prototype:\nbool wxWindow::IsThisEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsThisEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsThisEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::IsTopLevel() const
	static int _bind_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::IsTopLevel() const function, expected prototype:\nbool wxWindow::IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::MakeModal(bool modal = true)
	static int _bind_MakeModal(lua_State *L) {
		if (!_lg_typecheck_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::MakeModal(bool modal = true) function, expected prototype:\nvoid wxWindow::MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MakeModal(modal);

		return 0;
	}

	// void wxWindow::OnInternalIdle()
	static int _bind_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::OnInternalIdle() function, expected prototype:\nvoid wxWindow::OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnInternalIdle();

		return 0;
	}

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	static int _bind_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxWindow::UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UpdateWindowUI(flags);

		return 0;
	}

	// static wxVisualAttributes wxWindow::GetClassDefaultAttributes(wxWindowVariant variant = ::wxWINDOW_VARIANT_NORMAL)
	static int _bind_GetClassDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_GetClassDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in static wxVisualAttributes wxWindow::GetClassDefaultAttributes(wxWindowVariant variant = ::wxWINDOW_VARIANT_NORMAL) function, expected prototype:\nstatic wxVisualAttributes wxWindow::GetClassDefaultAttributes(wxWindowVariant variant = ::wxWINDOW_VARIANT_NORMAL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindowVariant variant=luatop>0 ? (wxWindowVariant)lua_tointeger(L,1) : (wxWindowVariant)::wxWINDOW_VARIANT_NORMAL;

		wxVisualAttributes stack_lret = wxWindow::GetClassDefaultAttributes(variant);
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// static wxWindow * wxWindow::FindFocus()
	static int _bind_FindFocus(lua_State *L) {
		if (!_lg_typecheck_FindFocus(L)) {
			luaL_error(L, "luna typecheck failed in static wxWindow * wxWindow::FindFocus() function, expected prototype:\nstatic wxWindow * wxWindow::FindFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow * lret = wxWindow::FindFocus();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// static wxWindow * wxWindow::FindWindowById(long id, const wxWindow * parent = 0)
	static int _bind_FindWindowById(lua_State *L) {
		if (!_lg_typecheck_FindWindowById(L)) {
			luaL_error(L, "luna typecheck failed in static wxWindow * wxWindow::FindWindowById(long id, const wxWindow * parent = 0) function, expected prototype:\nstatic wxWindow * wxWindow::FindWindowById(long id, const wxWindow * parent = 0)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long id=(long)lua_tonumber(L,1);
		const wxWindow* parent=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (const wxWindow*)0;

		wxWindow * lret = wxWindow::FindWindowById(id, parent);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// static wxWindow * wxWindow::FindWindowByLabel(const wxString & label, const wxWindow * parent = 0)
	static int _bind_FindWindowByLabel(lua_State *L) {
		if (!_lg_typecheck_FindWindowByLabel(L)) {
			luaL_error(L, "luna typecheck failed in static wxWindow * wxWindow::FindWindowByLabel(const wxString & label, const wxWindow * parent = 0) function, expected prototype:\nstatic wxWindow * wxWindow::FindWindowByLabel(const wxString & label, const wxWindow * parent = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,1),lua_objlen(L,1));
		const wxWindow* parent=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (const wxWindow*)0;

		wxWindow * lret = wxWindow::FindWindowByLabel(label, parent);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// static wxWindow * wxWindow::FindWindowByName(const wxString & name, const wxWindow * parent = 0)
	static int _bind_FindWindowByName(lua_State *L) {
		if (!_lg_typecheck_FindWindowByName(L)) {
			luaL_error(L, "luna typecheck failed in static wxWindow * wxWindow::FindWindowByName(const wxString & name, const wxWindow * parent = 0) function, expected prototype:\nstatic wxWindow * wxWindow::FindWindowByName(const wxString & name, const wxWindow * parent = 0)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString name(lua_tostring(L,1),lua_objlen(L,1));
		const wxWindow* parent=luatop>1 ? (Luna< wxObject >::checkSubType< wxWindow >(L,2)) : (const wxWindow*)0;

		wxWindow * lret = wxWindow::FindWindowByName(name, parent);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// static wxWindow * wxWindow::GetCapture()
	static int _bind_GetCapture(lua_State *L) {
		if (!_lg_typecheck_GetCapture(L)) {
			luaL_error(L, "luna typecheck failed in static wxWindow * wxWindow::GetCapture() function, expected prototype:\nstatic wxWindow * wxWindow::GetCapture()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow * lret = wxWindow::GetCapture();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// static int wxWindow::NewControlId(int count = 1)
	static int _bind_NewControlId(lua_State *L) {
		if (!_lg_typecheck_NewControlId(L)) {
			luaL_error(L, "luna typecheck failed in static int wxWindow::NewControlId(int count = 1) function, expected prototype:\nstatic int wxWindow::NewControlId(int count = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int count=luatop>0 ? (int)lua_tointeger(L,1) : (int)1;

		int lret = wxWindow::NewControlId(count);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static void wxWindow::UnreserveControlId(int id, int count = 1)
	static int _bind_UnreserveControlId(lua_State *L) {
		if (!_lg_typecheck_UnreserveControlId(L)) {
			luaL_error(L, "luna typecheck failed in static void wxWindow::UnreserveControlId(int id, int count = 1) function, expected prototype:\nstatic void wxWindow::UnreserveControlId(int id, int count = 1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int id=(int)lua_tointeger(L,1);
		int count=luatop>1 ? (int)lua_tointeger(L,2) : (int)1;

		wxWindow::UnreserveControlId(id, count);

		return 0;
	}

	// wxClassInfo * wxWindow::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxWindow::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxWindow::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxWindow::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxWindow::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxWindow::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_AcceptsFocus() const function, expected prototype:\nbool wxWindow::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxWindow::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxWindow::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_HasFocus() const function, expected prototype:\nbool wxWindow::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxWindow::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetCanFocus(canFocus);

		return 0;
	}

	// void wxWindow::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetFocus() function, expected prototype:\nvoid wxWindow::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetFocus();

		return 0;
	}

	// void wxWindow::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetFocusFromKbd() function, expected prototype:\nvoid wxWindow::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetFocusFromKbd();

		return 0;
	}

	// void wxWindow::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxWindow::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::AddChild(child);

		return 0;
	}

	// void wxWindow::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxWindow::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::RemoveChild(child);

		return 0;
	}

	// bool wxWindow::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxWindow::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxWindow::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxWindow::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxWindow::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxWindow::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxWindow::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxWindow::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxWindow::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxWindow::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxWindow::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxWindow::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_ScrollLines(int lines) function, expected prototype:\nbool wxWindow::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_ScrollPages(int pages) function, expected prototype:\nbool wxWindow::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxWindow::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxWindow::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxWindow::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxWindow::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxWindow::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxWindow::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxWindow::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWindow::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxWindow::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWindow::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_Fit() function, expected prototype:\nvoid wxWindow::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::Fit();

		return 0;
	}

	// void wxWindow::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_FitInside() function, expected prototype:\nvoid wxWindow::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::FitInside();

		return 0;
	}

	// wxSize wxWindow::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxWindow::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWindow::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxWindow::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWindow::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::base_GetMaxSize() const function, expected prototype:\nwxSize wxWindow::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWindow::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::base_GetMinClientSize() const function, expected prototype:\nwxSize wxWindow::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWindow::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::base_GetMinSize() const function, expected prototype:\nwxSize wxWindow::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWindow::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxWindow::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWindow::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxWindow::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxWindow::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxWindow::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxWindow::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxWindow::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxWindow::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxWindow::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxWindow::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SendSizeEvent(flags);

		return 0;
	}

	// void wxWindow::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetMaxClientSize(size);

		return 0;
	}

	// void wxWindow::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetMaxSize(size);

		return 0;
	}

	// void wxWindow::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetMinClientSize(size);

		return 0;
	}

	// void wxWindow::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxWindow::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxWindow::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetMinSize(size);

		return 0;
	}

	// void wxWindow::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxWindow::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxWindow::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxWindow::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxWindow::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxWindow::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxWindow::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxWindow::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxWindow::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxWindow::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxWindow::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxWindow::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxWindow::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_ClearBackground() function, expected prototype:\nvoid wxWindow::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxWindow::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxWindow::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxWindow::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxWindow::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxWindow::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::base_GetCharHeight() const function, expected prototype:\nint wxWindow::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxWindow::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxWindow::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxWindow::base_GetCharWidth() const function, expected prototype:\nint wxWindow::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxWindow::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxWindow::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxWindow::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxWindow::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxWindow::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxWindow::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxWindow::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxWindow::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxWindow::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxWindow::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_Update() function, expected prototype:\nvoid wxWindow::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::Update();

		return 0;
	}

	// bool wxWindow::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxWindow::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxWindow::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxWindow::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_ShouldInheritColours() const function, expected prototype:\nbool wxWindow::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxWindow::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxWindow::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_GetThemeEnabled() const function, expected prototype:\nbool wxWindow::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_CanSetTransparent() function, expected prototype:\nbool wxWindow::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxWindow::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWindow::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetNextHandler(handler);

		return 0;
	}

	// void wxWindow::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxWindow::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetPreviousHandler(handler);

		return 0;
	}

	// long wxWindow::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxWindow::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxWindow::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxWindow::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxWindow::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxWindow::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxWindow::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxWindow::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxWindow::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxWindow::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_Lower() function, expected prototype:\nvoid wxWindow::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::Lower();

		return 0;
	}

	// void wxWindow::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_Raise() function, expected prototype:\nvoid wxWindow::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::Raise();

		return 0;
	}

	// bool wxWindow::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxWindow::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_IsShown() const function, expected prototype:\nbool wxWindow::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_IsShownOnScreen() const function, expected prototype:\nbool wxWindow::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_Enable(bool enable = true) function, expected prototype:\nbool wxWindow::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_Show(bool show = true) function, expected prototype:\nbool wxWindow::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxWindow::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxWindow::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWindow::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxWindow::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxWindow::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWindow::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxWindow::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxWindow::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxWindow::base_GetValidator() function, expected prototype:\nwxValidator * wxWindow::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxWindow::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxWindow::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxWindow::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxWindow::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetValidator(validator);

		return 0;
	}

	// bool wxWindow::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_TransferDataFromWindow() function, expected prototype:\nbool wxWindow::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_TransferDataToWindow() function, expected prototype:\nbool wxWindow::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_Validate() function, expected prototype:\nbool wxWindow::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxWindow::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWindow::base_GetLabel() const function, expected prototype:\nwxString wxWindow::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWindow::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxWindow::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxWindow::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxWindow::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxWindow::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxWindow::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxWindow::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxWindow::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxWindow::base_GetName() const function, expected prototype:\nwxString wxWindow::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxWindow::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxWindow::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxWindow::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxWindow::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetLabel(label);

		return 0;
	}

	// void wxWindow::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxWindow::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetLayoutDirection(dir);

		return 0;
	}

	// void wxWindow::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetName(const wxString & name) function, expected prototype:\nvoid wxWindow::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetName(name);

		return 0;
	}

	// void wxWindow::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxWindow::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxWindow::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxWindow::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_Destroy() function, expected prototype:\nbool wxWindow::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxWindow::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxWindow::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxWindow::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxWindow::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxWindow::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxWindow::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxWindow::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::SetDropTarget(target);

		return 0;
	}

	// void wxWindow::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxWindow::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxWindow::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_Layout() function, expected prototype:\nbool wxWindow::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_HasCapture() const function, expected prototype:\nbool wxWindow::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxWindow::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxWindow::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxWindow::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::WarpPointer(x, y);

		return 0;
	}

	// void wxWindow::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxWindow::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxWindow::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxWindow::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxWindow::base_GetHandle() const function, expected prototype:\nHWND wxWindow::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxWindow::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxWindow::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxWindow::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_HasMultiplePages() const function, expected prototype:\nbool wxWindow::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_InheritAttributes() function, expected prototype:\nvoid wxWindow::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::InheritAttributes();

		return 0;
	}

	// void wxWindow::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_InitDialog() function, expected prototype:\nvoid wxWindow::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::InitDialog();

		return 0;
	}

	// bool wxWindow::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_IsRetained() const function, expected prototype:\nbool wxWindow::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_IsTopLevel() const function, expected prototype:\nbool wxWindow::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxWindow::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::MakeModal(modal);

		return 0;
	}

	// void wxWindow::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_OnInternalIdle() function, expected prototype:\nvoid wxWindow::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::OnInternalIdle();

		return 0;
	}

	// bool wxWindow::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxWindow::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxWindow::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWindow::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxWindow::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWindow::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxWindow::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxWindow::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxWindow::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxWindow::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxWindow* self=Luna< wxObject >::checkSubType< wxWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxWindow::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxWindow::UpdateWindowUI(flags);

		return 0;
	}


	// Operator binds:

};

wxWindow* LunaTraits< wxWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxWindow::_bind_ctor(L);
}

void LunaTraits< wxWindow >::_bind_dtor(wxWindow* obj) {
	delete obj;
}

const char LunaTraits< wxWindow >::className[] = "wxWindow";
const char LunaTraits< wxWindow >::fullName[] = "wxWindow";
const char LunaTraits< wxWindow >::moduleName[] = "wx";
const char* LunaTraits< wxWindow >::parents[] = {"wx.wxEvtHandler", 0};
const int LunaTraits< wxWindow >::hash = 92430048;
const int LunaTraits< wxWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxWindow >::methods[] = {
	{"Create", &luna_wrapper_wxWindow::_bind_Create},
	{"AcceptsFocus", &luna_wrapper_wxWindow::_bind_AcceptsFocus},
	{"AcceptsFocusFromKeyboard", &luna_wrapper_wxWindow::_bind_AcceptsFocusFromKeyboard},
	{"AcceptsFocusRecursively", &luna_wrapper_wxWindow::_bind_AcceptsFocusRecursively},
	{"HasFocus", &luna_wrapper_wxWindow::_bind_HasFocus},
	{"SetCanFocus", &luna_wrapper_wxWindow::_bind_SetCanFocus},
	{"SetFocus", &luna_wrapper_wxWindow::_bind_SetFocus},
	{"SetFocusFromKbd", &luna_wrapper_wxWindow::_bind_SetFocusFromKbd},
	{"AddChild", &luna_wrapper_wxWindow::_bind_AddChild},
	{"DestroyChildren", &luna_wrapper_wxWindow::_bind_DestroyChildren},
	{"FindWindow", &luna_wrapper_wxWindow::_bind_FindWindow},
	{"GetChildren", &luna_wrapper_wxWindow::_bind_GetChildren},
	{"RemoveChild", &luna_wrapper_wxWindow::_bind_RemoveChild},
	{"GetGrandParent", &luna_wrapper_wxWindow::_bind_GetGrandParent},
	{"GetNextSibling", &luna_wrapper_wxWindow::_bind_GetNextSibling},
	{"GetParent", &luna_wrapper_wxWindow::_bind_GetParent},
	{"GetPrevSibling", &luna_wrapper_wxWindow::_bind_GetPrevSibling},
	{"Reparent", &luna_wrapper_wxWindow::_bind_Reparent},
	{"AlwaysShowScrollbars", &luna_wrapper_wxWindow::_bind_AlwaysShowScrollbars},
	{"GetScrollPos", &luna_wrapper_wxWindow::_bind_GetScrollPos},
	{"GetScrollRange", &luna_wrapper_wxWindow::_bind_GetScrollRange},
	{"GetScrollThumb", &luna_wrapper_wxWindow::_bind_GetScrollThumb},
	{"CanScroll", &luna_wrapper_wxWindow::_bind_CanScroll},
	{"HasScrollbar", &luna_wrapper_wxWindow::_bind_HasScrollbar},
	{"IsScrollbarAlwaysShown", &luna_wrapper_wxWindow::_bind_IsScrollbarAlwaysShown},
	{"ScrollLines", &luna_wrapper_wxWindow::_bind_ScrollLines},
	{"ScrollPages", &luna_wrapper_wxWindow::_bind_ScrollPages},
	{"ScrollWindow", &luna_wrapper_wxWindow::_bind_ScrollWindow},
	{"LineUp", &luna_wrapper_wxWindow::_bind_LineUp},
	{"LineDown", &luna_wrapper_wxWindow::_bind_LineDown},
	{"PageUp", &luna_wrapper_wxWindow::_bind_PageUp},
	{"PageDown", &luna_wrapper_wxWindow::_bind_PageDown},
	{"SetScrollPos", &luna_wrapper_wxWindow::_bind_SetScrollPos},
	{"SetScrollbar", &luna_wrapper_wxWindow::_bind_SetScrollbar},
	{"CacheBestSize", &luna_wrapper_wxWindow::_bind_CacheBestSize},
	{"ClientToWindowSize", &luna_wrapper_wxWindow::_bind_ClientToWindowSize},
	{"WindowToClientSize", &luna_wrapper_wxWindow::_bind_WindowToClientSize},
	{"Fit", &luna_wrapper_wxWindow::_bind_Fit},
	{"FitInside", &luna_wrapper_wxWindow::_bind_FitInside},
	{"GetBestSize", &luna_wrapper_wxWindow::_bind_GetBestSize},
	{"GetClientSize", &luna_wrapper_wxWindow::_bind_GetClientSize},
	{"GetEffectiveMinSize", &luna_wrapper_wxWindow::_bind_GetEffectiveMinSize},
	{"GetMaxClientSize", &luna_wrapper_wxWindow::_bind_GetMaxClientSize},
	{"GetMaxSize", &luna_wrapper_wxWindow::_bind_GetMaxSize},
	{"GetMinClientSize", &luna_wrapper_wxWindow::_bind_GetMinClientSize},
	{"GetMinSize", &luna_wrapper_wxWindow::_bind_GetMinSize},
	{"GetMinWidth", &luna_wrapper_wxWindow::_bind_GetMinWidth},
	{"GetMinHeight", &luna_wrapper_wxWindow::_bind_GetMinHeight},
	{"GetMaxWidth", &luna_wrapper_wxWindow::_bind_GetMaxWidth},
	{"GetMaxHeight", &luna_wrapper_wxWindow::_bind_GetMaxHeight},
	{"GetSize", &luna_wrapper_wxWindow::_bind_GetSize},
	{"GetVirtualSize", &luna_wrapper_wxWindow::_bind_GetVirtualSize},
	{"GetBestVirtualSize", &luna_wrapper_wxWindow::_bind_GetBestVirtualSize},
	{"GetWindowBorderSize", &luna_wrapper_wxWindow::_bind_GetWindowBorderSize},
	{"InformFirstDirection", &luna_wrapper_wxWindow::_bind_InformFirstDirection},
	{"InvalidateBestSize", &luna_wrapper_wxWindow::_bind_InvalidateBestSize},
	{"PostSizeEvent", &luna_wrapper_wxWindow::_bind_PostSizeEvent},
	{"PostSizeEventToParent", &luna_wrapper_wxWindow::_bind_PostSizeEventToParent},
	{"SendSizeEvent", &luna_wrapper_wxWindow::_bind_SendSizeEvent},
	{"SendSizeEventToParent", &luna_wrapper_wxWindow::_bind_SendSizeEventToParent},
	{"SetClientSize", &luna_wrapper_wxWindow::_bind_SetClientSize},
	{"SetContainingSizer", &luna_wrapper_wxWindow::_bind_SetContainingSizer},
	{"SetInitialSize", &luna_wrapper_wxWindow::_bind_SetInitialSize},
	{"SetMaxClientSize", &luna_wrapper_wxWindow::_bind_SetMaxClientSize},
	{"SetMaxSize", &luna_wrapper_wxWindow::_bind_SetMaxSize},
	{"SetMinClientSize", &luna_wrapper_wxWindow::_bind_SetMinClientSize},
	{"SetMinSize", &luna_wrapper_wxWindow::_bind_SetMinSize},
	{"SetSize", &luna_wrapper_wxWindow::_bind_SetSize},
	{"SetSizeHints", &luna_wrapper_wxWindow::_bind_SetSizeHints},
	{"SetVirtualSize", &luna_wrapper_wxWindow::_bind_SetVirtualSize},
	{"Center", &luna_wrapper_wxWindow::_bind_Center},
	{"CenterOnParent", &luna_wrapper_wxWindow::_bind_CenterOnParent},
	{"Centre", &luna_wrapper_wxWindow::_bind_Centre},
	{"CentreOnParent", &luna_wrapper_wxWindow::_bind_CentreOnParent},
	{"GetPosition", &luna_wrapper_wxWindow::_bind_GetPosition},
	{"GetRect", &luna_wrapper_wxWindow::_bind_GetRect},
	{"GetScreenPosition", &luna_wrapper_wxWindow::_bind_GetScreenPosition},
	{"GetScreenRect", &luna_wrapper_wxWindow::_bind_GetScreenRect},
	{"GetClientAreaOrigin", &luna_wrapper_wxWindow::_bind_GetClientAreaOrigin},
	{"GetClientRect", &luna_wrapper_wxWindow::_bind_GetClientRect},
	{"Move", &luna_wrapper_wxWindow::_bind_Move},
	{"SetPosition", &luna_wrapper_wxWindow::_bind_SetPosition},
	{"ClientToScreen", &luna_wrapper_wxWindow::_bind_ClientToScreen},
	{"ConvertDialogToPixels", &luna_wrapper_wxWindow::_bind_ConvertDialogToPixels},
	{"ConvertPixelsToDialog", &luna_wrapper_wxWindow::_bind_ConvertPixelsToDialog},
	{"ScreenToClient", &luna_wrapper_wxWindow::_bind_ScreenToClient},
	{"ClearBackground", &luna_wrapper_wxWindow::_bind_ClearBackground},
	{"Freeze", &luna_wrapper_wxWindow::_bind_Freeze},
	{"Thaw", &luna_wrapper_wxWindow::_bind_Thaw},
	{"IsFrozen", &luna_wrapper_wxWindow::_bind_IsFrozen},
	{"GetBackgroundColour", &luna_wrapper_wxWindow::_bind_GetBackgroundColour},
	{"GetBackgroundStyle", &luna_wrapper_wxWindow::_bind_GetBackgroundStyle},
	{"GetCharHeight", &luna_wrapper_wxWindow::_bind_GetCharHeight},
	{"GetCharWidth", &luna_wrapper_wxWindow::_bind_GetCharWidth},
	{"GetDefaultAttributes", &luna_wrapper_wxWindow::_bind_GetDefaultAttributes},
	{"GetFont", &luna_wrapper_wxWindow::_bind_GetFont},
	{"GetForegroundColour", &luna_wrapper_wxWindow::_bind_GetForegroundColour},
	{"GetTextExtent", &luna_wrapper_wxWindow::_bind_GetTextExtent},
	{"GetUpdateRegion", &luna_wrapper_wxWindow::_bind_GetUpdateRegion},
	{"GetUpdateClientRect", &luna_wrapper_wxWindow::_bind_GetUpdateClientRect},
	{"HasTransparentBackground", &luna_wrapper_wxWindow::_bind_HasTransparentBackground},
	{"Refresh", &luna_wrapper_wxWindow::_bind_Refresh},
	{"RefreshRect", &luna_wrapper_wxWindow::_bind_RefreshRect},
	{"Update", &luna_wrapper_wxWindow::_bind_Update},
	{"SetBackgroundColour", &luna_wrapper_wxWindow::_bind_SetBackgroundColour},
	{"SetBackgroundStyle", &luna_wrapper_wxWindow::_bind_SetBackgroundStyle},
	{"SetFont", &luna_wrapper_wxWindow::_bind_SetFont},
	{"SetForegroundColour", &luna_wrapper_wxWindow::_bind_SetForegroundColour},
	{"SetOwnBackgroundColour", &luna_wrapper_wxWindow::_bind_SetOwnBackgroundColour},
	{"SetOwnFont", &luna_wrapper_wxWindow::_bind_SetOwnFont},
	{"SetOwnForegroundColour", &luna_wrapper_wxWindow::_bind_SetOwnForegroundColour},
	{"SetPalette", &luna_wrapper_wxWindow::_bind_SetPalette},
	{"ShouldInheritColours", &luna_wrapper_wxWindow::_bind_ShouldInheritColours},
	{"SetThemeEnabled", &luna_wrapper_wxWindow::_bind_SetThemeEnabled},
	{"GetThemeEnabled", &luna_wrapper_wxWindow::_bind_GetThemeEnabled},
	{"CanSetTransparent", &luna_wrapper_wxWindow::_bind_CanSetTransparent},
	{"SetTransparent", &luna_wrapper_wxWindow::_bind_SetTransparent},
	{"GetEventHandler", &luna_wrapper_wxWindow::_bind_GetEventHandler},
	{"HandleAsNavigationKey", &luna_wrapper_wxWindow::_bind_HandleAsNavigationKey},
	{"HandleWindowEvent", &luna_wrapper_wxWindow::_bind_HandleWindowEvent},
	{"ProcessWindowEvent", &luna_wrapper_wxWindow::_bind_ProcessWindowEvent},
	{"ProcessWindowEventLocally", &luna_wrapper_wxWindow::_bind_ProcessWindowEventLocally},
	{"PopEventHandler", &luna_wrapper_wxWindow::_bind_PopEventHandler},
	{"PushEventHandler", &luna_wrapper_wxWindow::_bind_PushEventHandler},
	{"RemoveEventHandler", &luna_wrapper_wxWindow::_bind_RemoveEventHandler},
	{"SetEventHandler", &luna_wrapper_wxWindow::_bind_SetEventHandler},
	{"SetNextHandler", &luna_wrapper_wxWindow::_bind_SetNextHandler},
	{"SetPreviousHandler", &luna_wrapper_wxWindow::_bind_SetPreviousHandler},
	{"GetExtraStyle", &luna_wrapper_wxWindow::_bind_GetExtraStyle},
	{"GetWindowStyleFlag", &luna_wrapper_wxWindow::_bind_GetWindowStyleFlag},
	{"GetWindowStyle", &luna_wrapper_wxWindow::_bind_GetWindowStyle},
	{"HasExtraStyle", &luna_wrapper_wxWindow::_bind_HasExtraStyle},
	{"HasFlag", &luna_wrapper_wxWindow::_bind_HasFlag},
	{"SetExtraStyle", &luna_wrapper_wxWindow::_bind_SetExtraStyle},
	{"SetWindowStyleFlag", &luna_wrapper_wxWindow::_bind_SetWindowStyleFlag},
	{"SetWindowStyle", &luna_wrapper_wxWindow::_bind_SetWindowStyle},
	{"ToggleWindowStyle", &luna_wrapper_wxWindow::_bind_ToggleWindowStyle},
	{"MoveAfterInTabOrder", &luna_wrapper_wxWindow::_bind_MoveAfterInTabOrder},
	{"MoveBeforeInTabOrder", &luna_wrapper_wxWindow::_bind_MoveBeforeInTabOrder},
	{"Navigate", &luna_wrapper_wxWindow::_bind_Navigate},
	{"NavigateIn", &luna_wrapper_wxWindow::_bind_NavigateIn},
	{"Lower", &luna_wrapper_wxWindow::_bind_Lower},
	{"Raise", &luna_wrapper_wxWindow::_bind_Raise},
	{"Hide", &luna_wrapper_wxWindow::_bind_Hide},
	{"HideWithEffect", &luna_wrapper_wxWindow::_bind_HideWithEffect},
	{"IsEnabled", &luna_wrapper_wxWindow::_bind_IsEnabled},
	{"IsExposed", &luna_wrapper_wxWindow::_bind_IsExposed},
	{"IsShown", &luna_wrapper_wxWindow::_bind_IsShown},
	{"IsShownOnScreen", &luna_wrapper_wxWindow::_bind_IsShownOnScreen},
	{"Disable", &luna_wrapper_wxWindow::_bind_Disable},
	{"Enable", &luna_wrapper_wxWindow::_bind_Enable},
	{"Show", &luna_wrapper_wxWindow::_bind_Show},
	{"ShowWithEffect", &luna_wrapper_wxWindow::_bind_ShowWithEffect},
	{"GetHelpText", &luna_wrapper_wxWindow::_bind_GetHelpText},
	{"SetHelpText", &luna_wrapper_wxWindow::_bind_SetHelpText},
	{"GetHelpTextAtPoint", &luna_wrapper_wxWindow::_bind_GetHelpTextAtPoint},
	{"GetToolTip", &luna_wrapper_wxWindow::_bind_GetToolTip},
	{"GetToolTipText", &luna_wrapper_wxWindow::_bind_GetToolTipText},
	{"SetToolTip", &luna_wrapper_wxWindow::_bind_SetToolTip},
	{"UnsetToolTip", &luna_wrapper_wxWindow::_bind_UnsetToolTip},
	{"GetPopupMenuSelectionFromUser", &luna_wrapper_wxWindow::_bind_GetPopupMenuSelectionFromUser},
	{"PopupMenu", &luna_wrapper_wxWindow::_bind_PopupMenu},
	{"GetValidator", &luna_wrapper_wxWindow::_bind_GetValidator},
	{"SetValidator", &luna_wrapper_wxWindow::_bind_SetValidator},
	{"TransferDataFromWindow", &luna_wrapper_wxWindow::_bind_TransferDataFromWindow},
	{"TransferDataToWindow", &luna_wrapper_wxWindow::_bind_TransferDataToWindow},
	{"Validate", &luna_wrapper_wxWindow::_bind_Validate},
	{"GetId", &luna_wrapper_wxWindow::_bind_GetId},
	{"GetLabel", &luna_wrapper_wxWindow::_bind_GetLabel},
	{"GetLayoutDirection", &luna_wrapper_wxWindow::_bind_GetLayoutDirection},
	{"GetName", &luna_wrapper_wxWindow::_bind_GetName},
	{"GetWindowVariant", &luna_wrapper_wxWindow::_bind_GetWindowVariant},
	{"SetId", &luna_wrapper_wxWindow::_bind_SetId},
	{"SetLabel", &luna_wrapper_wxWindow::_bind_SetLabel},
	{"SetLayoutDirection", &luna_wrapper_wxWindow::_bind_SetLayoutDirection},
	{"SetName", &luna_wrapper_wxWindow::_bind_SetName},
	{"SetWindowVariant", &luna_wrapper_wxWindow::_bind_SetWindowVariant},
	{"GetAcceleratorTable", &luna_wrapper_wxWindow::_bind_GetAcceleratorTable},
	{"SetAcceleratorTable", &luna_wrapper_wxWindow::_bind_SetAcceleratorTable},
	{"Close", &luna_wrapper_wxWindow::_bind_Close},
	{"Destroy", &luna_wrapper_wxWindow::_bind_Destroy},
	{"IsBeingDeleted", &luna_wrapper_wxWindow::_bind_IsBeingDeleted},
	{"GetDropTarget", &luna_wrapper_wxWindow::_bind_GetDropTarget},
	{"SetDropTarget", &luna_wrapper_wxWindow::_bind_SetDropTarget},
	{"DragAcceptFiles", &luna_wrapper_wxWindow::_bind_DragAcceptFiles},
	{"GetContainingSizer", &luna_wrapper_wxWindow::_bind_GetContainingSizer},
	{"GetSizer", &luna_wrapper_wxWindow::_bind_GetSizer},
	{"SetSizer", &luna_wrapper_wxWindow::_bind_SetSizer},
	{"SetSizerAndFit", &luna_wrapper_wxWindow::_bind_SetSizerAndFit},
	{"GetConstraints", &luna_wrapper_wxWindow::_bind_GetConstraints},
	{"SetConstraints", &luna_wrapper_wxWindow::_bind_SetConstraints},
	{"Layout", &luna_wrapper_wxWindow::_bind_Layout},
	{"SetAutoLayout", &luna_wrapper_wxWindow::_bind_SetAutoLayout},
	{"GetAutoLayout", &luna_wrapper_wxWindow::_bind_GetAutoLayout},
	{"CaptureMouse", &luna_wrapper_wxWindow::_bind_CaptureMouse},
	{"GetCaret", &luna_wrapper_wxWindow::_bind_GetCaret},
	{"GetCursor", &luna_wrapper_wxWindow::_bind_GetCursor},
	{"HasCapture", &luna_wrapper_wxWindow::_bind_HasCapture},
	{"ReleaseMouse", &luna_wrapper_wxWindow::_bind_ReleaseMouse},
	{"SetCaret", &luna_wrapper_wxWindow::_bind_SetCaret},
	{"SetCursor", &luna_wrapper_wxWindow::_bind_SetCursor},
	{"WarpPointer", &luna_wrapper_wxWindow::_bind_WarpPointer},
	{"HitTest", &luna_wrapper_wxWindow::_bind_HitTest},
	{"GetBorder", &luna_wrapper_wxWindow::_bind_GetBorder},
	{"DoUpdateWindowUI", &luna_wrapper_wxWindow::_bind_DoUpdateWindowUI},
	{"GetHandle", &luna_wrapper_wxWindow::_bind_GetHandle},
	{"HasMultiplePages", &luna_wrapper_wxWindow::_bind_HasMultiplePages},
	{"InheritAttributes", &luna_wrapper_wxWindow::_bind_InheritAttributes},
	{"InitDialog", &luna_wrapper_wxWindow::_bind_InitDialog},
	{"IsRetained", &luna_wrapper_wxWindow::_bind_IsRetained},
	{"IsThisEnabled", &luna_wrapper_wxWindow::_bind_IsThisEnabled},
	{"IsTopLevel", &luna_wrapper_wxWindow::_bind_IsTopLevel},
	{"MakeModal", &luna_wrapper_wxWindow::_bind_MakeModal},
	{"OnInternalIdle", &luna_wrapper_wxWindow::_bind_OnInternalIdle},
	{"RegisterHotKey", &luna_wrapper_wxWindow::_bind_RegisterHotKey},
	{"UnregisterHotKey", &luna_wrapper_wxWindow::_bind_UnregisterHotKey},
	{"UpdateWindowUI", &luna_wrapper_wxWindow::_bind_UpdateWindowUI},
	{"GetClassDefaultAttributes", &luna_wrapper_wxWindow::_bind_GetClassDefaultAttributes},
	{"FindFocus", &luna_wrapper_wxWindow::_bind_FindFocus},
	{"FindWindowById", &luna_wrapper_wxWindow::_bind_FindWindowById},
	{"FindWindowByLabel", &luna_wrapper_wxWindow::_bind_FindWindowByLabel},
	{"FindWindowByName", &luna_wrapper_wxWindow::_bind_FindWindowByName},
	{"GetCapture", &luna_wrapper_wxWindow::_bind_GetCapture},
	{"NewControlId", &luna_wrapper_wxWindow::_bind_NewControlId},
	{"UnreserveControlId", &luna_wrapper_wxWindow::_bind_UnreserveControlId},
	{"base_GetClassInfo", &luna_wrapper_wxWindow::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxWindow::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxWindow::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxWindow::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxWindow::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxWindow::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxWindow::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxWindow::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxWindow::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxWindow::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxWindow::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxWindow::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxWindow::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxWindow::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxWindow::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxWindow::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxWindow::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxWindow::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxWindow::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxWindow::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxWindow::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxWindow::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxWindow::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxWindow::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxWindow::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxWindow::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxWindow::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxWindow::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxWindow::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxWindow::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxWindow::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxWindow::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxWindow::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxWindow::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxWindow::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxWindow::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxWindow::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxWindow::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxWindow::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxWindow::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxWindow::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxWindow::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxWindow::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxWindow::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxWindow::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxWindow::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxWindow::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxWindow::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxWindow::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxWindow::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxWindow::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxWindow::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxWindow::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxWindow::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxWindow::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxWindow::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxWindow::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxWindow::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxWindow::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxWindow::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxWindow::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxWindow::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxWindow::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxWindow::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxWindow::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxWindow::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxWindow::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxWindow::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxWindow::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxWindow::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxWindow::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxWindow::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxWindow::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxWindow::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxWindow::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxWindow::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxWindow::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxWindow::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxWindow::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxWindow::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxWindow::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxWindow::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxWindow::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxWindow::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxWindow::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxWindow::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxWindow::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxWindow::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxWindow::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxWindow::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxWindow::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxWindow::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxWindow::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxWindow::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxWindow::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxWindow::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxWindow::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxWindow::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxWindow::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxWindow::_bind_base_UpdateWindowUI},
	{"fromVoid", &luna_wrapper_wxWindow::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxWindow::_bind_asVoid},
	{"getTable", &luna_wrapper_wxWindow::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxWindow >::enumValues[] = {
	{0,0}
};


