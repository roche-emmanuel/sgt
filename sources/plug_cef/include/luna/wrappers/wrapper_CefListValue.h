#ifndef _WRAPPERS_WRAPPER_CEFLISTVALUE_H_
#define _WRAPPERS_WRAPPER_CEFLISTVALUE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <cef_values.h>

class wrapper_CefListValue : public CefListValue, public luna_wrapper_base {

public:
		

	~wrapper_CefListValue() {
		logDEBUG3("Calling delete function for wrapper CefListValue");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((CefListValue*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_CefListValue(lua_State* L, lua_Table* dum) 
		: CefListValue(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((CefListValue*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int CefBase::AddRef()
	int AddRef() {
		THROW_IF(!_obj.pushFunction("AddRef"),"No implementation for abstract function CefBase::AddRef");
		_obj.pushArg((CefListValue*)this);
		return (_obj.callFunction<int>());
	};

	// int CefBase::Release()
	int Release() {
		THROW_IF(!_obj.pushFunction("Release"),"No implementation for abstract function CefBase::Release");
		_obj.pushArg((CefListValue*)this);
		return (_obj.callFunction<int>());
	};

	// int CefBase::GetRefCt()
	int GetRefCt() {
		THROW_IF(!_obj.pushFunction("GetRefCt"),"No implementation for abstract function CefBase::GetRefCt");
		_obj.pushArg((CefListValue*)this);
		return (_obj.callFunction<int>());
	};

	// bool CefListValue::IsValid()
	bool IsValid() {
		THROW_IF(!_obj.pushFunction("IsValid"),"No implementation for abstract function CefListValue::IsValid");
		_obj.pushArg((CefListValue*)this);
		return (_obj.callFunction<bool>());
	};

	// bool CefListValue::IsOwned()
	bool IsOwned() {
		THROW_IF(!_obj.pushFunction("IsOwned"),"No implementation for abstract function CefListValue::IsOwned");
		_obj.pushArg((CefListValue*)this);
		return (_obj.callFunction<bool>());
	};

	// bool CefListValue::IsReadOnly()
	bool IsReadOnly() {
		THROW_IF(!_obj.pushFunction("IsReadOnly"),"No implementation for abstract function CefListValue::IsReadOnly");
		_obj.pushArg((CefListValue*)this);
		return (_obj.callFunction<bool>());
	};

	// CefRefPtr< CefListValue > CefListValue::Copy()
	CefRefPtr< CefListValue > Copy() {
		THROW_IF(!_obj.pushFunction("Copy"),"No implementation for abstract function CefListValue::Copy");
		_obj.pushArg((CefListValue*)this);
		return _obj.callFunction< CefListValue* >();
	};

	// bool CefListValue::SetSize(size_t size)
	bool SetSize(size_t size) {
		THROW_IF(!_obj.pushFunction("SetSize"),"No implementation for abstract function CefListValue::SetSize");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(size);
		return (_obj.callFunction<bool>());
	};

	// size_t CefListValue::GetSize()
	size_t GetSize() {
		THROW_IF(!_obj.pushFunction("GetSize"),"No implementation for abstract function CefListValue::GetSize");
		_obj.pushArg((CefListValue*)this);
		return (_obj.callFunction<size_t>());
	};

	// bool CefListValue::Clear()
	bool Clear() {
		THROW_IF(!_obj.pushFunction("Clear"),"No implementation for abstract function CefListValue::Clear");
		_obj.pushArg((CefListValue*)this);
		return (_obj.callFunction<bool>());
	};

	// bool CefListValue::Remove(int index)
	bool Remove(int index) {
		THROW_IF(!_obj.pushFunction("Remove"),"No implementation for abstract function CefListValue::Remove");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<bool>());
	};

	// cef_value_type_t CefListValue::GetType(int index)
	cef_value_type_t GetType(int index) {
		THROW_IF(!_obj.pushFunction("GetType"),"No implementation for abstract function CefListValue::GetType");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		return (cef_value_type_t)(_obj.callFunction<int>());
	};

	// bool CefListValue::GetBool(int index)
	bool GetBool(int index) {
		THROW_IF(!_obj.pushFunction("GetBool"),"No implementation for abstract function CefListValue::GetBool");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<bool>());
	};

	// int CefListValue::GetInt(int index)
	int GetInt(int index) {
		THROW_IF(!_obj.pushFunction("GetInt"),"No implementation for abstract function CefListValue::GetInt");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<int>());
	};

	// double CefListValue::GetDouble(int index)
	double GetDouble(int index) {
		THROW_IF(!_obj.pushFunction("GetDouble"),"No implementation for abstract function CefListValue::GetDouble");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<double>());
	};

	// CefString CefListValue::GetString(int index)
	CefString GetString(int index) {
		THROW_IF(!_obj.pushFunction("GetString"),"No implementation for abstract function CefListValue::GetString");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<CefString>());
	};

	// CefRefPtr< CefBinaryValue > CefListValue::GetBinary(int index)
	CefRefPtr< CefBinaryValue > GetBinary(int index) {
		THROW_IF(!_obj.pushFunction("GetBinary"),"No implementation for abstract function CefListValue::GetBinary");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		return _obj.callFunction< CefBinaryValue* >();
	};

	// CefRefPtr< CefDictionaryValue > CefListValue::GetDictionary(int index)
	CefRefPtr< CefDictionaryValue > GetDictionary(int index) {
		THROW_IF(!_obj.pushFunction("GetDictionary"),"No implementation for abstract function CefListValue::GetDictionary");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		return _obj.callFunction< CefDictionaryValue* >();
	};

	// CefRefPtr< CefListValue > CefListValue::GetList(int index)
	CefRefPtr< CefListValue > GetList(int index) {
		THROW_IF(!_obj.pushFunction("GetList"),"No implementation for abstract function CefListValue::GetList");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		return _obj.callFunction< CefListValue* >();
	};

	// bool CefListValue::SetNull(int index)
	bool SetNull(int index) {
		THROW_IF(!_obj.pushFunction("SetNull"),"No implementation for abstract function CefListValue::SetNull");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<bool>());
	};

