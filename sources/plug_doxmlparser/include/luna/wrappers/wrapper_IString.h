#ifndef _WRAPPERS_WRAPPER_ISTRING_H_
#define _WRAPPERS_WRAPPER_ISTRING_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <doxmlintf.h>

class wrapper_IString : public IString, public luna_wrapper_base {

public:
		

	~wrapper_IString() {
		logDEBUG3("Calling delete function for wrapper IString");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((IString*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_IString(lua_State* L, lua_Table* dum) 
		: IString(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((IString*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// const char * IString::latin1() const
	const char * latin1() const {
		THROW_IF(!_obj.pushFunction("latin1"),"No implementation for abstract function IString::latin1");
		_obj.pushArg((IString*)this);
		return (_obj.callFunction<const char*>());
	};

	// const char * IString::utf8() const
	const char * utf8() const {
		THROW_IF(!_obj.pushFunction("utf8"),"No implementation for abstract function IString::utf8");
		_obj.pushArg((IString*)this);
		return (_obj.callFunction<const char*>());
	};

	// unsigned short IString::unicodeCharAt(int index) const
	unsigned short unicodeCharAt(int index) const {
		THROW_IF(!_obj.pushFunction("unicodeCharAt"),"No implementation for abstract function IString::unicodeCharAt");
		_obj.pushArg((IString*)this);
		_obj.pushArg(index);
		return (_obj.callFunction<unsigned short>());
	};

	// bool IString::isEmpty() const
	bool isEmpty() const {
		THROW_IF(!_obj.pushFunction("isEmpty"),"No implementation for abstract function IString::isEmpty");
		_obj.pushArg((IString*)this);
		return (_obj.callFunction<bool>());
	};

	// int IString::length() const
	int length() const {
		THROW_IF(!_obj.pushFunction("length"),"No implementation for abstract function IString::length");
		_obj.pushArg((IString*)this);
		return (_obj.callFunction<int>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

