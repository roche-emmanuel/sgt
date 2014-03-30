#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWLISTCTRL_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWLISTCTRL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewListCtrl : public wxDataViewListCtrl, public luna_wrapper_base {

public:
		

	~wrapper_wxDataViewListCtrl() {
		logDEBUG3("Calling delete function for wrapper wxDataViewListCtrl");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDataViewListCtrl*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDataViewListCtrl(lua_State* L, lua_Table* dum) 
		: wxDataViewListCtrl(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxDataViewListCtrl(lua_State* L, lua_Table* dum, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0010, const wxValidator & validator = wxDefaultValidator) 
		: wxDataViewListCtrl(parent, id, pos, size, style, validator), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewListCtrl::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewListCtrl::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewListCtrl::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDataViewListCtrl::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxDataViewListCtrl::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxDataViewListCtrl::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxDataViewListCtrl::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewListCtrl::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewListCtrl::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewListCtrl::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewListCtrl::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewListCtrl::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewListCtrl::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewListCtrl::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewListCtrl::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewListCtrl::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxDataViewListCtrl::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxDataViewListCtrl::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxDataViewListCtrl::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxDataViewListCtrl::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxDataViewListCtrl::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<long>());
		}

		return wxDataViewListCtrl::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxDataViewListCtrl::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxDataViewListCtrl::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxDataViewListCtrl::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxDataViewListCtrl::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxDataViewListCtrl::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxDataViewListCtrl::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::InitDialog();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxDataViewListCtrl::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetLabel(label);
	};

	// bool wxDataViewCtrl::AssociateModel(wxDataViewModel * model)
	bool AssociateModel(wxDataViewModel * model) {
		if(_obj.pushFunction("AssociateModel")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(model);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::AssociateModel(model);
	};

	// bool wxDataViewCtrl::ClearColumns()
	bool ClearColumns() {
		if(_obj.pushFunction("ClearColumns")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::ClearColumns();
	};

	// void wxDataViewCtrl::Collapse(const wxDataViewItem & item)
	void Collapse(const wxDataViewItem & item) {
		if(_obj.pushFunction("Collapse")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::Collapse(item);
	};

	// bool wxDataViewCtrl::DeleteColumn(wxDataViewColumn * column)
	bool DeleteColumn(wxDataViewColumn * column) {
		if(_obj.pushFunction("DeleteColumn")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(column);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::DeleteColumn(column);
	};

	// bool wxDataViewCtrl::EnableDragSource(const wxDataFormat & format)
	bool EnableDragSource(const wxDataFormat & format) {
		if(_obj.pushFunction("EnableDragSource")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&format);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::EnableDragSource(format);
	};

	// bool wxDataViewCtrl::EnableDropTarget(const wxDataFormat & format)
	bool EnableDropTarget(const wxDataFormat & format) {
		if(_obj.pushFunction("EnableDropTarget")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&format);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::EnableDropTarget(format);
	};

	// void wxDataViewCtrl::EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)
	void EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL) {
		if(_obj.pushFunction("EnsureVisible")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(column);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::EnsureVisible(item, column);
	};

	// void wxDataViewCtrl::Expand(const wxDataViewItem & item)
	void Expand(const wxDataViewItem & item) {
		if(_obj.pushFunction("Expand")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::Expand(item);
	};

	// void wxDataViewCtrl::ExpandAncestors(const wxDataViewItem & item)
	void ExpandAncestors(const wxDataViewItem & item) {
		if(_obj.pushFunction("ExpandAncestors")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::ExpandAncestors(item);
	};

	// wxDataViewColumn * wxDataViewCtrl::GetColumn(unsigned int pos) const
	wxDataViewColumn * GetColumn(unsigned int pos) const {
		if(_obj.pushFunction("GetColumn")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(pos);
			return (_obj.callFunction<wxDataViewColumn*>());
		}

		return wxDataViewListCtrl::GetColumn(pos);
	};

	// unsigned int wxDataViewCtrl::GetColumnCount() const
	unsigned int GetColumnCount() const {
		if(_obj.pushFunction("GetColumnCount")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return wxDataViewListCtrl::GetColumnCount();
	};

	// int wxDataViewCtrl::GetColumnPosition(const wxDataViewColumn * column) const
	int GetColumnPosition(const wxDataViewColumn * column) const {
		if(_obj.pushFunction("GetColumnPosition")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(column);
			return (_obj.callFunction<int>());
		}

		return wxDataViewListCtrl::GetColumnPosition(column);
	};

	// wxRect wxDataViewCtrl::GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const
	wxRect GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const {
		if(_obj.pushFunction("GetItemRect")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return *(_obj.callFunction<wxRect*>());
		}

		return wxDataViewListCtrl::GetItemRect(item, col);
	};

	// int wxDataViewCtrl::GetSelectedItemsCount() const
	int GetSelectedItemsCount() const {
		if(_obj.pushFunction("GetSelectedItemsCount")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxDataViewListCtrl::GetSelectedItemsCount();
	};

	// wxDataViewItem wxDataViewCtrl::GetSelection() const
	wxDataViewItem GetSelection() const {
		if(_obj.pushFunction("GetSelection")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return *(_obj.callFunction<wxDataViewItem*>());
		}

		return wxDataViewListCtrl::GetSelection();
	};

	// int wxDataViewCtrl::GetSelections(wxDataViewItemArray & sel) const
	int GetSelections(wxDataViewItemArray & sel) const {
		if(_obj.pushFunction("GetSelections")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&sel);
			return (_obj.callFunction<int>());
		}

		return wxDataViewListCtrl::GetSelections(sel);
	};

	// wxDataViewColumn * wxDataViewCtrl::GetSortingColumn() const
	wxDataViewColumn * GetSortingColumn() const {
		if(_obj.pushFunction("GetSortingColumn")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<wxDataViewColumn*>());
		}

		return wxDataViewListCtrl::GetSortingColumn();
	};

	// void wxDataViewCtrl::HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const
	void HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const {
		if(_obj.pushFunction("HitTest")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&point);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::HitTest(point, item, col);
	};

	// bool wxDataViewCtrl::IsExpanded(const wxDataViewItem & item) const
	bool IsExpanded(const wxDataViewItem & item) const {
		if(_obj.pushFunction("IsExpanded")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::IsExpanded(item);
	};

	// bool wxDataViewCtrl::IsSelected(const wxDataViewItem & item) const
	bool IsSelected(const wxDataViewItem & item) const {
		if(_obj.pushFunction("IsSelected")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::IsSelected(item);
	};

	// void wxDataViewCtrl::Select(const wxDataViewItem & item)
	void Select(const wxDataViewItem & item) {
		if(_obj.pushFunction("Select")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::Select(item);
	};

	// void wxDataViewCtrl::SelectAll()
	void SelectAll() {
		if(_obj.pushFunction("SelectAll")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SelectAll();
	};

	// void wxDataViewCtrl::SetSelections(const wxDataViewItemArray & sel)
	void SetSelections(const wxDataViewItemArray & sel) {
		if(_obj.pushFunction("SetSelections")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&sel);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::SetSelections(sel);
	};

	// void wxDataViewCtrl::StartEditor(const wxDataViewItem & item, unsigned int column)
	void StartEditor(const wxDataViewItem & item, unsigned int column) {
		if(_obj.pushFunction("StartEditor")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(column);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::StartEditor(item, column);
	};

	// void wxDataViewCtrl::Unselect(const wxDataViewItem & item)
	void Unselect(const wxDataViewItem & item) {
		if(_obj.pushFunction("Unselect")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::Unselect(item);
	};

	// void wxDataViewCtrl::UnselectAll()
	void UnselectAll() {
		if(_obj.pushFunction("UnselectAll")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewListCtrl::UnselectAll();
	};

	// bool wxDataViewCtrl::SetRowHeight(int rowHeight)
	bool SetRowHeight(int rowHeight) {
		if(_obj.pushFunction("SetRowHeight")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(rowHeight);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::SetRowHeight(rowHeight);
	};

	// bool wxDataViewListCtrl::AppendColumn(wxDataViewColumn * column)
	bool AppendColumn(wxDataViewColumn * column) {
		if(_obj.pushFunction("AppendColumn")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(column);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::AppendColumn(column);
	};

	// bool wxDataViewListCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * column)
	bool InsertColumn(unsigned int pos, wxDataViewColumn * column) {
		if(_obj.pushFunction("InsertColumn")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(pos);
			_obj.pushArg(column);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::InsertColumn(pos, column);
	};

	// bool wxDataViewListCtrl::PrependColumn(wxDataViewColumn * column)
	bool PrependColumn(wxDataViewColumn * column) {
		if(_obj.pushFunction("PrependColumn")) {
			_obj.pushArg((wxDataViewListCtrl*)this);
			_obj.pushArg(column);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewListCtrl::PrependColumn(column);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

