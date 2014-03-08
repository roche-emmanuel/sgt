#ifndef _WRAPPERS_WRAPPER_OSGGA_GUIACTIONADAPTER_H_
#define _WRAPPERS_WRAPPER_OSGGA_GUIACTIONADAPTER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgGA/GUIActionAdapter>

class wrapper_osgGA_GUIActionAdapter : public osgGA::GUIActionAdapter, public luna_wrapper_base {

public:
		

	~wrapper_osgGA_GUIActionAdapter() {
		logDEBUG3("Calling delete function for wrapper osgGA_GUIActionAdapter");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgGA::GUIActionAdapter*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgGA_GUIActionAdapter(lua_State* L, lua_Table* dum) 
		: osgGA::GUIActionAdapter(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgGA::GUIActionAdapter*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// osg::View * osgGA::GUIActionAdapter::asView()
	osg::View * asView() {
		if(_obj.pushFunction("asView")) {
			_obj.pushArg((osgGA::GUIActionAdapter*)this);
			return (_obj.callFunction<osg::View*>());
		}

		return GUIActionAdapter::asView();
	};

	// void osgGA::GUIActionAdapter::requestRedraw()
	void requestRedraw() {
		THROW_IF(!_obj.pushFunction("requestRedraw"),"No implementation for abstract function osgGA::GUIActionAdapter::requestRedraw");
		_obj.pushArg((osgGA::GUIActionAdapter*)this);
		return (_obj.callFunction<void>());
	};

	// void osgGA::GUIActionAdapter::requestContinuousUpdate(bool needed = true)
	void requestContinuousUpdate(bool needed = true) {
		THROW_IF(!_obj.pushFunction("requestContinuousUpdate"),"No implementation for abstract function osgGA::GUIActionAdapter::requestContinuousUpdate");
		_obj.pushArg((osgGA::GUIActionAdapter*)this);
		_obj.pushArg(needed);
		return (_obj.callFunction<void>());
	};

	// void osgGA::GUIActionAdapter::requestWarpPointer(float x, float y)
	void requestWarpPointer(float x, float y) {
		THROW_IF(!_obj.pushFunction("requestWarpPointer"),"No implementation for abstract function osgGA::GUIActionAdapter::requestWarpPointer");
		_obj.pushArg((osgGA::GUIActionAdapter*)this);
		_obj.pushArg(x);
		_obj.pushArg(y);
		return (_obj.callFunction<void>());
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

