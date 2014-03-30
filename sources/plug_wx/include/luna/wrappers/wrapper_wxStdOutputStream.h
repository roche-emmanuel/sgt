#ifndef _WRAPPERS_WRAPPER_WXSTDOUTPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXSTDOUTPUTSTREAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/stdstream.h>

class wrapper_wxStdOutputStream : public wxStdOutputStream, public luna_wrapper_base {

public:
		

	~wrapper_wxStdOutputStream() {
		logDEBUG3("Calling delete function for wrapper wxStdOutputStream");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxStdOutputStream*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxStdOutputStream(lua_State* L, lua_Table* dum, wxOutputStream & stream) 
		: wxStdOutputStream(stream), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxStdOutputStream*)this);
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

