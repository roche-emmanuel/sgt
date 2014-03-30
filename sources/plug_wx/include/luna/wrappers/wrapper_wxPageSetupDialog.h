#ifndef _WRAPPERS_WRAPPER_WXPAGESETUPDIALOG_H_
#define _WRAPPERS_WRAPPER_WXPAGESETUPDIALOG_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/printdlg.h>

class wrapper_wxPageSetupDialog : public wxPageSetupDialog, public luna_wrapper_base {

public:
		

	~wrapper_wxPageSetupDialog() {
		logDEBUG3("Calling delete function for wrapper wxPageSetupDialog");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPageSetupDialog*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxPageSetupDialog(lua_State* L, lua_Table* dum, wxWindow * parent, wxPageSetupDialogData * data = NULL) 
		: wxPageSetupDialog(parent, data), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPageSetupDialog*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:

	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

