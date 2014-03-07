#ifndef _WRAPPERS_WRAPPER_IINCLUDEITERATOR_H_
#define _WRAPPERS_WRAPPER_IINCLUDEITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IIncludeIterator : public IIncludeIterator, public luna_wrapper_base {

public:
		

	~wrapper_IIncludeIterator() {
		logDEBUG3("Calling delete function for wrapper IIncludeIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IIncludeIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IIncludeIterator(lua_State* L, lua_Table* dum) 
		: IIncludeIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IIncludeIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IInclude * IIncludeIterator::toFirst()
	IInclude * toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function IIncludeIterator::toFirst");
		_obj.pushArg((IIncludeIterator*)this);
		return (_obj.callFunction<IInclude*>());
	};

	// IInclude * IIncludeIterator::toLast()
	IInclude * toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function IIncludeIterator::toLast");
		_obj.pushArg((IIncludeIterator*)this);
		return (_obj.callFunction<IInclude*>());
	};

	// IInclude * IIncludeIterator::toNext()
	IInclude * toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function IIncludeIterator::toNext");
		_obj.pushArg((IIncludeIterator*)this);
		return (_obj.callFunction<IInclude*>());
	};

	// IInclude * IIncludeIterator::toPrev()
	IInclude * toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function IIncludeIterator::toPrev");
		_obj.pushArg((IIncludeIterator*)this);
		return (_obj.callFunction<IInclude*>());
	};

	// IInclude * IIncludeIterator::current() const
	IInclude * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function IIncludeIterator::current");
		_obj.pushArg((IIncludeIterator*)this);
		return (_obj.callFunction<IInclude*>());
	};

	// void IIncludeIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function IIncludeIterator::release");
		_obj.pushArg((IIncludeIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

