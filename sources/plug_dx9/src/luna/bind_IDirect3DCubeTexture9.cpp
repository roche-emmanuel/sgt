#include <plug_common.h>

class luna_wrapper_IDirect3DCubeTexture9 {
public:
	typedef Luna< IDirect3DCubeTexture9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92688853) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IDirect3DCubeTexture9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DCubeTexture9* rhs =(Luna< IDirect3DCubeTexture9 >::check(L,2));
		IDirect3DCubeTexture9* self=(Luna< IDirect3DCubeTexture9 >::check(L,1));
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

		IDirect3DCubeTexture9* self= (IDirect3DCubeTexture9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDirect3DCubeTexture9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92688853) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IDirect3DCubeTexture9 >::check(L,1));
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

		IDirect3DCubeTexture9* self=(Luna< IDirect3DCubeTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IDirect3DCubeTexture9");
		
		return luna_dynamicCast(L,converters,"IDirect3DCubeTexture9",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_AddRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned long IDirect3DCubeTexture9::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DCubeTexture9::AddRef() function, expected prototype:\nunsigned long IDirect3DCubeTexture9::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DCubeTexture9* self=(Luna< IDirect3DCubeTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DCubeTexture9::AddRef(). Got : '%s'\n%s",typeid(Luna< IDirect3DCubeTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3DCubeTexture9::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DCubeTexture9::Release() function, expected prototype:\nunsigned long IDirect3DCubeTexture9::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DCubeTexture9* self=(Luna< IDirect3DCubeTexture9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DCubeTexture9::Release(). Got : '%s'\n%s",typeid(Luna< IDirect3DCubeTexture9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDirect3DCubeTexture9* LunaTraits< IDirect3DCubeTexture9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< IDirect3DCubeTexture9 >::_bind_dtor(IDirect3DCubeTexture9* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< IDirect3DCubeTexture9 >::className[] = "IDirect3DCubeTexture9";
const char LunaTraits< IDirect3DCubeTexture9 >::fullName[] = "IDirect3DCubeTexture9";
const char LunaTraits< IDirect3DCubeTexture9 >::moduleName[] = "dx9";
const char* LunaTraits< IDirect3DCubeTexture9 >::parents[] = {0};
const int LunaTraits< IDirect3DCubeTexture9 >::hash = 92688853;
const int LunaTraits< IDirect3DCubeTexture9 >::uniqueIDs[] = {92688853,0};

luna_RegType LunaTraits< IDirect3DCubeTexture9 >::methods[] = {
	{"AddRef", &luna_wrapper_IDirect3DCubeTexture9::_bind_AddRef},
	{"Release", &luna_wrapper_IDirect3DCubeTexture9::_bind_Release},
	{"dynCast", &luna_wrapper_IDirect3DCubeTexture9::_bind_dynCast},
	{"__eq", &luna_wrapper_IDirect3DCubeTexture9::_bind___eq},
	{"fromVoid", &luna_wrapper_IDirect3DCubeTexture9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDirect3DCubeTexture9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< IDirect3DCubeTexture9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDirect3DCubeTexture9 >::enumValues[] = {
	{0,0}
};


