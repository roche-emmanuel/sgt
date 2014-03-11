#ifndef _WRAPPERS_WRAPPER_WXHTMLLINKINFO_H_
#define _WRAPPERS_WRAPPER_WXHTMLLINKINFO_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/html/htmlcell.h>

class wrapper_wxHtmlLinkInfo : public wxHtmlLinkInfo, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlLinkInfo() {
		logDEBUG3("Calling delete function for wrapper wxHtmlLinkInfo");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlLinkInfo*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlLinkInfo(lua_State* L, lua_Table* dum) 
		: wxHtmlLinkInfo(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlLinkInfo*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxHtmlLinkInfo(lua_State* L, lua_Table* dum, const wxString & href, const wxString & target = wxEmptyString) 
		: wxHtmlLinkInfo(href, target), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlLinkInfo*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHtmlLinkInfo*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlLinkInfo::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHtmlLinkInfo*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlLinkInfo::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHtmlLinkInfo*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlLinkInfo::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

