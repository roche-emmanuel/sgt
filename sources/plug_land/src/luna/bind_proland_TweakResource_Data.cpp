#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TweakResource_Data.h>

class luna_wrapper_proland_TweakResource_Data {
public:
	typedef Luna< proland::TweakResource::Data > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TweakResource::Data* self=(Luna< proland::TweakResource::Data >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::TweakResource::Data,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65210794) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::TweakResource::Data*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TweakResource::Data* rhs =(Luna< proland::TweakResource::Data >::check(L,2));
		proland::TweakResource::Data* self=(Luna< proland::TweakResource::Data >::check(L,1));
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

		proland::TweakResource::Data* self= (proland::TweakResource::Data*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TweakResource::Data >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,65210794) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::TweakResource::Data >::check(L,1));
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

		proland::TweakResource::Data* self=(Luna< proland::TweakResource::Data >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::TweakResource::Data");
		
		return luna_dynamicCast(L,converters,"proland::TweakResource::Data",name);
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
	// proland::TweakResource::Data::Data()
	static proland::TweakResource::Data* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakResource::Data::Data() function, expected prototype:\nproland::TweakResource::Data::Data()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::TweakResource::Data();
	}

	// proland::TweakResource::Data::Data(lua_Table * data)
	static proland::TweakResource::Data* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TweakResource::Data::Data(lua_Table * data) function, expected prototype:\nproland::TweakResource::Data::Data(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_TweakResource_Data(L,NULL);
	}

	// Overload binder for proland::TweakResource::Data::Data
	static proland::TweakResource::Data* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Data, cannot match any of the overloads for function Data:\n  Data()\n  Data(lua_Table *)\n");
		return NULL;
	}


	// Function binds:

	// Operator binds:

};

proland::TweakResource::Data* LunaTraits< proland::TweakResource::Data >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TweakResource_Data::_bind_ctor(L);
}

void LunaTraits< proland::TweakResource::Data >::_bind_dtor(proland::TweakResource::Data* obj) {
	delete obj;
}

const char LunaTraits< proland::TweakResource::Data >::className[] = "TweakResource_Data";
const char LunaTraits< proland::TweakResource::Data >::fullName[] = "proland::TweakResource::Data";
const char LunaTraits< proland::TweakResource::Data >::moduleName[] = "proland";
const char* LunaTraits< proland::TweakResource::Data >::parents[] = {0};
const int LunaTraits< proland::TweakResource::Data >::hash = 65210794;
const int LunaTraits< proland::TweakResource::Data >::uniqueIDs[] = {65210794,0};

luna_RegType LunaTraits< proland::TweakResource::Data >::methods[] = {
	{"dynCast", &luna_wrapper_proland_TweakResource_Data::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_TweakResource_Data::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_TweakResource_Data::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TweakResource_Data::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TweakResource_Data::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TweakResource::Data >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TweakResource::Data >::enumValues[] = {
	{0,0}
};


