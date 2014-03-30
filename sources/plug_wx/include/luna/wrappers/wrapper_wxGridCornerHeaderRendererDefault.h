#ifndef _WRAPPERS_WRAPPER_WXGRIDCORNERHEADERRENDERERDEFAULT_H_
#define _WRAPPERS_WRAPPER_WXGRIDCORNERHEADERRENDERERDEFAULT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridCornerHeaderRendererDefault : public wxGridCornerHeaderRendererDefault, public luna_wrapper_base {

public:
		

	~wrapper_wxGridCornerHeaderRendererDefault() {
		logDEBUG3("Calling delete function for wrapper wxGridCornerHeaderRendererDefault");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridCornerHeaderRendererDefault*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxGridCornerHeaderRendererDefault::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	void DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const {
		if(_obj.pushFunction("DrawBorder")) {
			_obj.pushArg((wxGridCornerHeaderRendererDefault*)this);
			_obj.pushArg(&grid);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxGridCornerHeaderRendererDefault::DrawBorder(grid, dc, rect);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

