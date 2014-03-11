#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewModel.h>

class luna_wrapper_wxDataViewModel {
public:
	typedef Luna< wxDataViewModel > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,66533182) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataViewModel*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewModel* rhs =(Luna< wxDataViewModel >::check(L,2));
		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		wxDataViewModel* self= (wxDataViewModel*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewModel >::push(L,self,false);
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

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataViewModel");
		
		return luna_dynamicCast(L,converters,"wxDataViewModel",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddNotifier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,90806294)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Cleared(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Compare(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_isboolean(L,5)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetAttr(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,11637659) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsEnabled(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetChildren(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,60705462) ) return false;
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

	inline static bool _lg_typecheck_GetParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasContainerColumns(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasDefaultCompare(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_HasValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_IsContainer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemAdded(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemChanged(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemDeleted(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,11709329) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemsAdded(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemsChanged(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ItemsDeleted(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_RemoveNotifier(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,90806294)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_Resort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ValueChanged(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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
	// wxDataViewModel::wxDataViewModel(lua_Table * data)
	static wxDataViewModel* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewModel::wxDataViewModel(lua_Table * data) function, expected prototype:\nwxDataViewModel::wxDataViewModel(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxDataViewModel(L,NULL);
	}


	// Function binds:
	// void wxDataViewModel::AddNotifier(wxDataViewModelNotifier * notifier)
	static int _bind_AddNotifier(lua_State *L) {
		if (!_lg_typecheck_AddNotifier(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewModel::AddNotifier(wxDataViewModelNotifier * notifier) function, expected prototype:\nvoid wxDataViewModel::AddNotifier(wxDataViewModelNotifier * notifier)\nClass arguments details:\narg 1 ID = 90806294\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewModelNotifier* notifier=(Luna< wxDataViewModelNotifier >::check(L,2));

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewModel::AddNotifier(wxDataViewModelNotifier *). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AddNotifier(notifier);

		return 0;
	}

	// bool wxDataViewModel::Cleared()
	static int _bind_Cleared(lua_State *L) {
		if (!_lg_typecheck_Cleared(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::Cleared() function, expected prototype:\nbool wxDataViewModel::Cleared()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::Cleared(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Cleared();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxDataViewModel::Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const
	static int _bind_Compare(lua_State *L) {
		if (!_lg_typecheck_Compare(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewModel::Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const function, expected prototype:\nint wxDataViewModel::Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item1_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item1 in wxDataViewModel::Compare function");
		}
		const wxDataViewItem & item1=*item1_ptr;
		const wxDataViewItem* item2_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item2 in wxDataViewModel::Compare function");
		}
		const wxDataViewItem & item2=*item2_ptr;
		unsigned int column=(unsigned int)lua_tointeger(L,4);
		bool ascending=(bool)(lua_toboolean(L,5)==1);

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewModel::Compare(const wxDataViewItem &, const wxDataViewItem &, unsigned int, bool) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Compare(item1, item2, column, ascending);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDataViewModel::GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const
	static int _bind_GetAttr(lua_State *L) {
		if (!_lg_typecheck_GetAttr(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const function, expected prototype:\nbool wxDataViewModel::GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const\nClass arguments details:\narg 1 ID = 11709329\narg 3 ID = 11637659\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::GetAttr function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);
		wxDataViewItemAttr* attr_ptr=(Luna< wxDataViewItemAttr >::check(L,4));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxDataViewModel::GetAttr function");
		}
		wxDataViewItemAttr & attr=*attr_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::GetAttr(const wxDataViewItem &, unsigned int, wxDataViewItemAttr &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->GetAttr(item, col, attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::IsEnabled(const wxDataViewItem & item, unsigned int col) const
	static int _bind_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_IsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::IsEnabled(const wxDataViewItem & item, unsigned int col) const function, expected prototype:\nbool wxDataViewModel::IsEnabled(const wxDataViewItem & item, unsigned int col) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::IsEnabled function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::IsEnabled(const wxDataViewItem &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsEnabled(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int wxDataViewModel::GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const
	static int _bind_GetChildren(lua_State *L) {
		if (!_lg_typecheck_GetChildren(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewModel::GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const function, expected prototype:\nunsigned int wxDataViewModel::GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::GetChildren function");
		}
		const wxDataViewItem & item=*item_ptr;
		wxDataViewItemArray* children_ptr=(Luna< wxDataViewItemArray >::check(L,3));
		if( !children_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg children in wxDataViewModel::GetChildren function");
		}
		wxDataViewItemArray & children=*children_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewModel::GetChildren(const wxDataViewItem &, wxDataViewItemArray &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetChildren(item, children);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int wxDataViewModel::GetColumnCount() const
	static int _bind_GetColumnCount(lua_State *L) {
		if (!_lg_typecheck_GetColumnCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int wxDataViewModel::GetColumnCount() const function, expected prototype:\nunsigned int wxDataViewModel::GetColumnCount() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int wxDataViewModel::GetColumnCount() const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->GetColumnCount();
		lua_pushnumber(L,lret);

		return 1;
	}

	// wxString wxDataViewModel::GetColumnType(unsigned int col) const
	static int _bind_GetColumnType(lua_State *L) {
		if (!_lg_typecheck_GetColumnType(L)) {
			luaL_error(L, "luna typecheck failed in wxString wxDataViewModel::GetColumnType(unsigned int col) const function, expected prototype:\nwxString wxDataViewModel::GetColumnType(unsigned int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int col=(unsigned int)lua_tointeger(L,2);

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxString wxDataViewModel::GetColumnType(unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxString lret = self->GetColumnType(col);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// wxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem & item) const
	static int _bind_GetParent(lua_State *L) {
		if (!_lg_typecheck_GetParent(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem & item) const function, expected prototype:\nwxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::GetParent function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewItem stack_lret = self->GetParent(item);
		wxDataViewItem* lret = new wxDataViewItem(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewItem >::push(L,lret,true);

		return 1;
	}

	// bool wxDataViewModel::HasContainerColumns(const wxDataViewItem & item) const
	static int _bind_HasContainerColumns(lua_State *L) {
		if (!_lg_typecheck_HasContainerColumns(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::HasContainerColumns(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewModel::HasContainerColumns(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::HasContainerColumns function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::HasContainerColumns(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasContainerColumns(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::HasDefaultCompare() const
	static int _bind_HasDefaultCompare(lua_State *L) {
		if (!_lg_typecheck_HasDefaultCompare(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::HasDefaultCompare() const function, expected prototype:\nbool wxDataViewModel::HasDefaultCompare() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::HasDefaultCompare() const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasDefaultCompare();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::HasValue(const wxDataViewItem & item, unsigned int col) const
	static int _bind_HasValue(lua_State *L) {
		if (!_lg_typecheck_HasValue(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::HasValue(const wxDataViewItem & item, unsigned int col) const function, expected prototype:\nbool wxDataViewModel::HasValue(const wxDataViewItem & item, unsigned int col) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::HasValue function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::HasValue(const wxDataViewItem &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasValue(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::IsContainer(const wxDataViewItem & item) const
	static int _bind_IsContainer(lua_State *L) {
		if (!_lg_typecheck_IsContainer(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::IsContainer(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewModel::IsContainer(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::IsContainer function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::IsContainer(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsContainer(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item)
	static int _bind_ItemAdded(lua_State *L) {
		if (!_lg_typecheck_ItemAdded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item) function, expected prototype:\nbool wxDataViewModel::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModel::ItemAdded function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::ItemAdded function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::ItemAdded(const wxDataViewItem &, const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemAdded(parent, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::ItemChanged(const wxDataViewItem & item)
	static int _bind_ItemChanged(lua_State *L) {
		if (!_lg_typecheck_ItemChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::ItemChanged(const wxDataViewItem & item) function, expected prototype:\nbool wxDataViewModel::ItemChanged(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::ItemChanged function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::ItemChanged(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemChanged(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item)
	static int _bind_ItemDeleted(lua_State *L) {
		if (!_lg_typecheck_ItemDeleted(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item) function, expected prototype:\nbool wxDataViewModel::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModel::ItemDeleted function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::ItemDeleted function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::ItemDeleted(const wxDataViewItem &, const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemDeleted(parent, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items)
	static int _bind_ItemsAdded(lua_State *L) {
		if (!_lg_typecheck_ItemsAdded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModel::ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModel::ItemsAdded function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModel::ItemsAdded function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::ItemsAdded(const wxDataViewItem &, const wxDataViewItemArray &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemsAdded(parent, items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::ItemsChanged(const wxDataViewItemArray & items)
	static int _bind_ItemsChanged(lua_State *L) {
		if (!_lg_typecheck_ItemsChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::ItemsChanged(const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModel::ItemsChanged(const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModel::ItemsChanged function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::ItemsChanged(const wxDataViewItemArray &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemsChanged(items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items)
	static int _bind_ItemsDeleted(lua_State *L) {
		if (!_lg_typecheck_ItemsDeleted(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModel::ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModel::ItemsDeleted function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModel::ItemsDeleted function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::ItemsDeleted(const wxDataViewItem &, const wxDataViewItemArray &). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemsDeleted(parent, items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewModel::RemoveNotifier(wxDataViewModelNotifier * notifier)
	static int _bind_RemoveNotifier(lua_State *L) {
		if (!_lg_typecheck_RemoveNotifier(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewModel::RemoveNotifier(wxDataViewModelNotifier * notifier) function, expected prototype:\nvoid wxDataViewModel::RemoveNotifier(wxDataViewModelNotifier * notifier)\nClass arguments details:\narg 1 ID = 90806294\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewModelNotifier* notifier=(Luna< wxDataViewModelNotifier >::check(L,2));

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewModel::RemoveNotifier(wxDataViewModelNotifier *). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RemoveNotifier(notifier);

		return 0;
	}

	// void wxDataViewModel::Resort()
	static int _bind_Resort(lua_State *L) {
		if (!_lg_typecheck_Resort(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewModel::Resort() function, expected prototype:\nvoid wxDataViewModel::Resort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewModel::Resort(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Resort();

		return 0;
	}

	// bool wxDataViewModel::ValueChanged(const wxDataViewItem & item, unsigned int col)
	static int _bind_ValueChanged(lua_State *L) {
		if (!_lg_typecheck_ValueChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::ValueChanged(const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewModel::ValueChanged(const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::ValueChanged function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::ValueChanged(const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ValueChanged(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::base_Cleared()
	static int _bind_base_Cleared(lua_State *L) {
		if (!_lg_typecheck_base_Cleared(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::base_Cleared() function, expected prototype:\nbool wxDataViewModel::base_Cleared()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::base_Cleared(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewModel::Cleared();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxDataViewModel::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const
	static int _bind_base_Compare(lua_State *L) {
		if (!_lg_typecheck_base_Compare(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewModel::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const function, expected prototype:\nint wxDataViewModel::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item1_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item1 in wxDataViewModel::base_Compare function");
		}
		const wxDataViewItem & item1=*item1_ptr;
		const wxDataViewItem* item2_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item2 in wxDataViewModel::base_Compare function");
		}
		const wxDataViewItem & item2=*item2_ptr;
		unsigned int column=(unsigned int)lua_tointeger(L,4);
		bool ascending=(bool)(lua_toboolean(L,5)==1);

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewModel::base_Compare(const wxDataViewItem &, const wxDataViewItem &, unsigned int, bool) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewModel::Compare(item1, item2, column, ascending);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDataViewModel::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const
	static int _bind_base_GetAttr(lua_State *L) {
		if (!_lg_typecheck_base_GetAttr(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const function, expected prototype:\nbool wxDataViewModel::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const\nClass arguments details:\narg 1 ID = 11709329\narg 3 ID = 11637659\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::base_GetAttr function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);
		wxDataViewItemAttr* attr_ptr=(Luna< wxDataViewItemAttr >::check(L,4));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxDataViewModel::base_GetAttr function");
		}
		wxDataViewItemAttr & attr=*attr_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::base_GetAttr(const wxDataViewItem &, unsigned int, wxDataViewItemAttr &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewModel::GetAttr(item, col, attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const
	static int _bind_base_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_base_IsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const function, expected prototype:\nbool wxDataViewModel::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::base_IsEnabled function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::base_IsEnabled(const wxDataViewItem &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewModel::IsEnabled(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::base_HasContainerColumns(const wxDataViewItem & item) const
	static int _bind_base_HasContainerColumns(lua_State *L) {
		if (!_lg_typecheck_base_HasContainerColumns(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::base_HasContainerColumns(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewModel::base_HasContainerColumns(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::base_HasContainerColumns function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::base_HasContainerColumns(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewModel::HasContainerColumns(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModel::base_HasDefaultCompare() const
	static int _bind_base_HasDefaultCompare(lua_State *L) {
		if (!_lg_typecheck_base_HasDefaultCompare(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::base_HasDefaultCompare() const function, expected prototype:\nbool wxDataViewModel::base_HasDefaultCompare() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::base_HasDefaultCompare() const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewModel::HasDefaultCompare();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewModel::base_Resort()
	static int _bind_base_Resort(lua_State *L) {
		if (!_lg_typecheck_base_Resort(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewModel::base_Resort() function, expected prototype:\nvoid wxDataViewModel::base_Resort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewModel::base_Resort(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewModel::Resort();

		return 0;
	}

	// bool wxDataViewModel::base_ValueChanged(const wxDataViewItem & item, unsigned int col)
	static int _bind_base_ValueChanged(lua_State *L) {
		if (!_lg_typecheck_base_ValueChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModel::base_ValueChanged(const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewModel::base_ValueChanged(const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModel::base_ValueChanged function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewModel* self=(Luna< wxDataViewModel >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModel::base_ValueChanged(const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewModel::ValueChanged(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewModel* LunaTraits< wxDataViewModel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewModel::_bind_ctor(L);
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

void LunaTraits< wxDataViewModel >::_bind_dtor(wxDataViewModel* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< wxDataViewModel >::className[] = "wxDataViewModel";
const char LunaTraits< wxDataViewModel >::fullName[] = "wxDataViewModel";
const char LunaTraits< wxDataViewModel >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewModel >::parents[] = {0};
const int LunaTraits< wxDataViewModel >::hash = 66533182;
const int LunaTraits< wxDataViewModel >::uniqueIDs[] = {66533182,0};

luna_RegType LunaTraits< wxDataViewModel >::methods[] = {
	{"AddNotifier", &luna_wrapper_wxDataViewModel::_bind_AddNotifier},
	{"Cleared", &luna_wrapper_wxDataViewModel::_bind_Cleared},
	{"Compare", &luna_wrapper_wxDataViewModel::_bind_Compare},
	{"GetAttr", &luna_wrapper_wxDataViewModel::_bind_GetAttr},
	{"IsEnabled", &luna_wrapper_wxDataViewModel::_bind_IsEnabled},
	{"GetChildren", &luna_wrapper_wxDataViewModel::_bind_GetChildren},
	{"GetColumnCount", &luna_wrapper_wxDataViewModel::_bind_GetColumnCount},
	{"GetColumnType", &luna_wrapper_wxDataViewModel::_bind_GetColumnType},
	{"GetParent", &luna_wrapper_wxDataViewModel::_bind_GetParent},
	{"HasContainerColumns", &luna_wrapper_wxDataViewModel::_bind_HasContainerColumns},
	{"HasDefaultCompare", &luna_wrapper_wxDataViewModel::_bind_HasDefaultCompare},
	{"HasValue", &luna_wrapper_wxDataViewModel::_bind_HasValue},
	{"IsContainer", &luna_wrapper_wxDataViewModel::_bind_IsContainer},
	{"ItemAdded", &luna_wrapper_wxDataViewModel::_bind_ItemAdded},
	{"ItemChanged", &luna_wrapper_wxDataViewModel::_bind_ItemChanged},
	{"ItemDeleted", &luna_wrapper_wxDataViewModel::_bind_ItemDeleted},
	{"ItemsAdded", &luna_wrapper_wxDataViewModel::_bind_ItemsAdded},
	{"ItemsChanged", &luna_wrapper_wxDataViewModel::_bind_ItemsChanged},
	{"ItemsDeleted", &luna_wrapper_wxDataViewModel::_bind_ItemsDeleted},
	{"RemoveNotifier", &luna_wrapper_wxDataViewModel::_bind_RemoveNotifier},
	{"Resort", &luna_wrapper_wxDataViewModel::_bind_Resort},
	{"ValueChanged", &luna_wrapper_wxDataViewModel::_bind_ValueChanged},
	{"base_Cleared", &luna_wrapper_wxDataViewModel::_bind_base_Cleared},
	{"base_Compare", &luna_wrapper_wxDataViewModel::_bind_base_Compare},
	{"base_GetAttr", &luna_wrapper_wxDataViewModel::_bind_base_GetAttr},
	{"base_IsEnabled", &luna_wrapper_wxDataViewModel::_bind_base_IsEnabled},
	{"base_HasContainerColumns", &luna_wrapper_wxDataViewModel::_bind_base_HasContainerColumns},
	{"base_HasDefaultCompare", &luna_wrapper_wxDataViewModel::_bind_base_HasDefaultCompare},
	{"base_Resort", &luna_wrapper_wxDataViewModel::_bind_base_Resort},
	{"base_ValueChanged", &luna_wrapper_wxDataViewModel::_bind_base_ValueChanged},
	{"dynCast", &luna_wrapper_wxDataViewModel::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDataViewModel::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDataViewModel::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewModel::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewModel::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewModel >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewModel >::enumValues[] = {
	{0,0}
};


