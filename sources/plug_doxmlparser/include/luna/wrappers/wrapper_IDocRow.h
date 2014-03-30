#ifndef _WRAPPERS_WRAPPER_IDOCROW_H_
#define _WRAPPERS_WRAPPER_IDOCROW_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocRow : public IDocRow, public luna_wrapper_base {

public:
		

	~wrapper_IDocRow() {
		logDEBUG3("Calling delete function for wrapper IDocRow");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocRow*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocRow(lua_State* L, lua_Table* dum) 
		: IDocRow(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocRow*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocRow*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocRow::entries() const
	IDocIterator * entries() const {
		THROW_IF(!_obj.pushFunction("entries"),"No implementation for abstract function IDocRow::entries");
		_obj.pushArg((IDocRow*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

