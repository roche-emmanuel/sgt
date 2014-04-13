#ifndef _WRAPPERS_WRAPPER_LAND_PROLANDDRAWABLE_H_
#define _WRAPPERS_WRAPPER_LAND_PROLANDDRAWABLE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <plug_extensions.h>

class wrapper_land_ProlandDrawable : public land::ProlandDrawable, public luna_wrapper_base {

public:
		

	~wrapper_land_ProlandDrawable() {
		logDEBUG3("Calling delete function for wrapper land_ProlandDrawable");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((land::ProlandDrawable*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_land_ProlandDrawable(lua_State* L, lua_Table* dum) 
		: land::ProlandDrawable(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((land::ProlandDrawable*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// osg::BoundingBox land::ProlandDrawable::computeBound() const
	osg::BoundingBox computeBound() const {
		if(_obj.pushFunction("computeBound")) {
			_obj.pushArg((land::ProlandDrawable*)this);
			return (_obj.callFunction<osg::BoundingBox>());
		}

		return ProlandDrawable::computeBound();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

