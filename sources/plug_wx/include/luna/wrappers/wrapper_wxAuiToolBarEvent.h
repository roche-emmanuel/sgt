#ifndef _WRAPPERS_WRAPPER_WXAUITOOLBAREVENT_H_
#define _WRAPPERS_WRAPPER_WXAUITOOLBAREVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/aui/auibar.h>

class wrapper_wxAuiToolBarEvent : public wxAuiToolBarEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxAuiToolBarEvent() {
		logDEBUG3("Calling delete function for wrapper wxAuiToolBarEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxAuiToolBarEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxAuiToolBarEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAuiToolBarEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxAuiToolBarEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAuiToolBarEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxAuiToolBarEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxAuiToolBarEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxAuiToolBarEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxAuiToolBarEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxAuiToolBarEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxAuiToolBarEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

