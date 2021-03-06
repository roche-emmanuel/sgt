#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ForestOrthoLayer.h>

class luna_wrapper_proland_ForestOrthoLayer {
public:
	typedef Luna< proland::ForestOrthoLayer > luna_t;

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

		proland::ForestOrthoLayer* self= (proland::ForestOrthoLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ForestOrthoLayer >::push(L,self,false);
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
		//proland::ForestOrthoLayer* ptr= dynamic_cast< proland::ForestOrthoLayer* >(Luna< ork::Object >::check(L,1));
		proland::ForestOrthoLayer* ptr= luna_caster< ork::Object, proland::ForestOrthoLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ForestOrthoLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>5 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,81304302) ) return false;
		if( luatop>4 && (!(Luna< ork::vec4f >::check(L,5))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,81304302) ) return false;
		if( luatop>5 && (!(Luna< ork::vec4f >::check(L,6))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80419678) ) return false;
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

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
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

	inline static bool _lg_typecheck_base_beginCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_endCreateTile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_stopCreateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ForestOrthoLayer::ForestOrthoLayer(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0))
	static proland::ForestOrthoLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ForestOrthoLayer::ForestOrthoLayer(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0)) function, expected prototype:\nproland::ForestOrthoLayer::ForestOrthoLayer(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0))\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 5 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::GraphProducer > graphProducer = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		int displayLevel=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		bool quality=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		ork::vec4f* color_ptr=luatop>4 ? (Luna< ork::vec4f >::check(L,5)) : NULL;
		if( luatop>4 && !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in proland::ForestOrthoLayer::ForestOrthoLayer function");
		}
		ork::vec4f color=luatop>4 ? *color_ptr : (ork::vec4f)ork::vec4f (0, 0, 0, 0);

		return new proland::ForestOrthoLayer(graphProducer, layerProgram, displayLevel, quality, color);
	}

	// proland::ForestOrthoLayer::ForestOrthoLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0))
	static proland::ForestOrthoLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ForestOrthoLayer::ForestOrthoLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0)) function, expected prototype:\nproland::ForestOrthoLayer::ForestOrthoLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0))\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 6 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::GraphProducer > graphProducer = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2);
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		int displayLevel=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		bool quality=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;
		ork::vec4f* color_ptr=luatop>5 ? (Luna< ork::vec4f >::check(L,6)) : NULL;
		if( luatop>5 && !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in proland::ForestOrthoLayer::ForestOrthoLayer function");
		}
		ork::vec4f color=luatop>5 ? *color_ptr : (ork::vec4f)ork::vec4f (0, 0, 0, 0);

		return new wrapper_proland_ForestOrthoLayer(L,NULL, graphProducer, layerProgram, displayLevel, quality, color);
	}

	// Overload binder for proland::ForestOrthoLayer::ForestOrthoLayer
	static proland::ForestOrthoLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ForestOrthoLayer, cannot match any of the overloads for function ForestOrthoLayer:\n  ForestOrthoLayer(ork::ptr< proland::GraphProducer >, ork::ptr< ork::Program >, int, bool, ork::vec4f)\n  ForestOrthoLayer(lua_Table *, ork::ptr< proland::GraphProducer >, ork::ptr< ork::Program >, int, bool, ork::vec4f)\n");
		return NULL;
	}


	// Function binds:
	// void proland::ForestOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_setTileSize(lua_State *L) {
		if (!_lg_typecheck_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::ForestOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// bool proland::ForestOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::ForestOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::ForestOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::ForestOrthoLayer::doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * proland::ForestOrthoLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::ForestOrthoLayer::base_toString() function, expected prototype:\nconst char * proland::ForestOrthoLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::ForestOrthoLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ForestOrthoLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::ForestOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)
	static int _bind_base_setCache(lua_State *L) {
		if (!_lg_typecheck_base_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId) function, expected prototype:\nvoid proland::ForestOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int producerId=(int)lua_tointeger(L,3);

		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::base_setCache(ork::ptr< proland::TileCache >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForestOrthoLayer::setCache(cache, producerId);

		return 0;
	}

	// void proland::ForestOrthoLayer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::base_invalidateTiles() function, expected prototype:\nvoid proland::ForestOrthoLayer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForestOrthoLayer::invalidateTiles();

		return 0;
	}

	// void proland::ForestOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::ForestOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::ForestOrthoLayer::base_getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForestOrthoLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::ForestOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_useTile(lua_State *L) {
		if (!_lg_typecheck_base_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::ForestOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::base_useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForestOrthoLayer::useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::ForestOrthoLayer::base_unuseTile(int level, int tx, int ty)
	static int _bind_base_unuseTile(lua_State *L) {
		if (!_lg_typecheck_base_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::base_unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::ForestOrthoLayer::base_unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::base_unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForestOrthoLayer::unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::ForestOrthoLayer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::ForestOrthoLayer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForestOrthoLayer::prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::ForestOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_base_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::ForestOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::base_startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForestOrthoLayer::startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void proland::ForestOrthoLayer::base_beginCreateTile()
	static int _bind_base_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::base_beginCreateTile() function, expected prototype:\nvoid proland::ForestOrthoLayer::base_beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::base_beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForestOrthoLayer::beginCreateTile();

		return 0;
	}

	// void proland::ForestOrthoLayer::base_endCreateTile()
	static int _bind_base_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::base_endCreateTile() function, expected prototype:\nvoid proland::ForestOrthoLayer::base_endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::base_endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForestOrthoLayer::endCreateTile();

		return 0;
	}

	// void proland::ForestOrthoLayer::base_stopCreateTile(int level, int tx, int ty)
	static int _bind_base_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::base_stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::ForestOrthoLayer::base_stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::base_stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForestOrthoLayer::stopCreateTile(level, tx, ty);

		return 0;
	}

	// void proland::ForestOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_base_setTileSize(lua_State *L) {
		if (!_lg_typecheck_base_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ForestOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::ForestOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ForestOrthoLayer::base_setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ForestOrthoLayer::setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// bool proland::ForestOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_base_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::ForestOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::ForestOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::ForestOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::ForestOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::ForestOrthoLayer::base_doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->ForestOrthoLayer::doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::ForestOrthoLayer* LunaTraits< proland::ForestOrthoLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ForestOrthoLayer::_bind_ctor(L);
}

void LunaTraits< proland::ForestOrthoLayer >::_bind_dtor(proland::ForestOrthoLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::ForestOrthoLayer >::className[] = "ForestOrthoLayer";
const char LunaTraits< proland::ForestOrthoLayer >::fullName[] = "proland::ForestOrthoLayer";
const char LunaTraits< proland::ForestOrthoLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::ForestOrthoLayer >::parents[] = {"proland.GraphLayer", 0};
const int LunaTraits< proland::ForestOrthoLayer >::hash = 82041664;
const int LunaTraits< proland::ForestOrthoLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::ForestOrthoLayer >::methods[] = {
	{"setTileSize", &luna_wrapper_proland_ForestOrthoLayer::_bind_setTileSize},
	{"doCreateTile", &luna_wrapper_proland_ForestOrthoLayer::_bind_doCreateTile},
	{"base_toString", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_toString},
	{"base_setCache", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_setCache},
	{"base_invalidateTiles", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_invalidateTiles},
	{"base_getReferencedProducers", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_getReferencedProducers},
	{"base_useTile", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_useTile},
	{"base_unuseTile", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_unuseTile},
	{"base_prefetchTile", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_prefetchTile},
	{"base_startCreateTile", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_startCreateTile},
	{"base_beginCreateTile", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_beginCreateTile},
	{"base_endCreateTile", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_endCreateTile},
	{"base_stopCreateTile", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_stopCreateTile},
	{"base_setTileSize", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_setTileSize},
	{"base_doCreateTile", &luna_wrapper_proland_ForestOrthoLayer::_bind_base_doCreateTile},
	{"fromVoid", &luna_wrapper_proland_ForestOrthoLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ForestOrthoLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ForestOrthoLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ForestOrthoLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_ForestOrthoLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ForestOrthoLayer >::enumValues[] = {
	{0,0}
};


