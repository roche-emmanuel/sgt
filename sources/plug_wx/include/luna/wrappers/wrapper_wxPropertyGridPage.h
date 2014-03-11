#ifndef _WRAPPERS_WRAPPER_WXPROPERTYGRIDPAGE_H_
#define _WRAPPERS_WRAPPER_WXPROPERTYGRIDPAGE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/propgrid/manager.h>

class wrapper_wxPropertyGridPage : public wxPropertyGridPage, public luna_wrapper_base {

public:
		

	~wrapper_wxPropertyGridPage() {
		logDEBUG3("Calling delete function for wrapper wxPropertyGridPage");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPropertyGridPage*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxPropertyGridPage(lua_State* L, lua_Table* dum) 
		: wxPropertyGridPage(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPropertyGridPage::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPropertyGridPage::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxPropertyGridPage::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxPropertyGridPage::TryAfter(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPropertyGridPage::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxPropertyGridPage::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxPropertyGridPage::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxPropertyGridPage::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxPropertyGridPage::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxPropertyGridPage::SetPreviousHandler(handler);
	};

	// void wxPropertyGridPage::Clear()
	void Clear() {
		if(_obj.pushFunction("Clear")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			return (_obj.callFunction<void>());
		}

		return wxPropertyGridPage::Clear();
	};

	// void wxPropertyGridPage::Init()
	void Init() {
		if(_obj.pushFunction("Init")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			return (_obj.callFunction<void>());
		}

		return wxPropertyGridPage::Init();
	};

	// bool wxPropertyGridPage::IsHandlingAllEvents() const
	bool IsHandlingAllEvents() const {
		if(_obj.pushFunction("IsHandlingAllEvents")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			return (_obj.callFunction<bool>());
		}

		return wxPropertyGridPage::IsHandlingAllEvents();
	};

	// void wxPropertyGridPage::OnShow()
	void OnShow() {
		if(_obj.pushFunction("OnShow")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			return (_obj.callFunction<void>());
		}

		return wxPropertyGridPage::OnShow();
	};

	// void wxPropertyGridPage::RefreshProperty(wxPGProperty * p)
	void RefreshProperty(wxPGProperty * p) {
		if(_obj.pushFunction("RefreshProperty")) {
			_obj.pushArg((wxPropertyGridPage*)this);
			_obj.pushArg(p);
			return (_obj.callFunction<void>());
		}

		return wxPropertyGridPage::RefreshProperty(p);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

