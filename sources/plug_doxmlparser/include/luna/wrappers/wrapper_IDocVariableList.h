#ifndef _WRAPPERS_WRAPPER_IDOCVARIABLELIST_H_
#define _WRAPPERS_WRAPPER_IDOCVARIABLELIST_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocVariableList : public IDocVariableList, public luna_wrapper_base {

public:
		

	~wrapper_IDocVariableList() {
		logDEBUG3("Calling delete function for wrapper IDocVariableList");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocVariableList*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocVariableList(lua_State* L, lua_Table* dum) 
		: IDocVariableList(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocVariableList*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocVariableList*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocVariableList::entries() const
	IDocIterator * entries() const {
		THROW_IF(!_obj.pushFunction("entries"),"No implementation for abstract function IDocVariableList::entries");
		_obj.pushArg((IDocVariableList*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

