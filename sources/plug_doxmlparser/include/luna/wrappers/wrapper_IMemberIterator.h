#ifndef _WRAPPERS_WRAPPER_IMEMBERITERATOR_H_
#define _WRAPPERS_WRAPPER_IMEMBERITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IMemberIterator : public IMemberIterator, public luna_wrapper_base {

public:
		

	~wrapper_IMemberIterator() {
		logDEBUG3("Calling delete function for wrapper IMemberIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IMemberIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IMemberIterator(lua_State* L, lua_Table* dum) 
		: IMemberIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IMemberIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IMember * IMemberIterator::toFirst()
	IMember * toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function IMemberIterator::toFirst");
		_obj.pushArg((IMemberIterator*)this);
		return (_obj.callFunction<IMember*>());
	};

	// IMember * IMemberIterator::toLast()
	IMember * toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function IMemberIterator::toLast");
		_obj.pushArg((IMemberIterator*)this);
		return (_obj.callFunction<IMember*>());
	};

	// IMember * IMemberIterator::toNext()
	IMember * toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function IMemberIterator::toNext");
		_obj.pushArg((IMemberIterator*)this);
		return (_obj.callFunction<IMember*>());
	};

	// IMember * IMemberIterator::toPrev()
	IMember * toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function IMemberIterator::toPrev");
		_obj.pushArg((IMemberIterator*)this);
		return (_obj.callFunction<IMember*>());
	};

	// IMember * IMemberIterator::current() const
	IMember * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function IMemberIterator::current");
		_obj.pushArg((IMemberIterator*)this);
		return (_obj.callFunction<IMember*>());
	};

	// void IMemberIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function IMemberIterator::release");
		_obj.pushArg((IMemberIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

