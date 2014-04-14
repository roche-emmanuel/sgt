#ifndef _WRAPPERS_WRAPPER_PROLAND_ORTHOPRODUCER_H_
#define _WRAPPERS_WRAPPER_PROLAND_ORTHOPRODUCER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/ortho/OrthoProducer.h>

class wrapper_proland_OrthoProducer : public proland::OrthoProducer, public luna_wrapper_base {

public:
		

	~wrapper_proland_OrthoProducer() {
		logDEBUG3("Calling delete function for wrapper proland_OrthoProducer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::OrthoProducer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_OrthoProducer(lua_State* L, lua_Table* dum, ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel) 
		: proland::OrthoProducer(cache, residualTiles, orthoTexture, residualTexture, upsample, rootNoiseColor, noiseColor, noiseAmp, noiseHsv, scale, maxLevel), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_OrthoProducer(lua_State* L, lua_Table* dum) 
		: proland::OrthoProducer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			return (_obj.callFunction<void>());
		}

		return OrthoProducer::doRelease();
	};

	// void * proland::OrthoProducer::getContext() const
	void * getContext() const {
		if(_obj.pushFunction("getContext")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			return (_obj.callFunction<void*>());
		}

		return OrthoProducer::getContext();
	};

	// ork::ptr< ork::Task > proland::OrthoProducer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	ork::ptr< ork::Task > startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)owner.get());
			return _obj.callFunction< ork::Task* >();
		}

		return OrthoProducer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// void proland::OrthoProducer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			return (_obj.callFunction<void>());
		}

		return OrthoProducer::beginCreateTile();
	};

	// bool proland::OrthoProducer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		if(_obj.pushFunction("doCreateTile")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return OrthoProducer::doCreateTile(level, tx, ty, data);
	};

	// void proland::OrthoProducer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			return (_obj.callFunction<void>());
		}

		return OrthoProducer::endCreateTile();
	};

	// void proland::OrthoProducer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return OrthoProducer::stopCreateTile(level, tx, ty);
	};

	// void proland::OrthoProducer::swap(ork::ptr< proland::OrthoProducer > p)
	void swap(ork::ptr< proland::OrthoProducer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg((proland::OrthoProducer*)p.get());
			return (_obj.callFunction<void>());
		}

		return OrthoProducer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			return (_obj.callFunction<const char*>());
		}

		return OrthoProducer::toString();
	};

	// ork::ptr< proland::TileCache > proland::TileProducer::getCache()
	ork::ptr< proland::TileCache > getCache() {
		if(_obj.pushFunction("getCache")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			return _obj.callFunction< proland::TileCache* >();
		}

		return OrthoProducer::getCache();
	};

	// proland::TileCache::Tile * proland::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	proland::TileCache::Tile * findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) {
		if(_obj.pushFunction("findTile")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(includeCache);
			_obj.pushArg(done);
			return (_obj.callFunction<proland::TileCache::Tile*>());
		}

		return OrthoProducer::findTile(level, tx, ty, includeCache, done);
	};

	// proland::TileCache::Tile * proland::TileProducer::getTile(int level, int tx, int ty, unsigned int deadline)
	proland::TileCache::Tile * getTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("getTile")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<proland::TileCache::Tile*>());
		}

		return OrthoProducer::getTile(level, tx, ty, deadline);
	};

	// void proland::TileProducer::putTile(proland::TileCache::Tile * t)
	void putTile(proland::TileCache::Tile * t) {
		if(_obj.pushFunction("putTile")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return OrthoProducer::putTile(t);
	};

	// void proland::TileProducer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			return (_obj.callFunction<void>());
		}

		return OrthoProducer::invalidateTiles();
	};

	// void proland::TileProducer::invalidateTile(int level, int tx, int ty)
	void invalidateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("invalidateTile")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return OrthoProducer::invalidateTile(level, tx, ty);
	};

	// void proland::TileProducer::update(ork::ptr< ork::SceneManager > scene)
	void update(ork::ptr< ork::SceneManager > scene) {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg((ork::SceneManager*)scene.get());
			return (_obj.callFunction<void>());
		}

		return OrthoProducer::update(scene);
	};

	// void proland::OrthoProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return OrthoProducer::getReferencedProducers(producers);
	};

	// void proland::OrthoProducer::setRootQuadSize(float size)
	void setRootQuadSize(float size) {
		if(_obj.pushFunction("setRootQuadSize")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return OrthoProducer::setRootQuadSize(size);
	};

	// int proland::OrthoProducer::getBorder()
	int getBorder() {
		if(_obj.pushFunction("getBorder")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			return (_obj.callFunction<int>());
		}

		return OrthoProducer::getBorder();
	};

	// bool proland::OrthoProducer::hasTile(int level, int tx, int ty)
	bool hasTile(int level, int tx, int ty) {
		if(_obj.pushFunction("hasTile")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return OrthoProducer::hasTile(level, tx, ty);
	};

	// bool proland::OrthoProducer::prefetchTile(int level, int tx, int ty)
	bool prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::OrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return OrthoProducer::prefetchTile(level, tx, ty);
	};


	// Protected non-virtual methods:
	// void proland::OrthoProducer::init(ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel)
	void public_init(ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel) {
		return proland::OrthoProducer::init(cache, residualTiles, orthoTexture, residualTexture, upsample, rootNoiseColor, noiseColor, noiseAmp, noiseHsv, scale, maxLevel);
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
		if( lua_gettop(L)!=12 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,81304302) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,81304302) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,77249888) ) return false;
		if( lua_isboolean(L,10)==0 ) return false;
		if( lua_type(L,11)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,12)!=LUA_TNUMBER || lua_tointeger(L,12) != lua_tonumber(L,12)) ) return false;
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
	// void proland::OrthoProducer::public_init(ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::OrthoProducer::public_init(ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel) function, expected prototype:\nvoid proland::OrthoProducer::public_init(ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = 81304302\narg 7 ID = 81304302\narg 8 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		ork::ptr< proland::TileProducer > residualTiles = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3);
		ork::ptr< ork::Texture2D > orthoTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4);
		ork::ptr< ork::Texture2D > residualTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,5);
		ork::ptr< ork::Program > upsample = Luna< ork::Object >::checkSubType< ork::Program >(L,6);
		ork::vec4f* rootNoiseColor_ptr=(Luna< ork::vec4f >::check(L,7));
		if( !rootNoiseColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rootNoiseColor in proland::OrthoProducer::public_init function");
		}
		ork::vec4f rootNoiseColor=*rootNoiseColor_ptr;
		ork::vec4f* noiseColor_ptr=(Luna< ork::vec4f >::check(L,8));
		if( !noiseColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg noiseColor in proland::OrthoProducer::public_init function");
		}
		ork::vec4f noiseColor=*noiseColor_ptr;
		std::vector< float >* noiseAmp_ptr=(Luna< std::vector< float > >::check(L,9));
		if( !noiseAmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg noiseAmp in proland::OrthoProducer::public_init function");
		}
		std::vector< float > & noiseAmp=*noiseAmp_ptr;
		bool noiseHsv=(bool)(lua_toboolean(L,10)==1);
		float scale=(float)lua_tonumber(L,11);
		int maxLevel=(int)lua_tointeger(L,12);

		wrapper_proland_OrthoProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::OrthoProducer::public_init(ork::ptr< proland::TileCache >, ork::ptr< proland::TileProducer >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Program >, ork::vec4f, ork::vec4f, std::vector< float > &, bool, float, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(cache, residualTiles, orthoTexture, residualTexture, upsample, rootNoiseColor, noiseColor, noiseAmp, noiseHsv, scale, maxLevel);

		return 0;
	}

	// void proland::TileProducer::public_removeCreateTile(ork::Task * t)
	static int _bind_public_removeCreateTile(lua_State *L) {
		if (!_lg_typecheck_public_removeCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::public_removeCreateTile(ork::Task * t) function, expected prototype:\nvoid proland::TileProducer::public_removeCreateTile(ork::Task * t)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Task* t=(Luna< ork::Object >::checkSubType< ork::Task >(L,2));

		wrapper_proland_OrthoProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_OrthoProducer >(L,1);
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

		wrapper_proland_OrthoProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_OrthoProducer >(L,1);
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

