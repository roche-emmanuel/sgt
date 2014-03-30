#ifndef _WRAPPERS_WRAPPER_WXSEARCHCTRL_H_
#define _WRAPPERS_WRAPPER_WXSEARCHCTRL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/srchctrl.h>

class wrapper_wxSearchCtrl : public wxSearchCtrl, public luna_wrapper_base {

public:
		

	~wrapper_wxSearchCtrl() {
		logDEBUG3("Calling delete function for wrapper wxSearchCtrl");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSearchCtrl*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSearchCtrl(lua_State* L, lua_Table* dum) 
		: wxSearchCtrl(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxSearchCtrl(lua_State* L, lua_Table* dum, wxWindow * parent, int id, const wxString & value = wxEmptyString, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxSearchCtrlNameStr) 
		: wxSearchCtrl(parent, id, value, pos, size, style, validator, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSearchCtrl::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSearchCtrl::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSearchCtrl::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSearchCtrl::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxSearchCtrl::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxSearchCtrl::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxSearchCtrl::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSearchCtrl::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSearchCtrl::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSearchCtrl::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSearchCtrl::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSearchCtrl::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSearchCtrl::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSearchCtrl::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSearchCtrl::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxSearchCtrl::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxSearchCtrl::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxSearchCtrl::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxSearchCtrl::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxSearchCtrl::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxSearchCtrl::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<long>());
		}

		return wxSearchCtrl::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSearchCtrl::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxSearchCtrl::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxSearchCtrl::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSearchCtrl::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxSearchCtrl::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxSearchCtrl::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::InitDialog();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSearchCtrl::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetLabel(label);
	};

