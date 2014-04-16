#ifndef _WRAPPERS_WRAPPER_PROLAND_WATERELEVATIONLAYER_WATERELEVATIONMARGIN_H_
#define _WRAPPERS_WRAPPER_PROLAND_WATERELEVATIONLAYER_WATERELEVATIONMARGIN_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/dem/WaterElevationLayer.h>

class wrapper_proland_WaterElevationLayer_WaterElevationMargin : public proland::WaterElevationLayer::WaterElevationMargin, public luna_wrapper_base {

public:
		

	~wrapper_proland_WaterElevationLayer_WaterElevationMargin() {
		logDEBUG3("Calling delete function for wrapper proland_WaterElevationLayer_WaterElevationMargin");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::WaterElevationLayer::WaterElevationMargin*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_WaterElevationLayer_WaterElevationMargin(lua_State* L, lua_Table* dum, int samplesPerTile, float borderFactor) 
		: proland::WaterElevationLayer::WaterElevationMargin(samplesPerTile, borderFactor), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::WaterElevationLayer::WaterElevationMargin*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// double proland::WaterElevationLayer::WaterElevationMargin::getMargin(double clipSize, proland::CurvePtr p)
	double getMargin(double clipSize, proland::CurvePtr p) {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((proland::WaterElevationLayer::WaterElevationMargin*)this);
			_obj.pushArg(clipSize);
			_obj.pushArg(&p);
			return (_obj.callFunction<double>());
		}

		return WaterElevationMargin::getMargin(clipSize, p);
	};

	// double proland::WaterElevationLayer::WaterElevationMargin::getMargin(double clipSize, proland::AreaPtr a)
	double getMargin(double clipSize, proland::AreaPtr a) {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((proland::WaterElevationLayer::WaterElevationMargin*)this);
			_obj.pushArg(clipSize);
			_obj.pushArg(&a);
			return (_obj.callFunction<double>());
		}

		return WaterElevationMargin::getMargin(clipSize, a);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

