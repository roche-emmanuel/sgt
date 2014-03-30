#ifndef _WRAPPERS_WRAPPER_WXCOMBOBOX_H_
#define _WRAPPERS_WRAPPER_WXCOMBOBOX_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/combobox.h>

class wrapper_wxComboBox : public wxComboBox, public luna_wrapper_base {

public:
		

	~wrapper_wxComboBox() {
		logDEBUG3("Calling delete function for wrapper wxComboBox");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxComboBox*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxComboBox(lua_State* L, lua_Table* dum) 
		: wxComboBox(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxComboBox(lua_State* L, lua_Table* dum, wxWindow * parent, int id, const wxString & value, const wxPoint & pos, const wxSize & size, const wxArrayString & choices, long style = 0, const wxValidator & validator = wxDefaultValidator, const wxString & name = wxComboBoxNameStr) 
		: wxComboBox(parent, id, value, pos, size, choices, style, validator, name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxComboBox::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxComboBox::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxComboBox::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::AddPendingEvent(event);
	};

	// void wxComboBox::DoSetItemClientData(unsigned int arg1, void * arg2)
	void DoSetItemClientData(unsigned int arg1, void * arg2) {
		if(_obj.pushFunction("DoSetItemClientData")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(arg1);
			_obj.pushArg(arg2);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::DoSetItemClientData(arg1, arg2);
	};

	// void * wxComboBox::DoGetItemClientData(unsigned int arg1) const
	void * DoGetItemClientData(unsigned int arg1) const {
		if(_obj.pushFunction("DoGetItemClientData")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void*>());
		}

		return wxComboBox::DoGetItemClientData(arg1);
	};

	// void wxComboBox::DoClear()
	void DoClear() {
		if(_obj.pushFunction("DoClear")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::DoClear();
	};

	// void wxComboBox::DoDeleteOneItem(unsigned int arg1)
	void DoDeleteOneItem(unsigned int arg1) {
		if(_obj.pushFunction("DoDeleteOneItem")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::DoDeleteOneItem(arg1);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxComboBox::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::AcceptsFocus();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetFocus();
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxComboBox::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxComboBox::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxComboBox::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::IsScrollbarAlwaysShown(orient);
	};

	// bool wxWindow::ScrollLines(int lines)
	bool ScrollLines(int lines) {
		if(_obj.pushFunction("ScrollLines")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(lines);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::ScrollLines(lines);
	};

	// bool wxWindow::ScrollPages(int pages)
	bool ScrollPages(int pages) {
		if(_obj.pushFunction("ScrollPages")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::ScrollPages(pages);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxComboBox::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxComboBox::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxComboBox::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxComboBox::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxComboBox::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxComboBox::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxComboBox::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxComboBox::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxComboBox::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxComboBox::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxComboBox*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxComboBox::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<int>());
		}

		return wxComboBox::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<int>());
		}

		return wxComboBox::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxComboBox::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<long>());
		}

		return wxComboBox::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxComboBox::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxComboBox::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::Validate();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxComboBox*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxComboBox::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxComboBox::GetName();
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxComboBox::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::DragAcceptFiles(accept);
	};

	// bool wxWindow::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::Layout();
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxComboBox::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::InheritAttributes();
	};

	// void wxWindow::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::InitDialog();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::UpdateWindowUI(flags);
	};

	// void wxControl::Command(wxCommandEvent & event)
	void Command(wxCommandEvent & event) {
		if(_obj.pushFunction("Command")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Command(event);
	};

	// wxString wxControl::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxComboBox::GetLabel();
	};

	// void wxControl::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetLabel(label);
	};

	// void wxTextEntry::AppendText(const wxString & text)
	void AppendText(const wxString & text) {
		if(_obj.pushFunction("AppendText")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::AppendText(text);
	};

	// bool wxTextEntry::CanCopy() const
	bool CanCopy() const {
		if(_obj.pushFunction("CanCopy")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::CanCopy();
	};

	// bool wxTextEntry::CanCut() const
	bool CanCut() const {
		if(_obj.pushFunction("CanCut")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::CanCut();
	};

	// bool wxTextEntry::CanPaste() const
	bool CanPaste() const {
		if(_obj.pushFunction("CanPaste")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::CanPaste();
	};

	// bool wxTextEntry::CanRedo() const
	bool CanRedo() const {
		if(_obj.pushFunction("CanRedo")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::CanRedo();
	};

	// bool wxTextEntry::CanUndo() const
	bool CanUndo() const {
		if(_obj.pushFunction("CanUndo")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::CanUndo();
	};

	// void wxTextEntry::ChangeValue(const wxString & value)
	void ChangeValue(const wxString & value) {
		if(_obj.pushFunction("ChangeValue")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::ChangeValue(value);
	};

	// void wxTextEntry::Clear()
	void Clear() {
		if(_obj.pushFunction("Clear")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Clear();
	};

	// void wxTextEntry::Copy()
	void Copy() {
		if(_obj.pushFunction("Copy")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Copy();
	};

	// long wxTextEntry::GetLastPosition() const
	long GetLastPosition() const {
		if(_obj.pushFunction("GetLastPosition")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<long>());
		}

		return wxComboBox::GetLastPosition();
	};

	// wxString wxTextEntry::GetRange(long from, long to) const
	wxString GetRange(long from, long to) const {
		if(_obj.pushFunction("GetRange")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return *(_obj.callFunction<wxString*>());
		}

		return wxComboBox::GetRange(from, to);
	};

	// wxString wxTextEntry::GetValue() const
	wxString GetValue() const {
		if(_obj.pushFunction("GetValue")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxComboBox::GetValue();
	};

	// bool wxTextEntry::IsEditable() const
	bool IsEditable() const {
		if(_obj.pushFunction("IsEditable")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::IsEditable();
	};

	// void wxTextEntry::Paste()
	void Paste() {
		if(_obj.pushFunction("Paste")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Paste();
	};

	// void wxTextEntry::Redo()
	void Redo() {
		if(_obj.pushFunction("Redo")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Redo();
	};

	// void wxTextEntry::Remove(long from, long to)
	void Remove(long from, long to) {
		if(_obj.pushFunction("Remove")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Remove(from, to);
	};

	// void wxTextEntry::Replace(long from, long to, const wxString & value)
	void Replace(long from, long to, const wxString & value) {
		if(_obj.pushFunction("Replace")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			_obj.pushArg(value);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Replace(from, to, value);
	};

	// void wxTextEntry::SetEditable(bool editable)
	void SetEditable(bool editable) {
		if(_obj.pushFunction("SetEditable")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(editable);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetEditable(editable);
	};

	// void wxTextEntry::SetInsertionPoint(long pos)
	void SetInsertionPoint(long pos) {
		if(_obj.pushFunction("SetInsertionPoint")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(pos);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetInsertionPoint(pos);
	};

	// void wxTextEntry::SetInsertionPointEnd()
	void SetInsertionPointEnd() {
		if(_obj.pushFunction("SetInsertionPointEnd")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetInsertionPointEnd();
	};

	// void wxTextEntry::SetMaxLength(unsigned long len)
	void SetMaxLength(unsigned long len) {
		if(_obj.pushFunction("SetMaxLength")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(len);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetMaxLength(len);
	};

	// void wxTextEntry::SelectAll()
	void SelectAll() {
		if(_obj.pushFunction("SelectAll")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SelectAll();
	};

	// bool wxTextEntry::SetHint(const wxString & hint)
	bool SetHint(const wxString & hint) {
		if(_obj.pushFunction("SetHint")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(hint);
			return (_obj.callFunction<bool>());
		}

		return wxComboBox::SetHint(hint);
	};

	// wxString wxTextEntry::GetHint() const
	wxString GetHint() const {
		if(_obj.pushFunction("GetHint")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxComboBox::GetHint();
	};

	// void wxTextEntry::Undo()
	void Undo() {
		if(_obj.pushFunction("Undo")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Undo();
	};

	// void wxTextEntry::WriteText(const wxString & text)
	void WriteText(const wxString & text) {
		if(_obj.pushFunction("WriteText")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::WriteText(text);
	};

	// int wxComboBox::GetCurrentSelection() const
	int GetCurrentSelection() const {
		if(_obj.pushFunction("GetCurrentSelection")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<int>());
		}

		return wxComboBox::GetCurrentSelection();
	};

	// long wxComboBox::GetInsertionPoint() const
	long GetInsertionPoint() const {
		if(_obj.pushFunction("GetInsertionPoint")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<long>());
		}

		return wxComboBox::GetInsertionPoint();
	};

	// void wxComboBox::SetSelection(long from, long to)
	void SetSelection(long from, long to) {
		if(_obj.pushFunction("SetSelection")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetSelection(from, to);
	};

	// void wxComboBox::SetValue(const wxString & text)
	void SetValue(const wxString & text) {
		if(_obj.pushFunction("SetValue")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(text);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetValue(text);
	};

	// void wxComboBox::Popup()
	void Popup() {
		if(_obj.pushFunction("Popup")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Popup();
	};

	// void wxComboBox::Dismiss()
	void Dismiss() {
		if(_obj.pushFunction("Dismiss")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::Dismiss();
	};

	// int wxComboBox::GetSelection() const
	int GetSelection() const {
		if(_obj.pushFunction("GetSelection")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<int>());
		}

		return wxComboBox::GetSelection();
	};

	// void wxComboBox::GetSelection(long * from, long * to) const
	void GetSelection(long * from, long * to) const {
		if(_obj.pushFunction("GetSelection")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::GetSelection(from, to);
	};

	// void wxComboBox::SetSelection(int n)
	void SetSelection(int n) {
		if(_obj.pushFunction("SetSelection")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(n);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetSelection(n);
	};

	// int wxComboBox::FindString(const wxString & string, bool caseSensitive = false) const
	int FindString(const wxString & string, bool caseSensitive = false) const {
		if(_obj.pushFunction("FindString")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(string);
			_obj.pushArg(caseSensitive);
			return (_obj.callFunction<int>());
		}

		return wxComboBox::FindString(string, caseSensitive);
	};

	// wxString wxComboBox::GetString(unsigned int n) const
	wxString GetString(unsigned int n) const {
		if(_obj.pushFunction("GetString")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(n);
			return *(_obj.callFunction<wxString*>());
		}

		return wxComboBox::GetString(n);
	};

	// wxString wxComboBox::GetStringSelection() const
	wxString GetStringSelection() const {
		if(_obj.pushFunction("GetStringSelection")) {
			_obj.pushArg((wxComboBox*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxComboBox::GetStringSelection();
	};

	// void wxComboBox::SetString(unsigned int n, const wxString & string)
	void SetString(unsigned int n, const wxString & string) {
		if(_obj.pushFunction("SetString")) {
			_obj.pushArg((wxComboBox*)this);
			_obj.pushArg(n);
			_obj.pushArg(string);
			return (_obj.callFunction<void>());
		}

		return wxComboBox::SetString(n, string);
	};

	// unsigned int wxComboBox::GetCount() const
	unsigned int GetCount() const {
		if(_obj.pushFunction("GetCount")) {
			_obj.pushArg((wxComboBox*)this);
			return (_obj.callFunction<unsigned int>());
		}

		return wxComboBox::GetCount();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

