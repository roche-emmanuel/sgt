#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewVirtualListModel.h>

class luna_wrapper_wxDataViewVirtualListModel {
public:
	typedef Luna< wxDataViewVirtualListModel > luna_t;

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

		wxDataViewVirtualListModel* self= (wxDataViewVirtualListModel*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewVirtualListModel >::push(L,self,false);
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
		//wxDataViewVirtualListModel* ptr= dynamic_cast< wxDataViewVirtualListModel* >(Luna< wxDataViewModel >::check(L,1));
		wxDataViewVirtualListModel* ptr= luna_caster< wxDataViewModel, wxDataViewVirtualListModel >::cast(Luna< wxDataViewModel >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewVirtualListModel >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
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
	// wxDataViewVirtualListModel::wxDataViewVirtualListModel(lua_Table * data, unsigned int initial_size = 0)
	static wxDataViewVirtualListModel* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewVirtualListModel::wxDataViewVirtualListModel(lua_Table * data, unsigned int initial_size = 0) function, expected prototype:\nwxDataViewVirtualListModel::wxDataViewVirtualListModel(lua_Table * data, unsigned int initial_size = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int initial_size=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new wrapper_wxDataViewVirtualListModel(L,NULL, initial_size);
	}


	// Function binds:
	// bool wxDataViewVirtualListModel::base_Cleared()
	static int _bind_base_Cleared(lua_State *L) {
		if (!_lg_typecheck_base_Cleared(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewVirtualListModel::base_Cleared() function, expected prototype:\nbool wxDataViewVirtualListModel::base_Cleared()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewVirtualListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewVirtualListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewVirtualListModel::base_Cleared(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewVirtualListModel::Cleared();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxDataViewVirtualListModel::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const
	static int _bind_base_Compare(lua_State *L) {
		if (!_lg_typecheck_base_Compare(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewVirtualListModel::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const function, expected prototype:\nint wxDataViewVirtualListModel::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item1_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item1 in wxDataViewVirtualListModel::base_Compare function");
		}
		const wxDataViewItem & item1=*item1_ptr;
		const wxDataViewItem* item2_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item2 in wxDataViewVirtualListModel::base_Compare function");
		}
		const wxDataViewItem & item2=*item2_ptr;
		unsigned int column=(unsigned int)lua_tointeger(L,4);
		bool ascending=(bool)(lua_toboolean(L,5)==1);

		wxDataViewVirtualListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewVirtualListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewVirtualListModel::base_Compare(const wxDataViewItem &, const wxDataViewItem &, unsigned int, bool) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewVirtualListModel::Compare(item1, item2, column, ascending);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDataViewVirtualListModel::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const
	static int _bind_base_GetAttr(lua_State *L) {
		if (!_lg_typecheck_base_GetAttr(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewVirtualListModel::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const function, expected prototype:\nbool wxDataViewVirtualListModel::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const\nClass arguments details:\narg 1 ID = 11709329\narg 3 ID = 11637659\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewVirtualListModel::base_GetAttr function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);
		wxDataViewItemAttr* attr_ptr=(Luna< wxDataViewItemAttr >::check(L,4));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxDataViewVirtualListModel::base_GetAttr function");
		}
		wxDataViewItemAttr & attr=*attr_ptr;

		wxDataViewVirtualListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewVirtualListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewVirtualListModel::base_GetAttr(const wxDataViewItem &, unsigned int, wxDataViewItemAttr &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewVirtualListModel::GetAttr(item, col, attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewVirtualListModel::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const
	static int _bind_base_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_base_IsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewVirtualListModel::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const function, expected prototype:\nbool wxDataViewVirtualListModel::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewVirtualListModel::base_IsEnabled function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewVirtualListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewVirtualListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewVirtualListModel::base_IsEnabled(const wxDataViewItem &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewVirtualListModel::IsEnabled(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewVirtualListModel::base_HasContainerColumns(const wxDataViewItem & item) const
	static int _bind_base_HasContainerColumns(lua_State *L) {
		if (!_lg_typecheck_base_HasContainerColumns(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewVirtualListModel::base_HasContainerColumns(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewVirtualListModel::base_HasContainerColumns(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewVirtualListModel::base_HasContainerColumns function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewVirtualListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewVirtualListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewVirtualListModel::base_HasContainerColumns(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewVirtualListModel::HasContainerColumns(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewVirtualListModel::base_HasDefaultCompare() const
	static int _bind_base_HasDefaultCompare(lua_State *L) {
		if (!_lg_typecheck_base_HasDefaultCompare(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewVirtualListModel::base_HasDefaultCompare() const function, expected prototype:\nbool wxDataViewVirtualListModel::base_HasDefaultCompare() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewVirtualListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewVirtualListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewVirtualListModel::base_HasDefaultCompare() const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewVirtualListModel::HasDefaultCompare();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewVirtualListModel::base_Resort()
	static int _bind_base_Resort(lua_State *L) {
		if (!_lg_typecheck_base_Resort(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewVirtualListModel::base_Resort() function, expected prototype:\nvoid wxDataViewVirtualListModel::base_Resort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewVirtualListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewVirtualListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewVirtualListModel::base_Resort(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewVirtualListModel::Resort();

		return 0;
	}

	// bool wxDataViewVirtualListModel::base_ValueChanged(const wxDataViewItem & item, unsigned int col)
	static int _bind_base_ValueChanged(lua_State *L) {
		if (!_lg_typecheck_base_ValueChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewVirtualListModel::base_ValueChanged(const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewVirtualListModel::base_ValueChanged(const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewVirtualListModel::base_ValueChanged function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewVirtualListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewVirtualListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewVirtualListModel::base_ValueChanged(const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewVirtualListModel::ValueChanged(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewVirtualListModel* LunaTraits< wxDataViewVirtualListModel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewVirtualListModel::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void wxDataViewListModel::GetValueByRow(wxVariant & variant, unsigned int row, unsigned int col) const
	// bool wxDataViewListModel::SetValueByRow(const wxVariant & variant, unsigned int row, unsigned int col)
	// unsigned int wxDataViewModel::GetChildren(const wxDataViewItem & item, wxDataViewItemArray & children) const
	// unsigned int wxDataViewModel::GetColumnCount() const
	// wxString wxDataViewModel::GetColumnType(unsigned int col) const
	// wxDataViewItem wxDataViewModel::GetParent(const wxDataViewItem & item) const
	// void wxDataViewModel::GetValue(wxVariant & variant, const wxDataViewItem & item, unsigned int col) const
	// bool wxDataViewModel::IsContainer(const wxDataViewItem & item) const
	// bool wxDataViewModel::SetValue(const wxVariant & variant, const wxDataViewItem & item, unsigned int col)
}

void LunaTraits< wxDataViewVirtualListModel >::_bind_dtor(wxDataViewVirtualListModel* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewVirtualListModel >::className[] = "wxDataViewVirtualListModel";
const char LunaTraits< wxDataViewVirtualListModel >::fullName[] = "wxDataViewVirtualListModel";
const char LunaTraits< wxDataViewVirtualListModel >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewVirtualListModel >::parents[] = {"wx.wxDataViewListModel", 0};
const int LunaTraits< wxDataViewVirtualListModel >::hash = 16880619;
const int LunaTraits< wxDataViewVirtualListModel >::uniqueIDs[] = {66533182,0};

luna_RegType LunaTraits< wxDataViewVirtualListModel >::methods[] = {
	{"base_Cleared", &luna_wrapper_wxDataViewVirtualListModel::_bind_base_Cleared},
	{"base_Compare", &luna_wrapper_wxDataViewVirtualListModel::_bind_base_Compare},
	{"base_GetAttr", &luna_wrapper_wxDataViewVirtualListModel::_bind_base_GetAttr},
	{"base_IsEnabled", &luna_wrapper_wxDataViewVirtualListModel::_bind_base_IsEnabled},
	{"base_HasContainerColumns", &luna_wrapper_wxDataViewVirtualListModel::_bind_base_HasContainerColumns},
	{"base_HasDefaultCompare", &luna_wrapper_wxDataViewVirtualListModel::_bind_base_HasDefaultCompare},
	{"base_Resort", &luna_wrapper_wxDataViewVirtualListModel::_bind_base_Resort},
	{"base_ValueChanged", &luna_wrapper_wxDataViewVirtualListModel::_bind_base_ValueChanged},
	{"fromVoid", &luna_wrapper_wxDataViewVirtualListModel::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewVirtualListModel::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewVirtualListModel::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewVirtualListModel >::converters[] = {
	{"wxDataViewModel", &luna_wrapper_wxDataViewVirtualListModel::_cast_from_wxDataViewModel},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewVirtualListModel >::enumValues[] = {
	{0,0}
};


