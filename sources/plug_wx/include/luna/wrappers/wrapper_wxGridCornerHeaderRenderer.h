#ifndef _WRAPPERS_WRAPPER_WXGRIDCORNERHEADERRENDERER_H_
#define _WRAPPERS_WRAPPER_WXGRIDCORNERHEADERRENDERER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridCornerHeaderRenderer : public wxGridCornerHeaderRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxGridCornerHeaderRenderer() {
		logDEBUG3("Calling delete function for wrapper wxGridCornerHeaderRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridCornerHeaderRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	void DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const {
		THROW_IF(!_obj.pushFunction("DrawBorder"),"No implementation for abstract function wxGridCornerHeaderRenderer::DrawBorder");
		_obj.pushArg((wxGridCornerHeaderRenderer*)this);
		_obj.pushArg(&grid);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

