#ifndef _WRAPPERS_WRAPPER_WXAUINOTEBOOK_H_
#define _WRAPPERS_WRAPPER_WXAUINOTEBOOK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/aui/auibook.h>

class wrapper_wxAuiNotebook : public wxAuiNotebook, public luna_wrapper_base {

public:
		

	~wrapper_wxAuiNotebook() {
		logDEBUG3("Calling delete function for wrapper wxAuiNotebook");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxAuiNotebook*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxAuiNotebook(lua_State* L, lua_Table* dum) 
		: wxAuiNotebook(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxAuiNotebook(lua_State* L, lua_Table* dum, wxWindow * parent, int id = ::wxID_ANY, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, long style = ::wxAUI_NB_DEFAULT_STYLE) 
		: wxAuiNotebook(parent, id, pos, size, style), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAuiNotebook::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAuiNotebook::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiNotebook::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::AddPendingEvent(event);
	};

	// wxWindow * wxAuiNotebook::DoRemovePage(size_t arg1)
	wxWindow * DoRemovePage(size_t arg1) {
		if(_obj.pushFunction("DoRemovePage")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<wxWindow*>());
		}

		return wxAuiNotebook::DoRemovePage(arg1);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxAuiNotebook::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxAuiNotebook::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxAuiNotebook::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxAuiNotebook::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiNotebook::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiNotebook::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiNotebook::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiNotebook::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiNotebook::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiNotebook::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiNotebook::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiNotebook::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxAuiNotebook::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxAuiNotebook::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxAuiNotebook::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<int>());
		}

		return wxAuiNotebook::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<int>());
		}

		return wxAuiNotebook::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxAuiNotebook::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::SetBackgroundStyle(style);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<long>());
		}

		return wxAuiNotebook::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxAuiNotebook::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxAuiNotebook::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxAuiNotebook::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxAuiNotebook::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxAuiNotebook::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxAuiNotebook::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::InitDialog();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxAuiNotebook::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetLabel(label);
	};

	// void wxWithImages::SetImageList(wxImageList * imageList)
	void SetImageList(wxImageList * imageList) {
		if(_obj.pushFunction("SetImageList")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(imageList);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetImageList(imageList);
	};

	// void wxBookCtrlBase::SetPageSize(const wxSize & size)
	void SetPageSize(const wxSize & size) {
		if(_obj.pushFunction("SetPageSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetPageSize(size);
	};

	// int wxBookCtrlBase::HitTest(const wxPoint & pt, long * flags = NULL) const
	int HitTest(const wxPoint & pt, long * flags = NULL) const {
		if(_obj.pushFunction("HitTest")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&pt);
			_obj.pushArg(flags);
			return (_obj.callFunction<int>());
		}

		return wxAuiNotebook::HitTest(pt, flags);
	};

	// int wxAuiNotebook::GetPageImage(size_t nPage) const
	int GetPageImage(size_t nPage) const {
		if(_obj.pushFunction("GetPageImage")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(nPage);
			return (_obj.callFunction<int>());
		}

		return wxAuiNotebook::GetPageImage(nPage);
	};

	// bool wxAuiNotebook::AddPage(wxWindow * page, const wxString & text, bool select, int imageId)
	bool AddPage(wxWindow * page, const wxString & text, bool select, int imageId) {
		if(_obj.pushFunction("AddPage")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(page);
			_obj.pushArg(text);
			_obj.pushArg(select);
			_obj.pushArg(imageId);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::AddPage(page, text, select, imageId);
	};

	// int wxAuiNotebook::ChangeSelection(size_t n)
	int ChangeSelection(size_t n) {
		if(_obj.pushFunction("ChangeSelection")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(n);
			return (_obj.callFunction<int>());
		}

		return wxAuiNotebook::ChangeSelection(n);
	};

	// bool wxAuiNotebook::DeleteAllPages()
	bool DeleteAllPages() {
		if(_obj.pushFunction("DeleteAllPages")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::DeleteAllPages();
	};

	// bool wxAuiNotebook::DeletePage(size_t page)
	bool DeletePage(size_t page) {
		if(_obj.pushFunction("DeletePage")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(page);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::DeletePage(page);
	};

	// size_t wxAuiNotebook::GetPageCount() const
	size_t GetPageCount() const {
		if(_obj.pushFunction("GetPageCount")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<size_t>());
		}

		return wxAuiNotebook::GetPageCount();
	};

	// wxString wxAuiNotebook::GetPageText(size_t page) const
	wxString GetPageText(size_t page) const {
		if(_obj.pushFunction("GetPageText")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(page);
			return *(_obj.callFunction<wxString*>());
		}

		return wxAuiNotebook::GetPageText(page);
	};

	// int wxAuiNotebook::GetSelection() const
	int GetSelection() const {
		if(_obj.pushFunction("GetSelection")) {
			_obj.pushArg((wxAuiNotebook*)this);
			return (_obj.callFunction<int>());
		}

		return wxAuiNotebook::GetSelection();
	};

	// bool wxAuiNotebook::InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE)
	bool InsertPage(size_t index, wxWindow * page, const wxString & text, bool select = false, int imageId = wxBookCtrlBase::NO_IMAGE) {
		if(_obj.pushFunction("InsertPage")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(index);
			_obj.pushArg(page);
			_obj.pushArg(text);
			_obj.pushArg(select);
			_obj.pushArg(imageId);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::InsertPage(index, page, text, select, imageId);
	};

	// bool wxAuiNotebook::RemovePage(size_t page)
	bool RemovePage(size_t page) {
		if(_obj.pushFunction("RemovePage")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(page);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::RemovePage(page);
	};

	// bool wxAuiNotebook::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::SetFont(font);
	};

	// bool wxAuiNotebook::SetPageImage(size_t n, int imageId)
	bool SetPageImage(size_t n, int imageId) {
		if(_obj.pushFunction("SetPageImage")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(n);
			_obj.pushArg(imageId);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::SetPageImage(n, imageId);
	};

	// bool wxAuiNotebook::SetPageText(size_t page, const wxString & text)
	bool SetPageText(size_t page, const wxString & text) {
		if(_obj.pushFunction("SetPageText")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(page);
			_obj.pushArg(text);
			return (_obj.callFunction<bool>());
		}

		return wxAuiNotebook::SetPageText(page, text);
	};

	// int wxAuiNotebook::SetSelection(size_t new_page)
	int SetSelection(size_t new_page) {
		if(_obj.pushFunction("SetSelection")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(new_page);
			return (_obj.callFunction<int>());
		}

		return wxAuiNotebook::SetSelection(new_page);
	};

	// void wxAuiNotebook::SetTabCtrlHeight(int height)
	void SetTabCtrlHeight(int height) {
		if(_obj.pushFunction("SetTabCtrlHeight")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(height);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetTabCtrlHeight(height);
	};

	// void wxAuiNotebook::SetUniformBitmapSize(const wxSize & size)
	void SetUniformBitmapSize(const wxSize & size) {
		if(_obj.pushFunction("SetUniformBitmapSize")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::SetUniformBitmapSize(size);
	};

	// void wxAuiNotebook::Split(size_t page, int direction)
	void Split(size_t page, int direction) {
		if(_obj.pushFunction("Split")) {
			_obj.pushArg((wxAuiNotebook*)this);
			_obj.pushArg(page);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxAuiNotebook::Split(page, direction);
	};


	// Protected non-virtual methods:
	// bool wxWithImages::HasImageList() const
	bool public_HasImageList() const {
		return wxWithImages::HasImageList();
	};

	// wxIcon wxWithImages::GetImage(int iconIndex) const
	wxIcon public_GetImage(int iconIndex) const {
		return wxWithImages::GetImage(iconIndex);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_HasImageList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_GetImage(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// bool wxWithImages::public_HasImageList() const
	static int _bind_public_HasImageList(lua_State *L) {
		if (!_lg_typecheck_public_HasImageList(L)) {
			luaL_error(L, "luna typecheck failed in bool wxWithImages::public_HasImageList() const function, expected prototype:\nbool wxWithImages::public_HasImageList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_wxAuiNotebook* self=Luna< wxWithImages >::checkSubType< wrapper_wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool wxWithImages::public_HasImageList() const. Got : '%s'\n%s",typeid(Luna< wxWithImages >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->public_HasImageList();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// wxIcon wxWithImages::public_GetImage(int iconIndex) const
	static int _bind_public_GetImage(lua_State *L) {
		if (!_lg_typecheck_public_GetImage(L)) {
			luaL_error(L, "luna typecheck failed in wxIcon wxWithImages::public_GetImage(int iconIndex) const function, expected prototype:\nwxIcon wxWithImages::public_GetImage(int iconIndex) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int iconIndex=(int)lua_tointeger(L,2);

		wrapper_wxAuiNotebook* self=Luna< wxWithImages >::checkSubType< wrapper_wxAuiNotebook >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call wxIcon wxWithImages::public_GetImage(int) const. Got : '%s'\n%s",typeid(Luna< wxWithImages >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		wxIcon stack_lret = self->public_GetImage(iconIndex);
		wxIcon* lret = new wxIcon(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< wxIcon >::push(L,lret,true);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"HasImageList",_bind_public_HasImageList},
		{"GetImage",_bind_public_GetImage},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

