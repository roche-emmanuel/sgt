#ifndef _WRAPPERS_WRAPPER_PROLAND_ELEVATIONGRAPHLAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_ELEVATIONGRAPHLAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/dem/ElevationGraphLayer.h>

class wrapper_proland_ElevationGraphLayer : public proland::ElevationGraphLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_ElevationGraphLayer() {
		logDEBUG3("Calling delete function for wrapper proland_ElevationGraphLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ElevationGraphLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ElevationGraphLayer(lua_State* L, lua_Table* dum, const char * name) 
		: proland::ElevationGraphLayer(name), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_ElevationGraphLayer(lua_State* L, lua_Table* dum, const char * name, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false) 
		: proland::ElevationGraphLayer(name, graphProducer, layerProgram, elevations, displayLevel, quality, storeGraphTiles, deform), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::doRelease();
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return ElevationGraphLayer::toString();
	};

	// void proland::TileLayer::setCache(ork::ptr< proland::TileCache > cache, int producerId)
	void setCache(ork::ptr< proland::TileCache > cache, int producerId) {
		if(_obj.pushFunction("setCache")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.pushArg((proland::TileCache*)cache.get());
			_obj.pushArg(producerId);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::setCache(cache, producerId);
	};

	// bool proland::TileLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		THROW_IF(!_obj.pushFunction("doCreateTile"),"No implementation for abstract function proland::TileLayer::doCreateTile");
		_obj.pushArg((proland::ElevationGraphLayer*)this);
		_obj.pushArg(level);
		_obj.pushArg(tx);
		_obj.pushArg(ty);
		_obj.pushArg(data);
		return (_obj.callFunction<bool>());
	};

	// void proland::TileLayer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::invalidateTiles();
	};

	// void proland::GraphLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	void useTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("useTile")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::useTile(level, tx, ty, deadline);
	};

	// void proland::GraphLayer::unuseTile(int level, int tx, int ty)
	void unuseTile(int level, int tx, int ty) {
		if(_obj.pushFunction("unuseTile")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::unuseTile(level, tx, ty);
	};

	// void proland::GraphLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	void setTileSize(int tileSize, int tileBorder, float rootQuadSize) {
		if(_obj.pushFunction("setTileSize")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.pushArg(tileSize);
			_obj.pushArg(tileBorder);
			_obj.pushArg(rootQuadSize);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::setTileSize(tileSize, tileBorder, rootQuadSize);
	};

	// void proland::GraphLayer::prefetchTile(int level, int tx, int ty)
	void prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::prefetchTile(level, tx, ty);
	};

	// void proland::GraphLayer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::beginCreateTile();
	};

	// void proland::GraphLayer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::endCreateTile();
	};

	// proland::CurveData * proland::CurveDataFactory::newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	proland::CurveData * newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve) {
		if(_obj.pushFunction("newCurveData")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.pushArg(&id);
			_obj.pushArg(&flattenCurve);
			return (_obj.callFunction<proland::CurveData*>());
		}

		return ElevationGraphLayer::newCurveData(id, flattenCurve);
	};

	// void proland::CurveDataFactory::graphChanged()
	void graphChanged() {
		if(_obj.pushFunction("graphChanged")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::graphChanged();
	};

	// void proland::ElevationGraphLayer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::getReferencedProducers(producers);
	};

	// void proland::ElevationGraphLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	void startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)owner.get());
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// void proland::ElevationGraphLayer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::stopCreateTile(level, tx, ty);
	};

	// void proland::ElevationGraphLayer::swap(ork::ptr< proland::ElevationGraphLayer > p)
	void swap(ork::ptr< proland::ElevationGraphLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::ElevationGraphLayer*)this);
			_obj.pushArg((proland::ElevationGraphLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return ElevationGraphLayer::swap(p);
	};


	// Protected non-virtual methods:
	// void proland::ElevationGraphLayer::init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false)
	void public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false) {
		return proland::ElevationGraphLayer::init(graphProducer, layerProgram, elevations, displayLevel, quality, storeGraphTiles, deform);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>8 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,4) ) return false;
		if( luatop>4 && (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		if( luatop>7 && lua_isboolean(L,8)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::ElevationGraphLayer::public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false) function, expected prototype:\nvoid proland::ElevationGraphLayer::public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::GraphProducer > graphProducer = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2);
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		ork::ptr< proland::TileProducer > elevations = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,4);
		int displayLevel=luatop>4 ? (int)lua_tointeger(L,5) : (int)0;
		bool quality=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;
		bool storeGraphTiles=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;
		bool deform=luatop>7 ? (bool)(lua_toboolean(L,8)==1) : (bool)false;

		wrapper_proland_ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::public_init(ork::ptr< proland::GraphProducer >, ork::ptr< ork::Program >, ork::ptr< proland::TileProducer >, int, bool, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(graphProducer, layerProgram, elevations, displayLevel, quality, storeGraphTiles, deform);

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

