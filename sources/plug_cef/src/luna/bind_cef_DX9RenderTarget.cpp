#include <plug_common.h>

#include <luna/wrappers/wrapper_cef_DX9RenderTarget.h>

class luna_wrapper_cef_DX9RenderTarget {
public:
	typedef Luna< cef::DX9RenderTarget > luna_t;

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

		cef::DX9RenderTarget* self= (cef::DX9RenderTarget*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< cef::DX9RenderTarget >::push(L,self,false);
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
		//cef::DX9RenderTarget* ptr= dynamic_cast< cef::DX9RenderTarget* >(Luna< CefBase >::check(L,1));
		cef::DX9RenderTarget* ptr= luna_caster< CefBase, cef::DX9RenderTarget >::cast(Luna< CefBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< cef::DX9RenderTarget >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Uninitialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_IsInitialized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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

	inline static bool _lg_typecheck_base_Initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_Uninitialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_IsInitialized(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// cef::DX9RenderTarget::DX9RenderTarget(int width, int height)
	static cef::DX9RenderTarget* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in cef::DX9RenderTarget::DX9RenderTarget(int width, int height) function, expected prototype:\ncef::DX9RenderTarget::DX9RenderTarget(int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,1);
		int height=(int)lua_tointeger(L,2);

		return new cef::DX9RenderTarget(width, height);
	}

	// cef::DX9RenderTarget::DX9RenderTarget(lua_Table * data, int width, int height)
	static cef::DX9RenderTarget* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in cef::DX9RenderTarget::DX9RenderTarget(lua_Table * data, int width, int height) function, expected prototype:\ncef::DX9RenderTarget::DX9RenderTarget(lua_Table * data, int width, int height)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);

		return new wrapper_cef_DX9RenderTarget(L,NULL, width, height);
	}

