#ifndef _WRAPPERS_WRAPPER_WXDELEGATERENDERERNATIVE_H_
#define _WRAPPERS_WRAPPER_WXDELEGATERENDERERNATIVE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/renderer.h>

class wrapper_wxDelegateRendererNative : public wxDelegateRendererNative, public luna_wrapper_base {

public:
		

	~wrapper_wxDelegateRendererNative() {
		logDEBUG3("Calling delete function for wrapper wxDelegateRendererNative");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDelegateRendererNative*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDelegateRendererNative(lua_State* L, lua_Table* dum) 
		: wxDelegateRendererNative(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxDelegateRendererNative(lua_State* L, lua_Table* dum, wxRendererNative & rendererNative) 
		: wxDelegateRendererNative(rendererNative), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void wxRendererNative::DrawChoice(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawChoice(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawChoice"),"No implementation for abstract function wxRendererNative::DrawChoice");
		_obj.pushArg((wxDelegateRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawComboBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawComboBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawComboBox"),"No implementation for abstract function wxRendererNative::DrawComboBox");
		_obj.pushArg((wxDelegateRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawTextCtrl(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawTextCtrl(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawTextCtrl"),"No implementation for abstract function wxRendererNative::DrawTextCtrl");
		_obj.pushArg((wxDelegateRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawRadioBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawRadioBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawRadioBitmap"),"No implementation for abstract function wxRendererNative::DrawRadioBitmap");
		_obj.pushArg((wxDelegateRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxRendererNative::DrawTitleBarBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, wxTitleBarButton button, int flags = 0)
	void DrawTitleBarBitmap(wxWindow * win, wxDC & dc, const wxRect & rect, wxTitleBarButton button, int flags = 0) {
		THROW_IF(!_obj.pushFunction("DrawTitleBarBitmap"),"No implementation for abstract function wxRendererNative::DrawTitleBarBitmap");
		_obj.pushArg((wxDelegateRendererNative*)this);
		_obj.pushArg(win);
		_obj.pushArg(&dc);
		_obj.pushArg(&rect);
		_obj.pushArg((int)button);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// int wxDelegateRendererNative::DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	int DrawHeaderButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) {
		if(_obj.pushFunction("DrawHeaderButton")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			_obj.pushArg((int)sortArrow);
			_obj.pushArg(params);
			return (_obj.callFunction<int>());
		}

		return wxDelegateRendererNative::DrawHeaderButton(win, dc, rect, flags, sortArrow, params);
	};

	// int wxDelegateRendererNative::DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL)
	int DrawHeaderButtonContents(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0, wxHeaderSortIconType sortArrow = ::wxHDR_SORT_ICON_NONE, wxHeaderButtonParams * params = NULL) {
		if(_obj.pushFunction("DrawHeaderButtonContents")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			_obj.pushArg((int)sortArrow);
			_obj.pushArg(params);
			return (_obj.callFunction<int>());
		}

		return wxDelegateRendererNative::DrawHeaderButtonContents(win, dc, rect, flags, sortArrow, params);
	};

	// int wxDelegateRendererNative::GetHeaderButtonHeight(wxWindow * win)
	int GetHeaderButtonHeight(wxWindow * win) {
		if(_obj.pushFunction("GetHeaderButtonHeight")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			return (_obj.callFunction<int>());
		}

		return wxDelegateRendererNative::GetHeaderButtonHeight(win);
	};

	// int wxDelegateRendererNative::GetHeaderButtonMargin(wxWindow * win)
	int GetHeaderButtonMargin(wxWindow * win) {
		if(_obj.pushFunction("GetHeaderButtonMargin")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			return (_obj.callFunction<int>());
		}

		return wxDelegateRendererNative::GetHeaderButtonMargin(win);
	};

	// void wxDelegateRendererNative::DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawTreeItemButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		if(_obj.pushFunction("DrawTreeItemButton")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDelegateRendererNative::DrawTreeItemButton(win, dc, rect, flags);
	};

	// void wxDelegateRendererNative::DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawSplitterBorder(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		if(_obj.pushFunction("DrawSplitterBorder")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDelegateRendererNative::DrawSplitterBorder(win, dc, rect, flags);
	};

	// void wxDelegateRendererNative::DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0)
	void DrawSplitterSash(wxWindow * win, wxDC & dc, const wxSize & size, int position, wxOrientation orient, int flags = 0) {
		if(_obj.pushFunction("DrawSplitterSash")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			_obj.pushArg(&dc);
			_obj.pushArg(&size);
			_obj.pushArg(position);
			_obj.pushArg((int)orient);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDelegateRendererNative::DrawSplitterSash(win, dc, size, position, orient, flags);
	};

	// void wxDelegateRendererNative::DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawComboBoxDropButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		if(_obj.pushFunction("DrawComboBoxDropButton")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDelegateRendererNative::DrawComboBoxDropButton(win, dc, rect, flags);
	};

	// void wxDelegateRendererNative::DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawDropArrow(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		if(_obj.pushFunction("DrawDropArrow")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDelegateRendererNative::DrawDropArrow(win, dc, rect, flags);
	};

	// void wxDelegateRendererNative::DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawCheckBox(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		if(_obj.pushFunction("DrawCheckBox")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDelegateRendererNative::DrawCheckBox(win, dc, rect, flags);
	};

	// wxSize wxDelegateRendererNative::GetCheckBoxSize(wxWindow * win)
	wxSize GetCheckBoxSize(wxWindow * win) {
		if(_obj.pushFunction("GetCheckBoxSize")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDelegateRendererNative::GetCheckBoxSize(win);
	};

	// void wxDelegateRendererNative::DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawPushButton(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		if(_obj.pushFunction("DrawPushButton")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDelegateRendererNative::DrawPushButton(win, dc, rect, flags);
	};

	// void wxDelegateRendererNative::DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawItemSelectionRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		if(_obj.pushFunction("DrawItemSelectionRect")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDelegateRendererNative::DrawItemSelectionRect(win, dc, rect, flags);
	};

	// void wxDelegateRendererNative::DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0)
	void DrawFocusRect(wxWindow * win, wxDC & dc, const wxRect & rect, int flags = 0) {
		if(_obj.pushFunction("DrawFocusRect")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			_obj.pushArg(&dc);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDelegateRendererNative::DrawFocusRect(win, dc, rect, flags);
	};

	// wxSplitterRenderParams wxDelegateRendererNative::GetSplitterParams(const wxWindow * win)
	wxSplitterRenderParams GetSplitterParams(const wxWindow * win) {
		if(_obj.pushFunction("GetSplitterParams")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			_obj.pushArg(win);
			return *(_obj.callFunction<wxSplitterRenderParams*>());
		}

		return wxDelegateRendererNative::GetSplitterParams(win);
	};

	// wxRendererVersion wxDelegateRendererNative::GetVersion() const
	wxRendererVersion GetVersion() const {
		if(_obj.pushFunction("GetVersion")) {
			_obj.pushArg((wxDelegateRendererNative*)this);
			return *(_obj.callFunction<wxRendererVersion*>());
		}

		return wxDelegateRendererNative::GetVersion();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

