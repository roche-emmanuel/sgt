#ifndef _WRAPPERS_WRAPPER_PROLAND_RESIDUALPRODUCER_H_
#define _WRAPPERS_WRAPPER_PROLAND_RESIDUALPRODUCER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/dem/ResidualProducer.h>

class wrapper_proland_ResidualProducer : public proland::ResidualProducer, public luna_wrapper_base {

public:
		

	~wrapper_proland_ResidualProducer() {
		logDEBUG3("Calling delete function for wrapper proland_ResidualProducer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ResidualProducer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ResidualProducer(lua_State* L, lua_Table* dum, ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0) 
		: proland::ResidualProducer(cache, name, deltaLevel, zscale), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_ResidualProducer(lua_State* L, lua_Table* dum) 
		: proland::ResidualProducer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			return (_obj.callFunction<void>());
		}

		return ResidualProducer::doRelease();
	};

	// void * proland::TileProducer::getContext() const
	void * getContext() const {
		if(_obj.pushFunction("getContext")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			return (_obj.callFunction<void*>());
		}

		return ResidualProducer::getContext();
	};

	// ork::ptr< ork::Task > proland::TileProducer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	ork::ptr< ork::Task > startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)owner.get());
			return _obj.callFunction< ork::Task* >();
		}

		return ResidualProducer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// void proland::TileProducer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			return (_obj.callFunction<void>());
		}

		return ResidualProducer::beginCreateTile();
	};

	// void proland::TileProducer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			return (_obj.callFunction<void>());
		}

		return ResidualProducer::endCreateTile();
	};

	// void proland::TileProducer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return ResidualProducer::stopCreateTile(level, tx, ty);
	};

	// bool proland::ResidualProducer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		if(_obj.pushFunction("doCreateTile")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return ResidualProducer::doCreateTile(level, tx, ty, data);
	};

	// void proland::ResidualProducer::swap(ork::ptr< proland::ResidualProducer > p)
	void swap(ork::ptr< proland::ResidualProducer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg((proland::ResidualProducer*)p.get());
			return (_obj.callFunction<void>());
		}

		return ResidualProducer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			return (_obj.callFunction<const char*>());
		}

		return ResidualProducer::toString();
	};

	// void proland::TileProducer::setRootQuadSize(float size)
	void setRootQuadSize(float size) {
		if(_obj.pushFunction("setRootQuadSize")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return ResidualProducer::setRootQuadSize(size);
	};

	// ork::ptr< proland::TileCache > proland::TileProducer::getCache()
	ork::ptr< proland::TileCache > getCache() {
		if(_obj.pushFunction("getCache")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			return _obj.callFunction< proland::TileCache* >();
		}

		return ResidualProducer::getCache();
	};

	// proland::TileCache::Tile * proland::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	proland::TileCache::Tile * findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) {
		if(_obj.pushFunction("findTile")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(includeCache);
			_obj.pushArg(done);
			return (_obj.callFunction<proland::TileCache::Tile*>());
		}

		return ResidualProducer::findTile(level, tx, ty, includeCache, done);
	};

	// proland::TileCache::Tile * proland::TileProducer::getTile(int level, int tx, int ty, unsigned int deadline)
	proland::TileCache::Tile * getTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("getTile")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<proland::TileCache::Tile*>());
		}

		return ResidualProducer::getTile(level, tx, ty, deadline);
	};

	// bool proland::TileProducer::prefetchTile(int level, int tx, int ty)
	bool prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return ResidualProducer::prefetchTile(level, tx, ty);
	};

	// void proland::TileProducer::putTile(proland::TileCache::Tile * t)
	void putTile(proland::TileCache::Tile * t) {
		if(_obj.pushFunction("putTile")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return ResidualProducer::putTile(t);
	};

	// void proland::TileProducer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			return (_obj.callFunction<void>());
		}

		return ResidualProducer::invalidateTiles();
	};

	// void proland::TileProducer::invalidateTile(int level, int tx, int ty)
	void invalidateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("invalidateTile")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return ResidualProducer::invalidateTile(level, tx, ty);
	};

	// void proland::TileProducer::update(ork::ptr< ork::SceneManager > scene)
	void update(ork::ptr< ork::SceneManager > scene) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg((ork::SceneManager*)scene.get());
			return (_obj.callFunction<void>());
		}

		return ResidualProducer::update(scene);
	};

	// void proland::TileProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return ResidualProducer::getReferencedProducers(producers);
	};

	// int proland::ResidualProducer::getBorder()
	int getBorder() {
		if(_obj.pushFunction("getBorder")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			return (_obj.callFunction<int>());
		}

		return ResidualProducer::getBorder();
	};

	// bool proland::ResidualProducer::hasTile(int level, int tx, int ty)
	bool hasTile(int level, int tx, int ty) {
		if(_obj.pushFunction("hasTile")) {
			_obj.pushArg((proland::ResidualProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return ResidualProducer::hasTile(level, tx, ty);
	};


	// Protected non-virtual methods:
	// void proland::ResidualProducer::init(ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0)
	void public_init(ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0) {
		return proland::ResidualProducer::init(cache, name, deltaLevel, zscale);
	};

	// int proland::ResidualProducer::getMinLevel()
	int public_getMinLevel() {
		return proland::ResidualProducer::getMinLevel();
	};

	// int proland::ResidualProducer::getDeltaLevel()
	int public_getDeltaLevel() {
		return proland::ResidualProducer::getDeltaLevel();
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
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getMinLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_public_getDeltaLevel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// void proland::ResidualProducer::public_init(ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ResidualProducer::public_init(ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0) function, expected prototype:\nvoid proland::ResidualProducer::public_init(ork::ptr< proland::TileCache > cache, const char * name, int deltaLevel = 0, float zscale = 1.0)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		const char * name=(const char *)lua_tostring(L,3);
		int deltaLevel=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		float zscale=luatop>4 ? (float)lua_tonumber(L,5) : (float)1.0;

		wrapper_proland_ResidualProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_ResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ResidualProducer::public_init(ork::ptr< proland::TileCache >, const char *, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(cache, name, deltaLevel, zscale);

		return 0;
	}

	// int proland::ResidualProducer::public_getMinLevel()
	static int _bind_public_getMinLevel(lua_State *L) {
		if (!_lg_typecheck_public_getMinLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ResidualProducer::public_getMinLevel() function, expected prototype:\nint proland::ResidualProducer::public_getMinLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_proland_ResidualProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_ResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ResidualProducer::public_getMinLevel(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_getMinLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::ResidualProducer::public_getDeltaLevel()
	static int _bind_public_getDeltaLevel(lua_State *L) {
		if (!_lg_typecheck_public_getDeltaLevel(L)) {
			luaL_error(L, "luna typecheck failed in int proland::ResidualProducer::public_getDeltaLevel() function, expected prototype:\nint proland::ResidualProducer::public_getDeltaLevel()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wrapper_proland_ResidualProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_ResidualProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::ResidualProducer::public_getDeltaLevel(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->public_getDeltaLevel();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TileProducer::public_removeCreateTile(ork::Task * t)
	static int _bind_public_removeCreateTile(lua_State *L) {
		if (!_lg_typecheck_public_removeCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::public_removeCreateTile(ork::Task * t) function, expected prototype:\nvoid proland::TileProducer::public_removeCreateTile(ork::Task * t)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Task* t=(Luna< ork::Object >::checkSubType< ork::Task >(L,2));

		wrapper_proland_ResidualProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_ResidualProducer >(L,1);
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

		wrapper_proland_ResidualProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_ResidualProducer >(L,1);
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
		{"getMinLevel",_bind_public_getMinLevel},
		{"getDeltaLevel",_bind_public_getDeltaLevel},
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

