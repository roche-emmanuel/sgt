#include <plug_common.h>

#include <luna/wrappers/wrapper_cef_RenderTarget.h>

class luna_wrapper_cef_RenderTarget {
public:
	typedef Luna< cef::RenderTarget > luna_t;

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

		cef::RenderTarget* self= (cef::RenderTarget*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< cef::RenderTarget >::push(L,self,false);
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
		//cef::RenderTarget* ptr= dynamic_cast< cef::RenderTarget* >(Luna< CefBase >::check(L,1));
		cef::RenderTarget* ptr= luna_caster< CefBase, cef::RenderTarget >::cast(Luna< CefBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< cef::RenderTarget >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_GetWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// int cef::RenderTarget::GetWidth()
	static int _bind_GetWidth(lua_State *L) {
		if (!_lg_typecheck_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int cef::RenderTarget::GetWidth() function, expected prototype:\nint cef::RenderTarget::GetWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::RenderTarget::GetWidth(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::RenderTarget::GetHeight()
	static int _bind_GetHeight(lua_State *L) {
		if (!_lg_typecheck_GetHeight(L)) {
			luaL_error(L, "luna typecheck failed in int cef::RenderTarget::GetHeight() function, expected prototype:\nint cef::RenderTarget::GetHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::RenderTarget::GetHeight(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void cef::RenderTarget::Initialize()
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in void cef::RenderTarget::Initialize() function, expected prototype:\nvoid cef::RenderTarget::Initialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::RenderTarget::Initialize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Initialize();

		return 0;
	}

	// void cef::RenderTarget::Uninitialize()
	static int _bind_Uninitialize(lua_State *L) {
		if (!_lg_typecheck_Uninitialize(L)) {
			luaL_error(L, "luna typecheck failed in void cef::RenderTarget::Uninitialize() function, expected prototype:\nvoid cef::RenderTarget::Uninitialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::RenderTarget::Uninitialize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Uninitialize();

		return 0;
	}

	// bool cef::RenderTarget::IsInitialized()
	static int _bind_IsInitialized(lua_State *L) {
		if (!_lg_typecheck_IsInitialized(L)) {
			luaL_error(L, "luna typecheck failed in bool cef::RenderTarget::IsInitialized() function, expected prototype:\nbool cef::RenderTarget::IsInitialized()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool cef::RenderTarget::IsInitialized(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsInitialized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int cef::RenderTarget::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in int cef::RenderTarget::AddRef() function, expected prototype:\nint cef::RenderTarget::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::RenderTarget::AddRef(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::RenderTarget::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in int cef::RenderTarget::Release() function, expected prototype:\nint cef::RenderTarget::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::RenderTarget::Release(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::RenderTarget::GetRefCt()
	static int _bind_GetRefCt(lua_State *L) {
		if (!_lg_typecheck_GetRefCt(L)) {
			luaL_error(L, "luna typecheck failed in int cef::RenderTarget::GetRefCt() function, expected prototype:\nint cef::RenderTarget::GetRefCt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::RenderTarget::GetRefCt(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRefCt();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::RenderTarget::base_GetWidth()
	static int _bind_base_GetWidth(lua_State *L) {
		if (!_lg_typecheck_base_GetWidth(L)) {
			luaL_error(L, "luna typecheck failed in int cef::RenderTarget::base_GetWidth() function, expected prototype:\nint cef::RenderTarget::base_GetWidth()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::RenderTarget::base_GetWidth(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->RenderTarget::GetWidth();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::RenderTarget::base_GetHeight()
	static int _bind_base_GetHeight(lua_State *L) {
		if (!_lg_typecheck_base_GetHeight(L)) {
			luaL_error(L, "luna typecheck failed in int cef::RenderTarget::base_GetHeight() function, expected prototype:\nint cef::RenderTarget::base_GetHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::RenderTarget::base_GetHeight(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->RenderTarget::GetHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::RenderTarget::base_AddRef()
	static int _bind_base_AddRef(lua_State *L) {
		if (!_lg_typecheck_base_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in int cef::RenderTarget::base_AddRef() function, expected prototype:\nint cef::RenderTarget::base_AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::RenderTarget::base_AddRef(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->RenderTarget::AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::RenderTarget::base_Release()
	static int _bind_base_Release(lua_State *L) {
		if (!_lg_typecheck_base_Release(L)) {
			luaL_error(L, "luna typecheck failed in int cef::RenderTarget::base_Release() function, expected prototype:\nint cef::RenderTarget::base_Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::RenderTarget::base_Release(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->RenderTarget::Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::RenderTarget::base_GetRefCt()
	static int _bind_base_GetRefCt(lua_State *L) {
		if (!_lg_typecheck_base_GetRefCt(L)) {
			luaL_error(L, "luna typecheck failed in int cef::RenderTarget::base_GetRefCt() function, expected prototype:\nint cef::RenderTarget::base_GetRefCt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::RenderTarget* self=Luna< CefBase >::checkSubType< cef::RenderTarget >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::RenderTarget::base_GetRefCt(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->RenderTarget::GetRefCt();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

cef::RenderTarget* LunaTraits< cef::RenderTarget >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void cef::RenderTarget::Initialize()
	// void cef::RenderTarget::Uninitialize()
	// bool cef::RenderTarget::IsInitialized()
}

void LunaTraits< cef::RenderTarget >::_bind_dtor(cef::RenderTarget* obj) {
	delete obj;
}

const char LunaTraits< cef::RenderTarget >::className[] = "RenderTarget";
const char LunaTraits< cef::RenderTarget >::fullName[] = "cef::RenderTarget";
const char LunaTraits< cef::RenderTarget >::moduleName[] = "cef";
const char* LunaTraits< cef::RenderTarget >::parents[] = {"cef.CefBase", 0};
const int LunaTraits< cef::RenderTarget >::hash = 16519148;
const int LunaTraits< cef::RenderTarget >::uniqueIDs[] = {50549361,0};

luna_RegType LunaTraits< cef::RenderTarget >::methods[] = {
	{"GetWidth", &luna_wrapper_cef_RenderTarget::_bind_GetWidth},
	{"GetHeight", &luna_wrapper_cef_RenderTarget::_bind_GetHeight},
	{"Initialize", &luna_wrapper_cef_RenderTarget::_bind_Initialize},
	{"Uninitialize", &luna_wrapper_cef_RenderTarget::_bind_Uninitialize},
	{"IsInitialized", &luna_wrapper_cef_RenderTarget::_bind_IsInitialized},
	{"AddRef", &luna_wrapper_cef_RenderTarget::_bind_AddRef},
	{"Release", &luna_wrapper_cef_RenderTarget::_bind_Release},
	{"GetRefCt", &luna_wrapper_cef_RenderTarget::_bind_GetRefCt},
	{"base_GetWidth", &luna_wrapper_cef_RenderTarget::_bind_base_GetWidth},
	{"base_GetHeight", &luna_wrapper_cef_RenderTarget::_bind_base_GetHeight},
	{"base_AddRef", &luna_wrapper_cef_RenderTarget::_bind_base_AddRef},
	{"base_Release", &luna_wrapper_cef_RenderTarget::_bind_base_Release},
	{"base_GetRefCt", &luna_wrapper_cef_RenderTarget::_bind_base_GetRefCt},
	{"fromVoid", &luna_wrapper_cef_RenderTarget::_bind_fromVoid},
	{"asVoid", &luna_wrapper_cef_RenderTarget::_bind_asVoid},
	{"getTable", &luna_wrapper_cef_RenderTarget::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< cef::RenderTarget >::converters[] = {
	{"CefBase", &luna_wrapper_cef_RenderTarget::_cast_from_CefBase},
	{0,0}
};

luna_RegEnumType LunaTraits< cef::RenderTarget >::enumValues[] = {
	{0,0}
};


