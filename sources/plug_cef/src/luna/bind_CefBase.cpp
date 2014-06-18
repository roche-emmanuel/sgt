#include <plug_common.h>

#include <luna/wrappers/wrapper_CefBase.h>

class luna_wrapper_CefBase {
public:
	typedef Luna< CefBase > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CefBase* self=(Luna< CefBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<CefBase,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50549361) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(CefBase*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		CefBase* rhs =(Luna< CefBase >::check(L,2));
		CefBase* self=(Luna< CefBase >::check(L,1));
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

		CefBase* self= (CefBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< CefBase >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50549361) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< CefBase >::check(L,1));
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

		CefBase* self=(Luna< CefBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("CefBase");
		
		return luna_dynamicCast(L,converters,"CefBase",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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
	// CefBase::CefBase(lua_Table * data)
	static CefBase* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in CefBase::CefBase(lua_Table * data) function, expected prototype:\nCefBase::CefBase(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_CefBase(L,NULL);
	}


	// Function binds:
	// int CefBase::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in int CefBase::AddRef() function, expected prototype:\nint CefBase::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefBase* self=(Luna< CefBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int CefBase::AddRef(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int CefBase::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in int CefBase::Release() function, expected prototype:\nint CefBase::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefBase* self=(Luna< CefBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int CefBase::Release(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int CefBase::GetRefCt()
	static int _bind_GetRefCt(lua_State *L) {
		if (!_lg_typecheck_GetRefCt(L)) {
			luaL_error(L, "luna typecheck failed in int CefBase::GetRefCt() function, expected prototype:\nint CefBase::GetRefCt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		CefBase* self=(Luna< CefBase >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int CefBase::GetRefCt(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRefCt();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

CefBase* LunaTraits< CefBase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_CefBase::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// int CefBase::AddRef()
	// int CefBase::Release()
	// int CefBase::GetRefCt()
}

void LunaTraits< CefBase >::_bind_dtor(CefBase* obj) {
	//delete obj; // destructor protected.
}

const char LunaTraits< CefBase >::className[] = "CefBase";
const char LunaTraits< CefBase >::fullName[] = "CefBase";
const char LunaTraits< CefBase >::moduleName[] = "cef";
const char* LunaTraits< CefBase >::parents[] = {0};
const int LunaTraits< CefBase >::hash = 50549361;
const int LunaTraits< CefBase >::uniqueIDs[] = {50549361,0};

luna_RegType LunaTraits< CefBase >::methods[] = {
	{"AddRef", &luna_wrapper_CefBase::_bind_AddRef},
	{"Release", &luna_wrapper_CefBase::_bind_Release},
	{"GetRefCt", &luna_wrapper_CefBase::_bind_GetRefCt},
	{"dynCast", &luna_wrapper_CefBase::_bind_dynCast},
	{"__eq", &luna_wrapper_CefBase::_bind___eq},
	{"fromVoid", &luna_wrapper_CefBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_CefBase::_bind_asVoid},
	{"getTable", &luna_wrapper_CefBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< CefBase >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< CefBase >::enumValues[] = {
	{0,0}
};


