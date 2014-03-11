#ifndef _WRAPPERS_WRAPPER_WXDATAGRAMSOCKET_H_
#define _WRAPPERS_WRAPPER_WXDATAGRAMSOCKET_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/socket.h>

class wrapper_wxDatagramSocket : public wxDatagramSocket, public luna_wrapper_base {

public:
		

	~wrapper_wxDatagramSocket() {
		logDEBUG3("Calling delete function for wrapper wxDatagramSocket");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDatagramSocket*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDatagramSocket(lua_State* L, lua_Table* dum, const wxSockAddress & addr, int flags = ::wxSOCKET_NONE) 
		: wxDatagramSocket(addr, flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDatagramSocket*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDatagramSocket*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDatagramSocket::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDatagramSocket*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDatagramSocket::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDatagramSocket*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDatagramSocket::GetClassInfo();
	};

	// bool wxSocketBase::GetLocal(wxSockAddress & addr) const
	bool GetLocal(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetLocal")) {
			_obj.pushArg((wxDatagramSocket*)this);
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxDatagramSocket::GetLocal(addr);
	};

	// bool wxSocketBase::GetPeer(wxSockAddress & addr) const
	bool GetPeer(wxSockAddress & addr) const {
		if(_obj.pushFunction("GetPeer")) {
			_obj.pushArg((wxDatagramSocket*)this);
			_obj.pushArg(&addr);
			return (_obj.callFunction<bool>());
		}

		return wxDatagramSocket::GetPeer(addr);
	};

	// bool wxSocketBase::Close()
	bool Close() {
		if(_obj.pushFunction("Close")) {
			_obj.pushArg((wxDatagramSocket*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDatagramSocket::Close();
	};

	// bool wxSocketBase::SetLocal(const wxIPV4address & local)
	bool SetLocal(const wxIPV4address & local) {
		if(_obj.pushFunction("SetLocal")) {
			_obj.pushArg((wxDatagramSocket*)this);
			_obj.pushArg(&local);
			return (_obj.callFunction<bool>());
		}

		return wxDatagramSocket::SetLocal(local);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

