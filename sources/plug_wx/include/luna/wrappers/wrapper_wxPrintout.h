#ifndef _WRAPPERS_WRAPPER_WXPRINTOUT_H_
#define _WRAPPERS_WRAPPER_WXPRINTOUT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/print.h>

class wrapper_wxPrintout : public wxPrintout, public luna_wrapper_base {

public:
		

	~wrapper_wxPrintout() {
		logDEBUG3("Calling delete function for wrapper wxPrintout");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPrintout*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxPrintout*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPrintout::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxPrintout*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxPrintout::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxPrintout*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPrintout::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


public:
// bool wxPrintout::OnPrintPage(int pageNum)
bool OnPrintPage(int) {
	THROW_IF(true,"The function call bool wxPrintout::OnPrintPage(int) is not implemented in wrapper.");
	return bool();
};

};




#endif

