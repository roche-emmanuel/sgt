#ifndef _WRAPPERS_WRAPPER_IDOCROOT_H_
#define _WRAPPERS_WRAPPER_IDOCROOT_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocRoot : public IDocRoot, public luna_wrapper_base {

public:
		

	~wrapper_IDocRoot() {
		logDEBUG3("Calling delete function for wrapper IDocRoot");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocRoot*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocRoot(lua_State* L, lua_Table* dum) 
		: IDocRoot(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocRoot*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocRoot*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocRoot::contents() const
	IDocIterator * contents() const {
		THROW_IF(!_obj.pushFunction("contents"),"No implementation for abstract function IDocRoot::contents");
		_obj.pushArg((IDocRoot*)this);
		return (_obj.callFunction<IDocIterator*>());
	};

	// IDocInternal * IDocRoot::internal() const
	IDocInternal * internal() const {
		THROW_IF(!_obj.pushFunction("internal"),"No implementation for abstract function IDocRoot::internal");
		_obj.pushArg((IDocRoot*)this);
		return (_obj.callFunction<IDocInternal*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

