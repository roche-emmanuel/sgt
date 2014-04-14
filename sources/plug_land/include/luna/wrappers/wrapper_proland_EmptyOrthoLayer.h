#ifndef _WRAPPERS_WRAPPER_PROLAND_EMPTYORTHOLAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_EMPTYORTHOLAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/ortho/EmptyOrthoLayer.h>

class wrapper_proland_EmptyOrthoLayer : public proland::EmptyOrthoLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_EmptyOrthoLayer() {
		logDEBUG3("Calling delete function for wrapper proland_EmptyOrthoLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::EmptyOrthoLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_EmptyOrthoLayer(lua_State* L, lua_Table* dum, ork::vec4f color) 
		: proland::EmptyOrthoLayer(color), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_EmptyOrthoLayer(lua_State* L, lua_Table* dum) 
		: proland::EmptyOrthoLayer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::doRelease();
	};

	// void proland::EmptyOrthoLayer::swap(ork::ptr< proland::EmptyOrthoLayer > p)
	void swap(ork::ptr< proland::EmptyOrthoLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.pushArg((proland::EmptyOrthoLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return EmptyOrthoLayer::toString();
	};

	// void proland::TileLayer::setCache(ork::ptr< proland::TileCache > cache, int producerId)
	void setCache(ork::ptr< proland::TileCache > cache, int producerId) {
		if(_obj.pushFunction("setCache")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.pushArg((proland::TileCache*)cache.get());
			_obj.pushArg(producerId);
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::setCache(cache, producerId);
	};

	// void proland::TileLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::getReferencedProducers(producers);
	};

	// void proland::TileLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	void setTileSize(int tileSize, int tileBorder, float rootQuadSize) {
		if(_obj.pushFunction("setTileSize")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.pushArg(tileSize);
			_obj.pushArg(tileBorder);
			_obj.pushArg(rootQuadSize);
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::setTileSize(tileSize, tileBorder, rootQuadSize);
	};

	// void proland::TileLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	void useTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("useTile")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::useTile(level, tx, ty, deadline);
	};

	// void proland::TileLayer::unuseTile(int level, int tx, int ty)
	void unuseTile(int level, int tx, int ty) {
		if(_obj.pushFunction("unuseTile")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::unuseTile(level, tx, ty);
	};

	// void proland::TileLayer::prefetchTile(int level, int tx, int ty)
	void prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::prefetchTile(level, tx, ty);
	};

	// void proland::TileLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	void startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)owner.get());
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// void proland::TileLayer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::beginCreateTile();
	};

	// void proland::TileLayer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::endCreateTile();
	};

	// void proland::TileLayer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::stopCreateTile(level, tx, ty);
	};

	// void proland::TileLayer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			return (_obj.callFunction<void>());
		}

		return EmptyOrthoLayer::invalidateTiles();
	};

	// bool proland::EmptyOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		if(_obj.pushFunction("doCreateTile")) {
			_obj.pushArg((proland::EmptyOrthoLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return EmptyOrthoLayer::doCreateTile(level, tx, ty, data);
	};


	// Protected non-virtual methods:
	// void proland::EmptyOrthoLayer::init(ork::vec4f color)
	void public_init(ork::vec4f color) {
		return proland::EmptyOrthoLayer::init(color);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::EmptyOrthoLayer::public_init(ork::vec4f color)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EmptyOrthoLayer::public_init(ork::vec4f color) function, expected prototype:\nvoid proland::EmptyOrthoLayer::public_init(ork::vec4f color)\nClass arguments details:\narg 1 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec4f* color_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in proland::EmptyOrthoLayer::public_init function");
		}
		ork::vec4f color=*color_ptr;

		wrapper_proland_EmptyOrthoLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_EmptyOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EmptyOrthoLayer::public_init(ork::vec4f). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(color);

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

