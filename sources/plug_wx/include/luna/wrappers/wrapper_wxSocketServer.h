#ifndef _WRAPPERS_WRAPPER_WXSOCKETSERVER_H_
#define _WRAPPERS_WRAPPER_WXSOCKETSERVER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/socket.h>

class wrapper_wxSocketServer : public wxSocketServer, public luna_wrapper_base {

public:
		

	~wrapper_wxSocketServer() {
		logDEBUG3("Calling delete function for wrapper wxSocketServer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSocketServer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSocketServer(lua_State* L, lua_Table* dum, const wxSockAddress & address, int flags = ::wxSOCKET_NONE) 
		: wxSocketServer(address, flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSocketServer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSocketServer*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSocketServer::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSocketServer*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSocketServer::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSocketServer*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSocketServer::GetClassInfo();
	};

	// bool wxSocketBase::GetLocal(wxSockAddress & addr) const
	bool GetLocal(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetLocal")) {
			_obj.pushArg((wxSocketServer*)this);
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxSocketServer::GetLocal(addr);
	};

	// bool wxSocketBase::GetPeer(wxSockAddress & addr) const
	bool GetPeer(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetPeer")) {
			_obj.pushArg((wxSocketServer*)this);
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxSocketServer::GetPeer(addr);
	};

	// bool wxSocketBase::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			_obj.pushArg((wxSocketServer*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSocketServer::Close();
	};

	// bool wxSocketBase::SetLocal(const wxIPV4address & local)
	bool SetLocal(const wxIPV4address & local) {
		if(_obj.pushFunction("SetLocal")) {
			_obj.pushArg((wxSocketServer*)this);
			_obj.pushArg(&local);
			return (_obj.callFunction<bool>());
		}

		return wxSocketServer::SetLocal(local);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

