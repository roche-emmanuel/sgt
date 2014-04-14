#ifndef _WRAPPERS_WRAPPER_PROLAND_TERRAINPARTICLELAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_TERRAINPARTICLELAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/particles/terrain/TerrainParticleLayer.h>

class wrapper_proland_TerrainParticleLayer : public proland::TerrainParticleLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_TerrainParticleLayer() {
		logDEBUG3("Calling delete function for wrapper proland_TerrainParticleLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TerrainParticleLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TerrainParticleLayer(lua_State* L, lua_Table* dum, std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos) 
		: proland::TerrainParticleLayer(infos), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TerrainParticleLayer(lua_State* L, lua_Table* dum) 
		: proland::TerrainParticleLayer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TerrainParticleLayer::doRelease();
	};

	// void proland::TerrainParticleLayer::initialize()
	void initialize() {
		if(_obj.pushFunction("initialize")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TerrainParticleLayer::initialize();
	};

	// void proland::TerrainParticleLayer::initParticle(proland::ParticleStorage::Particle * p)
	void initParticle(proland::ParticleStorage::Particle * p) {
		if(_obj.pushFunction("initParticle")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			_obj.pushArg(p);
			return (_obj.callFunction<void>());
		}

		return TerrainParticleLayer::initParticle(p);
	};

	// void proland::TerrainParticleLayer::swap(ork::ptr< proland::TerrainParticleLayer > p)
	void swap(ork::ptr< proland::TerrainParticleLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			_obj.pushArg((proland::TerrainParticleLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return TerrainParticleLayer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return TerrainParticleLayer::toString();
	};

	// int proland::ParticleLayer::getParticleSize()
	int getParticleSize() {
		if(_obj.pushFunction("getParticleSize")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			return (_obj.callFunction<int>());
		}

		return TerrainParticleLayer::getParticleSize();
	};

	// void proland::ParticleLayer::removeOldParticles()
	void removeOldParticles() {
		if(_obj.pushFunction("removeOldParticles")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TerrainParticleLayer::removeOldParticles();
	};

	// void proland::ParticleLayer::addNewParticles()
	void addNewParticles() {
		if(_obj.pushFunction("addNewParticles")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TerrainParticleLayer::addNewParticles();
	};

	// void proland::TerrainParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return TerrainParticleLayer::getReferencedProducers(producers);
	};

	// void proland::TerrainParticleLayer::moveParticles(double dt)
	void moveParticles(double dt) {
		if(_obj.pushFunction("moveParticles")) {
			_obj.pushArg((proland::TerrainParticleLayer*)this);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return TerrainParticleLayer::moveParticles(dt);
	};


	// Protected non-virtual methods:
	// void proland::TerrainParticleLayer::init(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos)
	void public_init(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos) {
		return proland::TerrainParticleLayer::init(infos);
	};

	// ork::ptr< proland::FlowTile > proland::TerrainParticleLayer::findFlowTile(ork::ptr< proland::TileProducer > producer, proland::TileCache::Tile * t, ork::vec3d & pos)
	ork::ptr< proland::FlowTile > public_findFlowTile(ork::ptr< proland::TileProducer > producer, proland::TileCache::Tile * t, ork::vec3d & pos) {
		return proland::TerrainParticleLayer::findFlowTile(producer, t, pos);
	};

	// ork::ptr< proland::FlowTile > proland::TerrainParticleLayer::getFlowTile(proland::TerrainParticleLayer::TerrainParticle * t)
	ork::ptr< proland::FlowTile > public_getFlowTile(proland::TerrainParticleLayer::TerrainParticle * t) {
		return proland::TerrainParticleLayer::getFlowTile(t);
	};

	// ork::ptr< proland::TileProducer > proland::TerrainParticleLayer::getFlowProducer(proland::ParticleStorage::Particle * p)
	ork::ptr< proland::TileProducer > public_getFlowProducer(proland::ParticleStorage::Particle * p) {
		return proland::TerrainParticleLayer::getFlowProducer(p);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,13829843) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_findFlowTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,10515563)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getFlowTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,19603310)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getFlowProducer(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TerrainParticleLayer::public_init(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainParticleLayer::public_init(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos) function, expected prototype:\nvoid proland::TerrainParticleLayer::public_init(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >* infos_ptr=(Luna< std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > >::check(L,2));
		if( !infos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg infos in proland::TerrainParticleLayer::public_init function");
		}
		std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * > infos=*infos_ptr;

		wrapper_proland_TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainParticleLayer::public_init(std::map< ork::ptr< proland::TileProducer >, proland::TerrainParticleLayer::TerrainInfo * >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(infos);

		return 0;
	}

	// ork::ptr< proland::FlowTile > proland::TerrainParticleLayer::public_findFlowTile(ork::ptr< proland::TileProducer > producer, proland::TileCache::Tile * t, ork::vec3d & pos)
	static int _bind_public_findFlowTile(lua_State *L) {
		if (!_lg_typecheck_public_findFlowTile(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::FlowTile > proland::TerrainParticleLayer::public_findFlowTile(ork::ptr< proland::TileProducer > producer, proland::TileCache::Tile * t, ork::vec3d & pos) function, expected prototype:\nork::ptr< proland::FlowTile > proland::TerrainParticleLayer::public_findFlowTile(ork::ptr< proland::TileProducer > producer, proland::TileCache::Tile * t, ork::vec3d & pos)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = 10515563\narg 3 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileProducer > producer = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);
		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,3));
		ork::vec3d* pos_ptr=(Luna< ork::vec3d >::check(L,4));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in proland::TerrainParticleLayer::public_findFlowTile function");
		}
		ork::vec3d & pos=*pos_ptr;

		wrapper_proland_TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::FlowTile > proland::TerrainParticleLayer::public_findFlowTile(ork::ptr< proland::TileProducer >, proland::TileCache::Tile *, ork::vec3d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::FlowTile > lret = self->public_findFlowTile(producer, t, pos);
		Luna< proland::FlowTile >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::FlowTile > proland::TerrainParticleLayer::public_getFlowTile(proland::TerrainParticleLayer::TerrainParticle * t)
	static int _bind_public_getFlowTile(lua_State *L) {
		if (!_lg_typecheck_public_getFlowTile(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::FlowTile > proland::TerrainParticleLayer::public_getFlowTile(proland::TerrainParticleLayer::TerrainParticle * t) function, expected prototype:\nork::ptr< proland::FlowTile > proland::TerrainParticleLayer::public_getFlowTile(proland::TerrainParticleLayer::TerrainParticle * t)\nClass arguments details:\narg 1 ID = 19603310\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TerrainParticleLayer::TerrainParticle* t=(Luna< proland::TerrainParticleLayer::TerrainParticle >::check(L,2));

		wrapper_proland_TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::FlowTile > proland::TerrainParticleLayer::public_getFlowTile(proland::TerrainParticleLayer::TerrainParticle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::FlowTile > lret = self->public_getFlowTile(t);
		Luna< proland::FlowTile >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::TileProducer > proland::TerrainParticleLayer::public_getFlowProducer(proland::ParticleStorage::Particle * p)
	static int _bind_public_getFlowProducer(lua_State *L) {
		if (!_lg_typecheck_public_getFlowProducer(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileProducer > proland::TerrainParticleLayer::public_getFlowProducer(proland::ParticleStorage::Particle * p) function, expected prototype:\nork::ptr< proland::TileProducer > proland::TerrainParticleLayer::public_getFlowProducer(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		wrapper_proland_TerrainParticleLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_TerrainParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileProducer > proland::TerrainParticleLayer::public_getFlowProducer(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileProducer > lret = self->public_getFlowProducer(p);
		Luna< proland::TileProducer >::push(L,lret.get(),false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"findFlowTile",_bind_public_findFlowTile},
		{"getFlowTile",_bind_public_getFlowTile},
		{"getFlowProducer",_bind_public_getFlowProducer},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

