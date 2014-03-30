#ifndef _WRAPPERS_WRAPPER_WXPGCHOICEENTRY_H_
#define _WRAPPERS_WRAPPER_WXPGCHOICEENTRY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"



class wrapper_wxPGChoiceEntry : public wxPGChoiceEntry, public luna_wrapper_base {

public:
		

	~wrapper_wxPGChoiceEntry() {
		logDEBUG3("Calling delete function for wrapper wxPGChoiceEntry");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((wxPGChoiceEntry*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_wxPGChoiceEntry(lua_State* L, lua_Table* dum) 
		: wxPGChoiceEntry(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((wxPGChoiceEntry*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// wxClassInfo * wxObject::GetClassInfo() const
	wxClassInfo * GetClassInfo() const {
		if(_obj.pushFunction("GetClassInfo")) {
			_obj.pushArg((wxPGChoiceEntry*)this);
			return (_obj.callFunction<wxClassInfo*>());
		}

		return wxPGChoiceEntry::GetClassInfo();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

