#ifndef _WRAPPERS_WRAPPER_IDOCTEXT_H_
#define _WRAPPERS_WRAPPER_IDOCTEXT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocText : public IDocText, public luna_wrapper_base {

public:
		

	~wrapper_IDocText() {
		logDEBUG3("Calling delete function for wrapper IDocText");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocText*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocText(lua_State* L, lua_Table* dum) 
		: IDocText(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocText*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocText*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocText::text() const
	const IString * text() const {
		THROW_IF(!_obj.pushFunction("text"),"No implementation for abstract function IDocText::text");
		_obj.pushArg((IDocText*)this);
		return (_obj.callFunction<IString*>());
	};

	// int IDocText::markup() const
	int markup() const {
		THROW_IF(!_obj.pushFunction("markup"),"No implementation for abstract function IDocText::markup");
		_obj.pushArg((IDocText*)this);
		return (_obj.callFunction<int>());
	};

	// int IDocText::headingLevel() const
	int headingLevel() const {
		THROW_IF(!_obj.pushFunction("headingLevel"),"No implementation for abstract function IDocText::headingLevel");
		_obj.pushArg((IDocText*)this);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

