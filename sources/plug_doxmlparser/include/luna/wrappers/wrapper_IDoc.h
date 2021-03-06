#ifndef _WRAPPERS_WRAPPER_IDOC_H_
#define _WRAPPERS_WRAPPER_IDOC_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDoc : public IDoc, public luna_wrapper_base {

public:
		

	~wrapper_IDoc() {
		logDEBUG3("Calling delete function for wrapper IDoc");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDoc*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDoc(lua_State* L, lua_Table* dum) 
		: IDoc(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDoc*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDoc*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

