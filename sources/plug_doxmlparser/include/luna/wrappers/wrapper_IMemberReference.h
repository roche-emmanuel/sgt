#ifndef _WRAPPERS_WRAPPER_IMEMBERREFERENCE_H_
#define _WRAPPERS_WRAPPER_IMEMBERREFERENCE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IMemberReference : public IMemberReference, public luna_wrapper_base {

public:
		

	~wrapper_IMemberReference() {
		logDEBUG3("Calling delete function for wrapper IMemberReference");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IMemberReference*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IMemberReference(lua_State* L, lua_Table* dum) 
		: IMemberReference(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IMemberReference*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// IMember * IMemberReference::member() const
	IMember * member() const {
		THROW_IF(!_obj.pushFunction("member"),"No implementation for abstract function IMemberReference::member");
		_obj.pushArg((IMemberReference*)this);
		return (_obj.callFunction<IMember*>());
	};

	// const IString * IMemberReference::name() const
	const IString * name() const {
		THROW_IF(!_obj.pushFunction("name"),"No implementation for abstract function IMemberReference::name");
		_obj.pushArg((IMemberReference*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMemberReference::scope() const
	const IString * scope() const {
		THROW_IF(!_obj.pushFunction("scope"),"No implementation for abstract function IMemberReference::scope");
		_obj.pushArg((IMemberReference*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMemberReference::protection() const
	const IString * protection() const {
		THROW_IF(!_obj.pushFunction("protection"),"No implementation for abstract function IMemberReference::protection");
		_obj.pushArg((IMemberReference*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMemberReference::virtualness() const
	const IString * virtualness() const {
		THROW_IF(!_obj.pushFunction("virtualness"),"No implementation for abstract function IMemberReference::virtualness");
		_obj.pushArg((IMemberReference*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IMemberReference::ambiguityScope() const
	const IString * ambiguityScope() const {
		THROW_IF(!_obj.pushFunction("ambiguityScope"),"No implementation for abstract function IMemberReference::ambiguityScope");
		_obj.pushArg((IMemberReference*)this);
		return (_obj.callFunction<IString*>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

