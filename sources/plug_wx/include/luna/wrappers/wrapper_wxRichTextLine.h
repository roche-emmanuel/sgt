#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTLINE_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTLINE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextbuffer.h>

class wrapper_wxRichTextLine : public wxRichTextLine, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextLine() {
		logDEBUG3("Calling delete function for wrapper wxRichTextLine");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextLine*)this); // No this argument or the object will be referenced again!
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

