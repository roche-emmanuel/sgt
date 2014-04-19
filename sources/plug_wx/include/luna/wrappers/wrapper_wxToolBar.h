#ifndef _WRAPPERS_WRAPPER_WXTOOLBAR_H_
#define _WRAPPERS_WRAPPER_WXTOOLBAR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/toolbar.h>

class wrapper_wxToolBar : public wxToolBar, public luna_wrapper_base {

public:
		

	~wrapper_wxToolBar() {
		logDEBUG3("Calling delete function for wrapper wxToolBar");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxToolBar*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxToolBar(lua_State* L, lua_Table* dum) 
		: wxToolBar(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxToolBar(lua_State* L, lua_Table* dum, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxTB_HORIZONTAL, const wxString & name = wxToolBarNameStr) 
		: wxToolBar(parent, id, pos, size, style, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxToolBar::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxToolBar::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxToolBar::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxToolBar::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxToolBar::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxToolBar::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxToolBar::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxToolBar*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxToolBar::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<int>());
		}

		return wxToolBar::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<int>());
		}

		return wxToolBar::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxToolBar::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<long>());
		}

		return wxToolBar::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxToolBar::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxToolBar::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxToolBar*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxToolBar::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxToolBar::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxToolBar::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxToolBar::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::InitDialog();
	};

	// bool wxWindow::IsDoubleBuffered() const
	bool IsDoubleBuffered() const {
		if(_obj.pushFunction("IsDoubleBuffered")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::IsDoubleBuffered();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxToolBar::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetLabel(label);
	};

	// wxToolBarToolBase * wxToolBar::AddControl(wxControl * control, const wxString & label = wxEmptyString)
	wxToolBarToolBase * AddControl(wxControl * control, const wxString & label = wxEmptyString) {
		if(_obj.pushFunction("AddControl")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(control);
			_obj.pushArg(label);
			return (_obj.callFunction<wxToolBarToolBase*>());
		}

		return wxToolBar::AddControl(control, label);
	};

	// wxToolBarToolBase * wxToolBar::AddSeparator()
	wxToolBarToolBase * AddSeparator() {
		if(_obj.pushFunction("AddSeparator")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<wxToolBarToolBase*>());
		}

		return wxToolBar::AddSeparator();
	};

	// wxToolBarToolBase * wxToolBar::AddTool(wxToolBarToolBase * tool)
	wxToolBarToolBase * AddTool(wxToolBarToolBase * tool) {
		if(_obj.pushFunction("AddTool")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(tool);
			return (_obj.callFunction<wxToolBarToolBase*>());
		}

		return wxToolBar::AddTool(tool);
	};

	// void wxToolBar::ClearTools()
	void ClearTools() {
		if(_obj.pushFunction("ClearTools")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::ClearTools();
	};

	// bool wxToolBar::DeleteTool(int toolId)
	bool DeleteTool(int toolId) {
		if(_obj.pushFunction("DeleteTool")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::DeleteTool(toolId);
	};

	// bool wxToolBar::DeleteToolByPos(size_t pos)
	bool DeleteToolByPos(size_t pos) {
		if(_obj.pushFunction("DeleteToolByPos")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(pos);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::DeleteToolByPos(pos);
	};

	// void wxToolBar::EnableTool(int toolId, bool enable)
	void EnableTool(int toolId, bool enable) {
		if(_obj.pushFunction("EnableTool")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::EnableTool(toolId, enable);
	};

	// wxControl * wxToolBar::FindControl(int id)
	wxControl * FindControl(int id) {
		if(_obj.pushFunction("FindControl")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(id);
			return (_obj.callFunction<wxControl*>());
		}

		return wxToolBar::FindControl(id);
	};

	// wxToolBarToolBase * wxToolBar::FindToolForPosition(int x, int y) const
	wxToolBarToolBase * FindToolForPosition(int x, int y) const {
		if(_obj.pushFunction("FindToolForPosition")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<wxToolBarToolBase*>());
		}

		return wxToolBar::FindToolForPosition(x, y);
	};

	// wxSize wxToolBar::GetToolBitmapSize() const
	wxSize GetToolBitmapSize() const {
		if(_obj.pushFunction("GetToolBitmapSize")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::GetToolBitmapSize();
	};

	// wxObject * wxToolBar::GetToolClientData(int toolId) const
	wxObject * GetToolClientData(int toolId) const {
		if(_obj.pushFunction("GetToolClientData")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			return (_obj.callFunction<wxObject*>());
		}

		return wxToolBar::GetToolClientData(toolId);
	};

	// bool wxToolBar::GetToolEnabled(int toolId) const
	bool GetToolEnabled(int toolId) const {
		if(_obj.pushFunction("GetToolEnabled")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::GetToolEnabled(toolId);
	};

	// wxString wxToolBar::GetToolLongHelp(int toolId) const
	wxString GetToolLongHelp(int toolId) const {
		if(_obj.pushFunction("GetToolLongHelp")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			return *(_obj.callFunction<wxString*>());
		}

		return wxToolBar::GetToolLongHelp(toolId);
	};

	// int wxToolBar::GetToolPacking() const
	int GetToolPacking() const {
		if(_obj.pushFunction("GetToolPacking")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<int>());
		}

		return wxToolBar::GetToolPacking();
	};

	// int wxToolBar::GetToolPos(int toolId) const
	int GetToolPos(int toolId) const {
		if(_obj.pushFunction("GetToolPos")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			return (_obj.callFunction<int>());
		}

		return wxToolBar::GetToolPos(toolId);
	};

	// int wxToolBar::GetToolSeparation() const
	int GetToolSeparation() const {
		if(_obj.pushFunction("GetToolSeparation")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<int>());
		}

		return wxToolBar::GetToolSeparation();
	};

	// wxString wxToolBar::GetToolShortHelp(int toolId) const
	wxString GetToolShortHelp(int toolId) const {
		if(_obj.pushFunction("GetToolShortHelp")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			return *(_obj.callFunction<wxString*>());
		}

		return wxToolBar::GetToolShortHelp(toolId);
	};

	// wxSize wxToolBar::GetToolSize() const
	wxSize GetToolSize() const {
		if(_obj.pushFunction("GetToolSize")) {
			_obj.pushArg((wxToolBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxToolBar::GetToolSize();
	};

	// bool wxToolBar::GetToolState(int toolId) const
	bool GetToolState(int toolId) const {
		if(_obj.pushFunction("GetToolState")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::GetToolState(toolId);
	};

	// wxToolBarToolBase * wxToolBar::InsertControl(size_t pos, wxControl * control, const wxString & label = wxEmptyString)
	wxToolBarToolBase * InsertControl(size_t pos, wxControl * control, const wxString & label = wxEmptyString) {
		if(_obj.pushFunction("InsertControl")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(pos);
			_obj.pushArg(control);
			_obj.pushArg(label);
			return (_obj.callFunction<wxToolBarToolBase*>());
		}

		return wxToolBar::InsertControl(pos, control, label);
	};

	// wxToolBarToolBase * wxToolBar::InsertSeparator(size_t pos)
	wxToolBarToolBase * InsertSeparator(size_t pos) {
		if(_obj.pushFunction("InsertSeparator")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(pos);
			return (_obj.callFunction<wxToolBarToolBase*>());
		}

		return wxToolBar::InsertSeparator(pos);
	};

	// bool wxToolBar::OnLeftClick(int toolId, bool toggleDown)
	bool OnLeftClick(int toolId, bool toggleDown) {
		if(_obj.pushFunction("OnLeftClick")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			_obj.pushArg(toggleDown);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::OnLeftClick(toolId, toggleDown);
	};

	// void wxToolBar::OnMouseEnter(int toolId)
	void OnMouseEnter(int toolId) {
		if(_obj.pushFunction("OnMouseEnter")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::OnMouseEnter(toolId);
	};

	// void wxToolBar::OnRightClick(int toolId, long x, long y)
	void OnRightClick(int toolId, long x, long y) {
		if(_obj.pushFunction("OnRightClick")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::OnRightClick(toolId, x, y);
	};

	// bool wxToolBar::Realize()
	bool Realize() {
		if(_obj.pushFunction("Realize")) {
			_obj.pushArg((wxToolBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxToolBar::Realize();
	};

	// wxToolBarToolBase * wxToolBar::RemoveTool(int id)
	wxToolBarToolBase * RemoveTool(int id) {
		if(_obj.pushFunction("RemoveTool")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(id);
			return (_obj.callFunction<wxToolBarToolBase*>());
		}

		return wxToolBar::RemoveTool(id);
	};

	// void wxToolBar::SetMargins(int x, int y)
	void SetMargins(int x, int y) {
		if(_obj.pushFunction("SetMargins")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetMargins(x, y);
	};

	// void wxToolBar::SetToolBitmapSize(const wxSize & size)
	void SetToolBitmapSize(const wxSize & size) {
		if(_obj.pushFunction("SetToolBitmapSize")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetToolBitmapSize(size);
	};

	// void wxToolBar::SetToolClientData(int id, wxObject * clientData)
	void SetToolClientData(int id, wxObject * clientData) {
		if(_obj.pushFunction("SetToolClientData")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(id);
			_obj.pushArg(clientData);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetToolClientData(id, clientData);
	};

	// void wxToolBar::SetToolDisabledBitmap(int id, const wxBitmap & bitmap)
	void SetToolDisabledBitmap(int id, const wxBitmap & bitmap) {
		if(_obj.pushFunction("SetToolDisabledBitmap")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(id);
			_obj.pushArg(&bitmap);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetToolDisabledBitmap(id, bitmap);
	};

	// void wxToolBar::SetToolLongHelp(int toolId, const wxString & helpString)
	void SetToolLongHelp(int toolId, const wxString & helpString) {
		if(_obj.pushFunction("SetToolLongHelp")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			_obj.pushArg(helpString);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetToolLongHelp(toolId, helpString);
	};

	// void wxToolBar::SetToolNormalBitmap(int id, const wxBitmap & bitmap)
	void SetToolNormalBitmap(int id, const wxBitmap & bitmap) {
		if(_obj.pushFunction("SetToolNormalBitmap")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(id);
			_obj.pushArg(&bitmap);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetToolNormalBitmap(id, bitmap);
	};

	// void wxToolBar::SetToolPacking(int packing)
	void SetToolPacking(int packing) {
		if(_obj.pushFunction("SetToolPacking")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(packing);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetToolPacking(packing);
	};

	// void wxToolBar::SetToolSeparation(int separation)
	void SetToolSeparation(int separation) {
		if(_obj.pushFunction("SetToolSeparation")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(separation);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetToolSeparation(separation);
	};

	// void wxToolBar::SetToolShortHelp(int toolId, const wxString & helpString)
	void SetToolShortHelp(int toolId, const wxString & helpString) {
		if(_obj.pushFunction("SetToolShortHelp")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			_obj.pushArg(helpString);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::SetToolShortHelp(toolId, helpString);
	};

	// void wxToolBar::ToggleTool(int toolId, bool toggle)
	void ToggleTool(int toolId, bool toggle) {
		if(_obj.pushFunction("ToggleTool")) {
			_obj.pushArg((wxToolBar*)this);
			_obj.pushArg(toolId);
			_obj.pushArg(toggle);
			return (_obj.callFunction<void>());
		}

		return wxToolBar::ToggleTool(toolId, toggle);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

