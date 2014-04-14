#ifndef _WRAPPERS_WRAPPER_PROLAND_PARTICLELAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_PARTICLELAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/particles/ParticleLayer.h>

class wrapper_proland_ParticleLayer : public proland::ParticleLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_ParticleLayer() {
		logDEBUG3("Calling delete function for wrapper proland_ParticleLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ParticleLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ParticleLayer(lua_State* L, lua_Table* dum, const char * type, int particleSize) 
		: proland::ParticleLayer(type, particleSize), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ParticleLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::ParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ParticleLayer::doRelease();
	};

	// void proland::ParticleLayer::initialize()
	void initialize() {
		if(_obj.pushFunction("initialize")) {
			_obj.pushArg((proland::ParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ParticleLayer::initialize();
	};

	// void proland::ParticleLayer::initParticle(proland::ParticleStorage::Particle * p)
	void initParticle(proland::ParticleStorage::Particle * p) {
		if(_obj.pushFunction("initParticle")) {
			_obj.pushArg((proland::ParticleLayer*)this);
			_obj.pushArg(p);
			return (_obj.callFunction<void>());
		}

		return ParticleLayer::initParticle(p);
	};

	// void proland::ParticleLayer::swap(ork::ptr< proland::ParticleLayer > p)
	void swap(ork::ptr< proland::ParticleLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::ParticleLayer*)this);
			_obj.pushArg((proland::ParticleLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return ParticleLayer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::ParticleLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return ParticleLayer::toString();
	};

	// int proland::ParticleLayer::getParticleSize()
	int getParticleSize() {
		if(_obj.pushFunction("getParticleSize")) {
			_obj.pushArg((proland::ParticleLayer*)this);
			return (_obj.callFunction<int>());
		}

		return ParticleLayer::getParticleSize();
	};

	// void proland::ParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::ParticleLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return ParticleLayer::getReferencedProducers(producers);
	};

	// void proland::ParticleLayer::moveParticles(double dt)
	void moveParticles(double dt) {
		if(_obj.pushFunction("moveParticles")) {
			_obj.pushArg((proland::ParticleLayer*)this);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return ParticleLayer::moveParticles(dt);
	};

	// void proland::ParticleLayer::removeOldParticles()
	void removeOldParticles() {
		if(_obj.pushFunction("removeOldParticles")) {
			_obj.pushArg((proland::ParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ParticleLayer::removeOldParticles();
	};

	// void proland::ParticleLayer::addNewParticles()
	void addNewParticles() {
		if(_obj.pushFunction("addNewParticles")) {
			_obj.pushArg((proland::ParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ParticleLayer::addNewParticles();
	};


	// Protected non-virtual methods:
	// void proland::ParticleLayer::init(int particleSize)
	void public_init(int particleSize) {
		return proland::ParticleLayer::init(particleSize);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::ParticleLayer::public_init(int particleSize)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleLayer::public_init(int particleSize) function, expected prototype:\nvoid proland::ParticleLayer::public_init(int particleSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int particleSize=(int)lua_tointeger(L,2);

		wrapper_proland_ParticleLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_ParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleLayer::public_init(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(particleSize);

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

