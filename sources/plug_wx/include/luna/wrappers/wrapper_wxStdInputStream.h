#ifndef _WRAPPERS_WRAPPER_WXSTDINPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXSTDINPUTSTREAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/stdstream.h>

class wrapper_wxStdInputStream : public wxStdInputStream, public luna_wrapper_base {

public:
		

	~wrapper_wxStdInputStream() {
		logDEBUG3("Calling delete function for wrapper wxStdInputStream");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxStdInputStream*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxStdInputStream(lua_State* L, lua_Table* dum, wxInputStream & stream) 
		: wxStdInputStream(stream), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxStdInputStream*)this);
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

