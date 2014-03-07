#ifndef _WRAPPERS_WRAPPER_IEDGELABELITERATOR_H_
#define _WRAPPERS_WRAPPER_IEDGELABELITERATOR_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IEdgeLabelIterator : public IEdgeLabelIterator, public luna_wrapper_base {

public:
		

	~wrapper_IEdgeLabelIterator() {
		logDEBUG3("Calling delete function for wrapper IEdgeLabelIterator");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IEdgeLabelIterator*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IEdgeLabelIterator(lua_State* L, lua_Table* dum) 
		: IEdgeLabelIterator(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IEdgeLabelIterator*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IEdgeLabel * IEdgeLabelIterator::toFirst()
	IEdgeLabel * toFirst() {
		THROW_IF(!_obj.pushFunction("toFirst"),"No implementation for abstract function IEdgeLabelIterator::toFirst");
		_obj.pushArg((IEdgeLabelIterator*)this);
		return (_obj.callFunction<IEdgeLabel*>());
	};

	// IEdgeLabel * IEdgeLabelIterator::toLast()
	IEdgeLabel * toLast() {
		THROW_IF(!_obj.pushFunction("toLast"),"No implementation for abstract function IEdgeLabelIterator::toLast");
		_obj.pushArg((IEdgeLabelIterator*)this);
		return (_obj.callFunction<IEdgeLabel*>());
	};

	// IEdgeLabel * IEdgeLabelIterator::toNext()
	IEdgeLabel * toNext() {
		THROW_IF(!_obj.pushFunction("toNext"),"No implementation for abstract function IEdgeLabelIterator::toNext");
		_obj.pushArg((IEdgeLabelIterator*)this);
		return (_obj.callFunction<IEdgeLabel*>());
	};

	// IEdgeLabel * IEdgeLabelIterator::toPrev()
	IEdgeLabel * toPrev() {
		THROW_IF(!_obj.pushFunction("toPrev"),"No implementation for abstract function IEdgeLabelIterator::toPrev");
		_obj.pushArg((IEdgeLabelIterator*)this);
		return (_obj.callFunction<IEdgeLabel*>());
	};

	// IEdgeLabel * IEdgeLabelIterator::current() const
	IEdgeLabel * current() const {
		THROW_IF(!_obj.pushFunction("current"),"No implementation for abstract function IEdgeLabelIterator::current");
		_obj.pushArg((IEdgeLabelIterator*)this);
		return (_obj.callFunction<IEdgeLabel*>());
	};

	// void IEdgeLabelIterator::release()
	void release() {
		THROW_IF(!_obj.pushFunction("release"),"No implementation for abstract function IEdgeLabelIterator::release");
		_obj.pushArg((IEdgeLabelIterator*)this);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

