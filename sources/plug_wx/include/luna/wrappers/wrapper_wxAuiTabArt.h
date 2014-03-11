#ifndef _WRAPPERS_WRAPPER_WXAUITABART_H_
#define _WRAPPERS_WRAPPER_WXAUITABART_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/aui/auibook.h>

class wrapper_wxAuiTabArt : public wxAuiTabArt, public luna_wrapper_base {

public:
		

	~wrapper_wxAuiTabArt() {
		logDEBUG3("Calling delete function for wrapper wxAuiTabArt");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxAuiTabArt*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxAuiTabArt(lua_State* L, lua_Table* dum) 
		: wxAuiTabArt(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAuiTabArt*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxAuiTabArt * wxAuiTabArt::Clone()
	wxAuiTabArt * Clone() {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxAuiTabArt::Clone");
		_obj.pushArg((wxAuiTabArt*)this);
		return (_obj.callFunction<wxAuiTabArt*>());
	};

	// void wxAuiTabArt::DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawBackground"),"No implementation for abstract function wxAuiTabArt::DrawBackground");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxAuiTabArt::DrawButton(wxDC & dc, wxWindow * wnd, const wxRect & in_rect, int bitmap_id, int button_state, int orientation, wxRect * out_rect)
	void DrawButton(wxDC & dc, wxWindow * wnd, const wxRect & in_rect, int bitmap_id, int button_state, int orientation, wxRect * out_rect) {
		THROW_IF(!_obj.pushFunction("DrawButton"),"No implementation for abstract function wxAuiTabArt::DrawButton");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&in_rect);
		_obj.pushArg(bitmap_id);
		_obj.pushArg(button_state);
		_obj.pushArg(orientation);
		_obj.pushArg(out_rect);
		return (_obj.callFunction<void>());
	};

	// void wxAuiTabArt::DrawTab(wxDC & dc, wxWindow * wnd, const wxAuiNotebookPage & page, const wxRect & rect, int close_button_state, wxRect * out_tab_rect, wxRect * out_button_rect, int * x_extent)
	void DrawTab(wxDC & dc, wxWindow * wnd, const wxAuiNotebookPage & page, const wxRect & rect, int close_button_state, wxRect * out_tab_rect, wxRect * out_button_rect, int * x_extent) {
		THROW_IF(!_obj.pushFunction("DrawTab"),"No implementation for abstract function wxAuiTabArt::DrawTab");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&page);
		_obj.pushArg(&rect);
		_obj.pushArg(close_button_state);
		_obj.pushArg(out_tab_rect);
		_obj.pushArg(out_button_rect);
		_obj.pushArg(x_extent);
		return (_obj.callFunction<void>());
	};

	// int wxAuiTabArt::GetBestTabCtrlSize(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, const wxSize & arg3)
	int GetBestTabCtrlSize(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, const wxSize & arg3) {
		THROW_IF(!_obj.pushFunction("GetBestTabCtrlSize"),"No implementation for abstract function wxAuiTabArt::GetBestTabCtrlSize");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(&arg2);
		_obj.pushArg(&arg3);
		return (_obj.callFunction<int>());
	};

	// int wxAuiTabArt::GetIndentSize()
	int GetIndentSize() {
		THROW_IF(!_obj.pushFunction("GetIndentSize"),"No implementation for abstract function wxAuiTabArt::GetIndentSize");
		_obj.pushArg((wxAuiTabArt*)this);
		return (_obj.callFunction<int>());
	};

	// wxSize wxAuiTabArt::GetTabSize(wxDC & dc, wxWindow * wnd, const wxString & caption, const wxBitmap & bitmap, bool active, int close_button_state, int * x_extent)
	wxSize GetTabSize(wxDC & dc, wxWindow * wnd, const wxString & caption, const wxBitmap & bitmap, bool active, int close_button_state, int * x_extent) {
		THROW_IF(!_obj.pushFunction("GetTabSize"),"No implementation for abstract function wxAuiTabArt::GetTabSize");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(caption);
		_obj.pushArg(&bitmap);
		_obj.pushArg(active);
		_obj.pushArg(close_button_state);
		_obj.pushArg(x_extent);
		return *(_obj.callFunction<wxSize*>());
	};

	// void wxAuiTabArt::SetFlags(unsigned int flags)
	void SetFlags(unsigned int flags) {
		THROW_IF(!_obj.pushFunction("SetFlags"),"No implementation for abstract function wxAuiTabArt::SetFlags");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// void wxAuiTabArt::SetMeasuringFont(const wxFont & font)
	void SetMeasuringFont(const wxFont & font) {
		THROW_IF(!_obj.pushFunction("SetMeasuringFont"),"No implementation for abstract function wxAuiTabArt::SetMeasuringFont");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(&font);
		return (_obj.callFunction<void>());
	};

	// void wxAuiTabArt::SetNormalFont(const wxFont & font)
	void SetNormalFont(const wxFont & font) {
		THROW_IF(!_obj.pushFunction("SetNormalFont"),"No implementation for abstract function wxAuiTabArt::SetNormalFont");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(&font);
		return (_obj.callFunction<void>());
	};

	// void wxAuiTabArt::SetSelectedFont(const wxFont & font)
	void SetSelectedFont(const wxFont & font) {
		THROW_IF(!_obj.pushFunction("SetSelectedFont"),"No implementation for abstract function wxAuiTabArt::SetSelectedFont");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(&font);
		return (_obj.callFunction<void>());
	};

	// void wxAuiTabArt::SetColour(const wxColour & colour)
	void SetColour(const wxColour & colour) {
		THROW_IF(!_obj.pushFunction("SetColour"),"No implementation for abstract function wxAuiTabArt::SetColour");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(&colour);
		return (_obj.callFunction<void>());
	};

	// void wxAuiTabArt::SetActiveColour(const wxColour & colour)
	void SetActiveColour(const wxColour & colour) {
		THROW_IF(!_obj.pushFunction("SetActiveColour"),"No implementation for abstract function wxAuiTabArt::SetActiveColour");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(&colour);
		return (_obj.callFunction<void>());
	};

	// void wxAuiTabArt::SetSizingInfo(const wxSize & tab_ctrl_size, size_t tab_count)
	void SetSizingInfo(const wxSize & tab_ctrl_size, size_t tab_count) {
		THROW_IF(!_obj.pushFunction("SetSizingInfo"),"No implementation for abstract function wxAuiTabArt::SetSizingInfo");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(&tab_ctrl_size);
		_obj.pushArg(tab_count);
		return (_obj.callFunction<void>());
	};

	// int wxAuiTabArt::ShowDropDown(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, int arg3)
	int ShowDropDown(wxWindow * arg1, const wxAuiNotebookPageArray & arg2, int arg3) {
		THROW_IF(!_obj.pushFunction("ShowDropDown"),"No implementation for abstract function wxAuiTabArt::ShowDropDown");
		_obj.pushArg((wxAuiTabArt*)this);
		_obj.pushArg(arg1);
		_obj.pushArg(&arg2);
		_obj.pushArg(arg3);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

