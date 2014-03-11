#ifndef _WRAPPERS_WRAPPER_WXAUIDEFAULTTOOLBARART_H_
#define _WRAPPERS_WRAPPER_WXAUIDEFAULTTOOLBARART_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/aui/auibar.h>

class wrapper_wxAuiDefaultToolBarArt : public wxAuiDefaultToolBarArt, public luna_wrapper_base {

public:
		

	~wrapper_wxAuiDefaultToolBarArt() {
		logDEBUG3("Calling delete function for wrapper wxAuiDefaultToolBarArt");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxAuiDefaultToolBarArt*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxAuiDefaultToolBarArt(lua_State* L, lua_Table* dum) 
		: wxAuiDefaultToolBarArt(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxAuiToolBarArt * wxAuiDefaultToolBarArt::Clone()
	wxAuiToolBarArt * Clone() {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			return (_obj.callFunction<wxAuiToolBarArt*>());
		}

		return wxAuiDefaultToolBarArt::Clone();
	};

	// void wxAuiDefaultToolBarArt::SetFlags(unsigned int flags)
	void SetFlags(unsigned int flags) {
		if(_obj.pushFunction("SetFlags")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::SetFlags(flags);
	};

	// unsigned int wxAuiDefaultToolBarArt::GetFlags()
	unsigned int GetFlags() {
		if(_obj.pushFunction("GetFlags")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return wxAuiDefaultToolBarArt::GetFlags();
	};

	// void wxAuiDefaultToolBarArt::SetFont(const wxFont & font)
	void SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::SetFont(font);
	};

	// wxFont wxAuiDefaultToolBarArt::GetFont()
	wxFont GetFont() {
		if(_obj.pushFunction("GetFont")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			return *(_obj.callFunction<wxFont*>());
		}

		return wxAuiDefaultToolBarArt::GetFont();
	};

	// void wxAuiDefaultToolBarArt::SetTextOrientation(int orientation)
	void SetTextOrientation(int orientation) {
		if(_obj.pushFunction("SetTextOrientation")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::SetTextOrientation(orientation);
	};

	// int wxAuiDefaultToolBarArt::GetTextOrientation()
	int GetTextOrientation() {
		if(_obj.pushFunction("GetTextOrientation")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			return (_obj.callFunction<int>());
		}

		return wxAuiDefaultToolBarArt::GetTextOrientation();
	};

	// void wxAuiDefaultToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		if(_obj.pushFunction("DrawBackground")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(wnd);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::DrawBackground(dc, wnd, rect);
	};

	// void wxAuiDefaultToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	void DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) {
		if(_obj.pushFunction("DrawLabel")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(wnd);
			_obj.pushArg(&item);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::DrawLabel(dc, wnd, item, rect);
	};

	// void wxAuiDefaultToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	void DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) {
		if(_obj.pushFunction("DrawButton")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(wnd);
			_obj.pushArg(&item);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::DrawButton(dc, wnd, item, rect);
	};

	// void wxAuiDefaultToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	void DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) {
		if(_obj.pushFunction("DrawDropDownButton")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(wnd);
			_obj.pushArg(&item);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::DrawDropDownButton(dc, wnd, item, rect);
	};

	// void wxAuiDefaultToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	void DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) {
		if(_obj.pushFunction("DrawControlLabel")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(wnd);
			_obj.pushArg(&item);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::DrawControlLabel(dc, wnd, item, rect);
	};

	// void wxAuiDefaultToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		if(_obj.pushFunction("DrawSeparator")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(wnd);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::DrawSeparator(dc, wnd, rect);
	};

	// void wxAuiDefaultToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		if(_obj.pushFunction("DrawGripper")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(wnd);
			_obj.pushArg(&rect);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::DrawGripper(dc, wnd, rect);
	};

	// void wxAuiDefaultToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state)
	void DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state) {
		if(_obj.pushFunction("DrawOverflowButton")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(wnd);
			_obj.pushArg(&rect);
			_obj.pushArg(state);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::DrawOverflowButton(dc, wnd, rect, state);
	};

	// wxSize wxAuiDefaultToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	wxSize GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) {
		if(_obj.pushFunction("GetLabelSize")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(wnd);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiDefaultToolBarArt::GetLabelSize(dc, wnd, item);
	};

	// wxSize wxAuiDefaultToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	wxSize GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) {
		if(_obj.pushFunction("GetToolSize")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(&dc);
			_obj.pushArg(wnd);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiDefaultToolBarArt::GetToolSize(dc, wnd, item);
	};

	// int wxAuiDefaultToolBarArt::GetElementSize(int element)
	int GetElementSize(int element) {
		if(_obj.pushFunction("GetElementSize")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(element);
			return (_obj.callFunction<int>());
		}

		return wxAuiDefaultToolBarArt::GetElementSize(element);
	};

	// void wxAuiDefaultToolBarArt::SetElementSize(int element_id, int size)
	void SetElementSize(int element_id, int size) {
		if(_obj.pushFunction("SetElementSize")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(element_id);
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return wxAuiDefaultToolBarArt::SetElementSize(element_id, size);
	};

	// int wxAuiDefaultToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items)
	int ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items) {
		if(_obj.pushFunction("ShowDropDown")) {
			_obj.pushArg((wxAuiDefaultToolBarArt*)this);
			_obj.pushArg(wnd);
			_obj.pushArg(&items);
			return (_obj.callFunction<int>());
		}

		return wxAuiDefaultToolBarArt::ShowDropDown(wnd, items);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

