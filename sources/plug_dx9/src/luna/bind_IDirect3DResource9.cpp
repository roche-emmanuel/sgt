#include <plug_common.h>

class luna_wrapper_IDirect3DResource9 {
public:
	typedef Luna< IDirect3DResource9 > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85410428) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IDirect3DResource9*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DResource9* rhs =(Luna< IDirect3DResource9 >::check(L,2));
		IDirect3DResource9* self=(Luna< IDirect3DResource9 >::check(L,1));
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

		IDirect3DResource9* self= (IDirect3DResource9*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IDirect3DResource9 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85410428) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IDirect3DResource9 >::check(L,1));
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

		IDirect3DResource9* self=(Luna< IDirect3DResource9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IDirect3DResource9");
		
		return luna_dynamicCast(L,converters,"IDirect3DResource9",name);
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

	inline static bool _lg_typecheck_SetPriority(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_GetPriority(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_PreLoad(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned long IDirect3DResource9::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DResource9::AddRef() function, expected prototype:\nunsigned long IDirect3DResource9::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DResource9* self=(Luna< IDirect3DResource9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DResource9::AddRef(). Got : '%s'\n%s",typeid(Luna< IDirect3DResource9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3DResource9::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DResource9::Release() function, expected prototype:\nunsigned long IDirect3DResource9::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DResource9* self=(Luna< IDirect3DResource9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DResource9::Release(). Got : '%s'\n%s",typeid(Luna< IDirect3DResource9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3DResource9::SetPriority(unsigned long PriorityNew)
	static int _bind_SetPriority(lua_State *L) {
		if (!_lg_typecheck_SetPriority(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DResource9::SetPriority(unsigned long PriorityNew) function, expected prototype:\nunsigned long IDirect3DResource9::SetPriority(unsigned long PriorityNew)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned long PriorityNew=(unsigned long)lua_tonumber(L,2);

		IDirect3DResource9* self=(Luna< IDirect3DResource9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DResource9::SetPriority(unsigned long). Got : '%s'\n%s",typeid(Luna< IDirect3DResource9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->SetPriority(PriorityNew);
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned long IDirect3DResource9::GetPriority()
	static int _bind_GetPriority(lua_State *L) {
		if (!_lg_typecheck_GetPriority(L)) {
			luaL_error(L, "luna typecheck failed in unsigned long IDirect3DResource9::GetPriority() function, expected prototype:\nunsigned long IDirect3DResource9::GetPriority()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DResource9* self=(Luna< IDirect3DResource9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned long IDirect3DResource9::GetPriority(). Got : '%s'\n%s",typeid(Luna< IDirect3DResource9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned long lret = self->GetPriority();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void IDirect3DResource9::PreLoad()
	static int _bind_PreLoad(lua_State *L) {
		if (!_lg_typecheck_PreLoad(L)) {
			luaL_error(L, "luna typecheck failed in void IDirect3DResource9::PreLoad() function, expected prototype:\nvoid IDirect3DResource9::PreLoad()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DResource9* self=(Luna< IDirect3DResource9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void IDirect3DResource9::PreLoad(). Got : '%s'\n%s",typeid(Luna< IDirect3DResource9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PreLoad();

		return 0;
	}

	// D3DRESOURCETYPE IDirect3DResource9::GetType()
	static int _bind_GetType(lua_State *L) {
		if (!_lg_typecheck_GetType(L)) {
			luaL_error(L, "luna typecheck failed in D3DRESOURCETYPE IDirect3DResource9::GetType() function, expected prototype:\nD3DRESOURCETYPE IDirect3DResource9::GetType()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IDirect3DResource9* self=(Luna< IDirect3DResource9 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call D3DRESOURCETYPE IDirect3DResource9::GetType(). Got : '%s'\n%s",typeid(Luna< IDirect3DResource9 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		D3DRESOURCETYPE lret = self->GetType();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IDirect3DResource9* LunaTraits< IDirect3DResource9 >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< IDirect3DResource9 >::_bind_dtor(IDirect3DResource9* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< IDirect3DResource9 >::className[] = "IDirect3DResource9";
const char LunaTraits< IDirect3DResource9 >::fullName[] = "IDirect3DResource9";
const char LunaTraits< IDirect3DResource9 >::moduleName[] = "dx9";
const char* LunaTraits< IDirect3DResource9 >::parents[] = {0};
const int LunaTraits< IDirect3DResource9 >::hash = 85410428;
const int LunaTraits< IDirect3DResource9 >::uniqueIDs[] = {85410428,0};

luna_RegType LunaTraits< IDirect3DResource9 >::methods[] = {
	{"AddRef", &luna_wrapper_IDirect3DResource9::_bind_AddRef},
	{"Release", &luna_wrapper_IDirect3DResource9::_bind_Release},
	{"SetPriority", &luna_wrapper_IDirect3DResource9::_bind_SetPriority},
	{"GetPriority", &luna_wrapper_IDirect3DResource9::_bind_GetPriority},
	{"PreLoad", &luna_wrapper_IDirect3DResource9::_bind_PreLoad},
	{"GetType", &luna_wrapper_IDirect3DResource9::_bind_GetType},
	{"dynCast", &luna_wrapper_IDirect3DResource9::_bind_dynCast},
	{"__eq", &luna_wrapper_IDirect3DResource9::_bind___eq},
	{"fromVoid", &luna_wrapper_IDirect3DResource9::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IDirect3DResource9::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< IDirect3DResource9 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IDirect3DResource9 >::enumValues[] = {
	{0,0}
};


