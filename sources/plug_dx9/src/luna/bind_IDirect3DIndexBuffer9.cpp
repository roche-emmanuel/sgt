#include <plug_common.h>

class luna_wrapper_IDirect3DIndexBuffer9 {
public:
	typedef Luna< IDirect3DIndexBuffer9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12769028) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IDirect3DIndexBuffer9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DIndexBuffer9* rhs =(Luna< IDirect3DIndexBuffer9 >::check(L,2));
		IDirect3DIndexBuffer9* self=(Luna< IDirect3DIndexBuffer9 >::check(L,1));
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

		IDirect3DIndexBuffer9* self= (IDirect3DIndexBuffer9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDirect3DIndexBuffer9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12769028) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IDirect3DIndexBuffer9 >::check(L,1));
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

		IDirect3DIndexBuffer9* self=(Luna< IDirect3DIndexBuffer9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IDirect3DIndexBuffer9");
		
		return luna_dynamicCast(L,converters,"IDirect3DIndexBuffer9",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

IDirect3DIndexBuffer9* LunaTraits< IDirect3DIndexBuffer9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< IDirect3DIndexBuffer9 >::_bind_dtor(IDirect3DIndexBuffer9* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< IDirect3DIndexBuffer9 >::className[] = "IDirect3DIndexBuffer9";
const char LunaTraits< IDirect3DIndexBuffer9 >::fullName[] = "IDirect3DIndexBuffer9";
const char LunaTraits< IDirect3DIndexBuffer9 >::moduleName[] = "dx9";
const char* LunaTraits< IDirect3DIndexBuffer9 >::parents[] = {0};
const int LunaTraits< IDirect3DIndexBuffer9 >::hash = 12769028;
const int LunaTraits< IDirect3DIndexBuffer9 >::uniqueIDs[] = {12769028,0};

luna_RegType LunaTraits< IDirect3DIndexBuffer9 >::methods[] = {
	{"dynCast", &luna_wrapper_IDirect3DIndexBuffer9::_bind_dynCast},
	{"__eq", &luna_wrapper_IDirect3DIndexBuffer9::_bind___eq},
	{"fromVoid", &luna_wrapper_IDirect3DIndexBuffer9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDirect3DIndexBuffer9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< IDirect3DIndexBuffer9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDirect3DIndexBuffer9 >::enumValues[] = {
	{0,0}
};


