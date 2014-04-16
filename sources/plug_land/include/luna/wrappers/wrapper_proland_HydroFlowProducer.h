#ifndef _WRAPPERS_WRAPPER_PROLAND_HYDROFLOWPRODUCER_H_
#define _WRAPPERS_WRAPPER_PROLAND_HYDROFLOWPRODUCER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/river/proland/rivers/HydroFlowProducer.h>

class wrapper_proland_HydroFlowProducer : public proland::HydroFlowProducer, public luna_wrapper_base {

public:
		

	~wrapper_proland_HydroFlowProducer() {
		logDEBUG3("Calling delete function for wrapper proland_HydroFlowProducer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::HydroFlowProducer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_HydroFlowProducer(lua_State* L, lua_Table* dum, ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel) 
		: proland::HydroFlowProducer(graphs, cache, displayTileSize, slipParameter, searchRadiusFactor, potentialDelta, minLevel), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_HydroFlowProducer(lua_State* L, lua_Table* dum) 
		: proland::HydroFlowProducer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::doRelease();
	};

	// void * proland::TileProducer::getContext() const
	void * getContext() const {
		if(_obj.pushFunction("getContext")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			return (_obj.callFunction<void*>());
		}

		return HydroFlowProducer::getContext();
	};

	// void proland::TileProducer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::beginCreateTile();
	};