	// bool CefListValue::SetBool(int index, bool value)
	bool SetBool(int index, bool value) {
		THROW_IF(!_obj.pushFunction("SetBool"),"No implementation for abstract function CefListValue::SetBool");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		_obj.pushArg(value);
		return (_obj.callFunction<bool>());
	};

	// bool CefListValue::SetInt(int index, int value)
	bool SetInt(int index, int value) {
		THROW_IF(!_obj.pushFunction("SetInt"),"No implementation for abstract function CefListValue::SetInt");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		_obj.pushArg(value);
		return (_obj.callFunction<bool>());
	};

	// bool CefListValue::SetDouble(int index, double value)
	bool SetDouble(int index, double value) {
		THROW_IF(!_obj.pushFunction("SetDouble"),"No implementation for abstract function CefListValue::SetDouble");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		_obj.pushArg(value);
		return (_obj.callFunction<bool>());
	};

	// bool CefListValue::SetString(int index, const CefString & value)
	bool SetString(int index, const CefString & value) {
		THROW_IF(!_obj.pushFunction("SetString"),"No implementation for abstract function CefListValue::SetString");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		_obj.pushArg(value);
		return (_obj.callFunction<bool>());
	};

	// bool CefListValue::SetBinary(int index, CefRefPtr< CefBinaryValue > value)
	bool SetBinary(int index, CefRefPtr< CefBinaryValue > value) {
		THROW_IF(!_obj.pushFunction("SetBinary"),"No implementation for abstract function CefListValue::SetBinary");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		_obj.pushArg((CefBinaryValue*)value.get());
		return (_obj.callFunction<bool>());
	};

	// bool CefListValue::SetDictionary(int index, CefRefPtr< CefDictionaryValue > value)
	bool SetDictionary(int index, CefRefPtr< CefDictionaryValue > value) {
		THROW_IF(!_obj.pushFunction("SetDictionary"),"No implementation for abstract function CefListValue::SetDictionary");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		_obj.pushArg((CefDictionaryValue*)value.get());
		return (_obj.callFunction<bool>());
	};

	// bool CefListValue::SetList(int index, CefRefPtr< CefListValue > value)
	bool SetList(int index, CefRefPtr< CefListValue > value) {
		THROW_IF(!_obj.pushFunction("SetList"),"No implementation for abstract function CefListValue::SetList");
		_obj.pushArg((CefListValue*)this);
		_obj.pushArg(index);
		_obj.pushArg((CefListValue*)value.get());
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

