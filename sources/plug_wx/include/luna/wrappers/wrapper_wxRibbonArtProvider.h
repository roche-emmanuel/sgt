#ifndef _WRAPPERS_WRAPPER_WXRIBBONARTPROVIDER_H_
#define _WRAPPERS_WRAPPER_WXRIBBONARTPROVIDER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/ribbon/art.h>

class wrapper_wxRibbonArtProvider : public wxRibbonArtProvider, public luna_wrapper_base {

public:
		

	~wrapper_wxRibbonArtProvider() {
		logDEBUG3("Calling delete function for wrapper wxRibbonArtProvider");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRibbonArtProvider*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxRibbonArtProvider(lua_State* L, lua_Table* dum) 
		: wxRibbonArtProvider(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRibbonArtProvider*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxRibbonArtProvider * wxRibbonArtProvider::Clone() const
	wxRibbonArtProvider * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxRibbonArtProvider::Clone");
		_obj.pushArg((wxRibbonArtProvider*)this);
		return (_obj.callFunction<wxRibbonArtProvider*>());
	};

	// void wxRibbonArtProvider::SetFlags(long flags)
	void SetFlags(long flags) {
		THROW_IF(!_obj.pushFunction("SetFlags"),"No implementation for abstract function wxRibbonArtProvider::SetFlags");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(flags);
		return (_obj.callFunction<void>());
	};

	// long wxRibbonArtProvider::GetFlags() const
	long GetFlags() const {
		THROW_IF(!_obj.pushFunction("GetFlags"),"No implementation for abstract function wxRibbonArtProvider::GetFlags");
		_obj.pushArg((wxRibbonArtProvider*)this);
		return (_obj.callFunction<long>());
	};

	// int wxRibbonArtProvider::GetMetric(int id) const
	int GetMetric(int id) const {
		THROW_IF(!_obj.pushFunction("GetMetric"),"No implementation for abstract function wxRibbonArtProvider::GetMetric");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(id);
		return (_obj.callFunction<int>());
	};

	// void wxRibbonArtProvider::SetMetric(int id, int new_val)
	void SetMetric(int id, int new_val) {
		THROW_IF(!_obj.pushFunction("SetMetric"),"No implementation for abstract function wxRibbonArtProvider::SetMetric");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(id);
		_obj.pushArg(new_val);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::SetFont(int id, const wxFont & font)
	void SetFont(int id, const wxFont & font) {
		THROW_IF(!_obj.pushFunction("SetFont"),"No implementation for abstract function wxRibbonArtProvider::SetFont");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(id);
		_obj.pushArg(&font);
		return (_obj.callFunction<void>());
	};

	// wxFont wxRibbonArtProvider::GetFont(int id) const
	wxFont GetFont(int id) const {
		THROW_IF(!_obj.pushFunction("GetFont"),"No implementation for abstract function wxRibbonArtProvider::GetFont");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(id);
		return *(_obj.callFunction<wxFont*>());
	};

	// wxColour wxRibbonArtProvider::GetColour(int id) const
	wxColour GetColour(int id) const {
		THROW_IF(!_obj.pushFunction("GetColour"),"No implementation for abstract function wxRibbonArtProvider::GetColour");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(id);
		return *(_obj.callFunction<wxColour*>());
	};

	// void wxRibbonArtProvider::SetColour(int id, const wxColour & colour)
	void SetColour(int id, const wxColour & colour) {
		THROW_IF(!_obj.pushFunction("SetColour"),"No implementation for abstract function wxRibbonArtProvider::SetColour");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(id);
		_obj.pushArg(&colour);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::GetColourScheme(wxColour * primary, wxColour * secondary, wxColour * tertiary) const
	void GetColourScheme(wxColour * primary, wxColour * secondary, wxColour * tertiary) const {
		THROW_IF(!_obj.pushFunction("GetColourScheme"),"No implementation for abstract function wxRibbonArtProvider::GetColourScheme");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(primary);
		_obj.pushArg(secondary);
		_obj.pushArg(tertiary);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::SetColourScheme(const wxColour & primary, const wxColour & secondary, const wxColour & tertiary)
	void SetColourScheme(const wxColour & primary, const wxColour & secondary, const wxColour & tertiary) {
		THROW_IF(!_obj.pushFunction("SetColourScheme"),"No implementation for abstract function wxRibbonArtProvider::SetColourScheme");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&primary);
		_obj.pushArg(&secondary);
		_obj.pushArg(&tertiary);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawTabCtrlBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawTabCtrlBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawTabCtrlBackground"),"No implementation for abstract function wxRibbonArtProvider::DrawTabCtrlBackground");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawTab(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfo & tab)
	void DrawTab(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfo & tab) {
		THROW_IF(!_obj.pushFunction("DrawTab"),"No implementation for abstract function wxRibbonArtProvider::DrawTab");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&tab);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawTabSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect, double visibility)
	void DrawTabSeparator(wxDC & dc, wxWindow * wnd, const wxRect & rect, double visibility) {
		THROW_IF(!_obj.pushFunction("DrawTabSeparator"),"No implementation for abstract function wxRibbonArtProvider::DrawTabSeparator");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		_obj.pushArg(visibility);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawPageBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawPageBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawPageBackground"),"No implementation for abstract function wxRibbonArtProvider::DrawPageBackground");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawScrollButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, long style)
	void DrawScrollButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, long style) {
		THROW_IF(!_obj.pushFunction("DrawScrollButton"),"No implementation for abstract function wxRibbonArtProvider::DrawScrollButton");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		_obj.pushArg(style);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawPanelBackground(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect)
	void DrawPanelBackground(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawPanelBackground"),"No implementation for abstract function wxRibbonArtProvider::DrawPanelBackground");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawGalleryBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect)
	void DrawGalleryBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawGalleryBackground"),"No implementation for abstract function wxRibbonArtProvider::DrawGalleryBackground");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawGalleryItemBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect, wxRibbonGalleryItem * item)
	void DrawGalleryItemBackground(wxDC & dc, wxRibbonGallery * wnd, const wxRect & rect, wxRibbonGalleryItem * item) {
		THROW_IF(!_obj.pushFunction("DrawGalleryItemBackground"),"No implementation for abstract function wxRibbonArtProvider::DrawGalleryItemBackground");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		_obj.pushArg(item);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawMinimisedPanel(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect, wxBitmap & bitmap)
	void DrawMinimisedPanel(wxDC & dc, wxRibbonPanel * wnd, const wxRect & rect, wxBitmap & bitmap) {
		THROW_IF(!_obj.pushFunction("DrawMinimisedPanel"),"No implementation for abstract function wxRibbonArtProvider::DrawMinimisedPanel");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		_obj.pushArg(&bitmap);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawButtonBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawButtonBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawButtonBarBackground"),"No implementation for abstract function wxRibbonArtProvider::DrawButtonBarBackground");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawButtonBarButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, wxRibbonButtonKind kind, long state, const wxString & label, const wxBitmap & bitmap_large, const wxBitmap & bitmap_small)
	void DrawButtonBarButton(wxDC & dc, wxWindow * wnd, const wxRect & rect, wxRibbonButtonKind kind, long state, const wxString & label, const wxBitmap & bitmap_large, const wxBitmap & bitmap_small) {
		THROW_IF(!_obj.pushFunction("DrawButtonBarButton"),"No implementation for abstract function wxRibbonArtProvider::DrawButtonBarButton");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		_obj.pushArg((int)kind);
		_obj.pushArg(state);
		_obj.pushArg(label);
		_obj.pushArg(&bitmap_large);
		_obj.pushArg(&bitmap_small);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawToolBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawToolBarBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawToolBarBackground"),"No implementation for abstract function wxRibbonArtProvider::DrawToolBarBackground");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawToolGroupBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect)
	void DrawToolGroupBackground(wxDC & dc, wxWindow * wnd, const wxRect & rect) {
		THROW_IF(!_obj.pushFunction("DrawToolGroupBackground"),"No implementation for abstract function wxRibbonArtProvider::DrawToolGroupBackground");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::DrawTool(wxDC & dc, wxWindow * wnd, const wxRect & rect, const wxBitmap & bitmap, wxRibbonButtonKind kind, long state)
	void DrawTool(wxDC & dc, wxWindow * wnd, const wxRect & rect, const wxBitmap & bitmap, wxRibbonButtonKind kind, long state) {
		THROW_IF(!_obj.pushFunction("DrawTool"),"No implementation for abstract function wxRibbonArtProvider::DrawTool");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&rect);
		_obj.pushArg(&bitmap);
		_obj.pushArg((int)kind);
		_obj.pushArg(state);
		return (_obj.callFunction<void>());
	};

	// void wxRibbonArtProvider::GetBarTabWidth(wxDC & dc, wxWindow * wnd, const wxString & label, const wxBitmap & bitmap, int * ideal, int * small_begin_need_separator, int * small_must_have_separator, int * minimum)
	void GetBarTabWidth(wxDC & dc, wxWindow * wnd, const wxString & label, const wxBitmap & bitmap, int * ideal, int * small_begin_need_separator, int * small_must_have_separator, int * minimum) {
		THROW_IF(!_obj.pushFunction("GetBarTabWidth"),"No implementation for abstract function wxRibbonArtProvider::GetBarTabWidth");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(label);
		_obj.pushArg(&bitmap);
		_obj.pushArg(ideal);
		_obj.pushArg(small_begin_need_separator);
		_obj.pushArg(small_must_have_separator);
		_obj.pushArg(minimum);
		return (_obj.callFunction<void>());
	};

	// int wxRibbonArtProvider::GetTabCtrlHeight(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfoArray & pages)
	int GetTabCtrlHeight(wxDC & dc, wxWindow * wnd, const wxRibbonPageTabInfoArray & pages) {
		THROW_IF(!_obj.pushFunction("GetTabCtrlHeight"),"No implementation for abstract function wxRibbonArtProvider::GetTabCtrlHeight");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&pages);
		return (_obj.callFunction<int>());
	};

	// wxSize wxRibbonArtProvider::GetScrollButtonMinimumSize(wxDC & dc, wxWindow * wnd, long style)
	wxSize GetScrollButtonMinimumSize(wxDC & dc, wxWindow * wnd, long style) {
		THROW_IF(!_obj.pushFunction("GetScrollButtonMinimumSize"),"No implementation for abstract function wxRibbonArtProvider::GetScrollButtonMinimumSize");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(style);
		return *(_obj.callFunction<wxSize*>());
	};

	// wxSize wxRibbonArtProvider::GetPanelSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize client_size, wxPoint * client_offset)
	wxSize GetPanelSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize client_size, wxPoint * client_offset) {
		THROW_IF(!_obj.pushFunction("GetPanelSize"),"No implementation for abstract function wxRibbonArtProvider::GetPanelSize");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&client_size);
		_obj.pushArg(client_offset);
		return *(_obj.callFunction<wxSize*>());
	};

	// wxSize wxRibbonArtProvider::GetPanelClientSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize size, wxPoint * client_offset)
	wxSize GetPanelClientSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize size, wxPoint * client_offset) {
		THROW_IF(!_obj.pushFunction("GetPanelClientSize"),"No implementation for abstract function wxRibbonArtProvider::GetPanelClientSize");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&size);
		_obj.pushArg(client_offset);
		return *(_obj.callFunction<wxSize*>());
	};

	// wxSize wxRibbonArtProvider::GetGallerySize(wxDC & dc, const wxRibbonGallery * wnd, wxSize client_size)
	wxSize GetGallerySize(wxDC & dc, const wxRibbonGallery * wnd, wxSize client_size) {
		THROW_IF(!_obj.pushFunction("GetGallerySize"),"No implementation for abstract function wxRibbonArtProvider::GetGallerySize");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&client_size);
		return *(_obj.callFunction<wxSize*>());
	};

	// wxSize wxRibbonArtProvider::GetGalleryClientSize(wxDC & dc, const wxRibbonGallery * wnd, wxSize size, wxPoint * client_offset, wxRect * scroll_up_button, wxRect * scroll_down_button, wxRect * extension_button)
	wxSize GetGalleryClientSize(wxDC & dc, const wxRibbonGallery * wnd, wxSize size, wxPoint * client_offset, wxRect * scroll_up_button, wxRect * scroll_down_button, wxRect * extension_button) {
		THROW_IF(!_obj.pushFunction("GetGalleryClientSize"),"No implementation for abstract function wxRibbonArtProvider::GetGalleryClientSize");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&size);
		_obj.pushArg(client_offset);
		_obj.pushArg(scroll_up_button);
		_obj.pushArg(scroll_down_button);
		_obj.pushArg(extension_button);
		return *(_obj.callFunction<wxSize*>());
	};

	// wxRect wxRibbonArtProvider::GetPageBackgroundRedrawArea(wxDC & dc, const wxRibbonPage * wnd, wxSize page_old_size, wxSize page_new_size)
	wxRect GetPageBackgroundRedrawArea(wxDC & dc, const wxRibbonPage * wnd, wxSize page_old_size, wxSize page_new_size) {
		THROW_IF(!_obj.pushFunction("GetPageBackgroundRedrawArea"),"No implementation for abstract function wxRibbonArtProvider::GetPageBackgroundRedrawArea");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&page_old_size);
		_obj.pushArg(&page_new_size);
		return *(_obj.callFunction<wxRect*>());
	};

