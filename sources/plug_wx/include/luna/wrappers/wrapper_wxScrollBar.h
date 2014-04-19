#ifndef _WRAPPERS_WRAPPER_WXSCROLLBAR_H_
#define _WRAPPERS_WRAPPER_WXSCROLLBAR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/scrolbar.h>

class wrapper_wxScrollBar : public wxScrollBar, public luna_wrapper_base {

public:
		

	~wrapper_wxScrollBar() {
		logDEBUG3("Calling delete function for wrapper wxScrollBar");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxScrollBar*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxScrollBar(lua_State* L, lua_Table* dum) 
		: wxScrollBar(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxScrollBar(lua_State* L, lua_Table* dum, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxSB_HORIZONTAL, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxScrollBarNameStr) 
		: wxScrollBar(parent, id, pos, size, style, validator, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxScrollBar::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxScrollBar::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxScrollBar::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxScrollBar::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxScrollBar::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxScrollBar::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxScrollBar::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetScrollPos(orientation, pos, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxScrollBar::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxScrollBar::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxScrollBar::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxScrollBar::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxScrollBar::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxScrollBar::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxScrollBar::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxScrollBar::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxScrollBar::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxScrollBar::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxScrollBar*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxScrollBar::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<int>());
		}

		return wxScrollBar::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<int>());
		}

		return wxScrollBar::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxScrollBar::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<long>());
		}

		return wxScrollBar::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxScrollBar::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxScrollBar::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxScrollBar*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxScrollBar::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxScrollBar::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxScrollBar::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxScrollBar::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::InitDialog();
	};

	// bool wxWindow::IsDoubleBuffered() const
	bool IsDoubleBuffered() const {
		if(_obj.pushFunction("IsDoubleBuffered")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::IsDoubleBuffered();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxScrollBar::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxScrollBar*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxScrollBar::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetLabel(label);
	};

	// int wxScrollBar::GetPageSize() const
	int GetPageSize() const {
		if(_obj.pushFunction("GetPageSize")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<int>());
		}

		return wxScrollBar::GetPageSize();
	};

	// int wxScrollBar::GetRange() const
	int GetRange() const {
		if(_obj.pushFunction("GetRange")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<int>());
		}

		return wxScrollBar::GetRange();
	};

	// int wxScrollBar::GetThumbPosition() const
	int GetThumbPosition() const {
		if(_obj.pushFunction("GetThumbPosition")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<int>());
		}

		return wxScrollBar::GetThumbPosition();
	};

	// int wxScrollBar::GetThumbSize() const
	int GetThumbSize() const {
		if(_obj.pushFunction("GetThumbSize")) {
			_obj.pushArg((wxScrollBar*)this);
			return (_obj.callFunction<int>());
		}

		return wxScrollBar::GetThumbSize();
	};

	// void wxScrollBar::SetScrollbar(int position, int thumbSize, int range, int pageSize, bool refresh = true)
	void SetScrollbar(int position, int thumbSize, int range, int pageSize, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(pageSize);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetScrollbar(position, thumbSize, range, pageSize, refresh);
	};

	// void wxScrollBar::SetThumbPosition(int viewStart)
	void SetThumbPosition(int viewStart) {
		if(_obj.pushFunction("SetThumbPosition")) {
			_obj.pushArg((wxScrollBar*)this);
			_obj.pushArg(viewStart);
			return (_obj.callFunction<void>());
		}

		return wxScrollBar::SetThumbPosition(viewStart);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

