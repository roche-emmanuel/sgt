#ifndef _WRAPPERS_WRAPPER_WXPROTOCOL_H_
#define _WRAPPERS_WRAPPER_WXPROTOCOL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/protocol/protocol.h>

class wrapper_wxProtocol : public wxProtocol, public luna_wrapper_base {

public:
		

	~wrapper_wxProtocol() {
		logDEBUG3("Calling delete function for wrapper wxProtocol");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxProtocol*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxProtocol*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxProtocol::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxProtocol*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxProtocol::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxProtocol*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxProtocol::GetClassInfo();
	};

	// bool wxSocketBase::GetLocal(wxSockAddress & addr) const
	bool GetLocal(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetLocal")) {
			_obj.pushArg((wxProtocol*)this);
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxProtocol::GetLocal(addr);
	};

	// bool wxSocketBase::GetPeer(wxSockAddress & addr) const
	bool GetPeer(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetPeer")) {
			_obj.pushArg((wxProtocol*)this);
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxProtocol::GetPeer(addr);
	};

	// bool wxSocketBase::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			_obj.pushArg((wxProtocol*)this);
			return (_obj.callFunction<bool>());
		}

		return wxProtocol::Close();
	};

	// bool wxSocketBase::SetLocal(const wxIPV4address & local)
	bool SetLocal(const wxIPV4address & local) {
		if(_obj.pushFunction("SetLocal")) {
			_obj.pushArg((wxProtocol*)this);
			_obj.pushArg(&local);
			return (_obj.callFunction<bool>());
		}

		return wxProtocol::SetLocal(local);
	};

	// bool wxSocketClient::Connect(const wxSockAddress & address, bool wait = true)
	bool Connect(const wxSockAddress & address, bool wait = true) {
		if(_obj.pushFunction("Connect")) {
			_obj.pushArg((wxProtocol*)this);
			_obj.pushArg(&address);
			_obj.pushArg(wait);
			return (_obj.callFunction<bool>());
		}

		return wxProtocol::Connect(address, wait);
	};

	// bool wxProtocol::Abort()
	bool Abort() {
		THROW_IF(!_obj.pushFunction("Abort"),"No implementation for abstract function wxProtocol::Abort");
		_obj.pushArg((wxProtocol*)this);
		return (_obj.callFunction<bool>());
	};

	// wxString wxProtocol::GetContentType() const
	wxString GetContentType() const {
		THROW_IF(!_obj.pushFunction("GetContentType"),"No implementation for abstract function wxProtocol::GetContentType");
		_obj.pushArg((wxProtocol*)this);
		return *(_obj.callFunction<wxString*>());
	};

	// wxProtocolError wxProtocol::GetError() const
	wxProtocolError GetError() const {
		if(_obj.pushFunction("GetError")) {
			_obj.pushArg((wxProtocol*)this);
			return (wxProtocolError)(_obj.callFunction<int>());
		}

		return wxProtocol::GetError();
	};

	// wxInputStream * wxProtocol::GetInputStream(const wxString & path)
	wxInputStream * GetInputStream(const wxString & path) {
		THROW_IF(!_obj.pushFunction("GetInputStream"),"No implementation for abstract function wxProtocol::GetInputStream");
		_obj.pushArg((wxProtocol*)this);
		_obj.pushArg(path);
		return (_obj.callFunction<wxInputStream*>());
	};

	// void wxProtocol::SetPassword(const wxString & user)
	void SetPassword(const wxString & user) {
		if(_obj.pushFunction("SetPassword")) {
			_obj.pushArg((wxProtocol*)this);
			_obj.pushArg(user);
			return (_obj.callFunction<void>());
		}

		return wxProtocol::SetPassword(user);
	};

	// void wxProtocol::SetUser(const wxString & user)
	void SetUser(const wxString & user) {
		if(_obj.pushFunction("SetUser")) {
			_obj.pushArg((wxProtocol*)this);
			_obj.pushArg(user);
			return (_obj.callFunction<void>());
		}

		return wxProtocol::SetUser(user);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

