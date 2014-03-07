#ifndef _WRAPPERS_WRAPPER_ILT_TEXT_H_
#define _WRAPPERS_WRAPPER_ILT_TEXT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_ILT_Text : public ILT_Text, public luna_wrapper_base {

public:
		

	~wrapper_ILT_Text() {
		logDEBUG3("Calling delete function for wrapper ILT_Text");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ILT_Text*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ILT_Text(lua_State* L, lua_Table* dum) 
		: ILT_Text(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ILT_Text*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ILinkedText::Kind ILinkedText::kind() const
	ILinkedText::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function ILinkedText::kind");
		_obj.pushArg((ILT_Text*)this);
		return (ILinkedText::Kind)(_obj.callFunction<int>());
	};

	// const IString * ILT_Text::text() const
	const IString * text() const {
		THROW_IF(!_obj.pushFunction("text"),"No implementation for abstract function ILT_Text::text");
		_obj.pushArg((ILT_Text*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

