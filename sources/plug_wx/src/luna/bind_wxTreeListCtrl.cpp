#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTreeListCtrl.h>

class luna_wrapper_wxTreeListCtrl {
public:
	typedef Luna< wxTreeListCtrl > luna_t;

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

		wxTreeListCtrl* self= (wxTreeListCtrl*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTreeListCtrl >::push(L,self,false);
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
		//wxTreeListCtrl* ptr= dynamic_cast< wxTreeListCtrl* >(Luna< wxObject >::check(L,1));
		wxTreeListCtrl* ptr= luna_caster< wxObject, wxTreeListCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTreeListCtrl >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_AssignImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearColumns(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetColumnWidth(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_WidthFor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,75268455) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRootItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirstChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextSibling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirstItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetNextItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemText_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( (!(Luna< wxTreeListItem >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemText_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( (!(Luna< wxTreeListItem >::check(L,2))) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Collapse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Select(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unselect(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UnselectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CheckItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CheckItemRecursively(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UncheckItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_UpdateItemParentStateRecursively(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCheckedState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AreAllChildrenInState(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75268455) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSortColumn(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemComparator(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,87583976)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetDataView(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_NO_IMAGE(lua_State *L) {
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTreeListCtrl::wxTreeListCtrl()
	static wxTreeListCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListCtrl::wxTreeListCtrl() function, expected prototype:\nwxTreeListCtrl::wxTreeListCtrl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTreeListCtrl();
	}

	// wxTreeListCtrl::wxTreeListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr)
	static wxTreeListCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListCtrl::wxTreeListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr) function, expected prototype:\nwxTreeListCtrl::wxTreeListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTreeListCtrl::wxTreeListCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeListCtrl::wxTreeListCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)::wxTL_DEFAULT_STYLE;
		wxString name(lua_tostring(L,6),lua_objlen(L,6));

		return new wxTreeListCtrl(parent, id, pos, size, style, name);
	}

	// wxTreeListCtrl::wxTreeListCtrl(lua_Table * data)
	static wxTreeListCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListCtrl::wxTreeListCtrl(lua_Table * data) function, expected prototype:\nwxTreeListCtrl::wxTreeListCtrl(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxTreeListCtrl(L,NULL);
	}

	// wxTreeListCtrl::wxTreeListCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr)
	static wxTreeListCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListCtrl::wxTreeListCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr) function, expected prototype:\nwxTreeListCtrl::wxTreeListCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTreeListCtrl::wxTreeListCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeListCtrl::wxTreeListCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)::wxTL_DEFAULT_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wrapper_wxTreeListCtrl(L,NULL, parent, id, pos, size, style, name);
	}

	// Overload binder for wxTreeListCtrl::wxTreeListCtrl
	static wxTreeListCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxTreeListCtrl, cannot match any of the overloads for function wxTreeListCtrl:\n  wxTreeListCtrl()\n  wxTreeListCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n  wxTreeListCtrl(lua_Table *)\n  wxTreeListCtrl(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxTreeListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr) function, expected prototype:\nbool wxTreeListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTL_DEFAULT_STYLE, const wxString & name = wxTreeListCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTreeListCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeListCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)::wxTL_DEFAULT_STYLE;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, pos, size, style, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::AssignImageList(wxImageList * imageList)
	static int _bind_AssignImageList(lua_State *L) {
		if (!_lg_typecheck_AssignImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::AssignImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeListCtrl::AssignImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::AssignImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignImageList(imageList);

		return 0;
	}

	// void wxTreeListCtrl::SetImageList(wxImageList * imageList)
	static int _bind_SetImageList(lua_State *L) {
		if (!_lg_typecheck_SetImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeListCtrl::SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetImageList(imageList);

		return 0;
	}

	// int wxTreeListCtrl::AppendColumn(const wxString & title, int width = ::wxCOL_WIDTH_AUTOSIZE, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxCOL_RESIZABLE)
	static int _bind_AppendColumn(lua_State *L) {
		if (!_lg_typecheck_AppendColumn(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeListCtrl::AppendColumn(const wxString & title, int width = ::wxCOL_WIDTH_AUTOSIZE, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxCOL_RESIZABLE) function, expected prototype:\nint wxTreeListCtrl::AppendColumn(const wxString & title, int width = ::wxCOL_WIDTH_AUTOSIZE, wxAlignment align = ::wxALIGN_LEFT, int flags = ::wxCOL_RESIZABLE)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString title(lua_tostring(L,2),lua_objlen(L,2));
		int width=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxCOL_WIDTH_AUTOSIZE;
		wxAlignment align=luatop>3 ? (wxAlignment)lua_tointeger(L,4) : (wxAlignment)::wxALIGN_LEFT;
		int flags=luatop>4 ? (int)lua_tointeger(L,5) : (int)::wxCOL_RESIZABLE;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeListCtrl::AppendColumn(const wxString &, int, wxAlignment, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->AppendColumn(title, width, align, flags);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxTreeListCtrl::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxTreeListCtrl::GetColumnCount() const function, expected prototype:\nunsigned int wxTreeListCtrl::GetColumnCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxTreeListCtrl::GetColumnCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTreeListCtrl::DeleteColumn(unsigned int col)
	static int _bind_DeleteColumn(lua_State *L) {
		if (!_lg_typecheck_DeleteColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::DeleteColumn(unsigned int col) function, expected prototype:\nbool wxTreeListCtrl::DeleteColumn(unsigned int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned col=(unsigned)lua_tointeger(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::DeleteColumn(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::ClearColumns()
	static int _bind_ClearColumns(lua_State *L) {
		if (!_lg_typecheck_ClearColumns(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::ClearColumns() function, expected prototype:\nvoid wxTreeListCtrl::ClearColumns()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::ClearColumns(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearColumns();

		return 0;
	}

	// void wxTreeListCtrl::SetColumnWidth(unsigned int col, int width)
	static int _bind_SetColumnWidth(lua_State *L) {
		if (!_lg_typecheck_SetColumnWidth(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetColumnWidth(unsigned int col, int width) function, expected prototype:\nvoid wxTreeListCtrl::SetColumnWidth(unsigned int col, int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned col=(unsigned)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetColumnWidth(unsigned int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetColumnWidth(col, width);

		return 0;
	}

	// int wxTreeListCtrl::GetColumnWidth(unsigned int col) const
	static int _bind_GetColumnWidth(lua_State *L) {
		if (!_lg_typecheck_GetColumnWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeListCtrl::GetColumnWidth(unsigned int col) const function, expected prototype:\nint wxTreeListCtrl::GetColumnWidth(unsigned int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned col=(unsigned)lua_tointeger(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeListCtrl::GetColumnWidth(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumnWidth(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTreeListCtrl::WidthFor(const wxString & text) const
	static int _bind_WidthFor(lua_State *L) {
		if (!_lg_typecheck_WidthFor(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeListCtrl::WidthFor(const wxString & text) const function, expected prototype:\nint wxTreeListCtrl::WidthFor(const wxString & text) const\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString text(lua_tostring(L,2),lua_objlen(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeListCtrl::WidthFor(const wxString &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->WidthFor(text);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::AppendItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)
	static int _bind_AppendItem(lua_State *L) {
		if (!_lg_typecheck_AppendItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::AppendItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL) function, expected prototype:\nwxTreeListItem wxTreeListCtrl::AppendItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 75268455\narg 2 ID = 88196105\narg 5 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* parent_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeListCtrl::AppendItem function");
		}
		wxTreeListItem parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int imageClosed=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxTreeListCtrl::NO_IMAGE;
		int imageOpened=luatop>4 ? (int)lua_tointeger(L,5) : (int)wxTreeListCtrl::NO_IMAGE;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::AppendItem(wxTreeListItem, const wxString &, int, int, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeListItem stack_lret = self->AppendItem(parent, text, imageClosed, imageOpened, data);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::InsertItem(wxTreeListItem parent, wxTreeListItem previous, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)
	static int _bind_InsertItem(lua_State *L) {
		if (!_lg_typecheck_InsertItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::InsertItem(wxTreeListItem parent, wxTreeListItem previous, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL) function, expected prototype:\nwxTreeListItem wxTreeListCtrl::InsertItem(wxTreeListItem parent, wxTreeListItem previous, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 75268455\narg 2 ID = 75268455\narg 3 ID = 88196105\narg 6 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* parent_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeListCtrl::InsertItem function");
		}
		wxTreeListItem parent=*parent_ptr;
		wxTreeListItem* previous_ptr=(Luna< wxTreeListItem >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxTreeListCtrl::InsertItem function");
		}
		wxTreeListItem previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		int imageClosed=luatop>4 ? (int)lua_tointeger(L,5) : (int)wxTreeListCtrl::NO_IMAGE;
		int imageOpened=luatop>5 ? (int)lua_tointeger(L,6) : (int)wxTreeListCtrl::NO_IMAGE;
		wxClientData* data=luatop>6 ? (Luna< wxClientData >::check(L,7)) : (wxClientData*)NULL;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::InsertItem(wxTreeListItem, wxTreeListItem, const wxString &, int, int, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeListItem stack_lret = self->InsertItem(parent, previous, text, imageClosed, imageOpened, data);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::PrependItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)
	static int _bind_PrependItem(lua_State *L) {
		if (!_lg_typecheck_PrependItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::PrependItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL) function, expected prototype:\nwxTreeListItem wxTreeListCtrl::PrependItem(wxTreeListItem parent, const wxString & text, int imageClosed = wxTreeListCtrl::NO_IMAGE, int imageOpened = wxTreeListCtrl::NO_IMAGE, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 75268455\narg 2 ID = 88196105\narg 5 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* parent_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeListCtrl::PrependItem function");
		}
		wxTreeListItem parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int imageClosed=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxTreeListCtrl::NO_IMAGE;
		int imageOpened=luatop>4 ? (int)lua_tointeger(L,5) : (int)wxTreeListCtrl::NO_IMAGE;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::PrependItem(wxTreeListItem, const wxString &, int, int, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeListItem stack_lret = self->PrependItem(parent, text, imageClosed, imageOpened, data);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// void wxTreeListCtrl::DeleteItem(wxTreeListItem item)
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::DeleteItem(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::DeleteItem(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::DeleteItem function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::DeleteItem(wxTreeListItem). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteItem(item);

		return 0;
	}

	// void wxTreeListCtrl::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::DeleteAllItems() function, expected prototype:\nvoid wxTreeListCtrl::DeleteAllItems()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::DeleteAllItems(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteAllItems();

		return 0;
	}

	// wxTreeListItem wxTreeListCtrl::GetRootItem() const
	static int _bind_GetRootItem(lua_State *L) {
		if (!_lg_typecheck_GetRootItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetRootItem() const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetRootItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetRootItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeListItem stack_lret = self->GetRootItem();
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetItemParent(wxTreeListItem item) const
	static int _bind_GetItemParent(lua_State *L) {
		if (!_lg_typecheck_GetItemParent(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetItemParent(wxTreeListItem item) const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetItemParent(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetItemParent function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetItemParent(wxTreeListItem) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeListItem stack_lret = self->GetItemParent(item);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetFirstChild(wxTreeListItem item) const
	static int _bind_GetFirstChild(lua_State *L) {
		if (!_lg_typecheck_GetFirstChild(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetFirstChild(wxTreeListItem item) const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetFirstChild(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetFirstChild function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetFirstChild(wxTreeListItem) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeListItem stack_lret = self->GetFirstChild(item);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetNextSibling(wxTreeListItem item) const
	static int _bind_GetNextSibling(lua_State *L) {
		if (!_lg_typecheck_GetNextSibling(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetNextSibling(wxTreeListItem item) const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetNextSibling(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetNextSibling function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetNextSibling(wxTreeListItem) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeListItem stack_lret = self->GetNextSibling(item);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetFirstItem() const
	static int _bind_GetFirstItem(lua_State *L) {
		if (!_lg_typecheck_GetFirstItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetFirstItem() const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetFirstItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetFirstItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeListItem stack_lret = self->GetFirstItem();
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetNextItem(wxTreeListItem item) const
	static int _bind_GetNextItem(lua_State *L) {
		if (!_lg_typecheck_GetNextItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetNextItem(wxTreeListItem item) const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetNextItem(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetNextItem function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetNextItem(wxTreeListItem) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeListItem stack_lret = self->GetNextItem(item);
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// const wxString & wxTreeListCtrl::GetItemText(wxTreeListItem item, unsigned int col = 0) const
	static int _bind_GetItemText(lua_State *L) {
		if (!_lg_typecheck_GetItemText(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxTreeListCtrl::GetItemText(wxTreeListItem item, unsigned int col = 0) const function, expected prototype:\nconst wxString & wxTreeListCtrl::GetItemText(wxTreeListItem item, unsigned int col = 0) const\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetItemText function");
		}
		wxTreeListItem item=*item_ptr;
		unsigned col=luatop>2 ? (unsigned)lua_tointeger(L,3) : (unsigned)0;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxTreeListCtrl::GetItemText(wxTreeListItem, unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetItemText(item, col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTreeListCtrl::SetItemText(wxTreeListItem item, unsigned int col, const wxString & text)
	static int _bind_SetItemText_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetItemText_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetItemText(wxTreeListItem item, unsigned int col, const wxString & text) function, expected prototype:\nvoid wxTreeListCtrl::SetItemText(wxTreeListItem item, unsigned int col, const wxString & text)\nClass arguments details:\narg 1 ID = 75268455\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::SetItemText function");
		}
		wxTreeListItem item=*item_ptr;
		unsigned col=(unsigned)lua_tointeger(L,3);
		wxString text(lua_tostring(L,4),lua_objlen(L,4));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetItemText(wxTreeListItem, unsigned int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemText(item, col, text);

		return 0;
	}

	// void wxTreeListCtrl::SetItemText(wxTreeListItem item, const wxString & text)
	static int _bind_SetItemText_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetItemText_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetItemText(wxTreeListItem item, const wxString & text) function, expected prototype:\nvoid wxTreeListCtrl::SetItemText(wxTreeListItem item, const wxString & text)\nClass arguments details:\narg 1 ID = 75268455\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::SetItemText function");
		}
		wxTreeListItem item=*item_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetItemText(wxTreeListItem, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemText(item, text);

		return 0;
	}

	// Overload binder for wxTreeListCtrl::SetItemText
	static int _bind_SetItemText(lua_State *L) {
		if (_lg_typecheck_SetItemText_overload_1(L)) return _bind_SetItemText_overload_1(L);
		if (_lg_typecheck_SetItemText_overload_2(L)) return _bind_SetItemText_overload_2(L);

		luaL_error(L, "error in function SetItemText, cannot match any of the overloads for function SetItemText:\n  SetItemText(wxTreeListItem, unsigned int, const wxString &)\n  SetItemText(wxTreeListItem, const wxString &)\n");
		return 0;
	}

	// void wxTreeListCtrl::SetItemImage(wxTreeListItem item, int closed, int opened = wxTreeListCtrl::NO_IMAGE)
	static int _bind_SetItemImage(lua_State *L) {
		if (!_lg_typecheck_SetItemImage(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetItemImage(wxTreeListItem item, int closed, int opened = wxTreeListCtrl::NO_IMAGE) function, expected prototype:\nvoid wxTreeListCtrl::SetItemImage(wxTreeListItem item, int closed, int opened = wxTreeListCtrl::NO_IMAGE)\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::SetItemImage function");
		}
		wxTreeListItem item=*item_ptr;
		int closed=(int)lua_tointeger(L,3);
		int opened=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxTreeListCtrl::NO_IMAGE;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetItemImage(wxTreeListItem, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemImage(item, closed, opened);

		return 0;
	}

	// wxClientData * wxTreeListCtrl::GetItemData(wxTreeListItem item) const
	static int _bind_GetItemData(lua_State *L) {
		if (!_lg_typecheck_GetItemData(L)) {
			luaL_error(L, "luna typecheck failed in wxClientData * wxTreeListCtrl::GetItemData(wxTreeListItem item) const function, expected prototype:\nwxClientData * wxTreeListCtrl::GetItemData(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetItemData function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClientData * wxTreeListCtrl::GetItemData(wxTreeListItem) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClientData * lret = self->GetItemData(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// void wxTreeListCtrl::SetItemData(wxTreeListItem item, wxClientData * data)
	static int _bind_SetItemData(lua_State *L) {
		if (!_lg_typecheck_SetItemData(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetItemData(wxTreeListItem item, wxClientData * data) function, expected prototype:\nvoid wxTreeListCtrl::SetItemData(wxTreeListItem item, wxClientData * data)\nClass arguments details:\narg 1 ID = 75268455\narg 2 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::SetItemData function");
		}
		wxTreeListItem item=*item_ptr;
		wxClientData* data=(Luna< wxClientData >::check(L,3));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetItemData(wxTreeListItem, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemData(item, data);

		return 0;
	}

	// void wxTreeListCtrl::Expand(wxTreeListItem item)
	static int _bind_Expand(lua_State *L) {
		if (!_lg_typecheck_Expand(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::Expand(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::Expand(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::Expand function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::Expand(wxTreeListItem). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Expand(item);

		return 0;
	}

	// void wxTreeListCtrl::Collapse(wxTreeListItem item)
	static int _bind_Collapse(lua_State *L) {
		if (!_lg_typecheck_Collapse(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::Collapse(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::Collapse(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::Collapse function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::Collapse(wxTreeListItem). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Collapse(item);

		return 0;
	}

	// bool wxTreeListCtrl::IsExpanded(wxTreeListItem item) const
	static int _bind_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_IsExpanded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::IsExpanded(wxTreeListItem item) const function, expected prototype:\nbool wxTreeListCtrl::IsExpanded(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::IsExpanded function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::IsExpanded(wxTreeListItem) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsExpanded(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTreeListItem wxTreeListCtrl::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeListItem wxTreeListCtrl::GetSelection() const function, expected prototype:\nwxTreeListItem wxTreeListCtrl::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeListItem wxTreeListCtrl::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeListItem stack_lret = self->GetSelection();
		wxTreeListItem* lret = new wxTreeListItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeListItem >::push(L,lret,true);

		return 1;
	}

	// void wxTreeListCtrl::Select(wxTreeListItem item)
	static int _bind_Select(lua_State *L) {
		if (!_lg_typecheck_Select(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::Select(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::Select(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::Select function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::Select(wxTreeListItem). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Select(item);

		return 0;
	}

	// void wxTreeListCtrl::Unselect(wxTreeListItem item)
	static int _bind_Unselect(lua_State *L) {
		if (!_lg_typecheck_Unselect(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::Unselect(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::Unselect(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::Unselect function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::Unselect(wxTreeListItem). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Unselect(item);

		return 0;
	}

	// bool wxTreeListCtrl::IsSelected(wxTreeListItem item) const
	static int _bind_IsSelected(lua_State *L) {
		if (!_lg_typecheck_IsSelected(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::IsSelected(wxTreeListItem item) const function, expected prototype:\nbool wxTreeListCtrl::IsSelected(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::IsSelected function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::IsSelected(wxTreeListItem) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSelected(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::SelectAll()
	static int _bind_SelectAll(lua_State *L) {
		if (!_lg_typecheck_SelectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SelectAll() function, expected prototype:\nvoid wxTreeListCtrl::SelectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SelectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectAll();

		return 0;
	}

	// void wxTreeListCtrl::UnselectAll()
	static int _bind_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_UnselectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::UnselectAll() function, expected prototype:\nvoid wxTreeListCtrl::UnselectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::UnselectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnselectAll();

		return 0;
	}

	// void wxTreeListCtrl::CheckItem(wxTreeListItem item, wxCheckBoxState state = ::wxCHK_CHECKED)
	static int _bind_CheckItem(lua_State *L) {
		if (!_lg_typecheck_CheckItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::CheckItem(wxTreeListItem item, wxCheckBoxState state = ::wxCHK_CHECKED) function, expected prototype:\nvoid wxTreeListCtrl::CheckItem(wxTreeListItem item, wxCheckBoxState state = ::wxCHK_CHECKED)\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::CheckItem function");
		}
		wxTreeListItem item=*item_ptr;
		wxCheckBoxState state=luatop>2 ? (wxCheckBoxState)lua_tointeger(L,3) : (wxCheckBoxState)::wxCHK_CHECKED;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::CheckItem(wxTreeListItem, wxCheckBoxState). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CheckItem(item, state);

		return 0;
	}

	// void wxTreeListCtrl::CheckItemRecursively(wxTreeListItem item, wxCheckBoxState state = ::wxCHK_CHECKED)
	static int _bind_CheckItemRecursively(lua_State *L) {
		if (!_lg_typecheck_CheckItemRecursively(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::CheckItemRecursively(wxTreeListItem item, wxCheckBoxState state = ::wxCHK_CHECKED) function, expected prototype:\nvoid wxTreeListCtrl::CheckItemRecursively(wxTreeListItem item, wxCheckBoxState state = ::wxCHK_CHECKED)\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::CheckItemRecursively function");
		}
		wxTreeListItem item=*item_ptr;
		wxCheckBoxState state=luatop>2 ? (wxCheckBoxState)lua_tointeger(L,3) : (wxCheckBoxState)::wxCHK_CHECKED;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::CheckItemRecursively(wxTreeListItem, wxCheckBoxState). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CheckItemRecursively(item, state);

		return 0;
	}

	// void wxTreeListCtrl::UncheckItem(wxTreeListItem item)
	static int _bind_UncheckItem(lua_State *L) {
		if (!_lg_typecheck_UncheckItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::UncheckItem(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::UncheckItem(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::UncheckItem function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::UncheckItem(wxTreeListItem). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UncheckItem(item);

		return 0;
	}

	// void wxTreeListCtrl::UpdateItemParentStateRecursively(wxTreeListItem item)
	static int _bind_UpdateItemParentStateRecursively(lua_State *L) {
		if (!_lg_typecheck_UpdateItemParentStateRecursively(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::UpdateItemParentStateRecursively(wxTreeListItem item) function, expected prototype:\nvoid wxTreeListCtrl::UpdateItemParentStateRecursively(wxTreeListItem item)\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::UpdateItemParentStateRecursively function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::UpdateItemParentStateRecursively(wxTreeListItem). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UpdateItemParentStateRecursively(item);

		return 0;
	}

	// wxCheckBoxState wxTreeListCtrl::GetCheckedState(wxTreeListItem item) const
	static int _bind_GetCheckedState(lua_State *L) {
		if (!_lg_typecheck_GetCheckedState(L)) {
			luaL_error(L, "luna typecheck failed in wxCheckBoxState wxTreeListCtrl::GetCheckedState(wxTreeListItem item) const function, expected prototype:\nwxCheckBoxState wxTreeListCtrl::GetCheckedState(wxTreeListItem item) const\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::GetCheckedState function");
		}
		wxTreeListItem item=*item_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxCheckBoxState wxTreeListCtrl::GetCheckedState(wxTreeListItem) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxCheckBoxState lret = self->GetCheckedState(item);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTreeListCtrl::AreAllChildrenInState(wxTreeListItem item, wxCheckBoxState state) const
	static int _bind_AreAllChildrenInState(lua_State *L) {
		if (!_lg_typecheck_AreAllChildrenInState(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::AreAllChildrenInState(wxTreeListItem item, wxCheckBoxState state) const function, expected prototype:\nbool wxTreeListCtrl::AreAllChildrenInState(wxTreeListItem item, wxCheckBoxState state) const\nClass arguments details:\narg 1 ID = 75268455\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItem* item_ptr=(Luna< wxTreeListItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeListCtrl::AreAllChildrenInState function");
		}
		wxTreeListItem item=*item_ptr;
		wxCheckBoxState state=(wxCheckBoxState)lua_tointeger(L,3);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::AreAllChildrenInState(wxTreeListItem, wxCheckBoxState) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->AreAllChildrenInState(item, state);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::SetSortColumn(unsigned int col, bool ascendingOrder = true)
	static int _bind_SetSortColumn(lua_State *L) {
		if (!_lg_typecheck_SetSortColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetSortColumn(unsigned int col, bool ascendingOrder = true) function, expected prototype:\nvoid wxTreeListCtrl::SetSortColumn(unsigned int col, bool ascendingOrder = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned col=(unsigned)lua_tointeger(L,2);
		bool ascendingOrder=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetSortColumn(unsigned int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSortColumn(col, ascendingOrder);

		return 0;
	}

	// void wxTreeListCtrl::SetItemComparator(wxTreeListItemComparator * comparator)
	static int _bind_SetItemComparator(lua_State *L) {
		if (!_lg_typecheck_SetItemComparator(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::SetItemComparator(wxTreeListItemComparator * comparator) function, expected prototype:\nvoid wxTreeListCtrl::SetItemComparator(wxTreeListItemComparator * comparator)\nClass arguments details:\narg 1 ID = 87583976\n\n%s",luna_dumpStack(L).c_str());
		}

		wxTreeListItemComparator* comparator=(Luna< wxTreeListItemComparator >::check(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::SetItemComparator(wxTreeListItemComparator *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemComparator(comparator);

		return 0;
	}

	// wxWindow * wxTreeListCtrl::GetView() const
	static int _bind_GetView(lua_State *L) {
		if (!_lg_typecheck_GetView(L)) {
			luaL_error(L, "luna typecheck failed in wxWindow * wxTreeListCtrl::GetView() const function, expected prototype:\nwxWindow * wxTreeListCtrl::GetView() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxWindow * wxTreeListCtrl::GetView() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxWindow * lret = self->GetView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxWindow >::push(L,lret,false);

		return 1;
	}

	// wxDataViewCtrl * wxTreeListCtrl::GetDataView() const
	static int _bind_GetDataView(lua_State *L) {
		if (!_lg_typecheck_GetDataView(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewCtrl * wxTreeListCtrl::GetDataView() const function, expected prototype:\nwxDataViewCtrl * wxTreeListCtrl::GetDataView() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewCtrl * wxTreeListCtrl::GetDataView() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewCtrl * lret = self->GetDataView();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewCtrl >::push(L,lret,false);

		return 1;
	}

	// const int wxTreeListCtrl::NO_IMAGE()
	static int _bind_get_NO_IMAGE(lua_State *L) {
		if (!_lg_typecheck_get_NO_IMAGE(L)) {
			luaL_error(L, "luna typecheck failed in const int wxTreeListCtrl::NO_IMAGE() function, expected prototype:\nconst int wxTreeListCtrl::NO_IMAGE()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const int wxTreeListCtrl::NO_IMAGE(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const int lret = self->NO_IMAGE;
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClassInfo * wxTreeListCtrl::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTreeListCtrl::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTreeListCtrl::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTreeListCtrl::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxTreeListCtrl::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxTreeListCtrl::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_AcceptsFocus() const function, expected prototype:\nbool wxTreeListCtrl::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxTreeListCtrl::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxTreeListCtrl::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_HasFocus() const function, expected prototype:\nbool wxTreeListCtrl::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxTreeListCtrl::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetCanFocus(canFocus);

		return 0;
	}

	// void wxTreeListCtrl::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetFocus() function, expected prototype:\nvoid wxTreeListCtrl::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetFocus();

		return 0;
	}

	// void wxTreeListCtrl::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetFocusFromKbd() function, expected prototype:\nvoid wxTreeListCtrl::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetFocusFromKbd();

		return 0;
	}

	// void wxTreeListCtrl::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxTreeListCtrl::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::AddChild(child);

		return 0;
	}

	// void wxTreeListCtrl::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxTreeListCtrl::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::RemoveChild(child);

		return 0;
	}

	// bool wxTreeListCtrl::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxTreeListCtrl::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxTreeListCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxTreeListCtrl::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeListCtrl::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxTreeListCtrl::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeListCtrl::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeListCtrl::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTreeListCtrl::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeListCtrl::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxTreeListCtrl::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeListCtrl::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeListCtrl::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTreeListCtrl::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeListCtrl::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxTreeListCtrl::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeListCtrl::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeListCtrl::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTreeListCtrl::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxTreeListCtrl::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_ScrollLines(int lines) function, expected prototype:\nbool wxTreeListCtrl::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_ScrollPages(int pages) function, expected prototype:\nbool wxTreeListCtrl::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxTreeListCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxTreeListCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxTreeListCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxTreeListCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxTreeListCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxTreeListCtrl::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeListCtrl::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxTreeListCtrl::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeListCtrl::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeListCtrl::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeListCtrl::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeListCtrl::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeListCtrl::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxTreeListCtrl::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeListCtrl::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeListCtrl::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeListCtrl::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxTreeListCtrl::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_Fit() function, expected prototype:\nvoid wxTreeListCtrl::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::Fit();

		return 0;
	}

	// void wxTreeListCtrl::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_FitInside() function, expected prototype:\nvoid wxTreeListCtrl::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::FitInside();

		return 0;
	}

	// wxSize wxTreeListCtrl::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeListCtrl::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxTreeListCtrl::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeListCtrl::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeListCtrl::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeListCtrl::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeListCtrl::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxTreeListCtrl::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeListCtrl::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeListCtrl::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeListCtrl::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeListCtrl::base_GetMaxSize() const function, expected prototype:\nwxSize wxTreeListCtrl::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeListCtrl::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeListCtrl::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeListCtrl::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeListCtrl::base_GetMinClientSize() const function, expected prototype:\nwxSize wxTreeListCtrl::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeListCtrl::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeListCtrl::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeListCtrl::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeListCtrl::base_GetMinSize() const function, expected prototype:\nwxSize wxTreeListCtrl::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeListCtrl::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeListCtrl::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeListCtrl::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeListCtrl::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxTreeListCtrl::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeListCtrl::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeListCtrl::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeListCtrl::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeListCtrl::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxTreeListCtrl::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeListCtrl::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeListCtrl::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxTreeListCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxTreeListCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxTreeListCtrl::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SendSizeEvent(flags);

		return 0;
	}

	// void wxTreeListCtrl::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxTreeListCtrl::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeListCtrl::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetMaxClientSize(size);

		return 0;
	}

	// void wxTreeListCtrl::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxTreeListCtrl::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeListCtrl::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetMaxSize(size);

		return 0;
	}

	// void wxTreeListCtrl::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxTreeListCtrl::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeListCtrl::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetMinClientSize(size);

		return 0;
	}

	// void wxTreeListCtrl::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxTreeListCtrl::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeListCtrl::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetMinSize(size);

		return 0;
	}

	// void wxTreeListCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxTreeListCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxTreeListCtrl::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxTreeListCtrl::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxTreeListCtrl::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxTreeListCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxTreeListCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxTreeListCtrl::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxTreeListCtrl::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxTreeListCtrl::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxTreeListCtrl::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxTreeListCtrl::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxTreeListCtrl::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxTreeListCtrl::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_ClearBackground() function, expected prototype:\nvoid wxTreeListCtrl::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxTreeListCtrl::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxTreeListCtrl::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxTreeListCtrl::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxTreeListCtrl::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxTreeListCtrl::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTreeListCtrl::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeListCtrl::base_GetCharHeight() const function, expected prototype:\nint wxTreeListCtrl::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeListCtrl::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeListCtrl::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTreeListCtrl::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeListCtrl::base_GetCharWidth() const function, expected prototype:\nint wxTreeListCtrl::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeListCtrl::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeListCtrl::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxTreeListCtrl::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxTreeListCtrl::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxTreeListCtrl::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxTreeListCtrl::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxTreeListCtrl::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxTreeListCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxTreeListCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxTreeListCtrl::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_Update() function, expected prototype:\nvoid wxTreeListCtrl::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::Update();

		return 0;
	}

	// bool wxTreeListCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxTreeListCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxTreeListCtrl::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTreeListCtrl::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_ShouldInheritColours() const function, expected prototype:\nbool wxTreeListCtrl::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxTreeListCtrl::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxTreeListCtrl::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_GetThemeEnabled() const function, expected prototype:\nbool wxTreeListCtrl::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_CanSetTransparent() function, expected prototype:\nbool wxTreeListCtrl::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxTreeListCtrl::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTreeListCtrl::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetNextHandler(handler);

		return 0;
	}

	// void wxTreeListCtrl::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTreeListCtrl::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetPreviousHandler(handler);

		return 0;
	}

	// long wxTreeListCtrl::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxTreeListCtrl::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxTreeListCtrl::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTreeListCtrl::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxTreeListCtrl::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTreeListCtrl::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxTreeListCtrl::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxTreeListCtrl::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxTreeListCtrl::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxTreeListCtrl::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_Lower() function, expected prototype:\nvoid wxTreeListCtrl::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::Lower();

		return 0;
	}

	// void wxTreeListCtrl::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_Raise() function, expected prototype:\nvoid wxTreeListCtrl::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::Raise();

		return 0;
	}

	// bool wxTreeListCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxTreeListCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_IsShown() const function, expected prototype:\nbool wxTreeListCtrl::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_IsShownOnScreen() const function, expected prototype:\nbool wxTreeListCtrl::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_Enable(bool enable = true) function, expected prototype:\nbool wxTreeListCtrl::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_Show(bool show = true) function, expected prototype:\nbool wxTreeListCtrl::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxTreeListCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxTreeListCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTreeListCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxTreeListCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxTreeListCtrl::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTreeListCtrl::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTreeListCtrl::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxTreeListCtrl::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxTreeListCtrl::base_GetValidator() function, expected prototype:\nwxValidator * wxTreeListCtrl::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxTreeListCtrl::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxTreeListCtrl::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxTreeListCtrl::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxTreeListCtrl::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTreeListCtrl::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetValidator(validator);

		return 0;
	}

	// bool wxTreeListCtrl::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_TransferDataFromWindow() function, expected prototype:\nbool wxTreeListCtrl::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_TransferDataToWindow() function, expected prototype:\nbool wxTreeListCtrl::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_Validate() function, expected prototype:\nbool wxTreeListCtrl::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxTreeListCtrl::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTreeListCtrl::base_GetLabel() const function, expected prototype:\nwxString wxTreeListCtrl::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTreeListCtrl::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTreeListCtrl::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxLayoutDirection wxTreeListCtrl::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxTreeListCtrl::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxTreeListCtrl::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxTreeListCtrl::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxTreeListCtrl::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTreeListCtrl::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTreeListCtrl::base_GetName() const function, expected prototype:\nwxString wxTreeListCtrl::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTreeListCtrl::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTreeListCtrl::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTreeListCtrl::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxTreeListCtrl::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetLabel(label);

		return 0;
	}

	// void wxTreeListCtrl::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxTreeListCtrl::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetLayoutDirection(dir);

		return 0;
	}

	// void wxTreeListCtrl::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetName(const wxString & name) function, expected prototype:\nvoid wxTreeListCtrl::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetName(name);

		return 0;
	}

	// void wxTreeListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxTreeListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxTreeListCtrl::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxTreeListCtrl::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_Destroy() function, expected prototype:\nbool wxTreeListCtrl::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxTreeListCtrl::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxTreeListCtrl::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxTreeListCtrl::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxTreeListCtrl::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxTreeListCtrl::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxTreeListCtrl::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxTreeListCtrl::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::SetDropTarget(target);

		return 0;
	}

	// void wxTreeListCtrl::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxTreeListCtrl::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxTreeListCtrl::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_Layout() function, expected prototype:\nbool wxTreeListCtrl::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_HasCapture() const function, expected prototype:\nbool wxTreeListCtrl::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxTreeListCtrl::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxTreeListCtrl::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxTreeListCtrl::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::WarpPointer(x, y);

		return 0;
	}

	// void wxTreeListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxTreeListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTreeListCtrl::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxTreeListCtrl::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxTreeListCtrl::base_GetHandle() const function, expected prototype:\nHWND wxTreeListCtrl::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxTreeListCtrl::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxTreeListCtrl::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxTreeListCtrl::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_HasMultiplePages() const function, expected prototype:\nbool wxTreeListCtrl::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_InheritAttributes() function, expected prototype:\nvoid wxTreeListCtrl::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::InheritAttributes();

		return 0;
	}

	// void wxTreeListCtrl::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_InitDialog() function, expected prototype:\nvoid wxTreeListCtrl::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::InitDialog();

		return 0;
	}

	// bool wxTreeListCtrl::base_IsDoubleBuffered() const
	static int _bind_base_IsDoubleBuffered(lua_State *L) {
		if (!_lg_typecheck_base_IsDoubleBuffered(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_IsDoubleBuffered() const function, expected prototype:\nbool wxTreeListCtrl::base_IsDoubleBuffered() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_IsDoubleBuffered() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::IsDoubleBuffered();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_IsRetained() const function, expected prototype:\nbool wxTreeListCtrl::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_IsTopLevel() const function, expected prototype:\nbool wxTreeListCtrl::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxTreeListCtrl::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::MakeModal(modal);

		return 0;
	}

	// void wxTreeListCtrl::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_OnInternalIdle() function, expected prototype:\nvoid wxTreeListCtrl::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::OnInternalIdle();

		return 0;
	}

	// bool wxTreeListCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxTreeListCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeListCtrl::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeListCtrl::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxTreeListCtrl::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeListCtrl::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeListCtrl::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeListCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeListCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxTreeListCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxTreeListCtrl* self=Luna< wxObject >::checkSubType< wxTreeListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeListCtrl::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeListCtrl::UpdateWindowUI(flags);

		return 0;
	}


	// Operator binds:

};

wxTreeListCtrl* LunaTraits< wxTreeListCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeListCtrl::_bind_ctor(L);
}

void LunaTraits< wxTreeListCtrl >::_bind_dtor(wxTreeListCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxTreeListCtrl >::className[] = "wxTreeListCtrl";
const char LunaTraits< wxTreeListCtrl >::fullName[] = "wxTreeListCtrl";
const char LunaTraits< wxTreeListCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxTreeListCtrl >::parents[] = {"wx.wxWindow", 0};
const int LunaTraits< wxTreeListCtrl >::hash = 75090111;
const int LunaTraits< wxTreeListCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTreeListCtrl >::methods[] = {
	{"Create", &luna_wrapper_wxTreeListCtrl::_bind_Create},
	{"AssignImageList", &luna_wrapper_wxTreeListCtrl::_bind_AssignImageList},
	{"SetImageList", &luna_wrapper_wxTreeListCtrl::_bind_SetImageList},
	{"AppendColumn", &luna_wrapper_wxTreeListCtrl::_bind_AppendColumn},
	{"GetColumnCount", &luna_wrapper_wxTreeListCtrl::_bind_GetColumnCount},
	{"DeleteColumn", &luna_wrapper_wxTreeListCtrl::_bind_DeleteColumn},
	{"ClearColumns", &luna_wrapper_wxTreeListCtrl::_bind_ClearColumns},
	{"SetColumnWidth", &luna_wrapper_wxTreeListCtrl::_bind_SetColumnWidth},
	{"GetColumnWidth", &luna_wrapper_wxTreeListCtrl::_bind_GetColumnWidth},
	{"WidthFor", &luna_wrapper_wxTreeListCtrl::_bind_WidthFor},
	{"AppendItem", &luna_wrapper_wxTreeListCtrl::_bind_AppendItem},
	{"InsertItem", &luna_wrapper_wxTreeListCtrl::_bind_InsertItem},
	{"PrependItem", &luna_wrapper_wxTreeListCtrl::_bind_PrependItem},
	{"DeleteItem", &luna_wrapper_wxTreeListCtrl::_bind_DeleteItem},
	{"DeleteAllItems", &luna_wrapper_wxTreeListCtrl::_bind_DeleteAllItems},
	{"GetRootItem", &luna_wrapper_wxTreeListCtrl::_bind_GetRootItem},
	{"GetItemParent", &luna_wrapper_wxTreeListCtrl::_bind_GetItemParent},
	{"GetFirstChild", &luna_wrapper_wxTreeListCtrl::_bind_GetFirstChild},
	{"GetNextSibling", &luna_wrapper_wxTreeListCtrl::_bind_GetNextSibling},
	{"GetFirstItem", &luna_wrapper_wxTreeListCtrl::_bind_GetFirstItem},
	{"GetNextItem", &luna_wrapper_wxTreeListCtrl::_bind_GetNextItem},
	{"GetItemText", &luna_wrapper_wxTreeListCtrl::_bind_GetItemText},
	{"SetItemText", &luna_wrapper_wxTreeListCtrl::_bind_SetItemText},
	{"SetItemImage", &luna_wrapper_wxTreeListCtrl::_bind_SetItemImage},
	{"GetItemData", &luna_wrapper_wxTreeListCtrl::_bind_GetItemData},
	{"SetItemData", &luna_wrapper_wxTreeListCtrl::_bind_SetItemData},
	{"Expand", &luna_wrapper_wxTreeListCtrl::_bind_Expand},
	{"Collapse", &luna_wrapper_wxTreeListCtrl::_bind_Collapse},
	{"IsExpanded", &luna_wrapper_wxTreeListCtrl::_bind_IsExpanded},
	{"GetSelection", &luna_wrapper_wxTreeListCtrl::_bind_GetSelection},
	{"Select", &luna_wrapper_wxTreeListCtrl::_bind_Select},
	{"Unselect", &luna_wrapper_wxTreeListCtrl::_bind_Unselect},
	{"IsSelected", &luna_wrapper_wxTreeListCtrl::_bind_IsSelected},
	{"SelectAll", &luna_wrapper_wxTreeListCtrl::_bind_SelectAll},
	{"UnselectAll", &luna_wrapper_wxTreeListCtrl::_bind_UnselectAll},
	{"CheckItem", &luna_wrapper_wxTreeListCtrl::_bind_CheckItem},
	{"CheckItemRecursively", &luna_wrapper_wxTreeListCtrl::_bind_CheckItemRecursively},
	{"UncheckItem", &luna_wrapper_wxTreeListCtrl::_bind_UncheckItem},
	{"UpdateItemParentStateRecursively", &luna_wrapper_wxTreeListCtrl::_bind_UpdateItemParentStateRecursively},
	{"GetCheckedState", &luna_wrapper_wxTreeListCtrl::_bind_GetCheckedState},
	{"AreAllChildrenInState", &luna_wrapper_wxTreeListCtrl::_bind_AreAllChildrenInState},
	{"SetSortColumn", &luna_wrapper_wxTreeListCtrl::_bind_SetSortColumn},
	{"SetItemComparator", &luna_wrapper_wxTreeListCtrl::_bind_SetItemComparator},
	{"GetView", &luna_wrapper_wxTreeListCtrl::_bind_GetView},
	{"GetDataView", &luna_wrapper_wxTreeListCtrl::_bind_GetDataView},
	{"get_NO_IMAGE", &luna_wrapper_wxTreeListCtrl::_bind_get_NO_IMAGE},
	{"base_GetClassInfo", &luna_wrapper_wxTreeListCtrl::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxTreeListCtrl::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxTreeListCtrl::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxTreeListCtrl::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxTreeListCtrl::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxTreeListCtrl::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxTreeListCtrl::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxTreeListCtrl::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxTreeListCtrl::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxTreeListCtrl::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxTreeListCtrl::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxTreeListCtrl::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxTreeListCtrl::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxTreeListCtrl::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxTreeListCtrl::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxTreeListCtrl::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxTreeListCtrl::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxTreeListCtrl::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxTreeListCtrl::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxTreeListCtrl::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxTreeListCtrl::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxTreeListCtrl::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxTreeListCtrl::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxTreeListCtrl::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxTreeListCtrl::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxTreeListCtrl::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxTreeListCtrl::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxTreeListCtrl::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxTreeListCtrl::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxTreeListCtrl::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxTreeListCtrl::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxTreeListCtrl::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxTreeListCtrl::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxTreeListCtrl::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxTreeListCtrl::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxTreeListCtrl::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxTreeListCtrl::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxTreeListCtrl::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxTreeListCtrl::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxTreeListCtrl::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxTreeListCtrl::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxTreeListCtrl::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxTreeListCtrl::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxTreeListCtrl::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxTreeListCtrl::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxTreeListCtrl::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxTreeListCtrl::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxTreeListCtrl::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxTreeListCtrl::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxTreeListCtrl::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxTreeListCtrl::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxTreeListCtrl::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxTreeListCtrl::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxTreeListCtrl::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxTreeListCtrl::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxTreeListCtrl::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxTreeListCtrl::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxTreeListCtrl::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxTreeListCtrl::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxTreeListCtrl::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxTreeListCtrl::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxTreeListCtrl::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxTreeListCtrl::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxTreeListCtrl::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxTreeListCtrl::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxTreeListCtrl::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxTreeListCtrl::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxTreeListCtrl::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxTreeListCtrl::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxTreeListCtrl::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxTreeListCtrl::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxTreeListCtrl::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxTreeListCtrl::_bind_base_Validate},
	{"base_GetLabel", &luna_wrapper_wxTreeListCtrl::_bind_base_GetLabel},
	{"base_GetLayoutDirection", &luna_wrapper_wxTreeListCtrl::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxTreeListCtrl::_bind_base_GetName},
	{"base_SetLabel", &luna_wrapper_wxTreeListCtrl::_bind_base_SetLabel},
	{"base_SetLayoutDirection", &luna_wrapper_wxTreeListCtrl::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxTreeListCtrl::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxTreeListCtrl::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxTreeListCtrl::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxTreeListCtrl::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxTreeListCtrl::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxTreeListCtrl::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxTreeListCtrl::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxTreeListCtrl::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxTreeListCtrl::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxTreeListCtrl::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxTreeListCtrl::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxTreeListCtrl::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxTreeListCtrl::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxTreeListCtrl::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxTreeListCtrl::_bind_base_InitDialog},
	{"base_IsDoubleBuffered", &luna_wrapper_wxTreeListCtrl::_bind_base_IsDoubleBuffered},
	{"base_IsRetained", &luna_wrapper_wxTreeListCtrl::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxTreeListCtrl::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxTreeListCtrl::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxTreeListCtrl::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxTreeListCtrl::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxTreeListCtrl::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxTreeListCtrl::_bind_base_UpdateWindowUI},
	{"fromVoid", &luna_wrapper_wxTreeListCtrl::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTreeListCtrl::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTreeListCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeListCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxTreeListCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeListCtrl >::enumValues[] = {
	{0,0}
};


