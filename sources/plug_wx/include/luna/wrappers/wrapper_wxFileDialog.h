#ifndef _WRAPPERS_WRAPPER_WXFILEDIALOG_H_
#define _WRAPPERS_WRAPPER_WXFILEDIALOG_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/filedlg.h>

class wrapper_wxFileDialog : public wxFileDialog, public luna_wrapper_base {

public:
		

	~wrapper_wxFileDialog() {
		logDEBUG3("Calling delete function for wrapper wxFileDialog");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileDialog*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFileDialog(lua_State* L, lua_Table* dum, wxWindow * parent, const wxString & message = wxFileSelectorPromptStr, const wxString & defaultDir = wxEmptyString, const wxString & defaultFile = wxEmptyString, const wxString & wildcard = wxFileSelectorDefaultWildcardStr, long style = wxFD_DEFAULT_STYLE, const wxPoint & pos = wxDefaultPosition, const wxSize & size = wxDefaultSize, const wxString & name = wxFileDialogNameStr) 
		: wxFileDialog(parent, message, defaultDir, defaultFile, wildcard, style, pos, size, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileDialog::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileDialog::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFileDialog::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFileDialog::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxFileDialog::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxFileDialog::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxFileDialog::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFileDialog::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFileDialog::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFileDialog::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFileDialog::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFileDialog::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFileDialog::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFileDialog::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFileDialog::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxFileDialog::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetMaxClientSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetMinClientSize(size);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxFileDialog::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxFileDialog*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxFileDialog::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<int>());
		}

