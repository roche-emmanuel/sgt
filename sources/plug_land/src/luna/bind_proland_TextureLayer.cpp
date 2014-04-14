#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TextureLayer.h>

class luna_wrapper_proland_TextureLayer {
public:
	typedef Luna< proland::TextureLayer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::TextureLayer* self= (proland::TextureLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TextureLayer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::TextureLayer* ptr= dynamic_cast< proland::TextureLayer* >(Luna< ork::Object >::check(L,1));
		proland::TextureLayer* ptr= luna_caster< ork::Object, proland::TextureLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TextureLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,4,11252811) ) return false;
		if( (!(Luna< proland::TextureLayer::BlendParams >::check(L,4))) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,5,11252811) ) return false;
		if( (!(Luna< proland::TextureLayer::BlendParams >::check(L,5))) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unuseTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_doCreateTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,72091111)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_startCreateTile(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_stopCreateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setCache(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_beginCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_endCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_useTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_unuseTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_doCreateTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,72091111)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_startCreateTile(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Task >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_stopCreateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TextureLayer::TextureLayer(ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false)
	static proland::TextureLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TextureLayer::TextureLayer(ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false) function, expected prototype:\nproland::TextureLayer::TextureLayer(ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 4 ID = 11252811\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::TileProducer > tiles = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,1);
		ork::ptr< ork::Program > program = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		std::string tilesSamplerName(lua_tostring(L,3),lua_objlen(L,3));
		proland::TextureLayer::BlendParams* blend_ptr=(Luna< proland::TextureLayer::BlendParams >::check(L,4));
		if( !blend_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg blend in proland::TextureLayer::TextureLayer function");
		}
		proland::TextureLayer::BlendParams blend=*blend_ptr;
		int minDisplaylevel=(int)lua_tointeger(L,5);
		bool storeTiles=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		return new proland::TextureLayer(tiles, program, tilesSamplerName, blend, minDisplaylevel, storeTiles);
	}

	// proland::TextureLayer::TextureLayer(lua_Table * data, ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false)
	static proland::TextureLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TextureLayer::TextureLayer(lua_Table * data, ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false) function, expected prototype:\nproland::TextureLayer::TextureLayer(lua_Table * data, ork::ptr< proland::TileProducer > tiles, ork::ptr< ork::Program > program, std::string tilesSamplerName, proland::TextureLayer::BlendParams blend, int minDisplaylevel, bool storeTiles = false)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 5 ID = 11252811\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::TileProducer > tiles = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);
		ork::ptr< ork::Program > program = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		std::string tilesSamplerName(lua_tostring(L,4),lua_objlen(L,4));
		proland::TextureLayer::BlendParams* blend_ptr=(Luna< proland::TextureLayer::BlendParams >::check(L,5));
		if( !blend_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg blend in proland::TextureLayer::TextureLayer function");
		}
		proland::TextureLayer::BlendParams blend=*blend_ptr;
		int minDisplaylevel=(int)lua_tointeger(L,6);
		bool storeTiles=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;

		return new wrapper_proland_TextureLayer(L,NULL, tiles, program, tilesSamplerName, blend, minDisplaylevel, storeTiles);
	}

	// Overload binder for proland::TextureLayer::TextureLayer
	static proland::TextureLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TextureLayer, cannot match any of the overloads for function TextureLayer:\n  TextureLayer(ork::ptr< proland::TileProducer >, ork::ptr< ork::Program >, std::string, proland::TextureLayer::BlendParams, int, bool)\n  TextureLayer(lua_Table *, ork::ptr< proland::TileProducer >, ork::ptr< ork::Program >, std::string, proland::TextureLayer::BlendParams, int, bool)\n");
		return NULL;
	}


	// Function binds:
	// void proland::TextureLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::TextureLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::TextureLayer::getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// void proland::TextureLayer::useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_useTile(lua_State *L) {
		if (!_lg_typecheck_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::TextureLayer::useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::TextureLayer::unuseTile(int level, int tx, int ty)
	static int _bind_unuseTile(lua_State *L) {
		if (!_lg_typecheck_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TextureLayer::unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->unuseTile(level, tx, ty);

		return 0;
	}

	// bool proland::TextureLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TextureLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::TextureLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TextureLayer::doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TextureLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::TextureLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void proland::TextureLayer::stopCreateTile(int level, int tx, int ty)
	static int _bind_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TextureLayer::stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stopCreateTile(level, tx, ty);

		return 0;
	}

	// const char * proland::TextureLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TextureLayer::base_toString() function, expected prototype:\nconst char * proland::TextureLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TextureLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TextureLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::TextureLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)
	static int _bind_base_setCache(lua_State *L) {
		if (!_lg_typecheck_base_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId) function, expected prototype:\nvoid proland::TextureLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int producerId=(int)lua_tointeger(L,3);

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::base_setCache(ork::ptr< proland::TileCache >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureLayer::setCache(cache, producerId);

		return 0;
	}

	// void proland::TextureLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_base_setTileSize(lua_State *L) {
		if (!_lg_typecheck_base_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::TextureLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::base_setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureLayer::setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void proland::TextureLayer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TextureLayer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureLayer::prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::TextureLayer::base_beginCreateTile()
	static int _bind_base_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::base_beginCreateTile() function, expected prototype:\nvoid proland::TextureLayer::base_beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::base_beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureLayer::beginCreateTile();

		return 0;
	}

	// void proland::TextureLayer::base_endCreateTile()
	static int _bind_base_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::base_endCreateTile() function, expected prototype:\nvoid proland::TextureLayer::base_endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::base_endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureLayer::endCreateTile();

		return 0;
	}

	// void proland::TextureLayer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::base_invalidateTiles() function, expected prototype:\nvoid proland::TextureLayer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureLayer::invalidateTiles();

		return 0;
	}

	// void proland::TextureLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::TextureLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::TextureLayer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::TextureLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_useTile(lua_State *L) {
		if (!_lg_typecheck_base_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::base_useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::TextureLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::base_useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureLayer::useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::TextureLayer::base_unuseTile(int level, int tx, int ty)
	static int _bind_base_unuseTile(lua_State *L) {
		if (!_lg_typecheck_base_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::base_unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TextureLayer::base_unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::base_unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureLayer::unuseTile(level, tx, ty);

		return 0;
	}

	// bool proland::TextureLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_base_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::TextureLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::TextureLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::TextureLayer::base_doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->TextureLayer::doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::TextureLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_base_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::TextureLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::base_startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureLayer::startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void proland::TextureLayer::base_stopCreateTile(int level, int tx, int ty)
	static int _bind_base_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TextureLayer::base_stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::TextureLayer::base_stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::TextureLayer* self=Luna< ork::Object >::checkSubType< proland::TextureLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TextureLayer::base_stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TextureLayer::stopCreateTile(level, tx, ty);

		return 0;
	}


	// Operator binds:

};

