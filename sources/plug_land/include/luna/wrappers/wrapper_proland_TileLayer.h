#ifndef _WRAPPERS_WRAPPER_PROLAND_TILELAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_TILELAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/producer/TileLayer.h>

class wrapper_proland_TileLayer : public proland::TileLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_TileLayer() {
		logDEBUG3("Calling delete function for wrapper proland_TileLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TileLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TileLayer(lua_State* L, lua_Table* dum, const char * type, bool deform = false) 
		: proland::TileLayer(type, deform), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TileLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TileLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TileLayer::doRelease();
	};

	// void proland::TileLayer::swap(ork::ptr< proland::TileLayer > p)
	void swap(ork::ptr< proland::TileLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::TileLayer*)this);
			_obj.pushArg((proland::TileLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return TileLayer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TileLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return TileLayer::toString();
	};

	// void proland::TileLayer::setCache(ork::ptr< proland::TileCache > cache, int producerId)
	void setCache(ork::ptr< proland::TileCache > cache, int producerId) {
		if(_obj.pushFunction("setCache")) {
			_obj.pushArg((proland::TileLayer*)this);
			_obj.pushArg((proland::TileCache*)cache.get());
			_obj.pushArg(producerId);
			return (_obj.callFunction<void>());
		}

		return TileLayer::setCache(cache, producerId);
	};

	// void proland::TileLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::TileLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return TileLayer::getReferencedProducers(producers);
	};

	// void proland::TileLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	void setTileSize(int tileSize, int tileBorder, float rootQuadSize) {
		if(_obj.pushFunction("setTileSize")) {
			_obj.pushArg((proland::TileLayer*)this);
			_obj.pushArg(tileSize);
			_obj.pushArg(tileBorder);
			_obj.pushArg(rootQuadSize);
			return (_obj.callFunction<void>());
		}

		return TileLayer::setTileSize(tileSize, tileBorder, rootQuadSize);
	};

	// void proland::TileLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	void useTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("useTile")) {
			_obj.pushArg((proland::TileLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<void>());
		}

		return TileLayer::useTile(level, tx, ty, deadline);
	};

	// void proland::TileLayer::unuseTile(int level, int tx, int ty)
	void unuseTile(int level, int tx, int ty) {
		if(_obj.pushFunction("unuseTile")) {
			_obj.pushArg((proland::TileLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return TileLayer::unuseTile(level, tx, ty);
	};

	// void proland::TileLayer::prefetchTile(int level, int tx, int ty)
	void prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::TileLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return TileLayer::prefetchTile(level, tx, ty);
	};

	// void proland::TileLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	void startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::TileLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)owner.get());
			return (_obj.callFunction<void>());
		}

		return TileLayer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// void proland::TileLayer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::TileLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TileLayer::beginCreateTile();
	};

	// bool proland::TileLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		THROW_IF(!_obj.pushFunction("doCreateTile"),"No implementation for abstract function proland::TileLayer::doCreateTile");
		_obj.pushArg((proland::TileLayer*)this);
		_obj.pushArg(level);
		_obj.pushArg(tx);
		_obj.pushArg(ty);
		_obj.pushArg(data);
		return (_obj.callFunction<bool>());
	};

	// void proland::TileLayer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::TileLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TileLayer::endCreateTile();
	};

	// void proland::TileLayer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::TileLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return TileLayer::stopCreateTile(level, tx, ty);
	};

	// void proland::TileLayer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::TileLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TileLayer::invalidateTiles();
	};


	// Protected non-virtual methods:
	// void proland::TileLayer::init(bool deform = false)
	void public_init(bool deform = false) {
		return proland::TileLayer::init(deform);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TileLayer::public_init(bool deform = false)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TileLayer::public_init(bool deform = false) function, expected prototype:\nvoid proland::TileLayer::public_init(bool deform = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		bool deform=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;

		wrapper_proland_TileLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_TileLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TileLayer::public_init(bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(deform);

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

