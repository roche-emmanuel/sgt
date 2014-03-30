#ifndef _WRAPPERS_WRAPPER_ISECTIONITERATOR_H_
#define _WRAPPERS_WRAPPER_ISECTIONITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_ISectionIterator : public ISectionIterator, public luna_wrapper_base {

public:
		

	~wrapper_ISectionIterator() {
		logDEBUG3("Calling delete function for wrapper ISectionIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ISectionIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ISectionIterator(lua_State* L, lua_Table* dum) 
		: ISectionIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ISectionIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ISection * ISectionIterator::toFirst()
	ISection * toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function ISectionIterator::toFirst");
		_obj.pushArg((ISectionIterator*)this);
		return (_obj.callFunction<ISection*>());
	};

	// ISection * ISectionIterator::toLast()
	ISection * toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function ISectionIterator::toLast");
		_obj.pushArg((ISectionIterator*)this);
		return (_obj.callFunction<ISection*>());
	};

	// ISection * ISectionIterator::toNext()
	ISection * toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function ISectionIterator::toNext");
		_obj.pushArg((ISectionIterator*)this);
		return (_obj.callFunction<ISection*>());
	};

	// ISection * ISectionIterator::toPrev()
	ISection * toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function ISectionIterator::toPrev");
		_obj.pushArg((ISectionIterator*)this);
		return (_obj.callFunction<ISection*>());
	};

	// ISection * ISectionIterator::current() const
	ISection * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function ISectionIterator::current");
		_obj.pushArg((ISectionIterator*)this);
		return (_obj.callFunction<ISection*>());
	};

	// void ISectionIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function ISectionIterator::release");
		_obj.pushArg((ISectionIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

