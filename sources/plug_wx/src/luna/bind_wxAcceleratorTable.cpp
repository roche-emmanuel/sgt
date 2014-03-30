#include <plug_common.h>

#include <luna/wrappers/wrapper_wxAcceleratorTable.h>

class luna_wrapper_wxAcceleratorTable {
public:
	typedef Luna< wxAcceleratorTable > luna_t;

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

		wxAcceleratorTable* self= (wxAcceleratorTable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxAcceleratorTable >::push(L,self,false);
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
		//wxAcceleratorTable* ptr= dynamic_cast< wxAcceleratorTable* >(Luna< wxObject >::check(L,1));
		wxAcceleratorTable* ptr= luna_caster< wxObject, wxAcceleratorTable >::cast(Luna< wxObject >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxAcceleratorTable >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsOk(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetClassInfo(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxAcceleratorTable::wxAcceleratorTable()
	static wxAcceleratorTable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxAcceleratorTable::wxAcceleratorTable() function, expected prototype:\nwxAcceleratorTable::wxAcceleratorTable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxAcceleratorTable();
	}

	// wxAcceleratorTable::wxAcceleratorTable(const wxString & resource)
	static wxAcceleratorTable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxAcceleratorTable::wxAcceleratorTable(const wxString & resource) function, expected prototype:\nwxAcceleratorTable::wxAcceleratorTable(const wxString & resource)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString resource(lua_tostring(L,1),lua_objlen(L,1));

		return new wxAcceleratorTable(resource);
	}

	// wxAcceleratorTable::wxAcceleratorTable(lua_Table * data)
	static wxAcceleratorTable* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in wxAcceleratorTable::wxAcceleratorTable(lua_Table * data) function, expected prototype:\nwxAcceleratorTable::wxAcceleratorTable(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxAcceleratorTable(L,NULL);
	}

	// wxAcceleratorTable::wxAcceleratorTable(lua_Table * data, const wxString & resource)
	static wxAcceleratorTable* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in wxAcceleratorTable::wxAcceleratorTable(lua_Table * data, const wxString & resource) function, expected prototype:\nwxAcceleratorTable::wxAcceleratorTable(lua_Table * data, const wxString & resource)\nClass arguments details:\narg 2 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString resource(lua_tostring(L,2),lua_objlen(L,2));

		return new wrapper_wxAcceleratorTable(L,NULL, resource);
	}

	// Overload binder for wxAcceleratorTable::wxAcceleratorTable
	static wxAcceleratorTable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function wxAcceleratorTable, cannot match any of the overloads for function wxAcceleratorTable:\n  wxAcceleratorTable()\n  wxAcceleratorTable(const wxString &)\n  wxAcceleratorTable(lua_Table *)\n  wxAcceleratorTable(lua_Table *, const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// bool wxAcceleratorTable::IsOk() const
	static int _bind_IsOk(lua_State *L) {
		if (!_lg_typecheck_IsOk(L)) {
			luaL_error(L, "luna typecheck failed in bool wxAcceleratorTable::IsOk() const function, expected prototype:\nbool wxAcceleratorTable::IsOk() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAcceleratorTable* self=Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxAcceleratorTable::IsOk() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsOk();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxClassInfo * wxAcceleratorTable::base_GetClassInfo() const
	static int _bind_base_GetClassInfo(lua_State *L) {
		if (!_lg_typecheck_base_GetClassInfo(L)) {
			luaL_error(L, "luna typecheck failed in wxClassInfo * wxAcceleratorTable::base_GetClassInfo() const function, expected prototype:\nwxClassInfo * wxAcceleratorTable::base_GetClassInfo() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxAcceleratorTable* self=Luna< wxObject >::checkSubType< wxAcceleratorTable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxClassInfo * wxAcceleratorTable::base_GetClassInfo() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxClassInfo * lret = self->wxAcceleratorTable::GetClassInfo();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxClassInfo >::push(L,lret,false);

		return 1;
	}


	// Operator binds:

};

wxAcceleratorTable* LunaTraits< wxAcceleratorTable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxAcceleratorTable::_bind_ctor(L);
}

void LunaTraits< wxAcceleratorTable >::_bind_dtor(wxAcceleratorTable* obj) {
	delete obj;
}

const char LunaTraits< wxAcceleratorTable >::className[] = "wxAcceleratorTable";
const char LunaTraits< wxAcceleratorTable >::fullName[] = "wxAcceleratorTable";
const char LunaTraits< wxAcceleratorTable >::moduleName[] = "wx";
const char* LunaTraits< wxAcceleratorTable >::parents[] = {"wx.wxObject", 0};
const int LunaTraits< wxAcceleratorTable >::hash = 22002305;
const int LunaTraits< wxAcceleratorTable >::uniqueIDs[] = {56813631,0};

luna_RegType LunaTraits< wxAcceleratorTable >::methods[] = {
	{"IsOk", &luna_wrapper_wxAcceleratorTable::_bind_IsOk},
	{"base_GetClassInfo", &luna_wrapper_wxAcceleratorTable::_bind_base_GetClassInfo},
	{"fromVoid", &luna_wrapper_wxAcceleratorTable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxAcceleratorTable::_bind_asVoid},
	{"getTable", &luna_wrapper_wxAcceleratorTable::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxAcceleratorTable >::converters[] = {
	{"wxObject", &luna_wrapper_wxAcceleratorTable::_cast_from_wxObject},
	{0,0}
};

luna_RegEnumType LunaTraits< wxAcceleratorTable >::enumValues[] = {
	{0,0}
};


