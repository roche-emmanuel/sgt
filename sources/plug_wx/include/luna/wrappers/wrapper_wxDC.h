#ifndef _WRAPPERS_WRAPPER_WXDC_H_
#define _WRAPPERS_WRAPPER_WXDC_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dc.h>

class wrapper_wxDC : public wxDC, public luna_wrapper_base {

public:
		

	~wrapper_wxDC() {
		logDEBUG3("Calling delete function for wrapper wxDC");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDC*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDC*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDC::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDC*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDC::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDC*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDC::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

