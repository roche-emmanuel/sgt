#ifndef _WRAPPERS_WRAPPER_IDOCTITLE_H_
#define _WRAPPERS_WRAPPER_IDOCTITLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocTitle : public IDocTitle, public luna_wrapper_base {

public:
		

	~wrapper_IDocTitle() {
		logDEBUG3("Calling delete function for wrapper IDocTitle");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocTitle*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocTitle(lua_State* L, lua_Table* dum) 
		: IDocTitle(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocTitle*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocTitle*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocTitle::title() const
	IDocIterator * title() const {
		THROW_IF(!_obj.pushFunction("title"),"No implementation for abstract function IDocTitle::title");
		_obj.pushArg((IDocTitle*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

