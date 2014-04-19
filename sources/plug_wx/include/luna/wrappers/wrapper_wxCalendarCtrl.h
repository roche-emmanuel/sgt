#ifndef _WRAPPERS_WRAPPER_WXCALENDARCTRL_H_
#define _WRAPPERS_WRAPPER_WXCALENDARCTRL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/calctrl.h>

class wrapper_wxCalendarCtrl : public wxCalendarCtrl, public luna_wrapper_base {

public:
		

	~wrapper_wxCalendarCtrl() {
		logDEBUG3("Calling delete function for wrapper wxCalendarCtrl");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxCalendarCtrl*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxCalendarCtrl(lua_State* L, lua_Table* dum) 
		: wxCalendarCtrl(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxCalendarCtrl(lua_State* L, lua_Table* dum, wxWindow * parent, int id, const wxDateTime & date = wxDefaultDateTime, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxCAL_SHOW_HOLIDAYS, const wxString & name = wxCalendarNameStr) 
		: wxCalendarCtrl(parent, id, date, pos, size, style, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCalendarCtrl::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCalendarCtrl::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxCalendarCtrl::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxCalendarCtrl::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxCalendarCtrl::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxCalendarCtrl::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxCalendarCtrl::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxCalendarCtrl::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxCalendarCtrl::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxCalendarCtrl::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxCalendarCtrl::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxCalendarCtrl::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxCalendarCtrl::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxCalendarCtrl::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxCalendarCtrl::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxCalendarCtrl::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxCalendarCtrl::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxCalendarCtrl::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxCalendarCtrl::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxCalendarCtrl::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxCalendarCtrl::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<long>());
		}

		return wxCalendarCtrl::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxCalendarCtrl::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxCalendarCtrl::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxCalendarCtrl::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxCalendarCtrl::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxCalendarCtrl::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxCalendarCtrl::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::InitDialog();
	};

	// bool wxWindow::IsDoubleBuffered() const
	bool IsDoubleBuffered() const {
		if(_obj.pushFunction("IsDoubleBuffered")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::IsDoubleBuffered();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxCalendarCtrl::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetLabel(label);
	};

	// void wxCalendarCtrl::EnableHolidayDisplay(bool display = true)
	void EnableHolidayDisplay(bool display = true) {
		if(_obj.pushFunction("EnableHolidayDisplay")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(display);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::EnableHolidayDisplay(display);
	};

	// bool wxCalendarCtrl::EnableMonthChange(bool enable = true)
	bool EnableMonthChange(bool enable = true) {
		if(_obj.pushFunction("EnableMonthChange")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::EnableMonthChange(enable);
	};

	// wxCalendarDateAttr * wxCalendarCtrl::GetAttr(size_t day) const
	wxCalendarDateAttr * GetAttr(size_t day) const {
		if(_obj.pushFunction("GetAttr")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(day);
			return (_obj.callFunction<wxCalendarDateAttr*>());
		}

		return wxCalendarCtrl::GetAttr(day);
	};

	// wxDateTime wxCalendarCtrl::GetDate() const
	wxDateTime GetDate() const {
		if(_obj.pushFunction("GetDate")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxDateTime*>());
		}

		return wxCalendarCtrl::GetDate();
	};

	// const wxColour & wxCalendarCtrl::GetHeaderColourBg() const
	const wxColour & GetHeaderColourBg() const {
		if(_obj.pushFunction("GetHeaderColourBg")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxColour*>());
		}

		return wxCalendarCtrl::GetHeaderColourBg();
	};

	// const wxColour & wxCalendarCtrl::GetHeaderColourFg() const
	const wxColour & GetHeaderColourFg() const {
		if(_obj.pushFunction("GetHeaderColourFg")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxColour*>());
		}

		return wxCalendarCtrl::GetHeaderColourFg();
	};

	// const wxColour & wxCalendarCtrl::GetHighlightColourBg() const
	const wxColour & GetHighlightColourBg() const {
		if(_obj.pushFunction("GetHighlightColourBg")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxColour*>());
		}

