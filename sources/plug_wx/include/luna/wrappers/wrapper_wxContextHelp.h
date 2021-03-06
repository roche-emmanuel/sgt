#ifndef _WRAPPERS_WRAPPER_WXCONTEXTHELP_H_
#define _WRAPPERS_WRAPPER_WXCONTEXTHELP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/cshelp.h>

class wrapper_wxContextHelp : public wxContextHelp, public luna_wrapper_base {

public:
		

	~wrapper_wxContextHelp() {
		logDEBUG3("Calling delete function for wrapper wxContextHelp");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxContextHelp*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxContextHelp(lua_State* L, lua_Table* dum, wxWindow * window = NULL, bool doNow = true) 
		: wxContextHelp(window, doNow), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxContextHelp*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxContextHelp*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxContextHelp::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxContextHelp*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxContextHelp::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxContextHelp*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxContextHelp::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

