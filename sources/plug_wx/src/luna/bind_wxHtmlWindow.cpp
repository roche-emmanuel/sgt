#include <plug_common.h>

#include <luna/wrappers/wrapper_wxHtmlWindow.h>

class luna_wrapper_wxHtmlWindow {
public:
	typedef Luna< wxHtmlWindow > luna_t;

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

		wxHtmlWindow* self= (wxHtmlWindow*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxHtmlWindow >::push(L,self,false);
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
		//wxHtmlWindow* ptr= dynamic_cast< wxHtmlWindow* >(Luna< wxObject >::check(L,1));
		wxHtmlWindow* ptr= luna_caster< wxObject, wxHtmlWindow >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxHtmlWindow >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>6 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
		if( luatop<2 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AppendToPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetInternalRepresentation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOpenedAnchor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOpenedPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOpenedPageTitle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRelatedFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HistoryBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HistoryCanBack(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HistoryCanForward(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HistoryClear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HistoryForward(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_LoadFile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,53530938) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_LoadPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnLinkClicked(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnSetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ReadCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SelectLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectWord(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectionToText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetBorders(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFonts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStandardFonts(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRelatedFrame(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRelatedStatusBar_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetRelatedStatusBar_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxStatusBar >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToText(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_WriteCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AddFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
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

	inline static bool _lg_typecheck_base_AcceptsFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InitDialog(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Layout(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFocus(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_LoadPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnLinkClicked(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnSetTitle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ReadCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_WriteCustomization(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxHtmlWindow::wxHtmlWindow()
	static wxHtmlWindow* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlWindow::wxHtmlWindow() function, expected prototype:\nwxHtmlWindow::wxHtmlWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxHtmlWindow();
	}

	// wxHtmlWindow::wxHtmlWindow(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHW_DEFAULT_STYLE, const wxString & name = "htmlWindow")
	static wxHtmlWindow* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlWindow::wxHtmlWindow(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHW_DEFAULT_STYLE, const wxString & name = \"htmlWindow\") function, expected prototype:\nwxHtmlWindow::wxHtmlWindow(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHW_DEFAULT_STYLE, const wxString & name = \"htmlWindow\")\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHtmlWindow::wxHtmlWindow function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlWindow::wxHtmlWindow function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)wxHW_DEFAULT_STYLE;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxHtmlWindow(parent, id, pos, size, style, name);
	}

	// wxHtmlWindow::wxHtmlWindow(lua_Table * data)
	static wxHtmlWindow* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlWindow::wxHtmlWindow(lua_Table * data) function, expected prototype:\nwxHtmlWindow::wxHtmlWindow(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxHtmlWindow(L,NULL);
	}

	// wxHtmlWindow::wxHtmlWindow(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHW_DEFAULT_STYLE, const wxString & name = "htmlWindow")
	static wxHtmlWindow* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlWindow::wxHtmlWindow(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHW_DEFAULT_STYLE, const wxString & name = \"htmlWindow\") function, expected prototype:\nwxHtmlWindow::wxHtmlWindow(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxHW_DEFAULT_STYLE, const wxString & name = \"htmlWindow\")\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHtmlWindow::wxHtmlWindow function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlWindow::wxHtmlWindow function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxHW_DEFAULT_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_wxHtmlWindow(L,NULL, parent, id, pos, size, style, name);
	}

	// Overload binder for wxHtmlWindow::wxHtmlWindow
	static wxHtmlWindow* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxHtmlWindow, cannot match any of the overloads for function wxHtmlWindow:\n  wxHtmlWindow()\n  wxHtmlWindow(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n  wxHtmlWindow(lua_Table *)\n  wxHtmlWindow(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxHtmlWindow::AppendToPage(const wxString & source)
	static int _bind_AppendToPage(lua_State *L) {
		if (!_lg_typecheck_AppendToPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::AppendToPage(const wxString & source) function, expected prototype:\nbool wxHtmlWindow::AppendToPage(const wxString & source)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString source(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::AppendToPage(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AppendToPage(source);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxHtmlContainerCell * wxHtmlWindow::GetInternalRepresentation() const
	static int _bind_GetInternalRepresentation(lua_State *L) {
		if (!_lg_typecheck_GetInternalRepresentation(L)) {
			luaL_error(L, "luna typecheck failed in wxHtmlContainerCell * wxHtmlWindow::GetInternalRepresentation() const function, expected prototype:\nwxHtmlContainerCell * wxHtmlWindow::GetInternalRepresentation() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxHtmlContainerCell * wxHtmlWindow::GetInternalRepresentation() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxHtmlContainerCell * lret = self->GetInternalRepresentation();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxHtmlContainerCell >::push(L,lret,false);

		return 1;
	}

	// wxString wxHtmlWindow::GetOpenedAnchor() const
	static int _bind_GetOpenedAnchor(lua_State *L) {
		if (!_lg_typecheck_GetOpenedAnchor(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::GetOpenedAnchor() const function, expected prototype:\nwxString wxHtmlWindow::GetOpenedAnchor() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::GetOpenedAnchor() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetOpenedAnchor();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxHtmlWindow::GetOpenedPage() const
	static int _bind_GetOpenedPage(lua_State *L) {
		if (!_lg_typecheck_GetOpenedPage(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::GetOpenedPage() const function, expected prototype:\nwxString wxHtmlWindow::GetOpenedPage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::GetOpenedPage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetOpenedPage();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxHtmlWindow::GetOpenedPageTitle() const
	static int _bind_GetOpenedPageTitle(lua_State *L) {
		if (!_lg_typecheck_GetOpenedPageTitle(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::GetOpenedPageTitle() const function, expected prototype:\nwxString wxHtmlWindow::GetOpenedPageTitle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::GetOpenedPageTitle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetOpenedPageTitle();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxFrame * wxHtmlWindow::GetRelatedFrame() const
	static int _bind_GetRelatedFrame(lua_State *L) {
		if (!_lg_typecheck_GetRelatedFrame(L)) {
			luaL_error(L, "luna typecheck failed in wxFrame * wxHtmlWindow::GetRelatedFrame() const function, expected prototype:\nwxFrame * wxHtmlWindow::GetRelatedFrame() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFrame * wxHtmlWindow::GetRelatedFrame() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFrame * lret = self->GetRelatedFrame();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFrame >::push(L,lret,false);

		return 1;
	}

	// bool wxHtmlWindow::HistoryBack()
	static int _bind_HistoryBack(lua_State *L) {
		if (!_lg_typecheck_HistoryBack(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::HistoryBack() function, expected prototype:\nbool wxHtmlWindow::HistoryBack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::HistoryBack(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HistoryBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::HistoryCanBack()
	static int _bind_HistoryCanBack(lua_State *L) {
		if (!_lg_typecheck_HistoryCanBack(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::HistoryCanBack() function, expected prototype:\nbool wxHtmlWindow::HistoryCanBack()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::HistoryCanBack(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HistoryCanBack();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::HistoryCanForward()
	static int _bind_HistoryCanForward(lua_State *L) {
		if (!_lg_typecheck_HistoryCanForward(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::HistoryCanForward() function, expected prototype:\nbool wxHtmlWindow::HistoryCanForward()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::HistoryCanForward(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HistoryCanForward();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::HistoryClear()
	static int _bind_HistoryClear(lua_State *L) {
		if (!_lg_typecheck_HistoryClear(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::HistoryClear() function, expected prototype:\nvoid wxHtmlWindow::HistoryClear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::HistoryClear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->HistoryClear();

		return 0;
	}

	// bool wxHtmlWindow::HistoryForward()
	static int _bind_HistoryForward(lua_State *L) {
		if (!_lg_typecheck_HistoryForward(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::HistoryForward() function, expected prototype:\nbool wxHtmlWindow::HistoryForward()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::HistoryForward(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HistoryForward();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::LoadFile(const wxFileName & filename)
	static int _bind_LoadFile(lua_State *L) {
		if (!_lg_typecheck_LoadFile(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::LoadFile(const wxFileName & filename) function, expected prototype:\nbool wxHtmlWindow::LoadFile(const wxFileName & filename)\nClass arguments details:\narg 1 ID = 53530938\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFileName* filename_ptr=(Luna< wxFileName >::check(L,2));
		if( !filename_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg filename in wxHtmlWindow::LoadFile function");
		}
		const wxFileName & filename=*filename_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::LoadFile(const wxFileName &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadFile(filename);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::LoadPage(const wxString & location)
	static int _bind_LoadPage(lua_State *L) {
		if (!_lg_typecheck_LoadPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::LoadPage(const wxString & location) function, expected prototype:\nbool wxHtmlWindow::LoadPage(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString location(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::LoadPage(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->LoadPage(location);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::OnLinkClicked(const wxHtmlLinkInfo & link)
	static int _bind_OnLinkClicked(lua_State *L) {
		if (!_lg_typecheck_OnLinkClicked(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::OnLinkClicked(const wxHtmlLinkInfo & link) function, expected prototype:\nvoid wxHtmlWindow::OnLinkClicked(const wxHtmlLinkInfo & link)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxHtmlLinkInfo* link_ptr=(Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,2));
		if( !link_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg link in wxHtmlWindow::OnLinkClicked function");
		}
		const wxHtmlLinkInfo & link=*link_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::OnLinkClicked(const wxHtmlLinkInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnLinkClicked(link);

		return 0;
	}

	// void wxHtmlWindow::OnSetTitle(const wxString & title)
	static int _bind_OnSetTitle(lua_State *L) {
		if (!_lg_typecheck_OnSetTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::OnSetTitle(const wxString & title) function, expected prototype:\nvoid wxHtmlWindow::OnSetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::OnSetTitle(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OnSetTitle(title);

		return 0;
	}

	// void wxHtmlWindow::ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)
	static int _bind_ReadCustomization(lua_State *L) {
		if (!_lg_typecheck_ReadCustomization(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString) function, expected prototype:\nvoid wxHtmlWindow::ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::ReadCustomization(wxConfigBase *, wxString). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReadCustomization(cfg, path);

		return 0;
	}

	// void wxHtmlWindow::SelectAll()
	static int _bind_SelectAll(lua_State *L) {
		if (!_lg_typecheck_SelectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SelectAll() function, expected prototype:\nvoid wxHtmlWindow::SelectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SelectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectAll();

		return 0;
	}

	// void wxHtmlWindow::SelectLine(const wxPoint & pos)
	static int _bind_SelectLine(lua_State *L) {
		if (!_lg_typecheck_SelectLine(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SelectLine(const wxPoint & pos) function, expected prototype:\nvoid wxHtmlWindow::SelectLine(const wxPoint & pos)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHtmlWindow::SelectLine function");
		}
		const wxPoint & pos=*pos_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SelectLine(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectLine(pos);

		return 0;
	}

	// void wxHtmlWindow::SelectWord(const wxPoint & pos)
	static int _bind_SelectWord(lua_State *L) {
		if (!_lg_typecheck_SelectWord(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SelectWord(const wxPoint & pos) function, expected prototype:\nvoid wxHtmlWindow::SelectWord(const wxPoint & pos)\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxHtmlWindow::SelectWord function");
		}
		const wxPoint & pos=*pos_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SelectWord(const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectWord(pos);

		return 0;
	}

	// wxString wxHtmlWindow::SelectionToText()
	static int _bind_SelectionToText(lua_State *L) {
		if (!_lg_typecheck_SelectionToText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::SelectionToText() function, expected prototype:\nwxString wxHtmlWindow::SelectionToText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::SelectionToText(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->SelectionToText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHtmlWindow::SetBorders(int b)
	static int _bind_SetBorders(lua_State *L) {
		if (!_lg_typecheck_SetBorders(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetBorders(int b) function, expected prototype:\nvoid wxHtmlWindow::SetBorders(int b)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int b=(int)lua_tointeger(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetBorders(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetBorders(b);

		return 0;
	}

	// void wxHtmlWindow::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL)
	static int _bind_SetFonts(lua_State *L) {
		if (!_lg_typecheck_SetFonts(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL) function, expected prototype:\nvoid wxHtmlWindow::SetFonts(const wxString & normal_face, const wxString & fixed_face, const int * sizes = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString normal_face(lua_tostring(L,2),lua_objlen(L,2));
		wxString fixed_face(lua_tostring(L,3),lua_objlen(L,3));
		const int* sizes=luatop>3 ? (const int*)Luna< void >::check(L,4) : (const int*)NULL;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetFonts(const wxString &, const wxString &, const int *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFonts(normal_face, fixed_face, sizes);

		return 0;
	}

	// void wxHtmlWindow::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString)
	static int _bind_SetStandardFonts(lua_State *L) {
		if (!_lg_typecheck_SetStandardFonts(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString) function, expected prototype:\nvoid wxHtmlWindow::SetStandardFonts(int size = -1, const wxString & normal_face = wxEmptyString, const wxString & fixed_face = wxEmptyString)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int size=luatop>1 ? (int)lua_tointeger(L,2) : (int)-1;
		wxString normal_face(lua_tostring(L,3),lua_objlen(L,3));
		wxString fixed_face(lua_tostring(L,4),lua_objlen(L,4));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetStandardFonts(int, const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStandardFonts(size, normal_face, fixed_face);

		return 0;
	}

	// bool wxHtmlWindow::SetPage(const wxString & source)
	static int _bind_SetPage(lua_State *L) {
		if (!_lg_typecheck_SetPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::SetPage(const wxString & source) function, expected prototype:\nbool wxHtmlWindow::SetPage(const wxString & source)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString source(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::SetPage(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetPage(source);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::SetRelatedFrame(wxFrame * frame, const wxString & format)
	static int _bind_SetRelatedFrame(lua_State *L) {
		if (!_lg_typecheck_SetRelatedFrame(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetRelatedFrame(wxFrame * frame, const wxString & format) function, expected prototype:\nvoid wxHtmlWindow::SetRelatedFrame(wxFrame * frame, const wxString & format)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxFrame* frame=(Luna< wxObject >::checkSubType< wxFrame >(L,2));
		wxString format(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetRelatedFrame(wxFrame *, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRelatedFrame(frame, format);

		return 0;
	}

	// void wxHtmlWindow::SetRelatedStatusBar(int index)
	static int _bind_SetRelatedStatusBar_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetRelatedStatusBar_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetRelatedStatusBar(int index) function, expected prototype:\nvoid wxHtmlWindow::SetRelatedStatusBar(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetRelatedStatusBar(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRelatedStatusBar(index);

		return 0;
	}

	// void wxHtmlWindow::SetRelatedStatusBar(wxStatusBar * statusbar, int index = 0)
	static int _bind_SetRelatedStatusBar_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetRelatedStatusBar_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::SetRelatedStatusBar(wxStatusBar * statusbar, int index = 0) function, expected prototype:\nvoid wxHtmlWindow::SetRelatedStatusBar(wxStatusBar * statusbar, int index = 0)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxStatusBar* statusbar=(Luna< wxObject >::checkSubType< wxStatusBar >(L,2));
		int index=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::SetRelatedStatusBar(wxStatusBar *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetRelatedStatusBar(statusbar, index);

		return 0;
	}

	// Overload binder for wxHtmlWindow::SetRelatedStatusBar
	static int _bind_SetRelatedStatusBar(lua_State *L) {
		if (_lg_typecheck_SetRelatedStatusBar_overload_1(L)) return _bind_SetRelatedStatusBar_overload_1(L);
		if (_lg_typecheck_SetRelatedStatusBar_overload_2(L)) return _bind_SetRelatedStatusBar_overload_2(L);

		luaL_error(L, "error in function SetRelatedStatusBar, cannot match any of the overloads for function SetRelatedStatusBar:\n  SetRelatedStatusBar(int)\n  SetRelatedStatusBar(wxStatusBar *, int)\n");
		return 0;
	}

	// wxString wxHtmlWindow::ToText()
	static int _bind_ToText(lua_State *L) {
		if (!_lg_typecheck_ToText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::ToText() function, expected prototype:\nwxString wxHtmlWindow::ToText()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::ToText(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->ToText();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHtmlWindow::WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)
	static int _bind_WriteCustomization(lua_State *L) {
		if (!_lg_typecheck_WriteCustomization(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString) function, expected prototype:\nvoid wxHtmlWindow::WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::WriteCustomization(wxConfigBase *, wxString). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->WriteCustomization(cfg, path);

		return 0;
	}

	// static void wxHtmlWindow::AddFilter(wxHtmlFilter * filter)
	static int _bind_AddFilter(lua_State *L) {
		if (!_lg_typecheck_AddFilter(L)) {
			luaL_error(L, "luna typecheck failed in static void wxHtmlWindow::AddFilter(wxHtmlFilter * filter) function, expected prototype:\nstatic void wxHtmlWindow::AddFilter(wxHtmlFilter * filter)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxHtmlFilter* filter=(Luna< wxObject >::checkSubType< wxHtmlFilter >(L,1));

		wxHtmlWindow::AddFilter(filter);

		return 0;
	}

	// wxClassInfo * wxHtmlWindow::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxHtmlWindow::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxHtmlWindow::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxHtmlWindow::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxHtmlWindow::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxHtmlWindow::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxHtmlWindow::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxHtmlWindow::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_HasFocus() const function, expected prototype:\nbool wxHtmlWindow::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxHtmlWindow::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetCanFocus(canFocus);

		return 0;
	}

	// void wxHtmlWindow::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetFocusFromKbd() function, expected prototype:\nvoid wxHtmlWindow::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetFocusFromKbd();

		return 0;
	}

	// void wxHtmlWindow::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxHtmlWindow::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::AddChild(child);

		return 0;
	}

	// void wxHtmlWindow::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxHtmlWindow::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::RemoveChild(child);

		return 0;
	}

	// bool wxHtmlWindow::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxHtmlWindow::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxHtmlWindow::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxHtmlWindow::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxHtmlWindow::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxHtmlWindow::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHtmlWindow::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHtmlWindow::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlWindow::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxHtmlWindow::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxHtmlWindow::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHtmlWindow::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHtmlWindow::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlWindow::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxHtmlWindow::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxHtmlWindow::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHtmlWindow::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHtmlWindow::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxHtmlWindow::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxHtmlWindow::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_ScrollLines(int lines) function, expected prototype:\nbool wxHtmlWindow::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_ScrollPages(int pages) function, expected prototype:\nbool wxHtmlWindow::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxHtmlWindow::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxHtmlWindow::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxHtmlWindow::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxHtmlWindow::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxHtmlWindow::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxHtmlWindow::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlWindow::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxHtmlWindow::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlWindow::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHtmlWindow::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHtmlWindow::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlWindow::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlWindow::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxHtmlWindow::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlWindow::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHtmlWindow::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHtmlWindow::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxHtmlWindow::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_Fit() function, expected prototype:\nvoid wxHtmlWindow::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::Fit();

		return 0;
	}

	// void wxHtmlWindow::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_FitInside() function, expected prototype:\nvoid wxHtmlWindow::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::FitInside();

		return 0;
	}

	// wxSize wxHtmlWindow::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlWindow::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxHtmlWindow::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHtmlWindow::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHtmlWindow::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlWindow::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlWindow::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxHtmlWindow::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHtmlWindow::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHtmlWindow::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlWindow::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlWindow::base_GetMaxSize() const function, expected prototype:\nwxSize wxHtmlWindow::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHtmlWindow::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHtmlWindow::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlWindow::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlWindow::base_GetMinClientSize() const function, expected prototype:\nwxSize wxHtmlWindow::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHtmlWindow::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHtmlWindow::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlWindow::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlWindow::base_GetMinSize() const function, expected prototype:\nwxSize wxHtmlWindow::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHtmlWindow::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHtmlWindow::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlWindow::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlWindow::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxHtmlWindow::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHtmlWindow::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHtmlWindow::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxHtmlWindow::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxHtmlWindow::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxHtmlWindow::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxHtmlWindow::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxHtmlWindow::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxHtmlWindow::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxHtmlWindow::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxHtmlWindow::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SendSizeEvent(flags);

		return 0;
	}

	// void wxHtmlWindow::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxHtmlWindow::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlWindow::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetMaxClientSize(size);

		return 0;
	}

	// void wxHtmlWindow::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxHtmlWindow::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlWindow::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetMaxSize(size);

		return 0;
	}

	// void wxHtmlWindow::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxHtmlWindow::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlWindow::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetMinClientSize(size);

		return 0;
	}

	// void wxHtmlWindow::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxHtmlWindow::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxHtmlWindow::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetMinSize(size);

		return 0;
	}

	// void wxHtmlWindow::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxHtmlWindow::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxHtmlWindow::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxHtmlWindow::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxHtmlWindow::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxHtmlWindow::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxHtmlWindow::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxHtmlWindow::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxHtmlWindow::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxHtmlWindow::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxHtmlWindow::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxHtmlWindow::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxHtmlWindow::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxHtmlWindow::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_ClearBackground() function, expected prototype:\nvoid wxHtmlWindow::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxHtmlWindow::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxHtmlWindow::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxHtmlWindow::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxHtmlWindow::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxHtmlWindow::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlWindow::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxHtmlWindow::base_GetCharHeight() const function, expected prototype:\nint wxHtmlWindow::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHtmlWindow::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHtmlWindow::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxHtmlWindow::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxHtmlWindow::base_GetCharWidth() const function, expected prototype:\nint wxHtmlWindow::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxHtmlWindow::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxHtmlWindow::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxHtmlWindow::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxHtmlWindow::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxHtmlWindow::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxHtmlWindow::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxHtmlWindow::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxHtmlWindow::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxHtmlWindow::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxHtmlWindow::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_Update() function, expected prototype:\nvoid wxHtmlWindow::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::Update();

		return 0;
	}

	// bool wxHtmlWindow::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxHtmlWindow::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxHtmlWindow::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxHtmlWindow::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_ShouldInheritColours() const function, expected prototype:\nbool wxHtmlWindow::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxHtmlWindow::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxHtmlWindow::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_GetThemeEnabled() const function, expected prototype:\nbool wxHtmlWindow::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_CanSetTransparent() function, expected prototype:\nbool wxHtmlWindow::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxHtmlWindow::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxHtmlWindow::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetNextHandler(handler);

		return 0;
	}

	// void wxHtmlWindow::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxHtmlWindow::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetPreviousHandler(handler);

		return 0;
	}

	// long wxHtmlWindow::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxHtmlWindow::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxHtmlWindow::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxHtmlWindow::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxHtmlWindow::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxHtmlWindow::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxHtmlWindow::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxHtmlWindow::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxHtmlWindow::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxHtmlWindow::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_Lower() function, expected prototype:\nvoid wxHtmlWindow::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::Lower();

		return 0;
	}

	// void wxHtmlWindow::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_Raise() function, expected prototype:\nvoid wxHtmlWindow::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::Raise();

		return 0;
	}

	// bool wxHtmlWindow::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxHtmlWindow::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_IsShown() const function, expected prototype:\nbool wxHtmlWindow::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_IsShownOnScreen() const function, expected prototype:\nbool wxHtmlWindow::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_Enable(bool enable = true) function, expected prototype:\nbool wxHtmlWindow::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_Show(bool show = true) function, expected prototype:\nbool wxHtmlWindow::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxHtmlWindow::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxHtmlWindow::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxHtmlWindow::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxHtmlWindow::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxHtmlWindow::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxHtmlWindow::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxHtmlWindow::base_GetValidator() function, expected prototype:\nwxValidator * wxHtmlWindow::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxHtmlWindow::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxHtmlWindow::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlWindow::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxHtmlWindow::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxHtmlWindow::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetValidator(validator);

		return 0;
	}

	// bool wxHtmlWindow::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_TransferDataFromWindow() function, expected prototype:\nbool wxHtmlWindow::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_TransferDataToWindow() function, expected prototype:\nbool wxHtmlWindow::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_Validate() function, expected prototype:\nbool wxHtmlWindow::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxHtmlWindow::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::base_GetLabel() const function, expected prototype:\nwxString wxHtmlWindow::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxHtmlWindow::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxHtmlWindow::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxHtmlWindow::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxHtmlWindow::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxHtmlWindow::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxHtmlWindow::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxHtmlWindow::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxHtmlWindow::base_GetName() const function, expected prototype:\nwxString wxHtmlWindow::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxHtmlWindow::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxHtmlWindow::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxHtmlWindow::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxHtmlWindow::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetLabel(label);

		return 0;
	}

	// void wxHtmlWindow::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxHtmlWindow::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetLayoutDirection(dir);

		return 0;
	}

	// void wxHtmlWindow::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetName(const wxString & name) function, expected prototype:\nvoid wxHtmlWindow::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetName(name);

		return 0;
	}

	// void wxHtmlWindow::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxHtmlWindow::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxHtmlWindow::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxHtmlWindow::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_Destroy() function, expected prototype:\nbool wxHtmlWindow::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxHtmlWindow::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxHtmlWindow::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxHtmlWindow::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxHtmlWindow::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxHtmlWindow::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxHtmlWindow::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxHtmlWindow::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetDropTarget(target);

		return 0;
	}

	// void wxHtmlWindow::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxHtmlWindow::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxHtmlWindow::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_HasCapture() const function, expected prototype:\nbool wxHtmlWindow::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxHtmlWindow::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxHtmlWindow::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxHtmlWindow::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::WarpPointer(x, y);

		return 0;
	}

	// void wxHtmlWindow::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxHtmlWindow::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxHtmlWindow::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxHtmlWindow::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxHtmlWindow::base_GetHandle() const function, expected prototype:\nHWND wxHtmlWindow::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxHtmlWindow::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxHtmlWindow::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxHtmlWindow::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_HasMultiplePages() const function, expected prototype:\nbool wxHtmlWindow::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_InheritAttributes() function, expected prototype:\nvoid wxHtmlWindow::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::InheritAttributes();

		return 0;
	}

	// bool wxHtmlWindow::base_IsDoubleBuffered() const
	static int _bind_base_IsDoubleBuffered(lua_State *L) {
		if (!_lg_typecheck_base_IsDoubleBuffered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_IsDoubleBuffered() const function, expected prototype:\nbool wxHtmlWindow::base_IsDoubleBuffered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_IsDoubleBuffered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::IsDoubleBuffered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_IsRetained() const function, expected prototype:\nbool wxHtmlWindow::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_IsTopLevel() const function, expected prototype:\nbool wxHtmlWindow::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxHtmlWindow::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::MakeModal(modal);

		return 0;
	}

	// void wxHtmlWindow::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_OnInternalIdle() function, expected prototype:\nvoid wxHtmlWindow::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::OnInternalIdle();

		return 0;
	}

	// bool wxHtmlWindow::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxHtmlWindow::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxHtmlWindow::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxHtmlWindow::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxHtmlWindow::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxHtmlWindow::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_AcceptsFocus() const function, expected prototype:\nbool wxHtmlWindow::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_InitDialog() function, expected prototype:\nvoid wxHtmlWindow::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::InitDialog();

		return 0;
	}

	// bool wxHtmlWindow::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_Layout() function, expected prototype:\nbool wxHtmlWindow::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_SetFocus() function, expected prototype:\nvoid wxHtmlWindow::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::SetFocus();

		return 0;
	}

	// bool wxHtmlWindow::base_LoadPage(const wxString & location)
	static int _bind_base_LoadPage(lua_State *L) {
		if (!_lg_typecheck_base_LoadPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_LoadPage(const wxString & location) function, expected prototype:\nbool wxHtmlWindow::base_LoadPage(const wxString & location)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString location(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_LoadPage(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::LoadPage(location);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_OnLinkClicked(const wxHtmlLinkInfo & link)
	static int _bind_base_OnLinkClicked(lua_State *L) {
		if (!_lg_typecheck_base_OnLinkClicked(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_OnLinkClicked(const wxHtmlLinkInfo & link) function, expected prototype:\nvoid wxHtmlWindow::base_OnLinkClicked(const wxHtmlLinkInfo & link)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxHtmlLinkInfo* link_ptr=(Luna< wxObject >::checkSubType< wxHtmlLinkInfo >(L,2));
		if( !link_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg link in wxHtmlWindow::base_OnLinkClicked function");
		}
		const wxHtmlLinkInfo & link=*link_ptr;

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_OnLinkClicked(const wxHtmlLinkInfo &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::OnLinkClicked(link);

		return 0;
	}

	// void wxHtmlWindow::base_OnSetTitle(const wxString & title)
	static int _bind_base_OnSetTitle(lua_State *L) {
		if (!_lg_typecheck_base_OnSetTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_OnSetTitle(const wxString & title) function, expected prototype:\nvoid wxHtmlWindow::base_OnSetTitle(const wxString & title)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString title(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_OnSetTitle(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::OnSetTitle(title);

		return 0;
	}

	// void wxHtmlWindow::base_ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)
	static int _bind_base_ReadCustomization(lua_State *L) {
		if (!_lg_typecheck_base_ReadCustomization(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString) function, expected prototype:\nvoid wxHtmlWindow::base_ReadCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_ReadCustomization(wxConfigBase *, wxString). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::ReadCustomization(cfg, path);

		return 0;
	}

	// bool wxHtmlWindow::base_SetPage(const wxString & source)
	static int _bind_base_SetPage(lua_State *L) {
		if (!_lg_typecheck_base_SetPage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxHtmlWindow::base_SetPage(const wxString & source) function, expected prototype:\nbool wxHtmlWindow::base_SetPage(const wxString & source)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString source(lua_tostring(L,2),lua_objlen(L,2));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxHtmlWindow::base_SetPage(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxHtmlWindow::SetPage(source);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxHtmlWindow::base_WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)
	static int _bind_base_WriteCustomization(lua_State *L) {
		if (!_lg_typecheck_base_WriteCustomization(L)) {
			luaL_error(L, "luna typecheck failed in void wxHtmlWindow::base_WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString) function, expected prototype:\nvoid wxHtmlWindow::base_WriteCustomization(wxConfigBase * cfg, wxString path = wxEmptyString)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxConfigBase* cfg=(Luna< wxObject >::checkSubType< wxConfigBase >(L,2));
		wxString path(lua_tostring(L,3),lua_objlen(L,3));

		wxHtmlWindow* self=Luna< wxObject >::checkSubType< wxHtmlWindow >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxHtmlWindow::base_WriteCustomization(wxConfigBase *, wxString). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxHtmlWindow::WriteCustomization(cfg, path);

		return 0;
	}


	// Operator binds:

};

wxHtmlWindow* LunaTraits< wxHtmlWindow >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxHtmlWindow::_bind_ctor(L);
}

void LunaTraits< wxHtmlWindow >::_bind_dtor(wxHtmlWindow* obj) {
	delete obj;
}

const char LunaTraits< wxHtmlWindow >::className[] = "wxHtmlWindow";
const char LunaTraits< wxHtmlWindow >::fullName[] = "wxHtmlWindow";
const char LunaTraits< wxHtmlWindow >::moduleName[] = "wx";
const char* LunaTraits< wxHtmlWindow >::parents[] = {"wx.wxScrolledWindow", 0};
const int LunaTraits< wxHtmlWindow >::hash = 73577618;
const int LunaTraits< wxHtmlWindow >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxHtmlWindow >::methods[] = {
	{"AppendToPage", &luna_wrapper_wxHtmlWindow::_bind_AppendToPage},
	{"GetInternalRepresentation", &luna_wrapper_wxHtmlWindow::_bind_GetInternalRepresentation},
	{"GetOpenedAnchor", &luna_wrapper_wxHtmlWindow::_bind_GetOpenedAnchor},
	{"GetOpenedPage", &luna_wrapper_wxHtmlWindow::_bind_GetOpenedPage},
	{"GetOpenedPageTitle", &luna_wrapper_wxHtmlWindow::_bind_GetOpenedPageTitle},
	{"GetRelatedFrame", &luna_wrapper_wxHtmlWindow::_bind_GetRelatedFrame},
	{"HistoryBack", &luna_wrapper_wxHtmlWindow::_bind_HistoryBack},
	{"HistoryCanBack", &luna_wrapper_wxHtmlWindow::_bind_HistoryCanBack},
	{"HistoryCanForward", &luna_wrapper_wxHtmlWindow::_bind_HistoryCanForward},
	{"HistoryClear", &luna_wrapper_wxHtmlWindow::_bind_HistoryClear},
	{"HistoryForward", &luna_wrapper_wxHtmlWindow::_bind_HistoryForward},
	{"LoadFile", &luna_wrapper_wxHtmlWindow::_bind_LoadFile},
	{"LoadPage", &luna_wrapper_wxHtmlWindow::_bind_LoadPage},
	{"OnLinkClicked", &luna_wrapper_wxHtmlWindow::_bind_OnLinkClicked},
	{"OnSetTitle", &luna_wrapper_wxHtmlWindow::_bind_OnSetTitle},
	{"ReadCustomization", &luna_wrapper_wxHtmlWindow::_bind_ReadCustomization},
	{"SelectAll", &luna_wrapper_wxHtmlWindow::_bind_SelectAll},
	{"SelectLine", &luna_wrapper_wxHtmlWindow::_bind_SelectLine},
	{"SelectWord", &luna_wrapper_wxHtmlWindow::_bind_SelectWord},
	{"SelectionToText", &luna_wrapper_wxHtmlWindow::_bind_SelectionToText},
	{"SetBorders", &luna_wrapper_wxHtmlWindow::_bind_SetBorders},
	{"SetFonts", &luna_wrapper_wxHtmlWindow::_bind_SetFonts},
	{"SetStandardFonts", &luna_wrapper_wxHtmlWindow::_bind_SetStandardFonts},
	{"SetPage", &luna_wrapper_wxHtmlWindow::_bind_SetPage},
	{"SetRelatedFrame", &luna_wrapper_wxHtmlWindow::_bind_SetRelatedFrame},
	{"SetRelatedStatusBar", &luna_wrapper_wxHtmlWindow::_bind_SetRelatedStatusBar},
	{"ToText", &luna_wrapper_wxHtmlWindow::_bind_ToText},
	{"WriteCustomization", &luna_wrapper_wxHtmlWindow::_bind_WriteCustomization},
	{"AddFilter", &luna_wrapper_wxHtmlWindow::_bind_AddFilter},
	{"base_GetClassInfo", &luna_wrapper_wxHtmlWindow::_bind_base_GetClassInfo},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxHtmlWindow::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxHtmlWindow::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxHtmlWindow::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxHtmlWindow::_bind_base_SetCanFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxHtmlWindow::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxHtmlWindow::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxHtmlWindow::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxHtmlWindow::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxHtmlWindow::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxHtmlWindow::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxHtmlWindow::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxHtmlWindow::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxHtmlWindow::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxHtmlWindow::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxHtmlWindow::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxHtmlWindow::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxHtmlWindow::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxHtmlWindow::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxHtmlWindow::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxHtmlWindow::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxHtmlWindow::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxHtmlWindow::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxHtmlWindow::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxHtmlWindow::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxHtmlWindow::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxHtmlWindow::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxHtmlWindow::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxHtmlWindow::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxHtmlWindow::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxHtmlWindow::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxHtmlWindow::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxHtmlWindow::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxHtmlWindow::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxHtmlWindow::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxHtmlWindow::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxHtmlWindow::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxHtmlWindow::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxHtmlWindow::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxHtmlWindow::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxHtmlWindow::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxHtmlWindow::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxHtmlWindow::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxHtmlWindow::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxHtmlWindow::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxHtmlWindow::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxHtmlWindow::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxHtmlWindow::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxHtmlWindow::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxHtmlWindow::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxHtmlWindow::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxHtmlWindow::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxHtmlWindow::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxHtmlWindow::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxHtmlWindow::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxHtmlWindow::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxHtmlWindow::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxHtmlWindow::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxHtmlWindow::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxHtmlWindow::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxHtmlWindow::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxHtmlWindow::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxHtmlWindow::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxHtmlWindow::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxHtmlWindow::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxHtmlWindow::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxHtmlWindow::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxHtmlWindow::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxHtmlWindow::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxHtmlWindow::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxHtmlWindow::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxHtmlWindow::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxHtmlWindow::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxHtmlWindow::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxHtmlWindow::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxHtmlWindow::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxHtmlWindow::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxHtmlWindow::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxHtmlWindow::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxHtmlWindow::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxHtmlWindow::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxHtmlWindow::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxHtmlWindow::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxHtmlWindow::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxHtmlWindow::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxHtmlWindow::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxHtmlWindow::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxHtmlWindow::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxHtmlWindow::_bind_base_InheritAttributes},
	{"base_IsDoubleBuffered", &luna_wrapper_wxHtmlWindow::_bind_base_IsDoubleBuffered},
	{"base_IsRetained", &luna_wrapper_wxHtmlWindow::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxHtmlWindow::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxHtmlWindow::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxHtmlWindow::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxHtmlWindow::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxHtmlWindow::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxHtmlWindow::_bind_base_UpdateWindowUI},
	{"base_AcceptsFocus", &luna_wrapper_wxHtmlWindow::_bind_base_AcceptsFocus},
	{"base_InitDialog", &luna_wrapper_wxHtmlWindow::_bind_base_InitDialog},
	{"base_Layout", &luna_wrapper_wxHtmlWindow::_bind_base_Layout},
	{"base_SetFocus", &luna_wrapper_wxHtmlWindow::_bind_base_SetFocus},
	{"base_LoadPage", &luna_wrapper_wxHtmlWindow::_bind_base_LoadPage},
	{"base_OnLinkClicked", &luna_wrapper_wxHtmlWindow::_bind_base_OnLinkClicked},
	{"base_OnSetTitle", &luna_wrapper_wxHtmlWindow::_bind_base_OnSetTitle},
	{"base_ReadCustomization", &luna_wrapper_wxHtmlWindow::_bind_base_ReadCustomization},
	{"base_SetPage", &luna_wrapper_wxHtmlWindow::_bind_base_SetPage},
	{"base_WriteCustomization", &luna_wrapper_wxHtmlWindow::_bind_base_WriteCustomization},
	{"fromVoid", &luna_wrapper_wxHtmlWindow::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxHtmlWindow::_bind_asVoid},
	{"getTable", &luna_wrapper_wxHtmlWindow::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxHtmlWindow >::converters[] = {
	{"wxObject", &luna_wrapper_wxHtmlWindow::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxHtmlWindow >::enumValues[] = {
	{0,0}
};


