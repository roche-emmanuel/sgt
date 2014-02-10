#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_OpenThreads_ScopedLock_OpenThreads_Mutex {
public:
	typedef Luna< OpenThreads::ScopedLock< OpenThreads::Mutex > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,84875541) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(OpenThreads::ScopedLock< OpenThreads::Mutex >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		OpenThreads::ScopedLock< OpenThreads::Mutex >* rhs =(Luna< OpenThreads::ScopedLock< OpenThreads::Mutex > >::check(L,2));
		OpenThreads::ScopedLock< OpenThreads::Mutex >* self=(Luna< OpenThreads::ScopedLock< OpenThreads::Mutex > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		return self==rhs;
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

		OpenThreads::ScopedLock< OpenThreads::Mutex >* self=(Luna< OpenThreads::ScopedLock< OpenThreads::Mutex > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("OpenThreads::ScopedLock< OpenThreads::Mutex >");
		
		return luna_dynamicCast(L,converters,"OpenThreads::ScopedLock< OpenThreads::Mutex >",name);
	}

};

OpenThreads::ScopedLock< OpenThreads::Mutex >* LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > >::_bind_ctor(lua_State *L) {
	return NULL;
}

void LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > >::_bind_dtor(OpenThreads::ScopedLock< OpenThreads::Mutex >* obj) {
	delete obj;
}

const char LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > >::className[] = "OpenThreads_ScopedLock_OpenThreads_Mutex";
const char LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > >::fullName[] = "OpenThreads::ScopedLock< OpenThreads::Mutex >";
const char LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > >::moduleName[] = "sgt";
const char* LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > >::parents[] = {0};
const int LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > >::hash = 84875541;
const int LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > >::uniqueIDs[] = {84875541,0};

luna_RegType LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > >::methods[] = {
	{"dynCast", &luna_wrapper_OpenThreads_ScopedLock_OpenThreads_Mutex::_bind_dynCast},
	{"__eq", &luna_wrapper_OpenThreads_ScopedLock_OpenThreads_Mutex::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< OpenThreads::ScopedLock< OpenThreads::Mutex > >::enumValues[] = {
	{0,0}
};


