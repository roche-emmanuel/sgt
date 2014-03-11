#ifndef _WRAPPERS_WRAPPER_WXRICHTEXTEVENT_H_
#define _WRAPPERS_WRAPPER_WXRICHTEXTEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/richtext/richtextctrl.h>

class wrapper_wxRichTextEvent : public wxRichTextEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxRichTextEvent() {
		logDEBUG3("Calling delete function for wrapper wxRichTextEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxRichTextEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxRichTextEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxRichTextEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxRichTextEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxRichTextEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxRichTextEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxRichTextEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxRichTextEvent::GetEventCategory();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

