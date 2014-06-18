#ifndef _WRAPPERS_WRAPPER_CEF_DX_RENDERTARGET_H_
#define _WRAPPERS_WRAPPER_CEF_DX_RENDERTARGET_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <DX9RenderTarget.h>

class wrapper_cef_DX9RenderTarget : public cef::DX9RenderTarget, public luna_wrapper_base {

public:
		

	~wrapper_cef_DX9RenderTarget() {
		logDEBUG3("Calling delete function for wrapper cef_DX9RenderTarget");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((cef::DX9RenderTarget*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_cef_DX9RenderTarget(lua_State* L, lua_Table* dum, IDirect3DDevice9 * device, int width, int height) 
		: cef::DX9RenderTarget(device, width, height), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((cef::DX9RenderTarget*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int cef::RenderTarget::GetWidth()
	int GetWidth() {
		if(_obj.pushFunction("GetWidth")) {
			_obj.pushArg((cef::DX9RenderTarget*)this);
			return (_obj.callFunction<int>());
		}

		return DX9RenderTarget::GetWidth();
	};

	// int cef::RenderTarget::GetHeight()
	int GetHeight() {
		if(_obj.pushFunction("GetHeight")) {
			_obj.pushArg((cef::DX9RenderTarget*)this);
			return (_obj.callFunction<int>());
		}

		return DX9RenderTarget::GetHeight();
	};

	// int cef::RenderTarget::AddRef()
	int AddRef() {
		if(_obj.pushFunction("AddRef")) {
			_obj.pushArg((cef::DX9RenderTarget*)this);
			return (_obj.callFunction<int>());
		}

		return DX9RenderTarget::AddRef();
	};

	// int cef::RenderTarget::Release()
	int Release() {
		if(_obj.pushFunction("Release")) {
			_obj.pushArg((cef::DX9RenderTarget*)this);
			return (_obj.callFunction<int>());
		}

		return DX9RenderTarget::Release();
	};

	// int cef::RenderTarget::GetRefCt()
	int GetRefCt() {
		if(_obj.pushFunction("GetRefCt")) {
			_obj.pushArg((cef::DX9RenderTarget*)this);
			return (_obj.callFunction<int>());
		}

		return DX9RenderTarget::GetRefCt();
	};

	// void cef::DX9RenderTarget::Initialize()
	void Initialize() {
		if(_obj.pushFunction("Initialize")) {
			_obj.pushArg((cef::DX9RenderTarget*)this);
			return (_obj.callFunction<void>());
		}

		return DX9RenderTarget::Initialize();
	};

	// void cef::DX9RenderTarget::Uninitialize()
	void Uninitialize() {
		if(_obj.pushFunction("Uninitialize")) {
			_obj.pushArg((cef::DX9RenderTarget*)this);
			return (_obj.callFunction<void>());
		}

		return DX9RenderTarget::Uninitialize();
	};

	// bool cef::DX9RenderTarget::IsInitialized()
	bool IsInitialized() {
		if(_obj.pushFunction("IsInitialized")) {
			_obj.pushArg((cef::DX9RenderTarget*)this);
			return (_obj.callFunction<bool>());
		}

		return DX9RenderTarget::IsInitialized();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

