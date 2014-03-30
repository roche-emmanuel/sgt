#ifndef _WRAPPERS_WRAPPER_WXTCPCLIENT_H_
#define _WRAPPERS_WRAPPER_WXTCPCLIENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/sckipc.h>

class wrapper_wxTCPClient : public wxTCPClient, public luna_wrapper_base {

public:
		

	~wrapper_wxTCPClient() {
		logDEBUG3("Calling delete function for wrapper wxTCPClient");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTCPClient*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTCPClient(lua_State* L, lua_Table* dum) 
		: wxTCPClient(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTCPClient*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxTCPClient*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTCPClient::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxTCPClient*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTCPClient::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxTCPClient*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxTCPClient::GetClassInfo();
	};

	// wxConnectionBase * wxTCPClient::MakeConnection(const wxString & host, const wxString & service, const wxString & topic)
	wxConnectionBase * MakeConnection(const wxString & host, const wxString & service, const wxString & topic) {
		if(_obj.pushFunction("MakeConnection")) {
			_obj.pushArg((wxTCPClient*)this);
			_obj.pushArg(host);
			_obj.pushArg(service);
			_obj.pushArg(topic);
			return (_obj.callFunction<wxConnectionBase*>());
		}

		return wxTCPClient::MakeConnection(host, service, topic);
	};

	// wxConnectionBase * wxTCPClient::OnMakeConnection()
	wxConnectionBase * OnMakeConnection() {
		if(_obj.pushFunction("OnMakeConnection")) {
			_obj.pushArg((wxTCPClient*)this);
			return (_obj.callFunction<wxConnectionBase*>());
		}

		return wxTCPClient::OnMakeConnection();
	};

	// bool wxTCPClient::ValidHost(const wxString & host)
	bool ValidHost(const wxString & host) {
		if(_obj.pushFunction("ValidHost")) {
			_obj.pushArg((wxTCPClient*)this);
			_obj.pushArg(host);
			return (_obj.callFunction<bool>());
		}

		return wxTCPClient::ValidHost(host);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

