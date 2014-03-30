#include <plug_common.h>

#include <luna/wrappers/wrapper_wxPageSetupDialog.h>

class luna_wrapper_wxPageSetupDialog {
public:
	typedef Luna< wxPageSetupDialog > luna_t;

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

		wxPageSetupDialog* self= (wxPageSetupDialog*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxPageSetupDialog >::push(L,self,false);
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
		//wxPageSetupDialog* ptr= dynamic_cast< wxPageSetupDialog* >(Luna< wxObject >::check(L,1));
		wxPageSetupDialog* ptr= luna_caster< wxObject, wxPageSetupDialog >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxPageSetupDialog >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,56813631)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,56813631)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< wxObject >::checkSubType< wxWindow >(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,56813631)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetPageSetupData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ShowModal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxPageSetupDialog::wxPageSetupDialog(wxWindow * parent, wxPageSetupDialogData * data = NULL)
	static wxPageSetupDialog* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxPageSetupDialog::wxPageSetupDialog(wxWindow * parent, wxPageSetupDialogData * data = NULL) function, expected prototype:\nwxPageSetupDialog::wxPageSetupDialog(wxWindow * parent, wxPageSetupDialogData * data = NULL)\nClass arguments details:\narg 1 ID = 56813631\narg 2 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,1));
		wxPageSetupDialogData* data=luatop>1 ? (Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,2)) : (wxPageSetupDialogData*)NULL;

		return new wxPageSetupDialog(parent, data);
	}

	// wxPageSetupDialog::wxPageSetupDialog(lua_Table * data, wxWindow * parent, wxPageSetupDialogData * data = NULL)
	static wxPageSetupDialog* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxPageSetupDialog::wxPageSetupDialog(lua_Table * data, wxWindow * parent, wxPageSetupDialogData * data = NULL) function, expected prototype:\nwxPageSetupDialog::wxPageSetupDialog(lua_Table * data, wxWindow * parent, wxPageSetupDialogData * data = NULL)\nClass arguments details:\narg 2 ID = 56813631\narg 3 ID = 56813631\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		wxWindow* parent=(Luna< wxObject >::checkSubType< wxWindow >(L,2));
		wxPageSetupDialogData* data=luatop>2 ? (Luna< wxObject >::checkSubType< wxPageSetupDialogData >(L,3)) : (wxPageSetupDialogData*)NULL;

		return new wrapper_wxPageSetupDialog(L,NULL, parent, data);
	}

	// Overload binder for wxPageSetupDialog::wxPageSetupDialog
	static wxPageSetupDialog* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxPageSetupDialog, cannot match any of the overloads for function wxPageSetupDialog:\n  wxPageSetupDialog(wxWindow *, wxPageSetupDialogData *)\n  wxPageSetupDialog(lua_Table *, wxWindow *, wxPageSetupDialogData *)\n");
		return NULL;
	}


	// Function binds:
	// wxPageSetupDialogData & wxPageSetupDialog::GetPageSetupData()
	static int _bind_GetPageSetupData(lua_State *L) {
		if (!_lg_typecheck_GetPageSetupData(L)) {
			luaL_error(L, "luna typecheck failed in wxPageSetupDialogData & wxPageSetupDialog::GetPageSetupData() function, expected prototype:\nwxPageSetupDialogData & wxPageSetupDialog::GetPageSetupData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialog* self=Luna< wxObject >::checkSubType< wxPageSetupDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxPageSetupDialogData & wxPageSetupDialog::GetPageSetupData(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxPageSetupDialogData* lret = &self->GetPageSetupData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxPageSetupDialogData >::push(L,lret,false);

		return 1;
	}

	// int wxPageSetupDialog::ShowModal()
	static int _bind_ShowModal(lua_State *L) {
		if (!_lg_typecheck_ShowModal(L)) {
			luaL_error(L, "luna typecheck failed in int wxPageSetupDialog::ShowModal() function, expected prototype:\nint wxPageSetupDialog::ShowModal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxPageSetupDialog* self=Luna< wxObject >::checkSubType< wxPageSetupDialog >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxPageSetupDialog::ShowModal(). Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ShowModal();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

wxPageSetupDialog* LunaTraits< wxPageSetupDialog >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxPageSetupDialog::_bind_ctor(L);
}

void LunaTraits< wxPageSetupDialog >::_bind_dtor(wxPageSetupDialog* obj) {
	delete obj;
}

const char LunaTraits< wxPageSetupDialog >::className[] = "wxPageSetupDialog";
const char LunaTraits< wxPageSetupDialog >::fullName[] = "wxPageSetupDialog";
const char LunaTraits< wxPageSetupDialog >::moduleName[] = "wx";
const char* LunaTraits< wxPageSetupDialog >::parents[] = {"wx.wxDialog", 0};
const int LunaTraits< wxPageSetupDialog >::hash = 2863759;
const int LunaTraits< wxPageSetupDialog >::uniqueIDs[] = {56813631, 53506535,0};

luna_RegType LunaTraits< wxPageSetupDialog >::methods[] = {
	{"GetPageSetupData", &luna_wrapper_wxPageSetupDialog::_bind_GetPageSetupData},
	{"ShowModal", &luna_wrapper_wxPageSetupDialog::_bind_ShowModal},
	{"fromVoid", &luna_wrapper_wxPageSetupDialog::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxPageSetupDialog::_bind_asVoid},
	{"getTable", &luna_wrapper_wxPageSetupDialog::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxPageSetupDialog >::converters[] = {
	{"wxObject", &luna_wrapper_wxPageSetupDialog::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxPageSetupDialog >::enumValues[] = {
	{0,0}
};


