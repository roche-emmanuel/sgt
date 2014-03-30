#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPropertyGridManager.h>

class luna_wrapper_wxPropertyGridManager {
public:
	typedef Luna< wxPropertyGridManager > luna_t;

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

		wxPropertyGridManager* self= (wxPropertyGridManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPropertyGridManager >::push(L,self,false);
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
		//wxPropertyGridManager* ptr= dynamic_cast< wxPropertyGridManager* >(Luna< wxObject >::check(L,1));
		wxPropertyGridManager* ptr= luna_caster< wxObject, wxPropertyGridManager >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGridManager >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_wxPropertyGridInterface(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxPropertyGridManager* ptr= dynamic_cast< wxPropertyGridManager* >(Luna< wxPropertyGridInterface >::check(L,1));
		wxPropertyGridManager* ptr= luna_caster< wxPropertyGridInterface, wxPropertyGridManager >::cast(Luna< wxPropertyGridInterface >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPropertyGridManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AddPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearPage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CommitChangesFromEditor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

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

	inline static bool _lg_typecheck_EnableCategories(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDescBoxHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetGrid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCurrentPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageByName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPageName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPageRoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectedPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelectedProperty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetToolBar(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_InsertPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsAnyModified(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsFrozen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsPageModified(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemovePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectPage_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectPage_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectPage_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnTitle(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDescription(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetDescBoxHeight(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSplitterLeft(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPageSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSplitterPosition(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowHeader(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_Clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_InsertPage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_RemovePage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// wxPropertyGridPage * wxPropertyGridManager::AddPage(const wxString & label = wxEmptyString, const wxBitmap & bmp = wxPG_NULL_BITMAP, wxPropertyGridPage * pageObj = NULL)
	static int _bind_AddPage(lua_State *L) {
		if (!_lg_typecheck_AddPage(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage * wxPropertyGridManager::AddPage(const wxString & label = wxEmptyString, const wxBitmap & bmp = wxPG_NULL_BITMAP, wxPropertyGridPage * pageObj = NULL) function, expected prototype:\nwxPropertyGridPage * wxPropertyGridManager::AddPage(const wxString & label = wxEmptyString, const wxBitmap & bmp = wxPG_NULL_BITMAP, wxPropertyGridPage * pageObj = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		const wxBitmap* bmp_ptr=luatop>2 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,3)) : NULL;
		if( luatop>2 && !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxPropertyGridManager::AddPage function");
		}
		const wxBitmap & bmp=luatop>2 ? *bmp_ptr : (const wxBitmap&)wxPG_NULL_BITMAP;
		wxPropertyGridPage* pageObj=luatop>3 ? (Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,4)) : (wxPropertyGridPage*)NULL;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPropertyGridPage * wxPropertyGridManager::AddPage(const wxString &, const wxBitmap &, wxPropertyGridPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPropertyGridPage * lret = self->AddPage(label, bmp, pageObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridPage >::push(L,lret,false);

		return 1;
	}

	// void wxPropertyGridManager::Clear()
	static int _bind_Clear(lua_State *L) {
		if (!_lg_typecheck_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::Clear() function, expected prototype:\nvoid wxPropertyGridManager::Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Clear();

		return 0;
	}

	// void wxPropertyGridManager::ClearPage(int page)
	static int _bind_ClearPage(lua_State *L) {
		if (!_lg_typecheck_ClearPage(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::ClearPage(int page) function, expected prototype:\nvoid wxPropertyGridManager::ClearPage(int page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int page=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::ClearPage(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearPage(page);

		return 0;
	}

	// bool wxPropertyGridManager::CommitChangesFromEditor(unsigned int flags = 0)
	static int _bind_CommitChangesFromEditor(lua_State *L) {
		if (!_lg_typecheck_CommitChangesFromEditor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::CommitChangesFromEditor(unsigned int flags = 0) function, expected prototype:\nbool wxPropertyGridManager::CommitChangesFromEditor(unsigned int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int flags=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::CommitChangesFromEditor(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CommitChangesFromEditor(flags);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxPGMAN_DEFAULT_STYLE, const wxString & name = wxPropertyGridManagerNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxPGMAN_DEFAULT_STYLE, const wxString & name = wxPropertyGridManagerNameStr) function, expected prototype:\nbool wxPropertyGridManager::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxPGMAN_DEFAULT_STYLE, const wxString & name = wxPropertyGridManagerNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxPropertyGridManager::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGridManager::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxPGMAN_DEFAULT_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::EnableCategories(bool enable)
	static int _bind_EnableCategories(lua_State *L) {
		if (!_lg_typecheck_EnableCategories(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::EnableCategories(bool enable) function, expected prototype:\nbool wxPropertyGridManager::EnableCategories(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::EnableCategories(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EnableCategories(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxPropertyGridManager::GetColumnCount(int page = -1) const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::GetColumnCount(int page = -1) const function, expected prototype:\nint wxPropertyGridManager::GetColumnCount(int page = -1) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int page=luatop>1 ? (int)lua_tointeger(L,2) : (int)-1;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::GetColumnCount(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumnCount(page);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGridManager::GetDescBoxHeight() const
	static int _bind_GetDescBoxHeight(lua_State *L) {
		if (!_lg_typecheck_GetDescBoxHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::GetDescBoxHeight() const function, expected prototype:\nint wxPropertyGridManager::GetDescBoxHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::GetDescBoxHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetDescBoxHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPropertyGrid * wxPropertyGridManager::GetGrid()
	static int _bind_GetGrid(lua_State *L) {
		if (!_lg_typecheck_GetGrid(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGrid * wxPropertyGridManager::GetGrid() function, expected prototype:\nwxPropertyGrid * wxPropertyGridManager::GetGrid()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPropertyGrid * wxPropertyGridManager::GetGrid(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPropertyGrid * lret = self->GetGrid();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGrid >::push(L,lret,false);

		return 1;
	}

	// wxPropertyGridPage * wxPropertyGridManager::GetCurrentPage() const
	static int _bind_GetCurrentPage(lua_State *L) {
		if (!_lg_typecheck_GetCurrentPage(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage * wxPropertyGridManager::GetCurrentPage() const function, expected prototype:\nwxPropertyGridPage * wxPropertyGridManager::GetCurrentPage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPropertyGridPage * wxPropertyGridManager::GetCurrentPage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPropertyGridPage * lret = self->GetCurrentPage();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridPage >::push(L,lret,false);

		return 1;
	}

	// wxPropertyGridPage * wxPropertyGridManager::GetPage(unsigned int ind) const
	static int _bind_GetPage_overload_1(lua_State *L) {
		if (!_lg_typecheck_GetPage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage * wxPropertyGridManager::GetPage(unsigned int ind) const function, expected prototype:\nwxPropertyGridPage * wxPropertyGridManager::GetPage(unsigned int ind) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int ind=(unsigned int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPropertyGridPage * wxPropertyGridManager::GetPage(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPropertyGridPage * lret = self->GetPage(ind);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridPage >::push(L,lret,false);

		return 1;
	}

	// wxPropertyGridPage * wxPropertyGridManager::GetPage(const wxString & name) const
	static int _bind_GetPage_overload_2(lua_State *L) {
		if (!_lg_typecheck_GetPage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage * wxPropertyGridManager::GetPage(const wxString & name) const function, expected prototype:\nwxPropertyGridPage * wxPropertyGridManager::GetPage(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPropertyGridPage * wxPropertyGridManager::GetPage(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPropertyGridPage * lret = self->GetPage(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridPage >::push(L,lret,false);

		return 1;
	}

	// Overload binder for wxPropertyGridManager::GetPage
	static int _bind_GetPage(lua_State *L) {
		if (_lg_typecheck_GetPage_overload_1(L)) return _bind_GetPage_overload_1(L);
		if (_lg_typecheck_GetPage_overload_2(L)) return _bind_GetPage_overload_2(L);

		luaL_error(L, "error in function GetPage, cannot match any of the overloads for function GetPage:\n  GetPage(unsigned int)\n  GetPage(const wxString &)\n");
		return 0;
	}

	// int wxPropertyGridManager::GetPageByName(const wxString & name) const
	static int _bind_GetPageByName(lua_State *L) {
		if (!_lg_typecheck_GetPageByName(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::GetPageByName(const wxString & name) const function, expected prototype:\nint wxPropertyGridManager::GetPageByName(const wxString & name) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::GetPageByName(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetPageByName(name);
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxPropertyGridManager::GetPageCount() const
	static int _bind_GetPageCount(lua_State *L) {
		if (!_lg_typecheck_GetPageCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxPropertyGridManager::GetPageCount() const function, expected prototype:\nsize_t wxPropertyGridManager::GetPageCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxPropertyGridManager::GetPageCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetPageCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// const wxString & wxPropertyGridManager::GetPageName(int index) const
	static int _bind_GetPageName(lua_State *L) {
		if (!_lg_typecheck_GetPageName(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxPropertyGridManager::GetPageName(int index) const function, expected prototype:\nconst wxString & wxPropertyGridManager::GetPageName(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxPropertyGridManager::GetPageName(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetPageName(index);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxPGProperty * wxPropertyGridManager::GetPageRoot(int index) const
	static int _bind_GetPageRoot(lua_State *L) {
		if (!_lg_typecheck_GetPageRoot(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridManager::GetPageRoot(int index) const function, expected prototype:\nwxPGProperty * wxPropertyGridManager::GetPageRoot(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridManager::GetPageRoot(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetPageRoot(index);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// int wxPropertyGridManager::GetSelectedPage() const
	static int _bind_GetSelectedPage(lua_State *L) {
		if (!_lg_typecheck_GetSelectedPage(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::GetSelectedPage() const function, expected prototype:\nint wxPropertyGridManager::GetSelectedPage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::GetSelectedPage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSelectedPage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxPGProperty * wxPropertyGridManager::GetSelectedProperty() const
	static int _bind_GetSelectedProperty(lua_State *L) {
		if (!_lg_typecheck_GetSelectedProperty(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridManager::GetSelectedProperty() const function, expected prototype:\nwxPGProperty * wxPropertyGridManager::GetSelectedProperty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridManager::GetSelectedProperty() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetSelectedProperty();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxPGProperty * wxPropertyGridManager::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxPGProperty * wxPropertyGridManager::GetSelection() const function, expected prototype:\nwxPGProperty * wxPropertyGridManager::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPGProperty * wxPropertyGridManager::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPGProperty * lret = self->GetSelection();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPGProperty >::push(L,lret,false);

		return 1;
	}

	// wxToolBar * wxPropertyGridManager::GetToolBar() const
	static int _bind_GetToolBar(lua_State *L) {
		if (!_lg_typecheck_GetToolBar(L)) {
			luaL_error(L, "luna typecheck failed in wxToolBar * wxPropertyGridManager::GetToolBar() const function, expected prototype:\nwxToolBar * wxPropertyGridManager::GetToolBar() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxToolBar * wxPropertyGridManager::GetToolBar() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxToolBar * lret = self->GetToolBar();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxToolBar >::push(L,lret,false);

		return 1;
	}

	// wxPropertyGridPage * wxPropertyGridManager::InsertPage(int index, const wxString & label, const wxBitmap & bmp = wxNullBitmap, wxPropertyGridPage * pageObj = NULL)
	static int _bind_InsertPage(lua_State *L) {
		if (!_lg_typecheck_InsertPage(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage * wxPropertyGridManager::InsertPage(int index, const wxString & label, const wxBitmap & bmp = wxNullBitmap, wxPropertyGridPage * pageObj = NULL) function, expected prototype:\nwxPropertyGridPage * wxPropertyGridManager::InsertPage(int index, const wxString & label, const wxBitmap & bmp = wxNullBitmap, wxPropertyGridPage * pageObj = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bmp_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,4)) : NULL;
		if( luatop>3 && !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxPropertyGridManager::InsertPage function");
		}
		const wxBitmap & bmp=luatop>3 ? *bmp_ptr : (const wxBitmap&)wxNullBitmap;
		wxPropertyGridPage* pageObj=luatop>4 ? (Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,5)) : (wxPropertyGridPage*)NULL;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPropertyGridPage * wxPropertyGridManager::InsertPage(int, const wxString &, const wxBitmap &, wxPropertyGridPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPropertyGridPage * lret = self->InsertPage(index, label, bmp, pageObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridPage >::push(L,lret,false);

		return 1;
	}

	// bool wxPropertyGridManager::IsAnyModified() const
	static int _bind_IsAnyModified(lua_State *L) {
		if (!_lg_typecheck_IsAnyModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::IsAnyModified() const function, expected prototype:\nbool wxPropertyGridManager::IsAnyModified() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::IsAnyModified() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsAnyModified();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::IsFrozen() const
	static int _bind_IsFrozen(lua_State *L) {
		if (!_lg_typecheck_IsFrozen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::IsFrozen() const function, expected prototype:\nbool wxPropertyGridManager::IsFrozen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::IsFrozen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsFrozen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::IsPageModified(size_t index) const
	static int _bind_IsPageModified(lua_State *L) {
		if (!_lg_typecheck_IsPageModified(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::IsPageModified(size_t index) const function, expected prototype:\nbool wxPropertyGridManager::IsPageModified(size_t index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		size_t index=(size_t)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::IsPageModified(size_t) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsPageModified(index);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::RemovePage(int page)
	static int _bind_RemovePage(lua_State *L) {
		if (!_lg_typecheck_RemovePage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::RemovePage(int page) function, expected prototype:\nbool wxPropertyGridManager::RemovePage(int page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int page=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::RemovePage(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RemovePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::SelectPage(int index)
	static int _bind_SelectPage_overload_1(lua_State *L) {
		if (!_lg_typecheck_SelectPage_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SelectPage(int index) function, expected prototype:\nvoid wxPropertyGridManager::SelectPage(int index)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SelectPage(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectPage(index);

		return 0;
	}

	// void wxPropertyGridManager::SelectPage(const wxString & label)
	static int _bind_SelectPage_overload_2(lua_State *L) {
		if (!_lg_typecheck_SelectPage_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SelectPage(const wxString & label) function, expected prototype:\nvoid wxPropertyGridManager::SelectPage(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SelectPage(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectPage(label);

		return 0;
	}

	// void wxPropertyGridManager::SelectPage(wxPropertyGridPage * page)
	static int _bind_SelectPage_overload_3(lua_State *L) {
		if (!_lg_typecheck_SelectPage_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SelectPage(wxPropertyGridPage * page) function, expected prototype:\nvoid wxPropertyGridManager::SelectPage(wxPropertyGridPage * page)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxPropertyGridPage* page=(Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SelectPage(wxPropertyGridPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectPage(page);

		return 0;
	}

	// Overload binder for wxPropertyGridManager::SelectPage
	static int _bind_SelectPage(lua_State *L) {
		if (_lg_typecheck_SelectPage_overload_1(L)) return _bind_SelectPage_overload_1(L);
		if (_lg_typecheck_SelectPage_overload_2(L)) return _bind_SelectPage_overload_2(L);
		if (_lg_typecheck_SelectPage_overload_3(L)) return _bind_SelectPage_overload_3(L);

		luaL_error(L, "error in function SelectPage, cannot match any of the overloads for function SelectPage:\n  SelectPage(int)\n  SelectPage(const wxString &)\n  SelectPage(wxPropertyGridPage *)\n");
		return 0;
	}

	// void wxPropertyGridManager::SetColumnCount(int colCount, int page = -1)
	static int _bind_SetColumnCount(lua_State *L) {
		if (!_lg_typecheck_SetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetColumnCount(int colCount, int page = -1) function, expected prototype:\nvoid wxPropertyGridManager::SetColumnCount(int colCount, int page = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int colCount=(int)lua_tointeger(L,2);
		int page=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetColumnCount(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColumnCount(colCount, page);

		return 0;
	}

	// void wxPropertyGridManager::SetColumnTitle(int idx, const wxString & title)
	static int _bind_SetColumnTitle(lua_State *L) {
		if (!_lg_typecheck_SetColumnTitle(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetColumnTitle(int idx, const wxString & title) function, expected prototype:\nvoid wxPropertyGridManager::SetColumnTitle(int idx, const wxString & title)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int idx=(int)lua_tointeger(L,2);
		wxString title(lua_tostring(L,3),lua_objlen(L,3));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetColumnTitle(int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColumnTitle(idx, title);

		return 0;
	}

	// void wxPropertyGridManager::SetDescription(const wxString & label, const wxString & content)
	static int _bind_SetDescription(lua_State *L) {
		if (!_lg_typecheck_SetDescription(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetDescription(const wxString & label, const wxString & content) function, expected prototype:\nvoid wxPropertyGridManager::SetDescription(const wxString & label, const wxString & content)\nClass arguments details:\narg 1 ID = 88196105\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));
		wxString content(lua_tostring(L,3),lua_objlen(L,3));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetDescription(const wxString &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDescription(label, content);

		return 0;
	}

	// void wxPropertyGridManager::SetDescBoxHeight(int ht, bool refresh = true)
	static int _bind_SetDescBoxHeight(lua_State *L) {
		if (!_lg_typecheck_SetDescBoxHeight(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetDescBoxHeight(int ht, bool refresh = true) function, expected prototype:\nvoid wxPropertyGridManager::SetDescBoxHeight(int ht, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int ht=(int)lua_tointeger(L,2);
		bool refresh=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetDescBoxHeight(int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDescBoxHeight(ht, refresh);

		return 0;
	}

	// void wxPropertyGridManager::SetSplitterLeft(bool subProps = false, bool allPages = true)
	static int _bind_SetSplitterLeft(lua_State *L) {
		if (!_lg_typecheck_SetSplitterLeft(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetSplitterLeft(bool subProps = false, bool allPages = true) function, expected prototype:\nvoid wxPropertyGridManager::SetSplitterLeft(bool subProps = false, bool allPages = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool subProps=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;
		bool allPages=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetSplitterLeft(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSplitterLeft(subProps, allPages);

		return 0;
	}

	// void wxPropertyGridManager::SetPageSplitterPosition(int page, int pos, int column = 0)
	static int _bind_SetPageSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_SetPageSplitterPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetPageSplitterPosition(int page, int pos, int column = 0) function, expected prototype:\nvoid wxPropertyGridManager::SetPageSplitterPosition(int page, int pos, int column = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int page=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		int column=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetPageSplitterPosition(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPageSplitterPosition(page, pos, column);

		return 0;
	}

	// void wxPropertyGridManager::SetSplitterPosition(int pos, int column = 0)
	static int _bind_SetSplitterPosition(lua_State *L) {
		if (!_lg_typecheck_SetSplitterPosition(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::SetSplitterPosition(int pos, int column = 0) function, expected prototype:\nvoid wxPropertyGridManager::SetSplitterPosition(int pos, int column = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int pos=(int)lua_tointeger(L,2);
		int column=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::SetSplitterPosition(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSplitterPosition(pos, column);

		return 0;
	}

	// void wxPropertyGridManager::ShowHeader(bool show = true)
	static int _bind_ShowHeader(lua_State *L) {
		if (!_lg_typecheck_ShowHeader(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::ShowHeader(bool show = true) function, expected prototype:\nvoid wxPropertyGridManager::ShowHeader(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::ShowHeader(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShowHeader(show);

		return 0;
	}

	// wxClassInfo * wxPropertyGridManager::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxPropertyGridManager::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxPropertyGridManager::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxPropertyGridManager::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxPropertyGridManager::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxPropertyGridManager::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxPropertyGridManager::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxPropertyGridManager::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_HasFocus() const function, expected prototype:\nbool wxPropertyGridManager::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxPropertyGridManager::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetCanFocus(canFocus);

		return 0;
	}

	// void wxPropertyGridManager::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetFocusFromKbd() function, expected prototype:\nvoid wxPropertyGridManager::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetFocusFromKbd();

		return 0;
	}

	// void wxPropertyGridManager::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxPropertyGridManager::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::AddChild(child);

		return 0;
	}

	// void wxPropertyGridManager::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxPropertyGridManager::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::RemoveChild(child);

		return 0;
	}

	// bool wxPropertyGridManager::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxPropertyGridManager::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxPropertyGridManager::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxPropertyGridManager::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxPropertyGridManager::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPropertyGridManager::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGridManager::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxPropertyGridManager::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPropertyGridManager::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGridManager::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxPropertyGridManager::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPropertyGridManager::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxPropertyGridManager::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxPropertyGridManager::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_ScrollLines(int lines) function, expected prototype:\nbool wxPropertyGridManager::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_ScrollPages(int pages) function, expected prototype:\nbool wxPropertyGridManager::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxPropertyGridManager::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxPropertyGridManager::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxPropertyGridManager::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxPropertyGridManager::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxPropertyGridManager::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxPropertyGridManager::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGridManager::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxPropertyGridManager::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGridManager::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGridManager::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGridManager::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGridManager::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGridManager::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxPropertyGridManager::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGridManager::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGridManager::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGridManager::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxPropertyGridManager::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_Fit() function, expected prototype:\nvoid wxPropertyGridManager::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::Fit();

		return 0;
	}

	// void wxPropertyGridManager::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_FitInside() function, expected prototype:\nvoid wxPropertyGridManager::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::FitInside();

		return 0;
	}

	// wxSize wxPropertyGridManager::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGridManager::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxPropertyGridManager::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGridManager::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGridManager::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGridManager::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGridManager::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxPropertyGridManager::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGridManager::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGridManager::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGridManager::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGridManager::base_GetMaxSize() const function, expected prototype:\nwxSize wxPropertyGridManager::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGridManager::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGridManager::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGridManager::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGridManager::base_GetMinClientSize() const function, expected prototype:\nwxSize wxPropertyGridManager::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGridManager::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGridManager::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGridManager::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGridManager::base_GetMinSize() const function, expected prototype:\nwxSize wxPropertyGridManager::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGridManager::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGridManager::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGridManager::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGridManager::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxPropertyGridManager::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGridManager::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGridManager::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxPropertyGridManager::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxPropertyGridManager::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxPropertyGridManager::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxPropertyGridManager::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxPropertyGridManager::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxPropertyGridManager::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxPropertyGridManager::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxPropertyGridManager::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SendSizeEvent(flags);

		return 0;
	}

	// void wxPropertyGridManager::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxPropertyGridManager::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGridManager::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetMaxClientSize(size);

		return 0;
	}

	// void wxPropertyGridManager::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxPropertyGridManager::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGridManager::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetMaxSize(size);

		return 0;
	}

	// void wxPropertyGridManager::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxPropertyGridManager::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGridManager::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetMinClientSize(size);

		return 0;
	}

	// void wxPropertyGridManager::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxPropertyGridManager::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxPropertyGridManager::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetMinSize(size);

		return 0;
	}

	// void wxPropertyGridManager::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxPropertyGridManager::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxPropertyGridManager::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxPropertyGridManager::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxPropertyGridManager::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxPropertyGridManager::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxPropertyGridManager::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxPropertyGridManager::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxPropertyGridManager::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxPropertyGridManager::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxPropertyGridManager::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxPropertyGridManager::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxPropertyGridManager::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxPropertyGridManager::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_ClearBackground() function, expected prototype:\nvoid wxPropertyGridManager::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxPropertyGridManager::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxPropertyGridManager::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxPropertyGridManager::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxPropertyGridManager::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxPropertyGridManager::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGridManager::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::base_GetCharHeight() const function, expected prototype:\nint wxPropertyGridManager::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPropertyGridManager::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxPropertyGridManager::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxPropertyGridManager::base_GetCharWidth() const function, expected prototype:\nint wxPropertyGridManager::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPropertyGridManager::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxPropertyGridManager::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxPropertyGridManager::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxPropertyGridManager::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxPropertyGridManager::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxPropertyGridManager::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxPropertyGridManager::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxPropertyGridManager::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxPropertyGridManager::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxPropertyGridManager::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_Update() function, expected prototype:\nvoid wxPropertyGridManager::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::Update();

		return 0;
	}

	// bool wxPropertyGridManager::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxPropertyGridManager::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxPropertyGridManager::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxPropertyGridManager::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_ShouldInheritColours() const function, expected prototype:\nbool wxPropertyGridManager::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxPropertyGridManager::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxPropertyGridManager::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_GetThemeEnabled() const function, expected prototype:\nbool wxPropertyGridManager::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_CanSetTransparent() function, expected prototype:\nbool wxPropertyGridManager::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxPropertyGridManager::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxPropertyGridManager::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetNextHandler(handler);

		return 0;
	}

	// void wxPropertyGridManager::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxPropertyGridManager::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetPreviousHandler(handler);

		return 0;
	}

	// long wxPropertyGridManager::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxPropertyGridManager::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxPropertyGridManager::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxPropertyGridManager::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxPropertyGridManager::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxPropertyGridManager::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxPropertyGridManager::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxPropertyGridManager::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxPropertyGridManager::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxPropertyGridManager::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_Lower() function, expected prototype:\nvoid wxPropertyGridManager::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::Lower();

		return 0;
	}

	// void wxPropertyGridManager::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_Raise() function, expected prototype:\nvoid wxPropertyGridManager::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::Raise();

		return 0;
	}

	// bool wxPropertyGridManager::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxPropertyGridManager::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_IsShown() const function, expected prototype:\nbool wxPropertyGridManager::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_IsShownOnScreen() const function, expected prototype:\nbool wxPropertyGridManager::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_Enable(bool enable = true) function, expected prototype:\nbool wxPropertyGridManager::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_Show(bool show = true) function, expected prototype:\nbool wxPropertyGridManager::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxPropertyGridManager::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxPropertyGridManager::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGridManager::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxPropertyGridManager::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxPropertyGridManager::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPropertyGridManager::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxPropertyGridManager::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxPropertyGridManager::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxPropertyGridManager::base_GetValidator() function, expected prototype:\nwxValidator * wxPropertyGridManager::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxPropertyGridManager::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxPropertyGridManager::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxPropertyGridManager::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxPropertyGridManager::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxPropertyGridManager::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetValidator(validator);

		return 0;
	}

	// bool wxPropertyGridManager::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_TransferDataFromWindow() function, expected prototype:\nbool wxPropertyGridManager::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_TransferDataToWindow() function, expected prototype:\nbool wxPropertyGridManager::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_Validate() function, expected prototype:\nbool wxPropertyGridManager::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxPropertyGridManager::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGridManager::base_GetLabel() const function, expected prototype:\nwxString wxPropertyGridManager::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPropertyGridManager::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxPropertyGridManager::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxPropertyGridManager::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxPropertyGridManager::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxPropertyGridManager::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxPropertyGridManager::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxPropertyGridManager::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxPropertyGridManager::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxPropertyGridManager::base_GetName() const function, expected prototype:\nwxString wxPropertyGridManager::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxPropertyGridManager::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxPropertyGridManager::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxPropertyGridManager::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxPropertyGridManager::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetLabel(label);

		return 0;
	}

	// void wxPropertyGridManager::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxPropertyGridManager::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetLayoutDirection(dir);

		return 0;
	}

	// void wxPropertyGridManager::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetName(const wxString & name) function, expected prototype:\nvoid wxPropertyGridManager::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetName(name);

		return 0;
	}

	// void wxPropertyGridManager::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxPropertyGridManager::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxPropertyGridManager::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxPropertyGridManager::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_Destroy() function, expected prototype:\nbool wxPropertyGridManager::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxPropertyGridManager::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxPropertyGridManager::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxPropertyGridManager::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxPropertyGridManager::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxPropertyGridManager::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxPropertyGridManager::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxPropertyGridManager::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetDropTarget(target);

		return 0;
	}

	// void wxPropertyGridManager::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxPropertyGridManager::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxPropertyGridManager::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_HasCapture() const function, expected prototype:\nbool wxPropertyGridManager::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxPropertyGridManager::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxPropertyGridManager::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxPropertyGridManager::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::WarpPointer(x, y);

		return 0;
	}

	// void wxPropertyGridManager::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxPropertyGridManager::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxPropertyGridManager::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxPropertyGridManager::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxPropertyGridManager::base_GetHandle() const function, expected prototype:\nHWND wxPropertyGridManager::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxPropertyGridManager::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxPropertyGridManager::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxPropertyGridManager::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_HasMultiplePages() const function, expected prototype:\nbool wxPropertyGridManager::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_InheritAttributes() function, expected prototype:\nvoid wxPropertyGridManager::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::InheritAttributes();

		return 0;
	}

	// bool wxPropertyGridManager::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_IsRetained() const function, expected prototype:\nbool wxPropertyGridManager::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_IsTopLevel() const function, expected prototype:\nbool wxPropertyGridManager::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxPropertyGridManager::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::MakeModal(modal);

		return 0;
	}

	// void wxPropertyGridManager::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_OnInternalIdle() function, expected prototype:\nvoid wxPropertyGridManager::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::OnInternalIdle();

		return 0;
	}

	// bool wxPropertyGridManager::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxPropertyGridManager::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxPropertyGridManager::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxPropertyGridManager::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxPropertyGridManager::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::UpdateWindowUI(flags);

		return 0;
	}

	// bool wxPropertyGridManager::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_AcceptsFocus() const function, expected prototype:\nbool wxPropertyGridManager::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_InitDialog() function, expected prototype:\nvoid wxPropertyGridManager::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::InitDialog();

		return 0;
	}

	// bool wxPropertyGridManager::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_Layout() function, expected prototype:\nbool wxPropertyGridManager::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxPropertyGridManager::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_SetFocus() function, expected prototype:\nvoid wxPropertyGridManager::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::SetFocus();

		return 0;
	}

	// void wxPropertyGridManager::base_Clear()
	static int _bind_base_Clear(lua_State *L) {
		if (!_lg_typecheck_base_Clear(L)) {
			luaL_error(L, "luna typecheck failed in void wxPropertyGridManager::base_Clear() function, expected prototype:\nvoid wxPropertyGridManager::base_Clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxPropertyGridManager::base_Clear(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxPropertyGridManager::Clear();

		return 0;
	}

	// wxPropertyGridPage * wxPropertyGridManager::base_InsertPage(int index, const wxString & label, const wxBitmap & bmp = wxNullBitmap, wxPropertyGridPage * pageObj = NULL)
	static int _bind_base_InsertPage(lua_State *L) {
		if (!_lg_typecheck_base_InsertPage(L)) {
			luaL_error(L, "luna typecheck failed in wxPropertyGridPage * wxPropertyGridManager::base_InsertPage(int index, const wxString & label, const wxBitmap & bmp = wxNullBitmap, wxPropertyGridPage * pageObj = NULL) function, expected prototype:\nwxPropertyGridPage * wxPropertyGridManager::base_InsertPage(int index, const wxString & label, const wxBitmap & bmp = wxNullBitmap, wxPropertyGridPage * pageObj = NULL)\nClass arguments details:\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int index=(int)lua_tointeger(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		const wxBitmap* bmp_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxBitmap >(L,4)) : NULL;
		if( luatop>3 && !bmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bmp in wxPropertyGridManager::base_InsertPage function");
		}
		const wxBitmap & bmp=luatop>3 ? *bmp_ptr : (const wxBitmap&)wxNullBitmap;
		wxPropertyGridPage* pageObj=luatop>4 ? (Luna< wxObject >::checkSubType< wxPropertyGridPage >(L,5)) : (wxPropertyGridPage*)NULL;

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPropertyGridPage * wxPropertyGridManager::base_InsertPage(int, const wxString &, const wxBitmap &, wxPropertyGridPage *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPropertyGridPage * lret = self->wxPropertyGridManager::InsertPage(index, label, bmp, pageObj);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPropertyGridPage >::push(L,lret,false);

		return 1;
	}

	// bool wxPropertyGridManager::base_RemovePage(int page)
	static int _bind_base_RemovePage(lua_State *L) {
		if (!_lg_typecheck_base_RemovePage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxPropertyGridManager::base_RemovePage(int page) function, expected prototype:\nbool wxPropertyGridManager::base_RemovePage(int page)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int page=(int)lua_tointeger(L,2);

		wxPropertyGridManager* self=Luna< wxObject >::checkSubType< wxPropertyGridManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxPropertyGridManager::base_RemovePage(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxPropertyGridManager::RemovePage(page);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_wxPropertyGridInterface(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_wxPropertyGridInterface(lua_State *L) {
		if (!_lg_typecheck_baseCast_wxPropertyGridInterface(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_wxPropertyGridInterface function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxObject* self=(Luna< wxObject >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		wxPropertyGridInterface* res = luna_caster<wxObject,wxPropertyGridInterface>::cast(self); // dynamic_cast<wxPropertyGridInterface*>(self);
		if(!res)
			return 0;
			
		Luna< wxPropertyGridInterface >::push(L,res,false);
		return 1;

	}

};

wxPropertyGridManager* LunaTraits< wxPropertyGridManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxPropertyGridManager >::_bind_dtor(wxPropertyGridManager* obj) {
	delete obj;
}

const char LunaTraits< wxPropertyGridManager >::className[] = "wxPropertyGridManager";
const char LunaTraits< wxPropertyGridManager >::fullName[] = "wxPropertyGridManager";
const char LunaTraits< wxPropertyGridManager >::moduleName[] = "wx";
const char* LunaTraits< wxPropertyGridManager >::parents[] = {"wx.wxPanel", "wx.wxPropertyGridInterface", 0};
const int LunaTraits< wxPropertyGridManager >::hash = 78575729;
const int LunaTraits< wxPropertyGridManager >::uniqueIDs[] = {56813631, 53506535, 61417741,0};

luna_RegType LunaTraits< wxPropertyGridManager >::methods[] = {
	{"AddPage", &luna_wrapper_wxPropertyGridManager::_bind_AddPage},
	{"Clear", &luna_wrapper_wxPropertyGridManager::_bind_Clear},
	{"ClearPage", &luna_wrapper_wxPropertyGridManager::_bind_ClearPage},
	{"CommitChangesFromEditor", &luna_wrapper_wxPropertyGridManager::_bind_CommitChangesFromEditor},
	{"Create", &luna_wrapper_wxPropertyGridManager::_bind_Create},
	{"EnableCategories", &luna_wrapper_wxPropertyGridManager::_bind_EnableCategories},
	{"GetColumnCount", &luna_wrapper_wxPropertyGridManager::_bind_GetColumnCount},
	{"GetDescBoxHeight", &luna_wrapper_wxPropertyGridManager::_bind_GetDescBoxHeight},
	{"GetGrid", &luna_wrapper_wxPropertyGridManager::_bind_GetGrid},
	{"GetCurrentPage", &luna_wrapper_wxPropertyGridManager::_bind_GetCurrentPage},
	{"GetPage", &luna_wrapper_wxPropertyGridManager::_bind_GetPage},
	{"GetPageByName", &luna_wrapper_wxPropertyGridManager::_bind_GetPageByName},
	{"GetPageCount", &luna_wrapper_wxPropertyGridManager::_bind_GetPageCount},
	{"GetPageName", &luna_wrapper_wxPropertyGridManager::_bind_GetPageName},
	{"GetPageRoot", &luna_wrapper_wxPropertyGridManager::_bind_GetPageRoot},
	{"GetSelectedPage", &luna_wrapper_wxPropertyGridManager::_bind_GetSelectedPage},
	{"GetSelectedProperty", &luna_wrapper_wxPropertyGridManager::_bind_GetSelectedProperty},
	{"GetSelection", &luna_wrapper_wxPropertyGridManager::_bind_GetSelection},
	{"GetToolBar", &luna_wrapper_wxPropertyGridManager::_bind_GetToolBar},
	{"InsertPage", &luna_wrapper_wxPropertyGridManager::_bind_InsertPage},
	{"IsAnyModified", &luna_wrapper_wxPropertyGridManager::_bind_IsAnyModified},
	{"IsFrozen", &luna_wrapper_wxPropertyGridManager::_bind_IsFrozen},
	{"IsPageModified", &luna_wrapper_wxPropertyGridManager::_bind_IsPageModified},
	{"RemovePage", &luna_wrapper_wxPropertyGridManager::_bind_RemovePage},
	{"SelectPage", &luna_wrapper_wxPropertyGridManager::_bind_SelectPage},
	{"SetColumnCount", &luna_wrapper_wxPropertyGridManager::_bind_SetColumnCount},
	{"SetColumnTitle", &luna_wrapper_wxPropertyGridManager::_bind_SetColumnTitle},
	{"SetDescription", &luna_wrapper_wxPropertyGridManager::_bind_SetDescription},
	{"SetDescBoxHeight", &luna_wrapper_wxPropertyGridManager::_bind_SetDescBoxHeight},
	{"SetSplitterLeft", &luna_wrapper_wxPropertyGridManager::_bind_SetSplitterLeft},
	{"SetPageSplitterPosition", &luna_wrapper_wxPropertyGridManager::_bind_SetPageSplitterPosition},
	{"SetSplitterPosition", &luna_wrapper_wxPropertyGridManager::_bind_SetSplitterPosition},
	{"ShowHeader", &luna_wrapper_wxPropertyGridManager::_bind_ShowHeader},
	{"base_GetClassInfo", &luna_wrapper_wxPropertyGridManager::_bind_base_GetClassInfo},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxPropertyGridManager::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxPropertyGridManager::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxPropertyGridManager::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxPropertyGridManager::_bind_base_SetCanFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxPropertyGridManager::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxPropertyGridManager::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxPropertyGridManager::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxPropertyGridManager::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxPropertyGridManager::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxPropertyGridManager::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxPropertyGridManager::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxPropertyGridManager::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxPropertyGridManager::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxPropertyGridManager::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxPropertyGridManager::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxPropertyGridManager::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxPropertyGridManager::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxPropertyGridManager::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxPropertyGridManager::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxPropertyGridManager::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxPropertyGridManager::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxPropertyGridManager::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxPropertyGridManager::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxPropertyGridManager::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxPropertyGridManager::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxPropertyGridManager::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxPropertyGridManager::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxPropertyGridManager::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxPropertyGridManager::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxPropertyGridManager::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxPropertyGridManager::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxPropertyGridManager::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxPropertyGridManager::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxPropertyGridManager::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxPropertyGridManager::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxPropertyGridManager::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxPropertyGridManager::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxPropertyGridManager::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxPropertyGridManager::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxPropertyGridManager::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxPropertyGridManager::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxPropertyGridManager::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxPropertyGridManager::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxPropertyGridManager::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxPropertyGridManager::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxPropertyGridManager::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxPropertyGridManager::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxPropertyGridManager::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxPropertyGridManager::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxPropertyGridManager::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxPropertyGridManager::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxPropertyGridManager::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxPropertyGridManager::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxPropertyGridManager::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxPropertyGridManager::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxPropertyGridManager::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxPropertyGridManager::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxPropertyGridManager::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxPropertyGridManager::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxPropertyGridManager::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxPropertyGridManager::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxPropertyGridManager::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxPropertyGridManager::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxPropertyGridManager::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxPropertyGridManager::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxPropertyGridManager::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxPropertyGridManager::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxPropertyGridManager::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxPropertyGridManager::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxPropertyGridManager::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxPropertyGridManager::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxPropertyGridManager::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxPropertyGridManager::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxPropertyGridManager::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxPropertyGridManager::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxPropertyGridManager::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxPropertyGridManager::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxPropertyGridManager::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxPropertyGridManager::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxPropertyGridManager::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxPropertyGridManager::_bind_base_DragAcceptFiles},
	{"base_HasCapture", &luna_wrapper_wxPropertyGridManager::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxPropertyGridManager::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxPropertyGridManager::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxPropertyGridManager::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxPropertyGridManager::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxPropertyGridManager::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxPropertyGridManager::_bind_base_InheritAttributes},
	{"base_IsRetained", &luna_wrapper_wxPropertyGridManager::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxPropertyGridManager::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxPropertyGridManager::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxPropertyGridManager::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxPropertyGridManager::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxPropertyGridManager::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxPropertyGridManager::_bind_base_UpdateWindowUI},
	{"base_AcceptsFocus", &luna_wrapper_wxPropertyGridManager::_bind_base_AcceptsFocus},
	{"base_InitDialog", &luna_wrapper_wxPropertyGridManager::_bind_base_InitDialog},
	{"base_Layout", &luna_wrapper_wxPropertyGridManager::_bind_base_Layout},
	{"base_SetFocus", &luna_wrapper_wxPropertyGridManager::_bind_base_SetFocus},
	{"base_Clear", &luna_wrapper_wxPropertyGridManager::_bind_base_Clear},
	{"base_InsertPage", &luna_wrapper_wxPropertyGridManager::_bind_base_InsertPage},
	{"base_RemovePage", &luna_wrapper_wxPropertyGridManager::_bind_base_RemovePage},
	{"fromVoid", &luna_wrapper_wxPropertyGridManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPropertyGridManager::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPropertyGridManager::_bind_getTable},
	{"aswxPropertyGridInterface", &luna_wrapper_wxPropertyGridManager::_bind_baseCast_wxPropertyGridInterface},
	{0,0}
};

luna_ConverterType LunaTraits< wxPropertyGridManager >::converters[] = {
	{"wxObject", &luna_wrapper_wxPropertyGridManager::_cast_from_wxObject},
	{"wxPropertyGridInterface", &luna_wrapper_wxPropertyGridManager::_cast_from_wxPropertyGridInterface},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPropertyGridManager >::enumValues[] = {
	{0,0}
};


