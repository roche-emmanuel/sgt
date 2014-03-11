#ifndef _WRAPPERS_WRAPPER_WXWINDOWMODALDIALOGEVENT_H_
#define _WRAPPERS_WRAPPER_WXWINDOWMODALDIALOGEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dialog.h>

class wrapper_wxWindowModalDialogEvent : public wxWindowModalDialogEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxWindowModalDialogEvent() {
		logDEBUG3("Calling delete function for wrapper wxWindowModalDialogEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxWindowModalDialogEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxWindowModalDialogEvent(lua_State* L, lua_Table* dum, int commandType = wxEVT_NULL, int id = 0) 
		: wxWindowModalDialogEvent(commandType, id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxWindowModalDialogEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxWindowModalDialogEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWindowModalDialogEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxWindowModalDialogEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxWindowModalDialogEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxWindowModalDialogEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxWindowModalDialogEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxWindowModalDialogEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxWindowModalDialogEvent::GetEventCategory();
	};

	// wxEvent * wxWindowModalDialogEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxWindowModalDialogEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxWindowModalDialogEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

