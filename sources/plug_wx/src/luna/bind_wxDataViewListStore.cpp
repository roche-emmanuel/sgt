#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewListStore.h>

class luna_wrapper_wxDataViewListStore {
public:
	typedef Luna< wxDataViewListStore > luna_t;

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

		wxDataViewListStore* self= (wxDataViewListStore*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewListStore >::push(L,self,false);
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
		//wxDataViewListStore* ptr= dynamic_cast< wxDataViewListStore* >(Luna< wxDataViewModel >::check(L,1));
		wxDataViewListStore* ptr= luna_caster< wxDataViewModel, wxDataViewListStore >::cast(Luna< wxDataViewModel >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewListStore >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_PrependColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_InsertColumn(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_AppendColumn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteItem(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DeleteAllItems(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetColumnType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
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

	inline static bool _lg_typecheck_base_GetColumnCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetColumnType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewListStore::wxDataViewListStore(lua_Table * data)
	static wxDataViewListStore* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewListStore::wxDataViewListStore(lua_Table * data) function, expected prototype:\nwxDataViewListStore::wxDataViewListStore(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxDataViewListStore(L,NULL);
	}


	// Function binds:
	// void wxDataViewListStore::PrependColumn(const wxString & varianttype)
	static int _bind_PrependColumn(lua_State *L) {
		if (!_lg_typecheck_PrependColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewListStore::PrependColumn(const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListStore::PrependColumn(const wxString & varianttype)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString varianttype(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewListStore::PrependColumn(const wxString &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PrependColumn(varianttype);

		return 0;
	}

	// void wxDataViewListStore::InsertColumn(unsigned int pos, const wxString & varianttype)
	static int _bind_InsertColumn(lua_State *L) {
		if (!_lg_typecheck_InsertColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewListStore::InsertColumn(unsigned int pos, const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListStore::InsertColumn(unsigned int pos, const wxString & varianttype)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);
		wxString varianttype(lua_tostring(L,3),lua_objlen(L,3));

		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewListStore::InsertColumn(unsigned int, const wxString &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->InsertColumn(pos, varianttype);

		return 0;
	}

	// void wxDataViewListStore::AppendColumn(const wxString & varianttype)
	static int _bind_AppendColumn(lua_State *L) {
		if (!_lg_typecheck_AppendColumn(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewListStore::AppendColumn(const wxString & varianttype) function, expected prototype:\nvoid wxDataViewListStore::AppendColumn(const wxString & varianttype)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString varianttype(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewListStore::AppendColumn(const wxString &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AppendColumn(varianttype);

		return 0;
	}

	// void wxDataViewListStore::DeleteItem(unsigned int pos)
	static int _bind_DeleteItem(lua_State *L) {
		if (!_lg_typecheck_DeleteItem(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewListStore::DeleteItem(unsigned int pos) function, expected prototype:\nvoid wxDataViewListStore::DeleteItem(unsigned int pos)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int pos=(unsigned int)lua_tointeger(L,2);

		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewListStore::DeleteItem(unsigned int). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteItem(pos);

		return 0;
	}

	// void wxDataViewListStore::DeleteAllItems()
	static int _bind_DeleteAllItems(lua_State *L) {
		if (!_lg_typecheck_DeleteAllItems(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewListStore::DeleteAllItems() function, expected prototype:\nvoid wxDataViewListStore::DeleteAllItems()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewListStore::DeleteAllItems(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DeleteAllItems();

		return 0;
	}

	// unsigned int wxDataViewListStore::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewListStore::GetColumnCount() const function, expected prototype:\nunsigned int wxDataViewListStore::GetColumnCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewListStore::GetColumnCount() const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxDataViewListStore::GetColumnType(unsigned int col) const
	static int _bind_GetColumnType(lua_State *L) {
		if (!_lg_typecheck_GetColumnType(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDataViewListStore::GetColumnType(unsigned int col) const function, expected prototype:\nwxString wxDataViewListStore::GetColumnType(unsigned int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int col=(unsigned int)lua_tointeger(L,2);

		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDataViewListStore::GetColumnType(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetColumnType(col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool wxDataViewListStore::base_Cleared()
	static int _bind_base_Cleared(lua_State *L) {
		if (!_lg_typecheck_base_Cleared(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewListStore::base_Cleared() function, expected prototype:\nbool wxDataViewListStore::base_Cleared()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewListStore::base_Cleared(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewListStore::Cleared();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxDataViewListStore::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const
	static int _bind_base_Compare(lua_State *L) {
		if (!_lg_typecheck_base_Compare(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewListStore::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const function, expected prototype:\nint wxDataViewListStore::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item1_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item1 in wxDataViewListStore::base_Compare function");
		}
		const wxDataViewItem & item1=*item1_ptr;
		const wxDataViewItem* item2_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item2 in wxDataViewListStore::base_Compare function");
		}
		const wxDataViewItem & item2=*item2_ptr;
		unsigned int column=(unsigned int)lua_tointeger(L,4);
		bool ascending=(bool)(lua_toboolean(L,5)==1);

		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewListStore::base_Compare(const wxDataViewItem &, const wxDataViewItem &, unsigned int, bool) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewListStore::Compare(item1, item2, column, ascending);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDataViewListStore::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const
	static int _bind_base_GetAttr(lua_State *L) {
		if (!_lg_typecheck_base_GetAttr(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewListStore::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const function, expected prototype:\nbool wxDataViewListStore::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const\nClass arguments details:\narg 1 ID = 11709329\narg 3 ID = 11637659\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListStore::base_GetAttr function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);
		wxDataViewItemAttr* attr_ptr=(Luna< wxDataViewItemAttr >::check(L,4));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxDataViewListStore::base_GetAttr function");
		}
		wxDataViewItemAttr & attr=*attr_ptr;

		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewListStore::base_GetAttr(const wxDataViewItem &, unsigned int, wxDataViewItemAttr &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewListStore::GetAttr(item, col, attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListStore::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const
	static int _bind_base_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_base_IsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewListStore::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const function, expected prototype:\nbool wxDataViewListStore::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListStore::base_IsEnabled function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewListStore::base_IsEnabled(const wxDataViewItem &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewListStore::IsEnabled(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListStore::base_HasContainerColumns(const wxDataViewItem & item) const
	static int _bind_base_HasContainerColumns(lua_State *L) {
		if (!_lg_typecheck_base_HasContainerColumns(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewListStore::base_HasContainerColumns(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewListStore::base_HasContainerColumns(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListStore::base_HasContainerColumns function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewListStore::base_HasContainerColumns(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewListStore::HasContainerColumns(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewListStore::base_HasDefaultCompare() const
	static int _bind_base_HasDefaultCompare(lua_State *L) {
		if (!_lg_typecheck_base_HasDefaultCompare(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewListStore::base_HasDefaultCompare() const function, expected prototype:\nbool wxDataViewListStore::base_HasDefaultCompare() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewListStore::base_HasDefaultCompare() const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewListStore::HasDefaultCompare();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewListStore::base_Resort()
	static int _bind_base_Resort(lua_State *L) {
		if (!_lg_typecheck_base_Resort(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewListStore::base_Resort() function, expected prototype:\nvoid wxDataViewListStore::base_Resort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewListStore::base_Resort(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewListStore::Resort();

		return 0;
	}

	// bool wxDataViewListStore::base_ValueChanged(const wxDataViewItem & item, unsigned int col)
	static int _bind_base_ValueChanged(lua_State *L) {
		if (!_lg_typecheck_base_ValueChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewListStore::base_ValueChanged(const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewListStore::base_ValueChanged(const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewListStore::base_ValueChanged function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewListStore::base_ValueChanged(const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewListStore::ValueChanged(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxDataViewListStore::base_GetColumnCount() const
	static int _bind_base_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_base_GetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewListStore::base_GetColumnCount() const function, expected prototype:\nunsigned int wxDataViewListStore::base_GetColumnCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewListStore::base_GetColumnCount() const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->wxDataViewListStore::GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxDataViewListStore::base_GetColumnType(unsigned int col) const
	static int _bind_base_GetColumnType(lua_State *L) {
		if (!_lg_typecheck_base_GetColumnType(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDataViewListStore::base_GetColumnType(unsigned int col) const function, expected prototype:\nwxString wxDataViewListStore::base_GetColumnType(unsigned int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int col=(unsigned int)lua_tointeger(L,2);

		wxDataViewListStore* self=Luna< wxDataViewModel >::checkSubType< wxDataViewListStore >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDataViewListStore::base_GetColumnType(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->wxDataViewListStore::GetColumnType(col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

wxDataViewListStore* LunaTraits< wxDataViewListStore >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewListStore::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// unsigned int wxDataViewModel::GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const
	// wxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem & item) const
	// void wxDataViewModel::GetValue(wxVariant & variant, const wxDataViewItem & item, unsigned int col) const
	// bool wxDataViewModel::IsContainer(const wxDataViewItem & item) const
	// bool wxDataViewModel::SetValue(const wxVariant & variant, const wxDataViewItem & item, unsigned int col)
}

void LunaTraits< wxDataViewListStore >::_bind_dtor(wxDataViewListStore* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewListStore >::className[] = "wxDataViewListStore";
const char LunaTraits< wxDataViewListStore >::fullName[] = "wxDataViewListStore";
const char LunaTraits< wxDataViewListStore >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewListStore >::parents[] = {"wx.wxDataViewIndexListModel", 0};
const int LunaTraits< wxDataViewListStore >::hash = 36842241;
const int LunaTraits< wxDataViewListStore >::uniqueIDs[] = {66533182,0};

luna_RegType LunaTraits< wxDataViewListStore >::methods[] = {
	{"PrependColumn", &luna_wrapper_wxDataViewListStore::_bind_PrependColumn},
	{"InsertColumn", &luna_wrapper_wxDataViewListStore::_bind_InsertColumn},
	{"AppendColumn", &luna_wrapper_wxDataViewListStore::_bind_AppendColumn},
	{"DeleteItem", &luna_wrapper_wxDataViewListStore::_bind_DeleteItem},
	{"DeleteAllItems", &luna_wrapper_wxDataViewListStore::_bind_DeleteAllItems},
	{"GetColumnCount", &luna_wrapper_wxDataViewListStore::_bind_GetColumnCount},
	{"GetColumnType", &luna_wrapper_wxDataViewListStore::_bind_GetColumnType},
	{"base_Cleared", &luna_wrapper_wxDataViewListStore::_bind_base_Cleared},
	{"base_Compare", &luna_wrapper_wxDataViewListStore::_bind_base_Compare},
	{"base_GetAttr", &luna_wrapper_wxDataViewListStore::_bind_base_GetAttr},
	{"base_IsEnabled", &luna_wrapper_wxDataViewListStore::_bind_base_IsEnabled},
	{"base_HasContainerColumns", &luna_wrapper_wxDataViewListStore::_bind_base_HasContainerColumns},
	{"base_HasDefaultCompare", &luna_wrapper_wxDataViewListStore::_bind_base_HasDefaultCompare},
	{"base_Resort", &luna_wrapper_wxDataViewListStore::_bind_base_Resort},
	{"base_ValueChanged", &luna_wrapper_wxDataViewListStore::_bind_base_ValueChanged},
	{"base_GetColumnCount", &luna_wrapper_wxDataViewListStore::_bind_base_GetColumnCount},
	{"base_GetColumnType", &luna_wrapper_wxDataViewListStore::_bind_base_GetColumnType},
	{"fromVoid", &luna_wrapper_wxDataViewListStore::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewListStore::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewListStore::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewListStore >::converters[] = {
	{"wxDataViewModel", &luna_wrapper_wxDataViewListStore::_cast_from_wxDataViewModel},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewListStore >::enumValues[] = {
	{0,0}
};


