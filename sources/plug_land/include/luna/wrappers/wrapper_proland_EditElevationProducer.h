#ifndef _WRAPPERS_WRAPPER_PROLAND_EDITELEVATIONPRODUCER_H_
#define _WRAPPERS_WRAPPER_PROLAND_EDITELEVATIONPRODUCER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditElevationProducer.h>

class wrapper_proland_EditElevationProducer : public proland::EditElevationProducer, public luna_wrapper_base {

public:
		

	~wrapper_proland_EditElevationProducer() {
		logDEBUG3("Calling delete function for wrapper proland_EditElevationProducer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::EditElevationProducer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_EditElevationProducer(lua_State* L, lua_Table* dum, ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > demTexture, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::ptr< ork::Program > blend, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, int gridMeshSize, ork::ptr< ork::ResourceManager > manager, const string & terrain, vector< float > & noiseAmp, bool flipDiagonals = false) 
		: proland::EditElevationProducer(cache, residualTiles, demTexture, layerTexture, residualTexture, upsample, blend, edit, brush, gridMeshSize, manager, terrain, noiseAmp, flipDiagonals), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_EditElevationProducer(lua_State* L, lua_Table* dum) 
		: proland::EditElevationProducer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::doRelease();
	};

	// void * proland::ElevationProducer::getContext() const
	void * getContext() const {
		if(_obj.pushFunction("getContext")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (_obj.callFunction<void*>());
		}

		return EditElevationProducer::getContext();
	};

	// ork::ptr< ork::Task > proland::ElevationProducer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	ork::ptr< ork::Task > startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)owner.get());
			return _obj.callFunction< ork::Task* >();
		}

