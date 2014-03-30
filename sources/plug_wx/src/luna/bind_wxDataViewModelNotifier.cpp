#include <plug_common.h>

#include <luna/wrappers/wrapper_wxDataViewModelNotifier.h>

class luna_wrapper_wxDataViewModelNotifier {
public:
	typedef Luna< wxDataViewModelNotifier > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxDataViewModelNotifier,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90806294) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxDataViewModelNotifier*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewModelNotifier* rhs =(Luna< wxDataViewModelNotifier >::check(L,2));
		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
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

		wxDataViewModelNotifier* self= (wxDataViewModelNotifier*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxDataViewModelNotifier >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,90806294) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxDataViewModelNotifier >::check(L,1));
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

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxDataViewModelNotifier");
		
		return luna_dynamicCast(L,converters,"wxDataViewModelNotifier",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Cleared(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetOwner(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_Resort(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetOwner(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,66533182)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ValueChanged(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ItemsAdded(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ItemsChanged(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,60705462) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_ItemsDeleted(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,11709329) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,60705462) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxDataViewModelNotifier::wxDataViewModelNotifier(lua_Table * data)
	static wxDataViewModelNotifier* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewModelNotifier::wxDataViewModelNotifier(lua_Table * data) function, expected prototype:\nwxDataViewModelNotifier::wxDataViewModelNotifier(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxDataViewModelNotifier(L,NULL);
	}


	// Function binds:
	// bool wxDataViewModelNotifier::Cleared()
	static int _bind_Cleared(lua_State *L) {
		if (!_lg_typecheck_Cleared(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::Cleared() function, expected prototype:\nbool wxDataViewModelNotifier::Cleared()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::Cleared(). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->Cleared();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxDataViewModel * wxDataViewModelNotifier::GetOwner() const
	static int _bind_GetOwner(lua_State *L) {
		if (!_lg_typecheck_GetOwner(L)) {
			luaL_error(L, "luna typecheck failed in wxDataViewModel * wxDataViewModelNotifier::GetOwner() const function, expected prototype:\nwxDataViewModel * wxDataViewModelNotifier::GetOwner() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call wxDataViewModel * wxDataViewModelNotifier::GetOwner() const. Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxDataViewModel * lret = self->GetOwner();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxDataViewModel >::push(L,lret,false);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item)
	static int _bind_ItemAdded(lua_State *L) {
		if (!_lg_typecheck_ItemAdded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item) function, expected prototype:\nbool wxDataViewModelNotifier::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModelNotifier::ItemAdded function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModelNotifier::ItemAdded function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemAdded(const wxDataViewItem &, const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemAdded(parent, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemChanged(const wxDataViewItem & item)
	static int _bind_ItemChanged(lua_State *L) {
		if (!_lg_typecheck_ItemChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemChanged(const wxDataViewItem & item) function, expected prototype:\nbool wxDataViewModelNotifier::ItemChanged(const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModelNotifier::ItemChanged function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemChanged(const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemChanged(item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item)
	static int _bind_ItemDeleted(lua_State *L) {
		if (!_lg_typecheck_ItemDeleted(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item) function, expected prototype:\nbool wxDataViewModelNotifier::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModelNotifier::ItemDeleted function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,3));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModelNotifier::ItemDeleted function");
		}
		const wxDataViewItem & item=*item_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemDeleted(const wxDataViewItem &, const wxDataViewItem &). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemDeleted(parent, item);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items)
	static int _bind_ItemsAdded(lua_State *L) {
		if (!_lg_typecheck_ItemsAdded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModelNotifier::ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModelNotifier::ItemsAdded function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModelNotifier::ItemsAdded function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemsAdded(const wxDataViewItem &, const wxDataViewItemArray &). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemsAdded(parent, items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemsChanged(const wxDataViewItemArray & items)
	static int _bind_ItemsChanged(lua_State *L) {
		if (!_lg_typecheck_ItemsChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemsChanged(const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModelNotifier::ItemsChanged(const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModelNotifier::ItemsChanged function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemsChanged(const wxDataViewItemArray &). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemsChanged(items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items)
	static int _bind_ItemsDeleted(lua_State *L) {
		if (!_lg_typecheck_ItemsDeleted(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModelNotifier::ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModelNotifier::ItemsDeleted function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModelNotifier::ItemsDeleted function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ItemsDeleted(const wxDataViewItem &, const wxDataViewItemArray &). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ItemsDeleted(parent, items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void wxDataViewModelNotifier::Resort()
	static int _bind_Resort(lua_State *L) {
		if (!_lg_typecheck_Resort(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewModelNotifier::Resort() function, expected prototype:\nvoid wxDataViewModelNotifier::Resort()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewModelNotifier::Resort(). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Resort();

		return 0;
	}

	// void wxDataViewModelNotifier::SetOwner(wxDataViewModel * owner)
	static int _bind_SetOwner(lua_State *L) {
		if (!_lg_typecheck_SetOwner(L)) {
			luaL_error(L, "luna typecheck failed in void wxDataViewModelNotifier::SetOwner(wxDataViewModel * owner) function, expected prototype:\nvoid wxDataViewModelNotifier::SetOwner(wxDataViewModel * owner)\nClass arguments details:\narg 1 ID = 66533182\n\n%s",luna_dumpStack(L).c_str());
		}

		wxDataViewModel* owner=(Luna< wxDataViewModel >::check(L,2));

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxDataViewModelNotifier::SetOwner(wxDataViewModel *). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetOwner(owner);

		return 0;
	}

	// bool wxDataViewModelNotifier::ValueChanged(const wxDataViewItem & item, unsigned int col)
	static int _bind_ValueChanged(lua_State *L) {
		if (!_lg_typecheck_ValueChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::ValueChanged(const wxDataViewItem & item, unsigned int col) function, expected prototype:\nbool wxDataViewModelNotifier::ValueChanged(const wxDataViewItem & item, unsigned int col)\nClass arguments details:\narg 1 ID = 11709329\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* item_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !item_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg item in wxDataViewModelNotifier::ValueChanged function");
		}
		const wxDataViewItem & item=*item_ptr;
		unsigned int col=(unsigned int)lua_tointeger(L,3);

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::ValueChanged(const wxDataViewItem &, unsigned int). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ValueChanged(item, col);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::base_ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items)
	static int _bind_base_ItemsAdded(lua_State *L) {
		if (!_lg_typecheck_base_ItemsAdded(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::base_ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModelNotifier::base_ItemsAdded(const wxDataViewItem & parent, const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModelNotifier::base_ItemsAdded function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModelNotifier::base_ItemsAdded function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::base_ItemsAdded(const wxDataViewItem &, const wxDataViewItemArray &). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewModelNotifier::ItemsAdded(parent, items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::base_ItemsChanged(const wxDataViewItemArray & items)
	static int _bind_base_ItemsChanged(lua_State *L) {
		if (!_lg_typecheck_base_ItemsChanged(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::base_ItemsChanged(const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModelNotifier::base_ItemsChanged(const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,2));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModelNotifier::base_ItemsChanged function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::base_ItemsChanged(const wxDataViewItemArray &). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewModelNotifier::ItemsChanged(items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool wxDataViewModelNotifier::base_ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items)
	static int _bind_base_ItemsDeleted(lua_State *L) {
		if (!_lg_typecheck_base_ItemsDeleted(L)) {
			luaL_error(L, "luna typecheck failed in bool wxDataViewModelNotifier::base_ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items) function, expected prototype:\nbool wxDataViewModelNotifier::base_ItemsDeleted(const wxDataViewItem & parent, const wxDataViewItemArray & items)\nClass arguments details:\narg 1 ID = 11709329\narg 2 ID = 60705462\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxDataViewItem* parent_ptr=(Luna< wxDataViewItem >::check(L,2));
		if( !parent_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg parent in wxDataViewModelNotifier::base_ItemsDeleted function");
		}
		const wxDataViewItem & parent=*parent_ptr;
		const wxDataViewItemArray* items_ptr=(Luna< wxDataViewItemArray >::check(L,3));
		if( !items_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg items in wxDataViewModelNotifier::base_ItemsDeleted function");
		}
		const wxDataViewItemArray & items=*items_ptr;

		wxDataViewModelNotifier* self=(Luna< wxDataViewModelNotifier >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxDataViewModelNotifier::base_ItemsDeleted(const wxDataViewItem &, const wxDataViewItemArray &). Got : '%s'\n%s",typeid(Luna< wxDataViewModelNotifier >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->wxDataViewModelNotifier::ItemsDeleted(parent, items);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

wxDataViewModelNotifier* LunaTraits< wxDataViewModelNotifier >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxDataViewModelNotifier::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool wxDataViewModelNotifier::Cleared()
	// bool wxDataViewModelNotifier::ItemAdded(const wxDataViewItem & parent, const wxDataViewItem & item)
	// bool wxDataViewModelNotifier::ItemChanged(const wxDataViewItem & item)
	// bool wxDataViewModelNotifier::ItemDeleted(const wxDataViewItem & parent, const wxDataViewItem & item)
	// void wxDataViewModelNotifier::Resort()
	// bool wxDataViewModelNotifier::ValueChanged(const wxDataViewItem & item, unsigned int col)
}

void LunaTraits< wxDataViewModelNotifier >::_bind_dtor(wxDataViewModelNotifier* obj) {
	delete obj;
}

const char LunaTraits< wxDataViewModelNotifier >::className[] = "wxDataViewModelNotifier";
const char LunaTraits< wxDataViewModelNotifier >::fullName[] = "wxDataViewModelNotifier";
const char LunaTraits< wxDataViewModelNotifier >::moduleName[] = "wx";
const char* LunaTraits< wxDataViewModelNotifier >::parents[] = {0};
const int LunaTraits< wxDataViewModelNotifier >::hash = 90806294;
const int LunaTraits< wxDataViewModelNotifier >::uniqueIDs[] = {90806294,0};

luna_RegType LunaTraits< wxDataViewModelNotifier >::methods[] = {
	{"Cleared", &luna_wrapper_wxDataViewModelNotifier::_bind_Cleared},
	{"GetOwner", &luna_wrapper_wxDataViewModelNotifier::_bind_GetOwner},
	{"ItemAdded", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemAdded},
	{"ItemChanged", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemChanged},
	{"ItemDeleted", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemDeleted},
	{"ItemsAdded", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemsAdded},
	{"ItemsChanged", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemsChanged},
	{"ItemsDeleted", &luna_wrapper_wxDataViewModelNotifier::_bind_ItemsDeleted},
	{"Resort", &luna_wrapper_wxDataViewModelNotifier::_bind_Resort},
	{"SetOwner", &luna_wrapper_wxDataViewModelNotifier::_bind_SetOwner},
	{"ValueChanged", &luna_wrapper_wxDataViewModelNotifier::_bind_ValueChanged},
	{"base_ItemsAdded", &luna_wrapper_wxDataViewModelNotifier::_bind_base_ItemsAdded},
	{"base_ItemsChanged", &luna_wrapper_wxDataViewModelNotifier::_bind_base_ItemsChanged},
	{"base_ItemsDeleted", &luna_wrapper_wxDataViewModelNotifier::_bind_base_ItemsDeleted},
	{"dynCast", &luna_wrapper_wxDataViewModelNotifier::_bind_dynCast},
	{"__eq", &luna_wrapper_wxDataViewModelNotifier::_bind___eq},
	{"fromVoid", &luna_wrapper_wxDataViewModelNotifier::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxDataViewModelNotifier::_bind_asVoid},
	{"getTable", &luna_wrapper_wxDataViewModelNotifier::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxDataViewModelNotifier >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxDataViewModelNotifier >::enumValues[] = {
	{0,0}
};


