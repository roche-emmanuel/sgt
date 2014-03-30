#ifndef _WRAPPERS_WRAPPER_WXWIZARDEVENT_H_
#define _WRAPPERS_WRAPPER_WXWIZARDEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/wizard.h>

class wrapper_wxWizardEvent : public wxWizardEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxWizardEvent() {
		logDEBUG3("Calling delete function for wrapper wxWizardEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxWizardEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxWizardEvent(lua_State* L, lua_Table* dum, int type = wxEVT_NULL, int id = ::wxID_ANY, bool direction = true, wxWizardPage * page = 0) 
		: wxWizardEvent(type, id, direction, page), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxWizardEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxWizardEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWizardEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxWizardEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWizardEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxWizardEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxWizardEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxWizardEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxWizardEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxWizardEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxWizardEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

