#ifndef _WRAPPERS_WRAPPER_CEF_CEFMANAGER_H_
#define _WRAPPERS_WRAPPER_CEF_CEFMANAGER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <CEFManager.h>

class wrapper_cef_CEFManager : public cef::CEFManager, public luna_wrapper_base {

public:
		

	~wrapper_cef_CEFManager() {
		logDEBUG3("Calling delete function for wrapper cef_CEFManager");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((cef::CEFManager*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_cef_CEFManager(lua_State* L, lua_Table* dum, const cef::CEFManager::Traits & traits) 
		: cef::CEFManager(traits), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((cef::CEFManager*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// cef::CEFViewBase * cef::CEFManager::DoCreateView(const cef::CEFViewBase::Traits & traits)
	cef::CEFViewBase * DoCreateView(const cef::CEFViewBase::Traits & traits) {
		THROW_IF(!_obj.pushFunction("DoCreateView"),"No implementation for abstract function cef::CEFManager::DoCreateView");
		_obj.pushArg((cef::CEFManager*)this);
		_obj.pushArg(&traits);
		return (_obj.callFunction<cef::CEFViewBase*>());
	};

public:
	// Public virtual methods:
	// int cef::CEFManager::AddRef()
	int AddRef() {
		if(_obj.pushFunction("AddRef")) {
			_obj.pushArg((cef::CEFManager*)this);
			return (_obj.callFunction<int>());
		}

		return CEFManager::AddRef();
	};

	// int cef::CEFManager::Release()
	int Release() {
		if(_obj.pushFunction("Release")) {
			_obj.pushArg((cef::CEFManager*)this);
			return (_obj.callFunction<int>());
		}

		return CEFManager::Release();
	};

	// int cef::CEFManager::GetRefCt()
	int GetRefCt() {
		if(_obj.pushFunction("GetRefCt")) {
			_obj.pushArg((cef::CEFManager*)this);
			return (_obj.callFunction<int>());
		}

		return CEFManager::GetRefCt();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

