#ifndef _WRAPPERS_WRAPPER_WXTEXTOUTPUTSTREAM_H_
#define _WRAPPERS_WRAPPER_WXTEXTOUTPUTSTREAM_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/txtstrm.h>

class wrapper_wxTextOutputStream : public wxTextOutputStream, public luna_wrapper_base {

public:
		

	~wrapper_wxTextOutputStream() {
		logDEBUG3("Calling delete function for wrapper wxTextOutputStream");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTextOutputStream*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxTextOutputStream::WriteDouble(double f)
	void WriteDouble(double f) {
		if(_obj.pushFunction("WriteDouble")) {
			_obj.pushArg((wxTextOutputStream*)this);
			_obj.pushArg(f);
			return (_obj.callFunction<void>());
		}

		return wxTextOutputStream::WriteDouble(f);
	};

	// void wxTextOutputStream::WriteString(const wxString & string)
	void WriteString(const wxString & string) {
		if(_obj.pushFunction("WriteString")) {
			_obj.pushArg((wxTextOutputStream*)this);
			_obj.pushArg(string);
			return (_obj.callFunction<void>());
		}

		return wxTextOutputStream::WriteString(string);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

