#ifndef _WRAPPERS_WRAPPER_WXSCREENDC_H_
#define _WRAPPERS_WRAPPER_WXSCREENDC_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dcscreen.h>

class wrapper_wxScreenDC : public wxScreenDC, public luna_wrapper_base {

public:
		

	~wrapper_wxScreenDC() {
		logDEBUG3("Calling delete function for wrapper wxScreenDC");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxScreenDC*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxScreenDC(lua_State* L, lua_Table* dum) 
		: wxScreenDC(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxScreenDC*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxScreenDC*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxScreenDC::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxScreenDC*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxScreenDC::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxScreenDC*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxScreenDC::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

