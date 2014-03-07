#ifndef _WRAPPERS_WRAPPER_IDOCMARKUPMODIFIER_H_
#define _WRAPPERS_WRAPPER_IDOCMARKUPMODIFIER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocMarkupModifier : public IDocMarkupModifier, public luna_wrapper_base {

public:
		

	~wrapper_IDocMarkupModifier() {
		logDEBUG3("Calling delete function for wrapper IDocMarkupModifier");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocMarkupModifier*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocMarkupModifier(lua_State* L, lua_Table* dum) 
		: IDocMarkupModifier(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocMarkupModifier*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocMarkupModifier*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// bool IDocMarkupModifier::enabled() const
	bool enabled() const {
		THROW_IF(!_obj.pushFunction("enabled"),"No implementation for abstract function IDocMarkupModifier::enabled");
		_obj.pushArg((IDocMarkupModifier*)this);
		return (_obj.callFunction<bool>());
	};

	// int IDocMarkupModifier::markup() const
	int markup() const {
		THROW_IF(!_obj.pushFunction("markup"),"No implementation for abstract function IDocMarkupModifier::markup");
		_obj.pushArg((IDocMarkupModifier*)this);
		return (_obj.callFunction<int>());
	};

	// int IDocMarkupModifier::headingLevel() const
	int headingLevel() const {
		THROW_IF(!_obj.pushFunction("headingLevel"),"No implementation for abstract function IDocMarkupModifier::headingLevel");
		_obj.pushArg((IDocMarkupModifier*)this);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

