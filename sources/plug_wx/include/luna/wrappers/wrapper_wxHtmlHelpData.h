#ifndef _WRAPPERS_WRAPPER_WXHTMLHELPDATA_H_
#define _WRAPPERS_WRAPPER_WXHTMLHELPDATA_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/html/helpdata.h>

class wrapper_wxHtmlHelpData : public wxHtmlHelpData, public luna_wrapper_base {

public:
		

	~wrapper_wxHtmlHelpData() {
		logDEBUG3("Calling delete function for wrapper wxHtmlHelpData");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxHtmlHelpData*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxHtmlHelpData(lua_State* L, lua_Table* dum) 
		: wxHtmlHelpData(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxHtmlHelpData*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxHtmlHelpData*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlHelpData::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxHtmlHelpData*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxHtmlHelpData::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxHtmlHelpData*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxHtmlHelpData::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

