#ifndef _WRAPPERS_WRAPPER_WXTEXTFILE_H_
#define _WRAPPERS_WRAPPER_WXTEXTFILE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/textfile.h>

class wrapper_wxTextFile : public wxTextFile, public luna_wrapper_base {

public:
		

	~wrapper_wxTextFile() {
		logDEBUG3("Calling delete function for wrapper wxTextFile");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTextFile*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTextFile(lua_State* L, lua_Table* dum) 
		: wxTextFile(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTextFile*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxTextFile(lua_State* L, lua_Table* dum, const wxString & strFile) 
		: wxTextFile(strFile), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTextFile*)this);
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

