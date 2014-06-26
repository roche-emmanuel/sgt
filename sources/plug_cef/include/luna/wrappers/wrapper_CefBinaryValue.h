#ifndef _WRAPPERS_WRAPPER_CEFBINARYVALUE_H_
#define _WRAPPERS_WRAPPER_CEFBINARYVALUE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <cef_values.h>

class wrapper_CefBinaryValue : public CefBinaryValue, public luna_wrapper_base {

public:
		

	~wrapper_CefBinaryValue() {
		logDEBUG3("Calling delete function for wrapper CefBinaryValue");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((CefBinaryValue*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_CefBinaryValue(lua_State* L, lua_Table* dum) 
		: CefBinaryValue(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((CefBinaryValue*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool CefBinaryValue::IsValid()
	bool IsValid() {
		THROW_IF(!_obj.pushFunction("IsValid"),"No implementation for abstract function CefBinaryValue::IsValid");
		_obj.pushArg((CefBinaryValue*)this);
		return (_obj.callFunction<bool>());
	};

	// bool CefBinaryValue::IsOwned()
	bool IsOwned() {
		THROW_IF(!_obj.pushFunction("IsOwned"),"No implementation for abstract function CefBinaryValue::IsOwned");
		_obj.pushArg((CefBinaryValue*)this);
		return (_obj.callFunction<bool>());
	};

	// CefRefPtr< CefBinaryValue > CefBinaryValue::Copy()
	CefRefPtr< CefBinaryValue > Copy() {
		THROW_IF(!_obj.pushFunction("Copy"),"No implementation for abstract function CefBinaryValue::Copy");
		_obj.pushArg((CefBinaryValue*)this);
		return _obj.callFunction< CefBinaryValue* >();
	};

	// size_t CefBinaryValue::GetSize()
	size_t GetSize() {
		THROW_IF(!_obj.pushFunction("GetSize"),"No implementation for abstract function CefBinaryValue::GetSize");
		_obj.pushArg((CefBinaryValue*)this);
		return (_obj.callFunction<size_t>());
	};

	// size_t CefBinaryValue::GetData(void * buffer, size_t buffer_size, size_t data_offset)
	size_t GetData(void * buffer, size_t buffer_size, size_t data_offset) {
		THROW_IF(!_obj.pushFunction("GetData"),"No implementation for abstract function CefBinaryValue::GetData");
		_obj.pushArg((CefBinaryValue*)this);
		_obj.pushArg(buffer);
		_obj.pushArg(buffer_size);
		_obj.pushArg(data_offset);
		return (_obj.callFunction<size_t>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