	// bool wxRibbonArtProvider::GetButtonBarButtonSize(wxDC & dc, wxWindow * wnd, wxRibbonButtonKind kind, wxRibbonButtonBarButtonState size, const wxString & label, wxSize bitmap_size_large, wxSize bitmap_size_small, wxSize * button_size, wxRect * normal_region, wxRect * dropdown_region)
	bool GetButtonBarButtonSize(wxDC & dc, wxWindow * wnd, wxRibbonButtonKind kind, wxRibbonButtonBarButtonState size, const wxString & label, wxSize bitmap_size_large, wxSize bitmap_size_small, wxSize * button_size, wxRect * normal_region, wxRect * dropdown_region) {
		THROW_IF(!_obj.pushFunction("GetButtonBarButtonSize"),"No implementation for abstract function wxRibbonArtProvider::GetButtonBarButtonSize");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg((int)kind);
		_obj.pushArg((int)size);
		_obj.pushArg(label);
		_obj.pushArg(&bitmap_size_large);
		_obj.pushArg(&bitmap_size_small);
		_obj.pushArg(button_size);
		_obj.pushArg(normal_region);
		_obj.pushArg(dropdown_region);
		return (_obj.callFunction<bool>());
	};

	// wxSize wxRibbonArtProvider::GetMinimisedPanelMinimumSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize * desired_bitmap_size, wxDirection * expanded_panel_direction)
	wxSize GetMinimisedPanelMinimumSize(wxDC & dc, const wxRibbonPanel * wnd, wxSize * desired_bitmap_size, wxDirection * expanded_panel_direction) {
		THROW_IF(!_obj.pushFunction("GetMinimisedPanelMinimumSize"),"No implementation for abstract function wxRibbonArtProvider::GetMinimisedPanelMinimumSize");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(desired_bitmap_size);
		_obj.pushArg((int*)expanded_panel_direction);
		return *(_obj.callFunction<wxSize*>());
	};

	// wxSize wxRibbonArtProvider::GetToolSize(wxDC & dc, wxWindow * wnd, wxSize bitmap_size, wxRibbonButtonKind kind, bool is_first, bool is_last, wxRect * dropdown_region)
	wxSize GetToolSize(wxDC & dc, wxWindow * wnd, wxSize bitmap_size, wxRibbonButtonKind kind, bool is_first, bool is_last, wxRect * dropdown_region) {
		THROW_IF(!_obj.pushFunction("GetToolSize"),"No implementation for abstract function wxRibbonArtProvider::GetToolSize");
		_obj.pushArg((wxRibbonArtProvider*)this);
		_obj.pushArg(&dc);
		_obj.pushArg(wnd);
		_obj.pushArg(&bitmap_size);
		_obj.pushArg((int)kind);
		_obj.pushArg(is_first);
		_obj.pushArg(is_last);
		_obj.pushArg(dropdown_region);
		return *(_obj.callFunction<wxSize*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