		return EditElevationProducer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// void proland::ElevationProducer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::beginCreateTile();
	};

	// void proland::ElevationProducer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::endCreateTile();
	};

	// void proland::ElevationProducer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::stopCreateTile(level, tx, ty);
	};

	// bool proland::EditElevationProducer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		if(_obj.pushFunction("doCreateTile")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return EditElevationProducer::doCreateTile(level, tx, ty, data);
	};

	// void proland::EditElevationProducer::swap(ork::ptr< proland::EditElevationProducer > p)
	void swap(ork::ptr< proland::EditElevationProducer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg((proland::EditElevationProducer*)p.get());
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (_obj.callFunction<const char*>());
		}

		return EditElevationProducer::toString();
	};

	// ork::ptr< proland::TileCache > proland::TileProducer::getCache()
	ork::ptr< proland::TileCache > getCache() {
		if(_obj.pushFunction("getCache")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return _obj.callFunction< proland::TileCache* >();
		}

		return EditElevationProducer::getCache();
	};

	// bool proland::TileProducer::hasTile(int level, int tx, int ty)
	bool hasTile(int level, int tx, int ty) {
		if(_obj.pushFunction("hasTile")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return EditElevationProducer::hasTile(level, tx, ty);
	};

	// proland::TileCache::Tile * proland::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	proland::TileCache::Tile * findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) {
		if(_obj.pushFunction("findTile")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(includeCache);
			_obj.pushArg(done);
			return (_obj.callFunction<proland::TileCache::Tile*>());
		}

		return EditElevationProducer::findTile(level, tx, ty, includeCache, done);
	};

	// proland::TileCache::Tile * proland::TileProducer::getTile(int level, int tx, int ty, unsigned int deadline)
	proland::TileCache::Tile * getTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("getTile")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<proland::TileCache::Tile*>());
		}

		return EditElevationProducer::getTile(level, tx, ty, deadline);
	};

	// bool proland::TileProducer::prefetchTile(int level, int tx, int ty)
	bool prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return EditElevationProducer::prefetchTile(level, tx, ty);
	};

	// void proland::TileProducer::putTile(proland::TileCache::Tile * t)
	void putTile(proland::TileCache::Tile * t) {
		if(_obj.pushFunction("putTile")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::putTile(t);
	};

	// void proland::TileProducer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::invalidateTiles();
	};

	// void proland::TileProducer::invalidateTile(int level, int tx, int ty)
	void invalidateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("invalidateTile")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::invalidateTile(level, tx, ty);
	};

	// void proland::ElevationProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::getReferencedProducers(producers);
	};

	// void proland::ElevationProducer::setRootQuadSize(float size)
	void setRootQuadSize(float size) {
		if(_obj.pushFunction("setRootQuadSize")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::setRootQuadSize(size);
	};

	// int proland::ElevationProducer::getBorder()
	int getBorder() {
		if(_obj.pushFunction("getBorder")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (_obj.callFunction<int>());
		}

		return EditElevationProducer::getBorder();
	};

	// ork::SceneNode * proland::EditElevationProducer::getTerrain()
	ork::SceneNode * getTerrain() {
		if(_obj.pushFunction("getTerrain")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (_obj.callFunction<ork::SceneNode*>());
		}

		return EditElevationProducer::getTerrain();
	};

	// proland::TerrainNode * proland::EditElevationProducer::getTerrainNode()
	proland::TerrainNode * getTerrainNode() {
		if(_obj.pushFunction("getTerrainNode")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (_obj.callFunction<proland::TerrainNode*>());
		}

		return EditElevationProducer::getTerrainNode();
	};

	// void proland::EditElevationProducer::setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint)
	void setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint) {
		if(_obj.pushFunction("setPencil")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(&pencil);
			_obj.pushArg(&brushColor);
			_obj.pushArg(paint);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::setPencil(pencil, brushColor, paint);
	};

	// ork::vec4f proland::EditElevationProducer::getBrushColor()
	ork::vec4f getBrushColor() {
		if(_obj.pushFunction("getBrushColor")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return *(_obj.callFunction<ork::vec4f*>());
		}

		return EditElevationProducer::getBrushColor();
	};

	// void proland::EditElevationProducer::setEditMode(ork::BlendEquation editMode)
	void setEditMode(ork::BlendEquation editMode) {
		if(_obj.pushFunction("setEditMode")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg((int)editMode);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::setEditMode(editMode);
	};

	// ork::BlendEquation proland::EditElevationProducer::getEditMode()
	ork::BlendEquation getEditMode() {
		if(_obj.pushFunction("getEditMode")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (ork::BlendEquation)(_obj.callFunction<int>());
		}

		return EditElevationProducer::getEditMode();
	};

	// void proland::EditElevationProducer::edit(const vector< ork::vec4d > & strokes)
	void edit(const vector< ork::vec4d > & strokes) {
		if(_obj.pushFunction("edit")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			_obj.pushArg(&strokes);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::edit(strokes);
	};

	// void proland::EditElevationProducer::update()
	void update() {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::update();
	};

	// void proland::EditElevationProducer::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((proland::EditElevationProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditElevationProducer::reset();
	};


	// Protected non-virtual methods:
	// void proland::EditElevationProducer::init(ork::ptr< ork::ResourceManager > manager, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, const string & terrain)
	void public_init(ork::ptr< ork::ResourceManager > manager, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, const string & terrain) {
		return proland::EditElevationProducer::init(manager, edit, brush, terrain);
	};

	// void proland::TileProducer::removeCreateTile(ork::Task * t)
	void public_removeCreateTile(ork::Task * t) {
		return proland::TileProducer::removeCreateTile(t);
	};

	// ork::ptr< ork::TaskGraph > proland::TileProducer::createTaskGraph(ork::ptr< ork::Task > task)
	ork::ptr< ork::TaskGraph > public_createTaskGraph(ork::ptr< ork::Task > task) {
		return proland::TileProducer::createTaskGraph(task);
	};

	// void proland::Editor::swap(proland::Editor * e)
	void public_swap(proland::Editor * e) {
		return proland::Editor::swap(e);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Module >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		if( lua_type(L,5)!=LUA_TSTRING ) return false;
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

	inline static bool _lg_typecheck_public_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,4450546)) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::EditElevationProducer::public_init(ork::ptr< ork::ResourceManager > manager, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, const string & terrain)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditElevationProducer::public_init(ork::ptr< ork::ResourceManager > manager, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, const string & terrain) function, expected prototype:\nvoid proland::EditElevationProducer::public_init(ork::ptr< ork::ResourceManager > manager, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, const string & terrain)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::ResourceManager > manager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2);
		ork::ptr< ork::Module > edit = Luna< ork::Object >::checkSubType< ork::Module >(L,3);
		ork::ptr< ork::Program > brush = Luna< ork::Object >::checkSubType< ork::Program >(L,4);
		std::string terrain(lua_tostring(L,5),lua_objlen(L,5));

		wrapper_proland_EditElevationProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_EditElevationProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditElevationProducer::public_init(ork::ptr< ork::ResourceManager >, ork::ptr< ork::Module >, ork::ptr< ork::Program >, const string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(manager, edit, brush, terrain);

		return 0;
	}

	// void proland::TileProducer::public_removeCreateTile(ork::Task * t)
	static int _bind_public_removeCreateTile(lua_State *L) {
		if (!_lg_typecheck_public_removeCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::public_removeCreateTile(ork::Task * t) function, expected prototype:\nvoid proland::TileProducer::public_removeCreateTile(ork::Task * t)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Task* t=(Luna< ork::Object >::checkSubType< ork::Task >(L,2));

		wrapper_proland_EditElevationProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_EditElevationProducer >(L,1);
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

		wrapper_proland_EditElevationProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_EditElevationProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::TaskGraph > proland::TileProducer::public_createTaskGraph(ork::ptr< ork::Task >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::TaskGraph > lret = self->public_createTaskGraph(task);
		Luna< ork::TaskGraph >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::Editor::public_swap(proland::Editor * e)
	static int _bind_public_swap(lua_State *L) {
		if (!_lg_typecheck_public_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::Editor::public_swap(proland::Editor * e) function, expected prototype:\nvoid proland::Editor::public_swap(proland::Editor * e)\nClass arguments details:\narg 1 ID = 4450546\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Editor* e=(Luna< proland::Editor >::check(L,2));

		wrapper_proland_EditElevationProducer* self=Luna< proland::Editor >::checkSubType< wrapper_proland_EditElevationProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::Editor::public_swap(proland::Editor *). Got : '%s'\n%s",typeid(Luna< proland::Editor >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_swap(e);

		return 0;
	}


	void register_protected_methods(lua_State* L) {
		static const luaL_Reg wrapper_lib[] = {
		{"init",_bind_public_init},
		{"removeCreateTile",_bind_public_removeCreateTile},
		{"createTaskGraph",_bind_public_createTaskGraph},
		{"swap",_bind_public_swap},
		{NULL,NULL}
		};

		pushTable();
		luaL_register(L, NULL, wrapper_lib);
		lua_pop(L, 1);
	};


};




#endif

