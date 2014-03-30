#ifndef _WRAPPERS_WRAPPER_WXSIMPLEHELPPROVIDER_H_
#define _WRAPPERS_WRAPPER_WXSIMPLEHELPPROVIDER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/cshelp.h>

class wrapper_wxSimpleHelpProvider : public wxSimpleHelpProvider, public luna_wrapper_base {

public:
		

	~wrapper_wxSimpleHelpProvider() {
		logDEBUG3("Calling delete function for wrapper wxSimpleHelpProvider");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSimpleHelpProvider*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxHelpProvider::AddHelp(wxWindow * window, const wxString & text)
	void AddHelp(wxWindow * window, const wxString & text) {
		if(_obj.pushFunction("AddHelp")) {
			_obj.pushArg((wxSimpleHelpProvider*)this);
			_obj.pushArg(window);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxSimpleHelpProvider::AddHelp(window, text);
	};

	// void wxHelpProvider::AddHelp(int id, const wxString & text)
	void AddHelp(int id, const wxString & text) {
		if(_obj.pushFunction("AddHelp")) {
			_obj.pushArg((wxSimpleHelpProvider*)this);
			_obj.pushArg(id);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxSimpleHelpProvider::AddHelp(id, text);
	};

	// wxString wxHelpProvider::GetHelp(const wxWindow * window)
	wxString GetHelp(const wxWindow * window) {
		THROW_IF(!_obj.pushFunction("GetHelp"),"No implementation for abstract function wxHelpProvider::GetHelp");
		_obj.pushArg((wxSimpleHelpProvider*)this);
		_obj.pushArg(window);
		return *(_obj.callFunction<wxString*>());
	};

	// void wxHelpProvider::RemoveHelp(wxWindow * window)
	void RemoveHelp(wxWindow * window) {
		if(_obj.pushFunction("RemoveHelp")) {
			_obj.pushArg((wxSimpleHelpProvider*)this);
			_obj.pushArg(window);
			return (_obj.callFunction<void>());
		}

		return wxSimpleHelpProvider::RemoveHelp(window);
	};

	// bool wxHelpProvider::ShowHelp(wxWindow * window)
	bool ShowHelp(wxWindow * window) {
		if(_obj.pushFunction("ShowHelp")) {
			_obj.pushArg((wxSimpleHelpProvider*)this);
			_obj.pushArg(window);
			return (_obj.callFunction<bool>());
		}

		return wxSimpleHelpProvider::ShowHelp(window);
	};

	// bool wxHelpProvider::ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin)
	bool ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin) {
		if(_obj.pushFunction("ShowHelpAtPoint")) {
			_obj.pushArg((wxSimpleHelpProvider*)this);
			_obj.pushArg(window);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return (_obj.callFunction<bool>());
		}

		return wxSimpleHelpProvider::ShowHelpAtPoint(window, point, origin);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

