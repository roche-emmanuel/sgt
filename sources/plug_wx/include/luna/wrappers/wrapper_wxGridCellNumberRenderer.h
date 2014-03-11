#ifndef _WRAPPERS_WRAPPER_WXGRIDCELLNUMBERRENDERER_H_
#define _WRAPPERS_WRAPPER_WXGRIDCELLNUMBERRENDERER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridCellNumberRenderer : public wxGridCellNumberRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxGridCellNumberRenderer() {
		logDEBUG3("Calling delete function for wrapper wxGridCellNumberRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridCellNumberRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridCellNumberRenderer(lua_State* L, lua_Table* dum) 
		: wxGridCellNumberRenderer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridCellNumberRenderer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	wxGridCellRenderer * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxGridCellRenderer::Clone");
		_obj.pushArg((wxGridCellNumberRenderer*)this);
		return (_obj.callFunction<wxGridCellRenderer*>());
	};

	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	void Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected) {
		THROW_IF(!_obj.pushFunction("Draw"),"No implementation for abstract function wxGridCellRenderer::Draw");
		_obj.pushArg((wxGridCellNumberRenderer*)this);
		_obj.pushArg(&grid);
		_obj.pushArg(&attr);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(row);
		_obj.pushArg(col);
		_obj.pushArg(isSelected);
		return (_obj.callFunction<void>());
	};

	// wxSize wxGridCellRenderer::GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col)
	wxSize GetBestSize(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, int row, int col) {
		THROW_IF(!_obj.pushFunction("GetBestSize"),"No implementation for abstract function wxGridCellRenderer::GetBestSize");
		_obj.pushArg((wxGridCellNumberRenderer*)this);
		_obj.pushArg(&grid);
		_obj.pushArg(&attr);
		_obj.pushArg(&dc);
		_obj.pushArg(row);
		_obj.pushArg(col);
		return *(_obj.callFunction<wxSize*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

