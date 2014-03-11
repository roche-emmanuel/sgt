#ifndef _WRAPPERS_WRAPPER_WXPOWEREVENT_H_
#define _WRAPPERS_WRAPPER_WXPOWEREVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/power.h>

class wrapper_wxPowerEvent : public wxPowerEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxPowerEvent() {
		logDEBUG3("Calling delete function for wrapper wxPowerEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPowerEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxPowerEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPowerEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxPowerEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPowerEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxPowerEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPowerEvent::GetClassInfo();
	};

	// wxEvent * wxEvent::Clone() const
	wxEvent * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxEvent::Clone");
		_obj.pushArg((wxPowerEvent*)this);
		return (_obj.callFunction<wxEvent*>());
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxPowerEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxPowerEvent::GetEventCategory();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

