#ifndef _WRAPPERS_WRAPPER_WXSVGFILEDC_H_
#define _WRAPPERS_WRAPPER_WXSVGFILEDC_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dcsvg.h>

class wrapper_wxSVGFileDC : public wxSVGFileDC, public luna_wrapper_base {

public:
		

	~wrapper_wxSVGFileDC() {
		logDEBUG3("Calling delete function for wrapper wxSVGFileDC");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxSVGFileDC*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxSVGFileDC(lua_State* L, lua_Table* dum, const wxString & filename, int width = 320, int height = 240, double dpi = 72) 
		: wxSVGFileDC(filename, width, height, dpi), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxSVGFileDC*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxSVGFileDC*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSVGFileDC::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxSVGFileDC*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxSVGFileDC::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxSVGFileDC*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxSVGFileDC::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

