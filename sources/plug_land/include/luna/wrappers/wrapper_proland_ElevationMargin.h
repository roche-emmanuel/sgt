#ifndef _WRAPPERS_WRAPPER_PROLAND_ELEVATIONMARGIN_H_
#define _WRAPPERS_WRAPPER_PROLAND_ELEVATIONMARGIN_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/dem/ElevationMargin.h>

class wrapper_proland_ElevationMargin : public proland::ElevationMargin, public luna_wrapper_base {

public:
		

	~wrapper_proland_ElevationMargin() {
		logDEBUG3("Calling delete function for wrapper proland_ElevationMargin");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ElevationMargin*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ElevationMargin(lua_State* L, lua_Table* dum) 
		: proland::ElevationMargin(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ElevationMargin*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_ElevationMargin(lua_State* L, lua_Table* dum, int samplesPerTile, float borderFactor) 
		: proland::ElevationMargin(samplesPerTile, borderFactor), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ElevationMargin*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// double proland::ElevationMargin::getMargin(double clipSize)
	double getMargin(double clipSize) {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((proland::ElevationMargin*)this);
			_obj.pushArg(clipSize);
			return (_obj.callFunction<double>());
		}

		return ElevationMargin::getMargin(clipSize);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

