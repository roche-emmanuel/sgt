#ifndef _WRAPPERS_WRAPPER_IDOCCOPY_H_
#define _WRAPPERS_WRAPPER_IDOCCOPY_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocCopy : public IDocCopy, public luna_wrapper_base {

public:
		

	~wrapper_IDocCopy() {
		logDEBUG3("Calling delete function for wrapper IDocCopy");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocCopy*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocCopy(lua_State* L, lua_Table* dum) 
		: IDocCopy(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocCopy*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc::Kind IDoc::kind() const
	IDoc::Kind kind() const {
		THROW_IF(!_obj.pushFunction("kind"),"No implementation for abstract function IDoc::kind");
		_obj.pushArg((IDocCopy*)this);
		return (IDoc::Kind)(_obj.callFunction<int>());
	};

	// IDocIterator * IDocCopy::contents() const
	IDocIterator * contents() const {
		THROW_IF(!_obj.pushFunction("contents"),"No implementation for abstract function IDocCopy::contents");
		_obj.pushArg((IDocCopy*)this);
		return (_obj.callFunction<IDocIterator*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

