#ifndef _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTDEBUG_H_
#define _WRAPPERS_WRAPPER_WXMESSAGEOUTPUTDEBUG_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/msgout.h>

class wrapper_wxMessageOutputDebug : public wxMessageOutputDebug, public luna_wrapper_base {

public:
		

	~wrapper_wxMessageOutputDebug() {
		logDEBUG3("Calling delete function for wrapper wxMessageOutputDebug");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxMessageOutputDebug*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMessageOutputDebug(lua_State* L, lua_Table* dum) 
		: wxMessageOutputDebug(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMessageOutputDebug*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxMessageOutput::Output(const wxString & str)
	void Output(const wxString & str) {
		THROW_IF(!_obj.pushFunction("Output"),"No implementation for abstract function wxMessageOutput::Output");
		_obj.pushArg((wxMessageOutputDebug*)this);
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

