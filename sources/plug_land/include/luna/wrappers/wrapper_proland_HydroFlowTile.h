#ifndef _WRAPPERS_WRAPPER_PROLAND_HYDROFLOWTILE_H_
#define _WRAPPERS_WRAPPER_PROLAND_HYDROFLOWTILE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/HydroFlowTile.h>

class wrapper_proland_HydroFlowTile : public proland::HydroFlowTile, public luna_wrapper_base {

public:
		

	~wrapper_proland_HydroFlowTile() {
		logDEBUG3("Calling delete function for wrapper proland_HydroFlowTile");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::HydroFlowTile*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_HydroFlowTile(lua_State* L, lua_Table* dum, float ox, float oy, float size, float inter_power, int cacheSize, float searchRadiusFactor) 
		: proland::HydroFlowTile(ox, oy, size, inter_power, cacheSize, searchRadiusFactor), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::HydroFlowTile*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::HydroFlowTile*)this);
			return (_obj.callFunction<void>());
		}

		return HydroFlowTile::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::HydroFlowTile*)this);
			return (_obj.callFunction<const char*>());
		}

		return HydroFlowTile::toString();
	};

	// int proland::FlowTile::getType(ork::vec2d & pos)
	int getType(ork::vec2d & pos) {
		if(_obj.pushFunction("getType")) {
			_obj.pushArg((proland::HydroFlowTile*)this);
			_obj.pushArg(&pos);
			return (_obj.callFunction<int>());
		}

		return HydroFlowTile::getType(pos);
	};

	// void proland::FlowTile::getDataType(ork::vec2d & pos, int & type)
	void getDataType(ork::vec2d & pos, int & type) {
		if(_obj.pushFunction("getDataType")) {
			_obj.pushArg((proland::HydroFlowTile*)this);
			_obj.pushArg(&pos);
			_obj.pushArg(type);
			return (_obj.callFunction<void>());
		}

		return HydroFlowTile::getDataType(pos, type);
	};

	// void proland::HydroFlowTile::getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type)
	void getVelocity(ork::vec2d & pos, ork::vec2d & velocity, int & type) {
		if(_obj.pushFunction("getVelocity")) {
			_obj.pushArg((proland::HydroFlowTile*)this);
			_obj.pushArg(&pos);
			_obj.pushArg(&velocity);
			_obj.pushArg(type);
			return (_obj.callFunction<void>());
		}

		return HydroFlowTile::getVelocity(pos, velocity, type);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

