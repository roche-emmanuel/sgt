#ifndef _WRAPPERS_WRAPPER_WXRIBBONBUTTONBAREVENT_H_
#define _WRAPPERS_WRAPPER_WXRIBBONBUTTONBAREVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/ribbon/buttonbar.h>

class wrapper_wxRibbonButtonBarEvent : public wxRibbonButtonBarEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxRibbonButtonBarEvent() {
		logDEBUG3("Calling delete function for wrapper wxRibbonButtonBarEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRibbonButtonBarEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxRibbonButtonBarEvent(lua_State* L, lua_Table* dum, int command_type = wxEVT_NULL, int win_id = 0, wxRibbonButtonBar * bar = NULL) 
		: wxRibbonButtonBarEvent(command_type, win_id, bar), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxRibbonButtonBarEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRibbonButtonBarEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRibbonButtonBarEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRibbonButtonBarEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRibbonButtonBarEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRibbonButtonBarEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRibbonButtonBarEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxRibbonButtonBarEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxRibbonButtonBarEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxRibbonButtonBarEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxRibbonButtonBarEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

