#ifndef _WRAPPERS_WRAPPER_ORK_BUFFER_H_
#define _WRAPPERS_WRAPPER_ORK_BUFFER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/Buffer.h>

class wrapper_ork_Buffer : public ork::Buffer, public luna_wrapper_base {

public:
		

	~wrapper_ork_Buffer() {
		logDEBUG3("Calling delete function for wrapper ork_Buffer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::Buffer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_Buffer(lua_State* L, lua_Table* dum) 
		: ork::Buffer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::Buffer*)this);
			_obj.callFunction<void>();
		}
	};

private:
	// Private virtual methods:
	// void ork::Buffer::bind(int target) const
	void bind(int target) const {
		THROW_IF(!_obj.pushFunction("bind"),"No implementation for abstract function ork::Buffer::bind");
		_obj.pushArg((ork::Buffer*)this);
		_obj.pushArg(target);
		return (_obj.callFunction<void>());
	};

	// void * ork::Buffer::data(int offset) const
	void * data(int offset) const {
		THROW_IF(!_obj.pushFunction("data"),"No implementation for abstract function ork::Buffer::data");
		_obj.pushArg((ork::Buffer*)this);
		_obj.pushArg(offset);
		return (_obj.callFunction<void*>());
	};

	// void ork::Buffer::unbind(int target) const
	void unbind(int target) const {
		THROW_IF(!_obj.pushFunction("unbind"),"No implementation for abstract function ork::Buffer::unbind");
		_obj.pushArg((ork::Buffer*)this);
		_obj.pushArg(target);
		return (_obj.callFunction<void>());
	};

	// void ork::Buffer::dirty() const
	void dirty() const {
		THROW_IF(!_obj.pushFunction("dirty"),"No implementation for abstract function ork::Buffer::dirty");
		_obj.pushArg((ork::Buffer*)this);
		return (_obj.callFunction<void>());
	};

protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::Buffer*)this);
			return (_obj.callFunction<void>());
		}

		return Buffer::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::Buffer*)this);
			return (_obj.callFunction<const char*>());
		}

		return Buffer::toString();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

