#ifndef _WRAPPERS_WRAPPER_PROLAND_EDITORTHOPRODUCER_H_
#define _WRAPPERS_WRAPPER_PROLAND_EDITORTHOPRODUCER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/edit/proland/edit/EditOrthoProducer.h>

class wrapper_proland_EditOrthoProducer : public proland::EditOrthoProducer, public luna_wrapper_base {

public:
		

	~wrapper_proland_EditOrthoProducer() {
		logDEBUG3("Calling delete function for wrapper proland_EditOrthoProducer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::EditOrthoProducer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_EditOrthoProducer(lua_State* L, lua_Table* dum, ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, ork::ptr< ork::ResourceManager > manager, const string & terrain) 
		: proland::EditOrthoProducer(cache, residualTiles, orthoTexture, residualTexture, layerTexture, upsample, rootNoiseColor, noiseColor, noiseAmp, noiseHsv, scale, maxLevel, edit, brush, compose, manager, terrain), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_EditOrthoProducer(lua_State* L, lua_Table* dum) 
		: proland::EditOrthoProducer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::doRelease();
	};

	// void * proland::OrthoProducer::getContext() const
	void * getContext() const {
		if(_obj.pushFunction("getContext")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return (_obj.callFunction<void*>());
		}

		return EditOrthoProducer::getContext();
	};

	// ork::ptr< ork::Task > proland::OrthoProducer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	ork::ptr< ork::Task > startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)owner.get());
			return _obj.callFunction< ork::Task* >();
		}

