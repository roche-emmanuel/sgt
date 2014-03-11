#ifndef _WRAPPERS_WRAPPER_WXMASK_H_
#define _WRAPPERS_WRAPPER_WXMASK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/bitmap.h>

class wrapper_wxMask : public wxMask, public luna_wrapper_base {

public:
		

	~wrapper_wxMask() {
		logDEBUG3("Calling delete function for wrapper wxMask");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxMask*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxMask(lua_State* L, lua_Table* dum) 
		: wxMask(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxMask(lua_State* L, lua_Table* dum, const wxBitmap & bitmap, int index) 
		: wxMask(bitmap, index), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxMask(lua_State* L, lua_Table* dum, const wxBitmap & bitmap) 
		: wxMask(bitmap), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMask*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxMask(lua_State* L, lua_Table* dum, const wxBitmap & bitmap, const wxColour & colour) 
		: wxMask(bitmap, colour), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxMask*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxMask*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMask::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxMask*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxMask::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxMask*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxMask::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

