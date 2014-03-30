#ifndef _WRAPPERS_WRAPPER_WXTEXTCOMPLETERSIMPLE_H_
#define _WRAPPERS_WRAPPER_WXTEXTCOMPLETERSIMPLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/textcompleter.h>

class wrapper_wxTextCompleterSimple : public wxTextCompleterSimple, public luna_wrapper_base {

public:
		

	~wrapper_wxTextCompleterSimple() {
		logDEBUG3("Calling delete function for wrapper wxTextCompleterSimple");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTextCompleterSimple*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool wxTextCompleter::Start(const wxString & prefix)
	bool Start(const wxString & prefix) {
		THROW_IF(!_obj.pushFunction("Start"),"No implementation for abstract function wxTextCompleter::Start");
		_obj.pushArg((wxTextCompleterSimple*)this);
		_obj.pushArg(prefix);
		return (_obj.callFunction<bool>());
	};

	// wxString wxTextCompleter::GetNext()
	wxString GetNext() {
		THROW_IF(!_obj.pushFunction("GetNext"),"No implementation for abstract function wxTextCompleter::GetNext");
		_obj.pushArg((wxTextCompleterSimple*)this);
		return *(_obj.callFunction<wxString*>());
	};

	// void wxTextCompleterSimple::GetCompletions(const wxString & prefix, wxArrayString & res)
	void GetCompletions(const wxString & prefix, wxArrayString & res) {
		THROW_IF(!_obj.pushFunction("GetCompletions"),"No implementation for abstract function wxTextCompleterSimple::GetCompletions");
		_obj.pushArg((wxTextCompleterSimple*)this);
		_obj.pushArg(prefix);
		_obj.pushArg(&res);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

