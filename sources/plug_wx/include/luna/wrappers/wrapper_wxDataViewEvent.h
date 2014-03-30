#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWEVENT_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewEvent : public wxDataViewEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxDataViewEvent() {
		logDEBUG3("Calling delete function for wrapper wxDataViewEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDataViewEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDataViewEvent(lua_State* L, lua_Table* dum, int commandType = wxEVT_NULL, int winid = 0) 
		: wxDataViewEvent(commandType, winid), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataViewEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDataViewEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDataViewEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDataViewEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDataViewEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxDataViewEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxDataViewEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxDataViewEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxDataViewEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

