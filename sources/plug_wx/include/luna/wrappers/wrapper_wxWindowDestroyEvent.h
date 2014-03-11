#ifndef _WRAPPERS_WRAPPER_WXWINDOWDESTROYEVENT_H_
#define _WRAPPERS_WRAPPER_WXWINDOWDESTROYEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxWindowDestroyEvent : public wxWindowDestroyEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxWindowDestroyEvent() {
		logDEBUG3("Calling delete function for wrapper wxWindowDestroyEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxWindowDestroyEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxWindowDestroyEvent(lua_State* L, lua_Table* dum, wxWindow * win = NULL) 
		: wxWindowDestroyEvent(win), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxWindowDestroyEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxWindowDestroyEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWindowDestroyEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxWindowDestroyEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWindowDestroyEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxWindowDestroyEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxWindowDestroyEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxWindowDestroyEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxWindowDestroyEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxWindowDestroyEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxWindowDestroyEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

