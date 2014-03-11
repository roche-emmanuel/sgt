#ifndef _WRAPPERS_WRAPPER_WXWIZARD_H_
#define _WRAPPERS_WRAPPER_WXWIZARD_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/wizard.h>

class wrapper_wxWizard : public wxWizard, public luna_wrapper_base {

public:
		

	~wrapper_wxWizard() {
		logDEBUG3("Calling delete function for wrapper wxWizard");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxWizard*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxWizard(lua_State* L, lua_Table* dum) 
		: wxWizard(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxWizard*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxWizard(lua_State* L, lua_Table* dum, wxWindow * parent, int id = ::wxID_ANY, const wxString & title = wxEmptyString, const wxBitmap & bitmap = wxNullBitmap, const wxPoint & pos = wxDefaultPosition, long style = wxDEFAULT_DIALOG_STYLE) 
		: wxWizard(parent, id, title, bitmap, pos, style), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxWizard*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWizard::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWizard::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxWizard::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxWizard::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxWizard::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxWizard::AddPendingEvent(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxWizard::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxWizard::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxWizard::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxWizard::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxWizard::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxWizard::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxWizard::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxWizard::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxWizard::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxWizard::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<void>());
		}

		return wxWizard::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<void>());
		}

		return wxWizard::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxWizard::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxWizard::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxWizard::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxWizard::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxWizard::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxWizard::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxWizard::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetMaxClientSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetMinClientSize(size);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxWizard::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<void>());
		}

		return wxWizard::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxWizard*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxWizard::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<int>());
		}

		return wxWizard::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<int>());
		}

		return wxWizard::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxWizard::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxWizard::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<void>());
		}

		return wxWizard::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::GetThemeEnabled();
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<long>());
		}

		return wxWizard::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<void>());
		}

		return wxWizard::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<void>());
		}

		return wxWizard::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::Enable(enable);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxWizard::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxWizard::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::Validate();
	};

	// wxString wxWindow::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxWizard::GetLabel();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxWizard*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxWizard::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxWizard::GetName();
	};

	// void wxWindow::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetLabel(label);
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxWizard::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxWizard::DragAcceptFiles(accept);
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxWizard::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxWizard::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxWizard::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<void>());
		}

		return wxWizard::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<void>());
		}

		return wxWizard::InitDialog();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxWizard::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<void>());
		}

		return wxWizard::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxWizard::UpdateWindowUI(flags);
	};

	// bool wxTopLevelWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::CanSetTransparent();
	};

	// bool wxTopLevelWindow::EnableCloseButton(bool enable = true)
	bool EnableCloseButton(bool enable = true) {
		if(_obj.pushFunction("EnableCloseButton")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::EnableCloseButton(enable);
	};

	// wxString wxTopLevelWindow::GetTitle() const
	wxString GetTitle() const {
		if(_obj.pushFunction("GetTitle")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxWizard::GetTitle();
	};

	// bool wxTopLevelWindow::IsActive()
	bool IsActive() {
		if(_obj.pushFunction("IsActive")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::IsActive();
	};

	// bool wxTopLevelWindow::IsAlwaysMaximized() const
	bool IsAlwaysMaximized() const {
		if(_obj.pushFunction("IsAlwaysMaximized")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::IsAlwaysMaximized();
	};

	// bool wxTopLevelWindow::IsFullScreen() const
	bool IsFullScreen() const {
		if(_obj.pushFunction("IsFullScreen")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::IsFullScreen();
	};

	// bool wxTopLevelWindow::IsMaximized() const
	bool IsMaximized() const {
		if(_obj.pushFunction("IsMaximized")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::IsMaximized();
	};

	// bool wxTopLevelWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::Layout();
	};

	// void wxTopLevelWindow::Maximize(bool maximize = true)
	void Maximize(bool maximize = true) {
		if(_obj.pushFunction("Maximize")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(maximize);
			return (_obj.callFunction<void>());
		}

		return wxWizard::Maximize(maximize);
	};

	// void wxTopLevelWindow::RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO)
	void RequestUserAttention(int flags = ::wxUSER_ATTENTION_INFO) {
		if(_obj.pushFunction("RequestUserAttention")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxWizard::RequestUserAttention(flags);
	};

	// void wxTopLevelWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetMaxSize(size);
	};

	// void wxTopLevelWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetMinSize(size);
	};

	// void wxTopLevelWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// void wxTopLevelWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxTopLevelWindow::SetTitle(const wxString & title)
	void SetTitle(const wxString & title) {
		if(_obj.pushFunction("SetTitle")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(title);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetTitle(title);
	};

	// bool wxTopLevelWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::SetTransparent(alpha);
	};

	// bool wxTopLevelWindow::ShouldPreventAppExit() const
	bool ShouldPreventAppExit() const {
		if(_obj.pushFunction("ShouldPreventAppExit")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::ShouldPreventAppExit();
	};

	// void wxTopLevelWindow::OSXSetModified(bool modified)
	void OSXSetModified(bool modified) {
		if(_obj.pushFunction("OSXSetModified")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(modified);
			return (_obj.callFunction<void>());
		}

		return wxWizard::OSXSetModified(modified);
	};

	// bool wxTopLevelWindow::OSXIsModified() const
	bool OSXIsModified() const {
		if(_obj.pushFunction("OSXIsModified")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::OSXIsModified();
	};

	// bool wxTopLevelWindow::ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL)
	bool ShowFullScreen(bool show, long style = ::wxFULLSCREEN_ALL) {
		if(_obj.pushFunction("ShowFullScreen")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(show);
			_obj.pushArg(style);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::ShowFullScreen(show, style);
	};

	// bool wxDialog::CanDoLayoutAdaptation()
	bool CanDoLayoutAdaptation() {
		if(_obj.pushFunction("CanDoLayoutAdaptation")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::CanDoLayoutAdaptation();
	};

	// bool wxDialog::DoLayoutAdaptation()
	bool DoLayoutAdaptation() {
		if(_obj.pushFunction("DoLayoutAdaptation")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::DoLayoutAdaptation();
	};

	// void wxDialog::EndModal(int retCode)
	void EndModal(int retCode) {
		if(_obj.pushFunction("EndModal")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(retCode);
			return (_obj.callFunction<void>());
		}

		return wxWizard::EndModal(retCode);
	};

	// wxWindow * wxDialog::GetContentWindow() const
	wxWindow * GetContentWindow() const {
		if(_obj.pushFunction("GetContentWindow")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<wxWindow*>());
		}

		return wxWizard::GetContentWindow();
	};

	// void wxDialog::Iconize(bool iconize = true)
	void Iconize(bool iconize = true) {
		if(_obj.pushFunction("Iconize")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(iconize);
			return (_obj.callFunction<void>());
		}

		return wxWizard::Iconize(iconize);
	};

	// bool wxDialog::IsIconized() const
	bool IsIconized() const {
		if(_obj.pushFunction("IsIconized")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::IsIconized();
	};

	// bool wxDialog::IsModal() const
	bool IsModal() const {
		if(_obj.pushFunction("IsModal")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::IsModal();
	};

	// void wxDialog::SetIcons(const wxIconBundle & icons)
	void SetIcons(const wxIconBundle & icons) {
		if(_obj.pushFunction("SetIcons")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&icons);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetIcons(icons);
	};

	// bool wxDialog::Show(bool show = 1)
	bool Show(bool show = 1) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::Show(show);
	};

	// int wxDialog::ShowModal()
	int ShowModal() {
		if(_obj.pushFunction("ShowModal")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<int>());
		}

		return wxWizard::ShowModal();
	};

	// void wxWizard::FitToPage(const wxWizardPage * firstPage)
	void FitToPage(const wxWizardPage * firstPage) {
		if(_obj.pushFunction("FitToPage")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(firstPage);
			return (_obj.callFunction<void>());
		}

		return wxWizard::FitToPage(firstPage);
	};

	// wxWizardPage * wxWizard::GetCurrentPage() const
	wxWizardPage * GetCurrentPage() const {
		if(_obj.pushFunction("GetCurrentPage")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<wxWizardPage*>());
		}

		return wxWizard::GetCurrentPage();
	};

	// wxSizer * wxWizard::GetPageAreaSizer() const
	wxSizer * GetPageAreaSizer() const {
		if(_obj.pushFunction("GetPageAreaSizer")) {
			_obj.pushArg((wxWizard*)this);
			return (_obj.callFunction<wxSizer*>());
		}

		return wxWizard::GetPageAreaSizer();
	};

	// wxSize wxWizard::GetPageSize() const
	wxSize GetPageSize() const {
		if(_obj.pushFunction("GetPageSize")) {
			_obj.pushArg((wxWizard*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxWizard::GetPageSize();
	};

	// bool wxWizard::HasNextPage(wxWizardPage * page)
	bool HasNextPage(wxWizardPage * page) {
		if(_obj.pushFunction("HasNextPage")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(page);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::HasNextPage(page);
	};

	// bool wxWizard::HasPrevPage(wxWizardPage * page)
	bool HasPrevPage(wxWizardPage * page) {
		if(_obj.pushFunction("HasPrevPage")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(page);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::HasPrevPage(page);
	};

	// bool wxWizard::RunWizard(wxWizardPage * firstPage)
	bool RunWizard(wxWizardPage * firstPage) {
		if(_obj.pushFunction("RunWizard")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(firstPage);
			return (_obj.callFunction<bool>());
		}

		return wxWizard::RunWizard(firstPage);
	};

	// void wxWizard::SetBorder(int border)
	void SetBorder(int border) {
		if(_obj.pushFunction("SetBorder")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(border);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetBorder(border);
	};

	// void wxWizard::SetPageSize(const wxSize & sizePage)
	void SetPageSize(const wxSize & sizePage) {
		if(_obj.pushFunction("SetPageSize")) {
			_obj.pushArg((wxWizard*)this);
			_obj.pushArg(&sizePage);
			return (_obj.callFunction<void>());
		}

		return wxWizard::SetPageSize(sizePage);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

