#ifndef _WRAPPERS_WRAPPER_WXTASKBARICONEVENT_H_
#define _WRAPPERS_WRAPPER_WXTASKBARICONEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/taskbar.h>

class wrapper_wxTaskBarIconEvent : public wxTaskBarIconEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxTaskBarIconEvent() {
		logDEBUG3("Calling delete function for wrapper wxTaskBarIconEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxTaskBarIconEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxTaskBarIconEvent(lua_State* L, lua_Table* dum, int evtType, wxTaskBarIcon * tbIcon) 
		: wxTaskBarIconEvent(evtType, tbIcon), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxTaskBarIconEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxTaskBarIconEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTaskBarIconEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxTaskBarIconEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxTaskBarIconEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxTaskBarIconEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxTaskBarIconEvent::GetClassInfo();
	};

	// wxEvent * wxEvent::Clone() const
	wxEvent * Clone() const {
		THROW_IF(!_obj.pushFunction("Clone"),"No implementation for abstract function wxEvent::Clone");
		_obj.pushArg((wxTaskBarIconEvent*)this);
		return (_obj.callFunction<wxEvent*>());
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxTaskBarIconEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxTaskBarIconEvent::GetEventCategory();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

