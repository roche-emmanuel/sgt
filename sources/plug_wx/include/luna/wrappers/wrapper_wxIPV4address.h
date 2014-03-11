#ifndef _WRAPPERS_WRAPPER_WXIPV_ADDRESS_H_
#define _WRAPPERS_WRAPPER_WXIPV_ADDRESS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/socket.h>

class wrapper_wxIPV4address : public wxIPV4address, public luna_wrapper_base {

public:
		

	~wrapper_wxIPV4address() {
		logDEBUG3("Calling delete function for wrapper wxIPV4address");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxIPV4address*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxIPV4address*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIPV4address::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxIPV4address*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIPV4address::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxIPV4address*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxIPV4address::GetClassInfo();
	};

	// void wxSockAddress::Clear()
	void Clear() {
		THROW_IF(!_obj.pushFunction("Clear"),"No implementation for abstract function wxSockAddress::Clear");
		_obj.pushArg((wxIPV4address*)this);
		return (_obj.callFunction<void>());
	};

	// wxSockAddress::Family wxSockAddress::Type()
	wxSockAddress::Family Type() {
		THROW_IF(!_obj.pushFunction("Type"),"No implementation for abstract function wxSockAddress::Type");
		_obj.pushArg((wxIPV4address*)this);
		return (wxSockAddress::Family)(_obj.callFunction<int>());
	};

	// wxSockAddress * wxSockAddress::Clone() const
	wxSockAddress * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxSockAddress::Clone");
		_obj.pushArg((wxIPV4address*)this);
		return (_obj.callFunction<wxSockAddress*>());
	};

	// bool wxIPaddress::IsLocalHost() const
	bool IsLocalHost() const {
		THROW_IF(!_obj.pushFunction("IsLocalHost"),"No implementation for abstract function wxIPaddress::IsLocalHost");
		_obj.pushArg((wxIPV4address*)this);
		return (_obj.callFunction<bool>());
	};

	// wxString wxIPV4address::Hostname() const
	wxString Hostname() const {
		if(_obj.pushFunction("Hostname")) {
			_obj.pushArg((wxIPV4address*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxIPV4address::Hostname();
	};

	// wxString wxIPV4address::IPAddress() const
	wxString IPAddress() const {
		if(_obj.pushFunction("IPAddress")) {
			_obj.pushArg((wxIPV4address*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxIPV4address::IPAddress();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// bool wxIPaddress::BroadcastAddress()
bool BroadcastAddress() {
	THROW_IF(true,"The function call bool wxIPaddress::BroadcastAddress() is not implemented in wrapper.");
	return bool();
};

};




#endif

