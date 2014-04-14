#ifndef _WRAPPERS_WRAPPER_PROLAND_RANDOMPARTICLELAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_RANDOMPARTICLELAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/particles/RandomParticleLayer.h>

class wrapper_proland_RandomParticleLayer : public proland::RandomParticleLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_RandomParticleLayer() {
		logDEBUG3("Calling delete function for wrapper proland_RandomParticleLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::RandomParticleLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_RandomParticleLayer(lua_State* L, lua_Table* dum, ork::box3f bounds) 
		: proland::RandomParticleLayer(bounds), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_RandomParticleLayer(lua_State* L, lua_Table* dum) 
		: proland::RandomParticleLayer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return RandomParticleLayer::doRelease();
	};

	// void proland::ParticleLayer::initialize()
	void initialize() {
		if(_obj.pushFunction("initialize")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return RandomParticleLayer::initialize();
	};

	// void proland::RandomParticleLayer::initParticle(proland::ParticleStorage::Particle * p)
	void initParticle(proland::ParticleStorage::Particle * p) {
		if(_obj.pushFunction("initParticle")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			_obj.pushArg(p);
			return (_obj.callFunction<void>());
		}

		return RandomParticleLayer::initParticle(p);
	};

	// void proland::RandomParticleLayer::swap(ork::ptr< proland::RandomParticleLayer > p)
	void swap(ork::ptr< proland::RandomParticleLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			_obj.pushArg((proland::RandomParticleLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return RandomParticleLayer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return RandomParticleLayer::toString();
	};

	// int proland::ParticleLayer::getParticleSize()
	int getParticleSize() {
		if(_obj.pushFunction("getParticleSize")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			return (_obj.callFunction<int>());
		}

		return RandomParticleLayer::getParticleSize();
	};

	// void proland::ParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return RandomParticleLayer::getReferencedProducers(producers);
	};

	// void proland::ParticleLayer::moveParticles(double dt)
	void moveParticles(double dt) {
		if(_obj.pushFunction("moveParticles")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return RandomParticleLayer::moveParticles(dt);
	};

	// void proland::ParticleLayer::removeOldParticles()
	void removeOldParticles() {
		if(_obj.pushFunction("removeOldParticles")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return RandomParticleLayer::removeOldParticles();
	};

	// void proland::RandomParticleLayer::addNewParticles()
	void addNewParticles() {
		if(_obj.pushFunction("addNewParticles")) {
			_obj.pushArg((proland::RandomParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return RandomParticleLayer::addNewParticles();
	};


	// Protected non-virtual methods:
	// void proland::RandomParticleLayer::init(ork::box3f bounds)
	void public_init(ork::box3f bounds) {
		return proland::RandomParticleLayer::init(bounds);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151942) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::RandomParticleLayer::public_init(ork::box3f bounds)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RandomParticleLayer::public_init(ork::box3f bounds) function, expected prototype:\nvoid proland::RandomParticleLayer::public_init(ork::box3f bounds)\nClass arguments details:\narg 1 ID = 63151942\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::box3f* bounds_ptr=(Luna< ork::box3f >::check(L,2));
		if( !bounds_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg bounds in proland::RandomParticleLayer::public_init function");
		}
		ork::box3f bounds=*bounds_ptr;

		wrapper_proland_RandomParticleLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_RandomParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RandomParticleLayer::public_init(ork::box3f). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(bounds);

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

