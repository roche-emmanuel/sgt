#include <plug_common.h>

class luna_wrapper_std_type_info {
public:
	typedef Luna< std::type_info > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79829375) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(std::type_info*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::type_info* rhs =(Luna< std::type_info >::check(L,2));
		std::type_info* self=(Luna< std::type_info >::check(L,1));
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

		std::type_info* self= (std::type_info*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< std::type_info >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,79829375) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< std::type_info >::check(L,1));
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

		std::type_info* self=(Luna< std::type_info >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("std::type_info");
		
		return luna_dynamicCast(L,converters,"std::type_info",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

std::type_info* LunaTraits< std::type_info >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< std::type_info >::_bind_dtor(std::type_info* obj) {
	delete obj;
}

const char LunaTraits< std::type_info >::className[] = "type_info";
const char LunaTraits< std::type_info >::fullName[] = "std::type_info";
const char LunaTraits< std::type_info >::moduleName[] = "std";
const char* LunaTraits< std::type_info >::parents[] = {0};
const int LunaTraits< std::type_info >::hash = 79829375;
const int LunaTraits< std::type_info >::uniqueIDs[] = {79829375,0};

luna_RegType LunaTraits< std::type_info >::methods[] = {
	{"dynCast", &luna_wrapper_std_type_info::_bind_dynCast},
	{"__eq", &luna_wrapper_std_type_info::_bind___eq},
	{"fromVoid", &luna_wrapper_std_type_info::_bind_fromVoid},
	{"asVoid", &luna_wrapper_std_type_info::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< std::type_info >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< std::type_info >::enumValues[] = {
	{0,0}
};


