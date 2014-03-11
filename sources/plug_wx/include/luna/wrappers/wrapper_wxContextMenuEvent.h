#ifndef _WRAPPERS_WRAPPER_WXCONTEXTMENUEVENT_H_
#define _WRAPPERS_WRAPPER_WXCONTEXTMENUEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxContextMenuEvent : public wxContextMenuEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxContextMenuEvent() {
		logDEBUG3("Calling delete function for wrapper wxContextMenuEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxContextMenuEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxContextMenuEvent(lua_State* L, lua_Table* dum, int type = wxEVT_NULL, int id = 0, const wxPoint & pos = wxDefaultPosition) 
		: wxContextMenuEvent(type, id, pos), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxContextMenuEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxContextMenuEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxContextMenuEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxContextMenuEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxContextMenuEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxContextMenuEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxContextMenuEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxContextMenuEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxContextMenuEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxContextMenuEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxContextMenuEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

