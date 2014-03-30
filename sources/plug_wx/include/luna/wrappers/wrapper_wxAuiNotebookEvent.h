#ifndef _WRAPPERS_WRAPPER_WXAUINOTEBOOKEVENT_H_
#define _WRAPPERS_WRAPPER_WXAUINOTEBOOKEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/aui/auibook.h>

class wrapper_wxAuiNotebookEvent : public wxAuiNotebookEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxAuiNotebookEvent() {
		logDEBUG3("Calling delete function for wrapper wxAuiNotebookEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxAuiNotebookEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxAuiNotebookEvent(lua_State* L, lua_Table* dum, int command_type = wxEVT_NULL, int win_id = 0) 
		: wxAuiNotebookEvent(command_type, win_id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxAuiNotebookEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxAuiNotebookEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAuiNotebookEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxAuiNotebookEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxAuiNotebookEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxAuiNotebookEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxAuiNotebookEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxAuiNotebookEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxAuiNotebookEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxAuiNotebookEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxAuiNotebookEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