	// void proland::TileProducer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::endCreateTile();
	};

	// ork::ptr< ork::Task > proland::HydroFlowProducer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	ork::ptr< ork::Task > startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)owner.get());
			return _obj.callFunction< ork::Task* >();
		}

		return HydroFlowProducer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// bool proland::HydroFlowProducer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		if(_obj.pushFunction("doCreateTile")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return HydroFlowProducer::doCreateTile(level, tx, ty, data);
	};

	// void proland::HydroFlowProducer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::stopCreateTile(level, tx, ty);
	};

	// void proland::HydroFlowProducer::swap(ork::ptr< proland::HydroFlowProducer > p)
	void swap(ork::ptr< proland::HydroFlowProducer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg((proland::HydroFlowProducer*)p.get());
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			return (_obj.callFunction<const char*>());
		}

		return HydroFlowProducer::toString();
	};

	// ork::ptr< proland::TileCache > proland::TileProducer::getCache()
	ork::ptr< proland::TileCache > getCache() {
		if(_obj.pushFunction("getCache")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			return _obj.callFunction< proland::TileCache* >();
		}

		return HydroFlowProducer::getCache();
	};

	// bool proland::TileProducer::hasTile(int level, int tx, int ty)
	bool hasTile(int level, int tx, int ty) {
		if(_obj.pushFunction("hasTile")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return HydroFlowProducer::hasTile(level, tx, ty);
	};

	// proland::TileCache::Tile * proland::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	proland::TileCache::Tile * findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) {
		if(_obj.pushFunction("findTile")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(includeCache);
			_obj.pushArg(done);
			return (_obj.callFunction<proland::TileCache::Tile*>());
		}

		return HydroFlowProducer::findTile(level, tx, ty, includeCache, done);
	};

	// bool proland::TileProducer::prefetchTile(int level, int tx, int ty)
	bool prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return HydroFlowProducer::prefetchTile(level, tx, ty);
	};

	// void proland::TileProducer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::invalidateTiles();
	};

	// void proland::TileProducer::invalidateTile(int level, int tx, int ty)
	void invalidateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("invalidateTile")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::invalidateTile(level, tx, ty);
	};

	// void proland::TileProducer::update(ork::ptr< ork::SceneManager > scene)
	void update(ork::ptr< ork::SceneManager > scene) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg((ork::SceneManager*)scene.get());
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::update(scene);
	};

	// proland::CurveData * proland::CurveDataFactory::newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	proland::CurveData * newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve) {
		if(_obj.pushFunction("newCurveData")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(&id);
			_obj.pushArg(&flattenCurve);
			return (_obj.callFunction<proland::CurveData*>());
		}

		return HydroFlowProducer::newCurveData(id, flattenCurve);
	};

	// float proland::HydroFlowProducer::getRootQuadSize()
	float getRootQuadSize() {
		if(_obj.pushFunction("getRootQuadSize")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			return (_obj.callFunction<float>());
		}

		return HydroFlowProducer::getRootQuadSize();
	};

	// void proland::HydroFlowProducer::setRootQuadSize(float size)
	void setRootQuadSize(float size) {
		if(_obj.pushFunction("setRootQuadSize")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::setRootQuadSize(size);
	};

	// int proland::HydroFlowProducer::getBorder()
	int getBorder() {
		if(_obj.pushFunction("getBorder")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			return (_obj.callFunction<int>());
		}

		return HydroFlowProducer::getBorder();
	};

	// proland::TileCache::Tile * proland::HydroFlowProducer::getTile(int level, int tx, int ty, unsigned int deadline)
	proland::TileCache::Tile * getTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("getTile")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<proland::TileCache::Tile*>());
		}

		return HydroFlowProducer::getTile(level, tx, ty, deadline);
	};

	// void proland::HydroFlowProducer::putTile(proland::TileCache::Tile * t)
	void putTile(proland::TileCache::Tile * t) {
		if(_obj.pushFunction("putTile")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::putTile(t);
	};

	// void proland::HydroFlowProducer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::getReferencedProducers(producers);
	};

	// void proland::HydroFlowProducer::graphChanged()
	void graphChanged() {
		if(_obj.pushFunction("graphChanged")) {
			_obj.pushArg((proland::HydroFlowProducer*)this);
			return (_obj.callFunction<void>());
		}

		return HydroFlowProducer::graphChanged();
	};


	// Protected non-virtual methods:
	// void proland::HydroFlowProducer::init(ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel)
	void public_init(ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel) {
		return proland::HydroFlowProducer::init(graphs, cache, displayTileSize, slipParameter, searchRadiusFactor, potentialDelta, minLevel);
	};

	// void proland::TileProducer::removeCreateTile(ork::Task * t)
	void public_removeCreateTile(ork::Task * t) {
		return proland::TileProducer::removeCreateTile(t);
	};

	// ork::ptr< ork::TaskGraph > proland::TileProducer::createTaskGraph(ork::ptr< ork::Task > task)
	ork::ptr< ork::TaskGraph > public_createTaskGraph(ork::ptr< ork::Task > task) {
		return proland::TileProducer::createTaskGraph(task);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_removeCreateTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_createTaskGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,2) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::HydroFlowProducer::public_init(ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::HydroFlowProducer::public_init(ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel) function, expected prototype:\nvoid proland::HydroFlowProducer::public_init(ork::ptr< proland::GraphProducer > graphs, ork::ptr< proland::TileCache > cache, int displayTileSize, float slipParameter, float searchRadiusFactor, float potentialDelta, int minLevel)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::GraphProducer > graphs = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2);
		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,3);
		int displayTileSize=(int)lua_tointeger(L,4);
		float slipParameter=(float)lua_tonumber(L,5);
		float searchRadiusFactor=(float)lua_tonumber(L,6);
		float potentialDelta=(float)lua_tonumber(L,7);
		int minLevel=(int)lua_tointeger(L,8);

		wrapper_proland_HydroFlowProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::HydroFlowProducer::public_init(ork::ptr< proland::GraphProducer >, ork::ptr< proland::TileCache >, int, float, float, float, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(graphs, cache, displayTileSize, slipParameter, searchRadiusFactor, potentialDelta, minLevel);

		return 0;
	}

	// void proland::TileProducer::public_removeCreateTile(ork::Task * t)
	static int _bind_public_removeCreateTile(lua_State *L) {
		if (!_lg_typecheck_public_removeCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::public_removeCreateTile(ork::Task * t) function, expected prototype:\nvoid proland::TileProducer::public_removeCreateTile(ork::Task * t)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Task* t=(Luna< ork::Object >::checkSubType< ork::Task >(L,2));

		wrapper_proland_HydroFlowProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileProducer::public_removeCreateTile(ork::Task *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_removeCreateTile(t);

		return 0;
	}

	// ork::ptr< ork::TaskGraph > proland::TileProducer::public_createTaskGraph(ork::ptr< ork::Task > task)
	static int _bind_public_createTaskGraph(lua_State *L) {
		if (!_lg_typecheck_public_createTaskGraph(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::TaskGraph > proland::TileProducer::public_createTaskGraph(ork::ptr< ork::Task > task) function, expected prototype:\nork::ptr< ork::TaskGraph > proland::TileProducer::public_createTaskGraph(ork::ptr< ork::Task > task)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,2);

		wrapper_proland_HydroFlowProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_HydroFlowProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::TaskGraph > proland::TileProducer::public_createTaskGraph(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::TaskGraph > lret = self->public_createTaskGraph(task);
		Luna< ork::TaskGraph >::push(L,lret.get(),false);

		return 1;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"removeCreateTile",_bind_public_removeCreateTile},
		{"createTaskGraph",_bind_public_createTaskGraph},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

