#include <plug_common.h>

class luna_wrapper_uintptr_t {
public:
	typedef Luna< uintptr_t > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23992870) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(uintptr_t*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		uintptr_t* rhs =(Luna< uintptr_t >::check(L,2));
		uintptr_t* self=(Luna< uintptr_t >::check(L,1));
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

		uintptr_t* self= (uintptr_t*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< uintptr_t >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23992870) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< uintptr_t >::check(L,1));
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

		uintptr_t* self=(Luna< uintptr_t >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("uintptr_t");
		
		return luna_dynamicCast(L,converters,"uintptr_t",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

uintptr_t* LunaTraits< uintptr_t >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< uintptr_t >::_bind_dtor(uintptr_t* obj) {
	delete obj;
}

const char LunaTraits< uintptr_t >::className[] = "uintptr_t";
const char LunaTraits< uintptr_t >::fullName[] = "uintptr_t";
const char LunaTraits< uintptr_t >::moduleName[] = "sgt";
const char* LunaTraits< uintptr_t >::parents[] = {0};
const int LunaTraits< uintptr_t >::hash = 23992870;
const int LunaTraits< uintptr_t >::uniqueIDs[] = {23992870,0};

luna_RegType LunaTraits< uintptr_t >::methods[] = {
	{"dynCast", &luna_wrapper_uintptr_t::_bind_dynCast},
	{"__eq", &luna_wrapper_uintptr_t::_bind___eq},
	{"fromVoid", &luna_wrapper_uintptr_t::_bind_fromVoid},
	{"asVoid", &luna_wrapper_uintptr_t::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< uintptr_t >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< uintptr_t >::enumValues[] = {
	{0,0}
};


