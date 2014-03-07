#ifndef _WRAPPERS_WRAPPER_INODEITERATOR_H_
#define _WRAPPERS_WRAPPER_INODEITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_INodeIterator : public INodeIterator, public luna_wrapper_base {

public:
		

	~wrapper_INodeIterator() {
		logDEBUG3("Calling delete function for wrapper INodeIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((INodeIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_INodeIterator(lua_State* L, lua_Table* dum) 
		: INodeIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((INodeIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// INode * INodeIterator::toFirst()
	INode * toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function INodeIterator::toFirst");
		_obj.pushArg((INodeIterator*)this);
		return (_obj.callFunction<INode*>());
	};

	// INode * INodeIterator::toLast()
	INode * toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function INodeIterator::toLast");
		_obj.pushArg((INodeIterator*)this);
		return (_obj.callFunction<INode*>());
	};

	// INode * INodeIterator::toNext()
	INode * toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function INodeIterator::toNext");
		_obj.pushArg((INodeIterator*)this);
		return (_obj.callFunction<INode*>());
	};

	// INode * INodeIterator::toPrev()
	INode * toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function INodeIterator::toPrev");
		_obj.pushArg((INodeIterator*)this);
		return (_obj.callFunction<INode*>());
	};

	// INode * INodeIterator::current() const
	INode * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function INodeIterator::current");
		_obj.pushArg((INodeIterator*)this);
		return (_obj.callFunction<INode*>());
	};

	// void INodeIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function INodeIterator::release");
		_obj.pushArg((INodeIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

