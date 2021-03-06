#include <plug_common.h>

#include <luna/wrappers/wrapper_cef_CEFViewBase.h>

class luna_wrapper_cef_CEFViewBase {
public:
	typedef Luna< cef::CEFViewBase > luna_t;

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

		cef::CEFViewBase* self= (cef::CEFViewBase*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< cef::CEFViewBase >::push(L,self,false);
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
		//cef::CEFViewBase* ptr= dynamic_cast< cef::CEFViewBase* >(Luna< CefBase >::check(L,1));
		cef::CEFViewBase* ptr= luna_caster< CefBase, cef::CEFViewBase >::cast(Luna< CefBase >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< cef::CEFViewBase >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,59758032) ) return false;
		if( (!(Luna< cef::CEFViewBase::Traits >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,59758032) ) return false;
		if( (!(Luna< cef::CEFViewBase::Traits >::check(L,2))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_IsInitialized(lua_State *L) {
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

	inline static bool _lg_typecheck_isBrowserReady(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_Reload(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_PostMessage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,LunaTraits< LunaTraits< CefProcessMessage >::parent_t >::hash) ) return false;
		if( !Luna< LunaTraits< CefProcessMessage >::parent_t >::checkSubType< CefProcessMessage >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_CollectMessages(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,82505097)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_HasPendingMessage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_GetPendingMessage(lua_State *L) {
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

	inline static bool _lg_typecheck_base_IsInitialized(lua_State *L) {
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
	// cef::CEFViewBase::CEFViewBase(const cef::CEFViewBase::Traits & traits)
	static cef::CEFViewBase* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFViewBase::CEFViewBase(const cef::CEFViewBase::Traits & traits) function, expected prototype:\ncef::CEFViewBase::CEFViewBase(const cef::CEFViewBase::Traits & traits)\nClass arguments details:\narg 1 ID = 59758032\n\n%s",luna_dumpStack(L).c_str());
		}

		const cef::CEFViewBase::Traits* traits_ptr=(Luna< cef::CEFViewBase::Traits >::check(L,1));
		if( !traits_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg traits in cef::CEFViewBase::CEFViewBase function");
		}
		const cef::CEFViewBase::Traits & traits=*traits_ptr;

		return new cef::CEFViewBase(traits);
	}

	// cef::CEFViewBase::CEFViewBase(lua_Table * data, const cef::CEFViewBase::Traits & traits)
	static cef::CEFViewBase* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in cef::CEFViewBase::CEFViewBase(lua_Table * data, const cef::CEFViewBase::Traits & traits) function, expected prototype:\ncef::CEFViewBase::CEFViewBase(lua_Table * data, const cef::CEFViewBase::Traits & traits)\nClass arguments details:\narg 2 ID = 59758032\n\n%s",luna_dumpStack(L).c_str());
		}

		const cef::CEFViewBase::Traits* traits_ptr=(Luna< cef::CEFViewBase::Traits >::check(L,2));
		if( !traits_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg traits in cef::CEFViewBase::CEFViewBase function");
		}
		const cef::CEFViewBase::Traits & traits=*traits_ptr;

		return new wrapper_cef_CEFViewBase(L,NULL, traits);
	}

	// Overload binder for cef::CEFViewBase::CEFViewBase
	static cef::CEFViewBase* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CEFViewBase, cannot match any of the overloads for function CEFViewBase:\n  CEFViewBase(const cef::CEFViewBase::Traits &)\n  CEFViewBase(lua_Table *, const cef::CEFViewBase::Traits &)\n");
		return NULL;
	}


	// Function binds:
	// bool cef::CEFViewBase::IsInitialized()
	static int _bind_IsInitialized(lua_State *L) {
		if (!_lg_typecheck_IsInitialized(L)) {
			luaL_error(L, "luna typecheck failed in bool cef::CEFViewBase::IsInitialized() function, expected prototype:\nbool cef::CEFViewBase::IsInitialized()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool cef::CEFViewBase::IsInitialized(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->IsInitialized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void cef::CEFViewBase::Initialize()
	static int _bind_Initialize(lua_State *L) {
		if (!_lg_typecheck_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFViewBase::Initialize() function, expected prototype:\nvoid cef::CEFViewBase::Initialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFViewBase::Initialize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Initialize();

		return 0;
	}

	// void cef::CEFViewBase::Uninitialize()
	static int _bind_Uninitialize(lua_State *L) {
		if (!_lg_typecheck_Uninitialize(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFViewBase::Uninitialize() function, expected prototype:\nvoid cef::CEFViewBase::Uninitialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFViewBase::Uninitialize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Uninitialize();

		return 0;
	}

	// bool cef::CEFViewBase::isBrowserReady()
	static int _bind_isBrowserReady(lua_State *L) {
		if (!_lg_typecheck_isBrowserReady(L)) {
			luaL_error(L, "luna typecheck failed in bool cef::CEFViewBase::isBrowserReady() function, expected prototype:\nbool cef::CEFViewBase::isBrowserReady()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool cef::CEFViewBase::isBrowserReady(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isBrowserReady();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void cef::CEFViewBase::Reload(bool nocache = false)
	static int _bind_Reload(lua_State *L) {
		if (!_lg_typecheck_Reload(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFViewBase::Reload(bool nocache = false) function, expected prototype:\nvoid cef::CEFViewBase::Reload(bool nocache = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool nocache=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFViewBase::Reload(bool). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Reload(nocache);

		return 0;
	}

	// void cef::CEFViewBase::PostMessage(CefRefPtr< CefProcessMessage > message)
	static int _bind_PostMessage(lua_State *L) {
		if (!_lg_typecheck_PostMessage(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFViewBase::PostMessage(CefRefPtr< CefProcessMessage > message) function, expected prototype:\nvoid cef::CEFViewBase::PostMessage(CefRefPtr< CefProcessMessage > message)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		CefRefPtr< CefProcessMessage > message = Luna< LunaTraits< CefProcessMessage >::parent_t >::checkSubType< CefProcessMessage >(L,2);

		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFViewBase::PostMessage(CefRefPtr< CefProcessMessage >). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PostMessage(message);

		return 0;
	}

	// int cef::CEFViewBase::CollectMessages(cef::CEFViewBase::MessageList * list)
	static int _bind_CollectMessages(lua_State *L) {
		if (!_lg_typecheck_CollectMessages(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFViewBase::CollectMessages(cef::CEFViewBase::MessageList * list) function, expected prototype:\nint cef::CEFViewBase::CollectMessages(cef::CEFViewBase::MessageList * list)\nClass arguments details:\narg 1 ID = 9597126\n\n%s",luna_dumpStack(L).c_str());
		}

		cef::CEFViewBase::MessageList* list=(Luna< std::vector< CefRefPtr< CefProcessMessage > > >::checkSubType< cef::CEFViewBase::MessageList >(L,2));

		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFViewBase::CollectMessages(cef::CEFViewBase::MessageList *). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->CollectMessages(list);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool cef::CEFViewBase::HasPendingMessage()
	static int _bind_HasPendingMessage(lua_State *L) {
		if (!_lg_typecheck_HasPendingMessage(L)) {
			luaL_error(L, "luna typecheck failed in bool cef::CEFViewBase::HasPendingMessage() function, expected prototype:\nbool cef::CEFViewBase::HasPendingMessage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool cef::CEFViewBase::HasPendingMessage(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->HasPendingMessage();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// CefRefPtr< CefProcessMessage > cef::CEFViewBase::GetPendingMessage()
	static int _bind_GetPendingMessage(lua_State *L) {
		if (!_lg_typecheck_GetPendingMessage(L)) {
			luaL_error(L, "luna typecheck failed in CefRefPtr< CefProcessMessage > cef::CEFViewBase::GetPendingMessage() function, expected prototype:\nCefRefPtr< CefProcessMessage > cef::CEFViewBase::GetPendingMessage()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call CefRefPtr< CefProcessMessage > cef::CEFViewBase::GetPendingMessage(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		CefRefPtr< CefProcessMessage > lret = self->GetPendingMessage();
		if(lret.get()) { 
	Luna< CefProcessMessage >::push(L,lret.get(),false);
} else { 
	lua_pushnil(L);
 }

		return 1;
	}

	// int cef::CEFViewBase::AddRef()
	static int _bind_AddRef(lua_State *L) {
		if (!_lg_typecheck_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFViewBase::AddRef() function, expected prototype:\nint cef::CEFViewBase::AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFViewBase::AddRef(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::CEFViewBase::Release()
	static int _bind_Release(lua_State *L) {
		if (!_lg_typecheck_Release(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFViewBase::Release() function, expected prototype:\nint cef::CEFViewBase::Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFViewBase::Release(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::CEFViewBase::GetRefCt()
	static int _bind_GetRefCt(lua_State *L) {
		if (!_lg_typecheck_GetRefCt(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFViewBase::GetRefCt() function, expected prototype:\nint cef::CEFViewBase::GetRefCt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFViewBase::GetRefCt(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->GetRefCt();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool cef::CEFViewBase::base_IsInitialized()
	static int _bind_base_IsInitialized(lua_State *L) {
		if (!_lg_typecheck_base_IsInitialized(L)) {
			luaL_error(L, "luna typecheck failed in bool cef::CEFViewBase::base_IsInitialized() function, expected prototype:\nbool cef::CEFViewBase::base_IsInitialized()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool cef::CEFViewBase::base_IsInitialized(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->CEFViewBase::IsInitialized();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void cef::CEFViewBase::base_Initialize()
	static int _bind_base_Initialize(lua_State *L) {
		if (!_lg_typecheck_base_Initialize(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFViewBase::base_Initialize() function, expected prototype:\nvoid cef::CEFViewBase::base_Initialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFViewBase::base_Initialize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CEFViewBase::Initialize();

		return 0;
	}

	// void cef::CEFViewBase::base_Uninitialize()
	static int _bind_base_Uninitialize(lua_State *L) {
		if (!_lg_typecheck_base_Uninitialize(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFViewBase::base_Uninitialize() function, expected prototype:\nvoid cef::CEFViewBase::base_Uninitialize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFViewBase::base_Uninitialize(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CEFViewBase::Uninitialize();

		return 0;
	}

	// int cef::CEFViewBase::base_AddRef()
	static int _bind_base_AddRef(lua_State *L) {
		if (!_lg_typecheck_base_AddRef(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFViewBase::base_AddRef() function, expected prototype:\nint cef::CEFViewBase::base_AddRef()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFViewBase::base_AddRef(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->CEFViewBase::AddRef();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::CEFViewBase::base_Release()
	static int _bind_base_Release(lua_State *L) {
		if (!_lg_typecheck_base_Release(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFViewBase::base_Release() function, expected prototype:\nint cef::CEFViewBase::base_Release()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFViewBase::base_Release(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->CEFViewBase::Release();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int cef::CEFViewBase::base_GetRefCt()
	static int _bind_base_GetRefCt(lua_State *L) {
		if (!_lg_typecheck_base_GetRefCt(L)) {
			luaL_error(L, "luna typecheck failed in int cef::CEFViewBase::base_GetRefCt() function, expected prototype:\nint cef::CEFViewBase::base_GetRefCt()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		cef::CEFViewBase* self=Luna< CefBase >::checkSubType< cef::CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int cef::CEFViewBase::base_GetRefCt(). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->CEFViewBase::GetRefCt();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

cef::CEFViewBase* LunaTraits< cef::CEFViewBase >::_bind_ctor(lua_State *L) {
	return luna_wrapper_cef_CEFViewBase::_bind_ctor(L);
}

void LunaTraits< cef::CEFViewBase >::_bind_dtor(cef::CEFViewBase* obj) {
	CefRefPtr<CefBase> refptr = obj;
}

const char LunaTraits< cef::CEFViewBase >::className[] = "CEFViewBase";
const char LunaTraits< cef::CEFViewBase >::fullName[] = "cef::CEFViewBase";
const char LunaTraits< cef::CEFViewBase >::moduleName[] = "cef";
const char* LunaTraits< cef::CEFViewBase >::parents[] = {"cef.CefBase", 0};
const int LunaTraits< cef::CEFViewBase >::hash = 96002828;
const int LunaTraits< cef::CEFViewBase >::uniqueIDs[] = {50549361,0};

luna_RegType LunaTraits< cef::CEFViewBase >::methods[] = {
	{"IsInitialized", &luna_wrapper_cef_CEFViewBase::_bind_IsInitialized},
	{"Initialize", &luna_wrapper_cef_CEFViewBase::_bind_Initialize},
	{"Uninitialize", &luna_wrapper_cef_CEFViewBase::_bind_Uninitialize},
	{"isBrowserReady", &luna_wrapper_cef_CEFViewBase::_bind_isBrowserReady},
	{"Reload", &luna_wrapper_cef_CEFViewBase::_bind_Reload},
	{"PostMessage", &luna_wrapper_cef_CEFViewBase::_bind_PostMessage},
	{"CollectMessages", &luna_wrapper_cef_CEFViewBase::_bind_CollectMessages},
	{"HasPendingMessage", &luna_wrapper_cef_CEFViewBase::_bind_HasPendingMessage},
	{"GetPendingMessage", &luna_wrapper_cef_CEFViewBase::_bind_GetPendingMessage},
	{"AddRef", &luna_wrapper_cef_CEFViewBase::_bind_AddRef},
	{"Release", &luna_wrapper_cef_CEFViewBase::_bind_Release},
	{"GetRefCt", &luna_wrapper_cef_CEFViewBase::_bind_GetRefCt},
	{"base_IsInitialized", &luna_wrapper_cef_CEFViewBase::_bind_base_IsInitialized},
	{"base_Initialize", &luna_wrapper_cef_CEFViewBase::_bind_base_Initialize},
	{"base_Uninitialize", &luna_wrapper_cef_CEFViewBase::_bind_base_Uninitialize},
	{"base_AddRef", &luna_wrapper_cef_CEFViewBase::_bind_base_AddRef},
	{"base_Release", &luna_wrapper_cef_CEFViewBase::_bind_base_Release},
	{"base_GetRefCt", &luna_wrapper_cef_CEFViewBase::_bind_base_GetRefCt},
	{"fromVoid", &luna_wrapper_cef_CEFViewBase::_bind_fromVoid},
	{"asVoid", &luna_wrapper_cef_CEFViewBase::_bind_asVoid},
	{"getTable", &luna_wrapper_cef_CEFViewBase::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< cef::CEFViewBase >::converters[] = {
	{"CefBase", &luna_wrapper_cef_CEFViewBase::_cast_from_CefBase},
	{0,0}
};

luna_RegEnumType LunaTraits< cef::CEFViewBase >::enumValues[] = {
	{0,0}
};


