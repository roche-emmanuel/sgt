#include <plug_common.h>

class luna_wrapper_IUnknown {
public:
	typedef Luna< IUnknown > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9927901) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IUnknown*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IUnknown* rhs =(Luna< IUnknown >::check(L,2));
		IUnknown* self=(Luna< IUnknown >::check(L,1));
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

		IUnknown* self= (IUnknown*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IUnknown >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,9927901) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IUnknown >::check(L,1));
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

		IUnknown* self=(Luna< IUnknown >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IUnknown");
		
		return luna_dynamicCast(L,converters,"IUnknown",name);
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
	// unsigned long IUnknown::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IUnknown::AddRef() function, expected prototype:\nunsigned long IUnknown::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IUnknown* self=(Luna< IUnknown >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IUnknown::AddRef(). Got : '%s'\n%s",typeid(Luna< IUnknown >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IUnknown::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IUnknown::Release() function, expected prototype:\nunsigned long IUnknown::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IUnknown* self=(Luna< IUnknown >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IUnknown::Release(). Got : '%s'\n%s",typeid(Luna< IUnknown >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IUnknown* LunaTraits< IUnknown >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< IUnknown >::_bind_dtor(IUnknown* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< IUnknown >::className[] = "IUnknown";
const char LunaTraits< IUnknown >::fullName[] = "IUnknown";
const char LunaTraits< IUnknown >::moduleName[] = "dx9";
const char* LunaTraits< IUnknown >::parents[] = {0};
const int LunaTraits< IUnknown >::hash = 9927901;
const int LunaTraits< IUnknown >::uniqueIDs[] = {9927901,0};

luna_RegType LunaTraits< IUnknown >::methods[] = {
	{"AddRef", &luna_wrapper_IUnknown::_bind_AddRef},
	{"Release", &luna_wrapper_IUnknown::_bind_Release},
	{"dynCast", &luna_wrapper_IUnknown::_bind_dynCast},
	{"__eq", &luna_wrapper_IUnknown::_bind___eq},
	{"fromVoid", &luna_wrapper_IUnknown::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IUnknown::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< IUnknown >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IUnknown >::enumValues[] = {
	{0,0}
};


