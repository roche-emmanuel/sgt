#ifndef _WRAPPERS_WRAPPER_IPARAMITERATOR_H_
#define _WRAPPERS_WRAPPER_IPARAMITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IParamIterator : public IParamIterator, public luna_wrapper_base {

public:
		

	~wrapper_IParamIterator() {
		logDEBUG3("Calling delete function for wrapper IParamIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IParamIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IParamIterator(lua_State* L, lua_Table* dum) 
		: IParamIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IParamIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IParam * IParamIterator::toFirst()
	IParam * toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function IParamIterator::toFirst");
		_obj.pushArg((IParamIterator*)this);
		return (_obj.callFunction<IParam*>());
	};

	// IParam * IParamIterator::toLast()
	IParam * toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function IParamIterator::toLast");
		_obj.pushArg((IParamIterator*)this);
		return (_obj.callFunction<IParam*>());
	};

	// IParam * IParamIterator::toNext()
	IParam * toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function IParamIterator::toNext");
		_obj.pushArg((IParamIterator*)this);
		return (_obj.callFunction<IParam*>());
	};

	// IParam * IParamIterator::toPrev()
	IParam * toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function IParamIterator::toPrev");
		_obj.pushArg((IParamIterator*)this);
		return (_obj.callFunction<IParam*>());
	};

	// IParam * IParamIterator::current() const
	IParam * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function IParamIterator::current");
		_obj.pushArg((IParamIterator*)this);
		return (_obj.callFunction<IParam*>());
	};

	// void IParamIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function IParamIterator::release");
		_obj.pushArg((IParamIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

