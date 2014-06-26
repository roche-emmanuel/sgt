#ifndef _WRAPPERS_WRAPPER_CEFPROCESSMESSAGE_H_
#define _WRAPPERS_WRAPPER_CEFPROCESSMESSAGE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <cef_process_message.h>

class wrapper_CefProcessMessage : public CefProcessMessage, public luna_wrapper_base {

public:
		

	~wrapper_CefProcessMessage() {
		logDEBUG3("Calling delete function for wrapper CefProcessMessage");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((CefProcessMessage*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_CefProcessMessage(lua_State* L, lua_Table* dum) 
		: CefProcessMessage(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((CefProcessMessage*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool CefProcessMessage::IsValid()
	bool IsValid() {
		THROW_IF(!_obj.pushFunction("IsValid"),"No implementation for abstract function CefProcessMessage::IsValid");
		_obj.pushArg((CefProcessMessage*)this);
		return (_obj.callFunction<bool>());
	};

	// bool CefProcessMessage::IsReadOnly()
	bool IsReadOnly() {
		THROW_IF(!_obj.pushFunction("IsReadOnly"),"No implementation for abstract function CefProcessMessage::IsReadOnly");
		_obj.pushArg((CefProcessMessage*)this);
		return (_obj.callFunction<bool>());
	};

	// CefRefPtr< CefProcessMessage > CefProcessMessage::Copy()
	CefRefPtr< CefProcessMessage > Copy() {
		THROW_IF(!_obj.pushFunction("Copy"),"No implementation for abstract function CefProcessMessage::Copy");
		_obj.pushArg((CefProcessMessage*)this);
		return _obj.callFunction< CefProcessMessage* >();
	};

	// CefString CefProcessMessage::GetName()
	CefString GetName() {
		THROW_IF(!_obj.pushFunction("GetName"),"No implementation for abstract function CefProcessMessage::GetName");
		_obj.pushArg((CefProcessMessage*)this);
		return (_obj.callFunction<CefString>());
	};

	// CefRefPtr< CefListValue > CefProcessMessage::GetArgumentList()
	CefRefPtr< CefListValue > GetArgumentList() {
		THROW_IF(!_obj.pushFunction("GetArgumentList"),"No implementation for abstract function CefProcessMessage::GetArgumentList");
		_obj.pushArg((CefProcessMessage*)this);
		return _obj.callFunction< CefListValue* >();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

