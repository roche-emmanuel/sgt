#ifndef _WRAPPERS_WRAPPER_WXCLIPBOARDTEXTEVENT_H_
#define _WRAPPERS_WRAPPER_WXCLIPBOARDTEXTEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxClipboardTextEvent : public wxClipboardTextEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxClipboardTextEvent() {
		logDEBUG3("Calling delete function for wrapper wxClipboardTextEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxClipboardTextEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxClipboardTextEvent(lua_State* L, lua_Table* dum, int commandType = wxEVT_NULL, int id = 0) 
		: wxClipboardTextEvent(commandType, id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxClipboardTextEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxClipboardTextEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxClipboardTextEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxClipboardTextEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxClipboardTextEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxClipboardTextEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxClipboardTextEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxClipboardTextEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxClipboardTextEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxClipboardTextEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxClipboardTextEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

