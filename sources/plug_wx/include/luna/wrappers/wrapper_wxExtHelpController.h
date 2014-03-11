#ifndef _WRAPPERS_WRAPPER_WXEXTHELPCONTROLLER_H_
#define _WRAPPERS_WRAPPER_WXEXTHELPCONTROLLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/generic/helpext.h>

class wrapper_wxExtHelpController : public wxExtHelpController, public luna_wrapper_base {

public:
		

	~wrapper_wxExtHelpController() {
		logDEBUG3("Calling delete function for wrapper wxExtHelpController");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxExtHelpController*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool wxHelpController::DisplayContextPopup(int contextId)
	bool DisplayContextPopup(int contextId) {
		if(_obj.pushFunction("DisplayContextPopup")) {
			_obj.pushArg((wxExtHelpController*)this);
			_obj.pushArg(contextId);
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::DisplayContextPopup(contextId);
	};

	// bool wxHelpController::DisplayTextPopup(const wxString & text, const wxPoint & pos)
	bool DisplayTextPopup(const wxString & text, const wxPoint & pos) {
		if(_obj.pushFunction("DisplayTextPopup")) {
			_obj.pushArg((wxExtHelpController*)this);
			_obj.pushArg(text);
			_obj.pushArg(&pos);
			return (_obj.callFunction<bool>());
		}

		return wxExtHelpController::DisplayTextPopup(text, pos);
	};

	// wxWindow * wxHelpController::GetParentWindow() const
	wxWindow * GetParentWindow() const {
		if(_obj.pushFunction("GetParentWindow")) {
			_obj.pushArg((wxExtHelpController*)this);
			return (_obj.callFunction<wxWindow*>());
		}

		return wxExtHelpController::GetParentWindow();
	};

	// void wxHelpController::SetParentWindow(wxWindow * parentWindow)
	void SetParentWindow(wxWindow * parentWindow) {
		if(_obj.pushFunction("SetParentWindow")) {
			_obj.pushArg((wxExtHelpController*)this);
			_obj.pushArg(parentWindow);
			return (_obj.callFunction<void>());
		}

		return wxExtHelpController::SetParentWindow(parentWindow);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

