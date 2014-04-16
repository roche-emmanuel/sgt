#ifndef _WRAPPERS_WRAPPER_PROLAND_EDITGRAPHORTHOLAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_EDITGRAPHORTHOLAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditGraphOrthoLayer.h>

class wrapper_proland_EditGraphOrthoLayer : public proland::EditGraphOrthoLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_EditGraphOrthoLayer() {
		logDEBUG3("Calling delete function for wrapper proland_EditGraphOrthoLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::EditGraphOrthoLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_EditGraphOrthoLayer(lua_State* L, lua_Table* dum, const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = "", ork::ptr< ork::ResourceManager > manager = NULL) 
		: proland::EditGraphOrthoLayer(graphs, layerProg, displayLevel, tolerance, softEdition, softEditionDelay, deform, terrain, manager), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_EditGraphOrthoLayer(lua_State* L, lua_Table* dum) 
		: proland::EditGraphOrthoLayer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::doRelease();
	};

	// void proland::EditGraphOrthoLayer::init(const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = "", ork::ptr< ork::ResourceManager > manager = NULL)
	void init(const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = "", ork::ptr< ork::ResourceManager > manager = NULL) {
		if(_obj.pushFunction("init")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(&graphs);
			_obj.pushArg((ork::Program*)layerProg.get());
			_obj.pushArg(displayLevel);
			_obj.pushArg(tolerance);
			_obj.pushArg(softEdition);
			_obj.pushArg(softEditionDelay);
			_obj.pushArg(deform);
			_obj.pushArg(terrain);
			_obj.pushArg((ork::ResourceManager*)manager.get());
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::init(graphs, layerProg, displayLevel, tolerance, softEdition, softEditionDelay, deform, terrain, manager);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return EditGraphOrthoLayer::toString();
	};

	// void proland::TileLayer::setCache(ork::ptr< proland::TileCache > cache, int producerId)
	void setCache(ork::ptr< proland::TileCache > cache, int producerId) {
		if(_obj.pushFunction("setCache")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg((proland::TileCache*)cache.get());
			_obj.pushArg(producerId);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::setCache(cache, producerId);
	};

	// void proland::TileLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::getReferencedProducers(producers);
	};

	// void proland::TileLayer::prefetchTile(int level, int tx, int ty)
	void prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::prefetchTile(level, tx, ty);
	};

