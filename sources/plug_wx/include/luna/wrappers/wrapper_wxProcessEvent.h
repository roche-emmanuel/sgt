#ifndef _WRAPPERS_WRAPPER_WXPROCESSEVENT_H_
#define _WRAPPERS_WRAPPER_WXPROCESSEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/process.h>

class wrapper_wxProcessEvent : public wxProcessEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxProcessEvent() {
		logDEBUG3("Calling delete function for wrapper wxProcessEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxProcessEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxProcessEvent(lua_State* L, lua_Table* dum, int id = 0, int pid = 0, int exitcode = 0) 
		: wxProcessEvent(id, pid, exitcode), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxProcessEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxProcessEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxProcessEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxProcessEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxProcessEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxProcessEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxProcessEvent::GetClassInfo();
	};

	// wxEvent * wxEvent::Clone() const
	wxEvent * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxEvent::Clone");
		_obj.pushArg((wxProcessEvent*)this);
		return (_obj.callFunction<wxEvent*>());
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxProcessEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxProcessEvent::GetEventCategory();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

