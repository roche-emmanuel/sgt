#ifndef _WRAPPERS_WRAPPER_WXSPLASHSCREEN_H_
#define _WRAPPERS_WRAPPER_WXSPLASHSCREEN_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/splash.h>

class wrapper_wxSplashScreen : public wxSplashScreen, public luna_wrapper_base {

public:
		

	~wrapper_wxSplashScreen() {
		logDEBUG3("Calling delete function for wrapper wxSplashScreen");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSplashScreen*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSplashScreen(lua_State* L, lua_Table* dum, const wxBitmap & bitmap, long splashStyle, int milliseconds, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxBORDER_SIMPLE | wxFRAME_NO_TASKBAR | wxSTAY_ON_TOP) 
		: wxSplashScreen(bitmap, splashStyle, milliseconds, parent, id, pos, size, style), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSplashScreen::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSplashScreen::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSplashScreen::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSplashScreen::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxSplashScreen::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxSplashScreen::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxSplashScreen::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSplashScreen::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSplashScreen::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSplashScreen::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSplashScreen::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSplashScreen::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSplashScreen::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSplashScreen::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSplashScreen::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSplashScreen::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetMaxClientSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetMinClientSize(size);
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxSplashScreen::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<int>());
		}

		return wxSplashScreen::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<int>());
		}

		return wxSplashScreen::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxSplashScreen::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::GetThemeEnabled();
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<long>());
		}

		return wxSplashScreen::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSplashScreen::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxSplashScreen::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::Validate();
	};

	// wxString wxWindow::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSplashScreen::GetLabel();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxSplashScreen::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSplashScreen::GetName();
	};

	// void wxWindow::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetLabel(label);
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxSplashScreen::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::DragAcceptFiles(accept);
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxSplashScreen::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::InitDialog();
	};

	// bool wxWindow::IsDoubleBuffered() const
	bool IsDoubleBuffered() const {
		if(_obj.pushFunction("IsDoubleBuffered")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::IsDoubleBuffered();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::UpdateWindowUI(flags);
	};

	// bool wxTopLevelWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::CanSetTransparent();
	};

	// bool wxTopLevelWindow::EnableCloseButton(bool enable = true)
	bool EnableCloseButton(bool enable = true) {
		if(_obj.pushFunction("EnableCloseButton")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::EnableCloseButton(enable);
	};

	// wxString wxTopLevelWindow::GetTitle() const
	wxString GetTitle() const {
		if(_obj.pushFunction("GetTitle")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSplashScreen::GetTitle();
	};

	// void wxTopLevelWindow::Iconize(bool iconize = true)
	void Iconize(bool iconize = true) {
		if(_obj.pushFunction("Iconize")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(iconize);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::Iconize(iconize);
	};

	// bool wxTopLevelWindow::IsActive()
	bool IsActive() {
		if(_obj.pushFunction("IsActive")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::IsActive();
	};

	// bool wxTopLevelWindow::IsAlwaysMaximized() const
	bool IsAlwaysMaximized() const {
		if(_obj.pushFunction("IsAlwaysMaximized")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::IsAlwaysMaximized();
	};

	// bool wxTopLevelWindow::IsFullScreen() const
	bool IsFullScreen() const {
		if(_obj.pushFunction("IsFullScreen")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::IsFullScreen();
	};

	// bool wxTopLevelWindow::IsIconized() const
	bool IsIconized() const {
		if(_obj.pushFunction("IsIconized")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::IsIconized();
	};

	// bool wxTopLevelWindow::IsMaximized() const
	bool IsMaximized() const {
		if(_obj.pushFunction("IsMaximized")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::IsMaximized();
	};

	// bool wxTopLevelWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::Layout();
	};

	// void wxTopLevelWindow::Maximize(bool maximize = true)
	void Maximize(bool maximize = true) {
		if(_obj.pushFunction("Maximize")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(maximize);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::Maximize(maximize);
	};

	// void wxTopLevelWindow::RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	void RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) {
		if(_obj.pushFunction("RequestUserAttention")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::RequestUserAttention(flags);
	};

	// void wxTopLevelWindow::SetIcons(const wxIconBundle & icons)
	void SetIcons(const wxIconBundle & icons) {
		if(_obj.pushFunction("SetIcons")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&icons);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetIcons(icons);
	};

	// void wxTopLevelWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetMaxSize(size);
	};

	// void wxTopLevelWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetMinSize(size);
	};

	// void wxTopLevelWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// void wxTopLevelWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxTopLevelWindow::SetTitle(const wxString & title)
	void SetTitle(const wxString & title) {
		if(_obj.pushFunction("SetTitle")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(title);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetTitle(title);
	};

	// bool wxTopLevelWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::SetTransparent(alpha);
	};

	// bool wxTopLevelWindow::ShouldPreventAppExit() const
	bool ShouldPreventAppExit() const {
		if(_obj.pushFunction("ShouldPreventAppExit")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::ShouldPreventAppExit();
	};

	// void wxTopLevelWindow::OSXSetModified(bool modified)
	void OSXSetModified(bool modified) {
		if(_obj.pushFunction("OSXSetModified")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(modified);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::OSXSetModified(modified);
	};

	// bool wxTopLevelWindow::OSXIsModified() const
	bool OSXIsModified() const {
		if(_obj.pushFunction("OSXIsModified")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::OSXIsModified();
	};

	// bool wxTopLevelWindow::ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	bool ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) {
		if(_obj.pushFunction("ShowFullScreen")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(show);
			_obj.pushArg(style);
			return (_obj.callFunction<bool>());
		}

		return wxSplashScreen::ShowFullScreen(show, style);
	};

	// wxStatusBar * wxFrame::CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)
	wxStatusBar * CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr) {
		if(_obj.pushFunction("CreateStatusBar")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(number);
			_obj.pushArg(style);
			_obj.pushArg(id);
			_obj.pushArg(name);
			return (_obj.callFunction<wxStatusBar*>());
		}

		return wxSplashScreen::CreateStatusBar(number, style, id, name);
	};

	// wxToolBar * wxFrame::CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr)
	wxToolBar * CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr) {
		if(_obj.pushFunction("CreateToolBar")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(style);
			_obj.pushArg(id);
			_obj.pushArg(name);
			return (_obj.callFunction<wxToolBar*>());
		}

		return wxSplashScreen::CreateToolBar(style, id, name);
	};

	// wxPoint wxFrame::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxSplashScreen*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxSplashScreen::GetClientAreaOrigin();
	};

	// wxMenuBar * wxFrame::GetMenuBar() const
	wxMenuBar * GetMenuBar() const {
		if(_obj.pushFunction("GetMenuBar")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<wxMenuBar*>());
		}

		return wxSplashScreen::GetMenuBar();
	};

	// wxStatusBar * wxFrame::GetStatusBar() const
	wxStatusBar * GetStatusBar() const {
		if(_obj.pushFunction("GetStatusBar")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<wxStatusBar*>());
		}

		return wxSplashScreen::GetStatusBar();
	};

	// wxToolBar * wxFrame::GetToolBar() const
	wxToolBar * GetToolBar() const {
		if(_obj.pushFunction("GetToolBar")) {
			_obj.pushArg((wxSplashScreen*)this);
			return (_obj.callFunction<wxToolBar*>());
		}

		return wxSplashScreen::GetToolBar();
	};

	// wxStatusBar * wxFrame::OnCreateStatusBar(int number, long style, int id, const wxString & name)
	wxStatusBar * OnCreateStatusBar(int number, long style, int id, const wxString & name) {
		if(_obj.pushFunction("OnCreateStatusBar")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(number);
			_obj.pushArg(style);
			_obj.pushArg(id);
			_obj.pushArg(name);
			return (_obj.callFunction<wxStatusBar*>());
		}

		return wxSplashScreen::OnCreateStatusBar(number, style, id, name);
	};

	// wxToolBar * wxFrame::OnCreateToolBar(long style, int id, const wxString & name)
	wxToolBar * OnCreateToolBar(long style, int id, const wxString & name) {
		if(_obj.pushFunction("OnCreateToolBar")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(style);
			_obj.pushArg(id);
			_obj.pushArg(name);
			return (_obj.callFunction<wxToolBar*>());
		}

		return wxSplashScreen::OnCreateToolBar(style, id, name);
	};

	// void wxFrame::SetMenuBar(wxMenuBar * menuBar)
	void SetMenuBar(wxMenuBar * menuBar) {
		if(_obj.pushFunction("SetMenuBar")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(menuBar);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetMenuBar(menuBar);
	};

	// void wxFrame::SetStatusBar(wxStatusBar * statusBar)
	void SetStatusBar(wxStatusBar * statusBar) {
		if(_obj.pushFunction("SetStatusBar")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(statusBar);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetStatusBar(statusBar);
	};

	// void wxFrame::SetStatusText(const wxString & text, int number = 0)
	void SetStatusText(const wxString & text, int number = 0) {
		if(_obj.pushFunction("SetStatusText")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(text);
			_obj.pushArg(number);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetStatusText(text, number);
	};

	// void wxFrame::SetStatusWidths(int n, const int * widths_field)
	void SetStatusWidths(int n, const int * widths_field) {
		if(_obj.pushFunction("SetStatusWidths")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(n);
			_obj.pushArg(widths_field);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetStatusWidths(n, widths_field);
	};

	// void wxFrame::SetToolBar(wxToolBar * toolBar)
	void SetToolBar(wxToolBar * toolBar) {
		if(_obj.pushFunction("SetToolBar")) {
			_obj.pushArg((wxSplashScreen*)this);
			_obj.pushArg(toolBar);
			return (_obj.callFunction<void>());
		}

		return wxSplashScreen::SetToolBar(toolBar);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

