#ifndef _WRAPPERS_WRAPPER_IDOCPARAMETERLIST_H_
#define _WRAPPERS_WRAPPER_IDOCPARAMETERLIST_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocParameterList : public IDocParameterList, public luna_wrapper_base {

public:
		

	~wrapper_IDocParameterList() {
		logDEBUG3("Calling delete function for wrapper IDocParameterList");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocParameterList*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocParameterList(lua_State* L, lua_Table* dum) 
		: IDocParameterList(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocParameterList*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocParameterList*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocParameterList::Types IDocParameterList::sectType() const
	IDocParameterList::Types sectType() const {
		THROW_IF(!_obj.pushFunction("sectType"),"No implementation for abstract function IDocParameterList::sectType");
		_obj.pushArg((IDocParameterList*)this);
		return (IDocParameterList::Types)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocParameterList::params() const
	IDocIterator * params() const {
		THROW_IF(!_obj.pushFunction("params"),"No implementation for abstract function IDocParameterList::params");
		_obj.pushArg((IDocParameterList*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

