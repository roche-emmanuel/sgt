#ifndef _WRAPPERS_WRAPPER_WXCOLLAPSIBLEPANEEVENT_H_
#define _WRAPPERS_WRAPPER_WXCOLLAPSIBLEPANEEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/collpane.h>

class wrapper_wxCollapsiblePaneEvent : public wxCollapsiblePaneEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxCollapsiblePaneEvent() {
		logDEBUG3("Calling delete function for wrapper wxCollapsiblePaneEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxCollapsiblePaneEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxCollapsiblePaneEvent(lua_State* L, lua_Table* dum, wxObject * generator, int id, bool collapsed) 
		: wxCollapsiblePaneEvent(generator, id, collapsed), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxCollapsiblePaneEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxCollapsiblePaneEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCollapsiblePaneEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxCollapsiblePaneEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxCollapsiblePaneEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxCollapsiblePaneEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxCollapsiblePaneEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxCollapsiblePaneEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxCollapsiblePaneEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxCollapsiblePaneEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxCollapsiblePaneEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

