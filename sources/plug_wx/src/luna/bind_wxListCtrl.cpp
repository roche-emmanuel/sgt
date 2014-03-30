#include <plug_common.h>

#include <luna/wrappers/wrapper_wxListCtrl.h>

class luna_wrapper_wxListCtrl {
public:
	typedef Luna< wxListCtrl > luna_t;

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

		wxListCtrl* self= (wxListCtrl*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxListCtrl >::push(L,self,false);
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
		//wxListCtrl* ptr= dynamic_cast< wxListCtrl* >(Luna< wxObject >::check(L,1));
		wxListCtrl* ptr= luna_caster< wxObject, wxListCtrl >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxListCtrl >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>7 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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
		if( luatop<3 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
	inline static bool _lg_typecheck_Arrange(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AssignImageList(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ClearAll(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Create(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>8 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,25723480) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,20268751) ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,56813631) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EditLabel(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,96106697)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EndEditLabel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_EnsureVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItem_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_FindItem_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		if( (!(Luna< wxPoint >::check(L,3))) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumnIndexFromOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetColumnsOrder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetCountPerPage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetEditControl(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetImageList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemFont(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,20234418) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemSpacing(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetItemState(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemText(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNextItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetSelectedItemCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetSubItemRect(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,4,20234418) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetTextColour(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetTopItem(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetViewRect(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HitTest(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,25723480) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertColumn_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxListItem >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertColumn_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxListItem >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem_overload_4(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RefreshItems(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ScrollList(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnWidth(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetColumnsOrder(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,47342076) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetImageList(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItem_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		if( (!(Luna< wxObject >::checkSubType< wxListItem >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItem_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>5 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemBackgroundColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemColumnImage(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemFont(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemImage(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemPosition(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,25723480) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemPtrData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemState(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemText(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemTextColour(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetSingleStyle(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetTextColour(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_SetWindowStyleFlag(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxListCtrl::wxListCtrl()
	static wxListCtrl* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxListCtrl::wxListCtrl() function, expected prototype:\nwxListCtrl::wxListCtrl()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxListCtrl();
	}

	// wxListCtrl::wxListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr)
	static wxListCtrl* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxListCtrl::wxListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr) function, expected prototype:\nwxListCtrl::wxListCtrl(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		int id=(int)lua_tointeger(L,2);
		const wxPoint* pos_ptr=luatop>2 ? (Luna< wxPoint >::check(L,3)) : NULL;
		if( luatop>2 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxListCtrl::wxListCtrl function");
		}
		const wxPoint & pos=luatop>2 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListCtrl::wxListCtrl function");
		}
		const wxSize & size=luatop>3 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>4 ? (long)lua_tonumber(L,5) : (long)wxLC_ICON;
		const wxValidator* validator_ptr=luatop>5 ? (Luna< wxObject >::checkSubType< wxValidator >(L,6)) : NULL;
		if( luatop>5 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxListCtrl::wxListCtrl function");
		}
		const wxValidator & validator=luatop>5 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,7),lua_objlen(L,7));

		return new wxListCtrl(parent, id, pos, size, style, validator, name);
	}

	// wxListCtrl::wxListCtrl(lua_Table * data)
	static wxListCtrl* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxListCtrl::wxListCtrl(lua_Table * data) function, expected prototype:\nwxListCtrl::wxListCtrl(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxListCtrl(L,NULL);
	}

	// wxListCtrl::wxListCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr)
	static wxListCtrl* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxListCtrl::wxListCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr) function, expected prototype:\nwxListCtrl::wxListCtrl(lua_Table * data, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr)\nClass arguments details:\narg 2 ID = 56813631\narg 4 ID = 25723480\narg 5 ID = 20268751\narg 7 ID = 56813631\narg 8 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxListCtrl::wxListCtrl function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListCtrl::wxListCtrl function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxLC_ICON;
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxListCtrl::wxListCtrl function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		return new wrapper_wxListCtrl(L,NULL, parent, id, pos, size, style, validator, name);
	}

	// Overload binder for wxListCtrl::wxListCtrl
	static wxListCtrl* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxListCtrl, cannot match any of the overloads for function wxListCtrl:\n  wxListCtrl()\n  wxListCtrl(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n  wxListCtrl(lua_Table *)\n  wxListCtrl(lua_Table *, wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxListCtrl::Arrange(int flag = ::wxLIST_ALIGN_DEFAULT)
	static int _bind_Arrange(lua_State *L) {
		if (!_lg_typecheck_Arrange(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::Arrange(int flag = ::wxLIST_ALIGN_DEFAULT) function, expected prototype:\nbool wxListCtrl::Arrange(int flag = ::wxLIST_ALIGN_DEFAULT)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flag=luatop>1 ? (int)lua_tointeger(L,2) : (int)::wxLIST_ALIGN_DEFAULT;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::Arrange(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Arrange(flag);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::AssignImageList(wxImageList * imageList, int which)
	static int _bind_AssignImageList(lua_State *L) {
		if (!_lg_typecheck_AssignImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::AssignImageList(wxImageList * imageList, int which) function, expected prototype:\nvoid wxListCtrl::AssignImageList(wxImageList * imageList, int which)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));
		int which=(int)lua_tointeger(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::AssignImageList(wxImageList *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AssignImageList(imageList, which);

		return 0;
	}

	// void wxListCtrl::ClearAll()
	static int _bind_ClearAll(lua_State *L) {
		if (!_lg_typecheck_ClearAll(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::ClearAll() function, expected prototype:\nvoid wxListCtrl::ClearAll()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::ClearAll(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ClearAll();

		return 0;
	}

	// bool wxListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr)
	static int _bind_Create(lua_State *L) {
		if (!_lg_typecheck_Create(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr) function, expected prototype:\nbool wxListCtrl::Create(wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxLC_ICON, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxListCtrlNameStr)\nClass arguments details:\narg 1 ID = 56813631\narg 3 ID = 25723480\narg 4 ID = 20268751\narg 6 ID = 56813631\narg 7 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		int id=(int)lua_tointeger(L,3);
		const wxPoint* pos_ptr=luatop>3 ? (Luna< wxPoint >::check(L,4)) : NULL;
		if( luatop>3 && !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxListCtrl::Create function");
		}
		const wxPoint & pos=luatop>3 ? *pos_ptr : (const wxPoint&)wxDefaultPosition;
		const wxSize* size_ptr=luatop>4 ? (Luna< wxSize >::check(L,5)) : NULL;
		if( luatop>4 && !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListCtrl::Create function");
		}
		const wxSize & size=luatop>4 ? *size_ptr : (const wxSize&)wxDefaultSize;
		long style=luatop>5 ? (long)lua_tonumber(L,6) : (long)wxLC_ICON;
		const wxValidator* validator_ptr=luatop>6 ? (Luna< wxObject >::checkSubType< wxValidator >(L,7)) : NULL;
		if( luatop>6 && !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxListCtrl::Create function");
		}
		const wxValidator & validator=luatop>6 ? *validator_ptr : (const wxValidator&)wxDefaultValidator;
		wxString name(lua_tostring(L,8),lua_objlen(L,8));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::Create(wxWindow *, int, const wxPoint &, const wxSize &, long, const wxValidator &, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Create(parent, id, pos, size, style, validator, name);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::DeleteAllItems() function, expected prototype:\nbool wxListCtrl::DeleteAllItems()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::DeleteAllItems(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteAllItems();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::DeleteColumn(int col)
	static int _bind_DeleteColumn(lua_State *L) {
		if (!_lg_typecheck_DeleteColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::DeleteColumn(int col) function, expected prototype:\nbool wxListCtrl::DeleteColumn(int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::DeleteColumn(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteColumn(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::DeleteItem(long item)
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::DeleteItem(long item) function, expected prototype:\nbool wxListCtrl::DeleteItem(long item)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::DeleteItem(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DeleteItem(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxTextCtrl * wxListCtrl::EditLabel(long item, wxClassInfo * textControlClass = wxCLASSINFO ( wxTextCtrl ))
	static int _bind_EditLabel(lua_State *L) {
		if (!_lg_typecheck_EditLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxListCtrl::EditLabel(long item, wxClassInfo * textControlClass = wxCLASSINFO ( wxTextCtrl )) function, expected prototype:\nwxTextCtrl * wxListCtrl::EditLabel(long item, wxClassInfo * textControlClass = wxCLASSINFO ( wxTextCtrl ))\nClass arguments details:\narg 2 ID = 96106697\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tonumber(L,2);
		wxClassInfo* textControlClass=luatop>2 ? (Luna< wxClassInfo >::check(L,3)) : (wxClassInfo*)wxCLASSINFO ( wxTextCtrl );

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxListCtrl::EditLabel(long, wxClassInfo *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextCtrl * lret = self->EditLabel(item, textControlClass);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// bool wxListCtrl::EndEditLabel(bool cancel)
	static int _bind_EndEditLabel(lua_State *L) {
		if (!_lg_typecheck_EndEditLabel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::EndEditLabel(bool cancel) function, expected prototype:\nbool wxListCtrl::EndEditLabel(bool cancel)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool cancel=(bool)(lua_toboolean(L,2)==1);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::EndEditLabel(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EndEditLabel(cancel);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::EnsureVisible(long item)
	static int _bind_EnsureVisible(lua_State *L) {
		if (!_lg_typecheck_EnsureVisible(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::EnsureVisible(long item) function, expected prototype:\nbool wxListCtrl::EnsureVisible(long item)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::EnsureVisible(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EnsureVisible(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxListCtrl::FindItem(long start, const wxString & str, bool partial = false)
	static int _bind_FindItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_FindItem_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::FindItem(long start, const wxString & str, bool partial = false) function, expected prototype:\nlong wxListCtrl::FindItem(long start, const wxString & str, bool partial = false)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long start=(long)lua_tonumber(L,2);
		wxString str(lua_tostring(L,3),lua_objlen(L,3));
		bool partial=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)false;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::FindItem(long, const wxString &, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->FindItem(start, str, partial);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::FindItem(long start, size_t data)
	static int _bind_FindItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_FindItem_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::FindItem(long start, size_t data) function, expected prototype:\nlong wxListCtrl::FindItem(long start, size_t data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long start=(long)lua_tonumber(L,2);
		size_t data=(size_t)lua_tointeger(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::FindItem(long, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->FindItem(start, data);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::FindItem(long start, const wxPoint & pt, int direction)
	static int _bind_FindItem_overload_3(lua_State *L) {
		if (!_lg_typecheck_FindItem_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::FindItem(long start, const wxPoint & pt, int direction) function, expected prototype:\nlong wxListCtrl::FindItem(long start, const wxPoint & pt, int direction)\nClass arguments details:\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		long start=(long)lua_tonumber(L,2);
		const wxPoint* pt_ptr=(Luna< wxPoint >::check(L,3));
		if( !pt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pt in wxListCtrl::FindItem function");
		}
		const wxPoint & pt=*pt_ptr;
		int direction=(int)lua_tointeger(L,4);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::FindItem(long, const wxPoint &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->FindItem(start, pt, direction);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxListCtrl::FindItem
	static int _bind_FindItem(lua_State *L) {
		if (_lg_typecheck_FindItem_overload_1(L)) return _bind_FindItem_overload_1(L);
		if (_lg_typecheck_FindItem_overload_2(L)) return _bind_FindItem_overload_2(L);
		if (_lg_typecheck_FindItem_overload_3(L)) return _bind_FindItem_overload_3(L);

		luaL_error(L, "error in function FindItem, cannot match any of the overloads for function FindItem:\n  FindItem(long, const wxString &, bool)\n  FindItem(long, size_t)\n  FindItem(long, const wxPoint &, int)\n");
		return 0;
	}

	// bool wxListCtrl::GetColumn(int col, wxListItem & item) const
	static int _bind_GetColumn(lua_State *L) {
		if (!_lg_typecheck_GetColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::GetColumn(int col, wxListItem & item) const function, expected prototype:\nbool wxListCtrl::GetColumn(int col, wxListItem & item) const\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);
		wxListItem* item_ptr=(Luna< wxObject >::checkSubType< wxListItem >(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxListCtrl::GetColumn function");
		}
		wxListItem & item=*item_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::GetColumn(int, wxListItem &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetColumn(col, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxListCtrl::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetColumnCount() const function, expected prototype:\nint wxListCtrl::GetColumnCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetColumnCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::GetColumnIndexFromOrder(int pos) const
	static int _bind_GetColumnIndexFromOrder(lua_State *L) {
		if (!_lg_typecheck_GetColumnIndexFromOrder(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetColumnIndexFromOrder(int pos) const function, expected prototype:\nint wxListCtrl::GetColumnIndexFromOrder(int pos) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pos=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetColumnIndexFromOrder(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumnIndexFromOrder(pos);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::GetColumnOrder(int col) const
	static int _bind_GetColumnOrder(lua_State *L) {
		if (!_lg_typecheck_GetColumnOrder(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetColumnOrder(int col) const function, expected prototype:\nint wxListCtrl::GetColumnOrder(int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetColumnOrder(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumnOrder(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::GetColumnWidth(int col) const
	static int _bind_GetColumnWidth(lua_State *L) {
		if (!_lg_typecheck_GetColumnWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetColumnWidth(int col) const function, expected prototype:\nint wxListCtrl::GetColumnWidth(int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetColumnWidth(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetColumnWidth(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxArrayInt wxListCtrl::GetColumnsOrder() const
	static int _bind_GetColumnsOrder(lua_State *L) {
		if (!_lg_typecheck_GetColumnsOrder(L)) {
			luaL_error(L, "luna typecheck failed in wxArrayInt wxListCtrl::GetColumnsOrder() const function, expected prototype:\nwxArrayInt wxListCtrl::GetColumnsOrder() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxArrayInt wxListCtrl::GetColumnsOrder() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxArrayInt stack_lret = self->GetColumnsOrder();
		wxArrayInt* lret = new wxArrayInt(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxArrayInt >::push(L,lret,true);

		return 1;
	}

	// int wxListCtrl::GetCountPerPage() const
	static int _bind_GetCountPerPage(lua_State *L) {
		if (!_lg_typecheck_GetCountPerPage(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetCountPerPage() const function, expected prototype:\nint wxListCtrl::GetCountPerPage() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetCountPerPage() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetCountPerPage();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxTextCtrl * wxListCtrl::GetEditControl() const
	static int _bind_GetEditControl(lua_State *L) {
		if (!_lg_typecheck_GetEditControl(L)) {
			luaL_error(L, "luna typecheck failed in wxTextCtrl * wxListCtrl::GetEditControl() const function, expected prototype:\nwxTextCtrl * wxListCtrl::GetEditControl() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxTextCtrl * wxListCtrl::GetEditControl() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxTextCtrl * lret = self->GetEditControl();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTextCtrl >::push(L,lret,false);

		return 1;
	}

	// wxImageList * wxListCtrl::GetImageList(int which) const
	static int _bind_GetImageList(lua_State *L) {
		if (!_lg_typecheck_GetImageList(L)) {
			luaL_error(L, "luna typecheck failed in wxImageList * wxListCtrl::GetImageList(int which) const function, expected prototype:\nwxImageList * wxListCtrl::GetImageList(int which) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int which=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxImageList * wxListCtrl::GetImageList(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxImageList * lret = self->GetImageList(which);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxImageList >::push(L,lret,false);

		return 1;
	}

	// bool wxListCtrl::GetItem(wxListItem & info) const
	static int _bind_GetItem(lua_State *L) {
		if (!_lg_typecheck_GetItem(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::GetItem(wxListItem & info) const function, expected prototype:\nbool wxListCtrl::GetItem(wxListItem & info) const\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxListItem* info_ptr=(Luna< wxObject >::checkSubType< wxListItem >(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxListCtrl::GetItem function");
		}
		wxListItem & info=*info_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::GetItem(wxListItem &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetItem(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour wxListCtrl::GetItemBackgroundColour(long item) const
	static int _bind_GetItemBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_GetItemBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxListCtrl::GetItemBackgroundColour(long item) const function, expected prototype:\nwxColour wxListCtrl::GetItemBackgroundColour(long item) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxListCtrl::GetItemBackgroundColour(long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetItemBackgroundColour(item);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// int wxListCtrl::GetItemCount() const
	static int _bind_GetItemCount(lua_State *L) {
		if (!_lg_typecheck_GetItemCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetItemCount() const function, expected prototype:\nint wxListCtrl::GetItemCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetItemCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetItemCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// size_t wxListCtrl::GetItemData(long item) const
	static int _bind_GetItemData(lua_State *L) {
		if (!_lg_typecheck_GetItemData(L)) {
			luaL_error(L, "luna typecheck failed in size_t wxListCtrl::GetItemData(long item) const function, expected prototype:\nsize_t wxListCtrl::GetItemData(long item) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call size_t wxListCtrl::GetItemData(long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		size_t lret = self->GetItemData(item);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxFont wxListCtrl::GetItemFont(long item) const
	static int _bind_GetItemFont(lua_State *L) {
		if (!_lg_typecheck_GetItemFont(L)) {
			luaL_error(L, "luna typecheck failed in wxFont wxListCtrl::GetItemFont(long item) const function, expected prototype:\nwxFont wxListCtrl::GetItemFont(long item) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxFont wxListCtrl::GetItemFont(long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxFont stack_lret = self->GetItemFont(item);
		wxFont* lret = new wxFont(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxFont >::push(L,lret,true);

		return 1;
	}

	// bool wxListCtrl::GetItemPosition(long item, wxPoint & pos) const
	static int _bind_GetItemPosition(lua_State *L) {
		if (!_lg_typecheck_GetItemPosition(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::GetItemPosition(long item, wxPoint & pos) const function, expected prototype:\nbool wxListCtrl::GetItemPosition(long item, wxPoint & pos) const\nClass arguments details:\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);
		wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxListCtrl::GetItemPosition function");
		}
		wxPoint & pos=*pos_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::GetItemPosition(long, wxPoint &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetItemPosition(item, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::GetItemRect(long item, wxRect & rect, int code = ::wxLIST_RECT_BOUNDS) const
	static int _bind_GetItemRect(lua_State *L) {
		if (!_lg_typecheck_GetItemRect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::GetItemRect(long item, wxRect & rect, int code = ::wxLIST_RECT_BOUNDS) const function, expected prototype:\nbool wxListCtrl::GetItemRect(long item, wxRect & rect, int code = ::wxLIST_RECT_BOUNDS) const\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tonumber(L,2);
		wxRect* rect_ptr=(Luna< wxRect >::check(L,3));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxListCtrl::GetItemRect function");
		}
		wxRect & rect=*rect_ptr;
		int code=luatop>3 ? (int)lua_tointeger(L,4) : (int)::wxLIST_RECT_BOUNDS;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::GetItemRect(long, wxRect &, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetItemRect(item, rect, code);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxSize wxListCtrl::GetItemSpacing() const
	static int _bind_GetItemSpacing(lua_State *L) {
		if (!_lg_typecheck_GetItemSpacing(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxListCtrl::GetItemSpacing() const function, expected prototype:\nwxSize wxListCtrl::GetItemSpacing() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxListCtrl::GetItemSpacing() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->GetItemSpacing();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// int wxListCtrl::GetItemState(long item, long stateMask) const
	static int _bind_GetItemState(lua_State *L) {
		if (!_lg_typecheck_GetItemState(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetItemState(long item, long stateMask) const function, expected prototype:\nint wxListCtrl::GetItemState(long item, long stateMask) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);
		long stateMask=(long)lua_tonumber(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetItemState(long, long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetItemState(item, stateMask);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxListCtrl::GetItemText(long item, int col = 0) const
	static int _bind_GetItemText(lua_State *L) {
		if (!_lg_typecheck_GetItemText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxListCtrl::GetItemText(long item, int col = 0) const function, expected prototype:\nwxString wxListCtrl::GetItemText(long item, int col = 0) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tonumber(L,2);
		int col=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxListCtrl::GetItemText(long, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetItemText(item, col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxColour wxListCtrl::GetItemTextColour(long item) const
	static int _bind_GetItemTextColour(lua_State *L) {
		if (!_lg_typecheck_GetItemTextColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxListCtrl::GetItemTextColour(long item) const function, expected prototype:\nwxColour wxListCtrl::GetItemTextColour(long item) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxListCtrl::GetItemTextColour(long) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetItemTextColour(item);
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// long wxListCtrl::GetNextItem(long item, int geometry = ::wxLIST_NEXT_ALL, int state = wxLIST_STATE_DONTCARE) const
	static int _bind_GetNextItem(lua_State *L) {
		if (!_lg_typecheck_GetNextItem(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::GetNextItem(long item, int geometry = ::wxLIST_NEXT_ALL, int state = wxLIST_STATE_DONTCARE) const function, expected prototype:\nlong wxListCtrl::GetNextItem(long item, int geometry = ::wxLIST_NEXT_ALL, int state = wxLIST_STATE_DONTCARE) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tonumber(L,2);
		int geometry=luatop>2 ? (int)lua_tointeger(L,3) : (int)::wxLIST_NEXT_ALL;
		int state=luatop>3 ? (int)lua_tointeger(L,4) : (int)wxLIST_STATE_DONTCARE;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::GetNextItem(long, int, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetNextItem(item, geometry, state);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::GetSelectedItemCount() const
	static int _bind_GetSelectedItemCount(lua_State *L) {
		if (!_lg_typecheck_GetSelectedItemCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::GetSelectedItemCount() const function, expected prototype:\nint wxListCtrl::GetSelectedItemCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::GetSelectedItemCount() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetSelectedItemCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxListCtrl::GetSubItemRect(long item, long subItem, wxRect & rect, int code = ::wxLIST_RECT_BOUNDS) const
	static int _bind_GetSubItemRect(lua_State *L) {
		if (!_lg_typecheck_GetSubItemRect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::GetSubItemRect(long item, long subItem, wxRect & rect, int code = ::wxLIST_RECT_BOUNDS) const function, expected prototype:\nbool wxListCtrl::GetSubItemRect(long item, long subItem, wxRect & rect, int code = ::wxLIST_RECT_BOUNDS) const\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tonumber(L,2);
		long subItem=(long)lua_tonumber(L,3);
		wxRect* rect_ptr=(Luna< wxRect >::check(L,4));
		if( !rect_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rect in wxListCtrl::GetSubItemRect function");
		}
		wxRect & rect=*rect_ptr;
		int code=luatop>4 ? (int)lua_tointeger(L,5) : (int)::wxLIST_RECT_BOUNDS;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::GetSubItemRect(long, long, wxRect &, int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetSubItemRect(item, subItem, rect, code);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxColour wxListCtrl::GetTextColour() const
	static int _bind_GetTextColour(lua_State *L) {
		if (!_lg_typecheck_GetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in wxColour wxListCtrl::GetTextColour() const function, expected prototype:\nwxColour wxListCtrl::GetTextColour() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxColour wxListCtrl::GetTextColour() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxColour stack_lret = self->GetTextColour();
		wxColour* lret = new wxColour(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxColour >::push(L,lret,true);

		return 1;
	}

	// long wxListCtrl::GetTopItem() const
	static int _bind_GetTopItem(lua_State *L) {
		if (!_lg_typecheck_GetTopItem(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::GetTopItem() const function, expected prototype:\nlong wxListCtrl::GetTopItem() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::GetTopItem() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->GetTopItem();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxRect wxListCtrl::GetViewRect() const
	static int _bind_GetViewRect(lua_State *L) {
		if (!_lg_typecheck_GetViewRect(L)) {
			luaL_error(L, "luna typecheck failed in wxRect wxListCtrl::GetViewRect() const function, expected prototype:\nwxRect wxListCtrl::GetViewRect() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxRect wxListCtrl::GetViewRect() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxRect stack_lret = self->GetViewRect();
		wxRect* lret = new wxRect(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxRect >::push(L,lret,true);

		return 1;
	}

	// long wxListCtrl::HitTest(const wxPoint & point, int & flags, long * ptrSubItem = NULL) const
	static int _bind_HitTest(lua_State *L) {
		if (!_lg_typecheck_HitTest(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::HitTest(const wxPoint & point, int & flags, long * ptrSubItem = NULL) const function, expected prototype:\nlong wxListCtrl::HitTest(const wxPoint & point, int & flags, long * ptrSubItem = NULL) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxListCtrl::HitTest function");
		}
		const wxPoint & point=*point_ptr;
		int flags=(int)lua_tointeger(L,3);
		long* ptrSubItem=luatop>3 ? (long*)Luna< void >::check(L,4) : (long*)NULL;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::HitTest(const wxPoint &, int &, long *) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->HitTest(point, flags, ptrSubItem);
		lua_pushnumber(L,lret);

		lua_pushnumber(L,flags);
		return 2;
	}

	// long wxListCtrl::InsertColumn(long col, wxListItem & info)
	static int _bind_InsertColumn_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertColumn_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertColumn(long col, wxListItem & info) function, expected prototype:\nlong wxListCtrl::InsertColumn(long col, wxListItem & info)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		long col=(long)lua_tonumber(L,2);
		wxListItem* info_ptr=(Luna< wxObject >::checkSubType< wxListItem >(L,3));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxListCtrl::InsertColumn function");
		}
		wxListItem & info=*info_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertColumn(long, wxListItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->InsertColumn(col, info);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::InsertColumn(long col, const wxString & heading, int format = ::wxLIST_FORMAT_LEFT, int width = -1)
	static int _bind_InsertColumn_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertColumn_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertColumn(long col, const wxString & heading, int format = ::wxLIST_FORMAT_LEFT, int width = -1) function, expected prototype:\nlong wxListCtrl::InsertColumn(long col, const wxString & heading, int format = ::wxLIST_FORMAT_LEFT, int width = -1)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long col=(long)lua_tonumber(L,2);
		wxString heading(lua_tostring(L,3),lua_objlen(L,3));
		int format=luatop>3 ? (int)lua_tointeger(L,4) : (int)::wxLIST_FORMAT_LEFT;
		int width=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertColumn(long, const wxString &, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->InsertColumn(col, heading, format, width);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxListCtrl::InsertColumn
	static int _bind_InsertColumn(lua_State *L) {
		if (_lg_typecheck_InsertColumn_overload_1(L)) return _bind_InsertColumn_overload_1(L);
		if (_lg_typecheck_InsertColumn_overload_2(L)) return _bind_InsertColumn_overload_2(L);

		luaL_error(L, "error in function InsertColumn, cannot match any of the overloads for function InsertColumn:\n  InsertColumn(long, wxListItem &)\n  InsertColumn(long, const wxString &, int, int)\n");
		return 0;
	}

	// long wxListCtrl::InsertItem(wxListItem & info)
	static int _bind_InsertItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertItem(wxListItem & info) function, expected prototype:\nlong wxListCtrl::InsertItem(wxListItem & info)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxListItem* info_ptr=(Luna< wxObject >::checkSubType< wxListItem >(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxListCtrl::InsertItem function");
		}
		wxListItem & info=*info_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertItem(wxListItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->InsertItem(info);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::InsertItem(long index, const wxString & label)
	static int _bind_InsertItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertItem(long index, const wxString & label) function, expected prototype:\nlong wxListCtrl::InsertItem(long index, const wxString & label)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		long index=(long)lua_tonumber(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertItem(long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->InsertItem(index, label);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::InsertItem(long index, int imageIndex)
	static int _bind_InsertItem_overload_3(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertItem(long index, int imageIndex) function, expected prototype:\nlong wxListCtrl::InsertItem(long index, int imageIndex)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long index=(long)lua_tonumber(L,2);
		int imageIndex=(int)lua_tointeger(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertItem(long, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->InsertItem(index, imageIndex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// long wxListCtrl::InsertItem(long index, const wxString & label, int imageIndex)
	static int _bind_InsertItem_overload_4(lua_State *L) {
		if (!_lg_typecheck_InsertItem_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::InsertItem(long index, const wxString & label, int imageIndex) function, expected prototype:\nlong wxListCtrl::InsertItem(long index, const wxString & label, int imageIndex)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		long index=(long)lua_tonumber(L,2);
		wxString label(lua_tostring(L,3),lua_objlen(L,3));
		int imageIndex=(int)lua_tointeger(L,4);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::InsertItem(long, const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->InsertItem(index, label, imageIndex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxListCtrl::InsertItem
	static int _bind_InsertItem(lua_State *L) {
		if (_lg_typecheck_InsertItem_overload_1(L)) return _bind_InsertItem_overload_1(L);
		if (_lg_typecheck_InsertItem_overload_2(L)) return _bind_InsertItem_overload_2(L);
		if (_lg_typecheck_InsertItem_overload_3(L)) return _bind_InsertItem_overload_3(L);
		if (_lg_typecheck_InsertItem_overload_4(L)) return _bind_InsertItem_overload_4(L);

		luaL_error(L, "error in function InsertItem, cannot match any of the overloads for function InsertItem:\n  InsertItem(wxListItem &)\n  InsertItem(long, const wxString &)\n  InsertItem(long, int)\n  InsertItem(long, const wxString &, int)\n");
		return 0;
	}

	// void wxListCtrl::RefreshItem(long item)
	static int _bind_RefreshItem(lua_State *L) {
		if (!_lg_typecheck_RefreshItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::RefreshItem(long item) function, expected prototype:\nvoid wxListCtrl::RefreshItem(long item)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::RefreshItem(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshItem(item);

		return 0;
	}

	// void wxListCtrl::RefreshItems(long itemFrom, long itemTo)
	static int _bind_RefreshItems(lua_State *L) {
		if (!_lg_typecheck_RefreshItems(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::RefreshItems(long itemFrom, long itemTo) function, expected prototype:\nvoid wxListCtrl::RefreshItems(long itemFrom, long itemTo)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long itemFrom=(long)lua_tonumber(L,2);
		long itemTo=(long)lua_tonumber(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::RefreshItems(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RefreshItems(itemFrom, itemTo);

		return 0;
	}

	// bool wxListCtrl::ScrollList(int dx, int dy)
	static int _bind_ScrollList(lua_State *L) {
		if (!_lg_typecheck_ScrollList(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::ScrollList(int dx, int dy) function, expected prototype:\nbool wxListCtrl::ScrollList(int dx, int dy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::ScrollList(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ScrollList(dx, dy);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetBackgroundColour(const wxColour & col)
	static int _bind_SetBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetBackgroundColour(const wxColour & col) function, expected prototype:\nbool wxListCtrl::SetBackgroundColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxListCtrl::SetBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetBackgroundColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetBackgroundColour(col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetColumn(int col, wxListItem & item)
	static int _bind_SetColumn(lua_State *L) {
		if (!_lg_typecheck_SetColumn(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetColumn(int col, wxListItem & item) function, expected prototype:\nbool wxListCtrl::SetColumn(int col, wxListItem & item)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);
		wxListItem* item_ptr=(Luna< wxObject >::checkSubType< wxListItem >(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxListCtrl::SetColumn function");
		}
		wxListItem & item=*item_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetColumn(int, wxListItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetColumn(col, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetColumnWidth(int col, int width)
	static int _bind_SetColumnWidth(lua_State *L) {
		if (!_lg_typecheck_SetColumnWidth(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetColumnWidth(int col, int width) function, expected prototype:\nbool wxListCtrl::SetColumnWidth(int col, int width)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);
		int width=(int)lua_tointeger(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetColumnWidth(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetColumnWidth(col, width);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetColumnsOrder(const wxArrayInt & orders) const
	static int _bind_SetColumnsOrder(lua_State *L) {
		if (!_lg_typecheck_SetColumnsOrder(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetColumnsOrder(const wxArrayInt & orders) const function, expected prototype:\nbool wxListCtrl::SetColumnsOrder(const wxArrayInt & orders) const\nClass arguments details:\narg 1 ID = 47342076\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxArrayInt* orders_ptr=(Luna< wxArrayInt >::check(L,2));
		if( !orders_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg orders in wxListCtrl::SetColumnsOrder function");
		}
		const wxArrayInt & orders=*orders_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetColumnsOrder(const wxArrayInt &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetColumnsOrder(orders);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::SetImageList(wxImageList * imageList, int which)
	static int _bind_SetImageList(lua_State *L) {
		if (!_lg_typecheck_SetImageList(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetImageList(wxImageList * imageList, int which) function, expected prototype:\nvoid wxListCtrl::SetImageList(wxImageList * imageList, int which)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxImageList* imageList=(Luna< wxObject >::checkSubType< wxImageList >(L,2));
		int which=(int)lua_tointeger(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetImageList(wxImageList *, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetImageList(imageList, which);

		return 0;
	}

	// bool wxListCtrl::SetItem(wxListItem & info)
	static int _bind_SetItem_overload_1(lua_State *L) {
		if (!_lg_typecheck_SetItem_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItem(wxListItem & info) function, expected prototype:\nbool wxListCtrl::SetItem(wxListItem & info)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxListItem* info_ptr=(Luna< wxObject >::checkSubType< wxListItem >(L,2));
		if( !info_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg info in wxListCtrl::SetItem function");
		}
		wxListItem & info=*info_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItem(wxListItem &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItem(info);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// long wxListCtrl::SetItem(long index, int column, const wxString & label, int imageId = -1)
	static int _bind_SetItem_overload_2(lua_State *L) {
		if (!_lg_typecheck_SetItem_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::SetItem(long index, int column, const wxString & label, int imageId = -1) function, expected prototype:\nlong wxListCtrl::SetItem(long index, int column, const wxString & label, int imageId = -1)\nClass arguments details:\narg 3 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long index=(long)lua_tonumber(L,2);
		int column=(int)lua_tointeger(L,3);
		wxString label(lua_tostring(L,4),lua_objlen(L,4));
		int imageId=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::SetItem(long, int, const wxString &, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->SetItem(index, column, label, imageId);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for wxListCtrl::SetItem
	static int _bind_SetItem(lua_State *L) {
		if (_lg_typecheck_SetItem_overload_1(L)) return _bind_SetItem_overload_1(L);
		if (_lg_typecheck_SetItem_overload_2(L)) return _bind_SetItem_overload_2(L);

		luaL_error(L, "error in function SetItem, cannot match any of the overloads for function SetItem:\n  SetItem(wxListItem &)\n  SetItem(long, int, const wxString &, int)\n");
		return 0;
	}

	// void wxListCtrl::SetItemBackgroundColour(long item, const wxColour & col)
	static int _bind_SetItemBackgroundColour(lua_State *L) {
		if (!_lg_typecheck_SetItemBackgroundColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetItemBackgroundColour(long item, const wxColour & col) function, expected prototype:\nvoid wxListCtrl::SetItemBackgroundColour(long item, const wxColour & col)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);
		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxListCtrl::SetItemBackgroundColour function");
		}
		const wxColour & col=*col_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetItemBackgroundColour(long, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemBackgroundColour(item, col);

		return 0;
	}

	// bool wxListCtrl::SetItemColumnImage(long item, long column, int image)
	static int _bind_SetItemColumnImage(lua_State *L) {
		if (!_lg_typecheck_SetItemColumnImage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemColumnImage(long item, long column, int image) function, expected prototype:\nbool wxListCtrl::SetItemColumnImage(long item, long column, int image)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);
		long column=(long)lua_tonumber(L,3);
		int image=(int)lua_tointeger(L,4);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemColumnImage(long, long, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemColumnImage(item, column, image);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::SetItemCount(long count)
	static int _bind_SetItemCount(lua_State *L) {
		if (!_lg_typecheck_SetItemCount(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetItemCount(long count) function, expected prototype:\nvoid wxListCtrl::SetItemCount(long count)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long count=(long)lua_tonumber(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetItemCount(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemCount(count);

		return 0;
	}

	// bool wxListCtrl::SetItemData(long item, long data)
	static int _bind_SetItemData(lua_State *L) {
		if (!_lg_typecheck_SetItemData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemData(long item, long data) function, expected prototype:\nbool wxListCtrl::SetItemData(long item, long data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);
		long data=(long)lua_tonumber(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemData(long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemData(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::SetItemFont(long item, const wxFont & font)
	static int _bind_SetItemFont(lua_State *L) {
		if (!_lg_typecheck_SetItemFont(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetItemFont(long item, const wxFont & font) function, expected prototype:\nvoid wxListCtrl::SetItemFont(long item, const wxFont & font)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);
		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,3));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxListCtrl::SetItemFont function");
		}
		const wxFont & font=*font_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetItemFont(long, const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemFont(item, font);

		return 0;
	}

	// bool wxListCtrl::SetItemImage(long item, int image, int selImage = -1)
	static int _bind_SetItemImage(lua_State *L) {
		if (!_lg_typecheck_SetItemImage(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemImage(long item, int image, int selImage = -1) function, expected prototype:\nbool wxListCtrl::SetItemImage(long item, int image, int selImage = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long item=(long)lua_tonumber(L,2);
		int image=(int)lua_tointeger(L,3);
		int selImage=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemImage(long, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemImage(item, image, selImage);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetItemPosition(long item, const wxPoint & pos)
	static int _bind_SetItemPosition(lua_State *L) {
		if (!_lg_typecheck_SetItemPosition(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemPosition(long item, const wxPoint & pos) function, expected prototype:\nbool wxListCtrl::SetItemPosition(long item, const wxPoint & pos)\nClass arguments details:\narg 2 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);
		const wxPoint* pos_ptr=(Luna< wxPoint >::check(L,3));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in wxListCtrl::SetItemPosition function");
		}
		const wxPoint & pos=*pos_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemPosition(long, const wxPoint &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemPosition(item, pos);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetItemPtrData(long item, size_t data)
	static int _bind_SetItemPtrData(lua_State *L) {
		if (!_lg_typecheck_SetItemPtrData(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemPtrData(long item, size_t data) function, expected prototype:\nbool wxListCtrl::SetItemPtrData(long item, size_t data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);
		size_t data=(size_t)lua_tointeger(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemPtrData(long, size_t). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemPtrData(item, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::SetItemState(long item, long state, long stateMask)
	static int _bind_SetItemState(lua_State *L) {
		if (!_lg_typecheck_SetItemState(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::SetItemState(long item, long state, long stateMask) function, expected prototype:\nbool wxListCtrl::SetItemState(long item, long state, long stateMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);
		long state=(long)lua_tonumber(L,3);
		long stateMask=(long)lua_tonumber(L,4);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::SetItemState(long, long, long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->SetItemState(item, state, stateMask);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::SetItemText(long item, const wxString & text)
	static int _bind_SetItemText(lua_State *L) {
		if (!_lg_typecheck_SetItemText(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetItemText(long item, const wxString & text) function, expected prototype:\nvoid wxListCtrl::SetItemText(long item, const wxString & text)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);
		wxString text(lua_tostring(L,3),lua_objlen(L,3));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetItemText(long, const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemText(item, text);

		return 0;
	}

	// void wxListCtrl::SetItemTextColour(long item, const wxColour & col)
	static int _bind_SetItemTextColour(lua_State *L) {
		if (!_lg_typecheck_SetItemTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetItemTextColour(long item, const wxColour & col) function, expected prototype:\nvoid wxListCtrl::SetItemTextColour(long item, const wxColour & col)\nClass arguments details:\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		long item=(long)lua_tonumber(L,2);
		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,3));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxListCtrl::SetItemTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetItemTextColour(long, const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemTextColour(item, col);

		return 0;
	}

	// void wxListCtrl::SetSingleStyle(long style, bool add = true)
	static int _bind_SetSingleStyle(lua_State *L) {
		if (!_lg_typecheck_SetSingleStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetSingleStyle(long style, bool add = true) function, expected prototype:\nvoid wxListCtrl::SetSingleStyle(long style, bool add = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long style=(long)lua_tonumber(L,2);
		bool add=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetSingleStyle(long, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetSingleStyle(style, add);

		return 0;
	}

	// void wxListCtrl::SetTextColour(const wxColour & col)
	static int _bind_SetTextColour(lua_State *L) {
		if (!_lg_typecheck_SetTextColour(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetTextColour(const wxColour & col) function, expected prototype:\nvoid wxListCtrl::SetTextColour(const wxColour & col)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxColour* col_ptr=(Luna< wxObject >::checkSubType< wxColour >(L,2));
		if( !col_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg col in wxListCtrl::SetTextColour function");
		}
		const wxColour & col=*col_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetTextColour(const wxColour &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetTextColour(col);

		return 0;
	}

	// void wxListCtrl::SetWindowStyleFlag(long style)
	static int _bind_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxListCtrl::SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetWindowStyleFlag(style);

		return 0;
	}

	// wxClassInfo * wxListCtrl::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxListCtrl::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxListCtrl::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxListCtrl::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxListCtrl::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}

	// bool wxListCtrl::base_AcceptsFocus() const
	static int _bind_base_AcceptsFocus(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_AcceptsFocus() const function, expected prototype:\nbool wxListCtrl::base_AcceptsFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_AcceptsFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::AcceptsFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_AcceptsFocusFromKeyboard() const
	static int _bind_base_AcceptsFocusFromKeyboard(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusFromKeyboard(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_AcceptsFocusFromKeyboard() const function, expected prototype:\nbool wxListCtrl::base_AcceptsFocusFromKeyboard() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_AcceptsFocusFromKeyboard() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::AcceptsFocusFromKeyboard();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_AcceptsFocusRecursively() const
	static int _bind_base_AcceptsFocusRecursively(lua_State *L) {
		if (!_lg_typecheck_base_AcceptsFocusRecursively(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_AcceptsFocusRecursively() const function, expected prototype:\nbool wxListCtrl::base_AcceptsFocusRecursively() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_AcceptsFocusRecursively() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::AcceptsFocusRecursively();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_HasFocus() const
	static int _bind_base_HasFocus(lua_State *L) {
		if (!_lg_typecheck_base_HasFocus(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_HasFocus() const function, expected prototype:\nbool wxListCtrl::base_HasFocus() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_HasFocus() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::HasFocus();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::base_SetCanFocus(bool canFocus)
	static int _bind_base_SetCanFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetCanFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetCanFocus(bool canFocus) function, expected prototype:\nvoid wxListCtrl::base_SetCanFocus(bool canFocus)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool canFocus=(bool)(lua_toboolean(L,2)==1);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetCanFocus(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetCanFocus(canFocus);

		return 0;
	}

	// void wxListCtrl::base_SetFocus()
	static int _bind_base_SetFocus(lua_State *L) {
		if (!_lg_typecheck_base_SetFocus(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetFocus() function, expected prototype:\nvoid wxListCtrl::base_SetFocus()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetFocus(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetFocus();

		return 0;
	}

	// void wxListCtrl::base_SetFocusFromKbd()
	static int _bind_base_SetFocusFromKbd(lua_State *L) {
		if (!_lg_typecheck_base_SetFocusFromKbd(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetFocusFromKbd() function, expected prototype:\nvoid wxListCtrl::base_SetFocusFromKbd()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetFocusFromKbd(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetFocusFromKbd();

		return 0;
	}

	// void wxListCtrl::base_AddChild(wxWindow * child)
	static int _bind_base_AddChild(lua_State *L) {
		if (!_lg_typecheck_base_AddChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_AddChild(wxWindow * child) function, expected prototype:\nvoid wxListCtrl::base_AddChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_AddChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::AddChild(child);

		return 0;
	}

	// void wxListCtrl::base_RemoveChild(wxWindow * child)
	static int _bind_base_RemoveChild(lua_State *L) {
		if (!_lg_typecheck_base_RemoveChild(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_RemoveChild(wxWindow * child) function, expected prototype:\nvoid wxListCtrl::base_RemoveChild(wxWindow * child)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* child=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_RemoveChild(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::RemoveChild(child);

		return 0;
	}

	// bool wxListCtrl::base_Reparent(wxWindow * newParent)
	static int _bind_base_Reparent(lua_State *L) {
		if (!_lg_typecheck_base_Reparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_Reparent(wxWindow * newParent) function, expected prototype:\nbool wxListCtrl::base_Reparent(wxWindow * newParent)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxWindow* newParent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_Reparent(wxWindow *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::Reparent(newParent);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	static int _bind_base_AlwaysShowScrollbars(lua_State *L) {
		if (!_lg_typecheck_base_AlwaysShowScrollbars(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true) function, expected prototype:\nvoid wxListCtrl::base_AlwaysShowScrollbars(bool hflag = true, bool vflag = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool hflag=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		bool vflag=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)true;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_AlwaysShowScrollbars(bool, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::AlwaysShowScrollbars(hflag, vflag);

		return 0;
	}

	// int wxListCtrl::base_GetScrollPos(int orientation) const
	static int _bind_base_GetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::base_GetScrollPos(int orientation) const function, expected prototype:\nint wxListCtrl::base_GetScrollPos(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::base_GetScrollPos(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxListCtrl::GetScrollPos(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::base_GetScrollRange(int orientation) const
	static int _bind_base_GetScrollRange(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollRange(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::base_GetScrollRange(int orientation) const function, expected prototype:\nint wxListCtrl::base_GetScrollRange(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::base_GetScrollRange(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxListCtrl::GetScrollRange(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::base_GetScrollThumb(int orientation) const
	static int _bind_base_GetScrollThumb(lua_State *L) {
		if (!_lg_typecheck_base_GetScrollThumb(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::base_GetScrollThumb(int orientation) const function, expected prototype:\nint wxListCtrl::base_GetScrollThumb(int orientation) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orientation=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::base_GetScrollThumb(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxListCtrl::GetScrollThumb(orientation);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxListCtrl::base_IsScrollbarAlwaysShown(int orient) const
	static int _bind_base_IsScrollbarAlwaysShown(lua_State *L) {
		if (!_lg_typecheck_base_IsScrollbarAlwaysShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_IsScrollbarAlwaysShown(int orient) const function, expected prototype:\nbool wxListCtrl::base_IsScrollbarAlwaysShown(int orient) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int orient=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_IsScrollbarAlwaysShown(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::IsScrollbarAlwaysShown(orient);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_ScrollLines(int lines)
	static int _bind_base_ScrollLines(lua_State *L) {
		if (!_lg_typecheck_base_ScrollLines(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_ScrollLines(int lines) function, expected prototype:\nbool wxListCtrl::base_ScrollLines(int lines)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int lines=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_ScrollLines(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::ScrollLines(lines);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_ScrollPages(int pages)
	static int _bind_base_ScrollPages(lua_State *L) {
		if (!_lg_typecheck_base_ScrollPages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_ScrollPages(int pages) function, expected prototype:\nbool wxListCtrl::base_ScrollPages(int pages)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int pages=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_ScrollPages(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::ScrollPages(pages);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	static int _bind_base_ScrollWindow(lua_State *L) {
		if (!_lg_typecheck_base_ScrollWindow(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL) function, expected prototype:\nvoid wxListCtrl::base_ScrollWindow(int dx, int dy, const wxRect * rect = NULL)\nClass arguments details:\narg 3 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int dx=(int)lua_tointeger(L,2);
		int dy=(int)lua_tointeger(L,3);
		const wxRect* rect=luatop>3 ? (Luna< wxRect >::check(L,4)) : (const wxRect*)NULL;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_ScrollWindow(int, int, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::ScrollWindow(dx, dy, rect);

		return 0;
	}

	// void wxListCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)
	static int _bind_base_SetScrollPos(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollPos(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true) function, expected prototype:\nvoid wxListCtrl::base_SetScrollPos(int orientation, int pos, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int pos=(int)lua_tointeger(L,3);
		bool refresh=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetScrollPos(int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetScrollPos(orientation, pos, refresh);

		return 0;
	}

	// void wxListCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	static int _bind_base_SetScrollbar(lua_State *L) {
		if (!_lg_typecheck_base_SetScrollbar(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) function, expected prototype:\nvoid wxListCtrl::base_SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int orientation=(int)lua_tointeger(L,2);
		int position=(int)lua_tointeger(L,3);
		int thumbSize=(int)lua_tointeger(L,4);
		int range=(int)lua_tointeger(L,5);
		bool refresh=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetScrollbar(int, int, int, int, bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);

		return 0;
	}

	// wxSize wxListCtrl::base_ClientToWindowSize(const wxSize & size) const
	static int _bind_base_ClientToWindowSize(lua_State *L) {
		if (!_lg_typecheck_base_ClientToWindowSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxListCtrl::base_ClientToWindowSize(const wxSize & size) const function, expected prototype:\nwxSize wxListCtrl::base_ClientToWindowSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListCtrl::base_ClientToWindowSize function");
		}
		const wxSize & size=*size_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxListCtrl::base_ClientToWindowSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxListCtrl::ClientToWindowSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListCtrl::base_WindowToClientSize(const wxSize & size) const
	static int _bind_base_WindowToClientSize(lua_State *L) {
		if (!_lg_typecheck_base_WindowToClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxListCtrl::base_WindowToClientSize(const wxSize & size) const function, expected prototype:\nwxSize wxListCtrl::base_WindowToClientSize(const wxSize & size) const\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListCtrl::base_WindowToClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxListCtrl::base_WindowToClientSize(const wxSize &) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxListCtrl::WindowToClientSize(size);
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// void wxListCtrl::base_Fit()
	static int _bind_base_Fit(lua_State *L) {
		if (!_lg_typecheck_base_Fit(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_Fit() function, expected prototype:\nvoid wxListCtrl::base_Fit()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_Fit(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::Fit();

		return 0;
	}

	// void wxListCtrl::base_FitInside()
	static int _bind_base_FitInside(lua_State *L) {
		if (!_lg_typecheck_base_FitInside(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_FitInside() function, expected prototype:\nvoid wxListCtrl::base_FitInside()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_FitInside(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::FitInside();

		return 0;
	}

	// wxSize wxListCtrl::base_GetEffectiveMinSize() const
	static int _bind_base_GetEffectiveMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetEffectiveMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxListCtrl::base_GetEffectiveMinSize() const function, expected prototype:\nwxSize wxListCtrl::base_GetEffectiveMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxListCtrl::base_GetEffectiveMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxListCtrl::GetEffectiveMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListCtrl::base_GetMaxClientSize() const
	static int _bind_base_GetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxListCtrl::base_GetMaxClientSize() const function, expected prototype:\nwxSize wxListCtrl::base_GetMaxClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxListCtrl::base_GetMaxClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxListCtrl::GetMaxClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListCtrl::base_GetMaxSize() const
	static int _bind_base_GetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxListCtrl::base_GetMaxSize() const function, expected prototype:\nwxSize wxListCtrl::base_GetMaxSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxListCtrl::base_GetMaxSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxListCtrl::GetMaxSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListCtrl::base_GetMinClientSize() const
	static int _bind_base_GetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxListCtrl::base_GetMinClientSize() const function, expected prototype:\nwxSize wxListCtrl::base_GetMinClientSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxListCtrl::base_GetMinClientSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxListCtrl::GetMinClientSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListCtrl::base_GetMinSize() const
	static int _bind_base_GetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_GetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxListCtrl::base_GetMinSize() const function, expected prototype:\nwxSize wxListCtrl::base_GetMinSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxListCtrl::base_GetMinSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxListCtrl::GetMinSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListCtrl::base_GetBestVirtualSize() const
	static int _bind_base_GetBestVirtualSize(lua_State *L) {
		if (!_lg_typecheck_base_GetBestVirtualSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxListCtrl::base_GetBestVirtualSize() const function, expected prototype:\nwxSize wxListCtrl::base_GetBestVirtualSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxListCtrl::base_GetBestVirtualSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxListCtrl::GetBestVirtualSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// wxSize wxListCtrl::base_GetWindowBorderSize() const
	static int _bind_base_GetWindowBorderSize(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowBorderSize(L)) {
			luaL_error(L, "luna typecheck failed in wxSize wxListCtrl::base_GetWindowBorderSize() const function, expected prototype:\nwxSize wxListCtrl::base_GetWindowBorderSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxSize wxListCtrl::base_GetWindowBorderSize() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxSize stack_lret = self->wxListCtrl::GetWindowBorderSize();
		wxSize* lret = new wxSize(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxSize >::push(L,lret,true);

		return 1;
	}

	// bool wxListCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)
	static int _bind_base_InformFirstDirection(lua_State *L) {
		if (!_lg_typecheck_base_InformFirstDirection(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir) function, expected prototype:\nbool wxListCtrl::base_InformFirstDirection(int direction, int size, int availableOtherDir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int direction=(int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);
		int availableOtherDir=(int)lua_tointeger(L,4);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_InformFirstDirection(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::InformFirstDirection(direction, size, availableOtherDir);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::base_SendSizeEvent(int flags = 0)
	static int _bind_base_SendSizeEvent(lua_State *L) {
		if (!_lg_typecheck_base_SendSizeEvent(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SendSizeEvent(int flags = 0) function, expected prototype:\nvoid wxListCtrl::base_SendSizeEvent(int flags = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int flags=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SendSizeEvent(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SendSizeEvent(flags);

		return 0;
	}

	// void wxListCtrl::base_SetMaxClientSize(const wxSize & size)
	static int _bind_base_SetMaxClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetMaxClientSize(const wxSize & size) function, expected prototype:\nvoid wxListCtrl::base_SetMaxClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListCtrl::base_SetMaxClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetMaxClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetMaxClientSize(size);

		return 0;
	}

	// void wxListCtrl::base_SetMaxSize(const wxSize & size)
	static int _bind_base_SetMaxSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMaxSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetMaxSize(const wxSize & size) function, expected prototype:\nvoid wxListCtrl::base_SetMaxSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListCtrl::base_SetMaxSize function");
		}
		const wxSize & size=*size_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetMaxSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetMaxSize(size);

		return 0;
	}

	// void wxListCtrl::base_SetMinClientSize(const wxSize & size)
	static int _bind_base_SetMinClientSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinClientSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetMinClientSize(const wxSize & size) function, expected prototype:\nvoid wxListCtrl::base_SetMinClientSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListCtrl::base_SetMinClientSize function");
		}
		const wxSize & size=*size_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetMinClientSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetMinClientSize(size);

		return 0;
	}

	// void wxListCtrl::base_SetMinSize(const wxSize & size)
	static int _bind_base_SetMinSize(lua_State *L) {
		if (!_lg_typecheck_base_SetMinSize(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetMinSize(const wxSize & size) function, expected prototype:\nvoid wxListCtrl::base_SetMinSize(const wxSize & size)\nClass arguments details:\narg 1 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxSize* size_ptr=(Luna< wxSize >::check(L,2));
		if( !size_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg size in wxListCtrl::base_SetMinSize function");
		}
		const wxSize & size=*size_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetMinSize(const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetMinSize(size);

		return 0;
	}

	// void wxListCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	static int _bind_base_SetSizeHints_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) function, expected prototype:\nvoid wxListCtrl::base_SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)\nClass arguments details:\narg 1 ID = 20268751\narg 2 ID = 20268751\narg 3 ID = 20268751\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxSize* minSize_ptr=(Luna< wxSize >::check(L,2));
		if( !minSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg minSize in wxListCtrl::base_SetSizeHints function");
		}
		const wxSize & minSize=*minSize_ptr;
		const wxSize* maxSize_ptr=luatop>2 ? (Luna< wxSize >::check(L,3)) : NULL;
		if( luatop>2 && !maxSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg maxSize in wxListCtrl::base_SetSizeHints function");
		}
		const wxSize & maxSize=luatop>2 ? *maxSize_ptr : (const wxSize&)wxDefaultSize;
		const wxSize* incSize_ptr=luatop>3 ? (Luna< wxSize >::check(L,4)) : NULL;
		if( luatop>3 && !incSize_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg incSize in wxListCtrl::base_SetSizeHints function");
		}
		const wxSize & incSize=luatop>3 ? *incSize_ptr : (const wxSize&)wxDefaultSize;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetSizeHints(minSize, maxSize, incSize);

		return 0;
	}

	// void wxListCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	static int _bind_base_SetSizeHints_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_SetSizeHints_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) function, expected prototype:\nvoid wxListCtrl::base_SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int minW=(int)lua_tointeger(L,2);
		int minH=(int)lua_tointeger(L,3);
		int maxW=luatop>3 ? (int)lua_tointeger(L,4) : (int)-1;
		int maxH=luatop>4 ? (int)lua_tointeger(L,5) : (int)-1;
		int incW=luatop>5 ? (int)lua_tointeger(L,6) : (int)-1;
		int incH=luatop>6 ? (int)lua_tointeger(L,7) : (int)-1;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetSizeHints(int, int, int, int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);

		return 0;
	}

	// Overload binder for wxListCtrl::base_SetSizeHints
	static int _bind_base_SetSizeHints(lua_State *L) {
		if (_lg_typecheck_base_SetSizeHints_overload_1(L)) return _bind_base_SetSizeHints_overload_1(L);
		if (_lg_typecheck_base_SetSizeHints_overload_2(L)) return _bind_base_SetSizeHints_overload_2(L);

		luaL_error(L, "error in function base_SetSizeHints, cannot match any of the overloads for function base_SetSizeHints:\n  base_SetSizeHints(const wxSize &, const wxSize &, const wxSize &)\n  base_SetSizeHints(int, int, int, int, int, int)\n");
		return 0;
	}

	// wxPoint wxListCtrl::base_GetClientAreaOrigin() const
	static int _bind_base_GetClientAreaOrigin(lua_State *L) {
		if (!_lg_typecheck_base_GetClientAreaOrigin(L)) {
			luaL_error(L, "luna typecheck failed in wxPoint wxListCtrl::base_GetClientAreaOrigin() const function, expected prototype:\nwxPoint wxListCtrl::base_GetClientAreaOrigin() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPoint wxListCtrl::base_GetClientAreaOrigin() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxPoint stack_lret = self->wxListCtrl::GetClientAreaOrigin();
		wxPoint* lret = new wxPoint(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPoint >::push(L,lret,true);

		return 1;
	}

	// void wxListCtrl::base_ClearBackground()
	static int _bind_base_ClearBackground(lua_State *L) {
		if (!_lg_typecheck_base_ClearBackground(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_ClearBackground() function, expected prototype:\nvoid wxListCtrl::base_ClearBackground()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_ClearBackground(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::ClearBackground();

		return 0;
	}

	// wxBackgroundStyle wxListCtrl::base_GetBackgroundStyle() const
	static int _bind_base_GetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_GetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in wxBackgroundStyle wxListCtrl::base_GetBackgroundStyle() const function, expected prototype:\nwxBackgroundStyle wxListCtrl::base_GetBackgroundStyle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxBackgroundStyle wxListCtrl::base_GetBackgroundStyle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxBackgroundStyle lret = self->wxListCtrl::GetBackgroundStyle();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::base_GetCharHeight() const
	static int _bind_base_GetCharHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetCharHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::base_GetCharHeight() const function, expected prototype:\nint wxListCtrl::base_GetCharHeight() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::base_GetCharHeight() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxListCtrl::GetCharHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxListCtrl::base_GetCharWidth() const
	static int _bind_base_GetCharWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetCharWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxListCtrl::base_GetCharWidth() const function, expected prototype:\nint wxListCtrl::base_GetCharWidth() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxListCtrl::base_GetCharWidth() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxListCtrl::GetCharWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxVisualAttributes wxListCtrl::base_GetDefaultAttributes() const
	static int _bind_base_GetDefaultAttributes(lua_State *L) {
		if (!_lg_typecheck_base_GetDefaultAttributes(L)) {
			luaL_error(L, "luna typecheck failed in wxVisualAttributes wxListCtrl::base_GetDefaultAttributes() const function, expected prototype:\nwxVisualAttributes wxListCtrl::base_GetDefaultAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxVisualAttributes wxListCtrl::base_GetDefaultAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxVisualAttributes stack_lret = self->wxListCtrl::GetDefaultAttributes();
		wxVisualAttributes* lret = new wxVisualAttributes(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxVisualAttributes >::push(L,lret,true);

		return 1;
	}

	// void wxListCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	static int _bind_base_Refresh(lua_State *L) {
		if (!_lg_typecheck_base_Refresh(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL) function, expected prototype:\nvoid wxListCtrl::base_Refresh(bool eraseBackground = true, const wxRect * rect = NULL)\nClass arguments details:\narg 2 ID = 20234418\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool eraseBackground=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;
		const wxRect* rect=luatop>2 ? (Luna< wxRect >::check(L,3)) : (const wxRect*)NULL;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_Refresh(bool, const wxRect *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::Refresh(eraseBackground, rect);

		return 0;
	}

	// void wxListCtrl::base_Update()
	static int _bind_base_Update(lua_State *L) {
		if (!_lg_typecheck_base_Update(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_Update() function, expected prototype:\nvoid wxListCtrl::base_Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_Update(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::Update();

		return 0;
	}

	// bool wxListCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)
	static int _bind_base_SetBackgroundStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetBackgroundStyle(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_SetBackgroundStyle(wxBackgroundStyle style) function, expected prototype:\nbool wxListCtrl::base_SetBackgroundStyle(wxBackgroundStyle style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxBackgroundStyle style=(wxBackgroundStyle)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_SetBackgroundStyle(wxBackgroundStyle). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::SetBackgroundStyle(style);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_SetFont(const wxFont & font)
	static int _bind_base_SetFont(lua_State *L) {
		if (!_lg_typecheck_base_SetFont(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_SetFont(const wxFont & font) function, expected prototype:\nbool wxListCtrl::base_SetFont(const wxFont & font)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxFont* font_ptr=(Luna< wxObject >::checkSubType< wxFont >(L,2));
		if( !font_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg font in wxListCtrl::base_SetFont function");
		}
		const wxFont & font=*font_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_SetFont(const wxFont &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::SetFont(font);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_ShouldInheritColours() const
	static int _bind_base_ShouldInheritColours(lua_State *L) {
		if (!_lg_typecheck_base_ShouldInheritColours(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_ShouldInheritColours() const function, expected prototype:\nbool wxListCtrl::base_ShouldInheritColours() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_ShouldInheritColours() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::ShouldInheritColours();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::base_SetThemeEnabled(bool enable)
	static int _bind_base_SetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_SetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetThemeEnabled(bool enable) function, expected prototype:\nvoid wxListCtrl::base_SetThemeEnabled(bool enable)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool enable=(bool)(lua_toboolean(L,2)==1);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetThemeEnabled(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetThemeEnabled(enable);

		return 0;
	}

	// bool wxListCtrl::base_GetThemeEnabled() const
	static int _bind_base_GetThemeEnabled(lua_State *L) {
		if (!_lg_typecheck_base_GetThemeEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_GetThemeEnabled() const function, expected prototype:\nbool wxListCtrl::base_GetThemeEnabled() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_GetThemeEnabled() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::GetThemeEnabled();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_CanSetTransparent()
	static int _bind_base_CanSetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_CanSetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_CanSetTransparent() function, expected prototype:\nbool wxListCtrl::base_CanSetTransparent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_CanSetTransparent(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::CanSetTransparent();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_SetTransparent(unsigned char alpha)
	static int _bind_base_SetTransparent(lua_State *L) {
		if (!_lg_typecheck_base_SetTransparent(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_SetTransparent(unsigned char alpha) function, expected prototype:\nbool wxListCtrl::base_SetTransparent(unsigned char alpha)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned char alpha = (unsigned char)(lua_tointeger(L,2));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_SetTransparent(unsigned char). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::SetTransparent(alpha);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::base_SetNextHandler(wxEvtHandler * handler)
	static int _bind_base_SetNextHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetNextHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetNextHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxListCtrl::base_SetNextHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetNextHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetNextHandler(handler);

		return 0;
	}

	// void wxListCtrl::base_SetPreviousHandler(wxEvtHandler * handler)
	static int _bind_base_SetPreviousHandler(lua_State *L) {
		if (!_lg_typecheck_base_SetPreviousHandler(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetPreviousHandler(wxEvtHandler * handler) function, expected prototype:\nvoid wxListCtrl::base_SetPreviousHandler(wxEvtHandler * handler)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxEvtHandler* handler=(Luna< wxObject >::checkSubType< wxEvtHandler >(L,2));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetPreviousHandler(wxEvtHandler *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetPreviousHandler(handler);

		return 0;
	}

	// long wxListCtrl::base_GetWindowStyleFlag() const
	static int _bind_base_GetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_GetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in long wxListCtrl::base_GetWindowStyleFlag() const function, expected prototype:\nlong wxListCtrl::base_GetWindowStyleFlag() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call long wxListCtrl::base_GetWindowStyleFlag() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		long lret = self->wxListCtrl::GetWindowStyleFlag();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void wxListCtrl::base_SetExtraStyle(long exStyle)
	static int _bind_base_SetExtraStyle(lua_State *L) {
		if (!_lg_typecheck_base_SetExtraStyle(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetExtraStyle(long exStyle) function, expected prototype:\nvoid wxListCtrl::base_SetExtraStyle(long exStyle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long exStyle=(long)lua_tonumber(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetExtraStyle(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetExtraStyle(exStyle);

		return 0;
	}

	// void wxListCtrl::base_Lower()
	static int _bind_base_Lower(lua_State *L) {
		if (!_lg_typecheck_base_Lower(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_Lower() function, expected prototype:\nvoid wxListCtrl::base_Lower()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_Lower(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::Lower();

		return 0;
	}

	// void wxListCtrl::base_Raise()
	static int _bind_base_Raise(lua_State *L) {
		if (!_lg_typecheck_base_Raise(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_Raise() function, expected prototype:\nvoid wxListCtrl::base_Raise()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_Raise(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::Raise();

		return 0;
	}

	// bool wxListCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_HideWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_HideWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxListCtrl::base_HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_HideWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::HideWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_IsShown() const
	static int _bind_base_IsShown(lua_State *L) {
		if (!_lg_typecheck_base_IsShown(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_IsShown() const function, expected prototype:\nbool wxListCtrl::base_IsShown() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_IsShown() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::IsShown();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_IsShownOnScreen() const
	static int _bind_base_IsShownOnScreen(lua_State *L) {
		if (!_lg_typecheck_base_IsShownOnScreen(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_IsShownOnScreen() const function, expected prototype:\nbool wxListCtrl::base_IsShownOnScreen() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_IsShownOnScreen() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::IsShownOnScreen();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_Enable(bool enable = true)
	static int _bind_base_Enable(lua_State *L) {
		if (!_lg_typecheck_base_Enable(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_Enable(bool enable = true) function, expected prototype:\nbool wxListCtrl::base_Enable(bool enable = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool enable=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_Enable(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::Enable(enable);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_Show(bool show = true)
	static int _bind_base_Show(lua_State *L) {
		if (!_lg_typecheck_base_Show(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_Show(bool show = true) function, expected prototype:\nbool wxListCtrl::base_Show(bool show = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool show=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_Show(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::Show(show);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	static int _bind_base_ShowWithEffect(lua_State *L) {
		if (!_lg_typecheck_base_ShowWithEffect(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) function, expected prototype:\nbool wxListCtrl::base_ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxShowEffect effect=(wxShowEffect)lua_tointeger(L,2);
		unsigned int timeout=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_ShowWithEffect(wxShowEffect, unsigned int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::ShowWithEffect(effect, timeout);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxString wxListCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	static int _bind_base_GetHelpTextAtPoint(lua_State *L) {
		if (!_lg_typecheck_base_GetHelpTextAtPoint(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxListCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const function, expected prototype:\nwxString wxListCtrl::base_GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const\nClass arguments details:\narg 1 ID = 25723480\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxPoint* point_ptr=(Luna< wxPoint >::check(L,2));
		if( !point_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg point in wxListCtrl::base_GetHelpTextAtPoint function");
		}
		const wxPoint & point=*point_ptr;
		wxHelpEvent::Origin origin=(wxHelpEvent::Origin)lua_tointeger(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxListCtrl::base_GetHelpTextAtPoint(const wxPoint &, wxHelpEvent::Origin) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxListCtrl::GetHelpTextAtPoint(point, origin);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxValidator * wxListCtrl::base_GetValidator()
	static int _bind_base_GetValidator(lua_State *L) {
		if (!_lg_typecheck_base_GetValidator(L)) {
			luaL_error(L, "luna typecheck failed in wxValidator * wxListCtrl::base_GetValidator() function, expected prototype:\nwxValidator * wxListCtrl::base_GetValidator()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxValidator * wxListCtrl::base_GetValidator(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxValidator * lret = self->wxListCtrl::GetValidator();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxValidator >::push(L,lret,false);

		return 1;
	}

	// void wxListCtrl::base_SetValidator(const wxValidator & validator)
	static int _bind_base_SetValidator(lua_State *L) {
		if (!_lg_typecheck_base_SetValidator(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetValidator(const wxValidator & validator) function, expected prototype:\nvoid wxListCtrl::base_SetValidator(const wxValidator & validator)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxValidator* validator_ptr=(Luna< wxObject >::checkSubType< wxValidator >(L,2));
		if( !validator_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg validator in wxListCtrl::base_SetValidator function");
		}
		const wxValidator & validator=*validator_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetValidator(const wxValidator &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetValidator(validator);

		return 0;
	}

	// bool wxListCtrl::base_TransferDataFromWindow()
	static int _bind_base_TransferDataFromWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataFromWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_TransferDataFromWindow() function, expected prototype:\nbool wxListCtrl::base_TransferDataFromWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_TransferDataFromWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::TransferDataFromWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_TransferDataToWindow()
	static int _bind_base_TransferDataToWindow(lua_State *L) {
		if (!_lg_typecheck_base_TransferDataToWindow(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_TransferDataToWindow() function, expected prototype:\nbool wxListCtrl::base_TransferDataToWindow()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_TransferDataToWindow(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::TransferDataToWindow();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_Validate()
	static int _bind_base_Validate(lua_State *L) {
		if (!_lg_typecheck_base_Validate(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_Validate() function, expected prototype:\nbool wxListCtrl::base_Validate()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_Validate(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::Validate();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxLayoutDirection wxListCtrl::base_GetLayoutDirection() const
	static int _bind_base_GetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_GetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in wxLayoutDirection wxListCtrl::base_GetLayoutDirection() const function, expected prototype:\nwxLayoutDirection wxListCtrl::base_GetLayoutDirection() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxLayoutDirection wxListCtrl::base_GetLayoutDirection() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxLayoutDirection lret = self->wxListCtrl::GetLayoutDirection();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxListCtrl::base_GetName() const
	static int _bind_base_GetName(lua_State *L) {
		if (!_lg_typecheck_base_GetName(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxListCtrl::base_GetName() const function, expected prototype:\nwxString wxListCtrl::base_GetName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxListCtrl::base_GetName() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxListCtrl::GetName();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxListCtrl::base_SetLayoutDirection(wxLayoutDirection dir)
	static int _bind_base_SetLayoutDirection(lua_State *L) {
		if (!_lg_typecheck_base_SetLayoutDirection(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetLayoutDirection(wxLayoutDirection dir) function, expected prototype:\nvoid wxListCtrl::base_SetLayoutDirection(wxLayoutDirection dir)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		wxLayoutDirection dir=(wxLayoutDirection)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetLayoutDirection(wxLayoutDirection). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetLayoutDirection(dir);

		return 0;
	}

	// void wxListCtrl::base_SetName(const wxString & name)
	static int _bind_base_SetName(lua_State *L) {
		if (!_lg_typecheck_base_SetName(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetName(const wxString & name) function, expected prototype:\nvoid wxListCtrl::base_SetName(const wxString & name)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString name(lua_tostring(L,2),lua_objlen(L,2));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetName(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetName(name);

		return 0;
	}

	// void wxListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)
	static int _bind_base_SetAcceleratorTable(lua_State *L) {
		if (!_lg_typecheck_base_SetAcceleratorTable(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel) function, expected prototype:\nvoid wxListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable & accel)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxAcceleratorTable* accel_ptr=(Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,2));
		if( !accel_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg accel in wxListCtrl::base_SetAcceleratorTable function");
		}
		const wxAcceleratorTable & accel=*accel_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetAcceleratorTable(const wxAcceleratorTable &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetAcceleratorTable(accel);

		return 0;
	}

	// bool wxListCtrl::base_Destroy()
	static int _bind_base_Destroy(lua_State *L) {
		if (!_lg_typecheck_base_Destroy(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_Destroy() function, expected prototype:\nbool wxListCtrl::base_Destroy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_Destroy(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::Destroy();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDropTarget * wxListCtrl::base_GetDropTarget() const
	static int _bind_base_GetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_GetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in wxDropTarget * wxListCtrl::base_GetDropTarget() const function, expected prototype:\nwxDropTarget * wxListCtrl::base_GetDropTarget() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDropTarget * wxListCtrl::base_GetDropTarget() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDropTarget * lret = self->wxListCtrl::GetDropTarget();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDropTarget >::push(L,lret,false);

		return 1;
	}

	// void wxListCtrl::base_SetDropTarget(wxDropTarget * target)
	static int _bind_base_SetDropTarget(lua_State *L) {
		if (!_lg_typecheck_base_SetDropTarget(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetDropTarget(wxDropTarget * target) function, expected prototype:\nvoid wxListCtrl::base_SetDropTarget(wxDropTarget * target)\nClass arguments details:\narg 1 ID = 93694316\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDropTarget* target=(Luna< wxDropTarget >::check(L,2));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetDropTarget(wxDropTarget *). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetDropTarget(target);

		return 0;
	}

	// void wxListCtrl::base_DragAcceptFiles(bool accept)
	static int _bind_base_DragAcceptFiles(lua_State *L) {
		if (!_lg_typecheck_base_DragAcceptFiles(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_DragAcceptFiles(bool accept) function, expected prototype:\nvoid wxListCtrl::base_DragAcceptFiles(bool accept)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool accept=(bool)(lua_toboolean(L,2)==1);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_DragAcceptFiles(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::DragAcceptFiles(accept);

		return 0;
	}

	// bool wxListCtrl::base_Layout()
	static int _bind_base_Layout(lua_State *L) {
		if (!_lg_typecheck_base_Layout(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_Layout() function, expected prototype:\nbool wxListCtrl::base_Layout()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_Layout(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::Layout();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_HasCapture() const
	static int _bind_base_HasCapture(lua_State *L) {
		if (!_lg_typecheck_base_HasCapture(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_HasCapture() const function, expected prototype:\nbool wxListCtrl::base_HasCapture() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_HasCapture() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::HasCapture();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_SetCursor(const wxCursor & cursor)
	static int _bind_base_SetCursor(lua_State *L) {
		if (!_lg_typecheck_base_SetCursor(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_SetCursor(const wxCursor & cursor) function, expected prototype:\nbool wxListCtrl::base_SetCursor(const wxCursor & cursor)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxCursor* cursor_ptr=(Luna< wxObject >::checkSubType< wxCursor >(L,2));
		if( !cursor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cursor in wxListCtrl::base_SetCursor function");
		}
		const wxCursor & cursor=*cursor_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_SetCursor(const wxCursor &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::SetCursor(cursor);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::base_WarpPointer(int x, int y)
	static int _bind_base_WarpPointer(lua_State *L) {
		if (!_lg_typecheck_base_WarpPointer(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_WarpPointer(int x, int y) function, expected prototype:\nvoid wxListCtrl::base_WarpPointer(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_WarpPointer(int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::WarpPointer(x, y);

		return 0;
	}

	// void wxListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)
	static int _bind_base_DoUpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_DoUpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event) function, expected prototype:\nvoid wxListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxUpdateUIEvent* event_ptr=(Luna< wxObject >::checkSubType< wxUpdateUIEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxListCtrl::base_DoUpdateWindowUI function");
		}
		wxUpdateUIEvent & event=*event_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_DoUpdateWindowUI(wxUpdateUIEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::DoUpdateWindowUI(event);

		return 0;
	}

	// HWND wxListCtrl::base_GetHandle() const
	static int _bind_base_GetHandle(lua_State *L) {
		if (!_lg_typecheck_base_GetHandle(L)) {
			luaL_error(L, "luna typecheck failed in HWND wxListCtrl::base_GetHandle() const function, expected prototype:\nHWND wxListCtrl::base_GetHandle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call HWND wxListCtrl::base_GetHandle() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		HWND stack_lret = self->wxListCtrl::GetHandle();
		HWND* lret = new HWND(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< HWND >::push(L,lret,true);

		return 1;
	}

	// bool wxListCtrl::base_HasMultiplePages() const
	static int _bind_base_HasMultiplePages(lua_State *L) {
		if (!_lg_typecheck_base_HasMultiplePages(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_HasMultiplePages() const function, expected prototype:\nbool wxListCtrl::base_HasMultiplePages() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_HasMultiplePages() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::HasMultiplePages();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::base_InheritAttributes()
	static int _bind_base_InheritAttributes(lua_State *L) {
		if (!_lg_typecheck_base_InheritAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_InheritAttributes() function, expected prototype:\nvoid wxListCtrl::base_InheritAttributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_InheritAttributes(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::InheritAttributes();

		return 0;
	}

	// void wxListCtrl::base_InitDialog()
	static int _bind_base_InitDialog(lua_State *L) {
		if (!_lg_typecheck_base_InitDialog(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_InitDialog() function, expected prototype:\nvoid wxListCtrl::base_InitDialog()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_InitDialog(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::InitDialog();

		return 0;
	}

	// bool wxListCtrl::base_IsRetained() const
	static int _bind_base_IsRetained(lua_State *L) {
		if (!_lg_typecheck_base_IsRetained(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_IsRetained() const function, expected prototype:\nbool wxListCtrl::base_IsRetained() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_IsRetained() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::IsRetained();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_IsTopLevel() const
	static int _bind_base_IsTopLevel(lua_State *L) {
		if (!_lg_typecheck_base_IsTopLevel(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_IsTopLevel() const function, expected prototype:\nbool wxListCtrl::base_IsTopLevel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_IsTopLevel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::IsTopLevel();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::base_MakeModal(bool modal = true)
	static int _bind_base_MakeModal(lua_State *L) {
		if (!_lg_typecheck_base_MakeModal(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_MakeModal(bool modal = true) function, expected prototype:\nvoid wxListCtrl::base_MakeModal(bool modal = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool modal=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_MakeModal(bool). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::MakeModal(modal);

		return 0;
	}

	// void wxListCtrl::base_OnInternalIdle()
	static int _bind_base_OnInternalIdle(lua_State *L) {
		if (!_lg_typecheck_base_OnInternalIdle(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_OnInternalIdle() function, expected prototype:\nvoid wxListCtrl::base_OnInternalIdle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_OnInternalIdle(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::OnInternalIdle();

		return 0;
	}

	// bool wxListCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	static int _bind_base_RegisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_RegisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) function, expected prototype:\nbool wxListCtrl::base_RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);
		int modifiers=(int)lua_tointeger(L,3);
		int virtualKeyCode=(int)lua_tointeger(L,4);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_RegisterHotKey(int, int, int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxListCtrl::base_UnregisterHotKey(int hotkeyId)
	static int _bind_base_UnregisterHotKey(lua_State *L) {
		if (!_lg_typecheck_base_UnregisterHotKey(L)) {
			luaL_error(L, "luna typecheck failed in bool wxListCtrl::base_UnregisterHotKey(int hotkeyId) function, expected prototype:\nbool wxListCtrl::base_UnregisterHotKey(int hotkeyId)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int hotkeyId=(int)lua_tointeger(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxListCtrl::base_UnregisterHotKey(int). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxListCtrl::UnregisterHotKey(hotkeyId);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxListCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	static int _bind_base_UpdateWindowUI(lua_State *L) {
		if (!_lg_typecheck_base_UpdateWindowUI(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) function, expected prototype:\nvoid wxListCtrl::base_UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		long flags=luatop>1 ? (long)lua_tonumber(L,2) : (long)::wxUPDATE_UI_NONE;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_UpdateWindowUI(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::UpdateWindowUI(flags);

		return 0;
	}

	// void wxListCtrl::base_Command(wxCommandEvent & event)
	static int _bind_base_Command(lua_State *L) {
		if (!_lg_typecheck_base_Command(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_Command(wxCommandEvent & event) function, expected prototype:\nvoid wxListCtrl::base_Command(wxCommandEvent & event)\nClass arguments details:\narg 1 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		wxCommandEvent* event_ptr=(Luna< wxObject >::checkSubType< wxCommandEvent >(L,2));
		if( !event_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg event in wxListCtrl::base_Command function");
		}
		wxCommandEvent & event=*event_ptr;

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_Command(wxCommandEvent &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::Command(event);

		return 0;
	}

	// wxString wxListCtrl::base_GetLabel() const
	static int _bind_base_GetLabel(lua_State *L) {
		if (!_lg_typecheck_base_GetLabel(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxListCtrl::base_GetLabel() const function, expected prototype:\nwxString wxListCtrl::base_GetLabel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxListCtrl::base_GetLabel() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxListCtrl::GetLabel();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxListCtrl::base_SetLabel(const wxString & label)
	static int _bind_base_SetLabel(lua_State *L) {
		if (!_lg_typecheck_base_SetLabel(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetLabel(const wxString & label) function, expected prototype:\nvoid wxListCtrl::base_SetLabel(const wxString & label)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString label(lua_tostring(L,2),lua_objlen(L,2));

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetLabel(const wxString &). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetLabel(label);

		return 0;
	}

	// void wxListCtrl::base_SetWindowStyleFlag(long style)
	static int _bind_base_SetWindowStyleFlag(lua_State *L) {
		if (!_lg_typecheck_base_SetWindowStyleFlag(L)) {
			luaL_error(L, "luna typecheck failed in void wxListCtrl::base_SetWindowStyleFlag(long style) function, expected prototype:\nvoid wxListCtrl::base_SetWindowStyleFlag(long style)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		long style=(long)lua_tonumber(L,2);

		wxListCtrl* self=Luna< wxObject >::checkSubType< wxListCtrl >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxListCtrl::base_SetWindowStyleFlag(long). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxListCtrl::SetWindowStyleFlag(style);

		return 0;
	}


	// Operator binds:

};

wxListCtrl* LunaTraits< wxListCtrl >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxListCtrl::_bind_ctor(L);
}

void LunaTraits< wxListCtrl >::_bind_dtor(wxListCtrl* obj) {
	delete obj;
}

const char LunaTraits< wxListCtrl >::className[] = "wxListCtrl";
const char LunaTraits< wxListCtrl >::fullName[] = "wxListCtrl";
const char LunaTraits< wxListCtrl >::moduleName[] = "wx";
const char* LunaTraits< wxListCtrl >::parents[] = {"wx.wxControl", 0};
const int LunaTraits< wxListCtrl >::hash = 43149301;
const int LunaTraits< wxListCtrl >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxListCtrl >::methods[] = {
	{"Arrange", &luna_wrapper_wxListCtrl::_bind_Arrange},
	{"AssignImageList", &luna_wrapper_wxListCtrl::_bind_AssignImageList},
	{"ClearAll", &luna_wrapper_wxListCtrl::_bind_ClearAll},
	{"Create", &luna_wrapper_wxListCtrl::_bind_Create},
	{"DeleteAllItems", &luna_wrapper_wxListCtrl::_bind_DeleteAllItems},
	{"DeleteColumn", &luna_wrapper_wxListCtrl::_bind_DeleteColumn},
	{"DeleteItem", &luna_wrapper_wxListCtrl::_bind_DeleteItem},
	{"EditLabel", &luna_wrapper_wxListCtrl::_bind_EditLabel},
	{"EndEditLabel", &luna_wrapper_wxListCtrl::_bind_EndEditLabel},
	{"EnsureVisible", &luna_wrapper_wxListCtrl::_bind_EnsureVisible},
	{"FindItem", &luna_wrapper_wxListCtrl::_bind_FindItem},
	{"GetColumn", &luna_wrapper_wxListCtrl::_bind_GetColumn},
	{"GetColumnCount", &luna_wrapper_wxListCtrl::_bind_GetColumnCount},
	{"GetColumnIndexFromOrder", &luna_wrapper_wxListCtrl::_bind_GetColumnIndexFromOrder},
	{"GetColumnOrder", &luna_wrapper_wxListCtrl::_bind_GetColumnOrder},
	{"GetColumnWidth", &luna_wrapper_wxListCtrl::_bind_GetColumnWidth},
	{"GetColumnsOrder", &luna_wrapper_wxListCtrl::_bind_GetColumnsOrder},
	{"GetCountPerPage", &luna_wrapper_wxListCtrl::_bind_GetCountPerPage},
	{"GetEditControl", &luna_wrapper_wxListCtrl::_bind_GetEditControl},
	{"GetImageList", &luna_wrapper_wxListCtrl::_bind_GetImageList},
	{"GetItem", &luna_wrapper_wxListCtrl::_bind_GetItem},
	{"GetItemBackgroundColour", &luna_wrapper_wxListCtrl::_bind_GetItemBackgroundColour},
	{"GetItemCount", &luna_wrapper_wxListCtrl::_bind_GetItemCount},
	{"GetItemData", &luna_wrapper_wxListCtrl::_bind_GetItemData},
	{"GetItemFont", &luna_wrapper_wxListCtrl::_bind_GetItemFont},
	{"GetItemPosition", &luna_wrapper_wxListCtrl::_bind_GetItemPosition},
	{"GetItemRect", &luna_wrapper_wxListCtrl::_bind_GetItemRect},
	{"GetItemSpacing", &luna_wrapper_wxListCtrl::_bind_GetItemSpacing},
	{"GetItemState", &luna_wrapper_wxListCtrl::_bind_GetItemState},
	{"GetItemText", &luna_wrapper_wxListCtrl::_bind_GetItemText},
	{"GetItemTextColour", &luna_wrapper_wxListCtrl::_bind_GetItemTextColour},
	{"GetNextItem", &luna_wrapper_wxListCtrl::_bind_GetNextItem},
	{"GetSelectedItemCount", &luna_wrapper_wxListCtrl::_bind_GetSelectedItemCount},
	{"GetSubItemRect", &luna_wrapper_wxListCtrl::_bind_GetSubItemRect},
	{"GetTextColour", &luna_wrapper_wxListCtrl::_bind_GetTextColour},
	{"GetTopItem", &luna_wrapper_wxListCtrl::_bind_GetTopItem},
	{"GetViewRect", &luna_wrapper_wxListCtrl::_bind_GetViewRect},
	{"HitTest", &luna_wrapper_wxListCtrl::_bind_HitTest},
	{"InsertColumn", &luna_wrapper_wxListCtrl::_bind_InsertColumn},
	{"InsertItem", &luna_wrapper_wxListCtrl::_bind_InsertItem},
	{"RefreshItem", &luna_wrapper_wxListCtrl::_bind_RefreshItem},
	{"RefreshItems", &luna_wrapper_wxListCtrl::_bind_RefreshItems},
	{"ScrollList", &luna_wrapper_wxListCtrl::_bind_ScrollList},
	{"SetBackgroundColour", &luna_wrapper_wxListCtrl::_bind_SetBackgroundColour},
	{"SetColumn", &luna_wrapper_wxListCtrl::_bind_SetColumn},
	{"SetColumnWidth", &luna_wrapper_wxListCtrl::_bind_SetColumnWidth},
	{"SetColumnsOrder", &luna_wrapper_wxListCtrl::_bind_SetColumnsOrder},
	{"SetImageList", &luna_wrapper_wxListCtrl::_bind_SetImageList},
	{"SetItem", &luna_wrapper_wxListCtrl::_bind_SetItem},
	{"SetItemBackgroundColour", &luna_wrapper_wxListCtrl::_bind_SetItemBackgroundColour},
	{"SetItemColumnImage", &luna_wrapper_wxListCtrl::_bind_SetItemColumnImage},
	{"SetItemCount", &luna_wrapper_wxListCtrl::_bind_SetItemCount},
	{"SetItemData", &luna_wrapper_wxListCtrl::_bind_SetItemData},
	{"SetItemFont", &luna_wrapper_wxListCtrl::_bind_SetItemFont},
	{"SetItemImage", &luna_wrapper_wxListCtrl::_bind_SetItemImage},
	{"SetItemPosition", &luna_wrapper_wxListCtrl::_bind_SetItemPosition},
	{"SetItemPtrData", &luna_wrapper_wxListCtrl::_bind_SetItemPtrData},
	{"SetItemState", &luna_wrapper_wxListCtrl::_bind_SetItemState},
	{"SetItemText", &luna_wrapper_wxListCtrl::_bind_SetItemText},
	{"SetItemTextColour", &luna_wrapper_wxListCtrl::_bind_SetItemTextColour},
	{"SetSingleStyle", &luna_wrapper_wxListCtrl::_bind_SetSingleStyle},
	{"SetTextColour", &luna_wrapper_wxListCtrl::_bind_SetTextColour},
	{"SetWindowStyleFlag", &luna_wrapper_wxListCtrl::_bind_SetWindowStyleFlag},
	{"base_GetClassInfo", &luna_wrapper_wxListCtrl::_bind_base_GetClassInfo},
	{"base_AcceptsFocus", &luna_wrapper_wxListCtrl::_bind_base_AcceptsFocus},
	{"base_AcceptsFocusFromKeyboard", &luna_wrapper_wxListCtrl::_bind_base_AcceptsFocusFromKeyboard},
	{"base_AcceptsFocusRecursively", &luna_wrapper_wxListCtrl::_bind_base_AcceptsFocusRecursively},
	{"base_HasFocus", &luna_wrapper_wxListCtrl::_bind_base_HasFocus},
	{"base_SetCanFocus", &luna_wrapper_wxListCtrl::_bind_base_SetCanFocus},
	{"base_SetFocus", &luna_wrapper_wxListCtrl::_bind_base_SetFocus},
	{"base_SetFocusFromKbd", &luna_wrapper_wxListCtrl::_bind_base_SetFocusFromKbd},
	{"base_AddChild", &luna_wrapper_wxListCtrl::_bind_base_AddChild},
	{"base_RemoveChild", &luna_wrapper_wxListCtrl::_bind_base_RemoveChild},
	{"base_Reparent", &luna_wrapper_wxListCtrl::_bind_base_Reparent},
	{"base_AlwaysShowScrollbars", &luna_wrapper_wxListCtrl::_bind_base_AlwaysShowScrollbars},
	{"base_GetScrollPos", &luna_wrapper_wxListCtrl::_bind_base_GetScrollPos},
	{"base_GetScrollRange", &luna_wrapper_wxListCtrl::_bind_base_GetScrollRange},
	{"base_GetScrollThumb", &luna_wrapper_wxListCtrl::_bind_base_GetScrollThumb},
	{"base_IsScrollbarAlwaysShown", &luna_wrapper_wxListCtrl::_bind_base_IsScrollbarAlwaysShown},
	{"base_ScrollLines", &luna_wrapper_wxListCtrl::_bind_base_ScrollLines},
	{"base_ScrollPages", &luna_wrapper_wxListCtrl::_bind_base_ScrollPages},
	{"base_ScrollWindow", &luna_wrapper_wxListCtrl::_bind_base_ScrollWindow},
	{"base_SetScrollPos", &luna_wrapper_wxListCtrl::_bind_base_SetScrollPos},
	{"base_SetScrollbar", &luna_wrapper_wxListCtrl::_bind_base_SetScrollbar},
	{"base_ClientToWindowSize", &luna_wrapper_wxListCtrl::_bind_base_ClientToWindowSize},
	{"base_WindowToClientSize", &luna_wrapper_wxListCtrl::_bind_base_WindowToClientSize},
	{"base_Fit", &luna_wrapper_wxListCtrl::_bind_base_Fit},
	{"base_FitInside", &luna_wrapper_wxListCtrl::_bind_base_FitInside},
	{"base_GetEffectiveMinSize", &luna_wrapper_wxListCtrl::_bind_base_GetEffectiveMinSize},
	{"base_GetMaxClientSize", &luna_wrapper_wxListCtrl::_bind_base_GetMaxClientSize},
	{"base_GetMaxSize", &luna_wrapper_wxListCtrl::_bind_base_GetMaxSize},
	{"base_GetMinClientSize", &luna_wrapper_wxListCtrl::_bind_base_GetMinClientSize},
	{"base_GetMinSize", &luna_wrapper_wxListCtrl::_bind_base_GetMinSize},
	{"base_GetBestVirtualSize", &luna_wrapper_wxListCtrl::_bind_base_GetBestVirtualSize},
	{"base_GetWindowBorderSize", &luna_wrapper_wxListCtrl::_bind_base_GetWindowBorderSize},
	{"base_InformFirstDirection", &luna_wrapper_wxListCtrl::_bind_base_InformFirstDirection},
	{"base_SendSizeEvent", &luna_wrapper_wxListCtrl::_bind_base_SendSizeEvent},
	{"base_SetMaxClientSize", &luna_wrapper_wxListCtrl::_bind_base_SetMaxClientSize},
	{"base_SetMaxSize", &luna_wrapper_wxListCtrl::_bind_base_SetMaxSize},
	{"base_SetMinClientSize", &luna_wrapper_wxListCtrl::_bind_base_SetMinClientSize},
	{"base_SetMinSize", &luna_wrapper_wxListCtrl::_bind_base_SetMinSize},
	{"base_SetSizeHints", &luna_wrapper_wxListCtrl::_bind_base_SetSizeHints},
	{"base_GetClientAreaOrigin", &luna_wrapper_wxListCtrl::_bind_base_GetClientAreaOrigin},
	{"base_ClearBackground", &luna_wrapper_wxListCtrl::_bind_base_ClearBackground},
	{"base_GetBackgroundStyle", &luna_wrapper_wxListCtrl::_bind_base_GetBackgroundStyle},
	{"base_GetCharHeight", &luna_wrapper_wxListCtrl::_bind_base_GetCharHeight},
	{"base_GetCharWidth", &luna_wrapper_wxListCtrl::_bind_base_GetCharWidth},
	{"base_GetDefaultAttributes", &luna_wrapper_wxListCtrl::_bind_base_GetDefaultAttributes},
	{"base_Refresh", &luna_wrapper_wxListCtrl::_bind_base_Refresh},
	{"base_Update", &luna_wrapper_wxListCtrl::_bind_base_Update},
	{"base_SetBackgroundStyle", &luna_wrapper_wxListCtrl::_bind_base_SetBackgroundStyle},
	{"base_SetFont", &luna_wrapper_wxListCtrl::_bind_base_SetFont},
	{"base_ShouldInheritColours", &luna_wrapper_wxListCtrl::_bind_base_ShouldInheritColours},
	{"base_SetThemeEnabled", &luna_wrapper_wxListCtrl::_bind_base_SetThemeEnabled},
	{"base_GetThemeEnabled", &luna_wrapper_wxListCtrl::_bind_base_GetThemeEnabled},
	{"base_CanSetTransparent", &luna_wrapper_wxListCtrl::_bind_base_CanSetTransparent},
	{"base_SetTransparent", &luna_wrapper_wxListCtrl::_bind_base_SetTransparent},
	{"base_SetNextHandler", &luna_wrapper_wxListCtrl::_bind_base_SetNextHandler},
	{"base_SetPreviousHandler", &luna_wrapper_wxListCtrl::_bind_base_SetPreviousHandler},
	{"base_GetWindowStyleFlag", &luna_wrapper_wxListCtrl::_bind_base_GetWindowStyleFlag},
	{"base_SetExtraStyle", &luna_wrapper_wxListCtrl::_bind_base_SetExtraStyle},
	{"base_Lower", &luna_wrapper_wxListCtrl::_bind_base_Lower},
	{"base_Raise", &luna_wrapper_wxListCtrl::_bind_base_Raise},
	{"base_HideWithEffect", &luna_wrapper_wxListCtrl::_bind_base_HideWithEffect},
	{"base_IsShown", &luna_wrapper_wxListCtrl::_bind_base_IsShown},
	{"base_IsShownOnScreen", &luna_wrapper_wxListCtrl::_bind_base_IsShownOnScreen},
	{"base_Enable", &luna_wrapper_wxListCtrl::_bind_base_Enable},
	{"base_Show", &luna_wrapper_wxListCtrl::_bind_base_Show},
	{"base_ShowWithEffect", &luna_wrapper_wxListCtrl::_bind_base_ShowWithEffect},
	{"base_GetHelpTextAtPoint", &luna_wrapper_wxListCtrl::_bind_base_GetHelpTextAtPoint},
	{"base_GetValidator", &luna_wrapper_wxListCtrl::_bind_base_GetValidator},
	{"base_SetValidator", &luna_wrapper_wxListCtrl::_bind_base_SetValidator},
	{"base_TransferDataFromWindow", &luna_wrapper_wxListCtrl::_bind_base_TransferDataFromWindow},
	{"base_TransferDataToWindow", &luna_wrapper_wxListCtrl::_bind_base_TransferDataToWindow},
	{"base_Validate", &luna_wrapper_wxListCtrl::_bind_base_Validate},
	{"base_GetLayoutDirection", &luna_wrapper_wxListCtrl::_bind_base_GetLayoutDirection},
	{"base_GetName", &luna_wrapper_wxListCtrl::_bind_base_GetName},
	{"base_SetLayoutDirection", &luna_wrapper_wxListCtrl::_bind_base_SetLayoutDirection},
	{"base_SetName", &luna_wrapper_wxListCtrl::_bind_base_SetName},
	{"base_SetAcceleratorTable", &luna_wrapper_wxListCtrl::_bind_base_SetAcceleratorTable},
	{"base_Destroy", &luna_wrapper_wxListCtrl::_bind_base_Destroy},
	{"base_GetDropTarget", &luna_wrapper_wxListCtrl::_bind_base_GetDropTarget},
	{"base_SetDropTarget", &luna_wrapper_wxListCtrl::_bind_base_SetDropTarget},
	{"base_DragAcceptFiles", &luna_wrapper_wxListCtrl::_bind_base_DragAcceptFiles},
	{"base_Layout", &luna_wrapper_wxListCtrl::_bind_base_Layout},
	{"base_HasCapture", &luna_wrapper_wxListCtrl::_bind_base_HasCapture},
	{"base_SetCursor", &luna_wrapper_wxListCtrl::_bind_base_SetCursor},
	{"base_WarpPointer", &luna_wrapper_wxListCtrl::_bind_base_WarpPointer},
	{"base_DoUpdateWindowUI", &luna_wrapper_wxListCtrl::_bind_base_DoUpdateWindowUI},
	{"base_GetHandle", &luna_wrapper_wxListCtrl::_bind_base_GetHandle},
	{"base_HasMultiplePages", &luna_wrapper_wxListCtrl::_bind_base_HasMultiplePages},
	{"base_InheritAttributes", &luna_wrapper_wxListCtrl::_bind_base_InheritAttributes},
	{"base_InitDialog", &luna_wrapper_wxListCtrl::_bind_base_InitDialog},
	{"base_IsRetained", &luna_wrapper_wxListCtrl::_bind_base_IsRetained},
	{"base_IsTopLevel", &luna_wrapper_wxListCtrl::_bind_base_IsTopLevel},
	{"base_MakeModal", &luna_wrapper_wxListCtrl::_bind_base_MakeModal},
	{"base_OnInternalIdle", &luna_wrapper_wxListCtrl::_bind_base_OnInternalIdle},
	{"base_RegisterHotKey", &luna_wrapper_wxListCtrl::_bind_base_RegisterHotKey},
	{"base_UnregisterHotKey", &luna_wrapper_wxListCtrl::_bind_base_UnregisterHotKey},
	{"base_UpdateWindowUI", &luna_wrapper_wxListCtrl::_bind_base_UpdateWindowUI},
	{"base_Command", &luna_wrapper_wxListCtrl::_bind_base_Command},
	{"base_GetLabel", &luna_wrapper_wxListCtrl::_bind_base_GetLabel},
	{"base_SetLabel", &luna_wrapper_wxListCtrl::_bind_base_SetLabel},
	{"base_SetWindowStyleFlag", &luna_wrapper_wxListCtrl::_bind_base_SetWindowStyleFlag},
	{"fromVoid", &luna_wrapper_wxListCtrl::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxListCtrl::_bind_asVoid},
	{"getTable", &luna_wrapper_wxListCtrl::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxListCtrl >::converters[] = {
	{"wxObject", &luna_wrapper_wxListCtrl::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxListCtrl >::enumValues[] = {
	{0,0}
};


