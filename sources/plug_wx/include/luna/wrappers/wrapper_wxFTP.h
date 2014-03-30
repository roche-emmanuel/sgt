#ifndef _WRAPPERS_WRAPPER_WXFTP_H_
#define _WRAPPERS_WRAPPER_WXFTP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/protocol/ftp.h>

class wrapper_wxFTP : public wxFTP, public luna_wrapper_base {

public:
		

	~wrapper_wxFTP() {
		logDEBUG3("Calling delete function for wrapper wxFTP");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFTP*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFTP(lua_State* L, lua_Table* dum) 
		: wxFTP(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFTP*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFTP*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFTP::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFTP*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFTP::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFTP*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFTP::GetClassInfo();
	};

	// bool wxSocketBase::GetLocal(wxSockAddress & addr) const
	bool GetLocal(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetLocal")) {
			_obj.pushArg((wxFTP*)this);
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxFTP::GetLocal(addr);
	};

	// bool wxSocketBase::GetPeer(wxSockAddress & addr) const
	bool GetPeer(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetPeer")) {
			_obj.pushArg((wxFTP*)this);
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxFTP::GetPeer(addr);
	};

	// bool wxSocketBase::SetLocal(const wxIPV4address & local)
	bool SetLocal(const wxIPV4address & local) {
		if(_obj.pushFunction("SetLocal")) {
			_obj.pushArg((wxFTP*)this);
			_obj.pushArg(&local);
			return (_obj.callFunction<bool>());
		}

		return wxFTP::SetLocal(local);
	};

	// wxString wxProtocol::GetContentType() const
	wxString GetContentType() const {
		THROW_IF(!_obj.pushFunction("GetContentType"),"No implementation for abstract function wxProtocol::GetContentType");
		_obj.pushArg((wxFTP*)this);
		return *(_obj.callFunction<wxString*>());
	};

	// wxProtocolError wxProtocol::GetError() const
	wxProtocolError GetError() const {
		if(_obj.pushFunction("GetError")) {
			_obj.pushArg((wxFTP*)this);
			return (wxProtocolError)(_obj.callFunction<int>());
		}

		return wxFTP::GetError();
	};

	// bool wxFTP::Connect(const wxString & host)
	bool Connect(const wxString & host) {
		if(_obj.pushFunction("Connect")) {
			_obj.pushArg((wxFTP*)this);
			_obj.pushArg(host);
			return (_obj.callFunction<bool>());
		}

		return wxFTP::Connect(host);
	};

	// bool wxFTP::Connect(const wxString & host, unsigned short port)
	bool Connect(const wxString & host, unsigned short port) {
		if(_obj.pushFunction("Connect")) {
			_obj.pushArg((wxFTP*)this);
			_obj.pushArg(host);
			_obj.pushArg(port);
			return (_obj.callFunction<bool>());
		}

		return wxFTP::Connect(host, port);
	};

	// bool wxFTP::Abort()
	bool Abort() {
		if(_obj.pushFunction("Abort")) {
			_obj.pushArg((wxFTP*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFTP::Abort();
	};

	// bool wxFTP::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			_obj.pushArg((wxFTP*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFTP::Close();
	};

	// void wxFTP::SetPassword(const wxString & passwd)
	void SetPassword(const wxString & passwd) {
		if(_obj.pushFunction("SetPassword")) {
			_obj.pushArg((wxFTP*)this);
			_obj.pushArg(passwd);
			return (_obj.callFunction<void>());
		}

		return wxFTP::SetPassword(passwd);
	};

	// void wxFTP::SetUser(const wxString & user)
	void SetUser(const wxString & user) {
		if(_obj.pushFunction("SetUser")) {
			_obj.pushArg((wxFTP*)this);
			_obj.pushArg(user);
			return (_obj.callFunction<void>());
		}

		return wxFTP::SetUser(user);
	};

	// wxInputStream * wxFTP::GetInputStream(const wxString & path)
	wxInputStream * GetInputStream(const wxString & path) {
		if(_obj.pushFunction("GetInputStream")) {
			_obj.pushArg((wxFTP*)this);
			_obj.pushArg(path);
			return (_obj.callFunction<wxInputStream*>());
		}

		return wxFTP::GetInputStream(path);
	};

	// wxOutputStream * wxFTP::GetOutputStream(const wxString & file)
	wxOutputStream * GetOutputStream(const wxString & file) {
		if(_obj.pushFunction("GetOutputStream")) {
			_obj.pushArg((wxFTP*)this);
			_obj.pushArg(file);
			return (_obj.callFunction<wxOutputStream*>());
		}

		return wxFTP::GetOutputStream(file);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