	// void proland::TileLayer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::invalidateTiles();
	};

	// void proland::EditGraphOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	void setTileSize(int tileSize, int tileBorder, float rootQuadSize) {
		if(_obj.pushFunction("setTileSize")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(tileSize);
			_obj.pushArg(tileBorder);
			_obj.pushArg(rootQuadSize);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::setTileSize(tileSize, tileBorder, rootQuadSize);
	};

	// void proland::EditGraphOrthoLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	void useTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("useTile")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::useTile(level, tx, ty, deadline);
	};

	// void proland::EditGraphOrthoLayer::unuseTile(int level, int tx, int ty)
	void unuseTile(int level, int tx, int ty) {
		if(_obj.pushFunction("unuseTile")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::unuseTile(level, tx, ty);
	};

	// void proland::EditGraphOrthoLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > result)
	void startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > result) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)result.get());
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::startCreateTile(level, tx, ty, deadline, task, result);
	};

	// void proland::EditGraphOrthoLayer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::beginCreateTile();
	};

	// void proland::EditGraphOrthoLayer::drawGraph(const ork::vec3d & tileCoords, proland::GraphPtr g, float pointSize, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly)
	void drawGraph(const ork::vec3d & tileCoords, proland::GraphPtr g, float pointSize, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly) {
		if(_obj.pushFunction("drawGraph")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(&tileCoords);
			_obj.pushArg(&g);
			_obj.pushArg(pointSize);
			_obj.pushArg((ork::Mesh< ork::vec3f, unsigned int >*)mesh.get());
			_obj.pushArg(&nx);
			_obj.pushArg(&ny);
			_obj.pushArg(&lx);
			_obj.pushArg(&ly);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::drawGraph(tileCoords, g, pointSize, mesh, nx, ny, lx, ly);
	};

	// bool proland::EditGraphOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		if(_obj.pushFunction("doCreateTile")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return EditGraphOrthoLayer::doCreateTile(level, tx, ty, data);
	};

	// void proland::EditGraphOrthoLayer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::endCreateTile();
	};

	// void proland::EditGraphOrthoLayer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::stopCreateTile(level, tx, ty);
	};

	// bool proland::EditGraphOrthoLayer::addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)
	bool addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(x);
			_obj.pushArg(y);
			_obj.pushArg(tolerance);
			_obj.pushArg(&g);
			_obj.pushArg(&curve);
			_obj.pushArg(point);
			_obj.pushArg(&changes);
			return (_obj.callFunction<bool>());
		}

		return EditGraphOrthoLayer::addCurve(x, y, tolerance, g, curve, point, changes);
	};

	// bool proland::EditGraphOrthoLayer::addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)
	bool addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes) {
		if(_obj.pushFunction("addCurve")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(x1);
			_obj.pushArg(y1);
			_obj.pushArg(x2);
			_obj.pushArg(y2);
			_obj.pushArg(tolerance);
			_obj.pushArg(&g);
			_obj.pushArg(&curve);
			_obj.pushArg(segment);
			_obj.pushArg(point);
			_obj.pushArg(&changes);
			return (_obj.callFunction<bool>());
		}

		return EditGraphOrthoLayer::addCurve(x1, y1, x2, y2, tolerance, g, curve, segment, point, changes);
	};

	// bool proland::EditGraphOrthoLayer::fitCurve()
	bool fitCurve() {
		if(_obj.pushFunction("fitCurve")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			return (_obj.callFunction<bool>());
		}

		return EditGraphOrthoLayer::fitCurve();
	};

	// void proland::EditGraphOrthoLayer::update()
	void update() {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::update();
	};

	// void proland::EditGraphOrthoLayer::getTypeNames(vector< string > & names)
	void getTypeNames(vector< string > & names) {
		if(_obj.pushFunction("getTypeNames")) {
			_obj.pushArg((proland::EditGraphOrthoLayer*)this);
			_obj.pushArg(&names);
			return (_obj.callFunction<void>());
		}

		return EditGraphOrthoLayer::getTypeNames(names);
	};


	// Protected non-virtual methods:
	// void proland::EditGraphOrthoLayer::swap(ork::ptr< proland::EditGraphOrthoLayer > p)
	void public_swap(ork::ptr< proland::EditGraphOrthoLayer > p) {
		return proland::EditGraphOrthoLayer::swap(p);
	};

	// ork::vec3d proland::EditGraphOrthoLayer::getTileCoords(int level, int tx, int ty)
	ork::vec3d public_getTileCoords(int level, int tx, int ty) {
		return proland::EditGraphOrthoLayer::getTileCoords(level, tx, ty);
	};

	// void proland::TileLayer::init(bool deform = false)
	void public_init(bool deform = false) {
		return proland::TileLayer::init(deform);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_getTileCoords(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::EditGraphOrthoLayer::public_swap(ork::ptr< proland::EditGraphOrthoLayer > p)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditGraphOrthoLayer::public_swap(ork::ptr< proland::EditGraphOrthoLayer > p) function, expected prototype:\nvoid proland::EditGraphOrthoLayer::public_swap(ork::ptr< proland::EditGraphOrthoLayer > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::EditGraphOrthoLayer > p = Luna< ork::Object >::checkSubType< proland::EditGraphOrthoLayer >(L,2);

		wrapper_proland_EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditGraphOrthoLayer::public_swap(ork::ptr< proland::EditGraphOrthoLayer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(p);

		return 0;
	}

	// ork::vec3d proland::EditGraphOrthoLayer::public_getTileCoords(int level, int tx, int ty)
	static int _bind_public_getTileCoords(lua_State *L) {
		if (!_lg_typecheck_public_getTileCoords(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::EditGraphOrthoLayer::public_getTileCoords(int level, int tx, int ty) function, expected prototype:\nork::vec3d proland::EditGraphOrthoLayer::public_getTileCoords(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		wrapper_proland_EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::EditGraphOrthoLayer::public_getTileCoords(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->public_getTileCoords(level, tx, ty);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// void proland::TileLayer::public_init(bool deform = false)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::public_init(bool deform = false) function, expected prototype:\nvoid proland::TileLayer::public_init(bool deform = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool deform=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wrapper_proland_EditGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_EditGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::public_init(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(deform);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"swap",_bind_public_swap},
		{"getTileCoords",_bind_public_getTileCoords},
		{"init",_bind_public_init},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

