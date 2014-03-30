#ifndef _WRAPPERS_WRAPPER_WXSTYLEDTEXTEVENT_H_
#define _WRAPPERS_WRAPPER_WXSTYLEDTEXTEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/stc/stc.h>

class wrapper_wxStyledTextEvent : public wxStyledTextEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxStyledTextEvent() {
		logDEBUG3("Calling delete function for wrapper wxStyledTextEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxStyledTextEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxStyledTextEvent(lua_State* L, lua_Table* dum, int commandType = 0, int id = 0) 
		: wxStyledTextEvent(commandType, id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxStyledTextEvent*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxStyledTextEvent(lua_State* L, lua_Table* dum, const wxStyledTextEvent & event) 
		: wxStyledTextEvent(event), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxStyledTextEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxStyledTextEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxStyledTextEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxStyledTextEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxStyledTextEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxStyledTextEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxStyledTextEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxStyledTextEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxStyledTextEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxStyledTextEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxStyledTextEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

