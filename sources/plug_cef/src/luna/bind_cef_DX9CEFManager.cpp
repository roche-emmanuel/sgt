#include <plug_common.h>

#include <luna/wrappers/wrapper_cef_DX9CEFManager.h>

class luna_wrapper_cef_DX9CEFManager {
public:
	typedef Luna< cef::DX9CEFManager > luna_t;

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

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		cef::DX9CEFManager* self= (cef::DX9CEFManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< cef::DX9CEFManager >::push(L,self,false);
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

	// Derived class converters:
	static int _cast_from_CefBase(lua_State *L) {
		// all checked are already performed before reaching this point.
		//cef::DX9CEFManager* ptr= dynamic_cast< cef::DX9CEFManager* >(Luna< CefBase >::check(L,1));
		cef::DX9CEFManager* ptr= luna_caster< CefBase, cef::DX9CEFManager >::cast(Luna< CefBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< cef::DX9CEFManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,44522754)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< IDirect3DDevice9 >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,44522754)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< IDirect3DDevice9 >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_base_AddRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Release(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetRefCt(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// cef::DX9CEFManager::DX9CEFManager(IDirect3DDevice9 * device)
	static cef::DX9CEFManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in cef::DX9CEFManager::DX9CEFManager(IDirect3DDevice9 * device) function, expected prototype:\ncef::DX9CEFManager::DX9CEFManager(IDirect3DDevice9 * device)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,1));

		return new cef::DX9CEFManager(device);
	}

	// cef::DX9CEFManager::DX9CEFManager(lua_Table * data, IDirect3DDevice9 * device)
	static cef::DX9CEFManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in cef::DX9CEFManager::DX9CEFManager(lua_Table * data, IDirect3DDevice9 * device) function, expected prototype:\ncef::DX9CEFManager::DX9CEFManager(lua_Table * data, IDirect3DDevice9 * device)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		IDirect3DDevice9* device=(Luna< IDirect3DDevice9 >::check(L,2));

		return new wrapper_cef_DX9CEFManager(L,NULL, device);
	}

	// Overload binder for cef::DX9CEFManager::DX9CEFManager
	static cef::DX9CEFManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DX9CEFManager, cannot match any of the overloads for function DX9CEFManager:\n  DX9CEFManager(IDirect3DDevice9 *)\n  DX9CEFManager(lua_Table *, IDirect3DDevice9 *)\n");
		return NULL;
	}


	// Function binds:
	// int cef::DX9CEFManager::base_AddRef()
	static int _bind_base_AddRef(lua_State *L) {
		if (!_lg_typecheck_base_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in int cef::DX9CEFManager::base_AddRef() function, expected prototype:\nint cef::DX9CEFManager::base_AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9CEFManager* self=Luna< CefBase >::checkSubType< cef::DX9CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::DX9CEFManager::base_AddRef(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DX9CEFManager::AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::DX9CEFManager::base_Release()
	static int _bind_base_Release(lua_State *L) {
		if (!_lg_typecheck_base_Release(L)) {
			luaL_error(L, "luna typecheck failed in int cef::DX9CEFManager::base_Release() function, expected prototype:\nint cef::DX9CEFManager::base_Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9CEFManager* self=Luna< CefBase >::checkSubType< cef::DX9CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::DX9CEFManager::base_Release(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DX9CEFManager::Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::DX9CEFManager::base_GetRefCt()
	static int _bind_base_GetRefCt(lua_State *L) {
		if (!_lg_typecheck_base_GetRefCt(L)) {
			luaL_error(L, "luna typecheck failed in int cef::DX9CEFManager::base_GetRefCt() function, expected prototype:\nint cef::DX9CEFManager::base_GetRefCt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9CEFManager* self=Luna< CefBase >::checkSubType< cef::DX9CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::DX9CEFManager::base_GetRefCt(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DX9CEFManager::GetRefCt();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

cef::DX9CEFManager* LunaTraits< cef::DX9CEFManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_cef_DX9CEFManager::_bind_ctor(L);
}

void LunaTraits< cef::DX9CEFManager >::_bind_dtor(cef::DX9CEFManager* obj) {
	delete obj;
}

const char LunaTraits< cef::DX9CEFManager >::className[] = "DX9CEFManager";
const char LunaTraits< cef::DX9CEFManager >::fullName[] = "cef::DX9CEFManager";
const char LunaTraits< cef::DX9CEFManager >::moduleName[] = "cef";
const char* LunaTraits< cef::DX9CEFManager >::parents[] = {"cef.CEFManager", 0};
const int LunaTraits< cef::DX9CEFManager >::hash = 95441683;
const int LunaTraits< cef::DX9CEFManager >::uniqueIDs[] = {50549361,0};

luna_RegType LunaTraits< cef::DX9CEFManager >::methods[] = {
	{"base_AddRef", &luna_wrapper_cef_DX9CEFManager::_bind_base_AddRef},
	{"base_Release", &luna_wrapper_cef_DX9CEFManager::_bind_base_Release},
	{"base_GetRefCt", &luna_wrapper_cef_DX9CEFManager::_bind_base_GetRefCt},
	{"fromVoid", &luna_wrapper_cef_DX9CEFManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_cef_DX9CEFManager::_bind_asVoid},
	{"getTable", &luna_wrapper_cef_DX9CEFManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< cef::DX9CEFManager >::converters[] = {
	{"CefBase", &luna_wrapper_cef_DX9CEFManager::_cast_from_CefBase},
	{0,0}
};

luna_RegEnumType LunaTraits< cef::DX9CEFManager >::enumValues[] = {
	{0,0}
};


