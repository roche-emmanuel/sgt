#ifndef _WRAPPERS_WRAPPER_OSG_VIEW_SLAVE_H_
#define _WRAPPERS_WRAPPER_OSG_VIEW_SLAVE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/View>

class wrapper_osg_View_Slave : public osg::View::Slave, public luna_wrapper_base {

public:
		

	~wrapper_osg_View_Slave() {
		logDEBUG3("Calling delete function for wrapper osg_View_Slave");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::View::Slave*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_View_Slave(lua_State* L, lua_Table* dum, bool useMastersSceneData = true) 
		: osg::View::Slave(useMastersSceneData), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::View::Slave*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_View_Slave(lua_State* L, lua_Table* dum, osg::Camera * camera, const osg::Matrixd & projectionOffset, const osg::Matrixd & viewOffset, bool useMastersSceneData = true) 
		: osg::View::Slave(camera, projectionOffset, viewOffset, useMastersSceneData), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::View::Slave*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_osg_View_Slave(lua_State* L, lua_Table* dum, const osg::View::Slave & rhs) 
		: osg::View::Slave(rhs), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::View::Slave*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::View::Slave::updateSlaveImplementation(osg::View & view)
	void updateSlaveImplementation(osg::View & view) {
		if(_obj.pushFunction("updateSlaveImplementation")) {
			_obj.pushArg((osg::View::Slave*)this);
			_obj.pushArg(&view);
			return (_obj.callFunction<void>());
		}

		return Slave::updateSlaveImplementation(view);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