		return wxCalendarCtrl::GetHighlightColourBg();
	};

	// const wxColour & wxCalendarCtrl::GetHighlightColourFg() const
	const wxColour & GetHighlightColourFg() const {
		if(_obj.pushFunction("GetHighlightColourFg")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxColour*>());
		}

		return wxCalendarCtrl::GetHighlightColourFg();
	};

	// const wxColour & wxCalendarCtrl::GetHolidayColourBg() const
	const wxColour & GetHolidayColourBg() const {
		if(_obj.pushFunction("GetHolidayColourBg")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxColour*>());
		}

		return wxCalendarCtrl::GetHolidayColourBg();
	};

	// const wxColour & wxCalendarCtrl::GetHolidayColourFg() const
	const wxColour & GetHolidayColourFg() const {
		if(_obj.pushFunction("GetHolidayColourFg")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			return *(_obj.callFunction<wxColour*>());
		}

		return wxCalendarCtrl::GetHolidayColourFg();
	};

	// void wxCalendarCtrl::ResetAttr(size_t day)
	void ResetAttr(size_t day) {
		if(_obj.pushFunction("ResetAttr")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(day);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::ResetAttr(day);
	};

	// void wxCalendarCtrl::SetAttr(size_t day, wxCalendarDateAttr * attr)
	void SetAttr(size_t day, wxCalendarDateAttr * attr) {
		if(_obj.pushFunction("SetAttr")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(day);
			_obj.pushArg(attr);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetAttr(day, attr);
	};

	// bool wxCalendarCtrl::SetDate(const wxDateTime & date)
	bool SetDate(const wxDateTime & date) {
		if(_obj.pushFunction("SetDate")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&date);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::SetDate(date);
	};

	// void wxCalendarCtrl::SetHeaderColours(const wxColour & colFg, const wxColour & colBg)
	void SetHeaderColours(const wxColour & colFg, const wxColour & colBg) {
		if(_obj.pushFunction("SetHeaderColours")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&colFg);
			_obj.pushArg(&colBg);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetHeaderColours(colFg, colBg);
	};

	// void wxCalendarCtrl::SetHighlightColours(const wxColour & colFg, const wxColour & colBg)
	void SetHighlightColours(const wxColour & colFg, const wxColour & colBg) {
		if(_obj.pushFunction("SetHighlightColours")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&colFg);
			_obj.pushArg(&colBg);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetHighlightColours(colFg, colBg);
	};

	// void wxCalendarCtrl::SetHoliday(size_t day)
	void SetHoliday(size_t day) {
		if(_obj.pushFunction("SetHoliday")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(day);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetHoliday(day);
	};

	// void wxCalendarCtrl::SetHolidayColours(const wxColour & colFg, const wxColour & colBg)
	void SetHolidayColours(const wxColour & colFg, const wxColour & colBg) {
		if(_obj.pushFunction("SetHolidayColours")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&colFg);
			_obj.pushArg(&colBg);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::SetHolidayColours(colFg, colBg);
	};

	// void wxCalendarCtrl::Mark(size_t day, bool mark)
	void Mark(size_t day, bool mark) {
		if(_obj.pushFunction("Mark")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(day);
			_obj.pushArg(mark);
			return (_obj.callFunction<void>());
		}

		return wxCalendarCtrl::Mark(day, mark);
	};

	// bool wxCalendarCtrl::SetDateRange(const wxDateTime & lowerdate = wxDefaultDateTime, const wxDateTime & upperdate = wxDefaultDateTime)
	bool SetDateRange(const wxDateTime & lowerdate = wxDefaultDateTime, const wxDateTime & upperdate = wxDefaultDateTime) {
		if(_obj.pushFunction("SetDateRange")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(&lowerdate);
			_obj.pushArg(&upperdate);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::SetDateRange(lowerdate, upperdate);
	};

	// bool wxCalendarCtrl::GetDateRange(wxDateTime * lowerdate, wxDateTime * upperdate) const
	bool GetDateRange(wxDateTime * lowerdate, wxDateTime * upperdate) const {
		if(_obj.pushFunction("GetDateRange")) {
			_obj.pushArg((wxCalendarCtrl*)this);
			_obj.pushArg(lowerdate);
			_obj.pushArg(upperdate);
			return (_obj.callFunction<bool>());
		}

		return wxCalendarCtrl::GetDateRange(lowerdate, upperdate);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

