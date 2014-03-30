#ifndef _WRAPPERS_WRAPPER_WXWINDOWCREATEEVENT_H_
#define _WRAPPERS_WRAPPER_WXWINDOWCREATEEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxWindowCreateEvent : public wxWindowCreateEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxWindowCreateEvent() {
		logDEBUG3("Calling delete function for wrapper wxWindowCreateEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxWindowCreateEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxWindowCreateEvent(lua_State* L, lua_Table* dum, wxWindow * win = NULL) 
		: wxWindowCreateEvent(win), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxWindowCreateEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxWindowCreateEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWindowCreateEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxWindowCreateEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWindowCreateEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxWindowCreateEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxWindowCreateEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxWindowCreateEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxWindowCreateEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxWindowCreateEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxWindowCreateEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