	// Overload binder for cef::DX9RenderTarget::DX9RenderTarget
	static cef::DX9RenderTarget* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DX9RenderTarget, cannot match any of the overloads for function DX9RenderTarget:\n  DX9RenderTarget(int, int)\n  DX9RenderTarget(lua_Table *, int, int)\n");
		return NULL;
	}


	// Function binds:
	// void cef::DX9RenderTarget::Initialize()
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in void cef::DX9RenderTarget::Initialize() function, expected prototype:\nvoid cef::DX9RenderTarget::Initialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9RenderTarget* self=Luna< CefBase >::checkSubType< cef::DX9RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::DX9RenderTarget::Initialize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Initialize();

		return 0;
	}

	// void cef::DX9RenderTarget::Uninitialize()
	static int _bind_Uninitialize(lua_State *L) {
		if (!_lg_typecheck_Uninitialize(L)) {
			luaL_error(L, "luna typecheck failed in void cef::DX9RenderTarget::Uninitialize() function, expected prototype:\nvoid cef::DX9RenderTarget::Uninitialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9RenderTarget* self=Luna< CefBase >::checkSubType< cef::DX9RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::DX9RenderTarget::Uninitialize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Uninitialize();

		return 0;
	}

	// bool cef::DX9RenderTarget::IsInitialized()
	static int _bind_IsInitialized(lua_State *L) {
		if (!_lg_typecheck_IsInitialized(L)) {
			luaL_error(L, "luna typecheck failed in bool cef::DX9RenderTarget::IsInitialized() function, expected prototype:\nbool cef::DX9RenderTarget::IsInitialized()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9RenderTarget* self=Luna< CefBase >::checkSubType< cef::DX9RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool cef::DX9RenderTarget::IsInitialized(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsInitialized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int cef::DX9RenderTarget::base_GetWidth()
	static int _bind_base_GetWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int cef::DX9RenderTarget::base_GetWidth() function, expected prototype:\nint cef::DX9RenderTarget::base_GetWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9RenderTarget* self=Luna< CefBase >::checkSubType< cef::DX9RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::DX9RenderTarget::base_GetWidth(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DX9RenderTarget::GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::DX9RenderTarget::base_GetHeight()
	static int _bind_base_GetHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetHeight(L)) {
			luaL_error(L, "luna typecheck failed in int cef::DX9RenderTarget::base_GetHeight() function, expected prototype:\nint cef::DX9RenderTarget::base_GetHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9RenderTarget* self=Luna< CefBase >::checkSubType< cef::DX9RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::DX9RenderTarget::base_GetHeight(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DX9RenderTarget::GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::DX9RenderTarget::base_AddRef()
	static int _bind_base_AddRef(lua_State *L) {
		if (!_lg_typecheck_base_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in int cef::DX9RenderTarget::base_AddRef() function, expected prototype:\nint cef::DX9RenderTarget::base_AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9RenderTarget* self=Luna< CefBase >::checkSubType< cef::DX9RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::DX9RenderTarget::base_AddRef(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DX9RenderTarget::AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::DX9RenderTarget::base_Release()
	static int _bind_base_Release(lua_State *L) {
		if (!_lg_typecheck_base_Release(L)) {
			luaL_error(L, "luna typecheck failed in int cef::DX9RenderTarget::base_Release() function, expected prototype:\nint cef::DX9RenderTarget::base_Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9RenderTarget* self=Luna< CefBase >::checkSubType< cef::DX9RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::DX9RenderTarget::base_Release(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DX9RenderTarget::Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::DX9RenderTarget::base_GetRefCt()
	static int _bind_base_GetRefCt(lua_State *L) {
		if (!_lg_typecheck_base_GetRefCt(L)) {
			luaL_error(L, "luna typecheck failed in int cef::DX9RenderTarget::base_GetRefCt() function, expected prototype:\nint cef::DX9RenderTarget::base_GetRefCt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9RenderTarget* self=Luna< CefBase >::checkSubType< cef::DX9RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::DX9RenderTarget::base_GetRefCt(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->DX9RenderTarget::GetRefCt();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void cef::DX9RenderTarget::base_Initialize()
	static int _bind_base_Initialize(lua_State *L) {
		if (!_lg_typecheck_base_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in void cef::DX9RenderTarget::base_Initialize() function, expected prototype:\nvoid cef::DX9RenderTarget::base_Initialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9RenderTarget* self=Luna< CefBase >::checkSubType< cef::DX9RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::DX9RenderTarget::base_Initialize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DX9RenderTarget::Initialize();

		return 0;
	}

	// void cef::DX9RenderTarget::base_Uninitialize()
	static int _bind_base_Uninitialize(lua_State *L) {
		if (!_lg_typecheck_base_Uninitialize(L)) {
			luaL_error(L, "luna typecheck failed in void cef::DX9RenderTarget::base_Uninitialize() function, expected prototype:\nvoid cef::DX9RenderTarget::base_Uninitialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9RenderTarget* self=Luna< CefBase >::checkSubType< cef::DX9RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::DX9RenderTarget::base_Uninitialize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DX9RenderTarget::Uninitialize();

		return 0;
	}

	// bool cef::DX9RenderTarget::base_IsInitialized()
	static int _bind_base_IsInitialized(lua_State *L) {
		if (!_lg_typecheck_base_IsInitialized(L)) {
			luaL_error(L, "luna typecheck failed in bool cef::DX9RenderTarget::base_IsInitialized() function, expected prototype:\nbool cef::DX9RenderTarget::base_IsInitialized()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::DX9RenderTarget* self=Luna< CefBase >::checkSubType< cef::DX9RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool cef::DX9RenderTarget::base_IsInitialized(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DX9RenderTarget::IsInitialized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

cef::DX9RenderTarget* LunaTraits< cef::DX9RenderTarget >::_bind_ctor(lua_State *L) {
	return luna_wrapper_cef_DX9RenderTarget::_bind_ctor(L);
}

void LunaTraits< cef::DX9RenderTarget >::_bind_dtor(cef::DX9RenderTarget* obj) {
	delete obj;
}

const char LunaTraits< cef::DX9RenderTarget >::className[] = "DX9RenderTarget";
const char LunaTraits< cef::DX9RenderTarget >::fullName[] = "cef::DX9RenderTarget";
const char LunaTraits< cef::DX9RenderTarget >::moduleName[] = "cef";
const char* LunaTraits< cef::DX9RenderTarget >::parents[] = {"cef.RenderTarget", 0};
const int LunaTraits< cef::DX9RenderTarget >::hash = 47640225;
const int LunaTraits< cef::DX9RenderTarget >::uniqueIDs[] = {50549361,0};

luna_RegType LunaTraits< cef::DX9RenderTarget >::methods[] = {
	{"Initialize", &luna_wrapper_cef_DX9RenderTarget::_bind_Initialize},
	{"Uninitialize", &luna_wrapper_cef_DX9RenderTarget::_bind_Uninitialize},
	{"IsInitialized", &luna_wrapper_cef_DX9RenderTarget::_bind_IsInitialized},
	{"base_GetWidth", &luna_wrapper_cef_DX9RenderTarget::_bind_base_GetWidth},
	{"base_GetHeight", &luna_wrapper_cef_DX9RenderTarget::_bind_base_GetHeight},
	{"base_AddRef", &luna_wrapper_cef_DX9RenderTarget::_bind_base_AddRef},
	{"base_Release", &luna_wrapper_cef_DX9RenderTarget::_bind_base_Release},
	{"base_GetRefCt", &luna_wrapper_cef_DX9RenderTarget::_bind_base_GetRefCt},
	{"base_Initialize", &luna_wrapper_cef_DX9RenderTarget::_bind_base_Initialize},
	{"base_Uninitialize", &luna_wrapper_cef_DX9RenderTarget::_bind_base_Uninitialize},
	{"base_IsInitialized", &luna_wrapper_cef_DX9RenderTarget::_bind_base_IsInitialized},
	{"fromVoid", &luna_wrapper_cef_DX9RenderTarget::_bind_fromVoid},
	{"asVoid", &luna_wrapper_cef_DX9RenderTarget::_bind_asVoid},
	{"getTable", &luna_wrapper_cef_DX9RenderTarget::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< cef::DX9RenderTarget >::converters[] = {
	{"CefBase", &luna_wrapper_cef_DX9RenderTarget::_cast_from_CefBase},
	{0,0}
};

luna_RegEnumType LunaTraits< cef::DX9RenderTarget >::enumValues[] = {
	{0,0}
};


