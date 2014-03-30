#ifndef _WRAPPERS_WRAPPER_WXHELPCONTROLLERHELPPROVIDER_H_
#define _WRAPPERS_WRAPPER_WXHELPCONTROLLERHELPPROVIDER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/cshelp.h>

class wrapper_wxHelpControllerHelpProvider : public wxHelpControllerHelpProvider, public luna_wrapper_base {

public:
		

	~wrapper_wxHelpControllerHelpProvider() {
		logDEBUG3("Calling delete function for wrapper wxHelpControllerHelpProvider");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHelpControllerHelpProvider*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHelpControllerHelpProvider(lua_State* L, lua_Table* dum, wxHelpController * hc = NULL) 
		: wxHelpControllerHelpProvider(hc), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHelpControllerHelpProvider*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxHelpProvider::AddHelp(wxWindow * window, const wxString & text)
	void AddHelp(wxWindow * window, const wxString & text) {
		if(_obj.pushFunction("AddHelp")) {
			_obj.pushArg((wxHelpControllerHelpProvider*)this);
			_obj.pushArg(window);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxHelpControllerHelpProvider::AddHelp(window, text);
	};

	// void wxHelpProvider::AddHelp(int id, const wxString & text)
	void AddHelp(int id, const wxString & text) {
		if(_obj.pushFunction("AddHelp")) {
			_obj.pushArg((wxHelpControllerHelpProvider*)this);
			_obj.pushArg(id);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxHelpControllerHelpProvider::AddHelp(id, text);
	};

	// wxString wxHelpProvider::GetHelp(const wxWindow * window)
	wxString GetHelp(const wxWindow * window) {
		THROW_IF(!_obj.pushFunction("GetHelp"),"No implementation for abstract function wxHelpProvider::GetHelp");
		_obj.pushArg((wxHelpControllerHelpProvider*)this);
		_obj.pushArg(window);
		return *(_obj.callFunction<wxString*>());
	};

	// void wxHelpProvider::RemoveHelp(wxWindow * window)
	void RemoveHelp(wxWindow * window) {
		if(_obj.pushFunction("RemoveHelp")) {
			_obj.pushArg((wxHelpControllerHelpProvider*)this);
			_obj.pushArg(window);
			return (_obj.callFunction<void>());
		}

		return wxHelpControllerHelpProvider::RemoveHelp(window);
	};

	// bool wxHelpProvider::ShowHelp(wxWindow * window)
	bool ShowHelp(wxWindow * window) {
		if(_obj.pushFunction("ShowHelp")) {
			_obj.pushArg((wxHelpControllerHelpProvider*)this);
			_obj.pushArg(window);
			return (_obj.callFunction<bool>());
		}

		return wxHelpControllerHelpProvider::ShowHelp(window);
	};

	// bool wxHelpProvider::ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin)
	bool ShowHelpAtPoint(wxWindow * window, const wxPoint & point, wxHelpEvent::Origin origin) {
		if(_obj.pushFunction("ShowHelpAtPoint")) {
			_obj.pushArg((wxHelpControllerHelpProvider*)this);
			_obj.pushArg(window);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return (_obj.callFunction<bool>());
		}

		return wxHelpControllerHelpProvider::ShowHelpAtPoint(window, point, origin);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

