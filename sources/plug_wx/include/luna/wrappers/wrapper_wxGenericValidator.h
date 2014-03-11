#ifndef _WRAPPERS_WRAPPER_WXGENERICVALIDATOR_H_
#define _WRAPPERS_WRAPPER_WXGENERICVALIDATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/valgen.h>

class wrapper_wxGenericValidator : public wxGenericValidator, public luna_wrapper_base {

public:
		

	~wrapper_wxGenericValidator() {
		logDEBUG3("Calling delete function for wrapper wxGenericValidator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGenericValidator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, const wxGenericValidator & validator) 
		: wxGenericValidator(validator), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, bool * valPtr) 
		: wxGenericValidator(valPtr), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, wxString * valPtr) 
		: wxGenericValidator(valPtr), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, int * valPtr) 
		: wxGenericValidator(valPtr), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, wxArrayInt * valPtr) 
		: wxGenericValidator(valPtr), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, wxDateTime * valPtr) 
		: wxGenericValidator(valPtr), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, wxFileName * valPtr) 
		: wxGenericValidator(valPtr), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, float * valPtr) 
		: wxGenericValidator(valPtr), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGenericValidator(lua_State* L, lua_Table* dum, double * valPtr) 
		: wxGenericValidator(valPtr), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxGenericValidator*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGenericValidator::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGenericValidator::CloneRefData(data);
	};

	// bool wxEvtHandler::TryBefore(wxEvent & event)
	bool TryBefore(wxEvent & event) {
		if(_obj.pushFunction("TryBefore")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::TryBefore(event);
	};

	// bool wxEvtHandler::TryAfter(wxEvent & event)
	bool TryAfter(wxEvent & event) {
		if(_obj.pushFunction("TryAfter")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::TryAfter(event);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxGenericValidator*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGenericValidator::GetClassInfo();
	};

	// void wxEvtHandler::QueueEvent(wxEvent * event)
	void QueueEvent(wxEvent * event) {
		if(_obj.pushFunction("QueueEvent")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.pushArg(event);
			return (_obj.callFunction<void>());
		}

		return wxGenericValidator::QueueEvent(event);
	};

	// void wxEvtHandler::AddPendingEvent(const wxEvent & event)
	void AddPendingEvent(const wxEvent & event) {
		if(_obj.pushFunction("AddPendingEvent")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<void>());
		}

		return wxGenericValidator::AddPendingEvent(event);
	};

	// bool wxEvtHandler::ProcessEvent(wxEvent & event)
	bool ProcessEvent(wxEvent & event) {
		if(_obj.pushFunction("ProcessEvent")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.pushArg(&event);
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::ProcessEvent(event);
	};

	// void wxEvtHandler::SetNextHandler(wxEvtHandler * handler)
	void SetNextHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetNextHandler")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxGenericValidator::SetNextHandler(handler);
	};

	// void wxEvtHandler::SetPreviousHandler(wxEvtHandler * handler)
	void SetPreviousHandler(wxEvtHandler * handler) {
		if(_obj.pushFunction("SetPreviousHandler")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.pushArg(handler);
			return (_obj.callFunction<void>());
		}

		return wxGenericValidator::SetPreviousHandler(handler);
	};

	// bool wxValidator::Validate(wxWindow * parent)
	bool Validate(wxWindow * parent) {
		if(_obj.pushFunction("Validate")) {
			_obj.pushArg((wxGenericValidator*)this);
			_obj.pushArg(parent);
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::Validate(parent);
	};

	// wxObject * wxGenericValidator::Clone() const
	wxObject * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxGenericValidator*)this);
			return (_obj.callFunction<wxObject*>());
		}

		return wxGenericValidator::Clone();
	};

	// bool wxGenericValidator::TransferFromWindow()
	bool TransferFromWindow() {
		if(_obj.pushFunction("TransferFromWindow")) {
			_obj.pushArg((wxGenericValidator*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::TransferFromWindow();
	};

	// bool wxGenericValidator::TransferToWindow()
	bool TransferToWindow() {
		if(_obj.pushFunction("TransferToWindow")) {
			_obj.pushArg((wxGenericValidator*)this);
			return (_obj.callFunction<bool>());
		}

		return wxGenericValidator::TransferToWindow();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

