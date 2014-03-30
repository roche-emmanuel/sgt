#include <plug_common.h>

#include <luna/wrappers/wrapper_wxTreeItemData.h>

class luna_wrapper_wxTreeItemData {
public:
	typedef Luna< wxTreeItemData > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxClientData* self=(Luna< wxClientData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<wxClientData,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		wxTreeItemData* self= (wxTreeItemData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxTreeItemData >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50457573) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxClientData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_wxClientData(lua_State *L) {
		// all checked are already performed before reaching this point.
		//wxTreeItemData* ptr= dynamic_cast< wxTreeItemData* >(Luna< wxClientData >::check(L,1));
		wxTreeItemData* ptr= luna_caster< wxClientData, wxTreeItemData >::cast(Luna< wxClientData >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxTreeItemData >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_GetId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28400299) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxTreeItemData::wxTreeItemData()
	static wxTreeItemData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemData::wxTreeItemData() function, expected prototype:\nwxTreeItemData::wxTreeItemData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxTreeItemData();
	}

	// wxTreeItemData::wxTreeItemData(lua_Table * data)
	static wxTreeItemData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxTreeItemData::wxTreeItemData(lua_Table * data) function, expected prototype:\nwxTreeItemData::wxTreeItemData(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxTreeItemData(L,NULL);
	}

	// Overload binder for wxTreeItemData::wxTreeItemData
	static wxTreeItemData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxTreeItemData, cannot match any of the overloads for function wxTreeItemData:\n  wxTreeItemData()\n  wxTreeItemData(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const wxTreeItemId & wxTreeItemData::GetId() const
	static int _bind_GetId(lua_State *L) {
		if (!_lg_typecheck_GetId(L)) {
			luaL_error(L, "luna typecheck failed in const wxTreeItemId & wxTreeItemData::GetId() const function, expected prototype:\nconst wxTreeItemId & wxTreeItemData::GetId() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxTreeItemData* self=Luna< wxClientData >::checkSubType< wxTreeItemData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxTreeItemId & wxTreeItemData::GetId() const. Got : '%s'\n%s",typeid(Luna< wxClientData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxTreeItemId* lret = &self->GetId();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxTreeItemId >::push(L,lret,false);

		return 1;
	}

	// void wxTreeItemData::SetId(const wxTreeItemId & id)
	static int _bind_SetId(lua_State *L) {
		if (!_lg_typecheck_SetId(L)) {
			luaL_error(L, "luna typecheck failed in void wxTreeItemData::SetId(const wxTreeItemId & id) function, expected prototype:\nvoid wxTreeItemData::SetId(const wxTreeItemId & id)\nClass arguments details:\narg 1 ID = 28400299\n\n%s",luna_dumpStack(L).c_str());
		}

		const wxTreeItemId* id_ptr=(Luna< wxTreeItemId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in wxTreeItemData::SetId function");
		}
		const wxTreeItemId & id=*id_ptr;

		wxTreeItemData* self=Luna< wxClientData >::checkSubType< wxTreeItemData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxTreeItemData::SetId(const wxTreeItemId &). Got : '%s'\n%s",typeid(Luna< wxClientData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetId(id);

		return 0;
	}


	// Operator binds:

};

wxTreeItemData* LunaTraits< wxTreeItemData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxTreeItemData::_bind_ctor(L);
}

void LunaTraits< wxTreeItemData >::_bind_dtor(wxTreeItemData* obj) {
	delete obj;
}

const char LunaTraits< wxTreeItemData >::className[] = "wxTreeItemData";
const char LunaTraits< wxTreeItemData >::fullName[] = "wxTreeItemData";
const char LunaTraits< wxTreeItemData >::moduleName[] = "wx";
const char* LunaTraits< wxTreeItemData >::parents[] = {"wx.wxClientData", 0};
const int LunaTraits< wxTreeItemData >::hash = 92535634;
const int LunaTraits< wxTreeItemData >::uniqueIDs[] = {50457573,0};

luna_RegType LunaTraits< wxTreeItemData >::methods[] = {
	{"GetId", &luna_wrapper_wxTreeItemData::_bind_GetId},
	{"SetId", &luna_wrapper_wxTreeItemData::_bind_SetId},
	{"fromVoid", &luna_wrapper_wxTreeItemData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxTreeItemData::_bind_asVoid},
	{"getTable", &luna_wrapper_wxTreeItemData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxTreeItemData >::converters[] = {
	{"wxClientData", &luna_wrapper_wxTreeItemData::_cast_from_wxClientData},
	{0,0}
};

luna_RegEnumType LunaTraits< wxTreeItemData >::enumValues[] = {
	{0,0}
};


