#ifndef _WRAPPERS_WRAPPER_WXHTMLLINKEVENT_H_
#define _WRAPPERS_WRAPPER_WXHTMLLINKEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/html/htmlwin.h>

class wrapper_wxHtmlLinkEvent : public wxHtmlLinkEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlLinkEvent() {
		logDEBUG3("Calling delete function for wrapper wxHtmlLinkEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlLinkEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlLinkEvent(lua_State* L, lua_Table* dum, int id, const wxHtmlLinkInfo & linkinfo) 
		: wxHtmlLinkEvent(id, linkinfo), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlLinkEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHtmlLinkEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlLinkEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHtmlLinkEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlLinkEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHtmlLinkEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlLinkEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxHtmlLinkEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxHtmlLinkEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxHtmlLinkEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxHtmlLinkEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