		return wxFileDialog::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<int>());
		}

		return wxFileDialog::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxFileDialog::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::GetThemeEnabled();
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<long>());
		}

		return wxFileDialog::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::Enable(enable);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileDialog::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxFileDialog::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::Validate();
	};

	// wxString wxWindow::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileDialog::GetLabel();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxFileDialog*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxFileDialog::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileDialog::GetName();
	};

	// void wxWindow::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetLabel(label);
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxFileDialog::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::DragAcceptFiles(accept);
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxFileDialog::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::InitDialog();
	};

	// bool wxWindow::IsDoubleBuffered() const
	bool IsDoubleBuffered() const {
		if(_obj.pushFunction("IsDoubleBuffered")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsDoubleBuffered();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::UpdateWindowUI(flags);
	};

	// bool wxTopLevelWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::CanSetTransparent();
	};

	// bool wxTopLevelWindow::EnableCloseButton(bool enable = true)
	bool EnableCloseButton(bool enable = true) {
		if(_obj.pushFunction("EnableCloseButton")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::EnableCloseButton(enable);
	};

	// wxString wxTopLevelWindow::GetTitle() const
	wxString GetTitle() const {
		if(_obj.pushFunction("GetTitle")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileDialog::GetTitle();
	};

	// bool wxTopLevelWindow::IsActive()
	bool IsActive() {
		if(_obj.pushFunction("IsActive")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsActive();
	};

	// bool wxTopLevelWindow::IsAlwaysMaximized() const
	bool IsAlwaysMaximized() const {
		if(_obj.pushFunction("IsAlwaysMaximized")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsAlwaysMaximized();
	};

	// bool wxTopLevelWindow::IsFullScreen() const
	bool IsFullScreen() const {
		if(_obj.pushFunction("IsFullScreen")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsFullScreen();
	};

	// bool wxTopLevelWindow::IsMaximized() const
	bool IsMaximized() const {
		if(_obj.pushFunction("IsMaximized")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsMaximized();
	};

	// bool wxTopLevelWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::Layout();
	};

	// void wxTopLevelWindow::Maximize(bool maximize = true)
	void Maximize(bool maximize = true) {
		if(_obj.pushFunction("Maximize")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(maximize);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::Maximize(maximize);
	};

	// void wxTopLevelWindow::RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	void RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) {
		if(_obj.pushFunction("RequestUserAttention")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::RequestUserAttention(flags);
	};

	// void wxTopLevelWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetMaxSize(size);
	};

	// void wxTopLevelWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetMinSize(size);
	};

	// void wxTopLevelWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// void wxTopLevelWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxTopLevelWindow::SetTitle(const wxString & title)
	void SetTitle(const wxString & title) {
		if(_obj.pushFunction("SetTitle")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(title);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetTitle(title);
	};

	// bool wxTopLevelWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::SetTransparent(alpha);
	};

	// bool wxTopLevelWindow::ShouldPreventAppExit() const
	bool ShouldPreventAppExit() const {
		if(_obj.pushFunction("ShouldPreventAppExit")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::ShouldPreventAppExit();
	};

	// void wxTopLevelWindow::OSXSetModified(bool modified)
	void OSXSetModified(bool modified) {
		if(_obj.pushFunction("OSXSetModified")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(modified);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::OSXSetModified(modified);
	};

	// bool wxTopLevelWindow::OSXIsModified() const
	bool OSXIsModified() const {
		if(_obj.pushFunction("OSXIsModified")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::OSXIsModified();
	};

	// bool wxTopLevelWindow::ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	bool ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) {
		if(_obj.pushFunction("ShowFullScreen")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(show);
			_obj.pushArg(style);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::ShowFullScreen(show, style);
	};

	// bool wxDialog::CanDoLayoutAdaptation()
	bool CanDoLayoutAdaptation() {
		if(_obj.pushFunction("CanDoLayoutAdaptation")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::CanDoLayoutAdaptation();
	};

	// bool wxDialog::DoLayoutAdaptation()
	bool DoLayoutAdaptation() {
		if(_obj.pushFunction("DoLayoutAdaptation")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::DoLayoutAdaptation();
	};

	// void wxDialog::EndModal(int retCode)
	void EndModal(int retCode) {
		if(_obj.pushFunction("EndModal")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(retCode);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::EndModal(retCode);
	};

	// wxWindow * wxDialog::GetContentWindow() const
	wxWindow * GetContentWindow() const {
		if(_obj.pushFunction("GetContentWindow")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<wxWindow*>());
		}

		return wxFileDialog::GetContentWindow();
	};

	// void wxDialog::Iconize(bool iconize = true)
	void Iconize(bool iconize = true) {
		if(_obj.pushFunction("Iconize")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(iconize);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::Iconize(iconize);
	};

	// bool wxDialog::IsIconized() const
	bool IsIconized() const {
		if(_obj.pushFunction("IsIconized")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsIconized();
	};

	// bool wxDialog::IsModal() const
	bool IsModal() const {
		if(_obj.pushFunction("IsModal")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::IsModal();
	};

	// void wxDialog::SetIcons(const wxIconBundle & icons)
	void SetIcons(const wxIconBundle & icons) {
		if(_obj.pushFunction("SetIcons")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&icons);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetIcons(icons);
	};

	// bool wxDialog::Show(bool show = 1)
	bool Show(bool show = 1) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxFileDialog::Show(show);
	};

	// wxString wxFileDialog::GetDirectory() const
	wxString GetDirectory() const {
		if(_obj.pushFunction("GetDirectory")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileDialog::GetDirectory();
	};

	// wxString wxFileDialog::GetFilename() const
	wxString GetFilename() const {
		if(_obj.pushFunction("GetFilename")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileDialog::GetFilename();
	};

	// void wxFileDialog::GetFilenames(wxArrayString & filenames) const
	void GetFilenames(wxArrayString & filenames) const {
		if(_obj.pushFunction("GetFilenames")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&filenames);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::GetFilenames(filenames);
	};

	// int wxFileDialog::GetFilterIndex() const
	int GetFilterIndex() const {
		if(_obj.pushFunction("GetFilterIndex")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<int>());
		}

		return wxFileDialog::GetFilterIndex();
	};

	// wxString wxFileDialog::GetMessage() const
	wxString GetMessage() const {
		if(_obj.pushFunction("GetMessage")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileDialog::GetMessage();
	};

	// wxString wxFileDialog::GetPath() const
	wxString GetPath() const {
		if(_obj.pushFunction("GetPath")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileDialog::GetPath();
	};

	// void wxFileDialog::GetPaths(wxArrayString & paths) const
	void GetPaths(wxArrayString & paths) const {
		if(_obj.pushFunction("GetPaths")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(&paths);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::GetPaths(paths);
	};

	// wxString wxFileDialog::GetWildcard() const
	wxString GetWildcard() const {
		if(_obj.pushFunction("GetWildcard")) {
			_obj.pushArg((wxFileDialog*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxFileDialog::GetWildcard();
	};

	// void wxFileDialog::SetDirectory(const wxString & directory)
	void SetDirectory(const wxString & directory) {
		if(_obj.pushFunction("SetDirectory")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(directory);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetDirectory(directory);
	};

	// void wxFileDialog::SetFilename(const wxString & setfilename)
	void SetFilename(const wxString & setfilename) {
		if(_obj.pushFunction("SetFilename")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(setfilename);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetFilename(setfilename);
	};

	// void wxFileDialog::SetFilterIndex(int filterIndex)
	void SetFilterIndex(int filterIndex) {
		if(_obj.pushFunction("SetFilterIndex")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(filterIndex);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetFilterIndex(filterIndex);
	};

	// void wxFileDialog::SetMessage(const wxString & message)
	void SetMessage(const wxString & message) {
		if(_obj.pushFunction("SetMessage")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(message);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetMessage(message);
	};

	// void wxFileDialog::SetPath(const wxString & path)
	void SetPath(const wxString & path) {
		if(_obj.pushFunction("SetPath")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(path);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetPath(path);
	};

	// void wxFileDialog::SetWildcard(const wxString & wildCard)
	void SetWildcard(const wxString & wildCard) {
		if(_obj.pushFunction("SetWildcard")) {
			_obj.pushArg((wxFileDialog*)this);
			_obj.pushArg(wildCard);
			return (_obj.callFunction<void>());
		}

		return wxFileDialog::SetWildcard(wildCard);
	};

	// int wxFileDialog::ShowModal()
	int ShowModal() {
		if(_obj.pushFunction("ShowModal")) {
			_obj.pushArg((wxFileDialog*)this);
			return (_obj.callFunction<int>());
		}

		return wxFileDialog::ShowModal();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

