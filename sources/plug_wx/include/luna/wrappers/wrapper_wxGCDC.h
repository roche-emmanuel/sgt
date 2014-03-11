#ifndef _WRAPPERS_WRAPPER_WXGCDC_H_
#define _WRAPPERS_WRAPPER_WXGCDC_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <wx/dcgraph.h>

class wrapper_wxGCDC : public wxGCDC, public luna_wrapper_base {

public:
		

	~wrapper_wxGCDC() {
		logDEBUG3("Calling delete function for wrapper wxGCDC");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxGCDC*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxGCDC(lua_State* L, lua_Table* dum, const wxWindowDC & windowDC) 
		: wxGCDC(windowDC), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGCDC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGCDC(lua_State* L, lua_Table* dum, const wxMemoryDC & memoryDC) 
		: wxGCDC(memoryDC), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGCDC*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_wxGCDC(lua_State* L, lua_Table* dum) 
		: wxGCDC(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxGCDC*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// wxObjectRefData * wxObject::CreateRefData() const
	wxObjectRefData * CreateRefData() const {
		if(_obj.pushFunction("CreateRefData")) {
			_obj.pushArg((wxGCDC*)this);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGCDC::CreateRefData();
	};

	// wxObjectRefData * wxObject::CloneRefData(const wxObjectRefData * data) const
	wxObjectRefData * CloneRefData(const wxObjectRefData * data) const {
		if(_obj.pushFunction("CloneRefData")) {
			_obj.pushArg((wxGCDC*)this);
			_obj.pushArg(data);
			return (_obj.callFunction<wxObjectRefData*>());
		}

		return wxGCDC::CloneRefData(data);
	};

public:
	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxGCDC*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxGCDC::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

