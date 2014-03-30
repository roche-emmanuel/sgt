#ifndef _WRAPPERS_WRAPPER_WXTIPPROVIDER_H_
#define _WRAPPERS_WRAPPER_WXTIPPROVIDER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/tipdlg.h>

class wrapper_wxTipProvider : public wxTipProvider, public luna_wrapper_base {

public:
		

	~wrapper_wxTipProvider() {
		logDEBUG3("Calling delete function for wrapper wxTipProvider");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTipProvider*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTipProvider(lua_State* L, lua_Table* dum, size_t currentTip) 
		: wxTipProvider(currentTip), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTipProvider*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxString wxTipProvider::GetTip()
	wxString GetTip() {
		THROW_IF(!_obj.pushFunction("GetTip"),"No implementation for abstract function wxTipProvider::GetTip");
		_obj.pushArg((wxTipProvider*)this);
		return *(_obj.callFunction<wxString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

