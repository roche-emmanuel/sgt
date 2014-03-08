#ifndef _WRAPPERS_WRAPPER_OSG_OBSERVER_H_
#define _WRAPPERS_WRAPPER_OSG_OBSERVER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <osg/Observer>

class wrapper_osg_Observer : public osg::Observer, public luna_wrapper_base {

public:
		

	~wrapper_osg_Observer() {
		logDEBUG3("Calling delete function for wrapper osg_Observer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((osg::Observer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_osg_Observer(lua_State* L, lua_Table* dum) 
		: osg::Observer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((osg::Observer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// void osg::Observer::objectDeleted(void * arg1)
	void objectDeleted(void * arg1) {
		if(_obj.pushFunction("objectDeleted")) {
			_obj.pushArg((osg::Observer*)this);
			_obj.pushArg(arg1);
			return (_obj.callFunction<void>());
		}

		return Observer::objectDeleted(arg1);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

