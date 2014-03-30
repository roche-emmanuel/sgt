#ifndef _WRAPPERS_WRAPPER_WXGRIDCELLSTRINGRENDERER_H_
#define _WRAPPERS_WRAPPER_WXGRIDCELLSTRINGRENDERER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGridCellStringRenderer : public wxGridCellStringRenderer, public luna_wrapper_base {

public:
		

	~wrapper_wxGridCellStringRenderer() {
		logDEBUG3("Calling delete function for wrapper wxGridCellStringRenderer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGridCellStringRenderer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGridCellStringRenderer(lua_State* L, lua_Table* dum) 
		: wxGridCellStringRenderer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGridCellStringRenderer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxGridCellRenderer * wxGridCellRenderer::Clone() const
	wxGridCellRenderer * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxGridCellRenderer::Clone");
		_obj.pushArg((wxGridCellStringRenderer*)this);
		return (_obj.callFunction<wxGridCellRenderer*>());
	};

	// void wxGridCellRenderer::Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected)
	void Draw(wxGrid & grid, wxGridCellAttr & attr, wxDC & dc, const wxRect & rect, int row, int col, bool isSelected) {
		THROW_IF(!_obj.pushFunction("Draw"),"No implementation for abstract function wxGridCellRenderer::Draw");
		_obj.pushArg((wxGridCellStringRenderer*)this);
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
		_obj.pushArg((wxGridCellStringRenderer*)this);
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

