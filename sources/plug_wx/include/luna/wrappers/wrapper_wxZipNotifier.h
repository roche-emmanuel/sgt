#ifndef _WRAPPERS_WRAPPER_WXZIPNOTIFIER_H_
#define _WRAPPERS_WRAPPER_WXZIPNOTIFIER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/zipstrm.h>

class wrapper_wxZipNotifier : public wxZipNotifier, public luna_wrapper_base {

public:
		

	~wrapper_wxZipNotifier() {
		logDEBUG3("Calling delete function for wrapper wxZipNotifier");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxZipNotifier*)this); // No this argument or the object will be referenced again!
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


public:
// void wxZipNotifier::OnEntryUpdated(wxZipEntry & entry)
void OnEntryUpdated(wxZipEntry &) {
	THROW_IF(true,"The function call void wxZipNotifier::OnEntryUpdated(wxZipEntry &) is not implemented in wrapper.");
};

};




#endif

