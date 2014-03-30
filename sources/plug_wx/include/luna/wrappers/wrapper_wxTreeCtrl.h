#ifndef _WRAPPERS_WRAPPER_WXTREECTRL_H_
#define _WRAPPERS_WRAPPER_WXTREECTRL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/treectrl.h>

class wrapper_wxTreeCtrl : public wxTreeCtrl, public luna_wrapper_base {

public:
		

	~wrapper_wxTreeCtrl() {
		logDEBUG3("Calling delete function for wrapper wxTreeCtrl");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTreeCtrl*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTreeCtrl(lua_State* L, lua_Table* dum) 
		: wxTreeCtrl(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxTreeCtrl(lua_State* L, lua_Table* dum, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxTR_DEFAULT_STYLE, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxTreeCtrlNameStr) 
		: wxTreeCtrl(parent, id, pos, size, style, validator, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTreeCtrl::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTreeCtrl::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxTreeCtrl::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxTreeCtrl::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxTreeCtrl::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxTreeCtrl::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxTreeCtrl::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxTreeCtrl::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxTreeCtrl::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxTreeCtrl::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxTreeCtrl::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxTreeCtrl::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxTreeCtrl::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxTreeCtrl::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxTreeCtrl::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxTreeCtrl::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxTreeCtrl::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxTreeCtrl::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxTreeCtrl::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxTreeCtrl::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxTreeCtrl::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<long>());
		}

		return wxTreeCtrl::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxTreeCtrl::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxTreeCtrl::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxTreeCtrl::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxTreeCtrl::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxTreeCtrl::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxTreeCtrl::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::InitDialog();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxTreeCtrl::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetLabel(label);
	};

