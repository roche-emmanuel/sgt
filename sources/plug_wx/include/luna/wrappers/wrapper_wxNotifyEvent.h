#ifndef _WRAPPERS_WRAPPER_WXNOTIFYEVENT_H_
#define _WRAPPERS_WRAPPER_WXNOTIFYEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxNotifyEvent : public wxNotifyEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxNotifyEvent() {
		logDEBUG3("Calling delete function for wrapper wxNotifyEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxNotifyEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxNotifyEvent(lua_State* L, lua_Table* dum, int eventType = wxEVT_NULL, int id = 0) 
		: wxNotifyEvent(eventType, id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxNotifyEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxNotifyEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxNotifyEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxNotifyEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxNotifyEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxNotifyEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxNotifyEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxNotifyEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxNotifyEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxNotifyEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxNotifyEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

