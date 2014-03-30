#ifndef _WRAPPERS_WRAPPER_WXJOYSTICK_H_
#define _WRAPPERS_WRAPPER_WXJOYSTICK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/joystick.h>

class wrapper_wxJoystick : public wxJoystick, public luna_wrapper_base {

public:
		

	~wrapper_wxJoystick() {
		logDEBUG3("Calling delete function for wrapper wxJoystick");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxJoystick*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxJoystick(lua_State* L, lua_Table* dum, int joystick = ::wxJOYSTICK1) 
		: wxJoystick(joystick), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxJoystick*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxJoystick*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxJoystick::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxJoystick*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxJoystick::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxJoystick*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxJoystick::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

