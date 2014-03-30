#ifndef _WRAPPERS_WRAPPER_ILINKEDTEXT_H_
#define _WRAPPERS_WRAPPER_ILINKEDTEXT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_ILinkedText : public ILinkedText, public luna_wrapper_base {

public:
		

	~wrapper_ILinkedText() {
		logDEBUG3("Calling delete function for wrapper ILinkedText");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ILinkedText*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ILinkedText(lua_State* L, lua_Table* dum) 
		: ILinkedText(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ILinkedText*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ILinkedText::Kind ILinkedText::kind() const
	ILinkedText::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function ILinkedText::kind");
		_obj.pushArg((ILinkedText*)this);
		return (ILinkedText::Kind)(_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

