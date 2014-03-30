#ifndef _WRAPPERS_WRAPPER_WXGRIDHEADERLABELSRENDERER_H_
#define _WRAPPERS_WRAPPER_WXGRIDHEADERLABELSRENDERER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridHeaderLabelsRenderer : public wxGridHeaderLabelsRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxGridHeaderLabelsRenderer() {
		logDEBUG3("Calling delete function for wrapper wxGridHeaderLabelsRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridHeaderLabelsRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxGridCornerHeaderRenderer::DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const
	void DrawBorder(const wxGrid & grid, wxDC & dc, wxRect & rect) const {
		THROW_IF(!_obj.pushFunction("DrawBorder"),"No implementation for abstract function wxGridCornerHeaderRenderer::DrawBorder");
		_obj.pushArg((wxGridHeaderLabelsRenderer*)this);
		_obj.pushArg(&grid);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxGridHeaderLabelsRenderer::DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const
	void DrawLabel(const wxGrid & grid, wxDC & dc, const wxString & value, const wxRect & rect, int horizAlign, int vertAlign, int textOrientation) const {
		if(_obj.pushFunction("DrawLabel")) {
			_obj.pushArg((wxGridHeaderLabelsRenderer*)this);
			_obj.pushArg(&grid);
			_obj.pushArg(&dc);
			_obj.pushArg(value);
			_obj.pushArg(&rect);
			_obj.pushArg(horizAlign);
			_obj.pushArg(vertAlign);
			_obj.pushArg(textOrientation);
			return (_obj.callFunction<void>());
		}

		return wxGridHeaderLabelsRenderer::DrawLabel(grid, dc, value, rect, horizAlign, vertAlign, textOrientation);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

