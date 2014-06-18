#ifndef _WRAPPERS_WRAPPER_CEF_CEFVIEWBASE_H_
#define _WRAPPERS_WRAPPER_CEF_CEFVIEWBASE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <CEFViewBase.h>

class wrapper_cef_CEFViewBase : public cef::CEFViewBase, public luna_wrapper_base {

public:
		

	~wrapper_cef_CEFViewBase() {
		logDEBUG3("Calling delete function for wrapper cef_CEFViewBase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((cef::CEFViewBase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_cef_CEFViewBase(lua_State* L, lua_Table* dum, const cef::CEFViewBase::Traits & traits) 
		: cef::CEFViewBase(traits), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((cef::CEFViewBase*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool cef::CEFViewBase::IsInitialized()
	bool IsInitialized() {
		if(_obj.pushFunction("IsInitialized")) {
			_obj.pushArg((cef::CEFViewBase*)this);
			return (_obj.callFunction<bool>());
		}

		return CEFViewBase::IsInitialized();
	};

	// void cef::CEFViewBase::Initialize()
	void Initialize() {
		if(_obj.pushFunction("Initialize")) {
			_obj.pushArg((cef::CEFViewBase*)this);
			return (_obj.callFunction<void>());
		}

		return CEFViewBase::Initialize();
	};

	// void cef::CEFViewBase::Uninitialize()
	void Uninitialize() {
		if(_obj.pushFunction("Uninitialize")) {
			_obj.pushArg((cef::CEFViewBase*)this);
			return (_obj.callFunction<void>());
		}

		return CEFViewBase::Uninitialize();
	};

	// int cef::CEFViewBase::AddRef()
	int AddRef() {
		if(_obj.pushFunction("AddRef")) {
			_obj.pushArg((cef::CEFViewBase*)this);
			return (_obj.callFunction<int>());
		}

		return CEFViewBase::AddRef();
	};

	// int cef::CEFViewBase::Release()
	int Release() {
		if(_obj.pushFunction("Release")) {
			_obj.pushArg((cef::CEFViewBase*)this);
			return (_obj.callFunction<int>());
		}

		return CEFViewBase::Release();
	};

	// int cef::CEFViewBase::GetRefCt()
	int GetRefCt() {
		if(_obj.pushFunction("GetRefCt")) {
			_obj.pushArg((cef::CEFViewBase*)this);
			return (_obj.callFunction<int>());
		}

		return CEFViewBase::GetRefCt();
	};


	// Protected non-virtual methods:
	// void cef::CEFViewBase::CreateBrowser(const cef::CEFViewBase::Traits & traits, cef::RenderTarget * tgt)
	void public_CreateBrowser(const cef::CEFViewBase::Traits & traits, cef::RenderTarget * tgt) {
		return cef::CEFViewBase::CreateBrowser(traits, tgt);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_CreateBrowser(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,59758032) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50549361)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void cef::CEFViewBase::public_CreateBrowser(const cef::CEFViewBase::Traits & traits, cef::RenderTarget * tgt)
	static int _bind_public_CreateBrowser(lua_State *L) {
		if (!_lg_typecheck_public_CreateBrowser(L)) {
			luaL_error(L, "luna typecheck failed in void cef::CEFViewBase::public_CreateBrowser(const cef::CEFViewBase::Traits & traits, cef::RenderTarget * tgt) function, expected prototype:\nvoid cef::CEFViewBase::public_CreateBrowser(const cef::CEFViewBase::Traits & traits, cef::RenderTarget * tgt)\nClass arguments details:\narg 1 ID = 59758032\narg 2 ID = 50549361\n\n%s",luna_dumpStack(L).c_str());
		}

		const cef::CEFViewBase::Traits* traits_ptr=(Luna< cef::CEFViewBase::Traits >::check(L,2));
		if( !traits_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg traits in cef::CEFViewBase::public_CreateBrowser function");
		}
		const cef::CEFViewBase::Traits & traits=*traits_ptr;
		cef::RenderTarget* tgt=(Luna< CefBase >::checkSubType< cef::RenderTarget >(L,3));

		wrapper_cef_CEFViewBase* self=Luna< CefBase >::checkSubType< wrapper_cef_CEFViewBase >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void cef::CEFViewBase::public_CreateBrowser(const cef::CEFViewBase::Traits &, cef::RenderTarget *). Got : '%s'\n%s",typeid(Luna< CefBase >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_CreateBrowser(traits, tgt);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"CreateBrowser",_bind_public_CreateBrowser},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

