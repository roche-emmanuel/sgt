#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewTreeStore.h>

class luna_wrapper_wxDataViewTreeStore {
public:
	typedef Luna< wxDataViewTreeStore > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxDataViewModel,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxDataViewTreeStore* self= (wxDataViewTreeStore*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewTreeStore >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66533182) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxDataViewModel(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxDataViewTreeStore* ptr= dynamic_cast< wxDataViewTreeStore* >(Luna< wxDataViewModel >::check(L,1));
		wxDataViewTreeStore* ptr= luna_caster< wxDataViewModel, wxDataViewTreeStore >::cast(Luna< wxDataViewModel >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewTreeStore >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AppendContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_DeleteChildren(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemExpandedIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemIcon(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetItemText(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetNthChild(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,56813631) ) return false;
		if( luatop>6 && (lua_isnil(L,7)==0 && !Luna<void>::has_uniqueid(L,7,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependContainer(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,56813631) ) return false;
		if( luatop>5 && (lua_isnil(L,6)==0 && !Luna<void>::has_uniqueid(L,6,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PrependItem(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,56813631) ) return false;
		if( luatop>4 && (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50457573)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemExpandedIcon(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_SetItemIcon(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,56813631) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_Cleared(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Compare(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_GetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,11637659) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_IsEnabled(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_HasContainerColumns(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_HasDefaultCompare(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Resort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_ValueChanged(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewTreeStore::wxDataViewTreeStore(lua_Table * data)
	static wxDataViewTreeStore* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewTreeStore::wxDataViewTreeStore(lua_Table * data) function, expected prototype:\nwxDataViewTreeStore::wxDataViewTreeStore(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxDataViewTreeStore(L,NULL);
	}


	// Function binds:
	// wxDataViewItem wxDataViewTreeStore::AppendContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)
	static int _bind_AppendContainer(lua_State *L) {
		if (!_lg_typecheck_AppendContainer(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::AppendContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::AppendContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::AppendContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		const wxIcon* icon_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxIcon >(L,4)) : NULL;
		if( luatop>3 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::AppendContainer function");
		}
		const wxIcon & icon=luatop>3 ? *icon_ptr : (const wxIcon&)wxNullIcon;
		const wxIcon* expanded_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxIcon >(L,5)) : NULL;
		if( luatop>4 && !expanded_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg expanded in wxDataViewTreeStore::AppendContainer function");
		}
		const wxIcon & expanded=luatop>4 ? *expanded_ptr : (const wxIcon&)wxNullIcon;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::AppendContainer(const wxDataViewItem &, const wxString &, const wxIcon &, const wxIcon &, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewItem stack_lret = self->AppendContainer(parent, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::AppendItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)
	static int _bind_AppendItem(lua_State *L) {
		if (!_lg_typecheck_AppendItem(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::AppendItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::AppendItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::AppendItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		const wxIcon* icon_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxIcon >(L,4)) : NULL;
		if( luatop>3 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::AppendItem function");
		}
		const wxIcon & icon=luatop>3 ? *icon_ptr : (const wxIcon&)wxNullIcon;
		wxClientData* data=luatop>4 ? (Luna< wxClientData >::check(L,5)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::AppendItem(const wxDataViewItem &, const wxString &, const wxIcon &, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewItem stack_lret = self->AppendItem(parent, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewTreeStore::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::DeleteAllItems() function, expected prototype:\nvoid wxDataViewTreeStore::DeleteAllItems()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::DeleteAllItems(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteAllItems();

		return 0;
	}

	// void wxDataViewTreeStore::DeleteChildren(const wxDataViewItem & item)
	static int _bind_DeleteChildren(lua_State *L) {
		if (!_lg_typecheck_DeleteChildren(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::DeleteChildren(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeStore::DeleteChildren(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::DeleteChildren function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::DeleteChildren(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteChildren(item);

		return 0;
	}

	// void wxDataViewTreeStore::DeleteItem(const wxDataViewItem & item)
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::DeleteItem(const wxDataViewItem & item) function, expected prototype:\nvoid wxDataViewTreeStore::DeleteItem(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::DeleteItem function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::DeleteItem(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteItem(item);

		return 0;
	}

	// int wxDataViewTreeStore::GetChildCount(const wxDataViewItem & parent) const
	static int _bind_GetChildCount(lua_State *L) {
		if (!_lg_typecheck_GetChildCount(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeStore::GetChildCount(const wxDataViewItem & parent) const function, expected prototype:\nint wxDataViewTreeStore::GetChildCount(const wxDataViewItem & parent) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::GetChildCount function");
		}
		const wxDataViewItem & parent=*parent_ptr;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewTreeStore::GetChildCount(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetChildCount(parent);
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxClientData * wxDataViewTreeStore::GetItemData(const wxDataViewItem & item) const
	static int _bind_GetItemData(lua_State *L) {
		if (!_lg_typecheck_GetItemData(L)) {
			luaL_error(L, "luna typecheck failed in wxClientData * wxDataViewTreeStore::GetItemData(const wxDataViewItem & item) const function, expected prototype:\nwxClientData * wxDataViewTreeStore::GetItemData(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::GetItemData function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClientData * wxDataViewTreeStore::GetItemData(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClientData * lret = self->GetItemData(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClientData >::push(L,lret,false);

		return 1;
	}

	// const wxIcon & wxDataViewTreeStore::GetItemExpandedIcon(const wxDataViewItem & item) const
	static int _bind_GetItemExpandedIcon(lua_State *L) {
		if (!_lg_typecheck_GetItemExpandedIcon(L)) {
			luaL_error(L, "luna typecheck failed in const wxIcon & wxDataViewTreeStore::GetItemExpandedIcon(const wxDataViewItem & item) const function, expected prototype:\nconst wxIcon & wxDataViewTreeStore::GetItemExpandedIcon(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::GetItemExpandedIcon function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxIcon & wxDataViewTreeStore::GetItemExpandedIcon(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxIcon* lret = &self->GetItemExpandedIcon(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,false);

		return 1;
	}

	// const wxIcon & wxDataViewTreeStore::GetItemIcon(const wxDataViewItem & item) const
	static int _bind_GetItemIcon(lua_State *L) {
		if (!_lg_typecheck_GetItemIcon(L)) {
			luaL_error(L, "luna typecheck failed in const wxIcon & wxDataViewTreeStore::GetItemIcon(const wxDataViewItem & item) const function, expected prototype:\nconst wxIcon & wxDataViewTreeStore::GetItemIcon(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::GetItemIcon function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxIcon & wxDataViewTreeStore::GetItemIcon(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxIcon* lret = &self->GetItemIcon(item);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,false);

		return 1;
	}

	// wxString wxDataViewTreeStore::GetItemText(const wxDataViewItem & item) const
	static int _bind_GetItemText(lua_State *L) {
		if (!_lg_typecheck_GetItemText(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDataViewTreeStore::GetItemText(const wxDataViewItem & item) const function, expected prototype:\nwxString wxDataViewTreeStore::GetItemText(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::GetItemText function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDataViewTreeStore::GetItemText(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetItemText(item);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const
	static int _bind_GetNthChild(lua_State *L) {
		if (!_lg_typecheck_GetNthChild(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::GetNthChild(const wxDataViewItem & parent, unsigned int pos) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::GetNthChild function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		unsigned int pos=(unsigned int)lua_tointeger(L,3);

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::GetNthChild(const wxDataViewItem &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewItem stack_lret = self->GetNthChild(parent, pos);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)
	static int _bind_InsertContainer(lua_State *L) {
		if (!_lg_typecheck_InsertContainer(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::InsertContainer(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 5 ID = 56813631\narg 6 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::InsertContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* previous_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxDataViewTreeStore::InsertContainer function");
		}
		const wxDataViewItem & previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		const wxIcon* icon_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxIcon >(L,5)) : NULL;
		if( luatop>4 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::InsertContainer function");
		}
		const wxIcon & icon=luatop>4 ? *icon_ptr : (const wxIcon&)wxNullIcon;
		const wxIcon* expanded_ptr=luatop>5 ? (Luna< wxObject >::checkSubType< wxIcon >(L,6)) : NULL;
		if( luatop>5 && !expanded_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg expanded in wxDataViewTreeStore::InsertContainer function");
		}
		const wxIcon & expanded=luatop>5 ? *expanded_ptr : (const wxIcon&)wxNullIcon;
		wxClientData* data=luatop>6 ? (Luna< wxClientData >::check(L,7)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::InsertContainer(const wxDataViewItem &, const wxDataViewItem &, const wxString &, const wxIcon &, const wxIcon &, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewItem stack_lret = self->InsertContainer(parent, previous, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)
	static int _bind_InsertItem(lua_State *L) {
		if (!_lg_typecheck_InsertItem(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::InsertItem(const wxDataViewItem & parent, const wxDataViewItem & previous, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\narg 3 ID = 88196105\narg 4 ID = 56813631\narg 5 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::InsertItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* previous_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !previous_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg previous in wxDataViewTreeStore::InsertItem function");
		}
		const wxDataViewItem & previous=*previous_ptr;
		wxString text(lua_tostring(L,4),lua_objlen(L,4));
		const wxIcon* icon_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxIcon >(L,5)) : NULL;
		if( luatop>4 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::InsertItem function");
		}
		const wxIcon & icon=luatop>4 ? *icon_ptr : (const wxIcon&)wxNullIcon;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::InsertItem(const wxDataViewItem &, const wxDataViewItem &, const wxString &, const wxIcon &, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewItem stack_lret = self->InsertItem(parent, previous, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::PrependContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)
	static int _bind_PrependContainer(lua_State *L) {
		if (!_lg_typecheck_PrependContainer(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::PrependContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::PrependContainer(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, const wxIcon & expanded = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 56813631\narg 5 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::PrependContainer function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		const wxIcon* icon_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxIcon >(L,4)) : NULL;
		if( luatop>3 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::PrependContainer function");
		}
		const wxIcon & icon=luatop>3 ? *icon_ptr : (const wxIcon&)wxNullIcon;
		const wxIcon* expanded_ptr=luatop>4 ? (Luna< wxObject >::checkSubType< wxIcon >(L,5)) : NULL;
		if( luatop>4 && !expanded_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg expanded in wxDataViewTreeStore::PrependContainer function");
		}
		const wxIcon & expanded=luatop>4 ? *expanded_ptr : (const wxIcon&)wxNullIcon;
		wxClientData* data=luatop>5 ? (Luna< wxClientData >::check(L,6)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::PrependContainer(const wxDataViewItem &, const wxString &, const wxIcon &, const wxIcon &, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewItem stack_lret = self->PrependContainer(parent, text, icon, expanded, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// wxDataViewItem wxDataViewTreeStore::PrependItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)
	static int _bind_PrependItem(lua_State *L) {
		if (!_lg_typecheck_PrependItem(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewTreeStore::PrependItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL) function, expected prototype:\nwxDataViewItem wxDataViewTreeStore::PrependItem(const wxDataViewItem & parent, const wxString & text, const wxIcon & icon = wxNullIcon, wxClientData * data = NULL)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 88196105\narg 3 ID = 56813631\narg 4 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewTreeStore::PrependItem function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		wxString text(lua_tostring(L,3),lua_objlen(L,3));
		const wxIcon* icon_ptr=luatop>3 ? (Luna< wxObject >::checkSubType< wxIcon >(L,4)) : NULL;
		if( luatop>3 && !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::PrependItem function");
		}
		const wxIcon & icon=luatop>3 ? *icon_ptr : (const wxIcon&)wxNullIcon;
		wxClientData* data=luatop>4 ? (Luna< wxClientData >::check(L,5)) : (wxClientData*)NULL;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewTreeStore::PrependItem(const wxDataViewItem &, const wxString &, const wxIcon &, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewItem stack_lret = self->PrependItem(parent, text, icon, data);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// void wxDataViewTreeStore::SetItemData(const wxDataViewItem & item, wxClientData * data)
	static int _bind_SetItemData(lua_State *L) {
		if (!_lg_typecheck_SetItemData(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::SetItemData(const wxDataViewItem & item, wxClientData * data) function, expected prototype:\nvoid wxDataViewTreeStore::SetItemData(const wxDataViewItem & item, wxClientData * data)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 50457573\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::SetItemData function");
		}
		const wxDataViewItem & item=*item_ptr;
		wxClientData* data=(Luna< wxClientData >::check(L,3));

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::SetItemData(const wxDataViewItem &, wxClientData *). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemData(item, data);

		return 0;
	}

	// void wxDataViewTreeStore::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon)
	static int _bind_SetItemExpandedIcon(lua_State *L) {
		if (!_lg_typecheck_SetItemExpandedIcon(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon) function, expected prototype:\nvoid wxDataViewTreeStore::SetItemExpandedIcon(const wxDataViewItem & item, const wxIcon & icon)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::SetItemExpandedIcon function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,3));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::SetItemExpandedIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::SetItemExpandedIcon(const wxDataViewItem &, const wxIcon &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemExpandedIcon(item, icon);

		return 0;
	}

	// void wxDataViewTreeStore::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon)
	static int _bind_SetItemIcon(lua_State *L) {
		if (!_lg_typecheck_SetItemIcon(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon) function, expected prototype:\nvoid wxDataViewTreeStore::SetItemIcon(const wxDataViewItem & item, const wxIcon & icon)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::SetItemIcon function");
		}
		const wxDataViewItem & item=*item_ptr;
		const wxIcon* icon_ptr=(Luna< wxObject >::checkSubType< wxIcon >(L,3));
		if( !icon_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg icon in wxDataViewTreeStore::SetItemIcon function");
		}
		const wxIcon & icon=*icon_ptr;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::SetItemIcon(const wxDataViewItem &, const wxIcon &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetItemIcon(item, icon);

		return 0;
	}

	// bool wxDataViewTreeStore::base_Cleared()
	static int _bind_base_Cleared(lua_State *L) {
		if (!_lg_typecheck_base_Cleared(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeStore::base_Cleared() function, expected prototype:\nbool wxDataViewTreeStore::base_Cleared()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeStore::base_Cleared(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewTreeStore::Cleared();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxDataViewTreeStore::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const
	static int _bind_base_Compare(lua_State *L) {
		if (!_lg_typecheck_base_Compare(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewTreeStore::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const function, expected prototype:\nint wxDataViewTreeStore::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item1_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item1 in wxDataViewTreeStore::base_Compare function");
		}
		const wxDataViewItem & item1=*item1_ptr;
		const wxDataViewItem* item2_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item2 in wxDataViewTreeStore::base_Compare function");
		}
		const wxDataViewItem & item2=*item2_ptr;
		unsigned int column=(unsigned int)lua_tointeger(L,4);
		bool ascending=(bool)(lua_toboolean(L,5)==1);

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewTreeStore::base_Compare(const wxDataViewItem &, const wxDataViewItem &, unsigned int, bool) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewTreeStore::Compare(item1, item2, column, ascending);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDataViewTreeStore::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const
	static int _bind_base_GetAttr(lua_State *L) {
		if (!_lg_typecheck_base_GetAttr(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeStore::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const function, expected prototype:\nbool wxDataViewTreeStore::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const\nClass arguments details:\narg 1 ID = 11709329\narg 3 ID = 11637659\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::base_GetAttr function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);
		wxDataViewItemAttr* attr_ptr=(Luna< wxDataViewItemAttr >::check(L,4));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxDataViewTreeStore::base_GetAttr function");
		}
		wxDataViewItemAttr & attr=*attr_ptr;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeStore::base_GetAttr(const wxDataViewItem &, unsigned int, wxDataViewItemAttr &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewTreeStore::GetAttr(item, col, attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeStore::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const
	static int _bind_base_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_base_IsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeStore::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const function, expected prototype:\nbool wxDataViewTreeStore::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::base_IsEnabled function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeStore::base_IsEnabled(const wxDataViewItem &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewTreeStore::IsEnabled(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeStore::base_HasContainerColumns(const wxDataViewItem & item) const
	static int _bind_base_HasContainerColumns(lua_State *L) {
		if (!_lg_typecheck_base_HasContainerColumns(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeStore::base_HasContainerColumns(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewTreeStore::base_HasContainerColumns(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::base_HasContainerColumns function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeStore::base_HasContainerColumns(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewTreeStore::HasContainerColumns(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewTreeStore::base_HasDefaultCompare() const
	static int _bind_base_HasDefaultCompare(lua_State *L) {
		if (!_lg_typecheck_base_HasDefaultCompare(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeStore::base_HasDefaultCompare() const function, expected prototype:\nbool wxDataViewTreeStore::base_HasDefaultCompare() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeStore::base_HasDefaultCompare() const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewTreeStore::HasDefaultCompare();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewTreeStore::base_Resort()
	static int _bind_base_Resort(lua_State *L) {
		if (!_lg_typecheck_base_Resort(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewTreeStore::base_Resort() function, expected prototype:\nvoid wxDataViewTreeStore::base_Resort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewTreeStore::base_Resort(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewTreeStore::Resort();

		return 0;
	}

	// bool wxDataViewTreeStore::base_ValueChanged(const wxDataViewItem & item, unsigned int col)
	static int _bind_base_ValueChanged(lua_State *L) {
		if (!_lg_typecheck_base_ValueChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewTreeStore::base_ValueChanged(const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewTreeStore::base_ValueChanged(const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewTreeStore::base_ValueChanged function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewTreeStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewTreeStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewTreeStore::base_ValueChanged(const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewTreeStore::ValueChanged(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewTreeStore* LunaTraits< wxDataViewTreeStore >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewTreeStore::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// unsigned int wxDataViewModel::GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const
	// unsigned int wxDataViewModel::GetColumnCount() const
	// wxString wxDataViewModel::GetColumnType(unsigned int col) const
	// wxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem & item) const
	// void wxDataViewModel::GetValue(wxVariant & variant, const wxDataViewItem & item, unsigned int col) const
	// bool wxDataViewModel::IsContainer(const wxDataViewItem & item) const
	// bool wxDataViewModel::SetValue(const wxVariant & variant, const wxDataViewItem & item, unsigned int col)
}

void LunaTraits< wxDataViewTreeStore >::_bind_dtor(wxDataViewTreeStore* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewTreeStore >::className[] = "wxDataViewTreeStore";
const char LunaTraits< wxDataViewTreeStore >::fullName[] = "wxDataViewTreeStore";
const char LunaTraits< wxDataViewTreeStore >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewTreeStore >::parents[] = {"wx.wxDataViewModel", 0};
const int LunaTraits< wxDataViewTreeStore >::hash = 23040251;
const int LunaTraits< wxDataViewTreeStore >::uniqueIDs[] = {66533182,0};

luna_RegType LunaTraits< wxDataViewTreeStore >::methods[] = {
	{"AppendContainer", &luna_wrapper_wxDataViewTreeStore::_bind_AppendContainer},
	{"AppendItem", &luna_wrapper_wxDataViewTreeStore::_bind_AppendItem},
	{"DeleteAllItems", &luna_wrapper_wxDataViewTreeStore::_bind_DeleteAllItems},
	{"DeleteChildren", &luna_wrapper_wxDataViewTreeStore::_bind_DeleteChildren},
	{"DeleteItem", &luna_wrapper_wxDataViewTreeStore::_bind_DeleteItem},
	{"GetChildCount", &luna_wrapper_wxDataViewTreeStore::_bind_GetChildCount},
	{"GetItemData", &luna_wrapper_wxDataViewTreeStore::_bind_GetItemData},
	{"GetItemExpandedIcon", &luna_wrapper_wxDataViewTreeStore::_bind_GetItemExpandedIcon},
	{"GetItemIcon", &luna_wrapper_wxDataViewTreeStore::_bind_GetItemIcon},
	{"GetItemText", &luna_wrapper_wxDataViewTreeStore::_bind_GetItemText},
	{"GetNthChild", &luna_wrapper_wxDataViewTreeStore::_bind_GetNthChild},
	{"InsertContainer", &luna_wrapper_wxDataViewTreeStore::_bind_InsertContainer},
	{"InsertItem", &luna_wrapper_wxDataViewTreeStore::_bind_InsertItem},
	{"PrependContainer", &luna_wrapper_wxDataViewTreeStore::_bind_PrependContainer},
	{"PrependItem", &luna_wrapper_wxDataViewTreeStore::_bind_PrependItem},
	{"SetItemData", &luna_wrapper_wxDataViewTreeStore::_bind_SetItemData},
	{"SetItemExpandedIcon", &luna_wrapper_wxDataViewTreeStore::_bind_SetItemExpandedIcon},
	{"SetItemIcon", &luna_wrapper_wxDataViewTreeStore::_bind_SetItemIcon},
	{"base_Cleared", &luna_wrapper_wxDataViewTreeStore::_bind_base_Cleared},
	{"base_Compare", &luna_wrapper_wxDataViewTreeStore::_bind_base_Compare},
	{"base_GetAttr", &luna_wrapper_wxDataViewTreeStore::_bind_base_GetAttr},
	{"base_IsEnabled", &luna_wrapper_wxDataViewTreeStore::_bind_base_IsEnabled},
	{"base_HasContainerColumns", &luna_wrapper_wxDataViewTreeStore::_bind_base_HasContainerColumns},
	{"base_HasDefaultCompare", &luna_wrapper_wxDataViewTreeStore::_bind_base_HasDefaultCompare},
	{"base_Resort", &luna_wrapper_wxDataViewTreeStore::_bind_base_Resort},
	{"base_ValueChanged", &luna_wrapper_wxDataViewTreeStore::_bind_base_ValueChanged},
	{"fromVoid", &luna_wrapper_wxDataViewTreeStore::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewTreeStore::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewTreeStore::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewTreeStore >::converters[] = {
	{"wxDataViewModel", &luna_wrapper_wxDataViewTreeStore::_cast_from_wxDataViewModel},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewTreeStore >::enumValues[] = {
	{0,0}
};


