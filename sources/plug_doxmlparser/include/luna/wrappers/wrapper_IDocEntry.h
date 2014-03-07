#ifndef _WRAPPERS_WRAPPER_IDOCENTRY_H_
#define _WRAPPERS_WRAPPER_IDOCENTRY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocEntry : public IDocEntry, public luna_wrapper_base {

public:
		

	~wrapper_IDocEntry() {
		logDEBUG3("Calling delete function for wrapper IDocEntry");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocEntry*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocEntry(lua_State* L, lua_Table* dum) 
		: IDocEntry(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocEntry*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocEntry*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocEntry::contents() const
	IDocIterator * contents() const {
		THROW_IF(!_obj.pushFunction("contents"),"No implementation for abstract function IDocEntry::contents");
		_obj.pushArg((IDocEntry*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

