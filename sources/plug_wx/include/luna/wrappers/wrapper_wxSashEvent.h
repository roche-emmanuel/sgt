#ifndef _WRAPPERS_WRAPPER_WXSASHEVENT_H_
#define _WRAPPERS_WRAPPER_WXSASHEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/sashwin.h>

class wrapper_wxSashEvent : public wxSashEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxSashEvent() {
		logDEBUG3("Calling delete function for wrapper wxSashEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSashEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSashEvent(lua_State* L, lua_Table* dum, int id = 0, wxSashEdgePosition edge = ::wxSASH_NONE) 
		: wxSashEvent(id, edge), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSashEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSashEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSashEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSashEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSashEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSashEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSashEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxSashEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxSashEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxSashEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxSashEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

