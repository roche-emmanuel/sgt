#ifndef _WRAPPERS_WRAPPER_WXPROCESS_H_
#define _WRAPPERS_WRAPPER_WXPROCESS_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/process.h>

class wrapper_wxProcess : public wxProcess, public luna_wrapper_base {

public:
		

	~wrapper_wxProcess() {
		logDEBUG3("Calling delete function for wrapper wxProcess");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxProcess*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxProcess(lua_State* L, lua_Table* dum, wxEvtHandler * parent = NULL, int id = -1) 
		: wxProcess(parent, id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxProcess*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxProcess(lua_State* L, lua_Table* dum, int flags) 
		: wxProcess(flags), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxProcess*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxProcess*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxProcess::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxProcess*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxProcess::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxProcess*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxProcess::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxProcess*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxProcess::TryAfter(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxProcess*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxProcess::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxProcess*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxProcess::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxProcess*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxProcess::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxProcess*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxProcess::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxProcess*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxProcess::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxProcess*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxProcess::SetPreviousHandler(handler);
	};

	// void wxProcess::OnTerminate(int pid, int status)
	void OnTerminate(int pid, int status) {
		if(_obj.pushFunction("OnTerminate")) {
			_obj.pushArg((wxProcess*)this);
			_obj.pushArg(pid);
			_obj.pushArg(status);
			return (_obj.callFunction<void>());
		}

		return wxProcess::OnTerminate(pid, status);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

