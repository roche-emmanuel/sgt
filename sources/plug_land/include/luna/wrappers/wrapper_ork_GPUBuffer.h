#ifndef _WRAPPERS_WRAPPER_ORK_GPUBUFFER_H_
#define _WRAPPERS_WRAPPER_ORK_GPUBUFFER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/GPUBuffer.h>

class wrapper_ork_GPUBuffer : public ork::GPUBuffer, public luna_wrapper_base {

public:
		

	~wrapper_ork_GPUBuffer() {
		logDEBUG3("Calling delete function for wrapper ork_GPUBuffer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::GPUBuffer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_GPUBuffer(lua_State* L, lua_Table* dum) 
		: ork::GPUBuffer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::GPUBuffer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::GPUBuffer*)this);
			return (_obj.callFunction<void>());
		}

		return GPUBuffer::doRelease();
	};

	// void ork::GPUBuffer::bind(int target) const
	void bind(int target) const {
		if(_obj.pushFunction("bind")) {
			_obj.pushArg((ork::GPUBuffer*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return GPUBuffer::bind(target);
	};

	// void * ork::GPUBuffer::data(int offset) const
	void * data(int offset) const {
		if(_obj.pushFunction("data")) {
			_obj.pushArg((ork::GPUBuffer*)this);
			_obj.pushArg(offset);
			return (_obj.callFunction<void*>());
		}

		return GPUBuffer::data(offset);
	};

	// void ork::GPUBuffer::unbind(int target) const
	void unbind(int target) const {
		if(_obj.pushFunction("unbind")) {
			_obj.pushArg((ork::GPUBuffer*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return GPUBuffer::unbind(target);
	};

	// void ork::GPUBuffer::dirty() const
	void dirty() const {
		if(_obj.pushFunction("dirty")) {
			_obj.pushArg((ork::GPUBuffer*)this);
			return (_obj.callFunction<void>());
		}

		return GPUBuffer::dirty();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::GPUBuffer*)this);
			return (_obj.callFunction<const char*>());
		}

		return GPUBuffer::toString();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

