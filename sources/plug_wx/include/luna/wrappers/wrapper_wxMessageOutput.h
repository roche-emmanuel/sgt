#ifndef _WRAPPERS_WRAPPER_WXMESSAGEOUTPUT_H_
#define _WRAPPERS_WRAPPER_WXMESSAGEOUTPUT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/msgout.h>

class wrapper_wxMessageOutput : public wxMessageOutput, public luna_wrapper_base {

public:
		

	~wrapper_wxMessageOutput() {
		logDEBUG3("Calling delete function for wrapper wxMessageOutput");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxMessageOutput*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxMessageOutput::Output(const wxString & str)
	void Output(const wxString & str) {
		THROW_IF(!_obj.pushFunction("Output"),"No implementation for abstract function wxMessageOutput::Output");
		_obj.pushArg((wxMessageOutput*)this);
		_obj.pushArg(str);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

