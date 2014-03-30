#ifndef _WRAPPERS_WRAPPER_IDOCANCHOR_H_
#define _WRAPPERS_WRAPPER_IDOCANCHOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocAnchor : public IDocAnchor, public luna_wrapper_base {

public:
		

	~wrapper_IDocAnchor() {
		logDEBUG3("Calling delete function for wrapper IDocAnchor");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocAnchor*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocAnchor(lua_State* L, lua_Table* dum) 
		: IDocAnchor(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocAnchor*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocAnchor*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocAnchor::id() const
	const IString * id() const {
		THROW_IF(!_obj.pushFunction("id"),"No implementation for abstract function IDocAnchor::id");
		_obj.pushArg((IDocAnchor*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

