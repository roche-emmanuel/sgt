#ifndef _WRAPPERS_WRAPPER_IINCLUDE_H_
#define _WRAPPERS_WRAPPER_IINCLUDE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IInclude : public IInclude, public luna_wrapper_base {

public:
		

	~wrapper_IInclude() {
		logDEBUG3("Calling delete function for wrapper IInclude");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IInclude*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IInclude(lua_State* L, lua_Table* dum) 
		: IInclude(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IInclude*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// const IString * IInclude::name() const
	const IString * name() const {
		THROW_IF(!_obj.pushFunction("name"),"No implementation for abstract function IInclude::name");
		_obj.pushArg((IInclude*)this);
		return (_obj.callFunction<IString*>());
	};

	// const IString * IInclude::refId() const
	const IString * refId() const {
		THROW_IF(!_obj.pushFunction("refId"),"No implementation for abstract function IInclude::refId");
		_obj.pushArg((IInclude*)this);
		return (_obj.callFunction<IString*>());
	};

	// bool IInclude::isLocal() const
	bool isLocal() const {
		THROW_IF(!_obj.pushFunction("isLocal"),"No implementation for abstract function IInclude::isLocal");
		_obj.pushArg((IInclude*)this);
		return (_obj.callFunction<bool>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

