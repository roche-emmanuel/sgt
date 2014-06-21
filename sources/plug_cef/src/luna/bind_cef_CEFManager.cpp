#include <plug_common.h>

#include <luna/wrappers/wrapper_cef_CEFManager.h>

class luna_wrapper_cef_CEFManager {
public:
	typedef Luna< cef::CEFManager > luna_t;

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

		cef::CEFManager* self= (cef::CEFManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< cef::CEFManager >::push(L,self,false);
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
		//cef::CEFManager* ptr= dynamic_cast< cef::CEFManager* >(Luna< CefBase >::check(L,1));
		cef::CEFManager* ptr= luna_caster< CefBase, cef::CEFManager >::cast(Luna< CefBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< cef::CEFManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,49043676) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_CreateView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59758032) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_DestroyView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50549361)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_startThread(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_stopThread(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Initialize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Shutdown(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Update(lua_State *L) {
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
	// cef::CEFManager::CEFManager(lua_Table * data, const cef::CEFManager::Traits & traits)
	static cef::CEFManager* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFManager::CEFManager(lua_Table * data, const cef::CEFManager::Traits & traits) function, expected prototype:\ncef::CEFManager::CEFManager(lua_Table * data, const cef::CEFManager::Traits & traits)\nClass arguments details:\narg 2 ID = 49043676\n\n%s",luna_dumpStack(L).c_str());
		}

		const cef::CEFManager::Traits* traits_ptr=(Luna< cef::CEFManager::Traits >::check(L,2));
		if( !traits_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg traits in cef::CEFManager::CEFManager function");
		}
		const cef::CEFManager::Traits & traits=*traits_ptr;

		return new wrapper_cef_CEFManager(L,NULL, traits);
	}


	// Function binds:
	// cef::CEFViewBase * cef::CEFManager::CreateView(const cef::CEFViewBase::Traits & traits)
	static int _bind_CreateView(lua_State *L) {
		if (!_lg_typecheck_CreateView(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFViewBase * cef::CEFManager::CreateView(const cef::CEFViewBase::Traits & traits) function, expected prototype:\ncef::CEFViewBase * cef::CEFManager::CreateView(const cef::CEFViewBase::Traits & traits)\nClass arguments details:\narg 1 ID = 59758032\n\n%s",luna_dumpStack(L).c_str());
		}

		const cef::CEFViewBase::Traits* traits_ptr=(Luna< cef::CEFViewBase::Traits >::check(L,2));
		if( !traits_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg traits in cef::CEFManager::CreateView function");
		}
		const cef::CEFViewBase::Traits & traits=*traits_ptr;

		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call cef::CEFViewBase * cef::CEFManager::CreateView(const cef::CEFViewBase::Traits &). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		cef::CEFViewBase * lret = self->CreateView(traits);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< cef::CEFViewBase >::push(L,lret,false);

		return 1;
	}

	// void cef::CEFManager::DestroyView(cef::CEFViewBase * view)
	static int _bind_DestroyView(lua_State *L) {
		if (!_lg_typecheck_DestroyView(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFManager::DestroyView(cef::CEFViewBase * view) function, expected prototype:\nvoid cef::CEFManager::DestroyView(cef::CEFViewBase * view)\nClass arguments details:\narg 1 ID = 50549361\n\n%s",luna_dumpStack(L).c_str());
		}

		cef::CEFViewBase* view=(Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,2));

		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFManager::DestroyView(cef::CEFViewBase *). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DestroyView(view);

		return 0;
	}

	// void cef::CEFManager::startThread()
	static int _bind_startThread(lua_State *L) {
		if (!_lg_typecheck_startThread(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFManager::startThread() function, expected prototype:\nvoid cef::CEFManager::startThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFManager::startThread(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startThread();

		return 0;
	}

	// void cef::CEFManager::stopThread()
	static int _bind_stopThread(lua_State *L) {
		if (!_lg_typecheck_stopThread(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFManager::stopThread() function, expected prototype:\nvoid cef::CEFManager::stopThread()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFManager::stopThread(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stopThread();

		return 0;
	}

	// void cef::CEFManager::Initialize()
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFManager::Initialize() function, expected prototype:\nvoid cef::CEFManager::Initialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFManager::Initialize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Initialize();

		return 0;
	}

	// void cef::CEFManager::Shutdown()
	static int _bind_Shutdown(lua_State *L) {
		if (!_lg_typecheck_Shutdown(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFManager::Shutdown() function, expected prototype:\nvoid cef::CEFManager::Shutdown()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFManager::Shutdown(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Shutdown();

		return 0;
	}

	// void cef::CEFManager::Update()
	static int _bind_Update(lua_State *L) {
		if (!_lg_typecheck_Update(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFManager::Update() function, expected prototype:\nvoid cef::CEFManager::Update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFManager::Update(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Update();

		return 0;
	}

	// bool cef::CEFManager::IsInitialized()
	static int _bind_IsInitialized(lua_State *L) {
		if (!_lg_typecheck_IsInitialized(L)) {
			luaL_error(L, "luna typecheck failed in bool cef::CEFManager::IsInitialized() function, expected prototype:\nbool cef::CEFManager::IsInitialized()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool cef::CEFManager::IsInitialized(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsInitialized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int cef::CEFManager::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFManager::AddRef() function, expected prototype:\nint cef::CEFManager::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFManager::AddRef(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::CEFManager::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFManager::Release() function, expected prototype:\nint cef::CEFManager::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFManager::Release(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::CEFManager::GetRefCt()
	static int _bind_GetRefCt(lua_State *L) {
		if (!_lg_typecheck_GetRefCt(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFManager::GetRefCt() function, expected prototype:\nint cef::CEFManager::GetRefCt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFManager::GetRefCt(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRefCt();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::CEFManager::base_AddRef()
	static int _bind_base_AddRef(lua_State *L) {
		if (!_lg_typecheck_base_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFManager::base_AddRef() function, expected prototype:\nint cef::CEFManager::base_AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFManager::base_AddRef(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->CEFManager::AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::CEFManager::base_Release()
	static int _bind_base_Release(lua_State *L) {
		if (!_lg_typecheck_base_Release(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFManager::base_Release() function, expected prototype:\nint cef::CEFManager::base_Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFManager::base_Release(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->CEFManager::Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::CEFManager::base_GetRefCt()
	static int _bind_base_GetRefCt(lua_State *L) {
		if (!_lg_typecheck_base_GetRefCt(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFManager::base_GetRefCt() function, expected prototype:\nint cef::CEFManager::base_GetRefCt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFManager* self=Luna< CefBase >::checkSubType< cef::CEFManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFManager::base_GetRefCt(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->CEFManager::GetRefCt();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

cef::CEFManager* LunaTraits< cef::CEFManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_cef_CEFManager::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// cef::CEFViewBase * cef::CEFManager::DoCreateView(const cef::CEFViewBase::Traits & traits)
}

void LunaTraits< cef::CEFManager >::_bind_dtor(cef::CEFManager* obj) {
	CefRefPtr<CefBase> refptr = obj;
}

const char LunaTraits< cef::CEFManager >::className[] = "CEFManager";
const char LunaTraits< cef::CEFManager >::fullName[] = "cef::CEFManager";
const char LunaTraits< cef::CEFManager >::moduleName[] = "cef";
const char* LunaTraits< cef::CEFManager >::parents[] = {"cef.CefBase", 0};
const int LunaTraits< cef::CEFManager >::hash = 10351703;
const int LunaTraits< cef::CEFManager >::uniqueIDs[] = {50549361,0};

luna_RegType LunaTraits< cef::CEFManager >::methods[] = {
	{"CreateView", &luna_wrapper_cef_CEFManager::_bind_CreateView},
	{"DestroyView", &luna_wrapper_cef_CEFManager::_bind_DestroyView},
	{"startThread", &luna_wrapper_cef_CEFManager::_bind_startThread},
	{"stopThread", &luna_wrapper_cef_CEFManager::_bind_stopThread},
	{"Initialize", &luna_wrapper_cef_CEFManager::_bind_Initialize},
	{"Shutdown", &luna_wrapper_cef_CEFManager::_bind_Shutdown},
	{"Update", &luna_wrapper_cef_CEFManager::_bind_Update},
	{"IsInitialized", &luna_wrapper_cef_CEFManager::_bind_IsInitialized},
	{"AddRef", &luna_wrapper_cef_CEFManager::_bind_AddRef},
	{"Release", &luna_wrapper_cef_CEFManager::_bind_Release},
	{"GetRefCt", &luna_wrapper_cef_CEFManager::_bind_GetRefCt},
	{"base_AddRef", &luna_wrapper_cef_CEFManager::_bind_base_AddRef},
	{"base_Release", &luna_wrapper_cef_CEFManager::_bind_base_Release},
	{"base_GetRefCt", &luna_wrapper_cef_CEFManager::_bind_base_GetRefCt},
	{"fromVoid", &luna_wrapper_cef_CEFManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_cef_CEFManager::_bind_asVoid},
	{"getTable", &luna_wrapper_cef_CEFManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< cef::CEFManager >::converters[] = {
	{"CefBase", &luna_wrapper_cef_CEFManager::_cast_from_CefBase},
	{0,0}
};

luna_RegEnumType LunaTraits< cef::CEFManager >::enumValues[] = {
	{0,0}
};


