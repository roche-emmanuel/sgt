#ifndef _WRAPPERS_WRAPPER_OSGUTIL_OPTIMIZER_H_
#define _WRAPPERS_WRAPPER_OSGUTIL_OPTIMIZER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osgUtil/Optimizer>

class wrapper_osgUtil_Optimizer : public osgUtil::Optimizer, public luna_wrapper_base {

public:
		

	~wrapper_osgUtil_Optimizer() {
		logDEBUG3("Calling delete function for wrapper osgUtil_Optimizer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osgUtil::Optimizer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osgUtil_Optimizer(lua_State* L, lua_Table* dum) 
		: osgUtil::Optimizer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osgUtil::Optimizer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osgUtil::Optimizer::optimize(osg::Node * node, unsigned int options)
	void optimize(osg::Node * node, unsigned int options) {
		if(_obj.pushFunction("optimize")) {
			_obj.pushArg((osgUtil::Optimizer*)this);
			_obj.pushArg(node);
			_obj.pushArg(options);
			return (_obj.callFunction<void>());
		}

		return Optimizer::optimize(node, options);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

