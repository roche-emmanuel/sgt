#ifndef _WRAPPERS_WRAPPER_CEFBASE_H_
#define _WRAPPERS_WRAPPER_CEFBASE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <cef_base.h>

class wrapper_CefBase : public CefBase, public luna_wrapper_base {

public:
		

	~wrapper_CefBase() {
		logDEBUG3("Calling delete function for wrapper CefBase");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((CefBase*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_CefBase(lua_State* L, lua_Table* dum) 
		: CefBase(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((CefBase*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int CefBase::AddRef()
	int AddRef() {
		THROW_IF(!_obj.pushFunction("AddRef"),"No implementation for abstract function CefBase::AddRef");
		_obj.pushArg((CefBase*)this);
		return (_obj.callFunction<int>());
	};

	// int CefBase::Release()
	int Release() {
		THROW_IF(!_obj.pushFunction("Release"),"No implementation for abstract function CefBase::Release");
		_obj.pushArg((CefBase*)this);
		return (_obj.callFunction<int>());
	};

	// int CefBase::GetRefCt()
	int GetRefCt() {
		THROW_IF(!_obj.pushFunction("GetRefCt"),"No implementation for abstract function CefBase::GetRefCt");
		_obj.pushArg((CefBase*)this);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

