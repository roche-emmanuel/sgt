#ifndef _WRAPPERS_WRAPPER_WXSPLITTEREVENT_H_
#define _WRAPPERS_WRAPPER_WXSPLITTEREVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/splitter.h>

class wrapper_wxSplitterEvent : public wxSplitterEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxSplitterEvent() {
		logDEBUG3("Calling delete function for wrapper wxSplitterEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSplitterEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSplitterEvent(lua_State* L, lua_Table* dum, int eventType = wxEVT_NULL, wxSplitterWindow * splitter = NULL) 
		: wxSplitterEvent(eventType, splitter), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSplitterEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSplitterEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSplitterEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSplitterEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSplitterEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSplitterEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSplitterEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxSplitterEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxSplitterEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxSplitterEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxSplitterEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

