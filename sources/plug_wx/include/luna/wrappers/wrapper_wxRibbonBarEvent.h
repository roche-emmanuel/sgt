#ifndef _WRAPPERS_WRAPPER_WXRIBBONBAREVENT_H_
#define _WRAPPERS_WRAPPER_WXRIBBONBAREVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/ribbon/bar.h>

class wrapper_wxRibbonBarEvent : public wxRibbonBarEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxRibbonBarEvent() {
		logDEBUG3("Calling delete function for wrapper wxRibbonBarEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRibbonBarEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxRibbonBarEvent(lua_State* L, lua_Table* dum, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonPage * page = NULL) 
		: wxRibbonBarEvent(command_type, win_id, page), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRibbonBarEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRibbonBarEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRibbonBarEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRibbonBarEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRibbonBarEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRibbonBarEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRibbonBarEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxRibbonBarEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxRibbonBarEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxRibbonBarEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxRibbonBarEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

