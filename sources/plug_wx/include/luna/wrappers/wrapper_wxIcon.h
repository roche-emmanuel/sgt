#ifndef _WRAPPERS_WRAPPER_WXICON_H_
#define _WRAPPERS_WRAPPER_WXICON_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/icon.h>

class wrapper_wxIcon : public wxIcon, public luna_wrapper_base {

public:
		

	~wrapper_wxIcon() {
		logDEBUG3("Calling delete function for wrapper wxIcon");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxIcon*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxIcon(lua_State* L, lua_Table* dum) 
		: wxIcon(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxIcon*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxIcon(lua_State* L, lua_Table* dum, const wxIcon & icon) 
		: wxIcon(icon), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxIcon*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxIcon(lua_State* L, lua_Table* dum, const wxString & name, wxBitmapType type = wxICON_DEFAULT_TYPE, int desiredWidth = -1, int desiredHeight = -1) 
		: wxIcon(name, type, desiredWidth, desiredHeight), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxIcon*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxIcon(lua_State* L, lua_Table* dum, const wxIconLocation & loc) 
		: wxIcon(loc), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxIcon*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxIcon*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIcon::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxIcon*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxIcon::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxIcon*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxIcon::GetClassInfo();
	};

	// bool wxIcon::IsOk() const
	bool IsOk() const {
		if(_obj.pushFunction("IsOk")) {
			_obj.pushArg((wxIcon*)this);
			return (_obj.callFunction<bool>());
		}

		return wxIcon::IsOk();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

