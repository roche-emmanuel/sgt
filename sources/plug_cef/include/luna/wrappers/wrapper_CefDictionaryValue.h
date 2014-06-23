#ifndef _WRAPPERS_WRAPPER_CEFDICTIONARYVALUE_H_
#define _WRAPPERS_WRAPPER_CEFDICTIONARYVALUE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <cef_values.h>

class wrapper_CefDictionaryValue : public CefDictionaryValue, public luna_wrapper_base {

public:
		

	~wrapper_CefDictionaryValue() {
		logDEBUG3("Calling delete function for wrapper CefDictionaryValue");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((CefDictionaryValue*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_CefDictionaryValue(lua_State* L, lua_Table* dum) 
		: CefDictionaryValue(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((CefDictionaryValue*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// int CefBase::AddRef()
	int AddRef() {
		THROW_IF(!_obj.pushFunction("AddRef"),"No implementation for abstract function CefBase::AddRef");
		_obj.pushArg((CefDictionaryValue*)this);
		return (_obj.callFunction<int>());
	};

	// int CefBase::Release()
	int Release() {
		THROW_IF(!_obj.pushFunction("Release"),"No implementation for abstract function CefBase::Release");
		_obj.pushArg((CefDictionaryValue*)this);
		return (_obj.callFunction<int>());
	};

	// int CefBase::GetRefCt()
	int GetRefCt() {
		THROW_IF(!_obj.pushFunction("GetRefCt"),"No implementation for abstract function CefBase::GetRefCt");
		_obj.pushArg((CefDictionaryValue*)this);
		return (_obj.callFunction<int>());
	};

	// bool CefDictionaryValue::IsValid()
	bool IsValid() {
		THROW_IF(!_obj.pushFunction("IsValid"),"No implementation for abstract function CefDictionaryValue::IsValid");
		_obj.pushArg((CefDictionaryValue*)this);
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::IsOwned()
	bool IsOwned() {
		THROW_IF(!_obj.pushFunction("IsOwned"),"No implementation for abstract function CefDictionaryValue::IsOwned");
		_obj.pushArg((CefDictionaryValue*)this);
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::IsReadOnly()
	bool IsReadOnly() {
		THROW_IF(!_obj.pushFunction("IsReadOnly"),"No implementation for abstract function CefDictionaryValue::IsReadOnly");
		_obj.pushArg((CefDictionaryValue*)this);
		return (_obj.callFunction<bool>());
	};

	// CefRefPtr< CefDictionaryValue > CefDictionaryValue::Copy(bool exclude_empty_children)
	CefRefPtr< CefDictionaryValue > Copy(bool exclude_empty_children) {
		THROW_IF(!_obj.pushFunction("Copy"),"No implementation for abstract function CefDictionaryValue::Copy");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(exclude_empty_children);
		return _obj.callFunction< CefDictionaryValue* >();
	};

	// size_t CefDictionaryValue::GetSize()
	size_t GetSize() {
		THROW_IF(!_obj.pushFunction("GetSize"),"No implementation for abstract function CefDictionaryValue::GetSize");
		_obj.pushArg((CefDictionaryValue*)this);
		return (_obj.callFunction<size_t>());
	};

	// bool CefDictionaryValue::Clear()
	bool Clear() {
		THROW_IF(!_obj.pushFunction("Clear"),"No implementation for abstract function CefDictionaryValue::Clear");
		_obj.pushArg((CefDictionaryValue*)this);
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::HasKey(const CefString & key)
	bool HasKey(const CefString & key) {
		THROW_IF(!_obj.pushFunction("HasKey"),"No implementation for abstract function CefDictionaryValue::HasKey");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::GetKeys(CefDictionaryValue::KeyList & keys)
	bool GetKeys(CefDictionaryValue::KeyList & keys) {
		THROW_IF(!_obj.pushFunction("GetKeys"),"No implementation for abstract function CefDictionaryValue::GetKeys");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(&keys);
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::Remove(const CefString & key)
	bool Remove(const CefString & key) {
		THROW_IF(!_obj.pushFunction("Remove"),"No implementation for abstract function CefDictionaryValue::Remove");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		return (_obj.callFunction<bool>());
	};

	// cef_value_type_t CefDictionaryValue::GetType(const CefString & key)
	cef_value_type_t GetType(const CefString & key) {
		THROW_IF(!_obj.pushFunction("GetType"),"No implementation for abstract function CefDictionaryValue::GetType");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		return (cef_value_type_t)(_obj.callFunction<int>());
	};

	// bool CefDictionaryValue::GetBool(const CefString & key)
	bool GetBool(const CefString & key) {
		THROW_IF(!_obj.pushFunction("GetBool"),"No implementation for abstract function CefDictionaryValue::GetBool");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		return (_obj.callFunction<bool>());
	};

	// int CefDictionaryValue::GetInt(const CefString & key)
	int GetInt(const CefString & key) {
		THROW_IF(!_obj.pushFunction("GetInt"),"No implementation for abstract function CefDictionaryValue::GetInt");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		return (_obj.callFunction<int>());
	};

	// double CefDictionaryValue::GetDouble(const CefString & key)
	double GetDouble(const CefString & key) {
		THROW_IF(!_obj.pushFunction("GetDouble"),"No implementation for abstract function CefDictionaryValue::GetDouble");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		return (_obj.callFunction<double>());
	};

	// CefString CefDictionaryValue::GetString(const CefString & key)
	CefString GetString(const CefString & key) {
		THROW_IF(!_obj.pushFunction("GetString"),"No implementation for abstract function CefDictionaryValue::GetString");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		return (_obj.callFunction<CefString>());
	};

	// CefRefPtr< CefBinaryValue > CefDictionaryValue::GetBinary(const CefString & key)
	CefRefPtr< CefBinaryValue > GetBinary(const CefString & key) {
		THROW_IF(!_obj.pushFunction("GetBinary"),"No implementation for abstract function CefDictionaryValue::GetBinary");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		return _obj.callFunction< CefBinaryValue* >();
	};

	// CefRefPtr< CefDictionaryValue > CefDictionaryValue::GetDictionary(const CefString & key)
	CefRefPtr< CefDictionaryValue > GetDictionary(const CefString & key) {
		THROW_IF(!_obj.pushFunction("GetDictionary"),"No implementation for abstract function CefDictionaryValue::GetDictionary");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		return _obj.callFunction< CefDictionaryValue* >();
	};

	// CefRefPtr< CefListValue > CefDictionaryValue::GetList(const CefString & key)
	CefRefPtr< CefListValue > GetList(const CefString & key) {
		THROW_IF(!_obj.pushFunction("GetList"),"No implementation for abstract function CefDictionaryValue::GetList");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		return _obj.callFunction< CefListValue* >();
	};

	// bool CefDictionaryValue::SetNull(const CefString & key)
	bool SetNull(const CefString & key) {
		THROW_IF(!_obj.pushFunction("SetNull"),"No implementation for abstract function CefDictionaryValue::SetNull");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::SetBool(const CefString & key, bool value)
	bool SetBool(const CefString & key, bool value) {
		THROW_IF(!_obj.pushFunction("SetBool"),"No implementation for abstract function CefDictionaryValue::SetBool");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		_obj.pushArg(value);
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::SetInt(const CefString & key, int value)
	bool SetInt(const CefString & key, int value) {
		THROW_IF(!_obj.pushFunction("SetInt"),"No implementation for abstract function CefDictionaryValue::SetInt");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		_obj.pushArg(value);
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::SetDouble(const CefString & key, double value)
	bool SetDouble(const CefString & key, double value) {
		THROW_IF(!_obj.pushFunction("SetDouble"),"No implementation for abstract function CefDictionaryValue::SetDouble");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		_obj.pushArg(value);
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::SetString(const CefString & key, const CefString & value)
	bool SetString(const CefString & key, const CefString & value) {
		THROW_IF(!_obj.pushFunction("SetString"),"No implementation for abstract function CefDictionaryValue::SetString");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		_obj.pushArg(value);
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::SetBinary(const CefString & key, CefRefPtr< CefBinaryValue > value)
	bool SetBinary(const CefString & key, CefRefPtr< CefBinaryValue > value) {
		THROW_IF(!_obj.pushFunction("SetBinary"),"No implementation for abstract function CefDictionaryValue::SetBinary");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		_obj.pushArg((CefBinaryValue*)value.get());
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::SetDictionary(const CefString & key, CefRefPtr< CefDictionaryValue > value)
	bool SetDictionary(const CefString & key, CefRefPtr< CefDictionaryValue > value) {
		THROW_IF(!_obj.pushFunction("SetDictionary"),"No implementation for abstract function CefDictionaryValue::SetDictionary");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
		_obj.pushArg((CefDictionaryValue*)value.get());
		return (_obj.callFunction<bool>());
	};

	// bool CefDictionaryValue::SetList(const CefString & key, CefRefPtr< CefListValue > value)
	bool SetList(const CefString & key, CefRefPtr< CefListValue > value) {
		THROW_IF(!_obj.pushFunction("SetList"),"No implementation for abstract function CefDictionaryValue::SetList");
		_obj.pushArg((CefDictionaryValue*)this);
		_obj.pushArg(key);
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

