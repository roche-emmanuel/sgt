#ifndef _WRAPPERS_WRAPPER_WXICONIZEEVENT_H_
#define _WRAPPERS_WRAPPER_WXICONIZEEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxIconizeEvent : public wxIconizeEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxIconizeEvent() {
		logDEBUG3("Calling delete function for wrapper wxIconizeEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxIconizeEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxIconizeEvent(lua_State* L, lua_Table* dum, int id = 0, bool iconized = true) 
		: wxIconizeEvent(id, iconized), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxIconizeEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxIconizeEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIconizeEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxIconizeEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIconizeEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxIconizeEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxIconizeEvent::GetClassInfo();
	};

	// wxEvent * wxEvent::Clone() const
	wxEvent * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxEvent::Clone");
		_obj.pushArg((wxIconizeEvent*)this);
		return (_obj.callFunction<wxEvent*>());
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxIconizeEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxIconizeEvent::GetEventCategory();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

