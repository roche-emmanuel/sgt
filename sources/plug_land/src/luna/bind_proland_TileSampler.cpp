#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TileSampler.h>

class luna_wrapper_proland_TileSampler {
public:
	typedef Luna< proland::TileSampler > luna_t;

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

		proland::TileSampler* self= (proland::TileSampler*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TileSampler >::push(L,self,false);
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
		//proland::TileSampler* ptr= dynamic_cast< proland::TileSampler* >(Luna< ork::Object >::check(L,1));
		proland::TileSampler* ptr= luna_caster< ork::Object, proland::TileSampler >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TileSampler >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTerrain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getStoreLeaf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAsync(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMipMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addTerrain(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStoreLeaf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStoreParent(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStoreInvisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setStoreFilter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,89838339)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAsynchronous(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMipMap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTileMap(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TileSampler::TileSampler(const std::string & name, ork::ptr< proland::TileProducer > producer = NULL)
	static proland::TileSampler* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileSampler::TileSampler(const std::string & name, ork::ptr< proland::TileProducer > producer = NULL) function, expected prototype:\nproland::TileSampler::TileSampler(const std::string & name, ork::ptr< proland::TileProducer > producer = NULL)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,1),lua_objlen(L,1));
		ork::ptr< proland::TileProducer > producer = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);

		return new proland::TileSampler(name, producer);
	}

	// proland::TileSampler::TileSampler(lua_Table * data, const std::string & name, ork::ptr< proland::TileProducer > producer = NULL)
	static proland::TileSampler* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileSampler::TileSampler(lua_Table * data, const std::string & name, ork::ptr< proland::TileProducer > producer = NULL) function, expected prototype:\nproland::TileSampler::TileSampler(lua_Table * data, const std::string & name, ork::ptr< proland::TileProducer > producer = NULL)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< proland::TileProducer > producer = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3);

