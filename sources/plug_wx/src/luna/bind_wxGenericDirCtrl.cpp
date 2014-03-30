#include <plug_common.h>

#include <luna/wrappers/wrapper_wxGenericDirCtrl.h>

class luna_wrapper_wxGenericDirCtrl {
public:
	typedef Luna< wxGenericDirCtrl > luna_t;

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

		wxGenericDirCtrl* self= (wxGenericDirCtrl*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxGenericDirCtrl >::push(L,self,false);
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
		//wxGenericDirCtrl* ptr= dynamic_cast< wxGenericDirCtrl* >(Luna< wxObject >::check(L,1));
		wxGenericDirCtrl* ptr= luna_caster< wxObject, wxGenericDirCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxGenericDirCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>9 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>4 && (!(Luna< wxPoint >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>5 && (!(Luna< wxSize >::check(L,6))) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		if( luatop>8 && (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CollapsePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollapseTree(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>10 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,25723480) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,20268751) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		if( luatop>8 && (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ExpandPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetDefaultPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilePaths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFilterListCtrl(lua_State *L) {
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

	inline static bool _lg_typecheck_GetRootId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTreeCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ReCreateTree(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetDefaultPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ShowHidden(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectPath(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectPaths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UnselectAll(lua_State *L) {
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

	inline static bool _lg_typecheck_base_CollapsePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CollapseTree(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ExpandPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetDefaultPath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetFilePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetFilePaths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetFilter(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetFilterIndex(lua_State *L) {
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

	inline static bool _lg_typecheck_base_GetRootId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetTreeCtrl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Init(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ReCreateTree(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetDefaultPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFilter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetFilterIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetPath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ShowHidden(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SelectPath(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SelectPaths(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59507769) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_UnselectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxGenericDirCtrl::wxGenericDirCtrl()
	static wxGenericDirCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericDirCtrl::wxGenericDirCtrl() function, expected prototype:\nwxGenericDirCtrl::wxGenericDirCtrl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxGenericDirCtrl();
	}

	// wxGenericDirCtrl::wxGenericDirCtrl(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)
	static wxGenericDirCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericDirCtrl::wxGenericDirCtrl(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr) function, expected prototype:\nwxGenericDirCtrl::wxGenericDirCtrl(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\narg 9 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		const int id=luatop>1 ? (const int)lua_tointeger(L,2) : (const int)::wxID_ANY;
		wxString dir(lua_tostring(L,3),lua_objlen(L,3));
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGenericDirCtrl::wxGenericDirCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::wxGenericDirCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxDIRCTRL_3D_INTERNAL;
		wxString filter(lua_tostring(L,7),lua_objlen(L,7));
		int defaultFilter=luatop>7 ? (int)lua_tointeger(L,8) : (int)0;
		wxString name(lua_tostring(L,9),lua_objlen(L,9));

		return new wxGenericDirCtrl(parent, id, dir, pos, size, style, filter, defaultFilter, name);
	}

	// wxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data)
	static wxGenericDirCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data) function, expected prototype:\nwxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxGenericDirCtrl(L,NULL);
	}

	// wxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data, wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)
	static wxGenericDirCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data, wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr) function, expected prototype:\nwxGenericDirCtrl::wxGenericDirCtrl(lua_Table * data, wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 88196105\narg 5 ID = 25723480\narg 6 ID = 20268751\narg 8 ID = 88196105\narg 10 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const int id=luatop>2 ? (const int)lua_tointeger(L,3) : (const int)::wxID_ANY;
		wxString dir(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGenericDirCtrl::wxGenericDirCtrl function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::wxGenericDirCtrl function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>6 ? (long)lua_tonumber(L,7) : (long)wxDIRCTRL_3D_INTERNAL;
		wxString filter(lua_tostring(L,8),lua_objlen(L,8));
		int defaultFilter=luatop>8 ? (int)lua_tointeger(L,9) : (int)0;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		return new wrapper_wxGenericDirCtrl(L,NULL, parent, id, dir, pos, size, style, filter, defaultFilter, name);
	}

	// Overload binder for wxGenericDirCtrl::wxGenericDirCtrl
	static wxGenericDirCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxGenericDirCtrl, cannot match any of the overloads for function wxGenericDirCtrl:\n  wxGenericDirCtrl()\n  wxGenericDirCtrl(wxWindow *, const int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &, int, const wxString &)\n  wxGenericDirCtrl(lua_Table *)\n  wxGenericDirCtrl(lua_Table *, wxWindow *, const int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &, int, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxGenericDirCtrl::CollapsePath(const wxString & path)
	static int _bind_CollapsePath(lua_State *L) {
		if (!_lg_typecheck_CollapsePath(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::CollapsePath(const wxString & path) function, expected prototype:\nbool wxGenericDirCtrl::CollapsePath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::CollapsePath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CollapsePath(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::CollapseTree()
	static int _bind_CollapseTree(lua_State *L) {
		if (!_lg_typecheck_CollapseTree(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::CollapseTree() function, expected prototype:\nvoid wxGenericDirCtrl::CollapseTree()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::CollapseTree(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CollapseTree();

		return 0;
	}

	// bool wxGenericDirCtrl::Create(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::Create(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr) function, expected prototype:\nbool wxGenericDirCtrl::Create(wxWindow * parent, const int id = ::wxID_ANY, const wxString & dir = wxDirDialogDefaultFolderStr, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxDIRCTRL_3D_INTERNAL, const wxString & filter = wxEmptyString, int defaultFilter = 0, const wxString & name = wxTreeCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 88196105\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\narg 9 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		const int id=luatop>2 ? (const int)lua_tointeger(L,3) : (const int)::wxID_ANY;
		wxString dir(lua_tostring(L,4),lua_objlen(L,4));
		const wxPoint* pos_ptr=luatop>4 ? (Luna< wxPoint >::check(L,5)) : NULL;
		if( luatop>4 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxGenericDirCtrl::Create function");
		}
		const wxPoint & pos=luatop>4 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>5 ? (Luna< wxSize >::check(L,6)) : NULL;
		if( luatop>5 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::Create function");
		}
		const wxSize & size=luatop>5 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>6 ? (long)lua_tonumber(L,7) : (long)wxDIRCTRL_3D_INTERNAL;
		wxString filter(lua_tostring(L,8),lua_objlen(L,8));
		int defaultFilter=luatop>8 ? (int)lua_tointeger(L,9) : (int)0;
		wxString name(lua_tostring(L,10),lua_objlen(L,10));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::Create(wxWindow *, const int, const wxString &, const wxPoint &, const wxSize &, long, const wxString &, int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, dir, pos, size, style, filter, defaultFilter, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::ExpandPath(const wxString & path)
	static int _bind_ExpandPath(lua_State *L) {
		if (!_lg_typecheck_ExpandPath(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::ExpandPath(const wxString & path) function, expected prototype:\nbool wxGenericDirCtrl::ExpandPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::ExpandPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ExpandPath(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGenericDirCtrl::GetDefaultPath() const
	static int _bind_GetDefaultPath(lua_State *L) {
		if (!_lg_typecheck_GetDefaultPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::GetDefaultPath() const function, expected prototype:\nwxString wxGenericDirCtrl::GetDefaultPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::GetDefaultPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetDefaultPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxGenericDirCtrl::GetFilePath() const
	static int _bind_GetFilePath(lua_State *L) {
		if (!_lg_typecheck_GetFilePath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::GetFilePath() const function, expected prototype:\nwxString wxGenericDirCtrl::GetFilePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::GetFilePath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetFilePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGenericDirCtrl::GetFilePaths(wxArrayString & paths) const
	static int _bind_GetFilePaths(lua_State *L) {
		if (!_lg_typecheck_GetFilePaths(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::GetFilePaths(wxArrayString & paths) const function, expected prototype:\nvoid wxGenericDirCtrl::GetFilePaths(wxArrayString & paths) const\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxGenericDirCtrl::GetFilePaths function");
		}
		wxArrayString & paths=*paths_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::GetFilePaths(wxArrayString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetFilePaths(paths);

		return 0;
	}

	// wxString wxGenericDirCtrl::GetFilter() const
	static int _bind_GetFilter(lua_State *L) {
		if (!_lg_typecheck_GetFilter(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::GetFilter() const function, expected prototype:\nwxString wxGenericDirCtrl::GetFilter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::GetFilter() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetFilter();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxGenericDirCtrl::GetFilterIndex() const
	static int _bind_GetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_GetFilterIndex(L)) {
			luaL_error(L, "luna typecheck failed in int wxGenericDirCtrl::GetFilterIndex() const function, expected prototype:\nint wxGenericDirCtrl::GetFilterIndex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGenericDirCtrl::GetFilterIndex() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetFilterIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxDirFilterListCtrl * wxGenericDirCtrl::GetFilterListCtrl() const
	static int _bind_GetFilterListCtrl(lua_State *L) {
		if (!_lg_typecheck_GetFilterListCtrl(L)) {
			luaL_error(L, "luna typecheck failed in wxDirFilterListCtrl * wxGenericDirCtrl::GetFilterListCtrl() const function, expected prototype:\nwxDirFilterListCtrl * wxGenericDirCtrl::GetFilterListCtrl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDirFilterListCtrl * wxGenericDirCtrl::GetFilterListCtrl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDirFilterListCtrl * lret = self->GetFilterListCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDirFilterListCtrl >::push(L,lret,false);

		return 1;
	}

	// wxString wxGenericDirCtrl::GetPath() const
	static int _bind_GetPath(lua_State *L) {
		if (!_lg_typecheck_GetPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::GetPath() const function, expected prototype:\nwxString wxGenericDirCtrl::GetPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::GetPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGenericDirCtrl::GetPaths(wxArrayString & paths) const
	static int _bind_GetPaths(lua_State *L) {
		if (!_lg_typecheck_GetPaths(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::GetPaths(wxArrayString & paths) const function, expected prototype:\nvoid wxGenericDirCtrl::GetPaths(wxArrayString & paths) const\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxGenericDirCtrl::GetPaths function");
		}
		wxArrayString & paths=*paths_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::GetPaths(wxArrayString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GetPaths(paths);

		return 0;
	}

	// wxTreeItemId wxGenericDirCtrl::GetRootId()
	static int _bind_GetRootId(lua_State *L) {
		if (!_lg_typecheck_GetRootId(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxGenericDirCtrl::GetRootId() function, expected prototype:\nwxTreeItemId wxGenericDirCtrl::GetRootId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxGenericDirCtrl::GetRootId(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetRootId();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeCtrl * wxGenericDirCtrl::GetTreeCtrl() const
	static int _bind_GetTreeCtrl(lua_State *L) {
		if (!_lg_typecheck_GetTreeCtrl(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeCtrl * wxGenericDirCtrl::GetTreeCtrl() const function, expected prototype:\nwxTreeCtrl * wxGenericDirCtrl::GetTreeCtrl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeCtrl * wxGenericDirCtrl::GetTreeCtrl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeCtrl * lret = self->GetTreeCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeCtrl >::push(L,lret,false);

		return 1;
	}

	// void wxGenericDirCtrl::Init()
	static int _bind_Init(lua_State *L) {
		if (!_lg_typecheck_Init(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::Init() function, expected prototype:\nvoid wxGenericDirCtrl::Init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::Init(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Init();

		return 0;
	}

	// void wxGenericDirCtrl::ReCreateTree()
	static int _bind_ReCreateTree(lua_State *L) {
		if (!_lg_typecheck_ReCreateTree(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::ReCreateTree() function, expected prototype:\nvoid wxGenericDirCtrl::ReCreateTree()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::ReCreateTree(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReCreateTree();

		return 0;
	}

	// void wxGenericDirCtrl::SetDefaultPath(const wxString & path)
	static int _bind_SetDefaultPath(lua_State *L) {
		if (!_lg_typecheck_SetDefaultPath(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SetDefaultPath(const wxString & path) function, expected prototype:\nvoid wxGenericDirCtrl::SetDefaultPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SetDefaultPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetDefaultPath(path);

		return 0;
	}

	// void wxGenericDirCtrl::SetFilter(const wxString & filter)
	static int _bind_SetFilter(lua_State *L) {
		if (!_lg_typecheck_SetFilter(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SetFilter(const wxString & filter) function, expected prototype:\nvoid wxGenericDirCtrl::SetFilter(const wxString & filter)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filter(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SetFilter(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFilter(filter);

		return 0;
	}

	// void wxGenericDirCtrl::SetFilterIndex(int n)
	static int _bind_SetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_SetFilterIndex(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SetFilterIndex(int n) function, expected prototype:\nvoid wxGenericDirCtrl::SetFilterIndex(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SetFilterIndex(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFilterIndex(n);

		return 0;
	}

	// void wxGenericDirCtrl::SetPath(const wxString & path)
	static int _bind_SetPath(lua_State *L) {
		if (!_lg_typecheck_SetPath(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SetPath(const wxString & path) function, expected prototype:\nvoid wxGenericDirCtrl::SetPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SetPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetPath(path);

		return 0;
	}

	// void wxGenericDirCtrl::ShowHidden(bool show)
	static int _bind_ShowHidden(lua_State *L) {
		if (!_lg_typecheck_ShowHidden(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::ShowHidden(bool show) function, expected prototype:\nvoid wxGenericDirCtrl::ShowHidden(bool show)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::ShowHidden(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ShowHidden(show);

		return 0;
	}

	// void wxGenericDirCtrl::SelectPath(const wxString & path, bool select = true)
	static int _bind_SelectPath(lua_State *L) {
		if (!_lg_typecheck_SelectPath(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SelectPath(const wxString & path, bool select = true) function, expected prototype:\nvoid wxGenericDirCtrl::SelectPath(const wxString & path, bool select = true)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		bool select=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SelectPath(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectPath(path, select);

		return 0;
	}

	// void wxGenericDirCtrl::SelectPaths(const wxArrayString & paths)
	static int _bind_SelectPaths(lua_State *L) {
		if (!_lg_typecheck_SelectPaths(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::SelectPaths(const wxArrayString & paths) function, expected prototype:\nvoid wxGenericDirCtrl::SelectPaths(const wxArrayString & paths)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxGenericDirCtrl::SelectPaths function");
		}
		const wxArrayString & paths=*paths_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::SelectPaths(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectPaths(paths);

		return 0;
	}

	// void wxGenericDirCtrl::UnselectAll()
	static int _bind_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_UnselectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::UnselectAll() function, expected prototype:\nvoid wxGenericDirCtrl::UnselectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::UnselectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnselectAll();

		return 0;
	}

	// wxClassInfo * wxGenericDirCtrl::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxGenericDirCtrl::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxGenericDirCtrl::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxGenericDirCtrl::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxGenericDirCtrl::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxGenericDirCtrl::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_AcceptsFocus() const function, expected prototype:\nbool wxGenericDirCtrl::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxGenericDirCtrl::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxGenericDirCtrl::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_HasFocus() const function, expected prototype:\nbool wxGenericDirCtrl::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetCanFocus(canFocus);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetFocus() function, expected prototype:\nvoid wxGenericDirCtrl::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetFocus();

		return 0;
	}

	// void wxGenericDirCtrl::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetFocusFromKbd() function, expected prototype:\nvoid wxGenericDirCtrl::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetFocusFromKbd();

		return 0;
	}

	// void wxGenericDirCtrl::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxGenericDirCtrl::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::AddChild(child);

		return 0;
	}

	// void wxGenericDirCtrl::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxGenericDirCtrl::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::RemoveChild(child);

		return 0;
	}

	// bool wxGenericDirCtrl::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxGenericDirCtrl::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxGenericDirCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxGenericDirCtrl::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxGenericDirCtrl::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxGenericDirCtrl::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGenericDirCtrl::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGenericDirCtrl::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGenericDirCtrl::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxGenericDirCtrl::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxGenericDirCtrl::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGenericDirCtrl::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGenericDirCtrl::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGenericDirCtrl::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxGenericDirCtrl::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxGenericDirCtrl::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGenericDirCtrl::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGenericDirCtrl::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxGenericDirCtrl::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxGenericDirCtrl::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_ScrollLines(int lines) function, expected prototype:\nbool wxGenericDirCtrl::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_ScrollPages(int pages) function, expected prototype:\nbool wxGenericDirCtrl::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxGenericDirCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxGenericDirCtrl::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGenericDirCtrl::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxGenericDirCtrl::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGenericDirCtrl::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGenericDirCtrl::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGenericDirCtrl::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGenericDirCtrl::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxGenericDirCtrl::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGenericDirCtrl::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGenericDirCtrl::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxGenericDirCtrl::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_Fit() function, expected prototype:\nvoid wxGenericDirCtrl::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::Fit();

		return 0;
	}

	// void wxGenericDirCtrl::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_FitInside() function, expected prototype:\nvoid wxGenericDirCtrl::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::FitInside();

		return 0;
	}

	// wxSize wxGenericDirCtrl::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGenericDirCtrl::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxGenericDirCtrl::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGenericDirCtrl::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGenericDirCtrl::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGenericDirCtrl::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGenericDirCtrl::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxGenericDirCtrl::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGenericDirCtrl::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGenericDirCtrl::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGenericDirCtrl::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGenericDirCtrl::base_GetMaxSize() const function, expected prototype:\nwxSize wxGenericDirCtrl::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGenericDirCtrl::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGenericDirCtrl::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGenericDirCtrl::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGenericDirCtrl::base_GetMinClientSize() const function, expected prototype:\nwxSize wxGenericDirCtrl::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGenericDirCtrl::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGenericDirCtrl::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGenericDirCtrl::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGenericDirCtrl::base_GetMinSize() const function, expected prototype:\nwxSize wxGenericDirCtrl::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGenericDirCtrl::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGenericDirCtrl::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGenericDirCtrl::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGenericDirCtrl::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxGenericDirCtrl::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGenericDirCtrl::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGenericDirCtrl::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxGenericDirCtrl::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxGenericDirCtrl::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxGenericDirCtrl::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxGenericDirCtrl::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxGenericDirCtrl::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxGenericDirCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxGenericDirCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxGenericDirCtrl::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SendSizeEvent(flags);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetMaxClientSize(size);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetMaxSize(size);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetMinClientSize(size);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxGenericDirCtrl::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetMinSize(size);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxGenericDirCtrl::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxGenericDirCtrl::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxGenericDirCtrl::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxGenericDirCtrl::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxGenericDirCtrl::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxGenericDirCtrl::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxGenericDirCtrl::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxGenericDirCtrl::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxGenericDirCtrl::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxGenericDirCtrl::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_ClearBackground() function, expected prototype:\nvoid wxGenericDirCtrl::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxGenericDirCtrl::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxGenericDirCtrl::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxGenericDirCtrl::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxGenericDirCtrl::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxGenericDirCtrl::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGenericDirCtrl::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxGenericDirCtrl::base_GetCharHeight() const function, expected prototype:\nint wxGenericDirCtrl::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGenericDirCtrl::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGenericDirCtrl::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGenericDirCtrl::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxGenericDirCtrl::base_GetCharWidth() const function, expected prototype:\nint wxGenericDirCtrl::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGenericDirCtrl::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGenericDirCtrl::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxGenericDirCtrl::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxGenericDirCtrl::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxGenericDirCtrl::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxGenericDirCtrl::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxGenericDirCtrl::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxGenericDirCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxGenericDirCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxGenericDirCtrl::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_Update() function, expected prototype:\nvoid wxGenericDirCtrl::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::Update();

		return 0;
	}

	// bool wxGenericDirCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxGenericDirCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxGenericDirCtrl::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxGenericDirCtrl::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_ShouldInheritColours() const function, expected prototype:\nbool wxGenericDirCtrl::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxGenericDirCtrl::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_GetThemeEnabled() const function, expected prototype:\nbool wxGenericDirCtrl::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_CanSetTransparent() function, expected prototype:\nbool wxGenericDirCtrl::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxGenericDirCtrl::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetNextHandler(handler);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetPreviousHandler(handler);

		return 0;
	}

	// long wxGenericDirCtrl::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxGenericDirCtrl::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxGenericDirCtrl::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxGenericDirCtrl::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxGenericDirCtrl::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxGenericDirCtrl::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxGenericDirCtrl::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_Lower() function, expected prototype:\nvoid wxGenericDirCtrl::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::Lower();

		return 0;
	}

	// void wxGenericDirCtrl::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_Raise() function, expected prototype:\nvoid wxGenericDirCtrl::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::Raise();

		return 0;
	}

	// bool wxGenericDirCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxGenericDirCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_IsShown() const function, expected prototype:\nbool wxGenericDirCtrl::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_IsShownOnScreen() const function, expected prototype:\nbool wxGenericDirCtrl::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_Enable(bool enable = true) function, expected prototype:\nbool wxGenericDirCtrl::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_Show(bool show = true) function, expected prototype:\nbool wxGenericDirCtrl::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxGenericDirCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGenericDirCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxGenericDirCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxGenericDirCtrl::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGenericDirCtrl::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxGenericDirCtrl::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxGenericDirCtrl::base_GetValidator() function, expected prototype:\nwxValidator * wxGenericDirCtrl::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxGenericDirCtrl::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxGenericDirCtrl::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxGenericDirCtrl::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxGenericDirCtrl::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetValidator(validator);

		return 0;
	}

	// bool wxGenericDirCtrl::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_TransferDataFromWindow() function, expected prototype:\nbool wxGenericDirCtrl::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_TransferDataToWindow() function, expected prototype:\nbool wxGenericDirCtrl::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_Validate() function, expected prototype:\nbool wxGenericDirCtrl::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxGenericDirCtrl::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxGenericDirCtrl::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxGenericDirCtrl::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxGenericDirCtrl::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxGenericDirCtrl::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxGenericDirCtrl::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::base_GetName() const function, expected prototype:\nwxString wxGenericDirCtrl::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGenericDirCtrl::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGenericDirCtrl::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetLayoutDirection(dir);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetName(const wxString & name) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetName(name);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxGenericDirCtrl::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxGenericDirCtrl::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_Destroy() function, expected prototype:\nbool wxGenericDirCtrl::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxGenericDirCtrl::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxGenericDirCtrl::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxGenericDirCtrl::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxGenericDirCtrl::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxGenericDirCtrl::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxGenericDirCtrl::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetDropTarget(target);

		return 0;
	}

	// void wxGenericDirCtrl::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxGenericDirCtrl::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxGenericDirCtrl::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_Layout() function, expected prototype:\nbool wxGenericDirCtrl::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_HasCapture() const function, expected prototype:\nbool wxGenericDirCtrl::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxGenericDirCtrl::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxGenericDirCtrl::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxGenericDirCtrl::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::WarpPointer(x, y);

		return 0;
	}

	// void wxGenericDirCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxGenericDirCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGenericDirCtrl::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxGenericDirCtrl::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxGenericDirCtrl::base_GetHandle() const function, expected prototype:\nHWND wxGenericDirCtrl::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxGenericDirCtrl::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxGenericDirCtrl::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxGenericDirCtrl::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_HasMultiplePages() const function, expected prototype:\nbool wxGenericDirCtrl::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_InheritAttributes() function, expected prototype:\nvoid wxGenericDirCtrl::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::InheritAttributes();

		return 0;
	}

	// void wxGenericDirCtrl::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_InitDialog() function, expected prototype:\nvoid wxGenericDirCtrl::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::InitDialog();

		return 0;
	}

	// bool wxGenericDirCtrl::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_IsRetained() const function, expected prototype:\nbool wxGenericDirCtrl::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_IsTopLevel() const function, expected prototype:\nbool wxGenericDirCtrl::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxGenericDirCtrl::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::MakeModal(modal);

		return 0;
	}

	// void wxGenericDirCtrl::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_OnInternalIdle() function, expected prototype:\nvoid wxGenericDirCtrl::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::OnInternalIdle();

		return 0;
	}

	// bool wxGenericDirCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxGenericDirCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxGenericDirCtrl::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxGenericDirCtrl::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxGenericDirCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::UpdateWindowUI(flags);

		return 0;
	}

	// void wxGenericDirCtrl::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxGenericDirCtrl::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxGenericDirCtrl::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::Command(event);

		return 0;
	}

	// wxString wxGenericDirCtrl::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::base_GetLabel() const function, expected prototype:\nwxString wxGenericDirCtrl::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGenericDirCtrl::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGenericDirCtrl::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetLabel(label);

		return 0;
	}

	// bool wxGenericDirCtrl::base_CollapsePath(const wxString & path)
	static int _bind_base_CollapsePath(lua_State *L) {
		if (!_lg_typecheck_base_CollapsePath(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_CollapsePath(const wxString & path) function, expected prototype:\nbool wxGenericDirCtrl::base_CollapsePath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_CollapsePath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::CollapsePath(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxGenericDirCtrl::base_CollapseTree()
	static int _bind_base_CollapseTree(lua_State *L) {
		if (!_lg_typecheck_base_CollapseTree(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_CollapseTree() function, expected prototype:\nvoid wxGenericDirCtrl::base_CollapseTree()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_CollapseTree(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::CollapseTree();

		return 0;
	}

	// bool wxGenericDirCtrl::base_ExpandPath(const wxString & path)
	static int _bind_base_ExpandPath(lua_State *L) {
		if (!_lg_typecheck_base_ExpandPath(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGenericDirCtrl::base_ExpandPath(const wxString & path) function, expected prototype:\nbool wxGenericDirCtrl::base_ExpandPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGenericDirCtrl::base_ExpandPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxGenericDirCtrl::ExpandPath(path);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxGenericDirCtrl::base_GetDefaultPath() const
	static int _bind_base_GetDefaultPath(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::base_GetDefaultPath() const function, expected prototype:\nwxString wxGenericDirCtrl::base_GetDefaultPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::base_GetDefaultPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGenericDirCtrl::GetDefaultPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxString wxGenericDirCtrl::base_GetFilePath() const
	static int _bind_base_GetFilePath(lua_State *L) {
		if (!_lg_typecheck_base_GetFilePath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::base_GetFilePath() const function, expected prototype:\nwxString wxGenericDirCtrl::base_GetFilePath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::base_GetFilePath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGenericDirCtrl::GetFilePath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGenericDirCtrl::base_GetFilePaths(wxArrayString & paths) const
	static int _bind_base_GetFilePaths(lua_State *L) {
		if (!_lg_typecheck_base_GetFilePaths(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_GetFilePaths(wxArrayString & paths) const function, expected prototype:\nvoid wxGenericDirCtrl::base_GetFilePaths(wxArrayString & paths) const\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxGenericDirCtrl::base_GetFilePaths function");
		}
		wxArrayString & paths=*paths_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_GetFilePaths(wxArrayString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::GetFilePaths(paths);

		return 0;
	}

	// wxString wxGenericDirCtrl::base_GetFilter() const
	static int _bind_base_GetFilter(lua_State *L) {
		if (!_lg_typecheck_base_GetFilter(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::base_GetFilter() const function, expected prototype:\nwxString wxGenericDirCtrl::base_GetFilter() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::base_GetFilter() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGenericDirCtrl::GetFilter();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int wxGenericDirCtrl::base_GetFilterIndex() const
	static int _bind_base_GetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_base_GetFilterIndex(L)) {
			luaL_error(L, "luna typecheck failed in int wxGenericDirCtrl::base_GetFilterIndex() const function, expected prototype:\nint wxGenericDirCtrl::base_GetFilterIndex() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGenericDirCtrl::base_GetFilterIndex() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxGenericDirCtrl::GetFilterIndex();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxGenericDirCtrl::base_GetPath() const
	static int _bind_base_GetPath(lua_State *L) {
		if (!_lg_typecheck_base_GetPath(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxGenericDirCtrl::base_GetPath() const function, expected prototype:\nwxString wxGenericDirCtrl::base_GetPath() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxGenericDirCtrl::base_GetPath() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxGenericDirCtrl::GetPath();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxGenericDirCtrl::base_GetPaths(wxArrayString & paths) const
	static int _bind_base_GetPaths(lua_State *L) {
		if (!_lg_typecheck_base_GetPaths(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_GetPaths(wxArrayString & paths) const function, expected prototype:\nvoid wxGenericDirCtrl::base_GetPaths(wxArrayString & paths) const\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxGenericDirCtrl::base_GetPaths function");
		}
		wxArrayString & paths=*paths_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_GetPaths(wxArrayString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::GetPaths(paths);

		return 0;
	}

	// wxTreeItemId wxGenericDirCtrl::base_GetRootId()
	static int _bind_base_GetRootId(lua_State *L) {
		if (!_lg_typecheck_base_GetRootId(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxGenericDirCtrl::base_GetRootId() function, expected prototype:\nwxTreeItemId wxGenericDirCtrl::base_GetRootId()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxGenericDirCtrl::base_GetRootId(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxGenericDirCtrl::GetRootId();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeCtrl * wxGenericDirCtrl::base_GetTreeCtrl() const
	static int _bind_base_GetTreeCtrl(lua_State *L) {
		if (!_lg_typecheck_base_GetTreeCtrl(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeCtrl * wxGenericDirCtrl::base_GetTreeCtrl() const function, expected prototype:\nwxTreeCtrl * wxGenericDirCtrl::base_GetTreeCtrl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeCtrl * wxGenericDirCtrl::base_GetTreeCtrl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeCtrl * lret = self->wxGenericDirCtrl::GetTreeCtrl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeCtrl >::push(L,lret,false);

		return 1;
	}

	// void wxGenericDirCtrl::base_Init()
	static int _bind_base_Init(lua_State *L) {
		if (!_lg_typecheck_base_Init(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_Init() function, expected prototype:\nvoid wxGenericDirCtrl::base_Init()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_Init(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::Init();

		return 0;
	}

	// void wxGenericDirCtrl::base_ReCreateTree()
	static int _bind_base_ReCreateTree(lua_State *L) {
		if (!_lg_typecheck_base_ReCreateTree(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_ReCreateTree() function, expected prototype:\nvoid wxGenericDirCtrl::base_ReCreateTree()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_ReCreateTree(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::ReCreateTree();

		return 0;
	}

	// void wxGenericDirCtrl::base_SetDefaultPath(const wxString & path)
	static int _bind_base_SetDefaultPath(lua_State *L) {
		if (!_lg_typecheck_base_SetDefaultPath(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetDefaultPath(const wxString & path) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetDefaultPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetDefaultPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetDefaultPath(path);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetFilter(const wxString & filter)
	static int _bind_base_SetFilter(lua_State *L) {
		if (!_lg_typecheck_base_SetFilter(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetFilter(const wxString & filter) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetFilter(const wxString & filter)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString filter(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetFilter(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetFilter(filter);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetFilterIndex(int n)
	static int _bind_base_SetFilterIndex(lua_State *L) {
		if (!_lg_typecheck_base_SetFilterIndex(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetFilterIndex(int n) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetFilterIndex(int n)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int n=(int)lua_tointeger(L,2);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetFilterIndex(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetFilterIndex(n);

		return 0;
	}

	// void wxGenericDirCtrl::base_SetPath(const wxString & path)
	static int _bind_base_SetPath(lua_State *L) {
		if (!_lg_typecheck_base_SetPath(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SetPath(const wxString & path) function, expected prototype:\nvoid wxGenericDirCtrl::base_SetPath(const wxString & path)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString path(lua_tostring(L,2),lua_objlen(L,2));

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SetPath(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SetPath(path);

		return 0;
	}

	// void wxGenericDirCtrl::base_ShowHidden(bool show)
	static int _bind_base_ShowHidden(lua_State *L) {
		if (!_lg_typecheck_base_ShowHidden(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_ShowHidden(bool show) function, expected prototype:\nvoid wxGenericDirCtrl::base_ShowHidden(bool show)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool show=(bool)(lua_toboolean(L,2)==1);

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_ShowHidden(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::ShowHidden(show);

		return 0;
	}

	// void wxGenericDirCtrl::base_SelectPath(const wxString & path, bool select = true)
	static int _bind_base_SelectPath(lua_State *L) {
		if (!_lg_typecheck_base_SelectPath(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SelectPath(const wxString & path, bool select = true) function, expected prototype:\nvoid wxGenericDirCtrl::base_SelectPath(const wxString & path, bool select = true)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString path(lua_tostring(L,2),lua_objlen(L,2));
		bool select=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SelectPath(const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SelectPath(path, select);

		return 0;
	}

	// void wxGenericDirCtrl::base_SelectPaths(const wxArrayString & paths)
	static int _bind_base_SelectPaths(lua_State *L) {
		if (!_lg_typecheck_base_SelectPaths(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_SelectPaths(const wxArrayString & paths) function, expected prototype:\nvoid wxGenericDirCtrl::base_SelectPaths(const wxArrayString & paths)\nClass arguments details:\narg 1 ID = 59507769\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayString* paths_ptr=(Luna< wxArrayString >::check(L,2));
		if( !paths_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg paths in wxGenericDirCtrl::base_SelectPaths function");
		}
		const wxArrayString & paths=*paths_ptr;

		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_SelectPaths(const wxArrayString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::SelectPaths(paths);

		return 0;
	}

	// void wxGenericDirCtrl::base_UnselectAll()
	static int _bind_base_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_base_UnselectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxGenericDirCtrl::base_UnselectAll() function, expected prototype:\nvoid wxGenericDirCtrl::base_UnselectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxGenericDirCtrl* self=Luna< wxObject >::checkSubType< wxGenericDirCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxGenericDirCtrl::base_UnselectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxGenericDirCtrl::UnselectAll();

		return 0;
	}


	// Operator binds:

};

wxGenericDirCtrl* LunaTraits< wxGenericDirCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxGenericDirCtrl::_bind_ctor(L);
}

void LunaTraits< wxGenericDirCtrl >::_bind_dtor(wxGenericDirCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxGenericDirCtrl >::className[] = "wxGenericDirCtrl";
const char LunaTraits< wxGenericDirCtrl >::fullName[] = "wxGenericDirCtrl";
const char LunaTraits< wxGenericDirCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxGenericDirCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxGenericDirCtrl >::hash = 51084573;
const int LunaTraits< wxGenericDirCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxGenericDirCtrl >::methods[] = {
	{"CollapsePath", &luna_wrapper_wxGenericDirCtrl::_bind_CollapsePath},
	{"CollapseTree", &luna_wrapper_wxGenericDirCtrl::_bind_CollapseTree},
	{"Create", &luna_wrapper_wxGenericDirCtrl::_bind_Create},
	{"ExpandPath", &luna_wrapper_wxGenericDirCtrl::_bind_ExpandPath},
	{"GetDefaultPath", &luna_wrapper_wxGenericDirCtrl::_bind_GetDefaultPath},
	{"GetFilePath", &luna_wrapper_wxGenericDirCtrl::_bind_GetFilePath},
	{"GetFilePaths", &luna_wrapper_wxGenericDirCtrl::_bind_GetFilePaths},
	{"GetFilter", &luna_wrapper_wxGenericDirCtrl::_bind_GetFilter},
	{"GetFilterIndex", &luna_wrapper_wxGenericDirCtrl::_bind_GetFilterIndex},
	{"GetFilterListCtrl", &luna_wrapper_wxGenericDirCtrl::_bind_GetFilterListCtrl},
	{"GetPath", &luna_wrapper_wxGenericDirCtrl::_bind_GetPath},
	{"GetPaths", &luna_wrapper_wxGenericDirCtrl::_bind_GetPaths},
	{"GetRootId", &luna_wrapper_wxGenericDirCtrl::_bind_GetRootId},
	{"GetTreeCtrl", &luna_wrapper_wxGenericDirCtrl::_bind_GetTreeCtrl},
	{"Init", &luna_wrapper_wxGenericDirCtrl::_bind_Init},
	{"ReCreateTree", &luna_wrapper_wxGenericDirCtrl::_bind_ReCreateTree},
	{"SetDefaultPath", &luna_wrapper_wxGenericDirCtrl::_bind_SetDefaultPath},
	{"SetFilter", &luna_wrapper_wxGenericDirCtrl::_bind_SetFilter},
	{"SetFilterIndex", &luna_wrapper_wxGenericDirCtrl::_bind_SetFilterIndex},
	{"SetPath", &luna_wrapper_wxGenericDirCtrl::_bind_SetPath},
	{"ShowHidden", &luna_wrapper_wxGenericDirCtrl::_bind_ShowHidden},
	{"SelectPath", &luna_wrapper_wxGenericDirCtrl::_bind_SelectPath},
	{"SelectPaths", &luna_wrapper_wxGenericDirCtrl::_bind_SelectPaths},
	{"UnselectAll", &luna_wrapper_wxGenericDirCtrl::_bind_UnselectAll},
	{"base_GetClassInfo", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxGenericDirCtrl::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxGenericDirCtrl::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxGenericDirCtrl::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxGenericDirCtrl::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxGenericDirCtrl::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxGenericDirCtrl::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxGenericDirCtrl::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxGenericDirCtrl::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxGenericDirCtrl::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxGenericDirCtrl::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxGenericDirCtrl::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxGenericDirCtrl::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxGenericDirCtrl::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxGenericDirCtrl::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxGenericDirCtrl::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxGenericDirCtrl::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxGenericDirCtrl::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxGenericDirCtrl::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxGenericDirCtrl::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxGenericDirCtrl::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxGenericDirCtrl::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxGenericDirCtrl::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxGenericDirCtrl::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxGenericDirCtrl::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxGenericDirCtrl::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxGenericDirCtrl::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxGenericDirCtrl::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxGenericDirCtrl::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxGenericDirCtrl::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxGenericDirCtrl::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxGenericDirCtrl::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxGenericDirCtrl::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxGenericDirCtrl::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxGenericDirCtrl::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxGenericDirCtrl::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxGenericDirCtrl::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxGenericDirCtrl::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxGenericDirCtrl::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxGenericDirCtrl::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxGenericDirCtrl::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxGenericDirCtrl::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxGenericDirCtrl::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxGenericDirCtrl::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxGenericDirCtrl::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxGenericDirCtrl::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxGenericDirCtrl::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxGenericDirCtrl::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxGenericDirCtrl::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxGenericDirCtrl::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetLabel},
	{"base_CollapsePath", &luna_wrapper_wxGenericDirCtrl::_bind_base_CollapsePath},
	{"base_CollapseTree", &luna_wrapper_wxGenericDirCtrl::_bind_base_CollapseTree},
	{"base_ExpandPath", &luna_wrapper_wxGenericDirCtrl::_bind_base_ExpandPath},
	{"base_GetDefaultPath", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetDefaultPath},
	{"base_GetFilePath", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetFilePath},
	{"base_GetFilePaths", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetFilePaths},
	{"base_GetFilter", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetFilter},
	{"base_GetFilterIndex", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetFilterIndex},
	{"base_GetPath", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetPath},
	{"base_GetPaths", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetPaths},
	{"base_GetRootId", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetRootId},
	{"base_GetTreeCtrl", &luna_wrapper_wxGenericDirCtrl::_bind_base_GetTreeCtrl},
	{"base_Init", &luna_wrapper_wxGenericDirCtrl::_bind_base_Init},
	{"base_ReCreateTree", &luna_wrapper_wxGenericDirCtrl::_bind_base_ReCreateTree},
	{"base_SetDefaultPath", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetDefaultPath},
	{"base_SetFilter", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetFilter},
	{"base_SetFilterIndex", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetFilterIndex},
	{"base_SetPath", &luna_wrapper_wxGenericDirCtrl::_bind_base_SetPath},
	{"base_ShowHidden", &luna_wrapper_wxGenericDirCtrl::_bind_base_ShowHidden},
	{"base_SelectPath", &luna_wrapper_wxGenericDirCtrl::_bind_base_SelectPath},
	{"base_SelectPaths", &luna_wrapper_wxGenericDirCtrl::_bind_base_SelectPaths},
	{"base_UnselectAll", &luna_wrapper_wxGenericDirCtrl::_bind_base_UnselectAll},
	{"fromVoid", &luna_wrapper_wxGenericDirCtrl::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxGenericDirCtrl::_bind_asVoid},
	{"getTable", &luna_wrapper_wxGenericDirCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxGenericDirCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxGenericDirCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxGenericDirCtrl >::enumValues[] = {
	{0,0}
};


