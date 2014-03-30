#ifndef _WRAPPERS_WRAPPER_IDOCITERATOR_H_
#define _WRAPPERS_WRAPPER_IDOCITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IDocIterator : public IDocIterator, public luna_wrapper_base {

public:
		

	~wrapper_IDocIterator() {
		logDEBUG3("Calling delete function for wrapper IDocIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IDocIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IDocIterator(lua_State* L, lua_Table* dum) 
		: IDocIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IDocIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IDoc * IDocIterator::toFirst()
	IDoc * toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function IDocIterator::toFirst");
		_obj.pushArg((IDocIterator*)this);
		return (_obj.callFunction<IDoc*>());
	};

	// IDoc * IDocIterator::toLast()
	IDoc * toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function IDocIterator::toLast");
		_obj.pushArg((IDocIterator*)this);
		return (_obj.callFunction<IDoc*>());
	};

	// IDoc * IDocIterator::toNext()
	IDoc * toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function IDocIterator::toNext");
		_obj.pushArg((IDocIterator*)this);
		return (_obj.callFunction<IDoc*>());
	};

	// IDoc * IDocIterator::toPrev()
	IDoc * toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function IDocIterator::toPrev");
		_obj.pushArg((IDocIterator*)this);
		return (_obj.callFunction<IDoc*>());
	};

	// IDoc * IDocIterator::current() const
	IDoc * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function IDocIterator::current");
		_obj.pushArg((IDocIterator*)this);
		return (_obj.callFunction<IDoc*>());
	};

	// void IDocIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function IDocIterator::release");
		_obj.pushArg((IDocIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

