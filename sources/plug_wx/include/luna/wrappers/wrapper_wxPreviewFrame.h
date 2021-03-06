#ifndef _WRAPPERS_WRAPPER_WXPREVIEWFRAME_H_
#define _WRAPPERS_WRAPPER_WXPREVIEWFRAME_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/print.h>

class wrapper_wxPreviewFrame : public wxPreviewFrame, public luna_wrapper_base {

public:
		

	~wrapper_wxPreviewFrame() {
		logDEBUG3("Calling delete function for wrapper wxPreviewFrame");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPreviewFrame*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPreviewFrame::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPreviewFrame::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPreviewFrame::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPreviewFrame::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxPreviewFrame::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxPreviewFrame::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxPreviewFrame::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPreviewFrame::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPreviewFrame::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPreviewFrame::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPreviewFrame::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPreviewFrame::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPreviewFrame::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPreviewFrame::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPreviewFrame::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxPreviewFrame::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetMaxClientSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetMinClientSize(size);
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxPreviewFrame::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<int>());
		}

		return wxPreviewFrame::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<int>());
		}

		return wxPreviewFrame::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxPreviewFrame::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::GetThemeEnabled();
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<long>());
		}

		return wxPreviewFrame::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPreviewFrame::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxPreviewFrame::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::Validate();
	};

	// wxString wxWindow::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPreviewFrame::GetLabel();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxPreviewFrame::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPreviewFrame::GetName();
	};

	// void wxWindow::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetLabel(label);
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxPreviewFrame::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::DragAcceptFiles(accept);
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxPreviewFrame::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::InitDialog();
	};

	// bool wxWindow::IsDoubleBuffered() const
	bool IsDoubleBuffered() const {
		if(_obj.pushFunction("IsDoubleBuffered")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::IsDoubleBuffered();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::UpdateWindowUI(flags);
	};

	// bool wxTopLevelWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::CanSetTransparent();
	};

	// bool wxTopLevelWindow::EnableCloseButton(bool enable = true)
	bool EnableCloseButton(bool enable = true) {
		if(_obj.pushFunction("EnableCloseButton")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::EnableCloseButton(enable);
	};

	// wxString wxTopLevelWindow::GetTitle() const
	wxString GetTitle() const {
		if(_obj.pushFunction("GetTitle")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxPreviewFrame::GetTitle();
	};

	// void wxTopLevelWindow::Iconize(bool iconize = true)
	void Iconize(bool iconize = true) {
		if(_obj.pushFunction("Iconize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(iconize);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::Iconize(iconize);
	};

	// bool wxTopLevelWindow::IsActive()
	bool IsActive() {
		if(_obj.pushFunction("IsActive")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::IsActive();
	};

	// bool wxTopLevelWindow::IsAlwaysMaximized() const
	bool IsAlwaysMaximized() const {
		if(_obj.pushFunction("IsAlwaysMaximized")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::IsAlwaysMaximized();
	};

	// bool wxTopLevelWindow::IsFullScreen() const
	bool IsFullScreen() const {
		if(_obj.pushFunction("IsFullScreen")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::IsFullScreen();
	};

	// bool wxTopLevelWindow::IsIconized() const
	bool IsIconized() const {
		if(_obj.pushFunction("IsIconized")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::IsIconized();
	};

	// bool wxTopLevelWindow::IsMaximized() const
	bool IsMaximized() const {
		if(_obj.pushFunction("IsMaximized")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::IsMaximized();
	};

	// bool wxTopLevelWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::Layout();
	};

	// void wxTopLevelWindow::Maximize(bool maximize = true)
	void Maximize(bool maximize = true) {
		if(_obj.pushFunction("Maximize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(maximize);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::Maximize(maximize);
	};

	// void wxTopLevelWindow::RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	void RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) {
		if(_obj.pushFunction("RequestUserAttention")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::RequestUserAttention(flags);
	};

	// void wxTopLevelWindow::SetIcons(const wxIconBundle & icons)
	void SetIcons(const wxIconBundle & icons) {
		if(_obj.pushFunction("SetIcons")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&icons);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetIcons(icons);
	};

	// void wxTopLevelWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetMaxSize(size);
	};

	// void wxTopLevelWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetMinSize(size);
	};

	// void wxTopLevelWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// void wxTopLevelWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxTopLevelWindow::SetTitle(const wxString & title)
	void SetTitle(const wxString & title) {
		if(_obj.pushFunction("SetTitle")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(title);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetTitle(title);
	};

	// bool wxTopLevelWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::SetTransparent(alpha);
	};

	// bool wxTopLevelWindow::ShouldPreventAppExit() const
	bool ShouldPreventAppExit() const {
		if(_obj.pushFunction("ShouldPreventAppExit")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::ShouldPreventAppExit();
	};

	// void wxTopLevelWindow::OSXSetModified(bool modified)
	void OSXSetModified(bool modified) {
		if(_obj.pushFunction("OSXSetModified")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(modified);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::OSXSetModified(modified);
	};

	// bool wxTopLevelWindow::OSXIsModified() const
	bool OSXIsModified() const {
		if(_obj.pushFunction("OSXIsModified")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::OSXIsModified();
	};

	// bool wxTopLevelWindow::ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	bool ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) {
		if(_obj.pushFunction("ShowFullScreen")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(show);
			_obj.pushArg(style);
			return (_obj.callFunction<bool>());
		}

		return wxPreviewFrame::ShowFullScreen(show, style);
	};

	// wxStatusBar * wxFrame::CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr)
	wxStatusBar * CreateStatusBar(int number = 1, long style = wxSTB_DEFAULT_STYLE, int id = 0, const wxString & name = wxStatusLineNameStr) {
		if(_obj.pushFunction("CreateStatusBar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(number);
			_obj.pushArg(style);
			_obj.pushArg(id);
			_obj.pushArg(name);
			return (_obj.callFunction<wxStatusBar*>());
		}

		return wxPreviewFrame::CreateStatusBar(number, style, id, name);
	};

	// wxToolBar * wxFrame::CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr)
	wxToolBar * CreateToolBar(long style = ::wxBORDER_NONE | ::wxTB_HORIZONTAL, int id = ::wxID_ANY, const wxString & name = wxToolBarNameStr) {
		if(_obj.pushFunction("CreateToolBar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(style);
			_obj.pushArg(id);
			_obj.pushArg(name);
			return (_obj.callFunction<wxToolBar*>());
		}

		return wxPreviewFrame::CreateToolBar(style, id, name);
	};

	// wxPoint wxFrame::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxPreviewFrame::GetClientAreaOrigin();
	};

	// wxMenuBar * wxFrame::GetMenuBar() const
	wxMenuBar * GetMenuBar() const {
		if(_obj.pushFunction("GetMenuBar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<wxMenuBar*>());
		}

		return wxPreviewFrame::GetMenuBar();
	};

	// wxStatusBar * wxFrame::GetStatusBar() const
	wxStatusBar * GetStatusBar() const {
		if(_obj.pushFunction("GetStatusBar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<wxStatusBar*>());
		}

		return wxPreviewFrame::GetStatusBar();
	};

	// wxToolBar * wxFrame::GetToolBar() const
	wxToolBar * GetToolBar() const {
		if(_obj.pushFunction("GetToolBar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<wxToolBar*>());
		}

		return wxPreviewFrame::GetToolBar();
	};

	// wxStatusBar * wxFrame::OnCreateStatusBar(int number, long style, int id, const wxString & name)
	wxStatusBar * OnCreateStatusBar(int number, long style, int id, const wxString & name) {
		if(_obj.pushFunction("OnCreateStatusBar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(number);
			_obj.pushArg(style);
			_obj.pushArg(id);
			_obj.pushArg(name);
			return (_obj.callFunction<wxStatusBar*>());
		}

		return wxPreviewFrame::OnCreateStatusBar(number, style, id, name);
	};

	// wxToolBar * wxFrame::OnCreateToolBar(long style, int id, const wxString & name)
	wxToolBar * OnCreateToolBar(long style, int id, const wxString & name) {
		if(_obj.pushFunction("OnCreateToolBar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(style);
			_obj.pushArg(id);
			_obj.pushArg(name);
			return (_obj.callFunction<wxToolBar*>());
		}

		return wxPreviewFrame::OnCreateToolBar(style, id, name);
	};

	// void wxFrame::SetMenuBar(wxMenuBar * menuBar)
	void SetMenuBar(wxMenuBar * menuBar) {
		if(_obj.pushFunction("SetMenuBar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(menuBar);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetMenuBar(menuBar);
	};

	// void wxFrame::SetStatusBar(wxStatusBar * statusBar)
	void SetStatusBar(wxStatusBar * statusBar) {
		if(_obj.pushFunction("SetStatusBar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(statusBar);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetStatusBar(statusBar);
	};

	// void wxFrame::SetStatusText(const wxString & text, int number = 0)
	void SetStatusText(const wxString & text, int number = 0) {
		if(_obj.pushFunction("SetStatusText")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(text);
			_obj.pushArg(number);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetStatusText(text, number);
	};

	// void wxFrame::SetStatusWidths(int n, const int * widths_field)
	void SetStatusWidths(int n, const int * widths_field) {
		if(_obj.pushFunction("SetStatusWidths")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(n);
			_obj.pushArg(widths_field);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetStatusWidths(n, widths_field);
	};

	// void wxFrame::SetToolBar(wxToolBar * toolBar)
	void SetToolBar(wxToolBar * toolBar) {
		if(_obj.pushFunction("SetToolBar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg(toolBar);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::SetToolBar(toolBar);
	};

	// void wxPreviewFrame::CreateCanvas()
	void CreateCanvas() {
		if(_obj.pushFunction("CreateCanvas")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::CreateCanvas();
	};

	// void wxPreviewFrame::CreateControlBar()
	void CreateControlBar() {
		if(_obj.pushFunction("CreateControlBar")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::CreateControlBar();
	};

	// void wxPreviewFrame::Initialize()
	void Initialize() {
		if(_obj.pushFunction("Initialize")) {
			_obj.pushArg((wxPreviewFrame*)this);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::Initialize();
	};

	// void wxPreviewFrame::InitializeWithModality(wxPreviewFrameModalityKind kind)
	void InitializeWithModality(wxPreviewFrameModalityKind kind) {
		if(_obj.pushFunction("InitializeWithModality")) {
			_obj.pushArg((wxPreviewFrame*)this);
			_obj.pushArg((int)kind);
			return (_obj.callFunction<void>());
		}

		return wxPreviewFrame::InitializeWithModality(kind);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

