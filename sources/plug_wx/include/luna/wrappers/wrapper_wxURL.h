#ifndef _WRAPPERS_WRAPPER_WXURL_H_
#define _WRAPPERS_WRAPPER_WXURL_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/url.h>

class wrapper_wxURL : public wxURL, public luna_wrapper_base {

public:
		

	~wrapper_wxURL() {
		logDEBUG3("Calling delete function for wrapper wxURL");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxURL*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxURL(lua_State* L, lua_Table* dum, const wxString & url = wxEmptyString) 
		: wxURL(url), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxURL*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxURL*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxURL::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxURL*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxURL::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxURL*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxURL::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

