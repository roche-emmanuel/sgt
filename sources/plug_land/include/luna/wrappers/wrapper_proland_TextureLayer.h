#ifndef _WRAPPERS_WRAPPER_PROLAND_TEXTURELAYER_H_
#define _WRAPPERS_WRAPPER_PROLAND_TEXTURELAYER_H_

#include <plug_common.h>

#include "lua/LuaObject.h"

#include <proland/ortho/TextureLayer.h>

class wrapper_proland_TextureLayer : public proland::TextureLayer, public luna_wrapper_base {

public:
		

	~wrapper_proland_TextureLayer() {
		logDEBUG3("Calling delete function for wrapper proland_TextureLayer");
		if(_obj.pushFunction("delete")) {
			//_obj.pushArg((proland::TextureLayer*)this); // No this argument or the object will be referenced again!
			_obj.callFunction<void>();
		}
	};
	
	wrapper_proland_TextureLayer(lua_State* L, lua_Table* dum, ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false) 
		: proland::TextureLayer(tiles, program, tilesSamplerName, blend, minDisplaylevel, storeTiles), luna_wrapper_base(L) { 
		register_protected_methods(L);
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.callFunction<void>();
		}
	};
	wrapper_proland_TextureLayer(lua_State* L, lua_Table* dum) 
		: proland::TextureLayer(), luna_wrapper_base(L) { 
		register_protected_methods(L); 
		if(_obj.pushFunction("buildInstance")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.callFunction<void>();
		}
	};


	// Private virtual methods:
protected:
	// Protected virtual methods:
	// void ork::Object::doRelease()
	void doRelease() {
		if(_obj.pushFunction("doRelease")) {
			_obj.pushArg((proland::TextureLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TextureLayer::doRelease();
	};

	// void proland::TextureLayer::swap(ork::ptr< proland::TextureLayer > p)
	void swap(ork::ptr< proland::TextureLayer > p) {
		if(_obj.pushFunction("swap")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.pushArg((proland::TextureLayer*)p.get());
			return (_obj.callFunction<void>());
		}

		return TextureLayer::swap(p);
	};

public:
	// Public virtual methods:
	// const char * ork::Object::toString()
	const char * toString() {
		if(_obj.pushFunction("toString")) {
			_obj.pushArg((proland::TextureLayer*)this);
			return (_obj.callFunction<const char*>());
		}

		return TextureLayer::toString();
	};

	// void proland::TileLayer::setCache(ork::ptr< proland::TileCache > cache, int producerId)
	void setCache(ork::ptr< proland::TileCache > cache, int producerId) {
		if(_obj.pushFunction("setCache")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.pushArg((proland::TileCache*)cache.get());
			_obj.pushArg(producerId);
			return (_obj.callFunction<void>());
		}

		return TextureLayer::setCache(cache, producerId);
	};

	// void proland::TileLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	void setTileSize(int tileSize, int tileBorder, float rootQuadSize) {
		if(_obj.pushFunction("setTileSize")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.pushArg(tileSize);
			_obj.pushArg(tileBorder);
			_obj.pushArg(rootQuadSize);
			return (_obj.callFunction<void>());
		}

		return TextureLayer::setTileSize(tileSize, tileBorder, rootQuadSize);
	};

	// void proland::TileLayer::prefetchTile(int level, int tx, int ty)
	void prefetchTile(int level, int tx, int ty) {
		if(_obj.pushFunction("prefetchTile")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return TextureLayer::prefetchTile(level, tx, ty);
	};

	// void proland::TileLayer::beginCreateTile()
	void beginCreateTile() {
		if(_obj.pushFunction("beginCreateTile")) {
			_obj.pushArg((proland::TextureLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TextureLayer::beginCreateTile();
	};

	// void proland::TileLayer::endCreateTile()
	void endCreateTile() {
		if(_obj.pushFunction("endCreateTile")) {
			_obj.pushArg((proland::TextureLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TextureLayer::endCreateTile();
	};

	// void proland::TileLayer::invalidateTiles()
	void invalidateTiles() {
		if(_obj.pushFunction("invalidateTiles")) {
			_obj.pushArg((proland::TextureLayer*)this);
			return (_obj.callFunction<void>());
		}

		return TextureLayer::invalidateTiles();
	};

	// void proland::TextureLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	void getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const {
		if(_obj.pushFunction("getReferencedProducers")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.pushArg(&producers);
			return (_obj.callFunction<void>());
		}

		return TextureLayer::getReferencedProducers(producers);
	};

	// void proland::TextureLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	void useTile(int level, int tx, int ty, unsigned int deadline) {
		if(_obj.pushFunction("useTile")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			return (_obj.callFunction<void>());
		}

		return TextureLayer::useTile(level, tx, ty, deadline);
	};

	// void proland::TextureLayer::unuseTile(int level, int tx, int ty)
	void unuseTile(int level, int tx, int ty) {
		if(_obj.pushFunction("unuseTile")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return TextureLayer::unuseTile(level, tx, ty);
	};

	// bool proland::TextureLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	bool doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) {
		if(_obj.pushFunction("doCreateTile")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(data);
			return (_obj.callFunction<bool>());
		}

		return TextureLayer::doCreateTile(level, tx, ty, data);
	};

	// void proland::TextureLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	void startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) {
		if(_obj.pushFunction("startCreateTile")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			_obj.pushArg(deadline);
			_obj.pushArg((ork::Task*)task.get());
			_obj.pushArg((ork::TaskGraph*)owner.get());
			return (_obj.callFunction<void>());
		}

		return TextureLayer::startCreateTile(level, tx, ty, deadline, task, owner);
	};

	// void proland::TextureLayer::stopCreateTile(int level, int tx, int ty)
	void stopCreateTile(int level, int tx, int ty) {
		if(_obj.pushFunction("stopCreateTile")) {
			_obj.pushArg((proland::TextureLayer*)this);
			_obj.pushArg(level);
			_obj.pushArg(tx);
			_obj.pushArg(ty);
			return (_obj.callFunction<void>());
		}

		return TextureLayer::stopCreateTile(level, tx, ty);
	};


	// Protected non-virtual methods:
	// void proland::TextureLayer::init(ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false)
	void public_init(ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false) {
		return proland::TextureLayer::init(tiles, program, tilesSamplerName, blend, minDisplaylevel, storeTiles);
	};


	// Protected non-virtual checkers:
	inline static bool _lg_typecheck_public_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,11252811) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}


	// Protected non-virtual function binds:
	// void proland::TextureLayer::public_init(ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false)
	static int _bind_public_init(lua_State *L) {
		if (!_lg_typecheck_public_init(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::public_init(ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false) function, expected prototype:\nvoid proland::TextureLayer::public_init(ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 4 ID = 11252811\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::TileProducer > tiles = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);
		ork::ptr< ork::Program > program = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		std::string tilesSamplerName(lua_tostring(L,4),lua_objlen(L,4));
		proland::TextureLayer::BlendParams* blend_ptr=(Luna< proland::TextureLayer::BlendParams >::check(L,5));
		if( !blend_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg blend in proland::TextureLayer::public_init function");
		}
		proland::TextureLayer::BlendParams blend=*blend_ptr;
		int minDisplaylevel=(int)lua_tointeger(L,6);
		bool storeTiles=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;

		wrapper_proland_TextureLayer* self=Luna< ork::Object >::checkSubType< wrapper_proland_TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::public_init(ork::ptr< proland::TileProducer >, ork::ptr< ork::Program >, std::string, proland::TextureLayer::BlendParams, int, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->public_init(tiles, program, tilesSamplerName, blend, minDisplaylevel, storeTiles);

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

