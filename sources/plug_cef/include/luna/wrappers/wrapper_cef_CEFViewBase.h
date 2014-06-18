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

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

