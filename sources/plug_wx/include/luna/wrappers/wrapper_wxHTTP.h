#ifndef _WRAPPERS_WRAPPER_WXHTTP_H_
#define _WRAPPERS_WRAPPER_WXHTTP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/protocol/http.h>

class wrapper_wxHTTP : public wxHTTP, public luna_wrapper_base {

public:
		

	~wrapper_wxHTTP() {
		logDEBUG3("Calling delete function for wrapper wxHTTP");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHTTP*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHTTP(lua_State* L, lua_Table* dum) 
		: wxHTTP(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHTTP*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHTTP*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHTTP::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHTTP*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHTTP::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHTTP*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHTTP::GetClassInfo();
	};

	// bool wxSocketBase::GetLocal(wxSockAddress & addr) const
	bool GetLocal(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetLocal")) {
			_obj.pushArg((wxHTTP*)this);
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxHTTP::GetLocal(addr);
	};

	// bool wxSocketBase::GetPeer(wxSockAddress & addr) const
	bool GetPeer(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetPeer")) {
			_obj.pushArg((wxHTTP*)this);
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxHTTP::GetPeer(addr);
	};

	// bool wxSocketBase::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			_obj.pushArg((wxHTTP*)this);
			return (_obj.callFunction<bool>());
		}

		return wxHTTP::Close();
	};

	// bool wxSocketBase::SetLocal(const wxIPV4address & local)
	bool SetLocal(const wxIPV4address & local) {
		if(_obj.pushFunction("SetLocal")) {
			_obj.pushArg((wxHTTP*)this);
			_obj.pushArg(&local);
			return (_obj.callFunction<bool>());
		}

		return wxHTTP::SetLocal(local);
	};

	// bool wxProtocol::Abort()
	bool Abort() {
		THROW_IF(!_obj.pushFunction("Abort"),"No implementation for abstract function wxProtocol::Abort");
		_obj.pushArg((wxHTTP*)this);
		return (_obj.callFunction<bool>());
	};

	// wxString wxProtocol::GetContentType() const
	wxString GetContentType() const {
		THROW_IF(!_obj.pushFunction("GetContentType"),"No implementation for abstract function wxProtocol::GetContentType");
		_obj.pushArg((wxHTTP*)this);
		return *(_obj.callFunction<wxString*>());
	};

	// wxProtocolError wxProtocol::GetError() const
	wxProtocolError GetError() const {
		if(_obj.pushFunction("GetError")) {
			_obj.pushArg((wxHTTP*)this);
			return (wxProtocolError)(_obj.callFunction<int>());
		}

		return wxHTTP::GetError();
	};

	// void wxProtocol::SetPassword(const wxString & user)
	void SetPassword(const wxString & user) {
		if(_obj.pushFunction("SetPassword")) {
			_obj.pushArg((wxHTTP*)this);
			_obj.pushArg(user);
			return (_obj.callFunction<void>());
		}

		return wxHTTP::SetPassword(user);
	};

	// void wxProtocol::SetUser(const wxString & user)
	void SetUser(const wxString & user) {
		if(_obj.pushFunction("SetUser")) {
			_obj.pushArg((wxHTTP*)this);
			_obj.pushArg(user);
			return (_obj.callFunction<void>());
		}

		return wxHTTP::SetUser(user);
	};

	// bool wxHTTP::Connect(const wxString & host)
	bool Connect(const wxString & host) {
		if(_obj.pushFunction("Connect")) {
			_obj.pushArg((wxHTTP*)this);
			_obj.pushArg(host);
			return (_obj.callFunction<bool>());
		}

		return wxHTTP::Connect(host);
	};

	// bool wxHTTP::Connect(const wxString & host, unsigned short port)
	bool Connect(const wxString & host, unsigned short port) {
		if(_obj.pushFunction("Connect")) {
			_obj.pushArg((wxHTTP*)this);
			_obj.pushArg(host);
			_obj.pushArg(port);
			return (_obj.callFunction<bool>());
		}

		return wxHTTP::Connect(host, port);
	};

	// bool wxHTTP::Connect(const wxSockAddress & address, bool wait)
	bool Connect(const wxSockAddress & address, bool wait) {
		if(_obj.pushFunction("Connect")) {
			_obj.pushArg((wxHTTP*)this);
			_obj.pushArg(&address);
			_obj.pushArg(wait);
			return (_obj.callFunction<bool>());
		}

		return wxHTTP::Connect(address, wait);
	};

	// wxInputStream * wxHTTP::GetInputStream(const wxString & path)
	wxInputStream * GetInputStream(const wxString & path) {
		if(_obj.pushFunction("GetInputStream")) {
			_obj.pushArg((wxHTTP*)this);
			_obj.pushArg(path);
			return (_obj.callFunction<wxInputStream*>());
		}

		return wxHTTP::GetInputStream(path);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

