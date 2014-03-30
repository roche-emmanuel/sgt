#ifndef _WRAPPERS_WRAPPER_IMEMBERREFERENCEITERATOR_H_
#define _WRAPPERS_WRAPPER_IMEMBERREFERENCEITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IMemberReferenceIterator : public IMemberReferenceIterator, public luna_wrapper_base {

public:
		

	~wrapper_IMemberReferenceIterator() {
		logDEBUG3("Calling delete function for wrapper IMemberReferenceIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IMemberReferenceIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IMemberReferenceIterator(lua_State* L, lua_Table* dum) 
		: IMemberReferenceIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IMemberReferenceIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IMemberReference * IMemberReferenceIterator::toFirst()
	IMemberReference * toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function IMemberReferenceIterator::toFirst");
		_obj.pushArg((IMemberReferenceIterator*)this);
		return (_obj.callFunction<IMemberReference*>());
	};

	// IMemberReference * IMemberReferenceIterator::toLast()
	IMemberReference * toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function IMemberReferenceIterator::toLast");
		_obj.pushArg((IMemberReferenceIterator*)this);
		return (_obj.callFunction<IMemberReference*>());
	};

	// IMemberReference * IMemberReferenceIterator::toNext()
	IMemberReference * toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function IMemberReferenceIterator::toNext");
		_obj.pushArg((IMemberReferenceIterator*)this);
		return (_obj.callFunction<IMemberReference*>());
	};

	// IMemberReference * IMemberReferenceIterator::toPrev()
	IMemberReference * toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function IMemberReferenceIterator::toPrev");
		_obj.pushArg((IMemberReferenceIterator*)this);
		return (_obj.callFunction<IMemberReference*>());
	};

	// IMemberReference * IMemberReferenceIterator::current() const
	IMemberReference * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function IMemberReferenceIterator::current");
		_obj.pushArg((IMemberReferenceIterator*)this);
		return (_obj.callFunction<IMemberReference*>());
	};

	// void IMemberReferenceIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function IMemberReferenceIterator::release");
		_obj.pushArg((IMemberReferenceIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

