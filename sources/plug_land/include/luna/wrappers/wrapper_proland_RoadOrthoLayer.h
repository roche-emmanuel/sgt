#ifndef _WRAPPERS_WRAPPER_PROLAND_ROADORTHOLAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_ROADORTHOLAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/ortho/RoadOrthoLayer.h>

class wrapper_proland_RoadOrthoLayer : public proland::RoadOrthoLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_RoadOrthoLayer() {
		logDEBUG3("Calling delete function for wrapper proland_RoadOrthoLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::RoadOrthoLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_RoadOrthoLayer(lua_State* L, lua_Table* dum, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dirt = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false) 
		: proland::RoadOrthoLayer(graphProducer, layerProgram, displayLevel, quality, color, dirt, border, border_width, inner_border_width, deform), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_RoadOrthoLayer(lua_State* L, lua_Table* dum) 
		: proland::RoadOrthoLayer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::doRelease();
	};

	// void proland::RoadOrthoLayer::swap(ork::ptr< proland::RoadOrthoLayer > p)
	void swap(ork::ptr< proland::RoadOrthoLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.pushArg((proland::RoadOrthoLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return RoadOrthoLayer::toString();
	};

	// void proland::TileLayer::setCache(ork::ptr< proland::TileCache > cache, int producerId)
	void setCache(ork::ptr< proland::TileCache > cache, int producerId) {
		if(_obj.pushFunction("setCache")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.pushArg((proland::TileCache*)cache.get());
			_obj.pushArg(producerId);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::setCache(cache, producerId);
	};

	// void proland::TileLayer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::invalidateTiles();
	};

	// void proland::GraphLayer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::getReferencedProducers(producers);
	};

	// void proland::GraphLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	void useTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("useTile")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::useTile(level, tx, ty, deadline);
	};

	// void proland::GraphLayer::unuseTile(int level, int tx, int ty)
	void unuseTile(int level, int tx, int ty) {
		if(_obj.pushFunction("unuseTile")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::unuseTile(level, tx, ty);
	};

	// void proland::GraphLayer::prefetchTile(int level, int tx, int ty)
	void prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::prefetchTile(level, tx, ty);
	};

	// void proland::GraphLayer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::beginCreateTile();
	};

	// void proland::GraphLayer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::endCreateTile();
	};

	// proland::CurveData * proland::CurveDataFactory::newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	proland::CurveData * newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve) {
		if(_obj.pushFunction("newCurveData")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.pushArg(&id);
			_obj.pushArg(&flattenCurve);
			return (_obj.callFunction<proland::CurveData*>());
		}

		return RoadOrthoLayer::newCurveData(id, flattenCurve);
	};

	// void proland::CurveDataFactory::graphChanged()
	void graphChanged() {
		if(_obj.pushFunction("graphChanged")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::graphChanged();
	};

	// void proland::RoadOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	void setTileSize(int tileSize, int tileBorder, float rootQuadSize) {
		if(_obj.pushFunction("setTileSize")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.pushArg(tileSize);
			_obj.pushArg(tileBorder);
			_obj.pushArg(rootQuadSize);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::setTileSize(tileSize, tileBorder, rootQuadSize);
	};

	// void proland::RoadOrthoLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	void startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)owner.get());
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// bool proland::RoadOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		if(_obj.pushFunction("doCreateTile")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return RoadOrthoLayer::doCreateTile(level, tx, ty, data);
	};

	// void proland::RoadOrthoLayer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::RoadOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return RoadOrthoLayer::stopCreateTile(level, tx, ty);
	};


	// Protected non-virtual methods:
	// void proland::RoadOrthoLayer::init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dist = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false)
	void public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dist = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false) {
		return proland::RoadOrthoLayer::init(graphProducer, layerProgram, displayLevel, quality, color, dist, border, border_width, inner_border_width, deform);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>11 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,81304302) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,81304302) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,81304302) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TNUMBER ) return false;
		if( luatop>10 && lua_isboolean(L,11)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::RoadOrthoLayer::public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dist = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dist = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false) function, expected prototype:\nvoid proland::RoadOrthoLayer::public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dist = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 5 ID = 81304302\narg 6 ID = 81304302\narg 7 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::GraphProducer > graphProducer = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2);
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		int displayLevel=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		bool quality=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;
		ork::vec4f* color_ptr=luatop>5 ? (Luna< ork::vec4f >::check(L,6)) : NULL;
		if( luatop>5 && !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in proland::RoadOrthoLayer::public_init function");
		}
		ork::vec4f color=luatop>5 ? *color_ptr : (ork::vec4f)ork::vec4f (0, 0, 0, 0);
		ork::vec4f* dist_ptr=luatop>6 ? (Luna< ork::vec4f >::check(L,7)) : NULL;
		if( luatop>6 && !dist_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dist in proland::RoadOrthoLayer::public_init function");
		}
		ork::vec4f dist=luatop>6 ? *dist_ptr : (ork::vec4f)ork::vec4f (0, 0, 0, 0);
		ork::vec4f* border_ptr=luatop>7 ? (Luna< ork::vec4f >::check(L,8)) : NULL;
		if( luatop>7 && !border_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg border in proland::RoadOrthoLayer::public_init function");
		}
		ork::vec4f border=luatop>7 ? *border_ptr : (ork::vec4f)ork::vec4f (1, 1, 1, 0);
		float border_width=luatop>8 ? (float)lua_tonumber(L,9) : (float)1.2f;
		float inner_border_width=luatop>9 ? (float)lua_tonumber(L,10) : (float)2.0f;
		bool deform=luatop>10 ? (bool)(lua_toboolean(L,11)==1) : (bool)false;

		wrapper_proland_RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::public_init(ork::ptr< proland::GraphProducer >, ork::ptr< ork::Program >, int, bool, ork::vec4f, ork::vec4f, ork::vec4f, float, float, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(graphProducer, layerProgram, displayLevel, quality, color, dist, border, border_width, inner_border_width, deform);

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

