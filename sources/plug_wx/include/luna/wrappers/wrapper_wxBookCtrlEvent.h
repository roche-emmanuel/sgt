#ifndef _WRAPPERS_WRAPPER_WXBOOKCTRLEVENT_H_
#define _WRAPPERS_WRAPPER_WXBOOKCTRLEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/bookctrl.h>

class wrapper_wxBookCtrlEvent : public wxBookCtrlEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxBookCtrlEvent() {
		logDEBUG3("Calling delete function for wrapper wxBookCtrlEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxBookCtrlEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxBookCtrlEvent(lua_State* L, lua_Table* dum, int eventType = wxEVT_NULL, int id = 0, int sel = wxNOT_FOUND, int oldSel = wxNOT_FOUND) 
		: wxBookCtrlEvent(eventType, id, sel, oldSel), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxBookCtrlEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxBookCtrlEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxBookCtrlEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxBookCtrlEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxBookCtrlEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxBookCtrlEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxBookCtrlEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxBookCtrlEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxBookCtrlEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxBookCtrlEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxBookCtrlEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

