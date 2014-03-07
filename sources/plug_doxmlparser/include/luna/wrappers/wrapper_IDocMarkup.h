#ifndef _WRAPPERS_WRAPPER_IDOCMARKUP_H_
#define _WRAPPERS_WRAPPER_IDOCMARKUP_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocMarkup : public IDocMarkup, public luna_wrapper_base {

public:
		

	~wrapper_IDocMarkup() {
		logDEBUG3("Calling delete function for wrapper IDocMarkup");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocMarkup*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocMarkup(lua_State* L, lua_Table* dum) 
		: IDocMarkup(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocMarkup*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocMarkup*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

