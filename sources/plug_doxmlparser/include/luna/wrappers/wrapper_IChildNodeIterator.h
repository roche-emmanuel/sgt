#ifndef _WRAPPERS_WRAPPER_ICHILDNODEITERATOR_H_
#define _WRAPPERS_WRAPPER_ICHILDNODEITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IChildNodeIterator : public IChildNodeIterator, public luna_wrapper_base {

public:
		

	~wrapper_IChildNodeIterator() {
		logDEBUG3("Calling delete function for wrapper IChildNodeIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IChildNodeIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IChildNodeIterator(lua_State* L, lua_Table* dum) 
		: IChildNodeIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IChildNodeIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IChildNode * IChildNodeIterator::toFirst()
	IChildNode * toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function IChildNodeIterator::toFirst");
		_obj.pushArg((IChildNodeIterator*)this);
		return (_obj.callFunction<IChildNode*>());
	};

	// IChildNode * IChildNodeIterator::toLast()
	IChildNode * toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function IChildNodeIterator::toLast");
		_obj.pushArg((IChildNodeIterator*)this);
		return (_obj.callFunction<IChildNode*>());
	};

	// IChildNode * IChildNodeIterator::toNext()
	IChildNode * toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function IChildNodeIterator::toNext");
		_obj.pushArg((IChildNodeIterator*)this);
		return (_obj.callFunction<IChildNode*>());
	};

	// IChildNode * IChildNodeIterator::toPrev()
	IChildNode * toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function IChildNodeIterator::toPrev");
		_obj.pushArg((IChildNodeIterator*)this);
		return (_obj.callFunction<IChildNode*>());
	};

	// IChildNode * IChildNodeIterator::current() const
	IChildNode * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function IChildNodeIterator::current");
		_obj.pushArg((IChildNodeIterator*)this);
		return (_obj.callFunction<IChildNode*>());
	};

	// void IChildNodeIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function IChildNodeIterator::release");
		_obj.pushArg((IChildNodeIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

