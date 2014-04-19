#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTSTYLECOMBOCTRL_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTSTYLECOMBOCTRL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextstyles.h>

class wrapper_wxRichTextStyleComboCtrl : public wxRichTextStyleComboCtrl, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextStyleComboCtrl() {
		logDEBUG3("Calling delete function for wrapper wxRichTextStyleComboCtrl");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextStyleComboCtrl*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextStyleComboCtrl::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextStyleComboCtrl::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleComboCtrl::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::AddPendingEvent(event);
	};

	// bool wxComboCtrl::AnimateShow(const wxRect & rect, int flags)
	bool AnimateShow(const wxRect & rect, int flags) {
		if(_obj.pushFunction("AnimateShow")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::AnimateShow(rect, flags);
	};

	// void wxComboCtrl::DoSetPopupControl(wxComboPopup * popup)
	void DoSetPopupControl(wxComboPopup * popup) {
		if(_obj.pushFunction("DoSetPopupControl")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(popup);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::DoSetPopupControl(popup);
	};

	// void wxComboCtrl::DoShowPopup(const wxRect & rect, int flags)
	void DoShowPopup(const wxRect & rect, int flags) {
		if(_obj.pushFunction("DoShowPopup")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&rect);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::DoShowPopup(rect, flags);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextStyleComboCtrl::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleComboCtrl::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleComboCtrl::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleComboCtrl::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleComboCtrl::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleComboCtrl::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleComboCtrl::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleComboCtrl::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleComboCtrl::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleComboCtrl::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleComboCtrl::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleComboCtrl::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleComboCtrl::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxRichTextStyleComboCtrl::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxRichTextStyleComboCtrl::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleComboCtrl::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleComboCtrl::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxRichTextStyleComboCtrl::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<long>());
		}

		return wxRichTextStyleComboCtrl::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRichTextStyleComboCtrl::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxRichTextStyleComboCtrl::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxRichTextStyleComboCtrl::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRichTextStyleComboCtrl::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxRichTextStyleComboCtrl::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxRichTextStyleComboCtrl::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::InitDialog();
	};

	// bool wxWindow::IsDoubleBuffered() const
	bool IsDoubleBuffered() const {
		if(_obj.pushFunction("IsDoubleBuffered")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::IsDoubleBuffered();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRichTextStyleComboCtrl::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetLabel(label);
	};

	// void wxTextEntry::AppendText(const wxString & text)
	void AppendText(const wxString & text) {
		if(_obj.pushFunction("AppendText")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::AppendText(text);
	};

	// bool wxTextEntry::CanCopy() const
	bool CanCopy() const {
		if(_obj.pushFunction("CanCopy")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::CanCopy();
	};

	// bool wxTextEntry::CanCut() const
	bool CanCut() const {
		if(_obj.pushFunction("CanCut")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::CanCut();
	};

	// bool wxTextEntry::CanPaste() const
	bool CanPaste() const {
		if(_obj.pushFunction("CanPaste")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::CanPaste();
	};

	// bool wxTextEntry::CanRedo() const
	bool CanRedo() const {
		if(_obj.pushFunction("CanRedo")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::CanRedo();
	};

	// bool wxTextEntry::CanUndo() const
	bool CanUndo() const {
		if(_obj.pushFunction("CanUndo")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::CanUndo();
	};

	// void wxTextEntry::ChangeValue(const wxString & value)
	void ChangeValue(const wxString & value) {
		if(_obj.pushFunction("ChangeValue")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::ChangeValue(value);
	};

	// void wxTextEntry::Clear()
	void Clear() {
		if(_obj.pushFunction("Clear")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Clear();
	};

	// wxString wxTextEntry::GetRange(long from, long to) const
	wxString GetRange(long from, long to) const {
		if(_obj.pushFunction("GetRange")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRichTextStyleComboCtrl::GetRange(from, to);
	};

	// void wxTextEntry::GetSelection(long * from, long * to) const
	void GetSelection(long * from, long * to) const {
		if(_obj.pushFunction("GetSelection")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::GetSelection(from, to);
	};

	// wxString wxTextEntry::GetStringSelection() const
	wxString GetStringSelection() const {
		if(_obj.pushFunction("GetStringSelection")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRichTextStyleComboCtrl::GetStringSelection();
	};

	// bool wxTextEntry::IsEditable() const
	bool IsEditable() const {
		if(_obj.pushFunction("IsEditable")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::IsEditable();
	};

	// bool wxTextEntry::IsEmpty() const
	bool IsEmpty() const {
		if(_obj.pushFunction("IsEmpty")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::IsEmpty();
	};

	// void wxTextEntry::Redo()
	void Redo() {
		if(_obj.pushFunction("Redo")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Redo();
	};

	// void wxTextEntry::SetEditable(bool editable)
	void SetEditable(bool editable) {
		if(_obj.pushFunction("SetEditable")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(editable);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetEditable(editable);
	};

	// void wxTextEntry::SetMaxLength(unsigned long len)
	void SetMaxLength(unsigned long len) {
		if(_obj.pushFunction("SetMaxLength")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(len);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetMaxLength(len);
	};

	// void wxTextEntry::SelectAll()
	void SelectAll() {
		if(_obj.pushFunction("SelectAll")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SelectAll();
	};

	// void wxTextEntry::WriteText(const wxString & text)
	void WriteText(const wxString & text) {
		if(_obj.pushFunction("WriteText")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::WriteText(text);
	};

	// void wxComboCtrl::Copy()
	void Copy() {
		if(_obj.pushFunction("Copy")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Copy();
	};

	// void wxComboCtrl::Cut()
	void Cut() {
		if(_obj.pushFunction("Cut")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Cut();
	};

	// void wxComboCtrl::Dismiss()
	void Dismiss() {
		if(_obj.pushFunction("Dismiss")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Dismiss();
	};

	// wxString wxComboCtrl::GetHint() const
	wxString GetHint() const {
		if(_obj.pushFunction("GetHint")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRichTextStyleComboCtrl::GetHint();
	};

	// long wxComboCtrl::GetInsertionPoint() const
	long GetInsertionPoint() const {
		if(_obj.pushFunction("GetInsertionPoint")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<long>());
		}

		return wxRichTextStyleComboCtrl::GetInsertionPoint();
	};

	// long wxComboCtrl::GetLastPosition() const
	long GetLastPosition() const {
		if(_obj.pushFunction("GetLastPosition")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<long>());
		}

		return wxRichTextStyleComboCtrl::GetLastPosition();
	};

	// wxString wxComboCtrl::GetValue() const
	wxString GetValue() const {
		if(_obj.pushFunction("GetValue")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRichTextStyleComboCtrl::GetValue();
	};

	// void wxComboCtrl::HidePopup(bool generateEvent = false)
	void HidePopup(bool generateEvent = false) {
		if(_obj.pushFunction("HidePopup")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(generateEvent);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::HidePopup(generateEvent);
	};

	// void wxComboCtrl::OnButtonClick()
	void OnButtonClick() {
		if(_obj.pushFunction("OnButtonClick")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::OnButtonClick();
	};

	// void wxComboCtrl::Paste()
	void Paste() {
		if(_obj.pushFunction("Paste")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Paste();
	};

	// void wxComboCtrl::Popup()
	void Popup() {
		if(_obj.pushFunction("Popup")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Popup();
	};

	// void wxComboCtrl::Remove(long from, long to)
	void Remove(long from, long to) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Remove(from, to);
	};

	// void wxComboCtrl::Replace(long from, long to, const wxString & text)
	void Replace(long from, long to, const wxString & text) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Replace(from, to, text);
	};

	// bool wxComboCtrl::SetHint(const wxString & hint)
	bool SetHint(const wxString & hint) {
		if(_obj.pushFunction("SetHint")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(hint);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleComboCtrl::SetHint(hint);
	};

	// void wxComboCtrl::SetInsertionPoint(long pos)
	void SetInsertionPoint(long pos) {
		if(_obj.pushFunction("SetInsertionPoint")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(pos);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetInsertionPoint(pos);
	};

	// void wxComboCtrl::SetInsertionPointEnd()
	void SetInsertionPointEnd() {
		if(_obj.pushFunction("SetInsertionPointEnd")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetInsertionPointEnd();
	};

	// void wxComboCtrl::SetSelection(long from, long to)
	void SetSelection(long from, long to) {
		if(_obj.pushFunction("SetSelection")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetSelection(from, to);
	};

	// void wxComboCtrl::SetValue(const wxString & value)
	void SetValue(const wxString & value) {
		if(_obj.pushFunction("SetValue")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::SetValue(value);
	};

	// void wxComboCtrl::ShowPopup()
	void ShowPopup() {
		if(_obj.pushFunction("ShowPopup")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::ShowPopup();
	};

	// void wxComboCtrl::Undo()
	void Undo() {
		if(_obj.pushFunction("Undo")) {
			_obj.pushArg((wxRichTextStyleComboCtrl*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleComboCtrl::Undo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

