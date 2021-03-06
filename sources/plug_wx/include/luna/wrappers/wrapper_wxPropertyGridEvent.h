#ifndef _WRAPPERS_WRAPPER_WXPROPERTYGRIDEVENT_H_
#define _WRAPPERS_WRAPPER_WXPROPERTYGRIDEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/propgrid/propgrid.h>

class wrapper_wxPropertyGridEvent : public wxPropertyGridEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxPropertyGridEvent() {
		logDEBUG3("Calling delete function for wrapper wxPropertyGridEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPropertyGridEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxPropertyGridEvent(lua_State* L, lua_Table* dum, int commandType = 0, int id = 0) 
		: wxPropertyGridEvent(commandType, id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPropertyGridEvent*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxPropertyGridEvent(lua_State* L, lua_Table* dum, const wxPropertyGridEvent & event) 
		: wxPropertyGridEvent(event), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPropertyGridEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxPropertyGridEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPropertyGridEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxPropertyGridEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPropertyGridEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxPropertyGridEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPropertyGridEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxPropertyGridEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxPropertyGridEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxPropertyGridEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxPropertyGridEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

