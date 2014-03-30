#ifndef _WRAPPERS_WRAPPER_WXHELPPROVIDER_H_
#define _WRAPPERS_WRAPPER_WXHELPPROVIDER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/cshelp.h>

class wrapper_wxHelpProvider : public wxHelpProvider, public luna_wrapper_base {

public:
		

	~wrapper_wxHelpProvider() {
		logDEBUG3("Calling delete function for wrapper wxHelpProvider");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHelpProvider*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxHelpProvider::AddHelp(wxWindow * window, const wxString & text)
	void AddHelp(wxWindow * window, const wxString & text) {
		if(_obj.pushFunction("AddHelp")) {
			_obj.pushArg((wxHelpProvider*)this);
			_obj.pushArg(window);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxHelpProvider::AddHelp(window, text);
	};

	// void wxHelpProvider::AddHelp(int id, const wxString & text)
	void AddHelp(int id, const wxString & text) {
		if(_obj.pushFunction("AddHelp")) {
			_obj.pushArg((wxHelpProvider*)this);
			_obj.pushArg(id);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxHelpProvider::AddHelp(id, text);
	};

	// wxString wxHelpProvider::GetHelp(const wxWindow * window)
	wxString GetHelp(const wxWindow * window) {
		THROW_IF(!_obj.pushFunction("GetHelp"),"No implementation for abstract function wxHelpProvider::GetHelp");
		_obj.pushArg((wxHelpProvider*)this);
		_obj.pushArg(window);
		return *(_obj.callFunction<wxString*>());
	};

	// void wxHelpProvider::RemoveHelp(wxWindow * window)
	void RemoveHelp(wxWindow * window) {
		if(_obj.pushFunction("RemoveHelp")) {
			_obj.pushArg((wxHelpProvider*)this);
			_obj.pushArg(window);
			return (_obj.callFunction<void>());
		}

		return wxHelpProvider::RemoveHelp(window);
	};

	// bool wxHelpProvider::ShowHelp(wxWindow * window)
	bool ShowHelp(wxWindow * window) {
		if(_obj.pushFunction("ShowHelp")) {
			_obj.pushArg((wxHelpProvider*)this);
			_obj.pushArg(window);
			return (_obj.callFunction<bool>());
		}

		return wxHelpProvider::ShowHelp(window);
	};

	// bool wxHelpProvider::ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin)
	bool ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin) {
		if(_obj.pushFunction("ShowHelpAtPoint")) {
			_obj.pushArg((wxHelpProvider*)this);
			_obj.pushArg(window);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return (_obj.callFunction<bool>());
		}

		return wxHelpProvider::ShowHelpAtPoint(window, point, origin);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

