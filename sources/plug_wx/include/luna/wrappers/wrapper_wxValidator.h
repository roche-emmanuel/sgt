#ifndef _WRAPPERS_WRAPPER_WXVALIDATOR_H_
#define _WRAPPERS_WRAPPER_WXVALIDATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/validate.h>

class wrapper_wxValidator : public wxValidator, public luna_wrapper_base {

public:
		

	~wrapper_wxValidator() {
		logDEBUG3("Calling delete function for wrapper wxValidator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxValidator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxValidator(lua_State* L, lua_Table* dum) 
		: wxValidator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxValidator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxValidator*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxValidator::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxValidator*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxValidator::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxValidator::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxValidator::TryAfter(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxValidator*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxValidator::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxValidator*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxValidator::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxValidator::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxValidator::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxValidator*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxValidator::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxValidator*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxValidator::SetPreviousHandler(handler);
	};

	// wxObject * wxValidator::Clone() const
	wxObject * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxValidator*)this);
			return (_obj.callFunction<wxObject*>());
		}

		return wxValidator::Clone();
	};

	// bool wxValidator::TransferFromWindow()
	bool TransferFromWindow() {
		if(_obj.pushFunction("TransferFromWindow")) {
			_obj.pushArg((wxValidator*)this);
			return (_obj.callFunction<bool>());
		}

		return wxValidator::TransferFromWindow();
	};

	// bool wxValidator::TransferToWindow()
	bool TransferToWindow() {
		if(_obj.pushFunction("TransferToWindow")) {
			_obj.pushArg((wxValidator*)this);
			return (_obj.callFunction<bool>());
		}

		return wxValidator::TransferToWindow();
	};

	// bool wxValidator::Validate(wxWindow * parent)
	bool Validate(wxWindow * parent) {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxValidator*)this);
			_obj.pushArg(parent);
			return (_obj.callFunction<bool>());
		}

		return wxValidator::Validate(parent);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

