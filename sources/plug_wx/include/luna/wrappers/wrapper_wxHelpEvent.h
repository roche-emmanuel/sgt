#ifndef _WRAPPERS_WRAPPER_WXHELPEVENT_H_
#define _WRAPPERS_WRAPPER_WXHELPEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxHelpEvent : public wxHelpEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxHelpEvent() {
		logDEBUG3("Calling delete function for wrapper wxHelpEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHelpEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHelpEvent(lua_State* L, lua_Table* dum, int type = wxEVT_NULL, int winid = 0, const wxPoint & pt = wxDefaultPosition, wxHelpEvent::Origin origin = wxHelpEvent::Origin_Unknown) 
		: wxHelpEvent(type, winid, pt, origin), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHelpEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHelpEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHelpEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHelpEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHelpEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHelpEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHelpEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxHelpEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxHelpEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxHelpEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxHelpEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

