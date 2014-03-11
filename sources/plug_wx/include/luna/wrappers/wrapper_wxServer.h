#ifndef _WRAPPERS_WRAPPER_WXSERVER_H_
#define _WRAPPERS_WRAPPER_WXSERVER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/ipc.h>

class wrapper_wxServer : public wxServer, public luna_wrapper_base {

public:
		

	~wrapper_wxServer() {
		logDEBUG3("Calling delete function for wrapper wxServer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxServer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxServer(lua_State* L, lua_Table* dum) 
		: wxServer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxServer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxConnectionBase * wxServer::OnAcceptConnection(const wxString & topic)
	wxConnectionBase * OnAcceptConnection(const wxString & topic) {
		if(_obj.pushFunction("OnAcceptConnection")) {
			_obj.pushArg((wxServer*)this);
			_obj.pushArg(topic);
			return (_obj.callFunction<wxConnectionBase*>());
		}

		return wxServer::OnAcceptConnection(topic);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

