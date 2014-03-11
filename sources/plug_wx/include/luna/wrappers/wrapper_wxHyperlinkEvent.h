#ifndef _WRAPPERS_WRAPPER_WXHYPERLINKEVENT_H_
#define _WRAPPERS_WRAPPER_WXHYPERLINKEVENT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/hyperlink.h>

class wrapper_wxHyperlinkEvent : public wxHyperlinkEvent, public luna_wrapper_base {

public:
		

	~wrapper_wxHyperlinkEvent() {
		logDEBUG3("Calling delete function for wrapper wxHyperlinkEvent");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHyperlinkEvent*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHyperlinkEvent(lua_State* L, lua_Table* dum, wxObject * generator, int id, const wxString & url) 
		: wxHyperlinkEvent(generator, id, url), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHyperlinkEvent*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHyperlinkEvent*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHyperlinkEvent::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHyperlinkEvent*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHyperlinkEvent::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHyperlinkEvent*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHyperlinkEvent::GetClassInfo();
	};

	// wxEventCategory wxEvent::GetEventCategory() const
	wxEventCategory GetEventCategory() const {
		if(_obj.pushFunction("GetEventCategory")) {
			_obj.pushArg((wxHyperlinkEvent*)this);
			return (wxEventCategory)(_obj.callFunction<int>());
		}

		return wxHyperlinkEvent::GetEventCategory();
	};

	// wxEvent * wxCommandEvent::Clone() const
	wxEvent * Clone() const {
		if(_obj.pushFunction("Clone")) {
			_obj.pushArg((wxHyperlinkEvent*)this);
			return (_obj.callFunction<wxEvent*>());
		}

		return wxHyperlinkEvent::Clone();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

