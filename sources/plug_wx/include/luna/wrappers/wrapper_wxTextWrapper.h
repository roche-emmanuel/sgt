#ifndef _WRAPPERS_WRAPPER_WXTEXTWRAPPER_H_
#define _WRAPPERS_WRAPPER_WXTEXTWRAPPER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/textwrapper.h>

class wrapper_wxTextWrapper : public wxTextWrapper, public luna_wrapper_base {

public:
		

	~wrapper_wxTextWrapper() {
		logDEBUG3("Calling delete function for wrapper wxTextWrapper");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTextWrapper*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTextWrapper(lua_State* L, lua_Table* dum) 
		: wxTextWrapper(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTextWrapper*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void wxTextWrapper::OnOutputLine(const wxString & line)
	void OnOutputLine(const wxString & line) {
		THROW_IF(!_obj.pushFunction("OnOutputLine"),"No implementation for abstract function wxTextWrapper::OnOutputLine");
		_obj.pushArg((wxTextWrapper*)this);
		_obj.pushArg(line);
		return (_obj.callFunction<void>());
	};

	// void wxTextWrapper::OnNewLine()
	void OnNewLine() {
		if(_obj.pushFunction("OnNewLine")) {
			_obj.pushArg((wxTextWrapper*)this);
			return (_obj.callFunction<void>());
		}

		return wxTextWrapper::OnNewLine();
	};

public:
	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

