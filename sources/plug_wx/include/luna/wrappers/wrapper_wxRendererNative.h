#ifndef _WRAPPERS_WRAPPER_WXRENDERERNATIVE_H_
#define _WRAPPERS_WRAPPER_WXRENDERERNATIVE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/renderer.h>

class wrapper_wxRendererNative : public wxRendererNative, public luna_wrapper_base {

public:
		

	~wrapper_wxRendererNative() {
		logDEBUG3("Calling delete function for wrapper wxRendererNative");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRendererNative*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawCheckBox"),"No implementation for abstract function wxRendererNative::DrawCheckBox");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawComboBoxDropButton"),"No implementation for abstract function wxRendererNative::DrawComboBoxDropButton");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawDropArrow"),"No implementation for abstract function wxRendererNative::DrawDropArrow");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawFocusRect"),"No implementation for abstract function wxRendererNative::DrawFocusRect");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// int wxRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	int DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) {
		THROW_IF(!_obj.pushFunction("DrawHeaderButton"),"No implementation for abstract function wxRendererNative::DrawHeaderButton");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		_obj.pushArg((int)sortArrow);
		_obj.pushArg(params);
		return (_obj.callFunction<int>());
	};

	// int wxRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	int DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) {
		THROW_IF(!_obj.pushFunction("DrawHeaderButtonContents"),"No implementation for abstract function wxRendererNative::DrawHeaderButtonContents");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		_obj.pushArg((int)sortArrow);
		_obj.pushArg(params);
		return (_obj.callFunction<int>());
	};

	// void wxRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawItemSelectionRect"),"No implementation for abstract function wxRendererNative::DrawItemSelectionRect");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawPushButton"),"No implementation for abstract function wxRendererNative::DrawPushButton");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawSplitterBorder"),"No implementation for abstract function wxRendererNative::DrawSplitterBorder");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0)
	void DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawSplitterSash"),"No implementation for abstract function wxRendererNative::DrawSplitterSash");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&size);
		_obj.pushArg(position);
		_obj.pushArg((int)orient);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawTreeItemButton"),"No implementation for abstract function wxRendererNative::DrawTreeItemButton");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawChoice(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawChoice(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawChoice"),"No implementation for abstract function wxRendererNative::DrawChoice");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawComboBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawComboBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawComboBox"),"No implementation for abstract function wxRendererNative::DrawComboBox");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawTextCtrl(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawTextCtrl(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawTextCtrl"),"No implementation for abstract function wxRendererNative::DrawTextCtrl");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawRadioBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawRadioBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawRadioBitmap"),"No implementation for abstract function wxRendererNative::DrawRadioBitmap");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawTitleBarBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, wxTitleBarButton button, int flags = 0)
	void DrawTitleBarBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, wxTitleBarButton button, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawTitleBarBitmap"),"No implementation for abstract function wxRendererNative::DrawTitleBarBitmap");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg((int)button);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// wxSize wxRendererNative::GetCheckBoxSize(wxWindow * win)
	wxSize GetCheckBoxSize(wxWindow * win) {
		THROW_IF(!_obj.pushFunction("GetCheckBoxSize"),"No implementation for abstract function wxRendererNative::GetCheckBoxSize");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		return *(_obj.callFunction<wxSize*>());
	};

	// int wxRendererNative::GetHeaderButtonHeight(wxWindow * win)
	int GetHeaderButtonHeight(wxWindow * win) {
		THROW_IF(!_obj.pushFunction("GetHeaderButtonHeight"),"No implementation for abstract function wxRendererNative::GetHeaderButtonHeight");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		return (_obj.callFunction<int>());
	};

	// int wxRendererNative::GetHeaderButtonMargin(wxWindow * win)
	int GetHeaderButtonMargin(wxWindow * win) {
		THROW_IF(!_obj.pushFunction("GetHeaderButtonMargin"),"No implementation for abstract function wxRendererNative::GetHeaderButtonMargin");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		return (_obj.callFunction<int>());
	};

	// wxSplitterRenderParams wxRendererNative::GetSplitterParams(const wxWindow * win)
	wxSplitterRenderParams GetSplitterParams(const wxWindow * win) {
		THROW_IF(!_obj.pushFunction("GetSplitterParams"),"No implementation for abstract function wxRendererNative::GetSplitterParams");
		_obj.pushArg((wxRendererNative*)this);
		_obj.pushArg(win);
		return *(_obj.callFunction<wxSplitterRenderParams*>());
	};

	// wxRendererVersion wxRendererNative::GetVersion() const
	wxRendererVersion GetVersion() const {
		THROW_IF(!_obj.pushFunction("GetVersion"),"No implementation for abstract function wxRendererNative::GetVersion");
		_obj.pushArg((wxRendererNative*)this);
		return *(_obj.callFunction<wxRendererVersion*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

