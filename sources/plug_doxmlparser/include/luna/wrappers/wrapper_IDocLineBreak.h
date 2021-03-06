#ifndef _WRAPPERS_WRAPPER_IDOCLINEBREAK_H_
#define _WRAPPERS_WRAPPER_IDOCLINEBREAK_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocLineBreak : public IDocLineBreak, public luna_wrapper_base {

public:
		

	~wrapper_IDocLineBreak() {
		logDEBUG3("Calling delete function for wrapper IDocLineBreak");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocLineBreak*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocLineBreak(lua_State* L, lua_Table* dum) 
		: IDocLineBreak(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocLineBreak*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocLineBreak*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

