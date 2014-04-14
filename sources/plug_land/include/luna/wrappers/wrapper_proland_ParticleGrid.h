#ifndef _WRAPPERS_WRAPPER_PROLAND_PARTICLEGRID_H_
#define _WRAPPERS_WRAPPER_PROLAND_PARTICLEGRID_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/particles/screen/ParticleGrid.h>

class wrapper_proland_ParticleGrid : public proland::ParticleGrid, public luna_wrapper_base {

public:
		

	~wrapper_proland_ParticleGrid() {
		logDEBUG3("Calling delete function for wrapper proland_ParticleGrid");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ParticleGrid*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ParticleGrid(lua_State* L, lua_Table* dum, float radius, int maxParticlesPerCell, float gridFactor = 1.0f) 
		: proland::ParticleGrid(radius, maxParticlesPerCell, gridFactor), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ParticleGrid*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::ParticleGrid*)this);
			return (_obj.callFunction<void>());
		}

		return ParticleGrid::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::ParticleGrid*)this);
			return (_obj.callFunction<const char*>());
		}

		return ParticleGrid::toString();
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

