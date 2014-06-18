#include <plug_common.h>

class luna_wrapper_CefRefCount {
public:
	typedef Luna< CefRefCount > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44309748) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(CefRefCount*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CefRefCount* rhs =(Luna< CefRefCount >::check(L,2));
		CefRefCount* self=(Luna< CefRefCount >::check(L,1));
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

		CefRefCount* self= (CefRefCount*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< CefRefCount >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,44309748) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< CefRefCount >::check(L,1));
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

		CefRefCount* self=(Luna< CefRefCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("CefRefCount");
		
		return luna_dynamicCast(L,converters,"CefRefCount",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_AddRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetRefCt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// CefRefCount::CefRefCount()
	static CefRefCount* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in CefRefCount::CefRefCount() function, expected prototype:\nCefRefCount::CefRefCount()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new CefRefCount();
	}


	// Function binds:
	// int CefRefCount::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in int CefRefCount::AddRef() function, expected prototype:\nint CefRefCount::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefRefCount* self=(Luna< CefRefCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int CefRefCount::AddRef(). Got : '%s'\n%s",typeid(Luna< CefRefCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int CefRefCount::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in int CefRefCount::Release() function, expected prototype:\nint CefRefCount::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefRefCount* self=(Luna< CefRefCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int CefRefCount::Release(). Got : '%s'\n%s",typeid(Luna< CefRefCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int CefRefCount::GetRefCt()
	static int _bind_GetRefCt(lua_State *L) {
		if (!_lg_typecheck_GetRefCt(L)) {
			luaL_error(L, "luna typecheck failed in int CefRefCount::GetRefCt() function, expected prototype:\nint CefRefCount::GetRefCt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefRefCount* self=(Luna< CefRefCount >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int CefRefCount::GetRefCt(). Got : '%s'\n%s",typeid(Luna< CefRefCount >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRefCt();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

CefRefCount* LunaTraits< CefRefCount >::_bind_ctor(lua_State *L) {
	return luna_wrapper_CefRefCount::_bind_ctor(L);
}

void LunaTraits< CefRefCount >::_bind_dtor(CefRefCount* obj) {
	delete obj;
}

const char LunaTraits< CefRefCount >::className[] = "CefRefCount";
const char LunaTraits< CefRefCount >::fullName[] = "CefRefCount";
const char LunaTraits< CefRefCount >::moduleName[] = "cef";
const char* LunaTraits< CefRefCount >::parents[] = {0};
const int LunaTraits< CefRefCount >::hash = 44309748;
const int LunaTraits< CefRefCount >::uniqueIDs[] = {44309748,0};

luna_RegType LunaTraits< CefRefCount >::methods[] = {
	{"AddRef", &luna_wrapper_CefRefCount::_bind_AddRef},
	{"Release", &luna_wrapper_CefRefCount::_bind_Release},
	{"GetRefCt", &luna_wrapper_CefRefCount::_bind_GetRefCt},
	{"dynCast", &luna_wrapper_CefRefCount::_bind_dynCast},
	{"__eq", &luna_wrapper_CefRefCount::_bind___eq},
	{"fromVoid", &luna_wrapper_CefRefCount::_bind_fromVoid},
	{"asVoid", &luna_wrapper_CefRefCount::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< CefRefCount >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< CefRefCount >::enumValues[] = {
	{0,0}
};


