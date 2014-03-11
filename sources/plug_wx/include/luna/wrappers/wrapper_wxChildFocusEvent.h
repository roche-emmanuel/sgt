#ifndef _WRAPPERS_WRAPPER_WXCHILDFOCUSEVENT_H_
#define _WRAPPERS_WRAPPER_WXCHILDFOCUSEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxChildFocusEvent : public wxChildFocusEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxChildFocusEvent() {
		logDEBUG3("Calling delete function for wrapper wxChildFocusEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxChildFocusEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxChildFocusEvent(lua_State* L, lua_Table* dum, wxWindow * win = NULL) 
		: wxChildFocusEvent(win), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxChildFocusEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxChildFocusEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxChildFocusEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxChildFocusEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxChildFocusEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxChildFocusEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxChildFocusEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxChildFocusEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxChildFocusEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxChildFocusEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxChildFocusEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

