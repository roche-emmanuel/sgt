#include <plug_common.h>

class luna_wrapper_OpenThreads_Mutex {
public:
	typedef Luna< OpenThreads::Mutex > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3168391) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::Mutex*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::Mutex* rhs =(Luna< OpenThreads::Mutex >::check(L,2));
		OpenThreads::Mutex* self=(Luna< OpenThreads::Mutex >::check(L,1));
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

		OpenThreads::Mutex* self= (OpenThreads::Mutex*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< OpenThreads::Mutex >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3168391) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< OpenThreads::Mutex >::check(L,1));
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

		OpenThreads::Mutex* self=(Luna< OpenThreads::Mutex >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::Mutex");
		
		return luna_dynamicCast(L,converters,"OpenThreads::Mutex",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

OpenThreads::Mutex* LunaTraits< OpenThreads::Mutex >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< OpenThreads::Mutex >::_bind_dtor(OpenThreads::Mutex* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::Mutex >::className[] = "Mutex";
const char LunaTraits< OpenThreads::Mutex >::fullName[] = "OpenThreads::Mutex";
const char LunaTraits< OpenThreads::Mutex >::moduleName[] = "OpenThreads";
const char* LunaTraits< OpenThreads::Mutex >::parents[] = {0};
const int LunaTraits< OpenThreads::Mutex >::hash = 3168391;
const int LunaTraits< OpenThreads::Mutex >::uniqueIDs[] = {3168391,0};

luna_RegType LunaTraits< OpenThreads::Mutex >::methods[] = {
	{"dynCast", &luna_wrapper_OpenThreads_Mutex::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_Mutex::_bind___eq},
	{"fromVoid", &luna_wrapper_OpenThreads_Mutex::_bind_fromVoid},
	{"asVoid", &luna_wrapper_OpenThreads_Mutex::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::Mutex >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::Mutex >::enumValues[] = {
	{0,0}
};


