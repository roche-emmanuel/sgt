#ifndef _WRAPPERS_WRAPPER_WXHEADERCTRLEVENT_H_
#define _WRAPPERS_WRAPPER_WXHEADERCTRLEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/headerctrl.h>

class wrapper_wxHeaderCtrlEvent : public wxHeaderCtrlEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxHeaderCtrlEvent() {
		logDEBUG3("Calling delete function for wrapper wxHeaderCtrlEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHeaderCtrlEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHeaderCtrlEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHeaderCtrlEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHeaderCtrlEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHeaderCtrlEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHeaderCtrlEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHeaderCtrlEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxHeaderCtrlEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxHeaderCtrlEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxHeaderCtrlEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxHeaderCtrlEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

