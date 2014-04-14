#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ScreenParticleLayer.h>

class luna_wrapper_proland_ScreenParticleLayer {
public:
	typedef Luna< proland::ScreenParticleLayer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::ScreenParticleLayer* self= (proland::ScreenParticleLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ScreenParticleLayer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::ScreenParticleLayer* ptr= dynamic_cast< proland::ScreenParticleLayer* >(Luna< ork::Object >::check(L,1));
		proland::ScreenParticleLayer* ptr= luna_caster< ork::Object, proland::ScreenParticleLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ScreenParticleLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getParticleRadius(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setParticleRadius(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScreenParticle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,93158916)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSceneManager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveParticles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeOldParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addNewParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getParticleSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_moveParticles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_removeOldParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_addNewParticles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ScreenParticleLayer::ScreenParticleLayer(float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer)
	static proland::ScreenParticleLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ScreenParticleLayer::ScreenParticleLayer(float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer) function, expected prototype:\nproland::ScreenParticleLayer::ScreenParticleLayer(float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,1);
		ork::ptr< ork::Texture2D > offscreenDepthBuffer = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,2);

		return new proland::ScreenParticleLayer(radius, offscreenDepthBuffer);
	}

	// proland::ScreenParticleLayer::ScreenParticleLayer(lua_Table * data, float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer)
	static proland::ScreenParticleLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ScreenParticleLayer::ScreenParticleLayer(lua_Table * data, float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer) function, expected prototype:\nproland::ScreenParticleLayer::ScreenParticleLayer(lua_Table * data, float radius, ork::ptr< ork::Texture2D > offscreenDepthBuffer)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,2);
		ork::ptr< ork::Texture2D > offscreenDepthBuffer = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3);

		return new wrapper_proland_ScreenParticleLayer(L,NULL, radius, offscreenDepthBuffer);
	}

	// Overload binder for proland::ScreenParticleLayer::ScreenParticleLayer
	static proland::ScreenParticleLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ScreenParticleLayer, cannot match any of the overloads for function ScreenParticleLayer:\n  ScreenParticleLayer(float, ork::ptr< ork::Texture2D >)\n  ScreenParticleLayer(lua_Table *, float, ork::ptr< ork::Texture2D >)\n");
		return NULL;
	}


	// Function binds:
	// float proland::ScreenParticleLayer::getParticleRadius() const
	static int _bind_getParticleRadius(lua_State *L) {
		if (!_lg_typecheck_getParticleRadius(L)) {
			luaL_error(L, "luna typecheck failed in float proland::ScreenParticleLayer::getParticleRadius() const function, expected prototype:\nfloat proland::ScreenParticleLayer::getParticleRadius() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::ScreenParticleLayer::getParticleRadius() const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getParticleRadius();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::ScreenParticleLayer::setParticleRadius(float radius)
	static int _bind_setParticleRadius(lua_State *L) {
		if (!_lg_typecheck_setParticleRadius(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::setParticleRadius(float radius) function, expected prototype:\nvoid proland::ScreenParticleLayer::setParticleRadius(float radius)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float radius=(float)lua_tonumber(L,2);

		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::setParticleRadius(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setParticleRadius(radius);

		return 0;
	}

	// proland::ScreenParticleLayer::ScreenParticle * proland::ScreenParticleLayer::getScreenParticle(proland::ParticleStorage::Particle * p)
	static int _bind_getScreenParticle(lua_State *L) {
		if (!_lg_typecheck_getScreenParticle(L)) {
			luaL_error(L, "luna typecheck failed in proland::ScreenParticleLayer::ScreenParticle * proland::ScreenParticleLayer::getScreenParticle(proland::ParticleStorage::Particle * p) function, expected prototype:\nproland::ScreenParticleLayer::ScreenParticle * proland::ScreenParticleLayer::getScreenParticle(proland::ParticleStorage::Particle * p)\nClass arguments details:\narg 1 ID = 93158916\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::ParticleStorage::Particle* p=(Luna< proland::ParticleStorage::Particle >::check(L,2));

		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::ScreenParticleLayer::ScreenParticle * proland::ScreenParticleLayer::getScreenParticle(proland::ParticleStorage::Particle *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::ScreenParticleLayer::ScreenParticle * lret = self->getScreenParticle(p);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::ScreenParticleLayer::ScreenParticle >::push(L,lret,false);

		return 1;
	}

	// void proland::ScreenParticleLayer::setSceneManager(ork::SceneManager * manager)
	static int _bind_setSceneManager(lua_State *L) {
		if (!_lg_typecheck_setSceneManager(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::setSceneManager(ork::SceneManager * manager) function, expected prototype:\nvoid proland::ScreenParticleLayer::setSceneManager(ork::SceneManager * manager)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::SceneManager* manager=(Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2));

		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::setSceneManager(ork::SceneManager *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSceneManager(manager);

		return 0;
	}

	// void proland::ScreenParticleLayer::moveParticles(double dt)
	static int _bind_moveParticles(lua_State *L) {
		if (!_lg_typecheck_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::moveParticles(double dt) function, expected prototype:\nvoid proland::ScreenParticleLayer::moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->moveParticles(dt);

		return 0;
	}

	// void proland::ScreenParticleLayer::removeOldParticles()
	static int _bind_removeOldParticles(lua_State *L) {
		if (!_lg_typecheck_removeOldParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::removeOldParticles() function, expected prototype:\nvoid proland::ScreenParticleLayer::removeOldParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::removeOldParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeOldParticles();

		return 0;
	}

	// void proland::ScreenParticleLayer::addNewParticles()
	static int _bind_addNewParticles(lua_State *L) {
		if (!_lg_typecheck_addNewParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::addNewParticles() function, expected prototype:\nvoid proland::ScreenParticleLayer::addNewParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::addNewParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addNewParticles();

		return 0;
	}

	// const char * proland::ScreenParticleLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::ScreenParticleLayer::base_toString() function, expected prototype:\nconst char * proland::ScreenParticleLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::ScreenParticleLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ScreenParticleLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// int proland::ScreenParticleLayer::base_getParticleSize()
	static int _bind_base_getParticleSize(lua_State *L) {
		if (!_lg_typecheck_base_getParticleSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ScreenParticleLayer::base_getParticleSize() function, expected prototype:\nint proland::ScreenParticleLayer::base_getParticleSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ScreenParticleLayer::base_getParticleSize(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->ScreenParticleLayer::getParticleSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::ScreenParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::ScreenParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::ScreenParticleLayer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenParticleLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::ScreenParticleLayer::base_moveParticles(double dt)
	static int _bind_base_moveParticles(lua_State *L) {
		if (!_lg_typecheck_base_moveParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::base_moveParticles(double dt) function, expected prototype:\nvoid proland::ScreenParticleLayer::base_moveParticles(double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double dt=(double)lua_tonumber(L,2);

		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::base_moveParticles(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenParticleLayer::moveParticles(dt);

		return 0;
	}

	// void proland::ScreenParticleLayer::base_removeOldParticles()
	static int _bind_base_removeOldParticles(lua_State *L) {
		if (!_lg_typecheck_base_removeOldParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::base_removeOldParticles() function, expected prototype:\nvoid proland::ScreenParticleLayer::base_removeOldParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::base_removeOldParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenParticleLayer::removeOldParticles();

		return 0;
	}

	// void proland::ScreenParticleLayer::base_addNewParticles()
	static int _bind_base_addNewParticles(lua_State *L) {
		if (!_lg_typecheck_base_addNewParticles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ScreenParticleLayer::base_addNewParticles() function, expected prototype:\nvoid proland::ScreenParticleLayer::base_addNewParticles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ScreenParticleLayer* self=Luna< ork::Object >::checkSubType< proland::ScreenParticleLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ScreenParticleLayer::base_addNewParticles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ScreenParticleLayer::addNewParticles();

		return 0;
	}


	// Operator binds:

};

proland::ScreenParticleLayer* LunaTraits< proland::ScreenParticleLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ScreenParticleLayer::_bind_ctor(L);
}

void LunaTraits< proland::ScreenParticleLayer >::_bind_dtor(proland::ScreenParticleLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::ScreenParticleLayer >::className[] = "ScreenParticleLayer";
const char LunaTraits< proland::ScreenParticleLayer >::fullName[] = "proland::ScreenParticleLayer";
const char LunaTraits< proland::ScreenParticleLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::ScreenParticleLayer >::parents[] = {"proland.ParticleLayer", 0};
const int LunaTraits< proland::ScreenParticleLayer >::hash = 62249462;
const int LunaTraits< proland::ScreenParticleLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::ScreenParticleLayer >::methods[] = {
	{"getParticleRadius", &luna_wrapper_proland_ScreenParticleLayer::_bind_getParticleRadius},
	{"setParticleRadius", &luna_wrapper_proland_ScreenParticleLayer::_bind_setParticleRadius},
	{"getScreenParticle", &luna_wrapper_proland_ScreenParticleLayer::_bind_getScreenParticle},
	{"setSceneManager", &luna_wrapper_proland_ScreenParticleLayer::_bind_setSceneManager},
	{"moveParticles", &luna_wrapper_proland_ScreenParticleLayer::_bind_moveParticles},
	{"removeOldParticles", &luna_wrapper_proland_ScreenParticleLayer::_bind_removeOldParticles},
	{"addNewParticles", &luna_wrapper_proland_ScreenParticleLayer::_bind_addNewParticles},
	{"base_toString", &luna_wrapper_proland_ScreenParticleLayer::_bind_base_toString},
	{"base_getParticleSize", &luna_wrapper_proland_ScreenParticleLayer::_bind_base_getParticleSize},
	{"base_getReferencedProducers", &luna_wrapper_proland_ScreenParticleLayer::_bind_base_getReferencedProducers},
	{"base_moveParticles", &luna_wrapper_proland_ScreenParticleLayer::_bind_base_moveParticles},
	{"base_removeOldParticles", &luna_wrapper_proland_ScreenParticleLayer::_bind_base_removeOldParticles},
	{"base_addNewParticles", &luna_wrapper_proland_ScreenParticleLayer::_bind_base_addNewParticles},
	{"fromVoid", &luna_wrapper_proland_ScreenParticleLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ScreenParticleLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ScreenParticleLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ScreenParticleLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_ScreenParticleLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ScreenParticleLayer >::enumValues[] = {
	{"AGE", proland::ScreenParticleLayer::AGE},
	{"OUTSIDE_VIEWPORT", proland::ScreenParticleLayer::OUTSIDE_VIEWPORT},
	{"POISSON_DISK", proland::ScreenParticleLayer::POISSON_DISK},
	{0,0}
};


