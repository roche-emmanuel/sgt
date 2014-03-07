#ifndef _WRAPPERS_WRAPPER_IDOCPARAMETER_H_
#define _WRAPPERS_WRAPPER_IDOCPARAMETER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocParameter : public IDocParameter, public luna_wrapper_base {

public:
		

	~wrapper_IDocParameter() {
		logDEBUG3("Calling delete function for wrapper IDocParameter");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocParameter*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocParameter(lua_State* L, lua_Table* dum) 
		: IDocParameter(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocParameter*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocParameter*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocParameter::name() const
	const IString * name() const {
		THROW_IF(!_obj.pushFunction("name"),"No implementation for abstract function IDocParameter::name");
		_obj.pushArg((IDocParameter*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

