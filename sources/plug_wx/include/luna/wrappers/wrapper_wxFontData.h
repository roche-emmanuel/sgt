#ifndef _WRAPPERS_WRAPPER_WXFONTDATA_H_
#define _WRAPPERS_WRAPPER_WXFONTDATA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/fontdata.h>

class wrapper_wxFontData : public wxFontData, public luna_wrapper_base {

public:
		

	~wrapper_wxFontData() {
		logDEBUG3("Calling delete function for wrapper wxFontData");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxFontData*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxFontData(lua_State* L, lua_Table* dum) 
		: wxFontData(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxFontData*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxFontData*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFontData::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxFontData*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxFontData::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxFontData*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxFontData::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

