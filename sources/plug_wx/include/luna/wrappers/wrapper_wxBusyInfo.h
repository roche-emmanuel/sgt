#ifndef _WRAPPERS_WRAPPER_WXBUSYINFO_H_
#define _WRAPPERS_WRAPPER_WXBUSYINFO_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/busyinfo.h>

class wrapper_wxBusyInfo : public wxBusyInfo, public luna_wrapper_base {

public:
		

	~wrapper_wxBusyInfo() {
		logDEBUG3("Calling delete function for wrapper wxBusyInfo");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxBusyInfo*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxBusyInfo(lua_State* L, lua_Table* dum, const wxString & msg, wxWindow * parent = NULL) 
		: wxBusyInfo(msg, parent), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxBusyInfo*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

