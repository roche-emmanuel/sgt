#include <plug_common.h>

#include <plug_common.h>

class luna_wrapper_uint64_t {
public:
	typedef Luna< uint64_t > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,21564657) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(uint64_t*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		uint64_t* rhs =(Luna< uint64_t >::check(L,2));
		uint64_t* self=(Luna< uint64_t >::check(L,1));
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

		uint64_t* self=(Luna< uint64_t >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("uint64_t");
		
		return luna_dynamicCast(L,converters,"uint64_t",name);
	}

};

uint64_t* LunaTraits< uint64_t >::_bind_ctor(lua_State *L) {
	return new uint64_t();
}

void LunaTraits< uint64_t >::_bind_dtor(uint64_t* obj) {
	delete obj;
}

const char LunaTraits< uint64_t >::className[] = "uint64_t";
const char LunaTraits< uint64_t >::fullName[] = "uint64_t";
const char LunaTraits< uint64_t >::moduleName[] = "land";
const char* LunaTraits< uint64_t >::parents[] = {0};
const int LunaTraits< uint64_t >::hash = 21564657;
const int LunaTraits< uint64_t >::uniqueIDs[] = {21564657,0};

luna_RegType LunaTraits< uint64_t >::methods[] = {
	{"dynCast", &luna_wrapper_uint64_t::_bind_dynCast},
	{"__eq", &luna_wrapper_uint64_t::_bind___eq},
	
	{0,0}
};

luna_ConverterType LunaTraits< uint64_t >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< uint64_t >::enumValues[] = {
	{0,0}
};


