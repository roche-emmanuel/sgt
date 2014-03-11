#ifndef _WRAPPERS_WRAPPER_WXSOCKADDRESS_H_
#define _WRAPPERS_WRAPPER_WXSOCKADDRESS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/socket.h>

class wrapper_wxSockAddress : public wxSockAddress, public luna_wrapper_base {

public:
		

	~wrapper_wxSockAddress() {
		logDEBUG3("Calling delete function for wrapper wxSockAddress");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSockAddress*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSockAddress(lua_State* L, lua_Table* dum) 
		: wxSockAddress(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSockAddress*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSockAddress*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSockAddress::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSockAddress*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSockAddress::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSockAddress*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSockAddress::GetClassInfo();
	};

	// void wxSockAddress::Clear()
	void Clear() {
		THROW_IF(!_obj.pushFunction("Clear"),"No implementation for abstract function wxSockAddress::Clear");
		_obj.pushArg((wxSockAddress*)this);
		return (_obj.callFunction<void>());
	};

	// wxSockAddress::Family wxSockAddress::Type()
	wxSockAddress::Family Type() {
		THROW_IF(!_obj.pushFunction("Type"),"No implementation for abstract function wxSockAddress::Type");
		_obj.pushArg((wxSockAddress*)this);
		return (wxSockAddress::Family)(_obj.callFunction<int>());
	};

	// wxSockAddress * wxSockAddress::Clone() const
	wxSockAddress * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxSockAddress::Clone");
		_obj.pushArg((wxSockAddress*)this);
		return (_obj.callFunction<wxSockAddress*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