		return EditOrthoProducer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// void proland::OrthoProducer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::beginCreateTile();
	};

	// void proland::OrthoProducer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::endCreateTile();
	};

	// void proland::OrthoProducer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::stopCreateTile(level, tx, ty);
	};

	// bool proland::EditOrthoProducer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		if(_obj.pushFunction("doCreateTile")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return EditOrthoProducer::doCreateTile(level, tx, ty, data);
	};

	// void proland::EditOrthoProducer::swap(ork::ptr< proland::EditOrthoProducer > p)
	void swap(ork::ptr< proland::EditOrthoProducer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg((proland::EditOrthoProducer*)p.get());
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return (_obj.callFunction<const char*>());
		}

		return EditOrthoProducer::toString();
	};

	// ork::ptr< proland::TileCache > proland::TileProducer::getCache()
	ork::ptr< proland::TileCache > getCache() {
		if(_obj.pushFunction("getCache")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return _obj.callFunction< proland::TileCache* >();
		}

		return EditOrthoProducer::getCache();
	};

	// proland::TileCache::Tile * proland::TileProducer::findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	proland::TileCache::Tile * findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) {
		if(_obj.pushFunction("findTile")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(includeCache);
			_obj.pushArg(done);
			return (_obj.callFunction<proland::TileCache::Tile*>());
		}

		return EditOrthoProducer::findTile(level, tx, ty, includeCache, done);
	};

	// proland::TileCache::Tile * proland::TileProducer::getTile(int level, int tx, int ty, unsigned int deadline)
	proland::TileCache::Tile * getTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("getTile")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<proland::TileCache::Tile*>());
		}

		return EditOrthoProducer::getTile(level, tx, ty, deadline);
	};

	// void proland::TileProducer::putTile(proland::TileCache::Tile * t)
	void putTile(proland::TileCache::Tile * t) {
		if(_obj.pushFunction("putTile")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(t);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::putTile(t);
	};

	// void proland::TileProducer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::invalidateTiles();
	};

	// void proland::TileProducer::invalidateTile(int level, int tx, int ty)
	void invalidateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("invalidateTile")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::invalidateTile(level, tx, ty);
	};

	// void proland::OrthoProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::getReferencedProducers(producers);
	};

	// void proland::OrthoProducer::setRootQuadSize(float size)
	void setRootQuadSize(float size) {
		if(_obj.pushFunction("setRootQuadSize")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(size);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::setRootQuadSize(size);
	};

	// int proland::OrthoProducer::getBorder()
	int getBorder() {
		if(_obj.pushFunction("getBorder")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return (_obj.callFunction<int>());
		}

		return EditOrthoProducer::getBorder();
	};

	// bool proland::OrthoProducer::hasTile(int level, int tx, int ty)
	bool hasTile(int level, int tx, int ty) {
		if(_obj.pushFunction("hasTile")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return EditOrthoProducer::hasTile(level, tx, ty);
	};

	// bool proland::OrthoProducer::prefetchTile(int level, int tx, int ty)
	bool prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<bool>());
		}

		return EditOrthoProducer::prefetchTile(level, tx, ty);
	};

	// ork::SceneNode * proland::EditOrthoProducer::getTerrain()
	ork::SceneNode * getTerrain() {
		if(_obj.pushFunction("getTerrain")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return (_obj.callFunction<ork::SceneNode*>());
		}

		return EditOrthoProducer::getTerrain();
	};

	// proland::TerrainNode * proland::EditOrthoProducer::getTerrainNode()
	proland::TerrainNode * getTerrainNode() {
		if(_obj.pushFunction("getTerrainNode")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return (_obj.callFunction<proland::TerrainNode*>());
		}

		return EditOrthoProducer::getTerrainNode();
	};

	// void proland::EditOrthoProducer::setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint)
	void setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint) {
		if(_obj.pushFunction("setPencil")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(&pencil);
			_obj.pushArg(&brushColor);
			_obj.pushArg(paint);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::setPencil(pencil, brushColor, paint);
	};

	// ork::vec4f proland::EditOrthoProducer::getBrushColor()
	ork::vec4f getBrushColor() {
		if(_obj.pushFunction("getBrushColor")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return *(_obj.callFunction<ork::vec4f*>());
		}

		return EditOrthoProducer::getBrushColor();
	};

	// void proland::EditOrthoProducer::edit(const vector< ork::vec4d > & strokes)
	void edit(const vector< ork::vec4d > & strokes) {
		if(_obj.pushFunction("edit")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			_obj.pushArg(&strokes);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::edit(strokes);
	};

	// void proland::EditOrthoProducer::update()
	void update() {
		if(_obj.pushFunction("update")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::update();
	};

	// void proland::EditOrthoProducer::reset()
	void reset() {
		if(_obj.pushFunction("reset")) {
			_obj.pushArg((proland::EditOrthoProducer*)this);
			return (_obj.callFunction<void>());
		}

		return EditOrthoProducer::reset();
	};


	// Protected non-virtual methods:
	// void proland::EditOrthoProducer::init(ork::ptr< ork::ResourceManager > manager, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, const string & terrain)
	void public_init(ork::ptr< ork::ResourceManager > manager, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, const string & terrain) {
		return proland::EditOrthoProducer::init(manager, layerTexture, edit, brush, compose, terrain);
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
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Module >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,6) ) return false;
		if( lua_type(L,7)!=LUA_TSTRING ) return false;
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
	// void proland::EditOrthoProducer::public_init(ork::ptr< ork::ResourceManager > manager, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, const string & terrain)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::public_init(ork::ptr< ork::ResourceManager > manager, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, const string & terrain) function, expected prototype:\nvoid proland::EditOrthoProducer::public_init(ork::ptr< ork::ResourceManager > manager, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, const string & terrain)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::ResourceManager > manager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2);
		ork::ptr< ork::Texture2D > layerTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3);
		ork::ptr< ork::Module > edit = Luna< ork::Object >::checkSubType< ork::Module >(L,4);
		ork::ptr< ork::Program > brush = Luna< ork::Object >::checkSubType< ork::Program >(L,5);
		ork::ptr< ork::Program > compose = Luna< ork::Object >::checkSubType< ork::Program >(L,6);
		std::string terrain(lua_tostring(L,7),lua_objlen(L,7));

		wrapper_proland_EditOrthoProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::public_init(ork::ptr< ork::ResourceManager >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Module >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, const string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(manager, layerTexture, edit, brush, compose, terrain);

		return 0;
	}

	// void proland::TileProducer::public_removeCreateTile(ork::Task * t)
	static int _bind_public_removeCreateTile(lua_State *L) {
		if (!_lg_typecheck_public_removeCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileProducer::public_removeCreateTile(ork::Task * t) function, expected prototype:\nvoid proland::TileProducer::public_removeCreateTile(ork::Task * t)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::Task* t=(Luna< ork::Object >::checkSubType< ork::Task >(L,2));

		wrapper_proland_EditOrthoProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_EditOrthoProducer >(L,1);
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

		wrapper_proland_EditOrthoProducer* self=Luna< ork::Object >::checkSubType< wrapper_proland_EditOrthoProducer >(L,1);
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

		wrapper_proland_EditOrthoProducer* self=Luna< proland::Editor >::checkSubType< wrapper_proland_EditOrthoProducer >(L,1);
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