proland::TextureLayer* LunaTraits< proland::TextureLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TextureLayer::_bind_ctor(L);
}

void LunaTraits< proland::TextureLayer >::_bind_dtor(proland::TextureLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TextureLayer >::className[] = "TextureLayer";
const char LunaTraits< proland::TextureLayer >::fullName[] = "proland::TextureLayer";
const char LunaTraits< proland::TextureLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::TextureLayer >::parents[] = {"proland.TileLayer", 0};
const int LunaTraits< proland::TextureLayer >::hash = 79004595;
const int LunaTraits< proland::TextureLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TextureLayer >::methods[] = {
	{"getReferencedProducers", &luna_wrapper_proland_TextureLayer::_bind_getReferencedProducers},
	{"useTile", &luna_wrapper_proland_TextureLayer::_bind_useTile},
	{"unuseTile", &luna_wrapper_proland_TextureLayer::_bind_unuseTile},
	{"doCreateTile", &luna_wrapper_proland_TextureLayer::_bind_doCreateTile},
	{"startCreateTile", &luna_wrapper_proland_TextureLayer::_bind_startCreateTile},
	{"stopCreateTile", &luna_wrapper_proland_TextureLayer::_bind_stopCreateTile},
	{"base_toString", &luna_wrapper_proland_TextureLayer::_bind_base_toString},
	{"base_setCache", &luna_wrapper_proland_TextureLayer::_bind_base_setCache},
	{"base_setTileSize", &luna_wrapper_proland_TextureLayer::_bind_base_setTileSize},
	{"base_prefetchTile", &luna_wrapper_proland_TextureLayer::_bind_base_prefetchTile},
	{"base_beginCreateTile", &luna_wrapper_proland_TextureLayer::_bind_base_beginCreateTile},
	{"base_endCreateTile", &luna_wrapper_proland_TextureLayer::_bind_base_endCreateTile},
	{"base_invalidateTiles", &luna_wrapper_proland_TextureLayer::_bind_base_invalidateTiles},
	{"base_getReferencedProducers", &luna_wrapper_proland_TextureLayer::_bind_base_getReferencedProducers},
	{"base_useTile", &luna_wrapper_proland_TextureLayer::_bind_base_useTile},
	{"base_unuseTile", &luna_wrapper_proland_TextureLayer::_bind_base_unuseTile},
	{"base_doCreateTile", &luna_wrapper_proland_TextureLayer::_bind_base_doCreateTile},
	{"base_startCreateTile", &luna_wrapper_proland_TextureLayer::_bind_base_startCreateTile},
	{"base_stopCreateTile", &luna_wrapper_proland_TextureLayer::_bind_base_stopCreateTile},
	{"fromVoid", &luna_wrapper_proland_TextureLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TextureLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TextureLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TextureLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TextureLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TextureLayer >::enumValues[] = {
	{0,0}
};


