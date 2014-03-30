#ifndef _WRAPPERS_WRAPPER_WXSPINDOUBLEEVENT_H_
#define _WRAPPERS_WRAPPER_WXSPINDOUBLEEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/spinctrl.h>

class wrapper_wxSpinDoubleEvent : public wxSpinDoubleEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxSpinDoubleEvent() {
		logDEBUG3("Calling delete function for wrapper wxSpinDoubleEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSpinDoubleEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSpinDoubleEvent(lua_State* L, lua_Table* dum, int commandType = wxEVT_NULL, int winid = 0, double value = 0) 
		: wxSpinDoubleEvent(commandType, winid, value), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSpinDoubleEvent*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxSpinDoubleEvent(lua_State* L, lua_Table* dum, const wxSpinDoubleEvent & event) 
		: wxSpinDoubleEvent(event), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSpinDoubleEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSpinDoubleEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSpinDoubleEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSpinDoubleEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSpinDoubleEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSpinDoubleEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSpinDoubleEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxSpinDoubleEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxSpinDoubleEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxSpinDoubleEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxSpinDoubleEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

