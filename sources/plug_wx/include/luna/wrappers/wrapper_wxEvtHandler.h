#ifndef _WRAPPERS_WRAPPER_WXEVTHANDLER_H_
#define _WRAPPERS_WRAPPER_WXEVTHANDLER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxEvtHandler : public wxEvtHandler, public luna_wrapper_base {

public:
		

	~wrapper_wxEvtHandler() {
		logDEBUG3("Calling delete function for wrapper wxEvtHandler");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxEvtHandler*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxEvtHandler(lua_State* L, lua_Table* dum) 
		: wxEvtHandler(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxEvtHandler*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxEvtHandler*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxEvtHandler::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxEvtHandler*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxEvtHandler::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxEvtHandler*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxEvtHandler::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxEvtHandler*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxEvtHandler::TryAfter(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxEvtHandler*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxEvtHandler::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxEvtHandler*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxEvtHandler*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxEvtHandler*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxEvtHandler::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxEvtHandler*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxEvtHandler*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxEvtHandler::SetPreviousHandler(handler);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

