#ifndef _WRAPPERS_WRAPPER_ORK_ATTRIBUTEBUFFER_H_
#define _WRAPPERS_WRAPPER_ORK_ATTRIBUTEBUFFER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/AttributeBuffer.h>

class wrapper_ork_AttributeBuffer : public ork::AttributeBuffer, public luna_wrapper_base {

public:
		

	~wrapper_ork_AttributeBuffer() {
		logDEBUG3("Calling delete function for wrapper ork_AttributeBuffer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::AttributeBuffer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_AttributeBuffer(lua_State* L, lua_Table* dum, int index, int size, ork::AttributeType t, bool norm, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0) 
		: ork::AttributeBuffer(index, size, t, norm, b, stride, offset, divisor), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::AttributeBuffer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_AttributeBuffer(lua_State* L, lua_Table* dum, int index, int size, ork::AttributeType t, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0) 
		: ork::AttributeBuffer(index, size, t, b, stride, offset, divisor), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::AttributeBuffer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_ork_AttributeBuffer(lua_State* L, lua_Table* dum, int index, int size, ork::ptr< ork::Buffer > b, int stride = 0, int offset = 0, int divisor = 0) 
		: ork::AttributeBuffer(index, size, b, stride, offset, divisor), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::AttributeBuffer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::AttributeBuffer*)this);
			return (_obj.callFunction<void>());
		}

		return AttributeBuffer::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::AttributeBuffer*)this);
			return (_obj.callFunction<const char*>());
		}

		return AttributeBuffer::toString();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

