#ifndef _WRAPPERS_WRAPPER_PROLAND_HYDROFLOWPRODUCER_RIVERMARGIN_H_
#define _WRAPPERS_WRAPPER_PROLAND_HYDROFLOWPRODUCER_RIVERMARGIN_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/HydroFlowProducer.h>

class wrapper_proland_HydroFlowProducer_RiverMargin : public proland::HydroFlowProducer::RiverMargin, public luna_wrapper_base {

public:
		

	~wrapper_proland_HydroFlowProducer_RiverMargin() {
		logDEBUG3("Calling delete function for wrapper proland_HydroFlowProducer_RiverMargin");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::HydroFlowProducer::RiverMargin*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_HydroFlowProducer_RiverMargin(lua_State* L, lua_Table* dum, int samplesPerTile, float borderFactor) 
		: proland::HydroFlowProducer::RiverMargin(samplesPerTile, borderFactor), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::HydroFlowProducer::RiverMargin*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:

	// Protected virtual methods:

	// Public virtual methods:
	// double proland::HydroFlowProducer::RiverMargin::getMargin(double clipSize)
	double getMargin(double clipSize) {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((proland::HydroFlowProducer::RiverMargin*)this);
			_obj.pushArg(clipSize);
			return (_obj.callFunction<double>());
		}

		return RiverMargin::getMargin(clipSize);
	};

	// double proland::HydroFlowProducer::RiverMargin::getMargin(double clipSize, proland::CurvePtr p)
	double getMargin(double clipSize, proland::CurvePtr p) {
		if(_obj.pushFunction("getMargin")) {
			_obj.pushArg((proland::HydroFlowProducer::RiverMargin*)this);
			_obj.pushArg(clipSize);
			_obj.pushArg(&p);
			return (_obj.callFunction<double>());
		}

		return RiverMargin::getMargin(clipSize, p);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

