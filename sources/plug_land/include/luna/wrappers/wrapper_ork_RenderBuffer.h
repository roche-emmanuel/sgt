#ifndef _WRAPPERS_WRAPPER_ORK_RENDERBUFFER_H_
#define _WRAPPERS_WRAPPER_ORK_RENDERBUFFER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <ork/render/RenderBuffer.h>

class wrapper_ork_RenderBuffer : public ork::RenderBuffer, public luna_wrapper_base {

public:
		

	~wrapper_ork_RenderBuffer() {
		logDEBUG3("Calling delete function for wrapper ork_RenderBuffer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((ork::RenderBuffer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_ork_RenderBuffer(lua_State* L, lua_Table* dum, ork::RenderBuffer::RenderBufferFormat type, int width, int height, int samples = 0) 
		: ork::RenderBuffer(type, width, height, samples), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((ork::RenderBuffer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((ork::RenderBuffer*)this);
			return (_obj.callFunction<void>());
		}

		return RenderBuffer::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((ork::RenderBuffer*)this);
			return (_obj.callFunction<const char*>());
		}

		return RenderBuffer::toString();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif
