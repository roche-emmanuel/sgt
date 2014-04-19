#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWTREECTRL_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWTREECTRL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewTreeCtrl : public wxDataViewTreeCtrl, public luna_wrapper_base {

public:
		

	~wrapper_wxDataViewTreeCtrl() {
		logDEBUG3("Calling delete function for wrapper wxDataViewTreeCtrl");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDataViewTreeCtrl*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDataViewTreeCtrl(lua_State* L, lua_Table* dum) 
		: wxDataViewTreeCtrl(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxDataViewTreeCtrl(lua_State* L, lua_Table* dum, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = 0x0002|0x0010, const wxValidator & validator = wxDefaultValidator) 
		: wxDataViewTreeCtrl(parent, id, pos, size, style, validator), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewTreeCtrl::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewTreeCtrl::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewTreeCtrl::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDataViewTreeCtrl::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxDataViewTreeCtrl::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxDataViewTreeCtrl::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxDataViewTreeCtrl::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewTreeCtrl::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewTreeCtrl::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewTreeCtrl::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewTreeCtrl::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewTreeCtrl::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewTreeCtrl::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewTreeCtrl::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewTreeCtrl::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxDataViewTreeCtrl::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxDataViewTreeCtrl::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxDataViewTreeCtrl::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxDataViewTreeCtrl::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxDataViewTreeCtrl::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxDataViewTreeCtrl::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<long>());
		}

		return wxDataViewTreeCtrl::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxDataViewTreeCtrl::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxDataViewTreeCtrl::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxDataViewTreeCtrl::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxDataViewTreeCtrl::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxDataViewTreeCtrl::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxDataViewTreeCtrl::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::InitDialog();
	};

	// bool wxWindow::IsDoubleBuffered() const
	bool IsDoubleBuffered() const {
		if(_obj.pushFunction("IsDoubleBuffered")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::IsDoubleBuffered();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxDataViewTreeCtrl::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetLabel(label);
	};

	// bool wxDataViewCtrl::AppendColumn(wxDataViewColumn * col)
	bool AppendColumn(wxDataViewColumn * col) {
		if(_obj.pushFunction("AppendColumn")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::AppendColumn(col);
	};

	// bool wxDataViewCtrl::PrependColumn(wxDataViewColumn * col)
	bool PrependColumn(wxDataViewColumn * col) {
		if(_obj.pushFunction("PrependColumn")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::PrependColumn(col);
	};

	// bool wxDataViewCtrl::InsertColumn(unsigned int pos, wxDataViewColumn * col)
	bool InsertColumn(unsigned int pos, wxDataViewColumn * col) {
		if(_obj.pushFunction("InsertColumn")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(pos);
			_obj.pushArg(col);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::InsertColumn(pos, col);
	};

	// bool wxDataViewCtrl::AssociateModel(wxDataViewModel * model)
	bool AssociateModel(wxDataViewModel * model) {
		if(_obj.pushFunction("AssociateModel")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(model);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::AssociateModel(model);
	};

	// bool wxDataViewCtrl::ClearColumns()
	bool ClearColumns() {
		if(_obj.pushFunction("ClearColumns")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::ClearColumns();
	};

	// void wxDataViewCtrl::Collapse(const wxDataViewItem & item)
	void Collapse(const wxDataViewItem & item) {
		if(_obj.pushFunction("Collapse")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::Collapse(item);
	};

	// bool wxDataViewCtrl::DeleteColumn(wxDataViewColumn * column)
	bool DeleteColumn(wxDataViewColumn * column) {
		if(_obj.pushFunction("DeleteColumn")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(column);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::DeleteColumn(column);
	};

	// bool wxDataViewCtrl::EnableDragSource(const wxDataFormat & format)
	bool EnableDragSource(const wxDataFormat & format) {
		if(_obj.pushFunction("EnableDragSource")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&format);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::EnableDragSource(format);
	};

	// bool wxDataViewCtrl::EnableDropTarget(const wxDataFormat & format)
	bool EnableDropTarget(const wxDataFormat & format) {
		if(_obj.pushFunction("EnableDropTarget")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&format);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::EnableDropTarget(format);
	};

	// void wxDataViewCtrl::EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL)
	void EnsureVisible(const wxDataViewItem & item, const wxDataViewColumn * column = NULL) {
		if(_obj.pushFunction("EnsureVisible")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(column);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::EnsureVisible(item, column);
	};

	// void wxDataViewCtrl::Expand(const wxDataViewItem & item)
	void Expand(const wxDataViewItem & item) {
		if(_obj.pushFunction("Expand")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::Expand(item);
	};

	// void wxDataViewCtrl::ExpandAncestors(const wxDataViewItem & item)
	void ExpandAncestors(const wxDataViewItem & item) {
		if(_obj.pushFunction("ExpandAncestors")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::ExpandAncestors(item);
	};

	// wxDataViewColumn * wxDataViewCtrl::GetColumn(unsigned int pos) const
	wxDataViewColumn * GetColumn(unsigned int pos) const {
		if(_obj.pushFunction("GetColumn")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(pos);
			return (_obj.callFunction<wxDataViewColumn*>());
		}

		return wxDataViewTreeCtrl::GetColumn(pos);
	};

	// unsigned int wxDataViewCtrl::GetColumnCount() const
	unsigned int GetColumnCount() const {
		if(_obj.pushFunction("GetColumnCount")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return wxDataViewTreeCtrl::GetColumnCount();
	};

	// int wxDataViewCtrl::GetColumnPosition(const wxDataViewColumn * column) const
	int GetColumnPosition(const wxDataViewColumn * column) const {
		if(_obj.pushFunction("GetColumnPosition")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(column);
			return (_obj.callFunction<int>());
		}

		return wxDataViewTreeCtrl::GetColumnPosition(column);
	};

	// wxRect wxDataViewCtrl::GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const
	wxRect GetItemRect(const wxDataViewItem & item, const wxDataViewColumn * col = NULL) const {
		if(_obj.pushFunction("GetItemRect")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return *(_obj.callFunction<wxRect*>());
		}

		return wxDataViewTreeCtrl::GetItemRect(item, col);
	};

	// int wxDataViewCtrl::GetSelectedItemsCount() const
	int GetSelectedItemsCount() const {
		if(_obj.pushFunction("GetSelectedItemsCount")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxDataViewTreeCtrl::GetSelectedItemsCount();
	};

	// wxDataViewItem wxDataViewCtrl::GetSelection() const
	wxDataViewItem GetSelection() const {
		if(_obj.pushFunction("GetSelection")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return *(_obj.callFunction<wxDataViewItem*>());
		}

		return wxDataViewTreeCtrl::GetSelection();
	};

	// int wxDataViewCtrl::GetSelections(wxDataViewItemArray & sel) const
	int GetSelections(wxDataViewItemArray & sel) const {
		if(_obj.pushFunction("GetSelections")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&sel);
			return (_obj.callFunction<int>());
		}

		return wxDataViewTreeCtrl::GetSelections(sel);
	};

	// wxDataViewColumn * wxDataViewCtrl::GetSortingColumn() const
	wxDataViewColumn * GetSortingColumn() const {
		if(_obj.pushFunction("GetSortingColumn")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<wxDataViewColumn*>());
		}

		return wxDataViewTreeCtrl::GetSortingColumn();
	};

	// void wxDataViewCtrl::HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const
	void HitTest(const wxPoint & point, wxDataViewItem & item, wxDataViewColumn *& col) const {
		if(_obj.pushFunction("HitTest")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&point);
			_obj.pushArg(&item);
			_obj.pushArg(col);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::HitTest(point, item, col);
	};

	// bool wxDataViewCtrl::IsExpanded(const wxDataViewItem & item) const
	bool IsExpanded(const wxDataViewItem & item) const {
		if(_obj.pushFunction("IsExpanded")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::IsExpanded(item);
	};

	// bool wxDataViewCtrl::IsSelected(const wxDataViewItem & item) const
	bool IsSelected(const wxDataViewItem & item) const {
		if(_obj.pushFunction("IsSelected")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::IsSelected(item);
	};

	// void wxDataViewCtrl::Select(const wxDataViewItem & item)
	void Select(const wxDataViewItem & item) {
		if(_obj.pushFunction("Select")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::Select(item);
	};

	// void wxDataViewCtrl::SelectAll()
	void SelectAll() {
		if(_obj.pushFunction("SelectAll")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SelectAll();
	};

	// void wxDataViewCtrl::SetSelections(const wxDataViewItemArray & sel)
	void SetSelections(const wxDataViewItemArray & sel) {
		if(_obj.pushFunction("SetSelections")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&sel);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::SetSelections(sel);
	};

	// void wxDataViewCtrl::StartEditor(const wxDataViewItem & item, unsigned int column)
	void StartEditor(const wxDataViewItem & item, unsigned int column) {
		if(_obj.pushFunction("StartEditor")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&item);
			_obj.pushArg(column);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::StartEditor(item, column);
	};

	// void wxDataViewCtrl::Unselect(const wxDataViewItem & item)
	void Unselect(const wxDataViewItem & item) {
		if(_obj.pushFunction("Unselect")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(&item);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::Unselect(item);
	};

	// void wxDataViewCtrl::UnselectAll()
	void UnselectAll() {
		if(_obj.pushFunction("UnselectAll")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxDataViewTreeCtrl::UnselectAll();
	};

	// bool wxDataViewCtrl::SetRowHeight(int rowHeight)
	bool SetRowHeight(int rowHeight) {
		if(_obj.pushFunction("SetRowHeight")) {
			_obj.pushArg((wxDataViewTreeCtrl*)this);
			_obj.pushArg(rowHeight);
			return (_obj.callFunction<bool>());
		}

		return wxDataViewTreeCtrl::SetRowHeight(rowHeight);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

