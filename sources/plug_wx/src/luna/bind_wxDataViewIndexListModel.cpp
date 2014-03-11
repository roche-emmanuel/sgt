#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewIndexListModel.h>

class luna_wrapper_wxDataViewIndexListModel {
public:
	typedef Luna< wxDataViewIndexListModel > luna_t;

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

		wxDataViewIndexListModel* self= (wxDataViewIndexListModel*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewIndexListModel >::push(L,self,false);
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
		//wxDataViewIndexListModel* ptr= dynamic_cast< wxDataViewIndexListModel* >(Luna< wxDataViewModel >::check(L,1));
		wxDataViewIndexListModel* ptr= luna_caster< wxDataViewModel, wxDataViewIndexListModel >::cast(Luna< wxDataViewModel >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewIndexListModel >::push(L,ptr,false);
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
	// wxDataViewIndexListModel::wxDataViewIndexListModel(lua_Table * data, unsigned int initial_size = 0)
	static wxDataViewIndexListModel* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewIndexListModel::wxDataViewIndexListModel(lua_Table * data, unsigned int initial_size = 0) function, expected prototype:\nwxDataViewIndexListModel::wxDataViewIndexListModel(lua_Table * data, unsigned int initial_size = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int initial_size=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)0;

		return new wrapper_wxDataViewIndexListModel(L,NULL, initial_size);
	}


	// Function binds:
	// bool wxDataViewIndexListModel::base_Cleared()
	static int _bind_base_Cleared(lua_State *L) {
		if (!_lg_typecheck_base_Cleared(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewIndexListModel::base_Cleared() function, expected prototype:\nbool wxDataViewIndexListModel::base_Cleared()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewIndexListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewIndexListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewIndexListModel::base_Cleared(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewIndexListModel::Cleared();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxDataViewIndexListModel::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const
	static int _bind_base_Compare(lua_State *L) {
		if (!_lg_typecheck_base_Compare(L)) {
			luaL_error(L, "luna typecheck failed in int wxDataViewIndexListModel::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const function, expected prototype:\nint wxDataViewIndexListModel::base_Compare(const wxDataViewItem & item1, const wxDataViewItem & item2, unsigned int column, bool ascending) const\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item1_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item1 in wxDataViewIndexListModel::base_Compare function");
		}
		const wxDataViewItem & item1=*item1_ptr;
		const wxDataViewItem* item2_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item2_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item2 in wxDataViewIndexListModel::base_Compare function");
		}
		const wxDataViewItem & item2=*item2_ptr;
		unsigned int column=(unsigned int)lua_tointeger(L,4);
		bool ascending=(bool)(lua_toboolean(L,5)==1);

		wxDataViewIndexListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewIndexListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxDataViewIndexListModel::base_Compare(const wxDataViewItem &, const wxDataViewItem &, unsigned int, bool) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->wxDataViewIndexListModel::Compare(item1, item2, column, ascending);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool wxDataViewIndexListModel::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const
	static int _bind_base_GetAttr(lua_State *L) {
		if (!_lg_typecheck_base_GetAttr(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewIndexListModel::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const function, expected prototype:\nbool wxDataViewIndexListModel::base_GetAttr(const wxDataViewItem & item, unsigned int col, wxDataViewItemAttr & attr) const\nClass arguments details:\narg 1 ID = 11709329\narg 3 ID = 11637659\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewIndexListModel::base_GetAttr function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);
		wxDataViewItemAttr* attr_ptr=(Luna< wxDataViewItemAttr >::check(L,4));
		if( !attr_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg attr in wxDataViewIndexListModel::base_GetAttr function");
		}
		wxDataViewItemAttr & attr=*attr_ptr;

		wxDataViewIndexListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewIndexListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewIndexListModel::base_GetAttr(const wxDataViewItem &, unsigned int, wxDataViewItemAttr &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewIndexListModel::GetAttr(item, col, attr);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewIndexListModel::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const
	static int _bind_base_IsEnabled(lua_State *L) {
		if (!_lg_typecheck_base_IsEnabled(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewIndexListModel::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const function, expected prototype:\nbool wxDataViewIndexListModel::base_IsEnabled(const wxDataViewItem & item, unsigned int col) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewIndexListModel::base_IsEnabled function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewIndexListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewIndexListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewIndexListModel::base_IsEnabled(const wxDataViewItem &, unsigned int) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewIndexListModel::IsEnabled(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewIndexListModel::base_HasContainerColumns(const wxDataViewItem & item) const
	static int _bind_base_HasContainerColumns(lua_State *L) {
		if (!_lg_typecheck_base_HasContainerColumns(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewIndexListModel::base_HasContainerColumns(const wxDataViewItem & item) const function, expected prototype:\nbool wxDataViewIndexListModel::base_HasContainerColumns(const wxDataViewItem & item) const\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewIndexListModel::base_HasContainerColumns function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewIndexListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewIndexListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewIndexListModel::base_HasContainerColumns(const wxDataViewItem &) const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewIndexListModel::HasContainerColumns(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewIndexListModel::base_HasDefaultCompare() const
	static int _bind_base_HasDefaultCompare(lua_State *L) {
		if (!_lg_typecheck_base_HasDefaultCompare(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewIndexListModel::base_HasDefaultCompare() const function, expected prototype:\nbool wxDataViewIndexListModel::base_HasDefaultCompare() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewIndexListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewIndexListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewIndexListModel::base_HasDefaultCompare() const. Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewIndexListModel::HasDefaultCompare();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewIndexListModel::base_Resort()
	static int _bind_base_Resort(lua_State *L) {
		if (!_lg_typecheck_base_Resort(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewIndexListModel::base_Resort() function, expected prototype:\nvoid wxDataViewIndexListModel::base_Resort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewIndexListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewIndexListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewIndexListModel::base_Resort(). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->wxDataViewIndexListModel::Resort();

		return 0;
	}

	// bool wxDataViewIndexListModel::base_ValueChanged(const wxDataViewItem & item, unsigned int col)
	static int _bind_base_ValueChanged(lua_State *L) {
		if (!_lg_typecheck_base_ValueChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewIndexListModel::base_ValueChanged(const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewIndexListModel::base_ValueChanged(const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewIndexListModel::base_ValueChanged function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewIndexListModel* self=Luna< wxDataViewModel >::checkSubType< wxDataViewIndexListModel >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewIndexListModel::base_ValueChanged(const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxDataViewModel >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewIndexListModel::ValueChanged(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewIndexListModel* LunaTraits< wxDataViewIndexListModel >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewIndexListModel::_bind_ctor(L);
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

void LunaTraits< wxDataViewIndexListModel >::_bind_dtor(wxDataViewIndexListModel* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewIndexListModel >::className[] = "wxDataViewIndexListModel";
const char LunaTraits< wxDataViewIndexListModel >::fullName[] = "wxDataViewIndexListModel";
const char LunaTraits< wxDataViewIndexListModel >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewIndexListModel >::parents[] = {"wx.wxDataViewListModel", 0};
const int LunaTraits< wxDataViewIndexListModel >::hash = 19234895;
const int LunaTraits< wxDataViewIndexListModel >::uniqueIDs[] = {66533182,0};

luna_RegType LunaTraits< wxDataViewIndexListModel >::methods[] = {
	{"base_Cleared", &luna_wrapper_wxDataViewIndexListModel::_bind_base_Cleared},
	{"base_Compare", &luna_wrapper_wxDataViewIndexListModel::_bind_base_Compare},
	{"base_GetAttr", &luna_wrapper_wxDataViewIndexListModel::_bind_base_GetAttr},
	{"base_IsEnabled", &luna_wrapper_wxDataViewIndexListModel::_bind_base_IsEnabled},
	{"base_HasContainerColumns", &luna_wrapper_wxDataViewIndexListModel::_bind_base_HasContainerColumns},
	{"base_HasDefaultCompare", &luna_wrapper_wxDataViewIndexListModel::_bind_base_HasDefaultCompare},
	{"base_Resort", &luna_wrapper_wxDataViewIndexListModel::_bind_base_Resort},
	{"base_ValueChanged", &luna_wrapper_wxDataViewIndexListModel::_bind_base_ValueChanged},
	{"fromVoid", &luna_wrapper_wxDataViewIndexListModel::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewIndexListModel::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewIndexListModel::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewIndexListModel >::converters[] = {
	{"wxDataViewModel", &luna_wrapper_wxDataViewIndexListModel::_cast_from_wxDataViewModel},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewIndexListModel >::enumValues[] = {
	{0,0}
};


