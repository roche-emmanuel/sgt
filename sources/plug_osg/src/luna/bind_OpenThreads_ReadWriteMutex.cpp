#include <plug_common.h>

#include <luna/wrappers/wrapper_OpenThreads_ReadWriteMutex.h>

class luna_wrapper_OpenThreads_ReadWriteMutex {
public:
	typedef Luna< OpenThreads::ReadWriteMutex > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::ReadWriteMutex* self=(Luna< OpenThreads::ReadWriteMutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<OpenThreads::ReadWriteMutex,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72295452) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::ReadWriteMutex*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::ReadWriteMutex* rhs =(Luna< OpenThreads::ReadWriteMutex >::check(L,2));
		OpenThreads::ReadWriteMutex* self=(Luna< OpenThreads::ReadWriteMutex >::check(L,1));
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

		OpenThreads::ReadWriteMutex* self= (OpenThreads::ReadWriteMutex*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< OpenThreads::ReadWriteMutex >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72295452) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< OpenThreads::ReadWriteMutex >::check(L,1));
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

		OpenThreads::ReadWriteMutex* self=(Luna< OpenThreads::ReadWriteMutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::ReadWriteMutex");
		
		return luna_dynamicCast(L,converters,"OpenThreads::ReadWriteMutex",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

OpenThreads::ReadWriteMutex* LunaTraits< OpenThreads::ReadWriteMutex >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< OpenThreads::ReadWriteMutex >::_bind_dtor(OpenThreads::ReadWriteMutex* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::ReadWriteMutex >::className[] = "ReadWriteMutex";
const char LunaTraits< OpenThreads::ReadWriteMutex >::fullName[] = "OpenThreads::ReadWriteMutex";
const char LunaTraits< OpenThreads::ReadWriteMutex >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::ReadWriteMutex >::parents[] = {0};
const int LunaTraits< OpenThreads::ReadWriteMutex >::hash = 72295452;
const int LunaTraits< OpenThreads::ReadWriteMutex >::uniqueIDs[] = {72295452,0};

luna_RegType LunaTraits< OpenThreads::ReadWriteMutex >::methods[] = {
	{"dynCast", &luna_wrapper_OpenThreads_ReadWriteMutex::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_ReadWriteMutex::_bind___eq},
	{"fromVoid", &luna_wrapper_OpenThreads_ReadWriteMutex::_bind_fromVoid},
	{"asVoid", &luna_wrapper_OpenThreads_ReadWriteMutex::_bind_asVoid},
	{"getTable", &luna_wrapper_OpenThreads_ReadWriteMutex::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::ReadWriteMutex >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::ReadWriteMutex >::enumValues[] = {
	{0,0}
};


