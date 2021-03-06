#ifndef _WRAPPERS_WRAPPER_WXFONTPICKEREVENT_H_
#define _WRAPPERS_WRAPPER_WXFONTPICKEREVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/fontpicker.h>

class wrapper_wxFontPickerEvent : public wxFontPickerEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxFontPickerEvent() {
		logDEBUG3("Calling delete function for wrapper wxFontPickerEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFontPickerEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFontPickerEvent(lua_State* L, lua_Table* dum, wxObject * generator, int id, const wxFont & font) 
		: wxFontPickerEvent(generator, id, font), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFontPickerEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFontPickerEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFontPickerEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFontPickerEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFontPickerEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFontPickerEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFontPickerEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxFontPickerEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxFontPickerEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxFontPickerEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxFontPickerEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

