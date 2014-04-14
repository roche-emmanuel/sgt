#ifndef _WRAPPERS_WRAPPER_PROLAND_SCREENPARTICLELAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_SCREENPARTICLELAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/core/proland/particles/screen/ScreenParticleLayer.h>

class wrapper_proland_ScreenParticleLayer : public proland::ScreenParticleLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_ScreenParticleLayer() {
		logDEBUG3("Calling delete function for wrapper proland_ScreenParticleLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ScreenParticleLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ScreenParticleLayer(lua_State* L, lua_Table* dum, float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer) 
		: proland::ScreenParticleLayer(radius, offscreenDepthBuffer), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_ScreenParticleLayer(lua_State* L, lua_Table* dum) 
		: proland::ScreenParticleLayer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ScreenParticleLayer::doRelease();
	};

	// void proland::ScreenParticleLayer::initialize()
	void initialize() {
		if(_obj.pushFunction("initialize")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ScreenParticleLayer::initialize();
	};

	// void proland::ScreenParticleLayer::initParticle(proland::ParticleStorage::Particle * p)
	void initParticle(proland::ParticleStorage::Particle * p) {
		if(_obj.pushFunction("initParticle")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			_obj.pushArg(p);
			return (_obj.callFunction<void>());
		}

		return ScreenParticleLayer::initParticle(p);
	};

	// void proland::ScreenParticleLayer::swap(ork::ptr< proland::ScreenParticleLayer > p)
	void swap(ork::ptr< proland::ScreenParticleLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			_obj.pushArg((proland::ScreenParticleLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return ScreenParticleLayer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return ScreenParticleLayer::toString();
	};

	// int proland::ParticleLayer::getParticleSize()
	int getParticleSize() {
		if(_obj.pushFunction("getParticleSize")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			return (_obj.callFunction<int>());
		}

		return ScreenParticleLayer::getParticleSize();
	};

	// void proland::ParticleLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return ScreenParticleLayer::getReferencedProducers(producers);
	};

	// void proland::ScreenParticleLayer::moveParticles(double dt)
	void moveParticles(double dt) {
		if(_obj.pushFunction("moveParticles")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			_obj.pushArg(dt);
			return (_obj.callFunction<void>());
		}

		return ScreenParticleLayer::moveParticles(dt);
	};

	// void proland::ScreenParticleLayer::removeOldParticles()
	void removeOldParticles() {
		if(_obj.pushFunction("removeOldParticles")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ScreenParticleLayer::removeOldParticles();
	};

	// void proland::ScreenParticleLayer::addNewParticles()
	void addNewParticles() {
		if(_obj.pushFunction("addNewParticles")) {
			_obj.pushArg((proland::ScreenParticleLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ScreenParticleLayer::addNewParticles();
	};


	// Protected non-virtual methods:
	// void proland::ScreenParticleLayer::init(float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer)
	void public_init(float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer) {
		return proland::ScreenParticleLayer::init(radius, offscreenDepthBuffer);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::ScreenParticleLayer::public_init(float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::public_init(float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer) function, expected prototype:\nvoid proland::ScreenParticleLayer::public_init(float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,2);
		ork::ptr< ork::Texture2D > offscreenDepthBuffer = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3);

		wrapper_proland_ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::public_init(float, ork::ptr< ork::Texture2D >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(radius, offscreenDepthBuffer);

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

