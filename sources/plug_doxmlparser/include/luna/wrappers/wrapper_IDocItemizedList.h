#ifndef _WRAPPERS_WRAPPER_IDOCITEMIZEDLIST_H_
#define _WRAPPERS_WRAPPER_IDOCITEMIZEDLIST_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocItemizedList : public IDocItemizedList, public luna_wrapper_base {

public:
		

	~wrapper_IDocItemizedList() {
		logDEBUG3("Calling delete function for wrapper IDocItemizedList");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocItemizedList*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocItemizedList(lua_State* L, lua_Table* dum) 
		: IDocItemizedList(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocItemizedList*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocItemizedList*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocItemizedList::elements() const
	IDocIterator * elements() const {
		THROW_IF(!_obj.pushFunction("elements"),"No implementation for abstract function IDocItemizedList::elements");
		_obj.pushArg((IDocItemizedList*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

