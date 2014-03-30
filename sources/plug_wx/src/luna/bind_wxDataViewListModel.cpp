#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewListModel.h>

class luna_wrapper_wxDataViewListModel {
public:
	typedef Luna< wxDataViewListModel > luna_t;

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

		wxDataViewListModel* self= (wxDataViewListModel*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewListModel >::push(L,self,false);
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
		//wxDataViewListModel* ptr= dynamic_cast< wxDataViewListModel* >(Luna< wxDataViewModel >::check(L,1));
		wxDataViewListModel* ptr= luna_caster< wxDataViewModel, wxDataViewListModel >::cast(Luna< wxDataViewModel >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxDataViewListModel >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

wxDataViewListModel* LunaTraits< wxDataViewListModel >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
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

void LunaTraits< wxDataViewListModel >::_bind_dtor(wxDataViewListModel* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewListModel >::className[] = "wxDataViewListModel";
const char LunaTraits< wxDataViewListModel >::fullName[] = "wxDataViewListModel";
const char LunaTraits< wxDataViewListModel >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewListModel >::parents[] = {"wx.wxDataViewModel", 0};
const int LunaTraits< wxDataViewListModel >::hash = 31141193;
const int LunaTraits< wxDataViewListModel >::uniqueIDs[] = {66533182,0};

luna_RegType LunaTraits< wxDataViewListModel >::methods[] = {
	{"fromVoid", &luna_wrapper_wxDataViewListModel::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewListModel::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewListModel::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewListModel >::converters[] = {
	{"wxDataViewModel", &luna_wrapper_wxDataViewListModel::_cast_from_wxDataViewModel},
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewListModel >::enumValues[] = {
	{0,0}
};


