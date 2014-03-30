#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTreeCtrl.h>

class luna_wrapper_wxTreeCtrl {
public:
	typedef Luna< wxTreeCtrl > luna_t;

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

		wxTreeCtrl* self= (wxTreeCtrl*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTreeCtrl >::push(L,self,false);
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
		//wxTreeCtrl* ptr= dynamic_cast< wxTreeCtrl* >(Luna< wxObject >::check(L,1));
		wxTreeCtrl* ptr= luna_caster< wxObject, wxTreeCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTreeCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( luatop>2 && (!(Luna< wxPoint >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,20268751) ) return false;
		if( luatop>3 && (!(Luna< wxSize >::check(L,4))) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>5 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,6))) ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>3 && (!(Luna< wxPoint >::check(L,4))) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>4 && (!(Luna< wxSize >::check(L,5))) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>6 && (!(Luna< wxObject >::checkSubType< wxValidator >(L,7))) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddRoot(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignStateImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Collapse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollapseAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_CollapseAllChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollapseAndReset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Delete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EditLabel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,96106697)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndEditLabel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnsureVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ExpandAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ExpandAllChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetBoundingRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildrenCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEditControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFirstChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,24465332) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetFirstVisibleItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetFocusedItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ClearFocusedItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetFocusedItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetImageList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemState(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetLastChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,24465332) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextSibling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPrevSibling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPrevVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetQuickBestSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRootItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,99349677) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetStateImageList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HitTest(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (!(Luna< wxTreeItemId >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,28400299) ) return false;
		if( (!(Luna< wxTreeItemId >::check(L,3))) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50457573)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxClientData >::checkSubType< wxTreeItemData >(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (!(Luna< wxTreeItemId >::check(L,2))) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50457573)) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !(Luna< wxClientData >::checkSubType< wxTreeItemData >(L,7)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsBold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemHasChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_OnCompareItems(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemBold(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemDropHighlight(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemFont(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemHasChildren(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemState(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemTextColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetQuickBestSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetStateImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindowStyle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SortChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Toggle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ToggleItemSelection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Unselect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UnselectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_UnselectItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SelectChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
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

	inline static bool _lg_typecheck_base_AddRoot(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Collapse(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_CollapseAndReset(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Delete(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_DeleteChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EditLabel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,96106697)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EndEditLabel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_EnsureVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Expand(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetBoundingRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetChildrenCount(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetEditControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetFirstChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,24465332) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetFirstVisibleItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetFocusedItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ClearFocusedItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SetFocusedItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetIndent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetItemBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetItemData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetItemFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetItemImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetItemParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetItemText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetItemTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetLastChild(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetNextChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,24465332) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetNextSibling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetNextVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetPrevSibling(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetPrevVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetRootItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetSelections(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,99349677) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsBold(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsExpanded(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsSelected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ItemHasChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_OnCompareItems(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ScrollTo(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SelectItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetIndent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetItemBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetItemBold(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetItemData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetItemDropHighlight(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetItemFont(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetItemHasChildren(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetItemImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetItemText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetItemTextColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SetStateImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_SortChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Toggle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Unselect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_UnselectAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_SelectChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTreeCtrl::wxTreeCtrl()
	static wxTreeCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeCtrl::wxTreeCtrl() function, expected prototype:\nwxTreeCtrl::wxTreeCtrl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTreeCtrl();
	}

	// wxTreeCtrl::wxTreeCtrl(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr)
	static wxTreeCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeCtrl::wxTreeCtrl(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr) function, expected prototype:\nwxTreeCtrl::wxTreeCtrl(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTreeCtrl::wxTreeCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeCtrl::wxTreeCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)wxTR_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>5 ? (Luna< wxObject >::checkSubType< wxValidator >(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTreeCtrl::wxTreeCtrl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxTreeCtrl(parent, id, pos, size, style, validator, name);
	}

	// wxTreeCtrl::wxTreeCtrl(lua_Table * data)
	static wxTreeCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeCtrl::wxTreeCtrl(lua_Table * data) function, expected prototype:\nwxTreeCtrl::wxTreeCtrl(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxTreeCtrl(L,NULL);
	}

	// wxTreeCtrl::wxTreeCtrl(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr)
	static wxTreeCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeCtrl::wxTreeCtrl(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr) function, expected prototype:\nwxTreeCtrl::wxTreeCtrl(lua_Table * data, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTreeCtrl::wxTreeCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeCtrl::wxTreeCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxTR_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTreeCtrl::wxTreeCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wrapper_wxTreeCtrl(L,NULL, parent, id, pos, size, style, validator, name);
	}

	// Overload binder for wxTreeCtrl::wxTreeCtrl
	static wxTreeCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxTreeCtrl, cannot match any of the overloads for function wxTreeCtrl:\n  wxTreeCtrl()\n  wxTreeCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxTreeCtrl(lua_Table *)\n  wxTreeCtrl(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// wxTreeItemId wxTreeCtrl::AddRoot(const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	static int _bind_AddRoot(lua_State *L) {
		if (!_lg_typecheck_AddRoot(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::AddRoot(const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) function, expected prototype:\nwxTreeItemId wxTreeCtrl::AddRoot(const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 4 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int image=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;
		int selImage=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		wxTreeItemData* data=luatop>4 ? (Luna< wxClientData >::checkSubType< wxTreeItemData >(L,5)) : (wxTreeItemData*)NULL;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::AddRoot(const wxString &, int, int, wxTreeItemData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->AddRoot(text, image, selImage, data);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::AppendItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	static int _bind_AppendItem(lua_State *L) {
		if (!_lg_typecheck_AppendItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::AppendItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) function, expected prototype:\nwxTreeItemId wxTreeCtrl::AppendItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 88196105\narg 5 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* parent_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeCtrl::AppendItem function");
		}
		const wxTreeItemId & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int image=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int selImage=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		wxTreeItemData* data=luatop>5 ? (Luna< wxClientData >::checkSubType< wxTreeItemData >(L,6)) : (wxTreeItemData*)NULL;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::AppendItem(const wxTreeItemId &, const wxString &, int, int, wxTreeItemData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->AppendItem(parent, text, image, selImage, data);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// void wxTreeCtrl::AssignImageList(wxImageList * imageList)
	static int _bind_AssignImageList(lua_State *L) {
		if (!_lg_typecheck_AssignImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::AssignImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeCtrl::AssignImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::AssignImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignImageList(imageList);

		return 0;
	}

	// void wxTreeCtrl::AssignStateImageList(wxImageList * imageList)
	static int _bind_AssignStateImageList(lua_State *L) {
		if (!_lg_typecheck_AssignStateImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::AssignStateImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeCtrl::AssignStateImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::AssignStateImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignStateImageList(imageList);

		return 0;
	}

	// void wxTreeCtrl::Collapse(const wxTreeItemId & item)
	static int _bind_Collapse(lua_State *L) {
		if (!_lg_typecheck_Collapse(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::Collapse(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::Collapse(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::Collapse function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::Collapse(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Collapse(item);

		return 0;
	}

	// void wxTreeCtrl::CollapseAll()
	static int _bind_CollapseAll(lua_State *L) {
		if (!_lg_typecheck_CollapseAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::CollapseAll() function, expected prototype:\nvoid wxTreeCtrl::CollapseAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::CollapseAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CollapseAll();

		return 0;
	}

	// void wxTreeCtrl::CollapseAllChildren(const wxTreeItemId & item)
	static int _bind_CollapseAllChildren(lua_State *L) {
		if (!_lg_typecheck_CollapseAllChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::CollapseAllChildren(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::CollapseAllChildren(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::CollapseAllChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::CollapseAllChildren(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CollapseAllChildren(item);

		return 0;
	}

	// void wxTreeCtrl::CollapseAndReset(const wxTreeItemId & item)
	static int _bind_CollapseAndReset(lua_State *L) {
		if (!_lg_typecheck_CollapseAndReset(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::CollapseAndReset(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::CollapseAndReset(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::CollapseAndReset function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::CollapseAndReset(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CollapseAndReset(item);

		return 0;
	}

	// bool wxTreeCtrl::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr) function, expected prototype:\nbool wxTreeCtrl::Create(wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxID_ANY;
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxTreeCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxTR_DEFAULT_STYLE;
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTreeCtrl::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::Delete(const wxTreeItemId & item)
	static int _bind_Delete(lua_State *L) {
		if (!_lg_typecheck_Delete(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::Delete(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::Delete(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::Delete function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::Delete(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Delete(item);

		return 0;
	}

	// void wxTreeCtrl::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::DeleteAllItems() function, expected prototype:\nvoid wxTreeCtrl::DeleteAllItems()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::DeleteAllItems(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteAllItems();

		return 0;
	}

	// void wxTreeCtrl::DeleteChildren(const wxTreeItemId & item)
	static int _bind_DeleteChildren(lua_State *L) {
		if (!_lg_typecheck_DeleteChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::DeleteChildren(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::DeleteChildren(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::DeleteChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::DeleteChildren(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteChildren(item);

		return 0;
	}

	// wxTextCtrl * wxTreeCtrl::EditLabel(const wxTreeItemId & item, wxClassInfo * textCtrlClass = wxCLASSINFO ( wxTextCtrl ))
	static int _bind_EditLabel(lua_State *L) {
		if (!_lg_typecheck_EditLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxTreeCtrl::EditLabel(const wxTreeItemId & item, wxClassInfo * textCtrlClass = wxCLASSINFO ( wxTextCtrl )) function, expected prototype:\nwxTextCtrl * wxTreeCtrl::EditLabel(const wxTreeItemId & item, wxClassInfo * textCtrlClass = wxCLASSINFO ( wxTextCtrl ))\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 96106697\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::EditLabel function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxClassInfo* textCtrlClass=luatop>2 ? (Luna< wxClassInfo >::check(L,3)) : (wxClassInfo*)wxCLASSINFO ( wxTextCtrl );

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxTreeCtrl::EditLabel(const wxTreeItemId &, wxClassInfo *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextCtrl * lret = self->EditLabel(item, textCtrlClass);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// void wxTreeCtrl::EndEditLabel(const wxTreeItemId & item, bool discardChanges = false)
	static int _bind_EndEditLabel(lua_State *L) {
		if (!_lg_typecheck_EndEditLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::EndEditLabel(const wxTreeItemId & item, bool discardChanges = false) function, expected prototype:\nvoid wxTreeCtrl::EndEditLabel(const wxTreeItemId & item, bool discardChanges = false)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::EndEditLabel function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool discardChanges=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::EndEditLabel(const wxTreeItemId &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EndEditLabel(item, discardChanges);

		return 0;
	}

	// void wxTreeCtrl::EnsureVisible(const wxTreeItemId & item)
	static int _bind_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_EnsureVisible(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::EnsureVisible(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::EnsureVisible(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::EnsureVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::EnsureVisible(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EnsureVisible(item);

		return 0;
	}

	// void wxTreeCtrl::Expand(const wxTreeItemId & item)
	static int _bind_Expand(lua_State *L) {
		if (!_lg_typecheck_Expand(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::Expand(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::Expand(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::Expand function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::Expand(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Expand(item);

		return 0;
	}

	// void wxTreeCtrl::ExpandAll()
	static int _bind_ExpandAll(lua_State *L) {
		if (!_lg_typecheck_ExpandAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::ExpandAll() function, expected prototype:\nvoid wxTreeCtrl::ExpandAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::ExpandAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ExpandAll();

		return 0;
	}

	// void wxTreeCtrl::ExpandAllChildren(const wxTreeItemId & item)
	static int _bind_ExpandAllChildren(lua_State *L) {
		if (!_lg_typecheck_ExpandAllChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::ExpandAllChildren(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::ExpandAllChildren(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::ExpandAllChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::ExpandAllChildren(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ExpandAllChildren(item);

		return 0;
	}

	// bool wxTreeCtrl::GetBoundingRect(const wxTreeItemId & item, wxRect & rect, bool textOnly = false) const
	static int _bind_GetBoundingRect(lua_State *L) {
		if (!_lg_typecheck_GetBoundingRect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::GetBoundingRect(const wxTreeItemId & item, wxRect & rect, bool textOnly = false) const function, expected prototype:\nbool wxTreeCtrl::GetBoundingRect(const wxTreeItemId & item, wxRect & rect, bool textOnly = false) const\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetBoundingRect function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxTreeCtrl::GetBoundingRect function");
		}
		wxRect & rect=*rect_ptr;
		bool textOnly=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::GetBoundingRect(const wxTreeItemId &, wxRect &, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetBoundingRect(item, rect, textOnly);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxTreeCtrl::GetChildrenCount(const wxTreeItemId & item, bool recursively = true) const
	static int _bind_GetChildrenCount(lua_State *L) {
		if (!_lg_typecheck_GetChildrenCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxTreeCtrl::GetChildrenCount(const wxTreeItemId & item, bool recursively = true) const function, expected prototype:\nsize_t wxTreeCtrl::GetChildrenCount(const wxTreeItemId & item, bool recursively = true) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetChildrenCount function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool recursively=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxTreeCtrl::GetChildrenCount(const wxTreeItemId &, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetChildrenCount(item, recursively);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxTreeCtrl::GetCount() const
	static int _bind_GetCount(lua_State *L) {
		if (!_lg_typecheck_GetCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxTreeCtrl::GetCount() const function, expected prototype:\nunsigned int wxTreeCtrl::GetCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxTreeCtrl::GetCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextCtrl * wxTreeCtrl::GetEditControl() const
	static int _bind_GetEditControl(lua_State *L) {
		if (!_lg_typecheck_GetEditControl(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxTreeCtrl::GetEditControl() const function, expected prototype:\nwxTextCtrl * wxTreeCtrl::GetEditControl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxTreeCtrl::GetEditControl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextCtrl * lret = self->GetEditControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetFirstChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const
	static int _bind_GetFirstChild(lua_State *L) {
		if (!_lg_typecheck_GetFirstChild(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetFirstChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetFirstChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 24465332\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetFirstChild function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemIdValue* cookie_ptr=(Luna< wxTreeItemIdValue >::check(L,3));
		if( !cookie_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cookie in wxTreeCtrl::GetFirstChild function");
		}
		wxTreeItemIdValue & cookie=*cookie_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetFirstChild(const wxTreeItemId &, wxTreeItemIdValue &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetFirstChild(item, cookie);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetFirstVisibleItem() const
	static int _bind_GetFirstVisibleItem(lua_State *L) {
		if (!_lg_typecheck_GetFirstVisibleItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetFirstVisibleItem() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetFirstVisibleItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetFirstVisibleItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetFirstVisibleItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetFocusedItem() const
	static int _bind_GetFocusedItem(lua_State *L) {
		if (!_lg_typecheck_GetFocusedItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetFocusedItem() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetFocusedItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetFocusedItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetFocusedItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// void wxTreeCtrl::ClearFocusedItem()
	static int _bind_ClearFocusedItem(lua_State *L) {
		if (!_lg_typecheck_ClearFocusedItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::ClearFocusedItem() function, expected prototype:\nvoid wxTreeCtrl::ClearFocusedItem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::ClearFocusedItem(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearFocusedItem();

		return 0;
	}

	// void wxTreeCtrl::SetFocusedItem(const wxTreeItemId & item)
	static int _bind_SetFocusedItem(lua_State *L) {
		if (!_lg_typecheck_SetFocusedItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetFocusedItem(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::SetFocusedItem(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetFocusedItem function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetFocusedItem(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetFocusedItem(item);

		return 0;
	}

	// wxImageList * wxTreeCtrl::GetImageList() const
	static int _bind_GetImageList(lua_State *L) {
		if (!_lg_typecheck_GetImageList(L)) {
			luaL_error(L, "luna typecheck failed in wxImageList * wxTreeCtrl::GetImageList() const function, expected prototype:\nwxImageList * wxTreeCtrl::GetImageList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImageList * wxTreeCtrl::GetImageList() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImageList * lret = self->GetImageList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImageList >::push(L,lret,false);

		return 1;
	}

	// unsigned int wxTreeCtrl::GetIndent() const
	static int _bind_GetIndent(lua_State *L) {
		if (!_lg_typecheck_GetIndent(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxTreeCtrl::GetIndent() const function, expected prototype:\nunsigned int wxTreeCtrl::GetIndent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxTreeCtrl::GetIndent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxTreeCtrl::GetItemBackgroundColour(const wxTreeItemId & item) const
	static int _bind_GetItemBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetItemBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxTreeCtrl::GetItemBackgroundColour(const wxTreeItemId & item) const function, expected prototype:\nwxColour wxTreeCtrl::GetItemBackgroundColour(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemBackgroundColour function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxTreeCtrl::GetItemBackgroundColour(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetItemBackgroundColour(item);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemData * wxTreeCtrl::GetItemData(const wxTreeItemId & item) const
	static int _bind_GetItemData(lua_State *L) {
		if (!_lg_typecheck_GetItemData(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemData * wxTreeCtrl::GetItemData(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemData * wxTreeCtrl::GetItemData(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemData function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemData * wxTreeCtrl::GetItemData(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemData * lret = self->GetItemData(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemData >::push(L,lret,false);

		return 1;
	}

	// wxFont wxTreeCtrl::GetItemFont(const wxTreeItemId & item) const
	static int _bind_GetItemFont(lua_State *L) {
		if (!_lg_typecheck_GetItemFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxTreeCtrl::GetItemFont(const wxTreeItemId & item) const function, expected prototype:\nwxFont wxTreeCtrl::GetItemFont(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemFont function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxTreeCtrl::GetItemFont(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetItemFont(item);
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// int wxTreeCtrl::GetItemImage(const wxTreeItemId & item, wxTreeItemIcon which = ::wxTreeItemIcon_Normal) const
	static int _bind_GetItemImage(lua_State *L) {
		if (!_lg_typecheck_GetItemImage(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::GetItemImage(const wxTreeItemId & item, wxTreeItemIcon which = ::wxTreeItemIcon_Normal) const function, expected prototype:\nint wxTreeCtrl::GetItemImage(const wxTreeItemId & item, wxTreeItemIcon which = ::wxTreeItemIcon_Normal) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemImage function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemIcon which=luatop>2 ? (wxTreeItemIcon)lua_tointeger(L,3) : (wxTreeItemIcon)::wxTreeItemIcon_Normal;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::GetItemImage(const wxTreeItemId &, wxTreeItemIcon) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetItemImage(item, which);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetItemParent(const wxTreeItemId & item) const
	static int _bind_GetItemParent(lua_State *L) {
		if (!_lg_typecheck_GetItemParent(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetItemParent(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetItemParent(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemParent function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetItemParent(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetItemParent(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// int wxTreeCtrl::GetItemState(const wxTreeItemId & item) const
	static int _bind_GetItemState(lua_State *L) {
		if (!_lg_typecheck_GetItemState(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::GetItemState(const wxTreeItemId & item) const function, expected prototype:\nint wxTreeCtrl::GetItemState(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemState function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::GetItemState(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetItemState(item);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTreeCtrl::GetItemText(const wxTreeItemId & item) const
	static int _bind_GetItemText(lua_State *L) {
		if (!_lg_typecheck_GetItemText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTreeCtrl::GetItemText(const wxTreeItemId & item) const function, expected prototype:\nwxString wxTreeCtrl::GetItemText(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemText function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTreeCtrl::GetItemText(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetItemText(item);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxColour wxTreeCtrl::GetItemTextColour(const wxTreeItemId & item) const
	static int _bind_GetItemTextColour(lua_State *L) {
		if (!_lg_typecheck_GetItemTextColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxTreeCtrl::GetItemTextColour(const wxTreeItemId & item) const function, expected prototype:\nwxColour wxTreeCtrl::GetItemTextColour(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetItemTextColour function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxTreeCtrl::GetItemTextColour(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetItemTextColour(item);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetLastChild(const wxTreeItemId & item) const
	static int _bind_GetLastChild(lua_State *L) {
		if (!_lg_typecheck_GetLastChild(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetLastChild(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetLastChild(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetLastChild function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetLastChild(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetLastChild(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetNextChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const
	static int _bind_GetNextChild(lua_State *L) {
		if (!_lg_typecheck_GetNextChild(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetNextChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetNextChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 24465332\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetNextChild function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemIdValue* cookie_ptr=(Luna< wxTreeItemIdValue >::check(L,3));
		if( !cookie_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cookie in wxTreeCtrl::GetNextChild function");
		}
		wxTreeItemIdValue & cookie=*cookie_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetNextChild(const wxTreeItemId &, wxTreeItemIdValue &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetNextChild(item, cookie);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetNextSibling(const wxTreeItemId & item) const
	static int _bind_GetNextSibling(lua_State *L) {
		if (!_lg_typecheck_GetNextSibling(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetNextSibling(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetNextSibling(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetNextSibling function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetNextSibling(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetNextSibling(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetNextVisible(const wxTreeItemId & item) const
	static int _bind_GetNextVisible(lua_State *L) {
		if (!_lg_typecheck_GetNextVisible(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetNextVisible(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetNextVisible(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetNextVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetNextVisible(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetNextVisible(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetPrevSibling(const wxTreeItemId & item) const
	static int _bind_GetPrevSibling(lua_State *L) {
		if (!_lg_typecheck_GetPrevSibling(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetPrevSibling(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetPrevSibling(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetPrevSibling function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetPrevSibling(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetPrevSibling(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetPrevVisible(const wxTreeItemId & item) const
	static int _bind_GetPrevVisible(lua_State *L) {
		if (!_lg_typecheck_GetPrevVisible(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetPrevVisible(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetPrevVisible(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::GetPrevVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetPrevVisible(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetPrevVisible(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// bool wxTreeCtrl::GetQuickBestSize() const
	static int _bind_GetQuickBestSize(lua_State *L) {
		if (!_lg_typecheck_GetQuickBestSize(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::GetQuickBestSize() const function, expected prototype:\nbool wxTreeCtrl::GetQuickBestSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::GetQuickBestSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetQuickBestSize();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetRootItem() const
	static int _bind_GetRootItem(lua_State *L) {
		if (!_lg_typecheck_GetRootItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetRootItem() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetRootItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetRootItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetRootItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::GetSelection() const
	static int _bind_GetSelection(lua_State *L) {
		if (!_lg_typecheck_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::GetSelection() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->GetSelection();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// size_t wxTreeCtrl::GetSelections(wxArrayTreeItemIds & selection) const
	static int _bind_GetSelections(lua_State *L) {
		if (!_lg_typecheck_GetSelections(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxTreeCtrl::GetSelections(wxArrayTreeItemIds & selection) const function, expected prototype:\nsize_t wxTreeCtrl::GetSelections(wxArrayTreeItemIds & selection) const\nClass arguments details:\narg 1 ID = 99349677\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayTreeItemIds* selection_ptr=(Luna< wxArrayTreeItemIds >::check(L,2));
		if( !selection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg selection in wxTreeCtrl::GetSelections function");
		}
		wxArrayTreeItemIds & selection=*selection_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxTreeCtrl::GetSelections(wxArrayTreeItemIds &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetSelections(selection);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxImageList * wxTreeCtrl::GetStateImageList() const
	static int _bind_GetStateImageList(lua_State *L) {
		if (!_lg_typecheck_GetStateImageList(L)) {
			luaL_error(L, "luna typecheck failed in wxImageList * wxTreeCtrl::GetStateImageList() const function, expected prototype:\nwxImageList * wxTreeCtrl::GetStateImageList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImageList * wxTreeCtrl::GetStateImageList() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImageList * lret = self->GetStateImageList();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImageList >::push(L,lret,false);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::HitTest(const wxPoint & point, int & flags) const
	static int _bind_HitTest(lua_State *L) {
		if (!_lg_typecheck_HitTest(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::HitTest(const wxPoint & point, int & flags) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::HitTest(const wxPoint & point, int & flags) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxTreeCtrl::HitTest function");
		}
		const wxPoint & point=*point_ptr;
		int flags=(int)lua_tointeger(L,3);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::HitTest(const wxPoint &, int &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->HitTest(point, flags);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		lua_pushnumber(L,flags);
		return 2;
	}

	// wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, const wxTreeItemId & previous, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	static int _bind_InsertItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, const wxTreeItemId & previous, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) function, expected prototype:\nwxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, const wxTreeItemId & previous, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 28400299\narg 3 ID = 88196105\narg 6 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* parent_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeCtrl::InsertItem function");
		}
		const wxTreeItemId & parent=*parent_ptr;
		const wxTreeItemId* previous_ptr=(Luna< wxTreeItemId >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxTreeCtrl::InsertItem function");
		}
		const wxTreeItemId & previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		int image=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int selImage=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		wxTreeItemData* data=luatop>6 ? (Luna< wxClientData >::checkSubType< wxTreeItemData >(L,7)) : (wxTreeItemData*)NULL;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId &, const wxTreeItemId &, const wxString &, int, int, wxTreeItemData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->InsertItem(parent, previous, text, image, selImage, data);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, size_t before, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	static int _bind_InsertItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, size_t before, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) function, expected prototype:\nwxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId & parent, size_t before, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)\nClass arguments details:\narg 1 ID = 28400299\narg 3 ID = 88196105\narg 6 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* parent_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeCtrl::InsertItem function");
		}
		const wxTreeItemId & parent=*parent_ptr;
		size_t before=(size_t)lua_tointeger(L,3);
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		int image=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int selImage=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		wxTreeItemData* data=luatop>6 ? (Luna< wxClientData >::checkSubType< wxTreeItemData >(L,7)) : (wxTreeItemData*)NULL;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::InsertItem(const wxTreeItemId &, size_t, const wxString &, int, int, wxTreeItemData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->InsertItem(parent, before, text, image, selImage, data);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// Overload binder for wxTreeCtrl::InsertItem
	static int _bind_InsertItem(lua_State *L) {
		if (_lg_typecheck_InsertItem_overload_1(L)) return _bind_InsertItem_overload_1(L);
		if (_lg_typecheck_InsertItem_overload_2(L)) return _bind_InsertItem_overload_2(L);

		luaL_error(L, "error in function InsertItem, cannot match any of the overloads for function InsertItem:\n  InsertItem(const wxTreeItemId &, const wxTreeItemId &, const wxString &, int, int, wxTreeItemData *)\n  InsertItem(const wxTreeItemId &, size_t, const wxString &, int, int, wxTreeItemData *)\n");
		return 0;
	}

	// bool wxTreeCtrl::IsBold(const wxTreeItemId & item) const
	static int _bind_IsBold(lua_State *L) {
		if (!_lg_typecheck_IsBold(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::IsBold(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::IsBold(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::IsBold function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::IsBold(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsBold(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::IsEmpty() const
	static int _bind_IsEmpty(lua_State *L) {
		if (!_lg_typecheck_IsEmpty(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::IsEmpty() const function, expected prototype:\nbool wxTreeCtrl::IsEmpty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::IsEmpty() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::IsExpanded(const wxTreeItemId & item) const
	static int _bind_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_IsExpanded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::IsExpanded(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::IsExpanded(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::IsExpanded function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::IsExpanded(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsExpanded(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::IsSelected(const wxTreeItemId & item) const
	static int _bind_IsSelected(lua_State *L) {
		if (!_lg_typecheck_IsSelected(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::IsSelected(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::IsSelected(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::IsSelected function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::IsSelected(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsSelected(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::IsVisible(const wxTreeItemId & item) const
	static int _bind_IsVisible(lua_State *L) {
		if (!_lg_typecheck_IsVisible(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::IsVisible(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::IsVisible(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::IsVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::IsVisible(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsVisible(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::ItemHasChildren(const wxTreeItemId & item) const
	static int _bind_ItemHasChildren(lua_State *L) {
		if (!_lg_typecheck_ItemHasChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::ItemHasChildren(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::ItemHasChildren(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::ItemHasChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::ItemHasChildren(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemHasChildren(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxTreeCtrl::OnCompareItems(const wxTreeItemId & item1, const wxTreeItemId & item2)
	static int _bind_OnCompareItems(lua_State *L) {
		if (!_lg_typecheck_OnCompareItems(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::OnCompareItems(const wxTreeItemId & item1, const wxTreeItemId & item2) function, expected prototype:\nint wxTreeCtrl::OnCompareItems(const wxTreeItemId & item1, const wxTreeItemId & item2)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item1_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item1 in wxTreeCtrl::OnCompareItems function");
		}
		const wxTreeItemId & item1=*item1_ptr;
		const wxTreeItemId* item2_ptr=(Luna< wxTreeItemId >::check(L,3));
		if( !item2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item2 in wxTreeCtrl::OnCompareItems function");
		}
		const wxTreeItemId & item2=*item2_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::OnCompareItems(const wxTreeItemId &, const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->OnCompareItems(item1, item2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::PrependItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	static int _bind_PrependItem(lua_State *L) {
		if (!_lg_typecheck_PrependItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::PrependItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) function, expected prototype:\nwxTreeItemId wxTreeCtrl::PrependItem(const wxTreeItemId & parent, const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 88196105\narg 5 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* parent_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeCtrl::PrependItem function");
		}
		const wxTreeItemId & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		int image=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int selImage=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		wxTreeItemData* data=luatop>5 ? (Luna< wxClientData >::checkSubType< wxTreeItemData >(L,6)) : (wxTreeItemData*)NULL;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::PrependItem(const wxTreeItemId &, const wxString &, int, int, wxTreeItemData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->PrependItem(parent, text, image, selImage, data);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// void wxTreeCtrl::ScrollTo(const wxTreeItemId & item)
	static int _bind_ScrollTo(lua_State *L) {
		if (!_lg_typecheck_ScrollTo(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::ScrollTo(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::ScrollTo(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::ScrollTo function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::ScrollTo(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScrollTo(item);

		return 0;
	}

	// void wxTreeCtrl::SelectItem(const wxTreeItemId & item, bool select = true)
	static int _bind_SelectItem(lua_State *L) {
		if (!_lg_typecheck_SelectItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SelectItem(const wxTreeItemId & item, bool select = true) function, expected prototype:\nvoid wxTreeCtrl::SelectItem(const wxTreeItemId & item, bool select = true)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SelectItem function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool select=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SelectItem(const wxTreeItemId &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectItem(item, select);

		return 0;
	}

	// void wxTreeCtrl::SetImageList(wxImageList * imageList)
	static int _bind_SetImageList(lua_State *L) {
		if (!_lg_typecheck_SetImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeCtrl::SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetImageList(imageList);

		return 0;
	}

	// void wxTreeCtrl::SetIndent(unsigned int indent)
	static int _bind_SetIndent(lua_State *L) {
		if (!_lg_typecheck_SetIndent(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetIndent(unsigned int indent) function, expected prototype:\nvoid wxTreeCtrl::SetIndent(unsigned int indent)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int indent=(unsigned int)lua_tointeger(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetIndent(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetIndent(indent);

		return 0;
	}

	// void wxTreeCtrl::SetItemBackgroundColour(const wxTreeItemId & item, const wxColour & col)
	static int _bind_SetItemBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetItemBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemBackgroundColour(const wxTreeItemId & item, const wxColour & col) function, expected prototype:\nvoid wxTreeCtrl::SetItemBackgroundColour(const wxTreeItemId & item, const wxColour & col)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemBackgroundColour function");
		}
		const wxTreeItemId & item=*item_ptr;
		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxTreeCtrl::SetItemBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemBackgroundColour(const wxTreeItemId &, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemBackgroundColour(item, col);

		return 0;
	}

	// void wxTreeCtrl::SetItemBold(const wxTreeItemId & item, bool bold = true)
	static int _bind_SetItemBold(lua_State *L) {
		if (!_lg_typecheck_SetItemBold(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemBold(const wxTreeItemId & item, bool bold = true) function, expected prototype:\nvoid wxTreeCtrl::SetItemBold(const wxTreeItemId & item, bool bold = true)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemBold function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool bold=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemBold(const wxTreeItemId &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemBold(item, bold);

		return 0;
	}

	// void wxTreeCtrl::SetItemData(const wxTreeItemId & item, wxTreeItemData * data)
	static int _bind_SetItemData(lua_State *L) {
		if (!_lg_typecheck_SetItemData(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemData(const wxTreeItemId & item, wxTreeItemData * data) function, expected prototype:\nvoid wxTreeCtrl::SetItemData(const wxTreeItemId & item, wxTreeItemData * data)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemData function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemData* data=(Luna< wxClientData >::checkSubType< wxTreeItemData >(L,3));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemData(const wxTreeItemId &, wxTreeItemData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemData(item, data);

		return 0;
	}

	// void wxTreeCtrl::SetItemDropHighlight(const wxTreeItemId & item, bool highlight = true)
	static int _bind_SetItemDropHighlight(lua_State *L) {
		if (!_lg_typecheck_SetItemDropHighlight(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemDropHighlight(const wxTreeItemId & item, bool highlight = true) function, expected prototype:\nvoid wxTreeCtrl::SetItemDropHighlight(const wxTreeItemId & item, bool highlight = true)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemDropHighlight function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool highlight=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemDropHighlight(const wxTreeItemId &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemDropHighlight(item, highlight);

		return 0;
	}

	// void wxTreeCtrl::SetItemFont(const wxTreeItemId & item, const wxFont & font)
	static int _bind_SetItemFont(lua_State *L) {
		if (!_lg_typecheck_SetItemFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemFont(const wxTreeItemId & item, const wxFont & font) function, expected prototype:\nvoid wxTreeCtrl::SetItemFont(const wxTreeItemId & item, const wxFont & font)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemFont function");
		}
		const wxTreeItemId & item=*item_ptr;
		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,3));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTreeCtrl::SetItemFont function");
		}
		const wxFont & font=*font_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemFont(const wxTreeItemId &, const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemFont(item, font);

		return 0;
	}

	// void wxTreeCtrl::SetItemHasChildren(const wxTreeItemId & item, bool hasChildren = true)
	static int _bind_SetItemHasChildren(lua_State *L) {
		if (!_lg_typecheck_SetItemHasChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemHasChildren(const wxTreeItemId & item, bool hasChildren = true) function, expected prototype:\nvoid wxTreeCtrl::SetItemHasChildren(const wxTreeItemId & item, bool hasChildren = true)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemHasChildren function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool hasChildren=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemHasChildren(const wxTreeItemId &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemHasChildren(item, hasChildren);

		return 0;
	}

	// void wxTreeCtrl::SetItemImage(const wxTreeItemId & item, int image, wxTreeItemIcon which = ::wxTreeItemIcon_Normal)
	static int _bind_SetItemImage(lua_State *L) {
		if (!_lg_typecheck_SetItemImage(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemImage(const wxTreeItemId & item, int image, wxTreeItemIcon which = ::wxTreeItemIcon_Normal) function, expected prototype:\nvoid wxTreeCtrl::SetItemImage(const wxTreeItemId & item, int image, wxTreeItemIcon which = ::wxTreeItemIcon_Normal)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemImage function");
		}
		const wxTreeItemId & item=*item_ptr;
		int image=(int)lua_tointeger(L,3);
		wxTreeItemIcon which=luatop>3 ? (wxTreeItemIcon)lua_tointeger(L,4) : (wxTreeItemIcon)::wxTreeItemIcon_Normal;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemImage(const wxTreeItemId &, int, wxTreeItemIcon). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemImage(item, image, which);

		return 0;
	}

	// void wxTreeCtrl::SetItemState(const wxTreeItemId & item, int state)
	static int _bind_SetItemState(lua_State *L) {
		if (!_lg_typecheck_SetItemState(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemState(const wxTreeItemId & item, int state) function, expected prototype:\nvoid wxTreeCtrl::SetItemState(const wxTreeItemId & item, int state)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemState function");
		}
		const wxTreeItemId & item=*item_ptr;
		int state=(int)lua_tointeger(L,3);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemState(const wxTreeItemId &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemState(item, state);

		return 0;
	}

	// void wxTreeCtrl::SetItemText(const wxTreeItemId & item, const wxString & text)
	static int _bind_SetItemText(lua_State *L) {
		if (!_lg_typecheck_SetItemText(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemText(const wxTreeItemId & item, const wxString & text) function, expected prototype:\nvoid wxTreeCtrl::SetItemText(const wxTreeItemId & item, const wxString & text)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemText function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemText(const wxTreeItemId &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemText(item, text);

		return 0;
	}

	// void wxTreeCtrl::SetItemTextColour(const wxTreeItemId & item, const wxColour & col)
	static int _bind_SetItemTextColour(lua_State *L) {
		if (!_lg_typecheck_SetItemTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetItemTextColour(const wxTreeItemId & item, const wxColour & col) function, expected prototype:\nvoid wxTreeCtrl::SetItemTextColour(const wxTreeItemId & item, const wxColour & col)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SetItemTextColour function");
		}
		const wxTreeItemId & item=*item_ptr;
		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxTreeCtrl::SetItemTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetItemTextColour(const wxTreeItemId &, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemTextColour(item, col);

		return 0;
	}

	// void wxTreeCtrl::SetQuickBestSize(bool quickBestSize)
	static int _bind_SetQuickBestSize(lua_State *L) {
		if (!_lg_typecheck_SetQuickBestSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetQuickBestSize(bool quickBestSize) function, expected prototype:\nvoid wxTreeCtrl::SetQuickBestSize(bool quickBestSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool quickBestSize=(bool)(lua_toboolean(L,2)==1);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetQuickBestSize(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetQuickBestSize(quickBestSize);

		return 0;
	}

	// void wxTreeCtrl::SetStateImageList(wxImageList * imageList)
	static int _bind_SetStateImageList(lua_State *L) {
		if (!_lg_typecheck_SetStateImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetStateImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeCtrl::SetStateImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetStateImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetStateImageList(imageList);

		return 0;
	}

	// void wxTreeCtrl::SetWindowStyle(long styles)
	static int _bind_SetWindowStyle(lua_State *L) {
		if (!_lg_typecheck_SetWindowStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SetWindowStyle(long styles) function, expected prototype:\nvoid wxTreeCtrl::SetWindowStyle(long styles)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long styles=(long)lua_tonumber(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SetWindowStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWindowStyle(styles);

		return 0;
	}

	// void wxTreeCtrl::SortChildren(const wxTreeItemId & item)
	static int _bind_SortChildren(lua_State *L) {
		if (!_lg_typecheck_SortChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SortChildren(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::SortChildren(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::SortChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SortChildren(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SortChildren(item);

		return 0;
	}

	// void wxTreeCtrl::Toggle(const wxTreeItemId & item)
	static int _bind_Toggle(lua_State *L) {
		if (!_lg_typecheck_Toggle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::Toggle(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::Toggle(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::Toggle function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::Toggle(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Toggle(item);

		return 0;
	}

	// void wxTreeCtrl::ToggleItemSelection(const wxTreeItemId & item)
	static int _bind_ToggleItemSelection(lua_State *L) {
		if (!_lg_typecheck_ToggleItemSelection(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::ToggleItemSelection(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::ToggleItemSelection(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::ToggleItemSelection function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::ToggleItemSelection(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ToggleItemSelection(item);

		return 0;
	}

	// void wxTreeCtrl::Unselect()
	static int _bind_Unselect(lua_State *L) {
		if (!_lg_typecheck_Unselect(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::Unselect() function, expected prototype:\nvoid wxTreeCtrl::Unselect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::Unselect(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Unselect();

		return 0;
	}

	// void wxTreeCtrl::UnselectAll()
	static int _bind_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_UnselectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::UnselectAll() function, expected prototype:\nvoid wxTreeCtrl::UnselectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::UnselectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnselectAll();

		return 0;
	}

	// void wxTreeCtrl::UnselectItem(const wxTreeItemId & item)
	static int _bind_UnselectItem(lua_State *L) {
		if (!_lg_typecheck_UnselectItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::UnselectItem(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::UnselectItem(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::UnselectItem function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::UnselectItem(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->UnselectItem(item);

		return 0;
	}

	// void wxTreeCtrl::SelectChildren(const wxTreeItemId & parent)
	static int _bind_SelectChildren(lua_State *L) {
		if (!_lg_typecheck_SelectChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::SelectChildren(const wxTreeItemId & parent) function, expected prototype:\nvoid wxTreeCtrl::SelectChildren(const wxTreeItemId & parent)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* parent_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeCtrl::SelectChildren function");
		}
		const wxTreeItemId & parent=*parent_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::SelectChildren(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SelectChildren(parent);

		return 0;
	}

	// wxClassInfo * wxTreeCtrl::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxTreeCtrl::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxTreeCtrl::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxTreeCtrl::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxTreeCtrl::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxTreeCtrl::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_AcceptsFocus() const function, expected prototype:\nbool wxTreeCtrl::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxTreeCtrl::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxTreeCtrl::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_HasFocus() const function, expected prototype:\nbool wxTreeCtrl::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxTreeCtrl::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetCanFocus(canFocus);

		return 0;
	}

	// void wxTreeCtrl::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetFocus() function, expected prototype:\nvoid wxTreeCtrl::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetFocus();

		return 0;
	}

	// void wxTreeCtrl::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetFocusFromKbd() function, expected prototype:\nvoid wxTreeCtrl::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetFocusFromKbd();

		return 0;
	}

	// void wxTreeCtrl::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxTreeCtrl::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::AddChild(child);

		return 0;
	}

	// void wxTreeCtrl::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxTreeCtrl::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::RemoveChild(child);

		return 0;
	}

	// bool wxTreeCtrl::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxTreeCtrl::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxTreeCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxTreeCtrl::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxTreeCtrl::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeCtrl::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTreeCtrl::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxTreeCtrl::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeCtrl::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTreeCtrl::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxTreeCtrl::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeCtrl::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTreeCtrl::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxTreeCtrl::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_ScrollLines(int lines) function, expected prototype:\nbool wxTreeCtrl::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_ScrollPages(int pages) function, expected prototype:\nbool wxTreeCtrl::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxTreeCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxTreeCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxTreeCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxTreeCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxTreeCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxTreeCtrl::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeCtrl::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxTreeCtrl::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeCtrl::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeCtrl::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeCtrl::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeCtrl::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeCtrl::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxTreeCtrl::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeCtrl::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeCtrl::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeCtrl::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxTreeCtrl::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_Fit() function, expected prototype:\nvoid wxTreeCtrl::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::Fit();

		return 0;
	}

	// void wxTreeCtrl::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_FitInside() function, expected prototype:\nvoid wxTreeCtrl::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::FitInside();

		return 0;
	}

	// wxSize wxTreeCtrl::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeCtrl::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxTreeCtrl::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeCtrl::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeCtrl::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeCtrl::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeCtrl::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxTreeCtrl::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeCtrl::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeCtrl::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeCtrl::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeCtrl::base_GetMaxSize() const function, expected prototype:\nwxSize wxTreeCtrl::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeCtrl::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeCtrl::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeCtrl::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeCtrl::base_GetMinClientSize() const function, expected prototype:\nwxSize wxTreeCtrl::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeCtrl::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeCtrl::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeCtrl::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeCtrl::base_GetMinSize() const function, expected prototype:\nwxSize wxTreeCtrl::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeCtrl::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeCtrl::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeCtrl::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeCtrl::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxTreeCtrl::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeCtrl::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeCtrl::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxTreeCtrl::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxTreeCtrl::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxTreeCtrl::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxTreeCtrl::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxTreeCtrl::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxTreeCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxTreeCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxTreeCtrl::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SendSizeEvent(flags);

		return 0;
	}

	// void wxTreeCtrl::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxTreeCtrl::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeCtrl::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetMaxClientSize(size);

		return 0;
	}

	// void wxTreeCtrl::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxTreeCtrl::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeCtrl::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetMaxSize(size);

		return 0;
	}

	// void wxTreeCtrl::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxTreeCtrl::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeCtrl::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetMinClientSize(size);

		return 0;
	}

	// void wxTreeCtrl::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxTreeCtrl::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxTreeCtrl::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetMinSize(size);

		return 0;
	}

	// void wxTreeCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxTreeCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxTreeCtrl::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxTreeCtrl::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxTreeCtrl::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxTreeCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxTreeCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxTreeCtrl::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxTreeCtrl::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxTreeCtrl::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxTreeCtrl::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxTreeCtrl::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxTreeCtrl::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxTreeCtrl::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_ClearBackground() function, expected prototype:\nvoid wxTreeCtrl::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxTreeCtrl::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxTreeCtrl::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxTreeCtrl::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxTreeCtrl::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxTreeCtrl::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTreeCtrl::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::base_GetCharHeight() const function, expected prototype:\nint wxTreeCtrl::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeCtrl::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxTreeCtrl::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::base_GetCharWidth() const function, expected prototype:\nint wxTreeCtrl::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeCtrl::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxTreeCtrl::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxTreeCtrl::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxTreeCtrl::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxTreeCtrl::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxTreeCtrl::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxTreeCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxTreeCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxTreeCtrl::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_Update() function, expected prototype:\nvoid wxTreeCtrl::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::Update();

		return 0;
	}

	// bool wxTreeCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxTreeCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxTreeCtrl::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTreeCtrl::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_ShouldInheritColours() const function, expected prototype:\nbool wxTreeCtrl::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxTreeCtrl::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxTreeCtrl::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_GetThemeEnabled() const function, expected prototype:\nbool wxTreeCtrl::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_CanSetTransparent() function, expected prototype:\nbool wxTreeCtrl::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxTreeCtrl::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTreeCtrl::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetNextHandler(handler);

		return 0;
	}

	// void wxTreeCtrl::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxTreeCtrl::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetPreviousHandler(handler);

		return 0;
	}

	// long wxTreeCtrl::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxTreeCtrl::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxTreeCtrl::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxTreeCtrl::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxTreeCtrl::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTreeCtrl::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxTreeCtrl::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxTreeCtrl::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxTreeCtrl::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetWindowStyleFlag(style);

		return 0;
	}

	// void wxTreeCtrl::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_Lower() function, expected prototype:\nvoid wxTreeCtrl::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::Lower();

		return 0;
	}

	// void wxTreeCtrl::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_Raise() function, expected prototype:\nvoid wxTreeCtrl::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::Raise();

		return 0;
	}

	// bool wxTreeCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxTreeCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_IsShown() const function, expected prototype:\nbool wxTreeCtrl::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_IsShownOnScreen() const function, expected prototype:\nbool wxTreeCtrl::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_Enable(bool enable = true) function, expected prototype:\nbool wxTreeCtrl::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_Show(bool show = true) function, expected prototype:\nbool wxTreeCtrl::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxTreeCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxTreeCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTreeCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxTreeCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxTreeCtrl::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTreeCtrl::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTreeCtrl::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxTreeCtrl::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxTreeCtrl::base_GetValidator() function, expected prototype:\nwxValidator * wxTreeCtrl::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxTreeCtrl::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxTreeCtrl::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxTreeCtrl::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxTreeCtrl::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxTreeCtrl::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetValidator(validator);

		return 0;
	}

	// bool wxTreeCtrl::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_TransferDataFromWindow() function, expected prototype:\nbool wxTreeCtrl::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_TransferDataToWindow() function, expected prototype:\nbool wxTreeCtrl::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_Validate() function, expected prototype:\nbool wxTreeCtrl::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxTreeCtrl::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxTreeCtrl::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxTreeCtrl::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxTreeCtrl::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxTreeCtrl::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxTreeCtrl::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTreeCtrl::base_GetName() const function, expected prototype:\nwxString wxTreeCtrl::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTreeCtrl::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTreeCtrl::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTreeCtrl::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxTreeCtrl::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetLayoutDirection(dir);

		return 0;
	}

	// void wxTreeCtrl::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetName(const wxString & name) function, expected prototype:\nvoid wxTreeCtrl::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetName(name);

		return 0;
	}

	// void wxTreeCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxTreeCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxTreeCtrl::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxTreeCtrl::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_Destroy() function, expected prototype:\nbool wxTreeCtrl::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxTreeCtrl::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxTreeCtrl::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxTreeCtrl::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxTreeCtrl::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxTreeCtrl::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxTreeCtrl::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxTreeCtrl::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetDropTarget(target);

		return 0;
	}

	// void wxTreeCtrl::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxTreeCtrl::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxTreeCtrl::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_Layout() function, expected prototype:\nbool wxTreeCtrl::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_HasCapture() const function, expected prototype:\nbool wxTreeCtrl::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxTreeCtrl::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxTreeCtrl::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxTreeCtrl::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::WarpPointer(x, y);

		return 0;
	}

	// void wxTreeCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxTreeCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTreeCtrl::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxTreeCtrl::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxTreeCtrl::base_GetHandle() const function, expected prototype:\nHWND wxTreeCtrl::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxTreeCtrl::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxTreeCtrl::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxTreeCtrl::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_HasMultiplePages() const function, expected prototype:\nbool wxTreeCtrl::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_InheritAttributes() function, expected prototype:\nvoid wxTreeCtrl::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::InheritAttributes();

		return 0;
	}

	// void wxTreeCtrl::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_InitDialog() function, expected prototype:\nvoid wxTreeCtrl::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::InitDialog();

		return 0;
	}

	// bool wxTreeCtrl::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_IsRetained() const function, expected prototype:\nbool wxTreeCtrl::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_IsTopLevel() const function, expected prototype:\nbool wxTreeCtrl::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxTreeCtrl::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::MakeModal(modal);

		return 0;
	}

	// void wxTreeCtrl::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_OnInternalIdle() function, expected prototype:\nvoid wxTreeCtrl::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::OnInternalIdle();

		return 0;
	}

	// bool wxTreeCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxTreeCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxTreeCtrl::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxTreeCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxTreeCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::UpdateWindowUI(flags);

		return 0;
	}

	// void wxTreeCtrl::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxTreeCtrl::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxTreeCtrl::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::Command(event);

		return 0;
	}

	// wxString wxTreeCtrl::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTreeCtrl::base_GetLabel() const function, expected prototype:\nwxString wxTreeCtrl::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTreeCtrl::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTreeCtrl::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxTreeCtrl::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxTreeCtrl::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetLabel(label);

		return 0;
	}

	// wxTreeItemId wxTreeCtrl::base_AddRoot(const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	static int _bind_base_AddRoot(lua_State *L) {
		if (!_lg_typecheck_base_AddRoot(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_AddRoot(const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_AddRoot(const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)\nClass arguments details:\narg 1 ID = 88196105\narg 4 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxString text(lua_tostring(L,2),lua_objlen(L,2));
		int image=luatop>2 ? (int)lua_tointeger(L,3) : (int)-1;
		int selImage=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		wxTreeItemData* data=luatop>4 ? (Luna< wxClientData >::checkSubType< wxTreeItemData >(L,5)) : (wxTreeItemData*)NULL;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_AddRoot(const wxString &, int, int, wxTreeItemData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::AddRoot(text, image, selImage, data);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// void wxTreeCtrl::base_Collapse(const wxTreeItemId & item)
	static int _bind_base_Collapse(lua_State *L) {
		if (!_lg_typecheck_base_Collapse(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_Collapse(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::base_Collapse(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_Collapse function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_Collapse(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::Collapse(item);

		return 0;
	}

	// void wxTreeCtrl::base_CollapseAndReset(const wxTreeItemId & item)
	static int _bind_base_CollapseAndReset(lua_State *L) {
		if (!_lg_typecheck_base_CollapseAndReset(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_CollapseAndReset(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::base_CollapseAndReset(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_CollapseAndReset function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_CollapseAndReset(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::CollapseAndReset(item);

		return 0;
	}

	// void wxTreeCtrl::base_Delete(const wxTreeItemId & item)
	static int _bind_base_Delete(lua_State *L) {
		if (!_lg_typecheck_base_Delete(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_Delete(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::base_Delete(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_Delete function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_Delete(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::Delete(item);

		return 0;
	}

	// void wxTreeCtrl::base_DeleteAllItems()
	static int _bind_base_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_base_DeleteAllItems(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_DeleteAllItems() function, expected prototype:\nvoid wxTreeCtrl::base_DeleteAllItems()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_DeleteAllItems(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::DeleteAllItems();

		return 0;
	}

	// void wxTreeCtrl::base_DeleteChildren(const wxTreeItemId & item)
	static int _bind_base_DeleteChildren(lua_State *L) {
		if (!_lg_typecheck_base_DeleteChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_DeleteChildren(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::base_DeleteChildren(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_DeleteChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_DeleteChildren(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::DeleteChildren(item);

		return 0;
	}

	// wxTextCtrl * wxTreeCtrl::base_EditLabel(const wxTreeItemId & item, wxClassInfo * textCtrlClass = wxCLASSINFO ( wxTextCtrl ))
	static int _bind_base_EditLabel(lua_State *L) {
		if (!_lg_typecheck_base_EditLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxTreeCtrl::base_EditLabel(const wxTreeItemId & item, wxClassInfo * textCtrlClass = wxCLASSINFO ( wxTextCtrl )) function, expected prototype:\nwxTextCtrl * wxTreeCtrl::base_EditLabel(const wxTreeItemId & item, wxClassInfo * textCtrlClass = wxCLASSINFO ( wxTextCtrl ))\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 96106697\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_EditLabel function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxClassInfo* textCtrlClass=luatop>2 ? (Luna< wxClassInfo >::check(L,3)) : (wxClassInfo*)wxCLASSINFO ( wxTextCtrl );

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxTreeCtrl::base_EditLabel(const wxTreeItemId &, wxClassInfo *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextCtrl * lret = self->wxTreeCtrl::EditLabel(item, textCtrlClass);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// void wxTreeCtrl::base_EndEditLabel(const wxTreeItemId & item, bool discardChanges = false)
	static int _bind_base_EndEditLabel(lua_State *L) {
		if (!_lg_typecheck_base_EndEditLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_EndEditLabel(const wxTreeItemId & item, bool discardChanges = false) function, expected prototype:\nvoid wxTreeCtrl::base_EndEditLabel(const wxTreeItemId & item, bool discardChanges = false)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_EndEditLabel function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool discardChanges=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_EndEditLabel(const wxTreeItemId &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::EndEditLabel(item, discardChanges);

		return 0;
	}

	// void wxTreeCtrl::base_EnsureVisible(const wxTreeItemId & item)
	static int _bind_base_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_base_EnsureVisible(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_EnsureVisible(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::base_EnsureVisible(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_EnsureVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_EnsureVisible(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::EnsureVisible(item);

		return 0;
	}

	// void wxTreeCtrl::base_Expand(const wxTreeItemId & item)
	static int _bind_base_Expand(lua_State *L) {
		if (!_lg_typecheck_base_Expand(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_Expand(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::base_Expand(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_Expand function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_Expand(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::Expand(item);

		return 0;
	}

	// bool wxTreeCtrl::base_GetBoundingRect(const wxTreeItemId & item, wxRect & rect, bool textOnly = false) const
	static int _bind_base_GetBoundingRect(lua_State *L) {
		if (!_lg_typecheck_base_GetBoundingRect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_GetBoundingRect(const wxTreeItemId & item, wxRect & rect, bool textOnly = false) const function, expected prototype:\nbool wxTreeCtrl::base_GetBoundingRect(const wxTreeItemId & item, wxRect & rect, bool textOnly = false) const\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetBoundingRect function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxTreeCtrl::base_GetBoundingRect function");
		}
		wxRect & rect=*rect_ptr;
		bool textOnly=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_GetBoundingRect(const wxTreeItemId &, wxRect &, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::GetBoundingRect(item, rect, textOnly);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// size_t wxTreeCtrl::base_GetChildrenCount(const wxTreeItemId & item, bool recursively = true) const
	static int _bind_base_GetChildrenCount(lua_State *L) {
		if (!_lg_typecheck_base_GetChildrenCount(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxTreeCtrl::base_GetChildrenCount(const wxTreeItemId & item, bool recursively = true) const function, expected prototype:\nsize_t wxTreeCtrl::base_GetChildrenCount(const wxTreeItemId & item, bool recursively = true) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetChildrenCount function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool recursively=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxTreeCtrl::base_GetChildrenCount(const wxTreeItemId &, bool) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxTreeCtrl::GetChildrenCount(item, recursively);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxTreeCtrl::base_GetCount() const
	static int _bind_base_GetCount(lua_State *L) {
		if (!_lg_typecheck_base_GetCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxTreeCtrl::base_GetCount() const function, expected prototype:\nunsigned int wxTreeCtrl::base_GetCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxTreeCtrl::base_GetCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->wxTreeCtrl::GetCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextCtrl * wxTreeCtrl::base_GetEditControl() const
	static int _bind_base_GetEditControl(lua_State *L) {
		if (!_lg_typecheck_base_GetEditControl(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxTreeCtrl::base_GetEditControl() const function, expected prototype:\nwxTextCtrl * wxTreeCtrl::base_GetEditControl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxTreeCtrl::base_GetEditControl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextCtrl * lret = self->wxTreeCtrl::GetEditControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetFirstChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const
	static int _bind_base_GetFirstChild(lua_State *L) {
		if (!_lg_typecheck_base_GetFirstChild(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetFirstChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetFirstChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 24465332\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetFirstChild function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemIdValue* cookie_ptr=(Luna< wxTreeItemIdValue >::check(L,3));
		if( !cookie_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cookie in wxTreeCtrl::base_GetFirstChild function");
		}
		wxTreeItemIdValue & cookie=*cookie_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetFirstChild(const wxTreeItemId &, wxTreeItemIdValue &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetFirstChild(item, cookie);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetFirstVisibleItem() const
	static int _bind_base_GetFirstVisibleItem(lua_State *L) {
		if (!_lg_typecheck_base_GetFirstVisibleItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetFirstVisibleItem() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetFirstVisibleItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetFirstVisibleItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetFirstVisibleItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetFocusedItem() const
	static int _bind_base_GetFocusedItem(lua_State *L) {
		if (!_lg_typecheck_base_GetFocusedItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetFocusedItem() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetFocusedItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetFocusedItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetFocusedItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// void wxTreeCtrl::base_ClearFocusedItem()
	static int _bind_base_ClearFocusedItem(lua_State *L) {
		if (!_lg_typecheck_base_ClearFocusedItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_ClearFocusedItem() function, expected prototype:\nvoid wxTreeCtrl::base_ClearFocusedItem()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_ClearFocusedItem(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::ClearFocusedItem();

		return 0;
	}

	// void wxTreeCtrl::base_SetFocusedItem(const wxTreeItemId & item)
	static int _bind_base_SetFocusedItem(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusedItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetFocusedItem(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::base_SetFocusedItem(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SetFocusedItem function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetFocusedItem(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetFocusedItem(item);

		return 0;
	}

	// unsigned int wxTreeCtrl::base_GetIndent() const
	static int _bind_base_GetIndent(lua_State *L) {
		if (!_lg_typecheck_base_GetIndent(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxTreeCtrl::base_GetIndent() const function, expected prototype:\nunsigned int wxTreeCtrl::base_GetIndent() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxTreeCtrl::base_GetIndent() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->wxTreeCtrl::GetIndent();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxColour wxTreeCtrl::base_GetItemBackgroundColour(const wxTreeItemId & item) const
	static int _bind_base_GetItemBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_base_GetItemBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxTreeCtrl::base_GetItemBackgroundColour(const wxTreeItemId & item) const function, expected prototype:\nwxColour wxTreeCtrl::base_GetItemBackgroundColour(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetItemBackgroundColour function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxTreeCtrl::base_GetItemBackgroundColour(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->wxTreeCtrl::GetItemBackgroundColour(item);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemData * wxTreeCtrl::base_GetItemData(const wxTreeItemId & item) const
	static int _bind_base_GetItemData(lua_State *L) {
		if (!_lg_typecheck_base_GetItemData(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemData * wxTreeCtrl::base_GetItemData(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemData * wxTreeCtrl::base_GetItemData(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetItemData function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemData * wxTreeCtrl::base_GetItemData(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemData * lret = self->wxTreeCtrl::GetItemData(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemData >::push(L,lret,false);

		return 1;
	}

	// wxFont wxTreeCtrl::base_GetItemFont(const wxTreeItemId & item) const
	static int _bind_base_GetItemFont(lua_State *L) {
		if (!_lg_typecheck_base_GetItemFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxTreeCtrl::base_GetItemFont(const wxTreeItemId & item) const function, expected prototype:\nwxFont wxTreeCtrl::base_GetItemFont(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetItemFont function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxTreeCtrl::base_GetItemFont(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->wxTreeCtrl::GetItemFont(item);
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// int wxTreeCtrl::base_GetItemImage(const wxTreeItemId & item, wxTreeItemIcon which = ::wxTreeItemIcon_Normal) const
	static int _bind_base_GetItemImage(lua_State *L) {
		if (!_lg_typecheck_base_GetItemImage(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::base_GetItemImage(const wxTreeItemId & item, wxTreeItemIcon which = ::wxTreeItemIcon_Normal) const function, expected prototype:\nint wxTreeCtrl::base_GetItemImage(const wxTreeItemId & item, wxTreeItemIcon which = ::wxTreeItemIcon_Normal) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetItemImage function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemIcon which=luatop>2 ? (wxTreeItemIcon)lua_tointeger(L,3) : (wxTreeItemIcon)::wxTreeItemIcon_Normal;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::base_GetItemImage(const wxTreeItemId &, wxTreeItemIcon) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeCtrl::GetItemImage(item, which);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetItemParent(const wxTreeItemId & item) const
	static int _bind_base_GetItemParent(lua_State *L) {
		if (!_lg_typecheck_base_GetItemParent(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetItemParent(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetItemParent(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetItemParent function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetItemParent(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetItemParent(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxString wxTreeCtrl::base_GetItemText(const wxTreeItemId & item) const
	static int _bind_base_GetItemText(lua_State *L) {
		if (!_lg_typecheck_base_GetItemText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxTreeCtrl::base_GetItemText(const wxTreeItemId & item) const function, expected prototype:\nwxString wxTreeCtrl::base_GetItemText(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetItemText function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxTreeCtrl::base_GetItemText(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxTreeCtrl::GetItemText(item);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxColour wxTreeCtrl::base_GetItemTextColour(const wxTreeItemId & item) const
	static int _bind_base_GetItemTextColour(lua_State *L) {
		if (!_lg_typecheck_base_GetItemTextColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxTreeCtrl::base_GetItemTextColour(const wxTreeItemId & item) const function, expected prototype:\nwxColour wxTreeCtrl::base_GetItemTextColour(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetItemTextColour function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxTreeCtrl::base_GetItemTextColour(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->wxTreeCtrl::GetItemTextColour(item);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetLastChild(const wxTreeItemId & item) const
	static int _bind_base_GetLastChild(lua_State *L) {
		if (!_lg_typecheck_base_GetLastChild(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetLastChild(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetLastChild(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetLastChild function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetLastChild(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetLastChild(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetNextChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const
	static int _bind_base_GetNextChild(lua_State *L) {
		if (!_lg_typecheck_base_GetNextChild(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetNextChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetNextChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 24465332\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetNextChild function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemIdValue* cookie_ptr=(Luna< wxTreeItemIdValue >::check(L,3));
		if( !cookie_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cookie in wxTreeCtrl::base_GetNextChild function");
		}
		wxTreeItemIdValue & cookie=*cookie_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetNextChild(const wxTreeItemId &, wxTreeItemIdValue &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetNextChild(item, cookie);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetNextSibling(const wxTreeItemId & item) const
	static int _bind_base_GetNextSibling(lua_State *L) {
		if (!_lg_typecheck_base_GetNextSibling(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetNextSibling(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetNextSibling(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetNextSibling function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetNextSibling(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetNextSibling(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetNextVisible(const wxTreeItemId & item) const
	static int _bind_base_GetNextVisible(lua_State *L) {
		if (!_lg_typecheck_base_GetNextVisible(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetNextVisible(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetNextVisible(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetNextVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetNextVisible(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetNextVisible(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetPrevSibling(const wxTreeItemId & item) const
	static int _bind_base_GetPrevSibling(lua_State *L) {
		if (!_lg_typecheck_base_GetPrevSibling(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetPrevSibling(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetPrevSibling(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetPrevSibling function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetPrevSibling(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetPrevSibling(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetPrevVisible(const wxTreeItemId & item) const
	static int _bind_base_GetPrevVisible(lua_State *L) {
		if (!_lg_typecheck_base_GetPrevVisible(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetPrevVisible(const wxTreeItemId & item) const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetPrevVisible(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_GetPrevVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetPrevVisible(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetPrevVisible(item);
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetRootItem() const
	static int _bind_base_GetRootItem(lua_State *L) {
		if (!_lg_typecheck_base_GetRootItem(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetRootItem() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetRootItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetRootItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetRootItem();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// wxTreeItemId wxTreeCtrl::base_GetSelection() const
	static int _bind_base_GetSelection(lua_State *L) {
		if (!_lg_typecheck_base_GetSelection(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemId wxTreeCtrl::base_GetSelection() const function, expected prototype:\nwxTreeItemId wxTreeCtrl::base_GetSelection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTreeItemId wxTreeCtrl::base_GetSelection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTreeItemId stack_lret = self->wxTreeCtrl::GetSelection();
		wxTreeItemId* lret = new wxTreeItemId(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,true);

		return 1;
	}

	// size_t wxTreeCtrl::base_GetSelections(wxArrayTreeItemIds & selection) const
	static int _bind_base_GetSelections(lua_State *L) {
		if (!_lg_typecheck_base_GetSelections(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxTreeCtrl::base_GetSelections(wxArrayTreeItemIds & selection) const function, expected prototype:\nsize_t wxTreeCtrl::base_GetSelections(wxArrayTreeItemIds & selection) const\nClass arguments details:\narg 1 ID = 99349677\n\n%s",luna_dumpStack(L).c_str());
		}

		wxArrayTreeItemIds* selection_ptr=(Luna< wxArrayTreeItemIds >::check(L,2));
		if( !selection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg selection in wxTreeCtrl::base_GetSelections function");
		}
		wxArrayTreeItemIds & selection=*selection_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxTreeCtrl::base_GetSelections(wxArrayTreeItemIds &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->wxTreeCtrl::GetSelections(selection);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxTreeCtrl::base_IsBold(const wxTreeItemId & item) const
	static int _bind_base_IsBold(lua_State *L) {
		if (!_lg_typecheck_base_IsBold(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_IsBold(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::base_IsBold(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_IsBold function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_IsBold(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::IsBold(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_IsExpanded(const wxTreeItemId & item) const
	static int _bind_base_IsExpanded(lua_State *L) {
		if (!_lg_typecheck_base_IsExpanded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_IsExpanded(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::base_IsExpanded(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_IsExpanded function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_IsExpanded(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::IsExpanded(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_IsSelected(const wxTreeItemId & item) const
	static int _bind_base_IsSelected(lua_State *L) {
		if (!_lg_typecheck_base_IsSelected(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_IsSelected(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::base_IsSelected(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_IsSelected function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_IsSelected(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::IsSelected(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_IsVisible(const wxTreeItemId & item) const
	static int _bind_base_IsVisible(lua_State *L) {
		if (!_lg_typecheck_base_IsVisible(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_IsVisible(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::base_IsVisible(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_IsVisible function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_IsVisible(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::IsVisible(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxTreeCtrl::base_ItemHasChildren(const wxTreeItemId & item) const
	static int _bind_base_ItemHasChildren(lua_State *L) {
		if (!_lg_typecheck_base_ItemHasChildren(L)) {
			luaL_error(L, "luna typecheck failed in bool wxTreeCtrl::base_ItemHasChildren(const wxTreeItemId & item) const function, expected prototype:\nbool wxTreeCtrl::base_ItemHasChildren(const wxTreeItemId & item) const\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_ItemHasChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxTreeCtrl::base_ItemHasChildren(const wxTreeItemId &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxTreeCtrl::ItemHasChildren(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxTreeCtrl::base_OnCompareItems(const wxTreeItemId & item1, const wxTreeItemId & item2)
	static int _bind_base_OnCompareItems(lua_State *L) {
		if (!_lg_typecheck_base_OnCompareItems(L)) {
			luaL_error(L, "luna typecheck failed in int wxTreeCtrl::base_OnCompareItems(const wxTreeItemId & item1, const wxTreeItemId & item2) function, expected prototype:\nint wxTreeCtrl::base_OnCompareItems(const wxTreeItemId & item1, const wxTreeItemId & item2)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item1_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item1 in wxTreeCtrl::base_OnCompareItems function");
		}
		const wxTreeItemId & item1=*item1_ptr;
		const wxTreeItemId* item2_ptr=(Luna< wxTreeItemId >::check(L,3));
		if( !item2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item2 in wxTreeCtrl::base_OnCompareItems function");
		}
		const wxTreeItemId & item2=*item2_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxTreeCtrl::base_OnCompareItems(const wxTreeItemId &, const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxTreeCtrl::OnCompareItems(item1, item2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxTreeCtrl::base_ScrollTo(const wxTreeItemId & item)
	static int _bind_base_ScrollTo(lua_State *L) {
		if (!_lg_typecheck_base_ScrollTo(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_ScrollTo(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::base_ScrollTo(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_ScrollTo function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_ScrollTo(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::ScrollTo(item);

		return 0;
	}

	// void wxTreeCtrl::base_SelectItem(const wxTreeItemId & item, bool select = true)
	static int _bind_base_SelectItem(lua_State *L) {
		if (!_lg_typecheck_base_SelectItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SelectItem(const wxTreeItemId & item, bool select = true) function, expected prototype:\nvoid wxTreeCtrl::base_SelectItem(const wxTreeItemId & item, bool select = true)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SelectItem function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool select=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SelectItem(const wxTreeItemId &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SelectItem(item, select);

		return 0;
	}

	// void wxTreeCtrl::base_SetImageList(wxImageList * imageList)
	static int _bind_base_SetImageList(lua_State *L) {
		if (!_lg_typecheck_base_SetImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeCtrl::base_SetImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetImageList(imageList);

		return 0;
	}

	// void wxTreeCtrl::base_SetIndent(unsigned int indent)
	static int _bind_base_SetIndent(lua_State *L) {
		if (!_lg_typecheck_base_SetIndent(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetIndent(unsigned int indent) function, expected prototype:\nvoid wxTreeCtrl::base_SetIndent(unsigned int indent)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int indent=(unsigned int)lua_tointeger(L,2);

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetIndent(unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetIndent(indent);

		return 0;
	}

	// void wxTreeCtrl::base_SetItemBackgroundColour(const wxTreeItemId & item, const wxColour & col)
	static int _bind_base_SetItemBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_base_SetItemBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetItemBackgroundColour(const wxTreeItemId & item, const wxColour & col) function, expected prototype:\nvoid wxTreeCtrl::base_SetItemBackgroundColour(const wxTreeItemId & item, const wxColour & col)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SetItemBackgroundColour function");
		}
		const wxTreeItemId & item=*item_ptr;
		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxTreeCtrl::base_SetItemBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetItemBackgroundColour(const wxTreeItemId &, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetItemBackgroundColour(item, col);

		return 0;
	}

	// void wxTreeCtrl::base_SetItemBold(const wxTreeItemId & item, bool bold = true)
	static int _bind_base_SetItemBold(lua_State *L) {
		if (!_lg_typecheck_base_SetItemBold(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetItemBold(const wxTreeItemId & item, bool bold = true) function, expected prototype:\nvoid wxTreeCtrl::base_SetItemBold(const wxTreeItemId & item, bool bold = true)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SetItemBold function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool bold=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetItemBold(const wxTreeItemId &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetItemBold(item, bold);

		return 0;
	}

	// void wxTreeCtrl::base_SetItemData(const wxTreeItemId & item, wxTreeItemData * data)
	static int _bind_base_SetItemData(lua_State *L) {
		if (!_lg_typecheck_base_SetItemData(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetItemData(const wxTreeItemId & item, wxTreeItemData * data) function, expected prototype:\nvoid wxTreeCtrl::base_SetItemData(const wxTreeItemId & item, wxTreeItemData * data)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SetItemData function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxTreeItemData* data=(Luna< wxClientData >::checkSubType< wxTreeItemData >(L,3));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetItemData(const wxTreeItemId &, wxTreeItemData *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetItemData(item, data);

		return 0;
	}

	// void wxTreeCtrl::base_SetItemDropHighlight(const wxTreeItemId & item, bool highlight = true)
	static int _bind_base_SetItemDropHighlight(lua_State *L) {
		if (!_lg_typecheck_base_SetItemDropHighlight(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetItemDropHighlight(const wxTreeItemId & item, bool highlight = true) function, expected prototype:\nvoid wxTreeCtrl::base_SetItemDropHighlight(const wxTreeItemId & item, bool highlight = true)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SetItemDropHighlight function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool highlight=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetItemDropHighlight(const wxTreeItemId &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetItemDropHighlight(item, highlight);

		return 0;
	}

	// void wxTreeCtrl::base_SetItemFont(const wxTreeItemId & item, const wxFont & font)
	static int _bind_base_SetItemFont(lua_State *L) {
		if (!_lg_typecheck_base_SetItemFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetItemFont(const wxTreeItemId & item, const wxFont & font) function, expected prototype:\nvoid wxTreeCtrl::base_SetItemFont(const wxTreeItemId & item, const wxFont & font)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SetItemFont function");
		}
		const wxTreeItemId & item=*item_ptr;
		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,3));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxTreeCtrl::base_SetItemFont function");
		}
		const wxFont & font=*font_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetItemFont(const wxTreeItemId &, const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetItemFont(item, font);

		return 0;
	}

	// void wxTreeCtrl::base_SetItemHasChildren(const wxTreeItemId & item, bool hasChildren = true)
	static int _bind_base_SetItemHasChildren(lua_State *L) {
		if (!_lg_typecheck_base_SetItemHasChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetItemHasChildren(const wxTreeItemId & item, bool hasChildren = true) function, expected prototype:\nvoid wxTreeCtrl::base_SetItemHasChildren(const wxTreeItemId & item, bool hasChildren = true)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SetItemHasChildren function");
		}
		const wxTreeItemId & item=*item_ptr;
		bool hasChildren=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetItemHasChildren(const wxTreeItemId &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetItemHasChildren(item, hasChildren);

		return 0;
	}

	// void wxTreeCtrl::base_SetItemImage(const wxTreeItemId & item, int image, wxTreeItemIcon which = ::wxTreeItemIcon_Normal)
	static int _bind_base_SetItemImage(lua_State *L) {
		if (!_lg_typecheck_base_SetItemImage(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetItemImage(const wxTreeItemId & item, int image, wxTreeItemIcon which = ::wxTreeItemIcon_Normal) function, expected prototype:\nvoid wxTreeCtrl::base_SetItemImage(const wxTreeItemId & item, int image, wxTreeItemIcon which = ::wxTreeItemIcon_Normal)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SetItemImage function");
		}
		const wxTreeItemId & item=*item_ptr;
		int image=(int)lua_tointeger(L,3);
		wxTreeItemIcon which=luatop>3 ? (wxTreeItemIcon)lua_tointeger(L,4) : (wxTreeItemIcon)::wxTreeItemIcon_Normal;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetItemImage(const wxTreeItemId &, int, wxTreeItemIcon). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetItemImage(item, image, which);

		return 0;
	}

	// void wxTreeCtrl::base_SetItemText(const wxTreeItemId & item, const wxString & text)
	static int _bind_base_SetItemText(lua_State *L) {
		if (!_lg_typecheck_base_SetItemText(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetItemText(const wxTreeItemId & item, const wxString & text) function, expected prototype:\nvoid wxTreeCtrl::base_SetItemText(const wxTreeItemId & item, const wxString & text)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SetItemText function");
		}
		const wxTreeItemId & item=*item_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetItemText(const wxTreeItemId &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetItemText(item, text);

		return 0;
	}

	// void wxTreeCtrl::base_SetItemTextColour(const wxTreeItemId & item, const wxColour & col)
	static int _bind_base_SetItemTextColour(lua_State *L) {
		if (!_lg_typecheck_base_SetItemTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetItemTextColour(const wxTreeItemId & item, const wxColour & col) function, expected prototype:\nvoid wxTreeCtrl::base_SetItemTextColour(const wxTreeItemId & item, const wxColour & col)\nClass arguments details:\narg 1 ID = 28400299\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SetItemTextColour function");
		}
		const wxTreeItemId & item=*item_ptr;
		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxTreeCtrl::base_SetItemTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetItemTextColour(const wxTreeItemId &, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetItemTextColour(item, col);

		return 0;
	}

	// void wxTreeCtrl::base_SetStateImageList(wxImageList * imageList)
	static int _bind_base_SetStateImageList(lua_State *L) {
		if (!_lg_typecheck_base_SetStateImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SetStateImageList(wxImageList * imageList) function, expected prototype:\nvoid wxTreeCtrl::base_SetStateImageList(wxImageList * imageList)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SetStateImageList(wxImageList *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SetStateImageList(imageList);

		return 0;
	}

	// void wxTreeCtrl::base_SortChildren(const wxTreeItemId & item)
	static int _bind_base_SortChildren(lua_State *L) {
		if (!_lg_typecheck_base_SortChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SortChildren(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::base_SortChildren(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_SortChildren function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SortChildren(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SortChildren(item);

		return 0;
	}

	// void wxTreeCtrl::base_Toggle(const wxTreeItemId & item)
	static int _bind_base_Toggle(lua_State *L) {
		if (!_lg_typecheck_base_Toggle(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_Toggle(const wxTreeItemId & item) function, expected prototype:\nvoid wxTreeCtrl::base_Toggle(const wxTreeItemId & item)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* item_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxTreeCtrl::base_Toggle function");
		}
		const wxTreeItemId & item=*item_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_Toggle(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::Toggle(item);

		return 0;
	}

	// void wxTreeCtrl::base_Unselect()
	static int _bind_base_Unselect(lua_State *L) {
		if (!_lg_typecheck_base_Unselect(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_Unselect() function, expected prototype:\nvoid wxTreeCtrl::base_Unselect()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_Unselect(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::Unselect();

		return 0;
	}

	// void wxTreeCtrl::base_UnselectAll()
	static int _bind_base_UnselectAll(lua_State *L) {
		if (!_lg_typecheck_base_UnselectAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_UnselectAll() function, expected prototype:\nvoid wxTreeCtrl::base_UnselectAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_UnselectAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::UnselectAll();

		return 0;
	}

	// void wxTreeCtrl::base_SelectChildren(const wxTreeItemId & parent)
	static int _bind_base_SelectChildren(lua_State *L) {
		if (!_lg_typecheck_base_SelectChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeCtrl::base_SelectChildren(const wxTreeItemId & parent) function, expected prototype:\nvoid wxTreeCtrl::base_SelectChildren(const wxTreeItemId & parent)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* parent_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxTreeCtrl::base_SelectChildren function");
		}
		const wxTreeItemId & parent=*parent_ptr;

		wxTreeCtrl* self=Luna< wxObject >::checkSubType< wxTreeCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeCtrl::base_SelectChildren(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxTreeCtrl::SelectChildren(parent);

		return 0;
	}


	// Operator binds:

};

wxTreeCtrl* LunaTraits< wxTreeCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeCtrl::_bind_ctor(L);
}

void LunaTraits< wxTreeCtrl >::_bind_dtor(wxTreeCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxTreeCtrl >::className[] = "wxTreeCtrl";
const char LunaTraits< wxTreeCtrl >::fullName[] = "wxTreeCtrl";
const char LunaTraits< wxTreeCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxTreeCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxTreeCtrl >::hash = 16916765;
const int LunaTraits< wxTreeCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxTreeCtrl >::methods[] = {
	{"AddRoot", &luna_wrapper_wxTreeCtrl::_bind_AddRoot},
	{"AppendItem", &luna_wrapper_wxTreeCtrl::_bind_AppendItem},
	{"AssignImageList", &luna_wrapper_wxTreeCtrl::_bind_AssignImageList},
	{"AssignStateImageList", &luna_wrapper_wxTreeCtrl::_bind_AssignStateImageList},
	{"Collapse", &luna_wrapper_wxTreeCtrl::_bind_Collapse},
	{"CollapseAll", &luna_wrapper_wxTreeCtrl::_bind_CollapseAll},
	{"CollapseAllChildren", &luna_wrapper_wxTreeCtrl::_bind_CollapseAllChildren},
	{"CollapseAndReset", &luna_wrapper_wxTreeCtrl::_bind_CollapseAndReset},
	{"Create", &luna_wrapper_wxTreeCtrl::_bind_Create},
	{"Delete", &luna_wrapper_wxTreeCtrl::_bind_Delete},
	{"DeleteAllItems", &luna_wrapper_wxTreeCtrl::_bind_DeleteAllItems},
	{"DeleteChildren", &luna_wrapper_wxTreeCtrl::_bind_DeleteChildren},
	{"EditLabel", &luna_wrapper_wxTreeCtrl::_bind_EditLabel},
	{"EndEditLabel", &luna_wrapper_wxTreeCtrl::_bind_EndEditLabel},
	{"EnsureVisible", &luna_wrapper_wxTreeCtrl::_bind_EnsureVisible},
	{"Expand", &luna_wrapper_wxTreeCtrl::_bind_Expand},
	{"ExpandAll", &luna_wrapper_wxTreeCtrl::_bind_ExpandAll},
	{"ExpandAllChildren", &luna_wrapper_wxTreeCtrl::_bind_ExpandAllChildren},
	{"GetBoundingRect", &luna_wrapper_wxTreeCtrl::_bind_GetBoundingRect},
	{"GetChildrenCount", &luna_wrapper_wxTreeCtrl::_bind_GetChildrenCount},
	{"GetCount", &luna_wrapper_wxTreeCtrl::_bind_GetCount},
	{"GetEditControl", &luna_wrapper_wxTreeCtrl::_bind_GetEditControl},
	{"GetFirstChild", &luna_wrapper_wxTreeCtrl::_bind_GetFirstChild},
	{"GetFirstVisibleItem", &luna_wrapper_wxTreeCtrl::_bind_GetFirstVisibleItem},
	{"GetFocusedItem", &luna_wrapper_wxTreeCtrl::_bind_GetFocusedItem},
	{"ClearFocusedItem", &luna_wrapper_wxTreeCtrl::_bind_ClearFocusedItem},
	{"SetFocusedItem", &luna_wrapper_wxTreeCtrl::_bind_SetFocusedItem},
	{"GetImageList", &luna_wrapper_wxTreeCtrl::_bind_GetImageList},
	{"GetIndent", &luna_wrapper_wxTreeCtrl::_bind_GetIndent},
	{"GetItemBackgroundColour", &luna_wrapper_wxTreeCtrl::_bind_GetItemBackgroundColour},
	{"GetItemData", &luna_wrapper_wxTreeCtrl::_bind_GetItemData},
	{"GetItemFont", &luna_wrapper_wxTreeCtrl::_bind_GetItemFont},
	{"GetItemImage", &luna_wrapper_wxTreeCtrl::_bind_GetItemImage},
	{"GetItemParent", &luna_wrapper_wxTreeCtrl::_bind_GetItemParent},
	{"GetItemState", &luna_wrapper_wxTreeCtrl::_bind_GetItemState},
	{"GetItemText", &luna_wrapper_wxTreeCtrl::_bind_GetItemText},
	{"GetItemTextColour", &luna_wrapper_wxTreeCtrl::_bind_GetItemTextColour},
	{"GetLastChild", &luna_wrapper_wxTreeCtrl::_bind_GetLastChild},
	{"GetNextChild", &luna_wrapper_wxTreeCtrl::_bind_GetNextChild},
	{"GetNextSibling", &luna_wrapper_wxTreeCtrl::_bind_GetNextSibling},
	{"GetNextVisible", &luna_wrapper_wxTreeCtrl::_bind_GetNextVisible},
	{"GetPrevSibling", &luna_wrapper_wxTreeCtrl::_bind_GetPrevSibling},
	{"GetPrevVisible", &luna_wrapper_wxTreeCtrl::_bind_GetPrevVisible},
	{"GetQuickBestSize", &luna_wrapper_wxTreeCtrl::_bind_GetQuickBestSize},
	{"GetRootItem", &luna_wrapper_wxTreeCtrl::_bind_GetRootItem},
	{"GetSelection", &luna_wrapper_wxTreeCtrl::_bind_GetSelection},
	{"GetSelections", &luna_wrapper_wxTreeCtrl::_bind_GetSelections},
	{"GetStateImageList", &luna_wrapper_wxTreeCtrl::_bind_GetStateImageList},
	{"HitTest", &luna_wrapper_wxTreeCtrl::_bind_HitTest},
	{"InsertItem", &luna_wrapper_wxTreeCtrl::_bind_InsertItem},
	{"IsBold", &luna_wrapper_wxTreeCtrl::_bind_IsBold},
	{"IsEmpty", &luna_wrapper_wxTreeCtrl::_bind_IsEmpty},
	{"IsExpanded", &luna_wrapper_wxTreeCtrl::_bind_IsExpanded},
	{"IsSelected", &luna_wrapper_wxTreeCtrl::_bind_IsSelected},
	{"IsVisible", &luna_wrapper_wxTreeCtrl::_bind_IsVisible},
	{"ItemHasChildren", &luna_wrapper_wxTreeCtrl::_bind_ItemHasChildren},
	{"OnCompareItems", &luna_wrapper_wxTreeCtrl::_bind_OnCompareItems},
	{"PrependItem", &luna_wrapper_wxTreeCtrl::_bind_PrependItem},
	{"ScrollTo", &luna_wrapper_wxTreeCtrl::_bind_ScrollTo},
	{"SelectItem", &luna_wrapper_wxTreeCtrl::_bind_SelectItem},
	{"SetImageList", &luna_wrapper_wxTreeCtrl::_bind_SetImageList},
	{"SetIndent", &luna_wrapper_wxTreeCtrl::_bind_SetIndent},
	{"SetItemBackgroundColour", &luna_wrapper_wxTreeCtrl::_bind_SetItemBackgroundColour},
	{"SetItemBold", &luna_wrapper_wxTreeCtrl::_bind_SetItemBold},
	{"SetItemData", &luna_wrapper_wxTreeCtrl::_bind_SetItemData},
	{"SetItemDropHighlight", &luna_wrapper_wxTreeCtrl::_bind_SetItemDropHighlight},
	{"SetItemFont", &luna_wrapper_wxTreeCtrl::_bind_SetItemFont},
	{"SetItemHasChildren", &luna_wrapper_wxTreeCtrl::_bind_SetItemHasChildren},
	{"SetItemImage", &luna_wrapper_wxTreeCtrl::_bind_SetItemImage},
	{"SetItemState", &luna_wrapper_wxTreeCtrl::_bind_SetItemState},
	{"SetItemText", &luna_wrapper_wxTreeCtrl::_bind_SetItemText},
	{"SetItemTextColour", &luna_wrapper_wxTreeCtrl::_bind_SetItemTextColour},
	{"SetQuickBestSize", &luna_wrapper_wxTreeCtrl::_bind_SetQuickBestSize},
	{"SetStateImageList", &luna_wrapper_wxTreeCtrl::_bind_SetStateImageList},
	{"SetWindowStyle", &luna_wrapper_wxTreeCtrl::_bind_SetWindowStyle},
	{"SortChildren", &luna_wrapper_wxTreeCtrl::_bind_SortChildren},
	{"Toggle", &luna_wrapper_wxTreeCtrl::_bind_Toggle},
	{"ToggleItemSelection", &luna_wrapper_wxTreeCtrl::_bind_ToggleItemSelection},
	{"Unselect", &luna_wrapper_wxTreeCtrl::_bind_Unselect},
	{"UnselectAll", &luna_wrapper_wxTreeCtrl::_bind_UnselectAll},
	{"UnselectItem", &luna_wrapper_wxTreeCtrl::_bind_UnselectItem},
	{"SelectChildren", &luna_wrapper_wxTreeCtrl::_bind_SelectChildren},
	{"base_GetClassInfo", &luna_wrapper_wxTreeCtrl::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxTreeCtrl::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxTreeCtrl::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxTreeCtrl::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxTreeCtrl::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxTreeCtrl::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxTreeCtrl::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxTreeCtrl::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxTreeCtrl::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxTreeCtrl::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxTreeCtrl::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxTreeCtrl::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxTreeCtrl::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxTreeCtrl::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxTreeCtrl::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxTreeCtrl::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxTreeCtrl::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxTreeCtrl::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxTreeCtrl::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxTreeCtrl::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxTreeCtrl::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxTreeCtrl::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxTreeCtrl::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxTreeCtrl::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxTreeCtrl::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxTreeCtrl::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxTreeCtrl::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxTreeCtrl::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxTreeCtrl::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxTreeCtrl::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxTreeCtrl::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxTreeCtrl::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxTreeCtrl::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxTreeCtrl::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxTreeCtrl::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxTreeCtrl::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxTreeCtrl::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxTreeCtrl::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxTreeCtrl::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxTreeCtrl::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxTreeCtrl::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxTreeCtrl::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxTreeCtrl::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxTreeCtrl::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxTreeCtrl::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxTreeCtrl::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxTreeCtrl::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxTreeCtrl::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxTreeCtrl::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxTreeCtrl::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxTreeCtrl::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxTreeCtrl::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxTreeCtrl::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxTreeCtrl::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxTreeCtrl::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxTreeCtrl::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxTreeCtrl::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxTreeCtrl::_bind_base_SetExtraStyle},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxTreeCtrl::_bind_base_SetWindowStyleFlag},
	{"base_Lower", &luna_wrapper_wxTreeCtrl::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxTreeCtrl::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxTreeCtrl::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxTreeCtrl::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxTreeCtrl::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxTreeCtrl::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxTreeCtrl::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxTreeCtrl::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxTreeCtrl::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxTreeCtrl::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxTreeCtrl::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxTreeCtrl::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxTreeCtrl::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxTreeCtrl::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxTreeCtrl::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxTreeCtrl::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxTreeCtrl::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxTreeCtrl::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxTreeCtrl::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxTreeCtrl::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxTreeCtrl::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxTreeCtrl::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxTreeCtrl::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxTreeCtrl::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxTreeCtrl::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxTreeCtrl::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxTreeCtrl::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxTreeCtrl::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxTreeCtrl::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxTreeCtrl::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxTreeCtrl::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxTreeCtrl::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxTreeCtrl::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxTreeCtrl::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxTreeCtrl::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxTreeCtrl::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxTreeCtrl::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxTreeCtrl::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxTreeCtrl::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxTreeCtrl::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxTreeCtrl::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxTreeCtrl::_bind_base_SetLabel},
	{"base_AddRoot", &luna_wrapper_wxTreeCtrl::_bind_base_AddRoot},
	{"base_Collapse", &luna_wrapper_wxTreeCtrl::_bind_base_Collapse},
	{"base_CollapseAndReset", &luna_wrapper_wxTreeCtrl::_bind_base_CollapseAndReset},
	{"base_Delete", &luna_wrapper_wxTreeCtrl::_bind_base_Delete},
	{"base_DeleteAllItems", &luna_wrapper_wxTreeCtrl::_bind_base_DeleteAllItems},
	{"base_DeleteChildren", &luna_wrapper_wxTreeCtrl::_bind_base_DeleteChildren},
	{"base_EditLabel", &luna_wrapper_wxTreeCtrl::_bind_base_EditLabel},
	{"base_EndEditLabel", &luna_wrapper_wxTreeCtrl::_bind_base_EndEditLabel},
	{"base_EnsureVisible", &luna_wrapper_wxTreeCtrl::_bind_base_EnsureVisible},
	{"base_Expand", &luna_wrapper_wxTreeCtrl::_bind_base_Expand},
	{"base_GetBoundingRect", &luna_wrapper_wxTreeCtrl::_bind_base_GetBoundingRect},
	{"base_GetChildrenCount", &luna_wrapper_wxTreeCtrl::_bind_base_GetChildrenCount},
	{"base_GetCount", &luna_wrapper_wxTreeCtrl::_bind_base_GetCount},
	{"base_GetEditControl", &luna_wrapper_wxTreeCtrl::_bind_base_GetEditControl},
	{"base_GetFirstChild", &luna_wrapper_wxTreeCtrl::_bind_base_GetFirstChild},
	{"base_GetFirstVisibleItem", &luna_wrapper_wxTreeCtrl::_bind_base_GetFirstVisibleItem},
	{"base_GetFocusedItem", &luna_wrapper_wxTreeCtrl::_bind_base_GetFocusedItem},
	{"base_ClearFocusedItem", &luna_wrapper_wxTreeCtrl::_bind_base_ClearFocusedItem},
	{"base_SetFocusedItem", &luna_wrapper_wxTreeCtrl::_bind_base_SetFocusedItem},
	{"base_GetIndent", &luna_wrapper_wxTreeCtrl::_bind_base_GetIndent},
	{"base_GetItemBackgroundColour", &luna_wrapper_wxTreeCtrl::_bind_base_GetItemBackgroundColour},
	{"base_GetItemData", &luna_wrapper_wxTreeCtrl::_bind_base_GetItemData},
	{"base_GetItemFont", &luna_wrapper_wxTreeCtrl::_bind_base_GetItemFont},
	{"base_GetItemImage", &luna_wrapper_wxTreeCtrl::_bind_base_GetItemImage},
	{"base_GetItemParent", &luna_wrapper_wxTreeCtrl::_bind_base_GetItemParent},
	{"base_GetItemText", &luna_wrapper_wxTreeCtrl::_bind_base_GetItemText},
	{"base_GetItemTextColour", &luna_wrapper_wxTreeCtrl::_bind_base_GetItemTextColour},
	{"base_GetLastChild", &luna_wrapper_wxTreeCtrl::_bind_base_GetLastChild},
	{"base_GetNextChild", &luna_wrapper_wxTreeCtrl::_bind_base_GetNextChild},
	{"base_GetNextSibling", &luna_wrapper_wxTreeCtrl::_bind_base_GetNextSibling},
	{"base_GetNextVisible", &luna_wrapper_wxTreeCtrl::_bind_base_GetNextVisible},
	{"base_GetPrevSibling", &luna_wrapper_wxTreeCtrl::_bind_base_GetPrevSibling},
	{"base_GetPrevVisible", &luna_wrapper_wxTreeCtrl::_bind_base_GetPrevVisible},
	{"base_GetRootItem", &luna_wrapper_wxTreeCtrl::_bind_base_GetRootItem},
	{"base_GetSelection", &luna_wrapper_wxTreeCtrl::_bind_base_GetSelection},
	{"base_GetSelections", &luna_wrapper_wxTreeCtrl::_bind_base_GetSelections},
	{"base_IsBold", &luna_wrapper_wxTreeCtrl::_bind_base_IsBold},
	{"base_IsExpanded", &luna_wrapper_wxTreeCtrl::_bind_base_IsExpanded},
	{"base_IsSelected", &luna_wrapper_wxTreeCtrl::_bind_base_IsSelected},
	{"base_IsVisible", &luna_wrapper_wxTreeCtrl::_bind_base_IsVisible},
	{"base_ItemHasChildren", &luna_wrapper_wxTreeCtrl::_bind_base_ItemHasChildren},
	{"base_OnCompareItems", &luna_wrapper_wxTreeCtrl::_bind_base_OnCompareItems},
	{"base_ScrollTo", &luna_wrapper_wxTreeCtrl::_bind_base_ScrollTo},
	{"base_SelectItem", &luna_wrapper_wxTreeCtrl::_bind_base_SelectItem},
	{"base_SetImageList", &luna_wrapper_wxTreeCtrl::_bind_base_SetImageList},
	{"base_SetIndent", &luna_wrapper_wxTreeCtrl::_bind_base_SetIndent},
	{"base_SetItemBackgroundColour", &luna_wrapper_wxTreeCtrl::_bind_base_SetItemBackgroundColour},
	{"base_SetItemBold", &luna_wrapper_wxTreeCtrl::_bind_base_SetItemBold},
	{"base_SetItemData", &luna_wrapper_wxTreeCtrl::_bind_base_SetItemData},
	{"base_SetItemDropHighlight", &luna_wrapper_wxTreeCtrl::_bind_base_SetItemDropHighlight},
	{"base_SetItemFont", &luna_wrapper_wxTreeCtrl::_bind_base_SetItemFont},
	{"base_SetItemHasChildren", &luna_wrapper_wxTreeCtrl::_bind_base_SetItemHasChildren},
	{"base_SetItemImage", &luna_wrapper_wxTreeCtrl::_bind_base_SetItemImage},
	{"base_SetItemText", &luna_wrapper_wxTreeCtrl::_bind_base_SetItemText},
	{"base_SetItemTextColour", &luna_wrapper_wxTreeCtrl::_bind_base_SetItemTextColour},
	{"base_SetStateImageList", &luna_wrapper_wxTreeCtrl::_bind_base_SetStateImageList},
	{"base_SortChildren", &luna_wrapper_wxTreeCtrl::_bind_base_SortChildren},
	{"base_Toggle", &luna_wrapper_wxTreeCtrl::_bind_base_Toggle},
	{"base_Unselect", &luna_wrapper_wxTreeCtrl::_bind_base_Unselect},
	{"base_UnselectAll", &luna_wrapper_wxTreeCtrl::_bind_base_UnselectAll},
	{"base_SelectChildren", &luna_wrapper_wxTreeCtrl::_bind_base_SelectChildren},
	{"fromVoid", &luna_wrapper_wxTreeCtrl::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTreeCtrl::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTreeCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxTreeCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeCtrl >::enumValues[] = {
	{0,0}
};


