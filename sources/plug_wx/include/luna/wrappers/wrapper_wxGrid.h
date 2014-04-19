#ifndef _WRAPPERS_WRAPPER_WXGRID_H_
#define _WRAPPERS_WRAPPER_WXGRID_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/grid.h>

class wrapper_wxGrid : public wxGrid, public luna_wrapper_base {

public:
		

	~wrapper_wxGrid() {
		logDEBUG3("Calling delete function for wrapper wxGrid");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGrid*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGrid(lua_State* L, lua_Table* dum) 
		: wxGrid(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGrid*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGrid(lua_State* L, lua_Table* dum, wxWindow * parent, int id, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = wxWANTS_CHARS, const wxString & name = wxGridNameStr) 
		: wxGrid(parent, id, pos, size, style, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGrid*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGrid::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGrid::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxGrid::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGrid::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxGrid::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxGrid::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGrid::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxGrid::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxGrid::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxGrid::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxGrid::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxGrid::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxGrid::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxGrid::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGrid::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGrid::WindowToClientSize(size);
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<void>());
		}

		return wxGrid::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGrid::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGrid::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGrid::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGrid::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGrid::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGrid::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxGrid::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxGrid::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<void>());
		}

		return wxGrid::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxGrid*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxGrid::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<int>());
		}

		return wxGrid::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<int>());
		}

		return wxGrid::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxGrid::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxGrid::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<void>());
		}

		return wxGrid::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<long>());
		}

		return wxGrid::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<void>());
		}

		return wxGrid::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<void>());
		}

		return wxGrid::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxGrid::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxGrid::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::Validate();
	};

	// wxString wxWindow::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxGrid::GetLabel();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxGrid*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxGrid::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxGrid::GetName();
	};

	// void wxWindow::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetLabel(label);
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxGrid::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxGrid::DragAcceptFiles(accept);
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxGrid::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxGrid::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxGrid::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<void>());
		}

		return wxGrid::InheritAttributes();
	};

	// bool wxWindow::IsDoubleBuffered() const
	bool IsDoubleBuffered() const {
		if(_obj.pushFunction("IsDoubleBuffered")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::IsDoubleBuffered();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxGrid::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<void>());
		}

		return wxGrid::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxGrid::UpdateWindowUI(flags);
	};

	// bool wxPanel::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::AcceptsFocus();
	};

	// void wxPanel::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<void>());
		}

		return wxGrid::InitDialog();
	};

	// bool wxPanel::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGrid::Layout();
	};

	// void wxPanel::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<void>());
		}

		return wxGrid::SetFocus();
	};

	// wxPen wxGrid::GetColGridLinePen(int col)
	wxPen GetColGridLinePen(int col) {
		if(_obj.pushFunction("GetColGridLinePen")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(col);
			return *(_obj.callFunction<wxPen*>());
		}

		return wxGrid::GetColGridLinePen(col);
	};

	// wxPen wxGrid::GetDefaultGridLinePen()
	wxPen GetDefaultGridLinePen() {
		if(_obj.pushFunction("GetDefaultGridLinePen")) {
			_obj.pushArg((wxGrid*)this);
			return *(_obj.callFunction<wxPen*>());
		}

		return wxGrid::GetDefaultGridLinePen();
	};

	// wxPen wxGrid::GetRowGridLinePen(int row)
	wxPen GetRowGridLinePen(int row) {
		if(_obj.pushFunction("GetRowGridLinePen")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(row);
			return *(_obj.callFunction<wxPen*>());
		}

		return wxGrid::GetRowGridLinePen(row);
	};

	// wxGridCellEditor * wxGrid::GetDefaultEditorForCell(int row, int col) const
	wxGridCellEditor * GetDefaultEditorForCell(int row, int col) const {
		if(_obj.pushFunction("GetDefaultEditorForCell")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<wxGridCellEditor*>());
		}

		return wxGrid::GetDefaultEditorForCell(row, col);
	};

	// wxGridCellEditor * wxGrid::GetDefaultEditorForType(const wxString & typeName) const
	wxGridCellEditor * GetDefaultEditorForType(const wxString & typeName) const {
		if(_obj.pushFunction("GetDefaultEditorForType")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(typeName);
			return (_obj.callFunction<wxGridCellEditor*>());
		}

		return wxGrid::GetDefaultEditorForType(typeName);
	};

	// wxGridCellRenderer * wxGrid::GetDefaultRendererForCell(int row, int col) const
	wxGridCellRenderer * GetDefaultRendererForCell(int row, int col) const {
		if(_obj.pushFunction("GetDefaultRendererForCell")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(row);
			_obj.pushArg(col);
			return (_obj.callFunction<wxGridCellRenderer*>());
		}

		return wxGrid::GetDefaultRendererForCell(row, col);
	};

	// wxGridCellRenderer * wxGrid::GetDefaultRendererForType(const wxString & typeName) const
	wxGridCellRenderer * GetDefaultRendererForType(const wxString & typeName) const {
		if(_obj.pushFunction("GetDefaultRendererForType")) {
			_obj.pushArg((wxGrid*)this);
			_obj.pushArg(typeName);
			return (_obj.callFunction<wxGridCellRenderer*>());
		}

		return wxGrid::GetDefaultRendererForType(typeName);
	};

	// void wxGrid::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxGrid*)this);
			return (_obj.callFunction<void>());
		}

		return wxGrid::Fit();
	};


	// Protected non-virtual methods:
	// bool wxGrid::CanHaveAttributes() const
	bool public_CanHaveAttributes() const {
		return wxGrid::CanHaveAttributes();
	};

	// int wxGrid::GetColMinimalWidth(int col) const
	int public_GetColMinimalWidth(int col) const {
		return wxGrid::GetColMinimalWidth(col);
	};

	// int wxGrid::GetColRight(int col) const
	int public_GetColRight(int col) const {
		return wxGrid::GetColRight(col);
	};

	// int wxGrid::GetColLeft(int col) const
	int public_GetColLeft(int col) const {
		return wxGrid::GetColLeft(col);
	};

	// int wxGrid::GetRowMinimalHeight(int col) const
	int public_GetRowMinimalHeight(int col) const {
		return wxGrid::GetRowMinimalHeight(col);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_CanHaveAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_GetColMinimalWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetColRight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetColLeft(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_GetRowMinimalHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// bool wxGrid::public_CanHaveAttributes() const
	static int _bind_public_CanHaveAttributes(lua_State *L) {
		if (!_lg_typecheck_public_CanHaveAttributes(L)) {
			luaL_error(L, "luna typecheck failed in bool wxGrid::public_CanHaveAttributes() const function, expected prototype:\nbool wxGrid::public_CanHaveAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_wxGrid* self=Luna< wxObject >::checkSubType< wrapper_wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxGrid::public_CanHaveAttributes() const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_CanHaveAttributes();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int wxGrid::public_GetColMinimalWidth(int col) const
	static int _bind_public_GetColMinimalWidth(lua_State *L) {
		if (!_lg_typecheck_public_GetColMinimalWidth(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::public_GetColMinimalWidth(int col) const function, expected prototype:\nint wxGrid::public_GetColMinimalWidth(int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wrapper_wxGrid* self=Luna< wxObject >::checkSubType< wrapper_wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::public_GetColMinimalWidth(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_GetColMinimalWidth(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::public_GetColRight(int col) const
	static int _bind_public_GetColRight(lua_State *L) {
		if (!_lg_typecheck_public_GetColRight(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::public_GetColRight(int col) const function, expected prototype:\nint wxGrid::public_GetColRight(int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wrapper_wxGrid* self=Luna< wxObject >::checkSubType< wrapper_wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::public_GetColRight(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_GetColRight(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::public_GetColLeft(int col) const
	static int _bind_public_GetColLeft(lua_State *L) {
		if (!_lg_typecheck_public_GetColLeft(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::public_GetColLeft(int col) const function, expected prototype:\nint wxGrid::public_GetColLeft(int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wrapper_wxGrid* self=Luna< wxObject >::checkSubType< wrapper_wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::public_GetColLeft(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_GetColLeft(col);
		lua_pushnumber(L,lret);

		return 1;
	}

	// int wxGrid::public_GetRowMinimalHeight(int col) const
	static int _bind_public_GetRowMinimalHeight(lua_State *L) {
		if (!_lg_typecheck_public_GetRowMinimalHeight(L)) {
			luaL_error(L, "luna typecheck failed in int wxGrid::public_GetRowMinimalHeight(int col) const function, expected prototype:\nint wxGrid::public_GetRowMinimalHeight(int col) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int col=(int)lua_tointeger(L,2);

		wrapper_wxGrid* self=Luna< wxObject >::checkSubType< wrapper_wxGrid >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxGrid::public_GetRowMinimalHeight(int) const. Got : '%s'\n%s",typeid(Luna< wxObject >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_GetRowMinimalHeight(col);
		lua_pushnumber(L,lret);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"CanHaveAttributes",_bind_public_CanHaveAttributes},
		{"GetColMinimalWidth",_bind_public_GetColMinimalWidth},
		{"GetColRight",_bind_public_GetColRight},
		{"GetColLeft",_bind_public_GetColLeft},
		{"GetRowMinimalHeight",_bind_public_GetRowMinimalHeight},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