		return new wrapper_proland_TileSampler(L,NULL, name, producer);
	}

	// Overload binder for proland::TileSampler::TileSampler
	static proland::TileSampler* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TileSampler, cannot match any of the overloads for function TileSampler:\n  TileSampler(const std::string &, ork::ptr< proland::TileProducer >)\n  TileSampler(lua_Table *, const std::string &, ork::ptr< proland::TileProducer >)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< proland::TileProducer > proland::TileSampler::get()
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileProducer > proland::TileSampler::get() function, expected prototype:\nork::ptr< proland::TileProducer > proland::TileSampler::get()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileProducer > proland::TileSampler::get(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileProducer > lret = self->get();
		Luna< proland::TileProducer >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< proland::TerrainNode > proland::TileSampler::getTerrain(int i)
	static int _bind_getTerrain(lua_State *L) {
		if (!_lg_typecheck_getTerrain(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TerrainNode > proland::TileSampler::getTerrain(int i) function, expected prototype:\nork::ptr< proland::TerrainNode > proland::TileSampler::getTerrain(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TerrainNode > proland::TileSampler::getTerrain(int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TerrainNode > lret = self->getTerrain(i);
		Luna< proland::TerrainNode >::push(L,lret.get(),false);

		return 1;
	}

	// bool proland::TileSampler::getStoreLeaf()
	static int _bind_getStoreLeaf(lua_State *L) {
		if (!_lg_typecheck_getStoreLeaf(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileSampler::getStoreLeaf() function, expected prototype:\nbool proland::TileSampler::getStoreLeaf()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileSampler::getStoreLeaf(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getStoreLeaf();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TileSampler::getAsync()
	static int _bind_getAsync(lua_State *L) {
		if (!_lg_typecheck_getAsync(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileSampler::getAsync() function, expected prototype:\nbool proland::TileSampler::getAsync()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileSampler::getAsync(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAsync();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::TileSampler::getMipMap()
	static int _bind_getMipMap(lua_State *L) {
		if (!_lg_typecheck_getMipMap(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TileSampler::getMipMap() function, expected prototype:\nbool proland::TileSampler::getMipMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TileSampler::getMipMap(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getMipMap();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TileSampler::set(ork::ptr< proland::TileProducer > producer)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileSampler::set(ork::ptr< proland::TileProducer > producer) function, expected prototype:\nvoid proland::TileSampler::set(ork::ptr< proland::TileProducer > producer)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileProducer > producer = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileSampler::set(ork::ptr< proland::TileProducer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(producer);

		return 0;
	}

	// void proland::TileSampler::addTerrain(ork::ptr< proland::TerrainNode > terrain)
	static int _bind_addTerrain(lua_State *L) {
		if (!_lg_typecheck_addTerrain(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileSampler::addTerrain(ork::ptr< proland::TerrainNode > terrain) function, expected prototype:\nvoid proland::TileSampler::addTerrain(ork::ptr< proland::TerrainNode > terrain)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TerrainNode > terrain = Luna< ork::Object >::checkSubType< proland::TerrainNode >(L,2);

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileSampler::addTerrain(ork::ptr< proland::TerrainNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addTerrain(terrain);

		return 0;
	}

	// void proland::TileSampler::setStoreLeaf(bool storeLeaf)
	static int _bind_setStoreLeaf(lua_State *L) {
		if (!_lg_typecheck_setStoreLeaf(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileSampler::setStoreLeaf(bool storeLeaf) function, expected prototype:\nvoid proland::TileSampler::setStoreLeaf(bool storeLeaf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool storeLeaf=(bool)(lua_toboolean(L,2)==1);

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileSampler::setStoreLeaf(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStoreLeaf(storeLeaf);

		return 0;
	}

	// void proland::TileSampler::setStoreParent(bool storeParent)
	static int _bind_setStoreParent(lua_State *L) {
		if (!_lg_typecheck_setStoreParent(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileSampler::setStoreParent(bool storeParent) function, expected prototype:\nvoid proland::TileSampler::setStoreParent(bool storeParent)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool storeParent=(bool)(lua_toboolean(L,2)==1);

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileSampler::setStoreParent(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStoreParent(storeParent);

		return 0;
	}

	// void proland::TileSampler::setStoreInvisible(bool storeInvisible)
	static int _bind_setStoreInvisible(lua_State *L) {
		if (!_lg_typecheck_setStoreInvisible(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileSampler::setStoreInvisible(bool storeInvisible) function, expected prototype:\nvoid proland::TileSampler::setStoreInvisible(bool storeInvisible)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool storeInvisible=(bool)(lua_toboolean(L,2)==1);

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileSampler::setStoreInvisible(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStoreInvisible(storeInvisible);

		return 0;
	}

	// void proland::TileSampler::setStoreFilter(proland::TileSampler::TileFilter * filter)
	static int _bind_setStoreFilter(lua_State *L) {
		if (!_lg_typecheck_setStoreFilter(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileSampler::setStoreFilter(proland::TileSampler::TileFilter * filter) function, expected prototype:\nvoid proland::TileSampler::setStoreFilter(proland::TileSampler::TileFilter * filter)\nClass arguments details:\narg 1 ID = 89838339\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileSampler::TileFilter* filter=(Luna< proland::TileSampler::TileFilter >::check(L,2));

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileSampler::setStoreFilter(proland::TileSampler::TileFilter *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setStoreFilter(filter);

		return 0;
	}

	// void proland::TileSampler::setAsynchronous(bool async)
	static int _bind_setAsynchronous(lua_State *L) {
		if (!_lg_typecheck_setAsynchronous(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileSampler::setAsynchronous(bool async) function, expected prototype:\nvoid proland::TileSampler::setAsynchronous(bool async)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool async=(bool)(lua_toboolean(L,2)==1);

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileSampler::setAsynchronous(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setAsynchronous(async);

		return 0;
	}

	// void proland::TileSampler::setMipMap(bool mipmap)
	static int _bind_setMipMap(lua_State *L) {
		if (!_lg_typecheck_setMipMap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileSampler::setMipMap(bool mipmap) function, expected prototype:\nvoid proland::TileSampler::setMipMap(bool mipmap)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool mipmap=(bool)(lua_toboolean(L,2)==1);

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileSampler::setMipMap(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMipMap(mipmap);

		return 0;
	}

	// void proland::TileSampler::setTile(int level, int tx, int ty)
	static int _bind_setTile(lua_State *L) {
		if (!_lg_typecheck_setTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileSampler::setTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TileSampler::setTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileSampler::setTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTile(level, tx, ty);

		return 0;
	}

	// void proland::TileSampler::setTileMap()
	static int _bind_setTileMap(lua_State *L) {
		if (!_lg_typecheck_setTileMap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileSampler::setTileMap() function, expected prototype:\nvoid proland::TileSampler::setTileMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileSampler::setTileMap(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTileMap();

		return 0;
	}

	// ork::ptr< ork::Task > proland::TileSampler::update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::TileSampler::update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root) function, expected prototype:\nork::ptr< ork::Task > proland::TileSampler::update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);
		ork::ptr< proland::TerrainQuad > root = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3);

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::TileSampler::update(ork::ptr< ork::SceneManager >, ork::ptr< proland::TerrainQuad >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->update(scene, root);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * proland::TileSampler::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TileSampler::base_toString() function, expected prototype:\nconst char * proland::TileSampler::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TileSampler::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TileSampler::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > proland::TileSampler::base_update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::TileSampler::base_update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root) function, expected prototype:\nork::ptr< ork::Task > proland::TileSampler::base_update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);
		ork::ptr< proland::TerrainQuad > root = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3);

		proland::TileSampler* self=Luna< ork::Object >::checkSubType< proland::TileSampler >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::TileSampler::base_update(ork::ptr< ork::SceneManager >, ork::ptr< proland::TerrainQuad >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->TileSampler::update(scene, root);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

proland::TileSampler* LunaTraits< proland::TileSampler >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TileSampler::_bind_ctor(L);
}

void LunaTraits< proland::TileSampler >::_bind_dtor(proland::TileSampler* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TileSampler >::className[] = "TileSampler";
const char LunaTraits< proland::TileSampler >::fullName[] = "proland::TileSampler";
const char LunaTraits< proland::TileSampler >::moduleName[] = "proland";
const char* LunaTraits< proland::TileSampler >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::TileSampler >::hash = 24814086;
const int LunaTraits< proland::TileSampler >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TileSampler >::methods[] = {
	{"get", &luna_wrapper_proland_TileSampler::_bind_get},
	{"getTerrain", &luna_wrapper_proland_TileSampler::_bind_getTerrain},
	{"getStoreLeaf", &luna_wrapper_proland_TileSampler::_bind_getStoreLeaf},
	{"getAsync", &luna_wrapper_proland_TileSampler::_bind_getAsync},
	{"getMipMap", &luna_wrapper_proland_TileSampler::_bind_getMipMap},
	{"set", &luna_wrapper_proland_TileSampler::_bind_set},
	{"addTerrain", &luna_wrapper_proland_TileSampler::_bind_addTerrain},
	{"setStoreLeaf", &luna_wrapper_proland_TileSampler::_bind_setStoreLeaf},
	{"setStoreParent", &luna_wrapper_proland_TileSampler::_bind_setStoreParent},
	{"setStoreInvisible", &luna_wrapper_proland_TileSampler::_bind_setStoreInvisible},
	{"setStoreFilter", &luna_wrapper_proland_TileSampler::_bind_setStoreFilter},
	{"setAsynchronous", &luna_wrapper_proland_TileSampler::_bind_setAsynchronous},
	{"setMipMap", &luna_wrapper_proland_TileSampler::_bind_setMipMap},
	{"setTile", &luna_wrapper_proland_TileSampler::_bind_setTile},
	{"setTileMap", &luna_wrapper_proland_TileSampler::_bind_setTileMap},
	{"update", &luna_wrapper_proland_TileSampler::_bind_update},
	{"base_toString", &luna_wrapper_proland_TileSampler::_bind_base_toString},
	{"base_update", &luna_wrapper_proland_TileSampler::_bind_base_update},
	{"fromVoid", &luna_wrapper_proland_TileSampler::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TileSampler::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TileSampler::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TileSampler >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TileSampler::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TileSampler >::enumValues[] = {
	{0,0}
};


