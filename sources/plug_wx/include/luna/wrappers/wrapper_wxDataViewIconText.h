#ifndef _WRAPPERS_WRAPPER_WXDATAVIEWICONTEXT_H_
#define _WRAPPERS_WRAPPER_WXDATAVIEWICONTEXT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dataview.h>

class wrapper_wxDataViewIconText : public wxDataViewIconText, public luna_wrapper_base {

public:
		

	~wrapper_wxDataViewIconText() {
		logDEBUG3("Calling delete function for wrapper wxDataViewIconText");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxDataViewIconText*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxDataViewIconText(lua_State* L, lua_Table* dum, const wxString & text = wxEmptyString, const wxIcon & icon = wxNullIcon) 
		: wxDataViewIconText(text, icon), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataViewIconText*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxDataViewIconText(lua_State* L, lua_Table* dum, const wxDataViewIconText & other) 
		: wxDataViewIconText(other), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxDataViewIconText*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxDataViewIconText*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewIconText::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxDataViewIconText*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxDataViewIconText::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxDataViewIconText*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxDataViewIconText::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

