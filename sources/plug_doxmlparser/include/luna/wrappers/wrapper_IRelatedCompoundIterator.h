#ifndef _WRAPPERS_WRAPPER_IRELATEDCOMPOUNDITERATOR_H_
#define _WRAPPERS_WRAPPER_IRELATEDCOMPOUNDITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IRelatedCompoundIterator : public IRelatedCompoundIterator, public luna_wrapper_base {

public:
		

	~wrapper_IRelatedCompoundIterator() {
		logDEBUG3("Calling delete function for wrapper IRelatedCompoundIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IRelatedCompoundIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IRelatedCompoundIterator(lua_State* L, lua_Table* dum) 
		: IRelatedCompoundIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IRelatedCompoundIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IRelatedCompound * IRelatedCompoundIterator::toFirst()
	IRelatedCompound * toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function IRelatedCompoundIterator::toFirst");
		_obj.pushArg((IRelatedCompoundIterator*)this);
		return (_obj.callFunction<IRelatedCompound*>());
	};

	// IRelatedCompound * IRelatedCompoundIterator::toLast()
	IRelatedCompound * toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function IRelatedCompoundIterator::toLast");
		_obj.pushArg((IRelatedCompoundIterator*)this);
		return (_obj.callFunction<IRelatedCompound*>());
	};

	// IRelatedCompound * IRelatedCompoundIterator::toNext()
	IRelatedCompound * toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function IRelatedCompoundIterator::toNext");
		_obj.pushArg((IRelatedCompoundIterator*)this);
		return (_obj.callFunction<IRelatedCompound*>());
	};

	// IRelatedCompound * IRelatedCompoundIterator::toPrev()
	IRelatedCompound * toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function IRelatedCompoundIterator::toPrev");
		_obj.pushArg((IRelatedCompoundIterator*)this);
		return (_obj.callFunction<IRelatedCompound*>());
	};

	// IRelatedCompound * IRelatedCompoundIterator::current() const
	IRelatedCompound * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function IRelatedCompoundIterator::current");
		_obj.pushArg((IRelatedCompoundIterator*)this);
		return (_obj.callFunction<IRelatedCompound*>());
	};

	// void IRelatedCompoundIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function IRelatedCompoundIterator::release");
		_obj.pushArg((IRelatedCompoundIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

