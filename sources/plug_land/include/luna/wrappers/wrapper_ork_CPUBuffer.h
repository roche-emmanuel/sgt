#ifndef _WRAPPERS_WRAPPER_ORK_CPUBUFFER_H_
#define _WRAPPERS_WRAPPER_ORK_CPUBUFFER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/CPUBuffer.h>

class wrapper_ork_CPUBuffer : public ork::CPUBuffer, public luna_wrapper_base {

public:
		

	~wrapper_ork_CPUBuffer() {
		logDEBUG3("Calling delete function for wrapper ork_CPUBuffer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::CPUBuffer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_CPUBuffer(lua_State* L, lua_Table* dum, const void * data = 0) 
		: ork::CPUBuffer(data), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::CPUBuffer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::CPUBuffer*)this);
			return (_obj.callFunction<void>());
		}

		return CPUBuffer::doRelease();
	};

	// void ork::CPUBuffer::bind(int target) const
	void bind(int target) const {
		if(_obj.pushFunction("bind")) {
			_obj.pushArg((ork::CPUBuffer*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return CPUBuffer::bind(target);
	};

	// void * ork::CPUBuffer::data(int offset) const
	void * data(int offset) const {
		if(_obj.pushFunction("data")) {
			_obj.pushArg((ork::CPUBuffer*)this);
			_obj.pushArg(offset);
			return (_obj.callFunction<void*>());
		}

		return CPUBuffer::data(offset);
	};

	// void ork::CPUBuffer::unbind(int target) const
	void unbind(int target) const {
		if(_obj.pushFunction("unbind")) {
			_obj.pushArg((ork::CPUBuffer*)this);
			_obj.pushArg(target);
			return (_obj.callFunction<void>());
		}

		return CPUBuffer::unbind(target);
	};

	// void ork::CPUBuffer::dirty() const
	void dirty() const {
		if(_obj.pushFunction("dirty")) {
			_obj.pushArg((ork::CPUBuffer*)this);
			return (_obj.callFunction<void>());
		}

		return CPUBuffer::dirty();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::CPUBuffer*)this);
			return (_obj.callFunction<const char*>());
		}

		return CPUBuffer::toString();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

