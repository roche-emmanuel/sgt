#ifndef _WRAPPERS_WRAPPER_WXEVENTBLOCKER_H_
#define _WRAPPERS_WRAPPER_WXEVENTBLOCKER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxEventBlocker : public wxEventBlocker, public luna_wrapper_base {

public:
		

	~wrapper_wxEventBlocker() {
		logDEBUG3("Calling delete function for wrapper wxEventBlocker");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxEventBlocker*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxEventBlocker(lua_State* L, lua_Table* dum, wxWindow * win, int type = -1) 
		: wxEventBlocker(win, type), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxEventBlocker*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxEventBlocker*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxEventBlocker::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxEventBlocker*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxEventBlocker::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxEventBlocker*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxEventBlocker::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxEventBlocker*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxEventBlocker::TryAfter(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxEventBlocker*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxEventBlocker::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxEventBlocker*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxEventBlocker::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxEventBlocker*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxEventBlocker::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxEventBlocker*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxEventBlocker::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxEventBlocker*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxEventBlocker::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxEventBlocker*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxEventBlocker::SetPreviousHandler(handler);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