	// wxTreeItemId wxTreeCtrl::AddRoot(const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL)
	wxTreeItemId AddRoot(const wxString & text, int image = -1, int selImage = -1, wxTreeItemData * data = NULL) {
		if(_obj.pushFunction("AddRoot")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(text);
			_obj.pushArg(image);
			_obj.pushArg(selImage);
			_obj.pushArg(data);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::AddRoot(text, image, selImage, data);
	};

	// void wxTreeCtrl::Collapse(const wxTreeItemId & item)
	void Collapse(const wxTreeItemId & item) {
		if(_obj.pushFunction("Collapse")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::Collapse(item);
	};

	// void wxTreeCtrl::CollapseAndReset(const wxTreeItemId & item)
	void CollapseAndReset(const wxTreeItemId & item) {
		if(_obj.pushFunction("CollapseAndReset")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::CollapseAndReset(item);
	};

	// void wxTreeCtrl::Delete(const wxTreeItemId & item)
	void Delete(const wxTreeItemId & item) {
		if(_obj.pushFunction("Delete")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::Delete(item);
	};

	// void wxTreeCtrl::DeleteAllItems()
	void DeleteAllItems() {
		if(_obj.pushFunction("DeleteAllItems")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::DeleteAllItems();
	};

	// void wxTreeCtrl::DeleteChildren(const wxTreeItemId & item)
	void DeleteChildren(const wxTreeItemId & item) {
		if(_obj.pushFunction("DeleteChildren")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::DeleteChildren(item);
	};

	// wxTextCtrl * wxTreeCtrl::EditLabel(const wxTreeItemId & item, wxClassInfo * textCtrlClass = wxCLASSINFO ( wxTextCtrl ))
	wxTextCtrl * EditLabel(const wxTreeItemId & item, wxClassInfo * textCtrlClass = wxCLASSINFO ( wxTextCtrl )) {
		if(_obj.pushFunction("EditLabel")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(textCtrlClass);
			return (_obj.callFunction<wxTextCtrl*>());
		}

		return wxTreeCtrl::EditLabel(item, textCtrlClass);
	};

	// void wxTreeCtrl::EndEditLabel(const wxTreeItemId & item, bool discardChanges = false)
	void EndEditLabel(const wxTreeItemId & item, bool discardChanges = false) {
		if(_obj.pushFunction("EndEditLabel")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(discardChanges);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::EndEditLabel(item, discardChanges);
	};

	// void wxTreeCtrl::EnsureVisible(const wxTreeItemId & item)
	void EnsureVisible(const wxTreeItemId & item) {
		if(_obj.pushFunction("EnsureVisible")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::EnsureVisible(item);
	};

	// void wxTreeCtrl::Expand(const wxTreeItemId & item)
	void Expand(const wxTreeItemId & item) {
		if(_obj.pushFunction("Expand")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::Expand(item);
	};

	// bool wxTreeCtrl::GetBoundingRect(const wxTreeItemId & item, wxRect & rect, bool textOnly = false) const
	bool GetBoundingRect(const wxTreeItemId & item, wxRect & rect, bool textOnly = false) const {
		if(_obj.pushFunction("GetBoundingRect")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(&rect);
			_obj.pushArg(textOnly);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::GetBoundingRect(item, rect, textOnly);
	};

	// size_t wxTreeCtrl::GetChildrenCount(const wxTreeItemId & item, bool recursively = true) const
	size_t GetChildrenCount(const wxTreeItemId & item, bool recursively = true) const {
		if(_obj.pushFunction("GetChildrenCount")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(recursively);
			return (_obj.callFunction<size_t>());
		}

		return wxTreeCtrl::GetChildrenCount(item, recursively);
	};

	// unsigned int wxTreeCtrl::GetCount() const
	unsigned int GetCount() const {
		if(_obj.pushFunction("GetCount")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return wxTreeCtrl::GetCount();
	};

	// wxTextCtrl * wxTreeCtrl::GetEditControl() const
	wxTextCtrl * GetEditControl() const {
		if(_obj.pushFunction("GetEditControl")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<wxTextCtrl*>());
		}

		return wxTreeCtrl::GetEditControl();
	};

	// wxTreeItemId wxTreeCtrl::GetFirstChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const
	wxTreeItemId GetFirstChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const {
		if(_obj.pushFunction("GetFirstChild")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(&cookie);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetFirstChild(item, cookie);
	};

	// wxTreeItemId wxTreeCtrl::GetFirstVisibleItem() const
	wxTreeItemId GetFirstVisibleItem() const {
		if(_obj.pushFunction("GetFirstVisibleItem")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetFirstVisibleItem();
	};

	// wxTreeItemId wxTreeCtrl::GetFocusedItem() const
	wxTreeItemId GetFocusedItem() const {
		if(_obj.pushFunction("GetFocusedItem")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetFocusedItem();
	};

	// void wxTreeCtrl::ClearFocusedItem()
	void ClearFocusedItem() {
		if(_obj.pushFunction("ClearFocusedItem")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::ClearFocusedItem();
	};

	// void wxTreeCtrl::SetFocusedItem(const wxTreeItemId & item)
	void SetFocusedItem(const wxTreeItemId & item) {
		if(_obj.pushFunction("SetFocusedItem")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetFocusedItem(item);
	};

	// unsigned int wxTreeCtrl::GetIndent() const
	unsigned int GetIndent() const {
		if(_obj.pushFunction("GetIndent")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return wxTreeCtrl::GetIndent();
	};

	// wxColour wxTreeCtrl::GetItemBackgroundColour(const wxTreeItemId & item) const
	wxColour GetItemBackgroundColour(const wxTreeItemId & item) const {
		if(_obj.pushFunction("GetItemBackgroundColour")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxColour*>());
		}

		return wxTreeCtrl::GetItemBackgroundColour(item);
	};

	// wxTreeItemData * wxTreeCtrl::GetItemData(const wxTreeItemId & item) const
	wxTreeItemData * GetItemData(const wxTreeItemId & item) const {
		if(_obj.pushFunction("GetItemData")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<wxTreeItemData*>());
		}

		return wxTreeCtrl::GetItemData(item);
	};

	// wxFont wxTreeCtrl::GetItemFont(const wxTreeItemId & item) const
	wxFont GetItemFont(const wxTreeItemId & item) const {
		if(_obj.pushFunction("GetItemFont")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxFont*>());
		}

		return wxTreeCtrl::GetItemFont(item);
	};

	// int wxTreeCtrl::GetItemImage(const wxTreeItemId & item, wxTreeItemIcon which = ::wxTreeItemIcon_Normal) const
	int GetItemImage(const wxTreeItemId & item, wxTreeItemIcon which = ::wxTreeItemIcon_Normal) const {
		if(_obj.pushFunction("GetItemImage")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg((int)which);
			return (_obj.callFunction<int>());
		}

		return wxTreeCtrl::GetItemImage(item, which);
	};

	// wxTreeItemId wxTreeCtrl::GetItemParent(const wxTreeItemId & item) const
	wxTreeItemId GetItemParent(const wxTreeItemId & item) const {
		if(_obj.pushFunction("GetItemParent")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetItemParent(item);
	};

	// wxString wxTreeCtrl::GetItemText(const wxTreeItemId & item) const
	wxString GetItemText(const wxTreeItemId & item) const {
		if(_obj.pushFunction("GetItemText")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxString*>());
		}

		return wxTreeCtrl::GetItemText(item);
	};

	// wxColour wxTreeCtrl::GetItemTextColour(const wxTreeItemId & item) const
	wxColour GetItemTextColour(const wxTreeItemId & item) const {
		if(_obj.pushFunction("GetItemTextColour")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxColour*>());
		}

		return wxTreeCtrl::GetItemTextColour(item);
	};

	// wxTreeItemId wxTreeCtrl::GetLastChild(const wxTreeItemId & item) const
	wxTreeItemId GetLastChild(const wxTreeItemId & item) const {
		if(_obj.pushFunction("GetLastChild")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetLastChild(item);
	};

	// wxTreeItemId wxTreeCtrl::GetNextChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const
	wxTreeItemId GetNextChild(const wxTreeItemId & item, wxTreeItemIdValue & cookie) const {
		if(_obj.pushFunction("GetNextChild")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(&cookie);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetNextChild(item, cookie);
	};

	// wxTreeItemId wxTreeCtrl::GetNextSibling(const wxTreeItemId & item) const
	wxTreeItemId GetNextSibling(const wxTreeItemId & item) const {
		if(_obj.pushFunction("GetNextSibling")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetNextSibling(item);
	};

	// wxTreeItemId wxTreeCtrl::GetNextVisible(const wxTreeItemId & item) const
	wxTreeItemId GetNextVisible(const wxTreeItemId & item) const {
		if(_obj.pushFunction("GetNextVisible")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetNextVisible(item);
	};

	// wxTreeItemId wxTreeCtrl::GetPrevSibling(const wxTreeItemId & item) const
	wxTreeItemId GetPrevSibling(const wxTreeItemId & item) const {
		if(_obj.pushFunction("GetPrevSibling")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetPrevSibling(item);
	};

	// wxTreeItemId wxTreeCtrl::GetPrevVisible(const wxTreeItemId & item) const
	wxTreeItemId GetPrevVisible(const wxTreeItemId & item) const {
		if(_obj.pushFunction("GetPrevVisible")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetPrevVisible(item);
	};

	// wxTreeItemId wxTreeCtrl::GetRootItem() const
	wxTreeItemId GetRootItem() const {
		if(_obj.pushFunction("GetRootItem")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetRootItem();
	};

	// wxTreeItemId wxTreeCtrl::GetSelection() const
	wxTreeItemId GetSelection() const {
		if(_obj.pushFunction("GetSelection")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return *(_obj.callFunction<wxTreeItemId*>());
		}

		return wxTreeCtrl::GetSelection();
	};

	// size_t wxTreeCtrl::GetSelections(wxArrayTreeItemIds & selection) const
	size_t GetSelections(wxArrayTreeItemIds & selection) const {
		if(_obj.pushFunction("GetSelections")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&selection);
			return (_obj.callFunction<size_t>());
		}

		return wxTreeCtrl::GetSelections(selection);
	};

	// bool wxTreeCtrl::IsBold(const wxTreeItemId & item) const
	bool IsBold(const wxTreeItemId & item) const {
		if(_obj.pushFunction("IsBold")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::IsBold(item);
	};

	// bool wxTreeCtrl::IsExpanded(const wxTreeItemId & item) const
	bool IsExpanded(const wxTreeItemId & item) const {
		if(_obj.pushFunction("IsExpanded")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::IsExpanded(item);
	};

	// bool wxTreeCtrl::IsSelected(const wxTreeItemId & item) const
	bool IsSelected(const wxTreeItemId & item) const {
		if(_obj.pushFunction("IsSelected")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::IsSelected(item);
	};

	// bool wxTreeCtrl::IsVisible(const wxTreeItemId & item) const
	bool IsVisible(const wxTreeItemId & item) const {
		if(_obj.pushFunction("IsVisible")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::IsVisible(item);
	};

	// bool wxTreeCtrl::ItemHasChildren(const wxTreeItemId & item) const
	bool ItemHasChildren(const wxTreeItemId & item) const {
		if(_obj.pushFunction("ItemHasChildren")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<bool>());
		}

		return wxTreeCtrl::ItemHasChildren(item);
	};

	// int wxTreeCtrl::OnCompareItems(const wxTreeItemId & item1, const wxTreeItemId & item2)
	int OnCompareItems(const wxTreeItemId & item1, const wxTreeItemId & item2) {
		if(_obj.pushFunction("OnCompareItems")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item1);
			_obj.pushArg(&item2);
			return (_obj.callFunction<int>());
		}

		return wxTreeCtrl::OnCompareItems(item1, item2);
	};

	// void wxTreeCtrl::ScrollTo(const wxTreeItemId & item)
	void ScrollTo(const wxTreeItemId & item) {
		if(_obj.pushFunction("ScrollTo")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::ScrollTo(item);
	};

	// void wxTreeCtrl::SelectItem(const wxTreeItemId & item, bool select = true)
	void SelectItem(const wxTreeItemId & item, bool select = true) {
		if(_obj.pushFunction("SelectItem")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(select);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SelectItem(item, select);
	};

	// void wxTreeCtrl::SetImageList(wxImageList * imageList)
	void SetImageList(wxImageList * imageList) {
		if(_obj.pushFunction("SetImageList")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(imageList);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetImageList(imageList);
	};

	// void wxTreeCtrl::SetIndent(unsigned int indent)
	void SetIndent(unsigned int indent) {
		if(_obj.pushFunction("SetIndent")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(indent);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetIndent(indent);
	};

	// void wxTreeCtrl::SetItemBackgroundColour(const wxTreeItemId & item, const wxColour & col)
	void SetItemBackgroundColour(const wxTreeItemId & item, const wxColour & col) {
		if(_obj.pushFunction("SetItemBackgroundColour")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(&col);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetItemBackgroundColour(item, col);
	};

	// void wxTreeCtrl::SetItemBold(const wxTreeItemId & item, bool bold = true)
	void SetItemBold(const wxTreeItemId & item, bool bold = true) {
		if(_obj.pushFunction("SetItemBold")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(bold);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetItemBold(item, bold);
	};

	// void wxTreeCtrl::SetItemData(const wxTreeItemId & item, wxTreeItemData * data)
	void SetItemData(const wxTreeItemId & item, wxTreeItemData * data) {
		if(_obj.pushFunction("SetItemData")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(data);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetItemData(item, data);
	};

	// void wxTreeCtrl::SetItemDropHighlight(const wxTreeItemId & item, bool highlight = true)
	void SetItemDropHighlight(const wxTreeItemId & item, bool highlight = true) {
		if(_obj.pushFunction("SetItemDropHighlight")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(highlight);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetItemDropHighlight(item, highlight);
	};

	// void wxTreeCtrl::SetItemFont(const wxTreeItemId & item, const wxFont & font)
	void SetItemFont(const wxTreeItemId & item, const wxFont & font) {
		if(_obj.pushFunction("SetItemFont")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(&font);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetItemFont(item, font);
	};

	// void wxTreeCtrl::SetItemHasChildren(const wxTreeItemId & item, bool hasChildren = true)
	void SetItemHasChildren(const wxTreeItemId & item, bool hasChildren = true) {
		if(_obj.pushFunction("SetItemHasChildren")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(hasChildren);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetItemHasChildren(item, hasChildren);
	};

	// void wxTreeCtrl::SetItemImage(const wxTreeItemId & item, int image, wxTreeItemIcon which = ::wxTreeItemIcon_Normal)
	void SetItemImage(const wxTreeItemId & item, int image, wxTreeItemIcon which = ::wxTreeItemIcon_Normal) {
		if(_obj.pushFunction("SetItemImage")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(image);
			_obj.pushArg((int)which);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetItemImage(item, image, which);
	};

	// void wxTreeCtrl::SetItemText(const wxTreeItemId & item, const wxString & text)
	void SetItemText(const wxTreeItemId & item, const wxString & text) {
		if(_obj.pushFunction("SetItemText")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetItemText(item, text);
	};

	// void wxTreeCtrl::SetItemTextColour(const wxTreeItemId & item, const wxColour & col)
	void SetItemTextColour(const wxTreeItemId & item, const wxColour & col) {
		if(_obj.pushFunction("SetItemTextColour")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(&col);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetItemTextColour(item, col);
	};

	// void wxTreeCtrl::SetStateImageList(wxImageList * imageList)
	void SetStateImageList(wxImageList * imageList) {
		if(_obj.pushFunction("SetStateImageList")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(imageList);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SetStateImageList(imageList);
	};

	// void wxTreeCtrl::SortChildren(const wxTreeItemId & item)
	void SortChildren(const wxTreeItemId & item) {
		if(_obj.pushFunction("SortChildren")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SortChildren(item);
	};

	// void wxTreeCtrl::Toggle(const wxTreeItemId & item)
	void Toggle(const wxTreeItemId & item) {
		if(_obj.pushFunction("Toggle")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::Toggle(item);
	};

	// void wxTreeCtrl::Unselect()
	void Unselect() {
		if(_obj.pushFunction("Unselect")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::Unselect();
	};

	// void wxTreeCtrl::UnselectAll()
	void UnselectAll() {
		if(_obj.pushFunction("UnselectAll")) {
			_obj.pushArg((wxTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::UnselectAll();
	};

	// void wxTreeCtrl::SelectChildren(const wxTreeItemId & parent)
	void SelectChildren(const wxTreeItemId & parent) {
		if(_obj.pushFunction("SelectChildren")) {
			_obj.pushArg((wxTreeCtrl*)this);
			_obj.pushArg(&parent);
			return (_obj.callFunction<void>());
		}

		return wxTreeCtrl::SelectChildren(parent);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

