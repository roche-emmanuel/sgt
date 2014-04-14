#ifndef _WRAPPERS_WRAPPER_PROLAND_PARTICLEPRODUCER_H_
#define _WRAPPERS_WRAPPER_PROLAND_PARTICLEPRODUCER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/particles/ParticleProducer.h>

class wrapper_proland_ParticleProducer : public proland::ParticleProducer, public luna_wrapper_base {

public:
		

	~wrapper_proland_ParticleProducer() {
		logDEBUG3("Calling delete function for wrapper proland_ParticleProducer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ParticleProducer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ParticleProducer(lua_State* L, lua_Table* dum, const char * type, ork::ptr< proland::ParticleStorage > storage) 
		: proland::ParticleProducer(type, storage), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_ParticleProducer(lua_State* L, lua_Table* dum) 
		: proland::ParticleProducer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_ParticleProducer(lua_State* L, lua_Table* dum, const char * type) 
		: proland::ParticleProducer(type), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			return (_obj.callFunction<void>());
		}

		return ParticleProducer::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			return (_obj.callFunction<const char*>());
		}

		return ParticleProducer::toString();
	};

	// void proland::ParticleProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return ParticleProducer::getReferencedProducers(producers);
	};

	// int proland::ParticleProducer::getParticleSize()
	int getParticleSize() {
		if(_obj.pushFunction("getParticleSize")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			return (_obj.callFunction<int>());
		}

		return ParticleProducer::getParticleSize();
	};

	// void proland::ParticleProducer::updateParticles(double dt)
	void updateParticles(double dt) {
		if(_obj.pushFunction("updateParticles")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return ParticleProducer::updateParticles(dt);
	};

	// void proland::ParticleProducer::moveParticles(double dt)
	void moveParticles(double dt) {
		if(_obj.pushFunction("moveParticles")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return ParticleProducer::moveParticles(dt);
	};

	// void proland::ParticleProducer::removeOldParticles()
	void removeOldParticles() {
		if(_obj.pushFunction("removeOldParticles")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			return (_obj.callFunction<void>());
		}

		return ParticleProducer::removeOldParticles();
	};

	// void proland::ParticleProducer::addNewParticles()
	void addNewParticles() {
		if(_obj.pushFunction("addNewParticles")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			return (_obj.callFunction<void>());
		}

		return ParticleProducer::addNewParticles();
	};

	// proland::ParticleStorage::Particle * proland::ParticleProducer::newParticle()
	proland::ParticleStorage::Particle * newParticle() {
		if(_obj.pushFunction("newParticle")) {
			_obj.pushArg((proland::ParticleProducer*)this);
			return (_obj.callFunction<proland::ParticleStorage::Particle*>());
		}

		return ParticleProducer::newParticle();
	};


	// Protected non-virtual methods:
	// void proland::ParticleProducer::init(ork::ptr< proland::ParticleStorage > storage)
	void public_init(ork::ptr< proland::ParticleStorage > storage) {
		return proland::ParticleProducer::init(storage);
	};

	// void proland::ParticleProducer::swap(ork::ptr< proland::ParticleProducer > p)
	void public_swap(ork::ptr< proland::ParticleProducer > p) {
		return proland::ParticleProducer::swap(p);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::ParticleProducer::public_init(ork::ptr< proland::ParticleStorage > storage)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::public_init(ork::ptr< proland::ParticleStorage > storage) function, expected prototype:\nvoid proland::ParticleProducer::public_init(ork::ptr< proland::ParticleStorage > storage)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::ParticleStorage > storage = Luna< ork::Object >::checkSubType< proland::ParticleStorage >(L,2);

		wrapper_proland_ParticleProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::public_init(ork::ptr< proland::ParticleStorage >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(storage);

		return 0;
	}

	// void proland::ParticleProducer::public_swap(ork::ptr< proland::ParticleProducer > p)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ParticleProducer::public_swap(ork::ptr< proland::ParticleProducer > p) function, expected prototype:\nvoid proland::ParticleProducer::public_swap(ork::ptr< proland::ParticleProducer > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::ParticleProducer > p = Luna< ork::Object >::checkSubType< proland::ParticleProducer >(L,2);

		wrapper_proland_ParticleProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_ParticleProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ParticleProducer::public_swap(ork::ptr< proland::ParticleProducer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(p);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

