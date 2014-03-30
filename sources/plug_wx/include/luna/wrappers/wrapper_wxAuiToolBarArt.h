#ifndef _WRAPPERS_WRAPPER_WXAUITOOLBARART_H_
#define _WRAPPERS_WRAPPER_WXAUITOOLBARART_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/aui/auibar.h>

class wrapper_wxAuiToolBarArt : public wxAuiToolBarArt, public luna_wrapper_base {

public:
		

	~wrapper_wxAuiToolBarArt() {
		logDEBUG3("Calling delete function for wrapper wxAuiToolBarArt");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxAuiToolBarArt*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxAuiToolBarArt(lua_State* L, lua_Table* dum) 
		: wxAuiToolBarArt(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAuiToolBarArt*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxAuiToolBarArt * wxAuiToolBarArt::Clone()
	wxAuiToolBarArt * Clone() {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxAuiToolBarArt::Clone");
		_obj.pushArg((wxAuiToolBarArt*)this);
		return (_obj.callFunction<wxAuiToolBarArt*>());
	};

	// void wxAuiToolBarArt::SetFlags(unsigned int flags)
	void SetFlags(unsigned int flags) {
		THROW_IF(!_obj.pushFunction("SetFlags"),"No implementation for abstract function wxAuiToolBarArt::SetFlags");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// unsigned int wxAuiToolBarArt::GetFlags()
	unsigned int GetFlags() {
		THROW_IF(!_obj.pushFunction("GetFlags"),"No implementation for abstract function wxAuiToolBarArt::GetFlags");
		_obj.pushArg((wxAuiToolBarArt*)this);
		return (_obj.callFunction<unsigned int>());
	};

	// void wxAuiToolBarArt::SetFont(const wxFont & font)
	void SetFont(const wxFont & font) {
		THROW_IF(!_obj.pushFunction("SetFont"),"No implementation for abstract function wxAuiToolBarArt::SetFont");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(&font);
		return (_obj.callFunction<void>());
	};

	// wxFont wxAuiToolBarArt::GetFont()
	wxFont GetFont() {
		THROW_IF(!_obj.pushFunction("GetFont"),"No implementation for abstract function wxAuiToolBarArt::GetFont");
		_obj.pushArg((wxAuiToolBarArt*)this);
		return *(_obj.callFunction<wxFont*>());
	};

	// void wxAuiToolBarArt::SetTextOrientation(int orientation)
	void SetTextOrientation(int orientation) {
		THROW_IF(!_obj.pushFunction("SetTextOrientation"),"No implementation for abstract function wxAuiToolBarArt::SetTextOrientation");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(orientation);
		return (_obj.callFunction<void>());
	};

	// int wxAuiToolBarArt::GetTextOrientation()
	int GetTextOrientation() {
		THROW_IF(!_obj.pushFunction("GetTextOrientation"),"No implementation for abstract function wxAuiToolBarArt::GetTextOrientation");
		_obj.pushArg((wxAuiToolBarArt*)this);
		return (_obj.callFunction<int>());
	};

	// void wxAuiToolBarArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawBackground"),"No implementation for abstract function wxAuiToolBarArt::DrawBackground");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxAuiToolBarArt::DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	void DrawLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawLabel"),"No implementation for abstract function wxAuiToolBarArt::DrawLabel");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&item);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxAuiToolBarArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	void DrawButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawButton"),"No implementation for abstract function wxAuiToolBarArt::DrawButton");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&item);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxAuiToolBarArt::DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	void DrawDropDownButton(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawDropDownButton"),"No implementation for abstract function wxAuiToolBarArt::DrawDropDownButton");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&item);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxAuiToolBarArt::DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect)
	void DrawControlLabel(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawControlLabel"),"No implementation for abstract function wxAuiToolBarArt::DrawControlLabel");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&item);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxAuiToolBarArt::DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawSeparator"),"No implementation for abstract function wxAuiToolBarArt::DrawSeparator");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxAuiToolBarArt::DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawGripper(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawGripper"),"No implementation for abstract function wxAuiToolBarArt::DrawGripper");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxAuiToolBarArt::DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state)
	void DrawOverflowButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, int state) {
		THROW_IF(!_obj.pushFunction("DrawOverflowButton"),"No implementation for abstract function wxAuiToolBarArt::DrawOverflowButton");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		_obj.pushArg(state);
		return (_obj.callFunction<void>());
	};

	// wxSize wxAuiToolBarArt::GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	wxSize GetLabelSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) {
		THROW_IF(!_obj.pushFunction("GetLabelSize"),"No implementation for abstract function wxAuiToolBarArt::GetLabelSize");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&item);
		return *(_obj.callFunction<wxSize*>());
	};

	// wxSize wxAuiToolBarArt::GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item)
	wxSize GetToolSize(wxDC & dc, wxWindow * wnd, const wxAuiToolBarItem & item) {
		THROW_IF(!_obj.pushFunction("GetToolSize"),"No implementation for abstract function wxAuiToolBarArt::GetToolSize");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&item);
		return *(_obj.callFunction<wxSize*>());
	};

	// int wxAuiToolBarArt::GetElementSize(int element_id)
	int GetElementSize(int element_id) {
		THROW_IF(!_obj.pushFunction("GetElementSize"),"No implementation for abstract function wxAuiToolBarArt::GetElementSize");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(element_id);
		return (_obj.callFunction<int>());
	};

	// void wxAuiToolBarArt::SetElementSize(int element_id, int size)
	void SetElementSize(int element_id, int size) {
		THROW_IF(!_obj.pushFunction("SetElementSize"),"No implementation for abstract function wxAuiToolBarArt::SetElementSize");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(element_id);
		_obj.pushArg(size);
		return (_obj.callFunction<void>());
	};

	// int wxAuiToolBarArt::ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items)
	int ShowDropDown(wxWindow * wnd, const wxAuiToolBarItemArray & items) {
		THROW_IF(!_obj.pushFunction("ShowDropDown"),"No implementation for abstract function wxAuiToolBarArt::ShowDropDown");
		_obj.pushArg((wxAuiToolBarArt*)this);
		_obj.pushArg(wnd);
		_obj.pushArg(&items);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

