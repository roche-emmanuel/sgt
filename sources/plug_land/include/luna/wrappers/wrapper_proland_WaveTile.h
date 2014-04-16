#ifndef _WRAPPERS_WRAPPER_PROLAND_WAVETILE_H_
#define _WRAPPERS_WRAPPER_PROLAND_WAVETILE_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/WaveTile.h>

class wrapper_proland_WaveTile : public proland::WaveTile, public luna_wrapper_base {

public:
		

	~wrapper_proland_WaveTile() {
		logDEBUG3("Calling delete function for wrapper proland_WaveTile");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::WaveTile*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_WaveTile(lua_State* L, lua_Table* dum, std::string & name, ork::ptr< ork::Texture2D > tex, int gridSize, int tileSize, float waveLength, int timeLoop) 
		: proland::WaveTile(name, tex, gridSize, tileSize, waveLength, timeLoop), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::WaveTile*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_WaveTile(lua_State* L, lua_Table* dum) 
		: proland::WaveTile(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::WaveTile*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::WaveTile*)this);
			return (_obj.callFunction<void>());
		}

		return WaveTile::doRelease();
	};

	// void proland::WaveTile::swap(ork::ptr< proland::WaveTile > t)
	void swap(ork::ptr< proland::WaveTile > t) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::WaveTile*)this);
			_obj.pushArg((proland::WaveTile*)t.get());
			return (_obj.callFunction<void>());
		}

		return WaveTile::swap(t);
	};

	// void proland::WaveTile::init(std::string & name, ork::ptr< ork::Texture2D > tex, int gridSize, int tileSize, float waveLength, int timeLoop)
	void init(std::string & name, ork::ptr< ork::Texture2D > tex, int gridSize, int tileSize, float waveLength, int timeLoop) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((proland::WaveTile*)this);
			_obj.pushArg(name);
			_obj.pushArg((ork::Texture2D*)tex.get());
			_obj.pushArg(gridSize);
			_obj.pushArg(tileSize);
			_obj.pushArg(waveLength);
			_obj.pushArg(timeLoop);
			return (_obj.callFunction<void>());
		}

		return WaveTile::init(name, tex, gridSize, tileSize, waveLength, timeLoop);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::WaveTile*)this);
			return (_obj.callFunction<const char*>());
		}

		return WaveTile::toString();
	};

	// void proland::WaveTile::timeStep(float dt)
	void timeStep(float dt) {
		if(_obj.pushFunction("timeStep")) {
			_obj.pushArg((proland::WaveTile*)this);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return WaveTile::timeStep(dt);
	};

	// void proland::WaveTile::updateUniform(ork::ptr< ork::Program > p)
	void updateUniform(ork::ptr< ork::Program > p) {
		if(_obj.pushFunction("updateUniform")) {
			_obj.pushArg((proland::WaveTile*)this);
			_obj.pushArg((ork::Program*)p.get());
			return (_obj.callFunction<void>());
		}

		return WaveTile::updateUniform(p);
	};

	// void proland::WaveTile::checkUniforms(ork::ptr< ork::Program > p)
	void checkUniforms(ork::ptr< ork::Program > p) {
		if(_obj.pushFunction("checkUniforms")) {
			_obj.pushArg((proland::WaveTile*)this);
			_obj.pushArg((ork::Program*)p.get());
			return (_obj.callFunction<void>());
		}

		return WaveTile::checkUniforms(p);
	};


	// Protected non-virtual methods:

	// Protected non-virtual checkers:

	// Protected non-virtual function binds:

	void register_protected_methods(lua_State* L) {
	};


};




#endif

