#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_std_vector_OpenThreads_Thread_ptr {
public:
	typedef Luna< std::vector< OpenThreads::Thread * > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9185441) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::vector< OpenThreads::Thread * >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< OpenThreads::Thread * >* rhs =(Luna< std::vector< OpenThreads::Thread * > >::check(L,2));
		std::vector< OpenThreads::Thread * >* self=(Luna< std::vector< OpenThreads::Thread * > >::check(L,1));
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

		std::vector< OpenThreads::Thread * >* self=(Luna< std::vector< OpenThreads::Thread * > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::vector< OpenThreads::Thread * >");
		
		return luna_dynamicCast(L,converters,"std::vector< OpenThreads::Thread * >",name);
	}

};

std::vector< OpenThreads::Thread * >* LunaTraits< std::vector< OpenThreads::Thread * > >::_bind_ctor(lua_State *L) {
	return new std::vector< OpenThreads::Thread * >();
}

void LunaTraits< std::vector< OpenThreads::Thread * > >::_bind_dtor(std::vector< OpenThreads::Thread * >* obj) {
	delete obj;
}

const char LunaTraits< std::vector< OpenThreads::Thread * > >::className[] = "std_vector_OpenThreads_Thread_ptr";
const char LunaTraits< std::vector< OpenThreads::Thread * > >::fullName[] = "std::vector< OpenThreads::Thread * >";
const char LunaTraits< std::vector< OpenThreads::Thread * > >::moduleName[] = "osg";
const char* LunaTraits< std::vector< OpenThreads::Thread * > >::parents[] = {0};
const int LunaTraits< std::vector< OpenThreads::Thread * > >::hash = 9185441;
const int LunaTraits< std::vector< OpenThreads::Thread * > >::uniqueIDs[] = {9185441,0};

luna_RegType LunaTraits< std::vector< OpenThreads::Thread * > >::methods[] = {
	{"dynCast", &luna_wrapper_std_vector_OpenThreads_Thread_ptr::_bind_dynCast},
	{"__eq", &luna_wrapper_std_vector_OpenThreads_Thread_ptr::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< std::vector< OpenThreads::Thread * > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::vector< OpenThreads::Thread * > >::enumValues[] = {
	{0,0}
};


