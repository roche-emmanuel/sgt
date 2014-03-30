#ifndef _WRAPPERS_WRAPPER_WXCARET_H_
#define _WRAPPERS_WRAPPER_WXCARET_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/caret.h>

class wrapper_wxCaret : public wxCaret, public luna_wrapper_base {

public:
		

	~wrapper_wxCaret() {
		logDEBUG3("Calling delete function for wrapper wxCaret");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxCaret*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxCaret(lua_State* L, lua_Table* dum) 
		: wxCaret(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCaret*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxCaret(lua_State* L, lua_Table* dum, wxWindow * window, int width, int height) 
		: wxCaret(window, width, height), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCaret*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxCaret(lua_State* L, lua_Table* dum, wxWindow * window, const wxSize & size) 
		: wxCaret(window, size), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCaret*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxCaret::Hide()
	void Hide() {
		if(_obj.pushFunction("Hide")) {
			_obj.pushArg((wxCaret*)this);
			return (_obj.callFunction<void>());
		}

		return wxCaret::Hide();
	};

	// void wxCaret::Show(bool show = true)
	void Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxCaret*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<void>());
		}

		return wxCaret::Show(show);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

