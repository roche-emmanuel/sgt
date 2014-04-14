#ifndef _WRAPPERS_WRAPPER_PROLAND_LIFECYCLEPARTICLELAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_LIFECYCLEPARTICLELAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/particles/LifeCycleParticleLayer.h>

class wrapper_proland_LifeCycleParticleLayer : public proland::LifeCycleParticleLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_LifeCycleParticleLayer() {
		logDEBUG3("Calling delete function for wrapper proland_LifeCycleParticleLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::LifeCycleParticleLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_LifeCycleParticleLayer(lua_State* L, lua_Table* dum, float fadeInDelay, float activeDelay, float fadeOutDelay) 
		: proland::LifeCycleParticleLayer(fadeInDelay, activeDelay, fadeOutDelay), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_LifeCycleParticleLayer(lua_State* L, lua_Table* dum) 
		: proland::LifeCycleParticleLayer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return LifeCycleParticleLayer::doRelease();
	};

	// void proland::ParticleLayer::initialize()
	void initialize() {
		if(_obj.pushFunction("initialize")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return LifeCycleParticleLayer::initialize();
	};

	// void proland::LifeCycleParticleLayer::initParticle(proland::ParticleStorage::Particle * p)
	void initParticle(proland::ParticleStorage::Particle * p) {
		if(_obj.pushFunction("initParticle")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			_obj.pushArg(p);
			return (_obj.callFunction<void>());
		}

		return LifeCycleParticleLayer::initParticle(p);
	};

	// void proland::LifeCycleParticleLayer::swap(ork::ptr< proland::LifeCycleParticleLayer > p)
	void swap(ork::ptr< proland::LifeCycleParticleLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			_obj.pushArg((proland::LifeCycleParticleLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return LifeCycleParticleLayer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return LifeCycleParticleLayer::toString();
	};

	// int proland::ParticleLayer::getParticleSize()
	int getParticleSize() {
		if(_obj.pushFunction("getParticleSize")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			return (_obj.callFunction<int>());
		}

		return LifeCycleParticleLayer::getParticleSize();
	};

	// void proland::ParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return LifeCycleParticleLayer::getReferencedProducers(producers);
	};

	// void proland::ParticleLayer::addNewParticles()
	void addNewParticles() {
		if(_obj.pushFunction("addNewParticles")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return LifeCycleParticleLayer::addNewParticles();
	};

	// void proland::LifeCycleParticleLayer::moveParticles(double dt)
	void moveParticles(double dt) {
		if(_obj.pushFunction("moveParticles")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return LifeCycleParticleLayer::moveParticles(dt);
	};

	// void proland::LifeCycleParticleLayer::removeOldParticles()
	void removeOldParticles() {
		if(_obj.pushFunction("removeOldParticles")) {
			_obj.pushArg((proland::LifeCycleParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return LifeCycleParticleLayer::removeOldParticles();
	};


	// Protected non-virtual methods:
	// void proland::LifeCycleParticleLayer::init(float fadeInDelay, float activeDelay, float fadeOutDelay)
	void public_init(float fadeInDelay, float activeDelay, float fadeOutDelay) {
		return proland::LifeCycleParticleLayer::init(fadeInDelay, activeDelay, fadeOutDelay);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::LifeCycleParticleLayer::public_init(float fadeInDelay, float activeDelay, float fadeOutDelay)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::LifeCycleParticleLayer::public_init(float fadeInDelay, float activeDelay, float fadeOutDelay) function, expected prototype:\nvoid proland::LifeCycleParticleLayer::public_init(float fadeInDelay, float activeDelay, float fadeOutDelay)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float fadeInDelay=(float)lua_tonumber(L,2);
		float activeDelay=(float)lua_tonumber(L,3);
		float fadeOutDelay=(float)lua_tonumber(L,4);

		wrapper_proland_LifeCycleParticleLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_LifeCycleParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::LifeCycleParticleLayer::public_init(float, float, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(fadeInDelay, activeDelay, fadeOutDelay);

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