	// void wxTextEntry::AppendText(const wxString & text)
	void AppendText(const wxString & text) {
		if(_obj.pushFunction("AppendText")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::AppendText(text);
	};

	// bool wxTextEntry::CanCopy() const
	bool CanCopy() const {
		if(_obj.pushFunction("CanCopy")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::CanCopy();
	};

	// bool wxTextEntry::CanCut() const
	bool CanCut() const {
		if(_obj.pushFunction("CanCut")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::CanCut();
	};

	// bool wxTextEntry::CanPaste() const
	bool CanPaste() const {
		if(_obj.pushFunction("CanPaste")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::CanPaste();
	};

	// bool wxTextEntry::CanRedo() const
	bool CanRedo() const {
		if(_obj.pushFunction("CanRedo")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::CanRedo();
	};

	// bool wxTextEntry::CanUndo() const
	bool CanUndo() const {
		if(_obj.pushFunction("CanUndo")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::CanUndo();
	};

	// void wxTextEntry::ChangeValue(const wxString & value)
	void ChangeValue(const wxString & value) {
		if(_obj.pushFunction("ChangeValue")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::ChangeValue(value);
	};

	// void wxTextEntry::Clear()
	void Clear() {
		if(_obj.pushFunction("Clear")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Clear();
	};

	// void wxTextEntry::Copy()
	void Copy() {
		if(_obj.pushFunction("Copy")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Copy();
	};

	// long wxTextEntry::GetInsertionPoint() const
	long GetInsertionPoint() const {
		if(_obj.pushFunction("GetInsertionPoint")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<long>());
		}

		return wxSearchCtrl::GetInsertionPoint();
	};

	// long wxTextEntry::GetLastPosition() const
	long GetLastPosition() const {
		if(_obj.pushFunction("GetLastPosition")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<long>());
		}

		return wxSearchCtrl::GetLastPosition();
	};

	// wxString wxTextEntry::GetRange(long from, long to) const
	wxString GetRange(long from, long to) const {
		if(_obj.pushFunction("GetRange")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSearchCtrl::GetRange(from, to);
	};

	// void wxTextEntry::GetSelection(long * from, long * to) const
	void GetSelection(long * from, long * to) const {
		if(_obj.pushFunction("GetSelection")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::GetSelection(from, to);
	};

	// wxString wxTextEntry::GetStringSelection() const
	wxString GetStringSelection() const {
		if(_obj.pushFunction("GetStringSelection")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSearchCtrl::GetStringSelection();
	};

	// wxString wxTextEntry::GetValue() const
	wxString GetValue() const {
		if(_obj.pushFunction("GetValue")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSearchCtrl::GetValue();
	};

	// bool wxTextEntry::IsEditable() const
	bool IsEditable() const {
		if(_obj.pushFunction("IsEditable")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::IsEditable();
	};

	// bool wxTextEntry::IsEmpty() const
	bool IsEmpty() const {
		if(_obj.pushFunction("IsEmpty")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::IsEmpty();
	};

	// void wxTextEntry::Paste()
	void Paste() {
		if(_obj.pushFunction("Paste")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Paste();
	};

	// void wxTextEntry::Redo()
	void Redo() {
		if(_obj.pushFunction("Redo")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Redo();
	};

	// void wxTextEntry::Remove(long from, long to)
	void Remove(long from, long to) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Remove(from, to);
	};

	// void wxTextEntry::Replace(long from, long to, const wxString & value)
	void Replace(long from, long to, const wxString & value) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Replace(from, to, value);
	};

	// void wxTextEntry::SetEditable(bool editable)
	void SetEditable(bool editable) {
		if(_obj.pushFunction("SetEditable")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(editable);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetEditable(editable);
	};

	// void wxTextEntry::SetInsertionPoint(long pos)
	void SetInsertionPoint(long pos) {
		if(_obj.pushFunction("SetInsertionPoint")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(pos);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetInsertionPoint(pos);
	};

	// void wxTextEntry::SetInsertionPointEnd()
	void SetInsertionPointEnd() {
		if(_obj.pushFunction("SetInsertionPointEnd")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetInsertionPointEnd();
	};

	// void wxTextEntry::SetMaxLength(unsigned long len)
	void SetMaxLength(unsigned long len) {
		if(_obj.pushFunction("SetMaxLength")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(len);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetMaxLength(len);
	};

	// void wxTextEntry::SetSelection(long from, long to)
	void SetSelection(long from, long to) {
		if(_obj.pushFunction("SetSelection")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetSelection(from, to);
	};

	// void wxTextEntry::SelectAll()
	void SelectAll() {
		if(_obj.pushFunction("SelectAll")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SelectAll();
	};

	// bool wxTextEntry::SetHint(const wxString & hint)
	bool SetHint(const wxString & hint) {
		if(_obj.pushFunction("SetHint")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(hint);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::SetHint(hint);
	};

	// wxString wxTextEntry::GetHint() const
	wxString GetHint() const {
		if(_obj.pushFunction("GetHint")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSearchCtrl::GetHint();
	};

	// void wxTextEntry::SetValue(const wxString & value)
	void SetValue(const wxString & value) {
		if(_obj.pushFunction("SetValue")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetValue(value);
	};

	// void wxTextEntry::Undo()
	void Undo() {
		if(_obj.pushFunction("Undo")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Undo();
	};

	// void wxTextEntry::WriteText(const wxString & text)
	void WriteText(const wxString & text) {
		if(_obj.pushFunction("WriteText")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::WriteText(text);
	};

	// void wxTextCtrl::Cut()
	void Cut() {
		if(_obj.pushFunction("Cut")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::Cut();
	};

	// void wxTextCtrl::DiscardEdits()
	void DiscardEdits() {
		if(_obj.pushFunction("DiscardEdits")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::DiscardEdits();
	};

	// bool wxTextCtrl::EmulateKeyPress(const wxKeyEvent & event)
	bool EmulateKeyPress(const wxKeyEvent & event) {
		if(_obj.pushFunction("EmulateKeyPress")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::EmulateKeyPress(event);
	};

	// const wxTextAttr & wxTextCtrl::GetDefaultStyle() const
	const wxTextAttr & GetDefaultStyle() const {
		if(_obj.pushFunction("GetDefaultStyle")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return *(_obj.callFunction<wxTextAttr*>());
		}

		return wxSearchCtrl::GetDefaultStyle();
	};

	// int wxTextCtrl::GetLineLength(long lineNo) const
	int GetLineLength(long lineNo) const {
		if(_obj.pushFunction("GetLineLength")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(lineNo);
			return (_obj.callFunction<int>());
		}

		return wxSearchCtrl::GetLineLength(lineNo);
	};

	// wxString wxTextCtrl::GetLineText(long lineNo) const
	wxString GetLineText(long lineNo) const {
		if(_obj.pushFunction("GetLineText")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(lineNo);
			return *(_obj.callFunction<wxString*>());
		}

		return wxSearchCtrl::GetLineText(lineNo);
	};

	// int wxTextCtrl::GetNumberOfLines() const
	int GetNumberOfLines() const {
		if(_obj.pushFunction("GetNumberOfLines")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxSearchCtrl::GetNumberOfLines();
	};

	// bool wxTextCtrl::GetStyle(long position, wxTextAttr & style)
	bool GetStyle(long position, wxTextAttr & style) {
		if(_obj.pushFunction("GetStyle")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(position);
			_obj.pushArg(&style);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::GetStyle(position, style);
	};

	// bool wxTextCtrl::IsModified() const
	bool IsModified() const {
		if(_obj.pushFunction("IsModified")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::IsModified();
	};

	// void wxTextCtrl::MarkDirty()
	void MarkDirty() {
		if(_obj.pushFunction("MarkDirty")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::MarkDirty();
	};

	// bool wxTextCtrl::PositionToXY(long pos, long * x, long * y) const
	bool PositionToXY(long pos, long * x, long * y) const {
		if(_obj.pushFunction("PositionToXY")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(pos);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::PositionToXY(pos, x, y);
	};

	// bool wxTextCtrl::SetDefaultStyle(const wxTextAttr & style)
	bool SetDefaultStyle(const wxTextAttr & style) {
		if(_obj.pushFunction("SetDefaultStyle")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(&style);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::SetDefaultStyle(style);
	};

	// bool wxTextCtrl::SetStyle(long start, long end, const wxTextAttr & style)
	bool SetStyle(long start, long end, const wxTextAttr & style) {
		if(_obj.pushFunction("SetStyle")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(start);
			_obj.pushArg(end);
			_obj.pushArg(&style);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::SetStyle(start, end, style);
	};

	// void wxTextCtrl::ShowPosition(long pos)
	void ShowPosition(long pos) {
		if(_obj.pushFunction("ShowPosition")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(pos);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::ShowPosition(pos);
	};

	// long wxTextCtrl::XYToPosition(long x, long y) const
	long XYToPosition(long x, long y) const {
		if(_obj.pushFunction("XYToPosition")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<long>());
		}

		return wxSearchCtrl::XYToPosition(x, y);
	};

	// wxMenu * wxSearchCtrl::GetMenu()
	wxMenu * GetMenu() {
		if(_obj.pushFunction("GetMenu")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<wxMenu*>());
		}

		return wxSearchCtrl::GetMenu();
	};

	// bool wxSearchCtrl::IsSearchButtonVisible() const
	bool IsSearchButtonVisible() const {
		if(_obj.pushFunction("IsSearchButtonVisible")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::IsSearchButtonVisible();
	};

	// bool wxSearchCtrl::IsCancelButtonVisible() const
	bool IsCancelButtonVisible() const {
		if(_obj.pushFunction("IsCancelButtonVisible")) {
			_obj.pushArg((wxSearchCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxSearchCtrl::IsCancelButtonVisible();
	};

	// void wxSearchCtrl::SetMenu(wxMenu * menu)
	void SetMenu(wxMenu * menu) {
		if(_obj.pushFunction("SetMenu")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(menu);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::SetMenu(menu);
	};

	// void wxSearchCtrl::ShowCancelButton(bool show)
	void ShowCancelButton(bool show) {
		if(_obj.pushFunction("ShowCancelButton")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::ShowCancelButton(show);
	};

	// void wxSearchCtrl::ShowSearchButton(bool show)
	void ShowSearchButton(bool show) {
		if(_obj.pushFunction("ShowSearchButton")) {
			_obj.pushArg((wxSearchCtrl*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<void>());
		}

		return wxSearchCtrl::ShowSearchButton(show);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

