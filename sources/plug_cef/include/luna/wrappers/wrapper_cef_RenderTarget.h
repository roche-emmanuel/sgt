#ifndef _WRAPPERS_WRAPPER_CEF_RENDERTARGET_H_
#define _WRAPPERS_WRAPPER_CEF_RENDERTARGET_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <RenderTarget.h>

class wrapper_cef_RenderTarget : public cef::RenderTarget, public luna_wrapper_base {

public:
		

	~wrapper_cef_RenderTarget() {
		logDEBUG3("Calling delete function for wrapper cef_RenderTarget");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((cef::RenderTarget*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_cef_RenderTarget(lua_State* L, lua_Table* dum) 
		: cef::RenderTarget(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((cef::RenderTarget*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int cef::RenderTarget::GetWidth()
	int GetWidth() {
		if(_obj.pushFunction("GetWidth")) {
			_obj.pushArg((cef::RenderTarget*)this);
			return (_obj.callFunction<int>());
		}

		return RenderTarget::GetWidth();
	};

	// int cef::RenderTarget::GetHeight()
	int GetHeight() {
		if(_obj.pushFunction("GetHeight")) {
			_obj.pushArg((cef::RenderTarget*)this);
			return (_obj.callFunction<int>());
		}

		return RenderTarget::GetHeight();
	};

	// void cef::RenderTarget::Initialize()
	void Initialize() {
		THROW_IF(!_obj.pushFunction("Initialize"),"No implementation for abstract function cef::RenderTarget::Initialize");
		_obj.pushArg((cef::RenderTarget*)this);
		return (_obj.callFunction<void>());
	};

	// void cef::RenderTarget::Uninitialize()
	void Uninitialize() {
		THROW_IF(!_obj.pushFunction("Uninitialize"),"No implementation for abstract function cef::RenderTarget::Uninitialize");
		_obj.pushArg((cef::RenderTarget*)this);
		return (_obj.callFunction<void>());
	};

	// bool cef::RenderTarget::IsInitialized()
	bool IsInitialized() {
		THROW_IF(!_obj.pushFunction("IsInitialized"),"No implementation for abstract function cef::RenderTarget::IsInitialized");
		_obj.pushArg((cef::RenderTarget*)this);
		return (_obj.callFunction<bool>());
	};

	// int cef::RenderTarget::AddRef()
	int AddRef() {
		if(_obj.pushFunction("AddRef")) {
			_obj.pushArg((cef::RenderTarget*)this);
			return (_obj.callFunction<int>());
		}

		return RenderTarget::AddRef();
	};

	// int cef::RenderTarget::Release()
	int Release() {
		if(_obj.pushFunction("Release")) {
			_obj.pushArg((cef::RenderTarget*)this);
			return (_obj.callFunction<int>());
		}

		return RenderTarget::Release();
	};

	// int cef::RenderTarget::GetRefCt()
	int GetRefCt() {
		if(_obj.pushFunction("GetRefCt")) {
			_obj.pushArg((cef::RenderTarget*)this);
			return (_obj.callFunction<int>());
		}

		return RenderTarget::GetRefCt();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

