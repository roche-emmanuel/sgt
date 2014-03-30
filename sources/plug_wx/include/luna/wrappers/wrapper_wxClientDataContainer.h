#ifndef _WRAPPERS_WRAPPER_WXCLIENTDATACONTAINER_H_
#define _WRAPPERS_WRAPPER_WXCLIENTDATACONTAINER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/clntdata.h>

class wrapper_wxClientDataContainer : public wxClientDataContainer, public luna_wrapper_base {

public:
		

	~wrapper_wxClientDataContainer() {
		logDEBUG3("Calling delete function for wrapper wxClientDataContainer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxClientDataContainer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxClientDataContainer(lua_State* L, lua_Table* dum) 
		: wxClientDataContainer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxClientDataContainer*)this);
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

