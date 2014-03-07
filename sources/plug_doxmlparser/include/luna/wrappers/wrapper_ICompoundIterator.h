#ifndef _WRAPPERS_WRAPPER_ICOMPOUNDITERATOR_H_
#define _WRAPPERS_WRAPPER_ICOMPOUNDITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_ICompoundIterator : public ICompoundIterator, public luna_wrapper_base {

public:
		

	~wrapper_ICompoundIterator() {
		logDEBUG3("Calling delete function for wrapper ICompoundIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ICompoundIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ICompoundIterator(lua_State* L, lua_Table* dum) 
		: ICompoundIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ICompoundIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void ICompoundIterator::toFirst()
	void toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function ICompoundIterator::toFirst");
		_obj.pushArg((ICompoundIterator*)this);
		return (_obj.callFunction<void>());
	};

	// void ICompoundIterator::toLast()
	void toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function ICompoundIterator::toLast");
		_obj.pushArg((ICompoundIterator*)this);
		return (_obj.callFunction<void>());
	};

	// void ICompoundIterator::toNext()
	void toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function ICompoundIterator::toNext");
		_obj.pushArg((ICompoundIterator*)this);
		return (_obj.callFunction<void>());
	};

	// void ICompoundIterator::toPrev()
	void toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function ICompoundIterator::toPrev");
		_obj.pushArg((ICompoundIterator*)this);
		return (_obj.callFunction<void>());
	};

	// ICompound * ICompoundIterator::current() const
	ICompound * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function ICompoundIterator::current");
		_obj.pushArg((ICompoundIterator*)this);
		return (_obj.callFunction<ICompound*>());
	};

	// void ICompoundIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function ICompoundIterator::release");
		_obj.pushArg((ICompoundIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

