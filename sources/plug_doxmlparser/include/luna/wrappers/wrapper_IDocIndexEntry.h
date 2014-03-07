#ifndef _WRAPPERS_WRAPPER_IDOCINDEXENTRY_H_
#define _WRAPPERS_WRAPPER_IDOCINDEXENTRY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocIndexEntry : public IDocIndexEntry, public luna_wrapper_base {

public:
		

	~wrapper_IDocIndexEntry() {
		logDEBUG3("Calling delete function for wrapper IDocIndexEntry");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocIndexEntry*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocIndexEntry(lua_State* L, lua_Table* dum) 
		: IDocIndexEntry(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocIndexEntry*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocIndexEntry*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// const IString * IDocIndexEntry::primary() const
	const IString * primary() const {
		THROW_IF(!_obj.pushFunction("primary"),"No implementation for abstract function IDocIndexEntry::primary");
		_obj.pushArg((IDocIndexEntry*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IDocIndexEntry::secondary() const
	const IString * secondary() const {
		THROW_IF(!_obj.pushFunction("secondary"),"No implementation for abstract function IDocIndexEntry::secondary");
		_obj.pushArg((IDocIndexEntry*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

