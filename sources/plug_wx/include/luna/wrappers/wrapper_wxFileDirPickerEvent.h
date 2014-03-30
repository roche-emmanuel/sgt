#ifndef _WRAPPERS_WRAPPER_WXFILEDIRPICKEREVENT_H_
#define _WRAPPERS_WRAPPER_WXFILEDIRPICKEREVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/filepicker.h>

class wrapper_wxFileDirPickerEvent : public wxFileDirPickerEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxFileDirPickerEvent() {
		logDEBUG3("Calling delete function for wrapper wxFileDirPickerEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFileDirPickerEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFileDirPickerEvent(lua_State* L, lua_Table* dum, int type, wxObject * generator, int id, const wxString & path) 
		: wxFileDirPickerEvent(type, generator, id, path), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFileDirPickerEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFileDirPickerEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileDirPickerEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFileDirPickerEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFileDirPickerEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFileDirPickerEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFileDirPickerEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxFileDirPickerEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxFileDirPickerEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxFileDirPickerEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxFileDirPickerEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

