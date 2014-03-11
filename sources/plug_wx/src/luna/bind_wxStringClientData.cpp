#include <plug_common.h>

class luna_wrapper_wxStringClientData {
public:
	typedef Luna< wxStringClientData > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxStringClientData* self= (wxStringClientData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxStringClientData >::push(L,self,false);
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
		//wxStringClientData* ptr= dynamic_cast< wxStringClientData* >(Luna< wxClientData >::check(L,1));
		wxStringClientData* ptr= luna_caster< wxClientData, wxStringClientData >::cast(Luna< wxClientData >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< wxStringClientData >::push(L,ptr,false);
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


	// Function checkers:
	inline static bool _lg_typecheck_GetData(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_SetData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxStringClientData::wxStringClientData()
	static wxStringClientData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxStringClientData::wxStringClientData() function, expected prototype:\nwxStringClientData::wxStringClientData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxStringClientData();
	}

	// wxStringClientData::wxStringClientData(const wxString & data)
	static wxStringClientData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxStringClientData::wxStringClientData(const wxString & data) function, expected prototype:\nwxStringClientData::wxStringClientData(const wxString & data)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString data(lua_tostring(L,1),lua_objlen(L,1));

		return new wxStringClientData(data);
	}

	// Overload binder for wxStringClientData::wxStringClientData
	static wxStringClientData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxStringClientData, cannot match any of the overloads for function wxStringClientData:\n  wxStringClientData()\n  wxStringClientData(const wxString &)\n");
		return NULL;
	}


	// Function binds:
	// const wxString & wxStringClientData::GetData() const
	static int _bind_GetData(lua_State *L) {
		if (!_lg_typecheck_GetData(L)) {
			luaL_error(L, "luna typecheck failed in const wxString & wxStringClientData::GetData() const function, expected prototype:\nconst wxString & wxStringClientData::GetData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxStringClientData* self=Luna< wxClientData >::checkSubType< wxStringClientData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const wxString & wxStringClientData::GetData() const. Got : '%s'\n%s",typeid(Luna< wxClientData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const wxString & lret = self->GetData();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void wxStringClientData::SetData(const wxString & data)
	static int _bind_SetData(lua_State *L) {
		if (!_lg_typecheck_SetData(L)) {
			luaL_error(L, "luna typecheck failed in void wxStringClientData::SetData(const wxString & data) function, expected prototype:\nvoid wxStringClientData::SetData(const wxString & data)\nClass arguments details:\narg 1 ID = 88196105\n\n%s",luna_dumpStack(L).c_str());
		}

		wxString data(lua_tostring(L,2),lua_objlen(L,2));

		wxStringClientData* self=Luna< wxClientData >::checkSubType< wxStringClientData >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxStringClientData::SetData(const wxString &). Got : '%s'\n%s",typeid(Luna< wxClientData >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SetData(data);

		return 0;
	}


	// Operator binds:

};

wxStringClientData* LunaTraits< wxStringClientData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxStringClientData::_bind_ctor(L);
}

void LunaTraits< wxStringClientData >::_bind_dtor(wxStringClientData* obj) {
	delete obj;
}

const char LunaTraits< wxStringClientData >::className[] = "wxStringClientData";
const char LunaTraits< wxStringClientData >::fullName[] = "wxStringClientData";
const char LunaTraits< wxStringClientData >::moduleName[] = "wx";
const char* LunaTraits< wxStringClientData >::parents[] = {"wx.wxClientData", 0};
const int LunaTraits< wxStringClientData >::hash = 33129045;
const int LunaTraits< wxStringClientData >::uniqueIDs[] = {50457573,0};

luna_RegType LunaTraits< wxStringClientData >::methods[] = {
	{"GetData", &luna_wrapper_wxStringClientData::_bind_GetData},
	{"SetData", &luna_wrapper_wxStringClientData::_bind_SetData},
	{"fromVoid", &luna_wrapper_wxStringClientData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxStringClientData::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxStringClientData >::converters[] = {
	{"wxClientData", &luna_wrapper_wxStringClientData::_cast_from_wxClientData},
	{0,0}
};

luna_RegEnumType LunaTraits< wxStringClientData >::enumValues[] = {
	{0,0}
};


