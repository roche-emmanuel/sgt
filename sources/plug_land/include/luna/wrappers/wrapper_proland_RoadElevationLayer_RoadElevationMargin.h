#ifndef _WRAPPERS_WRAPPER_PROLAND_ROADELEVATIONLAYER_ROADELEVATIONMARGIN_H_
#define _WRAPPERS_WRAPPER_PROLAND_ROADELEVATIONLAYER_ROADELEVATIONMARGIN_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/dem/RoadElevationLayer.h>

class wrapper_proland_RoadElevationLayer_RoadElevationMargin : public proland::RoadElevationLayer::RoadElevationMargin, public luna_wrapper_base {

public:
		

	~wrapper_proland_RoadElevationLayer_RoadElevationMargin() {
		logDEBUG3("Calling delete function for wrapper proland_RoadElevationLayer_RoadElevationMargin");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::RoadElevationLayer::RoadElevationMargin*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_RoadElevationLayer_RoadElevationMargin(lua_State* L, lua_Table* dum, int samplesPerTile, float borderFactor) 
		: proland::RoadElevationLayer::RoadElevationMargin(samplesPerTile, borderFactor), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::RoadElevationLayer::RoadElevationMargin*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// double proland::RoadElevationLayer::RoadElevationMargin::getMargin(double clipSize, proland::CurvePtr p)
	double getMargin(double clipSize, proland::CurvePtr p) {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((proland::RoadElevationLayer::RoadElevationMargin*)this);
			_obj.pushArg(clipSize);
			_obj.pushArg(&p);
			return (_obj.callFunction<double>());
		}

		return RoadElevationMargin::getMargin(clipSize, p);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

