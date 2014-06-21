#ifndef _WRAPPERS_WRAPPER_CEF_DX_CEFMANAGER_H_
#define _WRAPPERS_WRAPPER_CEF_DX_CEFMANAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <DX9CEFManager.h>

class wrapper_cef_DX9CEFManager : public cef::DX9CEFManager, public luna_wrapper_base {

public:
		

	~wrapper_cef_DX9CEFManager() {
		logDEBUG3("Calling delete function for wrapper cef_DX9CEFManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((cef::DX9CEFManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_cef_DX9CEFManager(lua_State* L, lua_Table* dum, const cef::CEFManager::Traits & traits, IDirect3DDevice9 * device) 
		: cef::DX9CEFManager(traits, device), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((cef::DX9CEFManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// cef::CEFViewBase * cef::DX9CEFManager::DoCreateView(const cef::CEFViewBase::Traits & traits)
	cef::CEFViewBase * DoCreateView(const cef::CEFViewBase::Traits & traits) {
		if(_obj.pushFunction("DoCreateView")) {
			_obj.pushArg((cef::DX9CEFManager*)this);
			_obj.pushArg(&traits);
			return (_obj.callFunction<cef::CEFViewBase*>());
		}

		return DX9CEFManager::DoCreateView(traits);
	};

public:
	// Public virtual methods:
	// int cef::CEFManager::AddRef()
	int AddRef() {
		if(_obj.pushFunction("AddRef")) {
			_obj.pushArg((cef::DX9CEFManager*)this);
			return (_obj.callFunction<int>());
		}

		return DX9CEFManager::AddRef();
	};

	// int cef::CEFManager::Release()
	int Release() {
		if(_obj.pushFunction("Release")) {
			_obj.pushArg((cef::DX9CEFManager*)this);
			return (_obj.callFunction<int>());
		}

		return DX9CEFManager::Release();
	};

	// int cef::CEFManager::GetRefCt()
	int GetRefCt() {
		if(_obj.pushFunction("GetRefCt")) {
			_obj.pushArg((cef::DX9CEFManager*)this);
			return (_obj.callFunction<int>());
		}

		return DX9CEFManager::GetRefCt();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

