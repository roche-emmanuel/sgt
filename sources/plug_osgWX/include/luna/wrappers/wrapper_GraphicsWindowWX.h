#ifndef _WRAPPERS_WRAPPER_GRAPHICSWINDOWWX_H_
#define _WRAPPERS_WRAPPER_GRAPHICSWINDOWWX_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <GraphicsWindowWX.h>

class wrapper_GraphicsWindowWX : public GraphicsWindowWX, public luna_wrapper_base {

public:
		

	~wrapper_GraphicsWindowWX() {
		logDEBUG3("Calling delete function for wrapper GraphicsWindowWX");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((GraphicsWindowWX*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_GraphicsWindowWX(lua_State* L, lua_Table* dum, wxGLCanvas * canvas, wxGLContext * context) 
		: GraphicsWindowWX(canvas, context), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((GraphicsWindowWX*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// bool GraphicsWindowWX::valid() const
	bool valid() const {
		if(_obj.pushFunction("valid")) {
			_obj.pushArg((GraphicsWindowWX*)this);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindowWX::valid();
	};

	// bool GraphicsWindowWX::realizeImplementation()
	bool realizeImplementation() {
		if(_obj.pushFunction("realizeImplementation")) {
			_obj.pushArg((GraphicsWindowWX*)this);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindowWX::realizeImplementation();
	};

	// bool GraphicsWindowWX::isRealizedImplementation() const
	bool isRealizedImplementation() const {
		if(_obj.pushFunction("isRealizedImplementation")) {
			_obj.pushArg((GraphicsWindowWX*)this);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindowWX::isRealizedImplementation();
	};

	// void GraphicsWindowWX::closeImplementation()
	void closeImplementation() {
		if(_obj.pushFunction("closeImplementation")) {
			_obj.pushArg((GraphicsWindowWX*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowWX::closeImplementation();
	};

	// bool GraphicsWindowWX::releaseContextImplementation()
	bool releaseContextImplementation() {
		if(_obj.pushFunction("releaseContextImplementation")) {
			_obj.pushArg((GraphicsWindowWX*)this);
			return (_obj.callFunction<bool>());
		}

		return GraphicsWindowWX::releaseContextImplementation();
	};

	// void GraphicsWindowWX::invalidate()
	void invalidate() {
		if(_obj.pushFunction("invalidate")) {
			_obj.pushArg((GraphicsWindowWX*)this);
			return (_obj.callFunction<void>());
		}

		return GraphicsWindowWX::invalidate();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

