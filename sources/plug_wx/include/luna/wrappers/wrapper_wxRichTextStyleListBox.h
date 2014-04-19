#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTSTYLELISTBOX_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTSTYLELISTBOX_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextstyles.h>

class wrapper_wxRichTextStyleListBox : public wxRichTextStyleListBox, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextStyleListBox() {
		logDEBUG3("Calling delete function for wrapper wxRichTextStyleListBox");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextStyleListBox*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextStyleListBox::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextStyleListBox::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::TryAfter(event);
	};

	// void wxWindow::DoCentre(int direction)
	void DoCentre(int direction) {
		if(_obj.pushFunction("DoCentre")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(direction);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::DoCentre(direction);
	};

	// wxSize wxWindow::DoGetBestSize() const
	wxSize DoGetBestSize() const {
		if(_obj.pushFunction("DoGetBestSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleListBox::DoGetBestSize();
	};

	// void wxWindow::SetInitialBestSize(const wxSize & size)
	void SetInitialBestSize(const wxSize & size) {
		if(_obj.pushFunction("SetInitialBestSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetInitialBestSize(size);
	};

	// bool wxWindow::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::ProcessEvent(event);
	};

	// void wxWindow::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::QueueEvent(event);
	};

	// void wxWindow::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::AddPendingEvent(event);
	};

	// void wxVarScrollHelperBase::OnGetUnitsSizeHint(size_t unitMin, size_t unitMax) const
	void OnGetUnitsSizeHint(size_t unitMin, size_t unitMax) const {
		if(_obj.pushFunction("OnGetUnitsSizeHint")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(unitMin);
			_obj.pushArg(unitMax);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::OnGetUnitsSizeHint(unitMin, unitMax);
	};

	// int wxVarScrollHelperBase::EstimateTotalSize() const
	int EstimateTotalSize() const {
		if(_obj.pushFunction("EstimateTotalSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleListBox::EstimateTotalSize();
	};

	// int wxVarScrollHelperBase::OnGetUnitSize(size_t unit) const
	int OnGetUnitSize(size_t unit) const {
		THROW_IF(!_obj.pushFunction("OnGetUnitSize"),"No implementation for abstract function wxVarScrollHelperBase::OnGetUnitSize");
		_obj.pushArg((wxRichTextStyleListBox*)this);
		_obj.pushArg(unit);
		return (_obj.callFunction<int>());
	};

	// void wxVarVScrollHelper::OnGetRowsHeightHint(size_t rowMin, size_t rowMax) const
	void OnGetRowsHeightHint(size_t rowMin, size_t rowMax) const {
		if(_obj.pushFunction("OnGetRowsHeightHint")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(rowMin);
			_obj.pushArg(rowMax);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::OnGetRowsHeightHint(rowMin, rowMax);
	};

	// int wxVarVScrollHelper::EstimateTotalHeight() const
	int EstimateTotalHeight() const {
		if(_obj.pushFunction("EstimateTotalHeight")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleListBox::EstimateTotalHeight();
	};

	// int wxVarVScrollHelper::OnGetRowHeight(size_t row) const
	int OnGetRowHeight(size_t row) const {
		THROW_IF(!_obj.pushFunction("OnGetRowHeight"),"No implementation for abstract function wxVarVScrollHelper::OnGetRowHeight");
		_obj.pushArg((wxRichTextStyleListBox*)this);
		_obj.pushArg(row);
		return (_obj.callFunction<int>());
	};

	// void wxHtmlListBox::OnLinkClicked(size_t n, const wxHtmlLinkInfo & link)
	void OnLinkClicked(size_t n, const wxHtmlLinkInfo & link) {
		if(_obj.pushFunction("OnLinkClicked")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(n);
			_obj.pushArg(&link);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::OnLinkClicked(n, link);
	};

	// wxColour wxHtmlListBox::GetSelectedTextBgColour(const wxColour & colBg) const
	wxColour GetSelectedTextBgColour(const wxColour & colBg) const {
		if(_obj.pushFunction("GetSelectedTextBgColour")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&colBg);
			return *(_obj.callFunction<wxColour*>());
		}

		return wxRichTextStyleListBox::GetSelectedTextBgColour(colBg);
	};

	// wxColour wxHtmlListBox::GetSelectedTextColour(const wxColour & colFg) const
	wxColour GetSelectedTextColour(const wxColour & colFg) const {
		if(_obj.pushFunction("GetSelectedTextColour")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&colFg);
			return *(_obj.callFunction<wxColour*>());
		}

		return wxRichTextStyleListBox::GetSelectedTextColour(colFg);
	};

	// wxString wxHtmlListBox::OnGetItemMarkup(size_t n) const
	wxString OnGetItemMarkup(size_t n) const {
		if(_obj.pushFunction("OnGetItemMarkup")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(n);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRichTextStyleListBox::OnGetItemMarkup(n);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextStyleListBox::GetClassInfo();
	};

	// bool wxWindow::AcceptsFocusFromKeyboard() const
	bool AcceptsFocusFromKeyboard() const {
		if(_obj.pushFunction("AcceptsFocusFromKeyboard")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::AcceptsFocusFromKeyboard();
	};

	// bool wxWindow::AcceptsFocusRecursively() const
	bool AcceptsFocusRecursively() const {
		if(_obj.pushFunction("AcceptsFocusRecursively")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::AcceptsFocusRecursively();
	};

	// bool wxWindow::HasFocus() const
	bool HasFocus() const {
		if(_obj.pushFunction("HasFocus")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::HasFocus();
	};

	// void wxWindow::SetCanFocus(bool canFocus)
	void SetCanFocus(bool canFocus) {
		if(_obj.pushFunction("SetCanFocus")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(canFocus);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetCanFocus(canFocus);
	};

	// void wxWindow::SetFocusFromKbd()
	void SetFocusFromKbd() {
		if(_obj.pushFunction("SetFocusFromKbd")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetFocusFromKbd();
	};

	// void wxWindow::AddChild(wxWindow * child)
	void AddChild(wxWindow * child) {
		if(_obj.pushFunction("AddChild")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::AddChild(child);
	};

	// void wxWindow::RemoveChild(wxWindow * child)
	void RemoveChild(wxWindow * child) {
		if(_obj.pushFunction("RemoveChild")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(child);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::RemoveChild(child);
	};

	// bool wxWindow::Reparent(wxWindow * newParent)
	bool Reparent(wxWindow * newParent) {
		if(_obj.pushFunction("Reparent")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(newParent);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::Reparent(newParent);
	};

	// void wxWindow::AlwaysShowScrollbars(bool hflag = true, bool vflag = true)
	void AlwaysShowScrollbars(bool hflag = true, bool vflag = true) {
		if(_obj.pushFunction("AlwaysShowScrollbars")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(hflag);
			_obj.pushArg(vflag);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::AlwaysShowScrollbars(hflag, vflag);
	};

	// int wxWindow::GetScrollPos(int orientation) const
	int GetScrollPos(int orientation) const {
		if(_obj.pushFunction("GetScrollPos")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleListBox::GetScrollPos(orientation);
	};

	// int wxWindow::GetScrollRange(int orientation) const
	int GetScrollRange(int orientation) const {
		if(_obj.pushFunction("GetScrollRange")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleListBox::GetScrollRange(orientation);
	};

	// int wxWindow::GetScrollThumb(int orientation) const
	int GetScrollThumb(int orientation) const {
		if(_obj.pushFunction("GetScrollThumb")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(orientation);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleListBox::GetScrollThumb(orientation);
	};

	// bool wxWindow::IsScrollbarAlwaysShown(int orient) const
	bool IsScrollbarAlwaysShown(int orient) const {
		if(_obj.pushFunction("IsScrollbarAlwaysShown")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(orient);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::IsScrollbarAlwaysShown(orient);
	};

	// void wxWindow::ScrollWindow(int dx, int dy, const wxRect * rect = NULL)
	void ScrollWindow(int dx, int dy, const wxRect * rect = NULL) {
		if(_obj.pushFunction("ScrollWindow")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(dx);
			_obj.pushArg(dy);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::ScrollWindow(dx, dy, rect);
	};

	// void wxWindow::SetScrollPos(int orientation, int pos, bool refresh = true)
	void SetScrollPos(int orientation, int pos, bool refresh = true) {
		if(_obj.pushFunction("SetScrollPos")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(pos);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetScrollPos(orientation, pos, refresh);
	};

	// void wxWindow::SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true)
	void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = true) {
		if(_obj.pushFunction("SetScrollbar")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(orientation);
			_obj.pushArg(position);
			_obj.pushArg(thumbSize);
			_obj.pushArg(range);
			_obj.pushArg(refresh);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetScrollbar(orientation, position, thumbSize, range, refresh);
	};

	// wxSize wxWindow::ClientToWindowSize(const wxSize & size) const
	wxSize ClientToWindowSize(const wxSize & size) const {
		if(_obj.pushFunction("ClientToWindowSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleListBox::ClientToWindowSize(size);
	};

	// wxSize wxWindow::WindowToClientSize(const wxSize & size) const
	wxSize WindowToClientSize(const wxSize & size) const {
		if(_obj.pushFunction("WindowToClientSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&size);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleListBox::WindowToClientSize(size);
	};

	// void wxWindow::Fit()
	void Fit() {
		if(_obj.pushFunction("Fit")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::Fit();
	};

	// void wxWindow::FitInside()
	void FitInside() {
		if(_obj.pushFunction("FitInside")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::FitInside();
	};

	// wxSize wxWindow::GetEffectiveMinSize() const
	wxSize GetEffectiveMinSize() const {
		if(_obj.pushFunction("GetEffectiveMinSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleListBox::GetEffectiveMinSize();
	};

	// wxSize wxWindow::GetMaxClientSize() const
	wxSize GetMaxClientSize() const {
		if(_obj.pushFunction("GetMaxClientSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleListBox::GetMaxClientSize();
	};

	// wxSize wxWindow::GetMaxSize() const
	wxSize GetMaxSize() const {
		if(_obj.pushFunction("GetMaxSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleListBox::GetMaxSize();
	};

	// wxSize wxWindow::GetMinClientSize() const
	wxSize GetMinClientSize() const {
		if(_obj.pushFunction("GetMinClientSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleListBox::GetMinClientSize();
	};

	// wxSize wxWindow::GetMinSize() const
	wxSize GetMinSize() const {
		if(_obj.pushFunction("GetMinSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleListBox::GetMinSize();
	};

	// wxSize wxWindow::GetBestVirtualSize() const
	wxSize GetBestVirtualSize() const {
		if(_obj.pushFunction("GetBestVirtualSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleListBox::GetBestVirtualSize();
	};

	// wxSize wxWindow::GetWindowBorderSize() const
	wxSize GetWindowBorderSize() const {
		if(_obj.pushFunction("GetWindowBorderSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxSize*>());
		}

		return wxRichTextStyleListBox::GetWindowBorderSize();
	};

	// bool wxWindow::InformFirstDirection(int direction, int size, int availableOtherDir)
	bool InformFirstDirection(int direction, int size, int availableOtherDir) {
		if(_obj.pushFunction("InformFirstDirection")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(direction);
			_obj.pushArg(size);
			_obj.pushArg(availableOtherDir);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::InformFirstDirection(direction, size, availableOtherDir);
	};

	// void wxWindow::SendSizeEvent(int flags = 0)
	void SendSizeEvent(int flags = 0) {
		if(_obj.pushFunction("SendSizeEvent")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SendSizeEvent(flags);
	};

	// void wxWindow::SetMaxClientSize(const wxSize & size)
	void SetMaxClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxClientSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetMaxClientSize(size);
	};

	// void wxWindow::SetMaxSize(const wxSize & size)
	void SetMaxSize(const wxSize & size) {
		if(_obj.pushFunction("SetMaxSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetMaxSize(size);
	};

	// void wxWindow::SetMinClientSize(const wxSize & size)
	void SetMinClientSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinClientSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetMinClientSize(size);
	};

	// void wxWindow::SetMinSize(const wxSize & size)
	void SetMinSize(const wxSize & size) {
		if(_obj.pushFunction("SetMinSize")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&size);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetMinSize(size);
	};

	// void wxWindow::SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize)
	void SetSizeHints(const wxSize & minSize, const wxSize & maxSize = wxDefaultSize, const wxSize & incSize = wxDefaultSize) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&minSize);
			_obj.pushArg(&maxSize);
			_obj.pushArg(&incSize);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetSizeHints(minSize, maxSize, incSize);
	};

	// void wxWindow::SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1)
	void SetSizeHints(int minW, int minH, int maxW = -1, int maxH = -1, int incW = -1, int incH = -1) {
		if(_obj.pushFunction("SetSizeHints")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(minW);
			_obj.pushArg(minH);
			_obj.pushArg(maxW);
			_obj.pushArg(maxH);
			_obj.pushArg(incW);
			_obj.pushArg(incH);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetSizeHints(minW, minH, maxW, maxH, incW, incH);
	};

	// wxPoint wxWindow::GetClientAreaOrigin() const
	wxPoint GetClientAreaOrigin() const {
		if(_obj.pushFunction("GetClientAreaOrigin")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxPoint*>());
		}

		return wxRichTextStyleListBox::GetClientAreaOrigin();
	};

	// void wxWindow::ClearBackground()
	void ClearBackground() {
		if(_obj.pushFunction("ClearBackground")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::ClearBackground();
	};

	// wxBackgroundStyle wxWindow::GetBackgroundStyle() const
	wxBackgroundStyle GetBackgroundStyle() const {
		if(_obj.pushFunction("GetBackgroundStyle")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (wxBackgroundStyle)(_obj.callFunction<int>());
		}

		return wxRichTextStyleListBox::GetBackgroundStyle();
	};

	// int wxWindow::GetCharHeight() const
	int GetCharHeight() const {
		if(_obj.pushFunction("GetCharHeight")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleListBox::GetCharHeight();
	};

	// int wxWindow::GetCharWidth() const
	int GetCharWidth() const {
		if(_obj.pushFunction("GetCharWidth")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<int>());
		}

		return wxRichTextStyleListBox::GetCharWidth();
	};

	// wxVisualAttributes wxWindow::GetDefaultAttributes() const
	wxVisualAttributes GetDefaultAttributes() const {
		if(_obj.pushFunction("GetDefaultAttributes")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxVisualAttributes*>());
		}

		return wxRichTextStyleListBox::GetDefaultAttributes();
	};

	// void wxWindow::Refresh(bool eraseBackground = true, const wxRect * rect = NULL)
	void Refresh(bool eraseBackground = true, const wxRect * rect = NULL) {
		if(_obj.pushFunction("Refresh")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(eraseBackground);
			_obj.pushArg(rect);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::Refresh(eraseBackground, rect);
	};

	// void wxWindow::Update()
	void Update() {
		if(_obj.pushFunction("Update")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::Update();
	};

	// bool wxWindow::SetBackgroundStyle(wxBackgroundStyle style)
	bool SetBackgroundStyle(wxBackgroundStyle style) {
		if(_obj.pushFunction("SetBackgroundStyle")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg((int)style);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::SetBackgroundStyle(style);
	};

	// bool wxWindow::SetFont(const wxFont & font)
	bool SetFont(const wxFont & font) {
		if(_obj.pushFunction("SetFont")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&font);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::SetFont(font);
	};

	// bool wxWindow::ShouldInheritColours() const
	bool ShouldInheritColours() const {
		if(_obj.pushFunction("ShouldInheritColours")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::ShouldInheritColours();
	};

	// void wxWindow::SetThemeEnabled(bool enable)
	void SetThemeEnabled(bool enable) {
		if(_obj.pushFunction("SetThemeEnabled")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetThemeEnabled(enable);
	};

	// bool wxWindow::GetThemeEnabled() const
	bool GetThemeEnabled() const {
		if(_obj.pushFunction("GetThemeEnabled")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::GetThemeEnabled();
	};

	// bool wxWindow::CanSetTransparent()
	bool CanSetTransparent() {
		if(_obj.pushFunction("CanSetTransparent")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::CanSetTransparent();
	};

	// bool wxWindow::SetTransparent(unsigned char alpha)
	bool SetTransparent(unsigned char alpha) {
		if(_obj.pushFunction("SetTransparent")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(alpha);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::SetTransparent(alpha);
	};

	// void wxWindow::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetNextHandler(handler);
	};

	// void wxWindow::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetPreviousHandler(handler);
	};

	// long wxWindow::GetWindowStyleFlag() const
	long GetWindowStyleFlag() const {
		if(_obj.pushFunction("GetWindowStyleFlag")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<long>());
		}

		return wxRichTextStyleListBox::GetWindowStyleFlag();
	};

	// void wxWindow::SetExtraStyle(long exStyle)
	void SetExtraStyle(long exStyle) {
		if(_obj.pushFunction("SetExtraStyle")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(exStyle);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetExtraStyle(exStyle);
	};

	// void wxWindow::SetWindowStyleFlag(long style)
	void SetWindowStyleFlag(long style) {
		if(_obj.pushFunction("SetWindowStyleFlag")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(style);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetWindowStyleFlag(style);
	};

	// void wxWindow::Lower()
	void Lower() {
		if(_obj.pushFunction("Lower")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::Lower();
	};

	// void wxWindow::Raise()
	void Raise() {
		if(_obj.pushFunction("Raise")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::Raise();
	};

	// bool wxWindow::HideWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool HideWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("HideWithEffect")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::HideWithEffect(effect, timeout);
	};

	// bool wxWindow::IsShown() const
	bool IsShown() const {
		if(_obj.pushFunction("IsShown")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::IsShown();
	};

	// bool wxWindow::IsShownOnScreen() const
	bool IsShownOnScreen() const {
		if(_obj.pushFunction("IsShownOnScreen")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::IsShownOnScreen();
	};

	// bool wxWindow::Enable(bool enable = true)
	bool Enable(bool enable = true) {
		if(_obj.pushFunction("Enable")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(enable);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::Enable(enable);
	};

	// bool wxWindow::Show(bool show = true)
	bool Show(bool show = true) {
		if(_obj.pushFunction("Show")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(show);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::Show(show);
	};

	// bool wxWindow::ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0)
	bool ShowWithEffect(wxShowEffect effect, unsigned int timeout = 0) {
		if(_obj.pushFunction("ShowWithEffect")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg((int)effect);
			_obj.pushArg(timeout);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::ShowWithEffect(effect, timeout);
	};

	// wxString wxWindow::GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const
	wxString GetHelpTextAtPoint(const wxPoint & point, wxHelpEvent::Origin origin) const {
		if(_obj.pushFunction("GetHelpTextAtPoint")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&point);
			_obj.pushArg((int)origin);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRichTextStyleListBox::GetHelpTextAtPoint(point, origin);
	};

	// wxValidator * wxWindow::GetValidator()
	wxValidator * GetValidator() {
		if(_obj.pushFunction("GetValidator")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<wxValidator*>());
		}

		return wxRichTextStyleListBox::GetValidator();
	};

	// void wxWindow::SetValidator(const wxValidator & validator)
	void SetValidator(const wxValidator & validator) {
		if(_obj.pushFunction("SetValidator")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&validator);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetValidator(validator);
	};

	// bool wxWindow::TransferDataFromWindow()
	bool TransferDataFromWindow() {
		if(_obj.pushFunction("TransferDataFromWindow")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::TransferDataFromWindow();
	};

	// bool wxWindow::TransferDataToWindow()
	bool TransferDataToWindow() {
		if(_obj.pushFunction("TransferDataToWindow")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::TransferDataToWindow();
	};

	// bool wxWindow::Validate()
	bool Validate() {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::Validate();
	};

	// wxString wxWindow::GetLabel() const
	wxString GetLabel() const {
		if(_obj.pushFunction("GetLabel")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRichTextStyleListBox::GetLabel();
	};

	// wxLayoutDirection wxWindow::GetLayoutDirection() const
	wxLayoutDirection GetLayoutDirection() const {
		if(_obj.pushFunction("GetLayoutDirection")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (wxLayoutDirection)(_obj.callFunction<int>());
		}

		return wxRichTextStyleListBox::GetLayoutDirection();
	};

	// wxString wxWindow::GetName() const
	wxString GetName() const {
		if(_obj.pushFunction("GetName")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<wxString*>());
		}

		return wxRichTextStyleListBox::GetName();
	};

	// void wxWindow::SetLabel(const wxString & label)
	void SetLabel(const wxString & label) {
		if(_obj.pushFunction("SetLabel")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(label);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetLabel(label);
	};

	// void wxWindow::SetLayoutDirection(wxLayoutDirection dir)
	void SetLayoutDirection(wxLayoutDirection dir) {
		if(_obj.pushFunction("SetLayoutDirection")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg((int)dir);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetLayoutDirection(dir);
	};

	// void wxWindow::SetName(const wxString & name)
	void SetName(const wxString & name) {
		if(_obj.pushFunction("SetName")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(name);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetName(name);
	};

	// void wxWindow::SetAcceleratorTable(const wxAcceleratorTable & accel)
	void SetAcceleratorTable(const wxAcceleratorTable & accel) {
		if(_obj.pushFunction("SetAcceleratorTable")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&accel);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetAcceleratorTable(accel);
	};

	// bool wxWindow::Destroy()
	bool Destroy() {
		if(_obj.pushFunction("Destroy")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::Destroy();
	};

	// wxDropTarget * wxWindow::GetDropTarget() const
	wxDropTarget * GetDropTarget() const {
		if(_obj.pushFunction("GetDropTarget")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<wxDropTarget*>());
		}

		return wxRichTextStyleListBox::GetDropTarget();
	};

	// void wxWindow::SetDropTarget(wxDropTarget * target)
	void SetDropTarget(wxDropTarget * target) {
		if(_obj.pushFunction("SetDropTarget")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetDropTarget(target);
	};

	// void wxWindow::DragAcceptFiles(bool accept)
	void DragAcceptFiles(bool accept) {
		if(_obj.pushFunction("DragAcceptFiles")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(accept);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::DragAcceptFiles(accept);
	};

	// bool wxWindow::HasCapture() const
	bool HasCapture() const {
		if(_obj.pushFunction("HasCapture")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::HasCapture();
	};

	// bool wxWindow::SetCursor(const wxCursor & cursor)
	bool SetCursor(const wxCursor & cursor) {
		if(_obj.pushFunction("SetCursor")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&cursor);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::SetCursor(cursor);
	};

	// void wxWindow::WarpPointer(int x, int y)
	void WarpPointer(int x, int y) {
		if(_obj.pushFunction("WarpPointer")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::WarpPointer(x, y);
	};

	// void wxWindow::DoUpdateWindowUI(wxUpdateUIEvent & event)
	void DoUpdateWindowUI(wxUpdateUIEvent & event) {
		if(_obj.pushFunction("DoUpdateWindowUI")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::DoUpdateWindowUI(event);
	};

	// HWND wxWindow::GetHandle() const
	HWND GetHandle() const {
		if(_obj.pushFunction("GetHandle")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return *(_obj.callFunction<HWND*>());
		}

		return wxRichTextStyleListBox::GetHandle();
	};

	// bool wxWindow::HasMultiplePages() const
	bool HasMultiplePages() const {
		if(_obj.pushFunction("HasMultiplePages")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::HasMultiplePages();
	};

	// void wxWindow::InheritAttributes()
	void InheritAttributes() {
		if(_obj.pushFunction("InheritAttributes")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::InheritAttributes();
	};

	// bool wxWindow::IsDoubleBuffered() const
	bool IsDoubleBuffered() const {
		if(_obj.pushFunction("IsDoubleBuffered")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::IsDoubleBuffered();
	};

	// bool wxWindow::IsRetained() const
	bool IsRetained() const {
		if(_obj.pushFunction("IsRetained")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::IsRetained();
	};

	// bool wxWindow::IsTopLevel() const
	bool IsTopLevel() const {
		if(_obj.pushFunction("IsTopLevel")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::IsTopLevel();
	};

	// void wxWindow::MakeModal(bool modal = true)
	void MakeModal(bool modal = true) {
		if(_obj.pushFunction("MakeModal")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(modal);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::MakeModal(modal);
	};

	// void wxWindow::OnInternalIdle()
	void OnInternalIdle() {
		if(_obj.pushFunction("OnInternalIdle")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::OnInternalIdle();
	};

	// bool wxWindow::RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode)
	bool RegisterHotKey(int hotkeyId, int modifiers, int virtualKeyCode) {
		if(_obj.pushFunction("RegisterHotKey")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(hotkeyId);
			_obj.pushArg(modifiers);
			_obj.pushArg(virtualKeyCode);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::RegisterHotKey(hotkeyId, modifiers, virtualKeyCode);
	};

	// bool wxWindow::UnregisterHotKey(int hotkeyId)
	bool UnregisterHotKey(int hotkeyId) {
		if(_obj.pushFunction("UnregisterHotKey")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(hotkeyId);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::UnregisterHotKey(hotkeyId);
	};

	// void wxWindow::UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE)
	void UpdateWindowUI(long flags = ::wxUPDATE_UI_NONE) {
		if(_obj.pushFunction("UpdateWindowUI")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(flags);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::UpdateWindowUI(flags);
	};

	// bool wxPanel::AcceptsFocus() const
	bool AcceptsFocus() const {
		if(_obj.pushFunction("AcceptsFocus")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::AcceptsFocus();
	};

	// void wxPanel::InitDialog()
	void InitDialog() {
		if(_obj.pushFunction("InitDialog")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::InitDialog();
	};

	// bool wxPanel::Layout()
	bool Layout() {
		if(_obj.pushFunction("Layout")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::Layout();
	};

	// void wxPanel::SetFocus()
	void SetFocus() {
		if(_obj.pushFunction("SetFocus")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetFocus();
	};

	// int wxVarScrollHelperBase::GetNonOrientationTargetSize() const
	int GetNonOrientationTargetSize() const {
		THROW_IF(!_obj.pushFunction("GetNonOrientationTargetSize"),"No implementation for abstract function wxVarScrollHelperBase::GetNonOrientationTargetSize");
		_obj.pushArg((wxRichTextStyleListBox*)this);
		return (_obj.callFunction<int>());
	};

	// wxOrientation wxVarScrollHelperBase::GetOrientation() const
	wxOrientation GetOrientation() const {
		THROW_IF(!_obj.pushFunction("GetOrientation"),"No implementation for abstract function wxVarScrollHelperBase::GetOrientation");
		_obj.pushArg((wxRichTextStyleListBox*)this);
		return (wxOrientation)(_obj.callFunction<int>());
	};

	// int wxVarScrollHelperBase::GetOrientationTargetSize() const
	int GetOrientationTargetSize() const {
		THROW_IF(!_obj.pushFunction("GetOrientationTargetSize"),"No implementation for abstract function wxVarScrollHelperBase::GetOrientationTargetSize");
		_obj.pushArg((wxRichTextStyleListBox*)this);
		return (_obj.callFunction<int>());
	};

	// wxWindow * wxVarScrollHelperBase::GetTargetWindow() const
	wxWindow * GetTargetWindow() const {
		if(_obj.pushFunction("GetTargetWindow")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<wxWindow*>());
		}

		return wxRichTextStyleListBox::GetTargetWindow();
	};

	// void wxVarScrollHelperBase::RefreshAll()
	void RefreshAll() {
		if(_obj.pushFunction("RefreshAll")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::RefreshAll();
	};

	// void wxVarScrollHelperBase::SetTargetWindow(wxWindow * target)
	void SetTargetWindow(wxWindow * target) {
		if(_obj.pushFunction("SetTargetWindow")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::SetTargetWindow(target);
	};

	// void wxVarScrollHelperBase::UpdateScrollbar()
	void UpdateScrollbar() {
		if(_obj.pushFunction("UpdateScrollbar")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::UpdateScrollbar();
	};

	// void wxVarVScrollHelper::RefreshRow(size_t row)
	void RefreshRow(size_t row) {
		if(_obj.pushFunction("RefreshRow")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(row);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::RefreshRow(row);
	};

	// void wxVarVScrollHelper::RefreshRows(size_t from, size_t to)
	void RefreshRows(size_t from, size_t to) {
		if(_obj.pushFunction("RefreshRows")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(from);
			_obj.pushArg(to);
			return (_obj.callFunction<void>());
		}

		return wxRichTextStyleListBox::RefreshRows(from, to);
	};

	// bool wxVarVScrollHelper::ScrollRowPages(int pages)
	bool ScrollRowPages(int pages) {
		if(_obj.pushFunction("ScrollRowPages")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(pages);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::ScrollRowPages(pages);
	};

	// bool wxVarVScrollHelper::ScrollRows(int rows)
	bool ScrollRows(int rows) {
		if(_obj.pushFunction("ScrollRows")) {
			_obj.pushArg((wxRichTextStyleListBox*)this);
			_obj.pushArg(rows);
			return (_obj.callFunction<bool>());
		}

		return wxRichTextStyleListBox::ScrollRows(rows);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


protected:
// void wxVListBox::OnDrawItem(wxDC & dc, const wxRect & rect, size_t n) const
void OnDrawItem(wxDC &, const wxRect &, size_t) const {
	THROW_IF(true,"The function call void wxVListBox::OnDrawItem(wxDC &, const wxRect &, size_t) const is not implemented in wrapper.");
};

protected:
// int wxVListBox::OnMeasureItem(size_t n) const
int OnMeasureItem(size_t) const {
	THROW_IF(true,"The function call int wxVListBox::OnMeasureItem(size_t) const is not implemented in wrapper.");
	return (int)0;
};

};




#endif

