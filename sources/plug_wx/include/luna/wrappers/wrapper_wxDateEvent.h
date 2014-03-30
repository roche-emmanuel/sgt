#ifndef _WRAPPERS_WRAPPER_WXDATEEVENT_H_
#define _WRAPPERS_WRAPPER_WXDATEEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dateevt.h>

class wrapper_wxDateEvent : public wxDateEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxDateEvent() {
		logDEBUG3("Calling delete function for wrapper wxDateEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDateEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDateEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDateEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDateEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDateEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDateEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDateEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxDateEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxDateEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxDateEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxDateEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

