#ifndef _WRAPPERS_WRAPPER_PROLAND_FORESTORTHOLAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_FORESTORTHOLAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <W:/Cloud/Projects/sgt/sources/proland/sources/graph/proland/ortho/ForestOrthoLayer.h>

class wrapper_proland_ForestOrthoLayer : public proland::ForestOrthoLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_ForestOrthoLayer() {
		logDEBUG3("Calling delete function for wrapper proland_ForestOrthoLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::ForestOrthoLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_ForestOrthoLayer(lua_State* L, lua_Table* dum, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0)) 
		: proland::ForestOrthoLayer(graphProducer, layerProgram, displayLevel, quality, color), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_ForestOrthoLayer(lua_State* L, lua_Table* dum) 
		: proland::ForestOrthoLayer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::doRelease();
	};

	// void proland::ForestOrthoLayer::swap(ork::ptr< proland::ForestOrthoLayer > p)
	void swap(ork::ptr< proland::ForestOrthoLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.pushArg((proland::ForestOrthoLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return ForestOrthoLayer::toString();
	};

	// void proland::TileLayer::setCache(ork::ptr< proland::TileCache > cache, int producerId)
	void setCache(ork::ptr< proland::TileCache > cache, int producerId) {
		if(_obj.pushFunction("setCache")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.pushArg((proland::TileCache*)cache.get());
			_obj.pushArg(producerId);
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::setCache(cache, producerId);
	};

	// void proland::TileLayer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::invalidateTiles();
	};

	// void proland::GraphLayer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::getReferencedProducers(producers);
	};

	// void proland::GraphLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	void useTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("useTile")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::useTile(level, tx, ty, deadline);
	};

	// void proland::GraphLayer::unuseTile(int level, int tx, int ty)
	void unuseTile(int level, int tx, int ty) {
		if(_obj.pushFunction("unuseTile")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::unuseTile(level, tx, ty);
	};

	// void proland::GraphLayer::prefetchTile(int level, int tx, int ty)
	void prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::prefetchTile(level, tx, ty);
	};

	// void proland::GraphLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	void startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)owner.get());
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// void proland::GraphLayer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::beginCreateTile();
	};

	// void proland::GraphLayer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::endCreateTile();
	};

	// void proland::GraphLayer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::stopCreateTile(level, tx, ty);
	};

	// void proland::ForestOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	void setTileSize(int tileSize, int tileBorder, float rootQuadSize) {
		if(_obj.pushFunction("setTileSize")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.pushArg(tileSize);
			_obj.pushArg(tileBorder);
			_obj.pushArg(rootQuadSize);
			return (_obj.callFunction<void>());
		}

		return ForestOrthoLayer::setTileSize(tileSize, tileBorder, rootQuadSize);
	};

	// bool proland::ForestOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		if(_obj.pushFunction("doCreateTile")) {
			_obj.pushArg((proland::ForestOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return ForestOrthoLayer::doCreateTile(level, tx, ty, data);
	};


	// Protected non-virtual methods:
	// void proland::ForestOrthoLayer::init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0))
	void public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0)) {
		return proland::ForestOrthoLayer::init(graphProducer, layerProgram, displayLevel, quality, color);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,81304302) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::ForestOrthoLayer::public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0))
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0)) function, expected prototype:\nvoid proland::ForestOrthoLayer::public_init(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0))\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 5 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::GraphProducer > graphProducer = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2);
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		int displayLevel=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		bool quality=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;
		ork::vec4f* color_ptr=luatop>5 ? (Luna< ork::vec4f >::check(L,6)) : NULL;
		if( luatop>5 && !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in proland::ForestOrthoLayer::public_init function");
		}
		ork::vec4f color=luatop>5 ? *color_ptr : (ork::vec4f)ork::vec4f (0, 0, 0, 0);

		wrapper_proland_ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::public_init(ork::ptr< proland::GraphProducer >, ork::ptr< ork::Program >, int, bool, ork::vec4f). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(graphProducer, layerProgram, displayLevel, quality, color);

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

