#include <plug_common.h>

#include <luna/wrappers/wrapper_wxClientData.h>

class luna_wrapper_wxClientData {
public:
	typedef Luna< wxClientData > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50457573) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxClientData*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxClientData* rhs =(Luna< wxClientData >::check(L,2));
		wxClientData* self=(Luna< wxClientData >::check(L,1));
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

		wxClientData* self= (wxClientData*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxClientData >::push(L,self,false);
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

		wxClientData* self=(Luna< wxClientData >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxClientData");
		
		return luna_dynamicCast(L,converters,"wxClientData",name);
	}


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

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// wxClientData::wxClientData()
	static wxClientData* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in wxClientData::wxClientData() function, expected prototype:\nwxClientData::wxClientData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wxClientData();
	}

	// wxClientData::wxClientData(lua_Table * data)
	static wxClientData* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in wxClientData::wxClientData(lua_Table * data) function, expected prototype:\nwxClientData::wxClientData(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_wxClientData(L,NULL);
	}

	// Overload binder for wxClientData::wxClientData
	static wxClientData* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function wxClientData, cannot match any of the overloads for function wxClientData:\n  wxClientData()\n  wxClientData(lua_Table *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

wxClientData* LunaTraits< wxClientData >::_bind_ctor(lua_State *L) {
	return luna_wrapper_wxClientData::_bind_ctor(L);
}

void LunaTraits< wxClientData >::_bind_dtor(wxClientData* obj) {
	delete obj;
}

const char LunaTraits< wxClientData >::className[] = "wxClientData";
const char LunaTraits< wxClientData >::fullName[] = "wxClientData";
const char LunaTraits< wxClientData >::moduleName[] = "wx";
const char* LunaTraits< wxClientData >::parents[] = {0};
const int LunaTraits< wxClientData >::hash = 50457573;
const int LunaTraits< wxClientData >::uniqueIDs[] = {50457573,0};

luna_RegType LunaTraits< wxClientData >::methods[] = {
	{"dynCast", &luna_wrapper_wxClientData::_bind_dynCast},
	{"__eq", &luna_wrapper_wxClientData::_bind___eq},
	{"fromVoid", &luna_wrapper_wxClientData::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxClientData::_bind_asVoid},
	{"getTable", &luna_wrapper_wxClientData::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< wxClientData >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxClientData >::enumValues[] = {
	{0,0}
};


