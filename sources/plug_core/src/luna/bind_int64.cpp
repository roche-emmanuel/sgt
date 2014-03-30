#include <plug_common.h>

class luna_wrapper_int64 {
public:
	typedef Luna< __int64 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32973728) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(__int64*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		__int64* rhs =(Luna< __int64 >::check(L,2));
		__int64* self=(Luna< __int64 >::check(L,1));
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

		__int64* self= (__int64*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< __int64 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32973728) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< __int64 >::check(L,1));
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

		__int64* self=(Luna< __int64 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("__int64");
		
		return luna_dynamicCast(L,converters,"__int64",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

__int64* LunaTraits< __int64 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< __int64 >::_bind_dtor(__int64* obj) {
	delete obj;
}

const char LunaTraits< __int64 >::className[] = "int64";
const char LunaTraits< __int64 >::fullName[] = "__int64";
const char LunaTraits< __int64 >::moduleName[] = "sgt";
const char* LunaTraits< __int64 >::parents[] = {0};
const int LunaTraits< __int64 >::hash = 32973728;
const int LunaTraits< __int64 >::uniqueIDs[] = {32973728,0};

luna_RegType LunaTraits< __int64 >::methods[] = {
	{"dynCast", &luna_wrapper_int64::_bind_dynCast},
	{"__eq", &luna_wrapper_int64::_bind___eq},
	{"fromVoid", &luna_wrapper_int64::_bind_fromVoid},
	{"asVoid", &luna_wrapper_int64::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< __int64 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< __int64 >::enumValues[] = {
	{0,0}
};


