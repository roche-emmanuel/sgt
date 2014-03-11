#ifndef _WRAPPERS_WRAPPER_WXCOLOURPICKEREVENT_H_
#define _WRAPPERS_WRAPPER_WXCOLOURPICKEREVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/clrpicker.h>

class wrapper_wxColourPickerEvent : public wxColourPickerEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxColourPickerEvent() {
		logDEBUG3("Calling delete function for wrapper wxColourPickerEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxColourPickerEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxColourPickerEvent(lua_State* L, lua_Table* dum, wxObject * generator, int id, const wxColour & colour) 
		: wxColourPickerEvent(generator, id, colour), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxColourPickerEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxColourPickerEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxColourPickerEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxColourPickerEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxColourPickerEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxColourPickerEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxColourPickerEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxColourPickerEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxColourPickerEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxColourPickerEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxColourPickerEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

