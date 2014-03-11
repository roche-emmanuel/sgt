#ifndef _WRAPPERS_WRAPPER_WXVIEW_H_
#define _WRAPPERS_WRAPPER_WXVIEW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/docview.h>

class wrapper_wxView : public wxView, public luna_wrapper_base {

public:
		

	~wrapper_wxView() {
		logDEBUG3("Calling delete function for wrapper wxView");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxView*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxView(lua_State* L, lua_Table* dum) 
		: wxView(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxView*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxView*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxView::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxView::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxView::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxView::TryAfter(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxView*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxView::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxView::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxView::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxView::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxView::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxView::SetPreviousHandler(handler);
	};

	// void wxView::Activate(bool activate)
	void Activate(bool activate) {
		if(_obj.pushFunction("Activate")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(activate);
			return (_obj.callFunction<void>());
		}

		return wxView::Activate(activate);
	};

	// bool wxView::Close(bool deleteWindow = true)
	bool Close(bool deleteWindow = true) {
		if(_obj.pushFunction("Close")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(deleteWindow);
			return (_obj.callFunction<bool>());
		}

		return wxView::Close(deleteWindow);
	};

	// void wxView::OnActivateView(bool activate, wxView * activeView, wxView * deactiveView)
	void OnActivateView(bool activate, wxView * activeView, wxView * deactiveView) {
		if(_obj.pushFunction("OnActivateView")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(activate);
			_obj.pushArg(activeView);
			_obj.pushArg(deactiveView);
			return (_obj.callFunction<void>());
		}

		return wxView::OnActivateView(activate, activeView, deactiveView);
	};

	// void wxView::OnChangeFilename()
	void OnChangeFilename() {
		if(_obj.pushFunction("OnChangeFilename")) {
			_obj.pushArg((wxView*)this);
			return (_obj.callFunction<void>());
		}

		return wxView::OnChangeFilename();
	};

	// bool wxView::OnClose(bool deleteWindow)
	bool OnClose(bool deleteWindow) {
		if(_obj.pushFunction("OnClose")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(deleteWindow);
			return (_obj.callFunction<bool>());
		}

		return wxView::OnClose(deleteWindow);
	};

	// void wxView::OnClosingDocument()
	void OnClosingDocument() {
		if(_obj.pushFunction("OnClosingDocument")) {
			_obj.pushArg((wxView*)this);
			return (_obj.callFunction<void>());
		}

		return wxView::OnClosingDocument();
	};

	// bool wxView::OnCreate(wxDocument * doc, long flags)
	bool OnCreate(wxDocument * doc, long flags) {
		if(_obj.pushFunction("OnCreate")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(doc);
			_obj.pushArg(flags);
			return (_obj.callFunction<bool>());
		}

		return wxView::OnCreate(doc, flags);
	};

	// void wxView::OnDraw(wxDC * dc)
	void OnDraw(wxDC * dc) {
		THROW_IF(!_obj.pushFunction("OnDraw"),"No implementation for abstract function wxView::OnDraw");
		_obj.pushArg((wxView*)this);
		_obj.pushArg(dc);
		return (_obj.callFunction<void>());
	};

	// void wxView::OnUpdate(wxView * sender, wxObject * hint = 0)
	void OnUpdate(wxView * sender, wxObject * hint = 0) {
		if(_obj.pushFunction("OnUpdate")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(sender);
			_obj.pushArg(hint);
			return (_obj.callFunction<void>());
		}

		return wxView::OnUpdate(sender, hint);
	};

	// void wxView::SetDocument(wxDocument * doc)
	void SetDocument(wxDocument * doc) {
		if(_obj.pushFunction("SetDocument")) {
			_obj.pushArg((wxView*)this);
			_obj.pushArg(doc);
			return (_obj.callFunction<void>());
		}

		return wxView::SetDocument(doc);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

