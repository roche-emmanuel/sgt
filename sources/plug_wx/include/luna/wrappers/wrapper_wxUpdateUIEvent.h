#ifndef _WRAPPERS_WRAPPER_WXUPDATEUIEVENT_H_
#define _WRAPPERS_WRAPPER_WXUPDATEUIEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxUpdateUIEvent : public wxUpdateUIEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxUpdateUIEvent() {
		logDEBUG3("Calling delete function for wrapper wxUpdateUIEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxUpdateUIEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxUpdateUIEvent(lua_State* L, lua_Table* dum, int commandId = 0) 
		: wxUpdateUIEvent(commandId), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxUpdateUIEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxUpdateUIEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxUpdateUIEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxUpdateUIEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxUpdateUIEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxUpdateUIEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxUpdateUIEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxUpdateUIEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxUpdateUIEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxUpdateUIEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxUpdateUIEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

