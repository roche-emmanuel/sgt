#ifndef _WRAPPERS_WRAPPER_WXTEXTCOMPLETER_H_
#define _WRAPPERS_WRAPPER_WXTEXTCOMPLETER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/textcompleter.h>

class wrapper_wxTextCompleter : public wxTextCompleter, public luna_wrapper_base {

public:
		

	~wrapper_wxTextCompleter() {
		logDEBUG3("Calling delete function for wrapper wxTextCompleter");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTextCompleter*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool wxTextCompleter::Start(const wxString & prefix)
	bool Start(const wxString & prefix) {
		THROW_IF(!_obj.pushFunction("Start"),"No implementation for abstract function wxTextCompleter::Start");
		_obj.pushArg((wxTextCompleter*)this);
		_obj.pushArg(prefix);
		return (_obj.callFunction<bool>());
	};

	// wxString wxTextCompleter::GetNext()
	wxString GetNext() {
		THROW_IF(!_obj.pushFunction("GetNext"),"No implementation for abstract function wxTextCompleter::GetNext");
		_obj.pushArg((wxTextCompleter*)this);
		return *(_obj.callFunction<wxString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

