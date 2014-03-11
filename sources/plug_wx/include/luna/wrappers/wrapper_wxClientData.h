#ifndef _WRAPPERS_WRAPPER_WXCLIENTDATA_H_
#define _WRAPPERS_WRAPPER_WXCLIENTDATA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/clntdata.h>

class wrapper_wxClientData : public wxClientData, public luna_wrapper_base {

public:
		

	~wrapper_wxClientData() {
		logDEBUG3("Calling delete function for wrapper wxClientData");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxClientData*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxClientData(lua_State* L, lua_Table* dum) 
		: wxClientData(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxClientData*)this);
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

