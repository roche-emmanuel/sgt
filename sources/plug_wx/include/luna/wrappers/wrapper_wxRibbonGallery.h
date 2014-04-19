#ifndef _WRAPPERS_WRAPPER_WXRIBBONGALLERY_H_
#define _WRAPPERS_WRAPPER_WXRIBBONGALLERY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/ribbon/gallery.h>

class wrapper_wxRibbonGallery : public wxRibbonGallery, public luna_wrapper_base {

public:
		

	~wrapper_wxRibbonGallery() {
		logDEBUG3("Calling delete function for wrapper wxRibbonGallery");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRibbonGallery*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxRibbonGallery(lua_State* L, lua_Table* dum) 
		: wxRibbonGallery(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxRibbonGallery(lua_State* L, lua_Table* dum, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0) 
		: wxRibbonGallery(parent, id, pos, size, style), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRibbonGallery::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRibbonGallery::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::AddPendingEvent(event);
	};

	// wxSize wxRibbonControl::DoGetNextSmallerSize(wxOrientation direction, wxSize relative_to) const
	wxSize DoGetNextSmallerSize(wxOrientation direction, wxSize relative_to) const {
		if(_obj.pushFunction("DoGetNextSmallerSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg((int)direction);
			_obj.pushArg(&relative_to);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::DoGetNextSmallerSize(direction, relative_to);
	};

	// wxSize wxRibbonControl::DoGetNextLargerSize(wxOrientation direction, wxSize relative_to) const
	wxSize DoGetNextLargerSize(wxOrientation direction, wxSize relative_to) const {
		if(_obj.pushFunction("DoGetNextLargerSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg((int)direction);
			_obj.pushArg(&relative_to);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::DoGetNextLargerSize(direction, relative_to);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRibbonGallery::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxRibbonGallery::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxRibbonGallery::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxRibbonGallery::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRibbonGallery::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxRibbonGallery::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxRibbonGallery::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<int>());
		}

		return wxRibbonGallery::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<int>());
		}

		return wxRibbonGallery::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxRibbonGallery::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<long>());
		}

		return wxRibbonGallery::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRibbonGallery::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxRibbonGallery::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxRibbonGallery::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRibbonGallery::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxRibbonGallery::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxRibbonGallery::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::InitDialog();
	};

	// bool wxWindow::IsDoubleBuffered() const
	bool IsDoubleBuffered() const {
		if(_obj.pushFunction("IsDoubleBuffered")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::IsDoubleBuffered();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRibbonGallery::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetLabel(label);
	};

	// void wxRibbonControl::SetArtProvider(wxRibbonArtProvider * art)
	void SetArtProvider(wxRibbonArtProvider * art) {
		if(_obj.pushFunction("SetArtProvider")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(art);
			return (_obj.callFunction<void>());
		}

		return wxRibbonGallery::SetArtProvider(art);
	};

	// bool wxRibbonControl::IsSizingContinuous() const
	bool IsSizingContinuous() const {
		if(_obj.pushFunction("IsSizingContinuous")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::IsSizingContinuous();
	};

	// bool wxRibbonControl::Realize()
	bool Realize() {
		if(_obj.pushFunction("Realize")) {
			_obj.pushArg((wxRibbonGallery*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::Realize();
	};

	// bool wxRibbonGallery::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxRibbonGallery*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxRibbonGallery::ScrollLines(lines);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

