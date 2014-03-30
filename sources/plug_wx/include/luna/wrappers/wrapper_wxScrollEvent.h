#ifndef _WRAPPERS_WRAPPER_WXSCROLLEVENT_H_
#define _WRAPPERS_WRAPPER_WXSCROLLEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/event.h>

class wrapper_wxScrollEvent : public wxScrollEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxScrollEvent() {
		logDEBUG3("Calling delete function for wrapper wxScrollEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxScrollEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxScrollEvent(lua_State* L, lua_Table* dum, int commandType = wxEVT_NULL, int id = 0, int pos = 0, int orientation = 0) 
		: wxScrollEvent(commandType, id, pos, orientation), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxScrollEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxScrollEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxScrollEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxScrollEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxScrollEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxScrollEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxScrollEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxScrollEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxScrollEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxScrollEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxScrollEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

