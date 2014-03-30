#ifndef _WRAPPERS_WRAPPER_WXSPINEVENT_H_
#define _WRAPPERS_WRAPPER_WXSPINEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/spinbutt.h>

class wrapper_wxSpinEvent : public wxSpinEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxSpinEvent() {
		logDEBUG3("Calling delete function for wrapper wxSpinEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSpinEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSpinEvent(lua_State* L, lua_Table* dum, int commandType = wxEVT_NULL, int id = 0) 
		: wxSpinEvent(commandType, id), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSpinEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSpinEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSpinEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSpinEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSpinEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSpinEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSpinEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxSpinEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxSpinEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxSpinEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxSpinEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

