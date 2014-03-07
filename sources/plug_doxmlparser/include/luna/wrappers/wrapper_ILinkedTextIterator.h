#ifndef _WRAPPERS_WRAPPER_ILINKEDTEXTITERATOR_H_
#define _WRAPPERS_WRAPPER_ILINKEDTEXTITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_ILinkedTextIterator : public ILinkedTextIterator, public luna_wrapper_base {

public:
		

	~wrapper_ILinkedTextIterator() {
		logDEBUG3("Calling delete function for wrapper ILinkedTextIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ILinkedTextIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ILinkedTextIterator(lua_State* L, lua_Table* dum) 
		: ILinkedTextIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ILinkedTextIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// ILinkedText * ILinkedTextIterator::toFirst()
	ILinkedText * toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function ILinkedTextIterator::toFirst");
		_obj.pushArg((ILinkedTextIterator*)this);
		return (_obj.callFunction<ILinkedText*>());
	};

	// ILinkedText * ILinkedTextIterator::toLast()
	ILinkedText * toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function ILinkedTextIterator::toLast");
		_obj.pushArg((ILinkedTextIterator*)this);
		return (_obj.callFunction<ILinkedText*>());
	};

	// ILinkedText * ILinkedTextIterator::toNext()
	ILinkedText * toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function ILinkedTextIterator::toNext");
		_obj.pushArg((ILinkedTextIterator*)this);
		return (_obj.callFunction<ILinkedText*>());
	};

	// ILinkedText * ILinkedTextIterator::toPrev()
	ILinkedText * toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function ILinkedTextIterator::toPrev");
		_obj.pushArg((ILinkedTextIterator*)this);
		return (_obj.callFunction<ILinkedText*>());
	};

	// ILinkedText * ILinkedTextIterator::current() const
	ILinkedText * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function ILinkedTextIterator::current");
		_obj.pushArg((ILinkedTextIterator*)this);
		return (_obj.callFunction<ILinkedText*>());
	};

	// void ILinkedTextIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function ILinkedTextIterator::release");
		_obj.pushArg((ILinkedTextIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

