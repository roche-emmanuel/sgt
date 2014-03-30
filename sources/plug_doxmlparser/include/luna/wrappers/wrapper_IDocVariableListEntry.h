#ifndef _WRAPPERS_WRAPPER_IDOCVARIABLELISTENTRY_H_
#define _WRAPPERS_WRAPPER_IDOCVARIABLELISTENTRY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocVariableListEntry : public IDocVariableListEntry, public luna_wrapper_base {

public:
		

	~wrapper_IDocVariableListEntry() {
		logDEBUG3("Calling delete function for wrapper IDocVariableListEntry");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocVariableListEntry*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocVariableListEntry(lua_State* L, lua_Table* dum) 
		: IDocVariableListEntry(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocVariableListEntry*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocVariableListEntry*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// ILinkedTextIterator * IDocVariableListEntry::term() const
	ILinkedTextIterator * term() const {
		THROW_IF(!_obj.pushFunction("term"),"No implementation for abstract function IDocVariableListEntry::term");
		_obj.pushArg((IDocVariableListEntry*)this);
		return (_obj.callFunction<ILinkedTextIterator*>());
	};

	// IDocPara * IDocVariableListEntry::description() const
	IDocPara * description() const {
		THROW_IF(!_obj.pushFunction("description"),"No implementation for abstract function IDocVariableListEntry::description");
		_obj.pushArg((IDocVariableListEntry*)this);
		return (_obj.callFunction<IDocPara*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

