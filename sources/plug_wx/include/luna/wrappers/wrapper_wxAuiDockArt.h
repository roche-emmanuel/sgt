#ifndef _WRAPPERS_WRAPPER_WXAUIDOCKART_H_
#define _WRAPPERS_WRAPPER_WXAUIDOCKART_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/aui/dockart.h>

class wrapper_wxAuiDockArt : public wxAuiDockArt, public luna_wrapper_base {

public:
		

	~wrapper_wxAuiDockArt() {
		logDEBUG3("Calling delete function for wrapper wxAuiDockArt");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxAuiDockArt*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxAuiDockArt(lua_State* L, lua_Table* dum) 
		: wxAuiDockArt(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAuiDockArt*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxAuiDockArt::DrawBackground(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect)
	void DrawBackground(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawBackground"),"No implementation for abstract function wxAuiDockArt::DrawBackground");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(window);
		_obj.pushArg(orientation);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxAuiDockArt::DrawBorder(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane)
	void DrawBorder(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane) {
		THROW_IF(!_obj.pushFunction("DrawBorder"),"No implementation for abstract function wxAuiDockArt::DrawBorder");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(window);
		_obj.pushArg(&rect);
		_obj.pushArg(&pane);
		return (_obj.callFunction<void>());
	};

	// void wxAuiDockArt::DrawCaption(wxDC & dc, wxWindow * window, const wxString & text, const wxRect & rect, wxAuiPaneInfo & pane)
	void DrawCaption(wxDC & dc, wxWindow * window, const wxString & text, const wxRect & rect, wxAuiPaneInfo & pane) {
		THROW_IF(!_obj.pushFunction("DrawCaption"),"No implementation for abstract function wxAuiDockArt::DrawCaption");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(window);
		_obj.pushArg(text);
		_obj.pushArg(&rect);
		_obj.pushArg(&pane);
		return (_obj.callFunction<void>());
	};

	// void wxAuiDockArt::DrawGripper(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane)
	void DrawGripper(wxDC & dc, wxWindow * window, const wxRect & rect, wxAuiPaneInfo & pane) {
		THROW_IF(!_obj.pushFunction("DrawGripper"),"No implementation for abstract function wxAuiDockArt::DrawGripper");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(window);
		_obj.pushArg(&rect);
		_obj.pushArg(&pane);
		return (_obj.callFunction<void>());
	};

	// void wxAuiDockArt::DrawPaneButton(wxDC & dc, wxWindow * window, int button, int button_state, const wxRect & rect, wxAuiPaneInfo & pane)
	void DrawPaneButton(wxDC & dc, wxWindow * window, int button, int button_state, const wxRect & rect, wxAuiPaneInfo & pane) {
		THROW_IF(!_obj.pushFunction("DrawPaneButton"),"No implementation for abstract function wxAuiDockArt::DrawPaneButton");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(window);
		_obj.pushArg(button);
		_obj.pushArg(button_state);
		_obj.pushArg(&rect);
		_obj.pushArg(&pane);
		return (_obj.callFunction<void>());
	};

	// void wxAuiDockArt::DrawSash(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect)
	void DrawSash(wxDC & dc, wxWindow * window, int orientation, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawSash"),"No implementation for abstract function wxAuiDockArt::DrawSash");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(window);
		_obj.pushArg(orientation);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// wxColour wxAuiDockArt::GetColour(int id)
	wxColour GetColour(int id) {
		THROW_IF(!_obj.pushFunction("GetColour"),"No implementation for abstract function wxAuiDockArt::GetColour");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(id);
		return *(_obj.callFunction<wxColour*>());
	};

	// wxFont wxAuiDockArt::GetFont(int id)
	wxFont GetFont(int id) {
		THROW_IF(!_obj.pushFunction("GetFont"),"No implementation for abstract function wxAuiDockArt::GetFont");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(id);
		return *(_obj.callFunction<wxFont*>());
	};

	// int wxAuiDockArt::GetMetric(int id)
	int GetMetric(int id) {
		THROW_IF(!_obj.pushFunction("GetMetric"),"No implementation for abstract function wxAuiDockArt::GetMetric");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(id);
		return (_obj.callFunction<int>());
	};

	// void wxAuiDockArt::SetColour(int id, const wxColour & colour)
	void SetColour(int id, const wxColour & colour) {
		THROW_IF(!_obj.pushFunction("SetColour"),"No implementation for abstract function wxAuiDockArt::SetColour");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(id);
		_obj.pushArg(&colour);
		return (_obj.callFunction<void>());
	};

	// void wxAuiDockArt::SetFont(int id, const wxFont & font)
	void SetFont(int id, const wxFont & font) {
		THROW_IF(!_obj.pushFunction("SetFont"),"No implementation for abstract function wxAuiDockArt::SetFont");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(id);
		_obj.pushArg(&font);
		return (_obj.callFunction<void>());
	};

	// void wxAuiDockArt::SetMetric(int id, int new_val)
	void SetMetric(int id, int new_val) {
		THROW_IF(!_obj.pushFunction("SetMetric"),"No implementation for abstract function wxAuiDockArt::SetMetric");
		_obj.pushArg((wxAuiDockArt*)this);
		_obj.pushArg(id);
		_obj.pushArg(new_val);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

