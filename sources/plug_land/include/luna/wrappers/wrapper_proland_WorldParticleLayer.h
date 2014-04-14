#ifndef _WRAPPERS_WRAPPER_PROLAND_WORLDPARTICLELAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_WORLDPARTICLELAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/particles/WorldParticleLayer.h>

class wrapper_proland_WorldParticleLayer : public proland::WorldParticleLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_WorldParticleLayer() {
		logDEBUG3("Calling delete function for wrapper proland_WorldParticleLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::WorldParticleLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_WorldParticleLayer(lua_State* L, lua_Table* dum, float speedFactor) 
		: proland::WorldParticleLayer(speedFactor), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_WorldParticleLayer(lua_State* L, lua_Table* dum) 
		: proland::WorldParticleLayer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return WorldParticleLayer::doRelease();
	};

	// void proland::ParticleLayer::initialize()
	void initialize() {
		if(_obj.pushFunction("initialize")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return WorldParticleLayer::initialize();
	};

	// void proland::WorldParticleLayer::initParticle(proland::ParticleStorage::Particle * p)
	void initParticle(proland::ParticleStorage::Particle * p) {
		if(_obj.pushFunction("initParticle")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			_obj.pushArg(p);
			return (_obj.callFunction<void>());
		}

		return WorldParticleLayer::initParticle(p);
	};

	// void proland::WorldParticleLayer::swap(ork::ptr< proland::WorldParticleLayer > p)
	void swap(ork::ptr< proland::WorldParticleLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			_obj.pushArg((proland::WorldParticleLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return WorldParticleLayer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return WorldParticleLayer::toString();
	};

	// int proland::ParticleLayer::getParticleSize()
	int getParticleSize() {
		if(_obj.pushFunction("getParticleSize")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			return (_obj.callFunction<int>());
		}

		return WorldParticleLayer::getParticleSize();
	};

	// void proland::ParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return WorldParticleLayer::getReferencedProducers(producers);
	};

	// void proland::ParticleLayer::removeOldParticles()
	void removeOldParticles() {
		if(_obj.pushFunction("removeOldParticles")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return WorldParticleLayer::removeOldParticles();
	};

	// void proland::ParticleLayer::addNewParticles()
	void addNewParticles() {
		if(_obj.pushFunction("addNewParticles")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return WorldParticleLayer::addNewParticles();
	};

	// void proland::WorldParticleLayer::moveParticles(double dt)
	void moveParticles(double dt) {
		if(_obj.pushFunction("moveParticles")) {
			_obj.pushArg((proland::WorldParticleLayer*)this);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return WorldParticleLayer::moveParticles(dt);
	};


	// Protected non-virtual methods:
	// void proland::WorldParticleLayer::init(float speedFactor)
	void public_init(float speedFactor) {
		return proland::WorldParticleLayer::init(speedFactor);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::WorldParticleLayer::public_init(float speedFactor)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::WorldParticleLayer::public_init(float speedFactor) function, expected prototype:\nvoid proland::WorldParticleLayer::public_init(float speedFactor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float speedFactor=(float)lua_tonumber(L,2);

		wrapper_proland_WorldParticleLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_WorldParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::WorldParticleLayer::public_init(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(speedFactor);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

