#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ElevationGraphLayer.h>

class luna_wrapper_proland_ElevationGraphLayer {
public:
	typedef Luna< proland::ElevationGraphLayer > luna_t;

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

		proland::ElevationGraphLayer* self= (proland::ElevationGraphLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ElevationGraphLayer >::push(L,self,false);
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
		//proland::ElevationGraphLayer* ptr= dynamic_cast< proland::ElevationGraphLayer* >(Luna< ork::Object >::check(L,1));
		proland::ElevationGraphLayer* ptr= luna_caster< ork::Object, proland::ElevationGraphLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ElevationGraphLayer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GraphListener(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::ElevationGraphLayer* ptr= dynamic_cast< proland::ElevationGraphLayer* >(Luna< proland::GraphListener >::check(L,1));
		proland::ElevationGraphLayer* ptr= luna_caster< proland::GraphListener, proland::ElevationGraphLayer >::cast(Luna< proland::GraphListener >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ElevationGraphLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>9 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,5) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		if( luatop>7 && lua_isboolean(L,8)==0 ) return false;
		if( luatop>8 && lua_isboolean(L,9)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80419678) ) return false;
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

	inline static bool _lg_typecheck_drawCurveAltitude(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<11 || luatop>15 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,53008858)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_isboolean(L,8)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,9) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,10) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,5903696) ) return false;
		if( luatop>11 && (lua_isnil(L,12)==0 && !Luna<void>::has_uniqueid(L,12,81304238)) ) return false;
		if( luatop>12 && (lua_isnil(L,13)==0 && !Luna<void>::has_uniqueid(L,13,81304238)) ) return false;
		if( luatop>13 && (lua_isnil(L,14)==0 && !Luna<void>::has_uniqueid(L,14,81304238)) ) return false;
		if( luatop>14 && (lua_isnil(L,15)==0 && !Luna<void>::has_uniqueid(L,15,81304238)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,2) ) return false;
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

	inline static bool _lg_typecheck_base_newCurveData(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,58015782) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_graphChanged(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,80419678) ) return false;
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

	inline static bool _lg_typecheck_base_swap(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,2) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ElevationGraphLayer::ElevationGraphLayer(lua_Table * data, const char * name)
	static proland::ElevationGraphLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ElevationGraphLayer::ElevationGraphLayer(lua_Table * data, const char * name) function, expected prototype:\nproland::ElevationGraphLayer::ElevationGraphLayer(lua_Table * data, const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		return new wrapper_proland_ElevationGraphLayer(L,NULL, name);
	}

	// proland::ElevationGraphLayer::ElevationGraphLayer(lua_Table * data, const char * name, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false)
	static proland::ElevationGraphLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ElevationGraphLayer::ElevationGraphLayer(lua_Table * data, const char * name, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false) function, expected prototype:\nproland::ElevationGraphLayer::ElevationGraphLayer(lua_Table * data, const char * name, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, ork::ptr< proland::TileProducer > elevations, int displayLevel = 0, bool quality = true, bool storeGraphTiles = false, bool deform = false)\nClass arguments details:\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * name=(const char *)lua_tostring(L,2);
		ork::ptr< proland::GraphProducer > graphProducer = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,3);
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,4);
		ork::ptr< proland::TileProducer > elevations = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,5);
		int displayLevel=luatop>5 ? (int)lua_tointeger(L,6) : (int)0;
		bool quality=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)true;
		bool storeGraphTiles=luatop>7 ? (bool)(lua_toboolean(L,8)==1) : (bool)false;
		bool deform=luatop>8 ? (bool)(lua_toboolean(L,9)==1) : (bool)false;

		return new wrapper_proland_ElevationGraphLayer(L,NULL, name, graphProducer, layerProgram, elevations, displayLevel, quality, storeGraphTiles, deform);
	}

	// Overload binder for proland::ElevationGraphLayer::ElevationGraphLayer
	static proland::ElevationGraphLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ElevationGraphLayer, cannot match any of the overloads for function ElevationGraphLayer:\n  ElevationGraphLayer(lua_Table *, const char *)\n  ElevationGraphLayer(lua_Table *, const char *, ork::ptr< proland::GraphProducer >, ork::ptr< ork::Program >, ork::ptr< proland::TileProducer >, int, bool, bool, bool)\n");
		return NULL;
	}


	// Function binds:
	// void proland::ElevationGraphLayer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::ElevationGraphLayer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::ElevationGraphLayer::getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// void proland::ElevationGraphLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::ElevationGraphLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void proland::ElevationGraphLayer::stopCreateTile(int level, int tx, int ty)
	static int _bind_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::ElevationGraphLayer::stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stopCreateTile(level, tx, ty);

		return 0;
	}

	// void proland::ElevationGraphLayer::drawCurveAltitude(const ork::vec3d & tileCoords, proland::CurvePtr p, proland::ElevationCurveData * data, float width, float nwidth, float stepLength, bool caps, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL)
	static int _bind_drawCurveAltitude(lua_State *L) {
		if (!_lg_typecheck_drawCurveAltitude(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::drawCurveAltitude(const ork::vec3d & tileCoords, proland::CurvePtr p, proland::ElevationCurveData * data, float width, float nwidth, float stepLength, bool caps, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL) function, expected prototype:\nvoid proland::ElevationGraphLayer::drawCurveAltitude(const ork::vec3d & tileCoords, proland::CurvePtr p, proland::ElevationCurveData * data, float width, float nwidth, float stepLength, bool caps, ork::ptr< ork::FrameBuffer > fb, ork::ptr< ork::Program > prog, ork::Mesh< ork::vec4f, unsigned int > & mesh, ork::vec2d * nx = NULL, ork::vec2d * ny = NULL, ork::vec2d * lx = NULL, ork::vec2d * ly = NULL)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 98496290\narg 3 ID = 53008858\narg 8 ID = [unknown]\narg 9 ID = [unknown]\narg 10 ID = [unknown]\narg 11 ID = 81304238\narg 12 ID = 81304238\narg 13 ID = 81304238\narg 14 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const ork::vec3d* tileCoords_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !tileCoords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tileCoords in proland::ElevationGraphLayer::drawCurveAltitude function");
		}
		const ork::vec3d & tileCoords=*tileCoords_ptr;
		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::ElevationGraphLayer::drawCurveAltitude function");
		}
		proland::CurvePtr p=*p_ptr;
		proland::ElevationCurveData* data=(Luna< proland::CurveData >::checkSubType< proland::ElevationCurveData >(L,4));
		float width=(float)lua_tonumber(L,5);
		float nwidth=(float)lua_tonumber(L,6);
		float stepLength=(float)lua_tonumber(L,7);
		bool caps=(bool)(lua_toboolean(L,8)==1);
		ork::ptr< ork::FrameBuffer > fb = Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,9);
		ork::ptr< ork::Program > prog = Luna< ork::Object >::checkSubType< ork::Program >(L,10);
		ork::Mesh< ork::vec4f, unsigned int >* mesh_ptr=(Luna< ork::Mesh< ork::vec4f, unsigned int > >::check(L,11));
		if( !mesh_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg mesh in proland::ElevationGraphLayer::drawCurveAltitude function");
		}
		ork::Mesh< ork::vec4f, unsigned int > & mesh=*mesh_ptr;
		ork::vec2d* nx=luatop>11 ? (Luna< ork::vec2d >::check(L,12)) : (ork::vec2d*)NULL;
		ork::vec2d* ny=luatop>12 ? (Luna< ork::vec2d >::check(L,13)) : (ork::vec2d*)NULL;
		ork::vec2d* lx=luatop>13 ? (Luna< ork::vec2d >::check(L,14)) : (ork::vec2d*)NULL;
		ork::vec2d* ly=luatop>14 ? (Luna< ork::vec2d >::check(L,15)) : (ork::vec2d*)NULL;

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::drawCurveAltitude(const ork::vec3d &, proland::CurvePtr, proland::ElevationCurveData *, float, float, float, bool, ork::ptr< ork::FrameBuffer >, ork::ptr< ork::Program >, ork::Mesh< ork::vec4f, unsigned int > &, ork::vec2d *, ork::vec2d *, ork::vec2d *, ork::vec2d *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawCurveAltitude(tileCoords, p, data, width, nwidth, stepLength, caps, fb, prog, mesh, nx, ny, lx, ly);

		return 0;
	}

	// void proland::ElevationGraphLayer::swap(ork::ptr< proland::ElevationGraphLayer > p)
	static int _bind_swap(lua_State *L) {
		if (!_lg_typecheck_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::swap(ork::ptr< proland::ElevationGraphLayer > p) function, expected prototype:\nvoid proland::ElevationGraphLayer::swap(ork::ptr< proland::ElevationGraphLayer > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::ElevationGraphLayer > p = Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,2);

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::swap(ork::ptr< proland::ElevationGraphLayer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->swap(p);

		return 0;
	}

	// const char * proland::ElevationGraphLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::ElevationGraphLayer::base_toString() function, expected prototype:\nconst char * proland::ElevationGraphLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::ElevationGraphLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->ElevationGraphLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::ElevationGraphLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)
	static int _bind_base_setCache(lua_State *L) {
		if (!_lg_typecheck_base_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId) function, expected prototype:\nvoid proland::ElevationGraphLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int producerId=(int)lua_tointeger(L,3);

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_setCache(ork::ptr< proland::TileCache >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::setCache(cache, producerId);

		return 0;
	}

	// void proland::ElevationGraphLayer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_invalidateTiles() function, expected prototype:\nvoid proland::ElevationGraphLayer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::invalidateTiles();

		return 0;
	}

	// void proland::ElevationGraphLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_useTile(lua_State *L) {
		if (!_lg_typecheck_base_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::ElevationGraphLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::ElevationGraphLayer::base_unuseTile(int level, int tx, int ty)
	static int _bind_base_unuseTile(lua_State *L) {
		if (!_lg_typecheck_base_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::ElevationGraphLayer::base_unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::ElevationGraphLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_base_setTileSize(lua_State *L) {
		if (!_lg_typecheck_base_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::ElevationGraphLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void proland::ElevationGraphLayer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::ElevationGraphLayer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::ElevationGraphLayer::base_beginCreateTile()
	static int _bind_base_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_beginCreateTile() function, expected prototype:\nvoid proland::ElevationGraphLayer::base_beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::beginCreateTile();

		return 0;
	}

	// void proland::ElevationGraphLayer::base_endCreateTile()
	static int _bind_base_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_endCreateTile() function, expected prototype:\nvoid proland::ElevationGraphLayer::base_endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::endCreateTile();

		return 0;
	}

	// proland::CurveData * proland::ElevationGraphLayer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	static int _bind_base_newCurveData(lua_State *L) {
		if (!_lg_typecheck_base_newCurveData(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveData * proland::ElevationGraphLayer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve) function, expected prototype:\nproland::CurveData * proland::ElevationGraphLayer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::ElevationGraphLayer::base_newCurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::ElevationGraphLayer::base_newCurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveData * proland::ElevationGraphLayer::base_newCurveData(proland::CurveId, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveData * lret = self->ElevationGraphLayer::newCurveData(id, flattenCurve);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveData >::push(L,lret,false);

		return 1;
	}

	// void proland::ElevationGraphLayer::base_graphChanged()
	static int _bind_base_graphChanged(lua_State *L) {
		if (!_lg_typecheck_base_graphChanged(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_graphChanged() function, expected prototype:\nvoid proland::ElevationGraphLayer::base_graphChanged()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_graphChanged(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::graphChanged();

		return 0;
	}

	// void proland::ElevationGraphLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::ElevationGraphLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::ElevationGraphLayer::base_getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::ElevationGraphLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_base_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::ElevationGraphLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void proland::ElevationGraphLayer::base_stopCreateTile(int level, int tx, int ty)
	static int _bind_base_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::ElevationGraphLayer::base_stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::stopCreateTile(level, tx, ty);

		return 0;
	}

	// void proland::ElevationGraphLayer::base_swap(ork::ptr< proland::ElevationGraphLayer > p)
	static int _bind_base_swap(lua_State *L) {
		if (!_lg_typecheck_base_swap(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ElevationGraphLayer::base_swap(ork::ptr< proland::ElevationGraphLayer > p) function, expected prototype:\nvoid proland::ElevationGraphLayer::base_swap(ork::ptr< proland::ElevationGraphLayer > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::ElevationGraphLayer > p = Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,2);

		proland::ElevationGraphLayer* self=Luna< ork::Object >::checkSubType< proland::ElevationGraphLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ElevationGraphLayer::base_swap(ork::ptr< proland::ElevationGraphLayer >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ElevationGraphLayer::swap(p);

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_proland_GraphListener(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_proland_GraphListener(lua_State *L) {
		if (!_lg_typecheck_baseCast_proland_GraphListener(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_proland_GraphListener function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		proland::GraphListener* res = luna_caster<ork::Object,proland::GraphListener>::cast(self); // dynamic_cast<proland::GraphListener*>(self);
		if(!res)
			return 0;
			
		Luna< proland::GraphListener >::push(L,res,false);
		return 1;

	}

};

proland::ElevationGraphLayer* LunaTraits< proland::ElevationGraphLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ElevationGraphLayer::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool proland::TileLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
}

void LunaTraits< proland::ElevationGraphLayer >::_bind_dtor(proland::ElevationGraphLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::ElevationGraphLayer >::className[] = "ElevationGraphLayer";
const char LunaTraits< proland::ElevationGraphLayer >::fullName[] = "proland::ElevationGraphLayer";
const char LunaTraits< proland::ElevationGraphLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::ElevationGraphLayer >::parents[] = {"proland.GraphLayer", "proland.CurveDataFactory", 0};
const int LunaTraits< proland::ElevationGraphLayer >::hash = 55587622;
const int LunaTraits< proland::ElevationGraphLayer >::uniqueIDs[] = {1381405, 23314933,0};

luna_RegType LunaTraits< proland::ElevationGraphLayer >::methods[] = {
	{"getReferencedProducers", &luna_wrapper_proland_ElevationGraphLayer::_bind_getReferencedProducers},
	{"startCreateTile", &luna_wrapper_proland_ElevationGraphLayer::_bind_startCreateTile},
	{"stopCreateTile", &luna_wrapper_proland_ElevationGraphLayer::_bind_stopCreateTile},
	{"drawCurveAltitude", &luna_wrapper_proland_ElevationGraphLayer::_bind_drawCurveAltitude},
	{"swap", &luna_wrapper_proland_ElevationGraphLayer::_bind_swap},
	{"base_toString", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_toString},
	{"base_setCache", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_setCache},
	{"base_invalidateTiles", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_invalidateTiles},
	{"base_useTile", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_useTile},
	{"base_unuseTile", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_unuseTile},
	{"base_setTileSize", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_setTileSize},
	{"base_prefetchTile", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_prefetchTile},
	{"base_beginCreateTile", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_beginCreateTile},
	{"base_endCreateTile", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_endCreateTile},
	{"base_newCurveData", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_newCurveData},
	{"base_graphChanged", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_graphChanged},
	{"base_getReferencedProducers", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_getReferencedProducers},
	{"base_startCreateTile", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_startCreateTile},
	{"base_stopCreateTile", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_stopCreateTile},
	{"base_swap", &luna_wrapper_proland_ElevationGraphLayer::_bind_base_swap},
	{"fromVoid", &luna_wrapper_proland_ElevationGraphLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ElevationGraphLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ElevationGraphLayer::_bind_getTable},
	{"asGraphListener", &luna_wrapper_proland_ElevationGraphLayer::_bind_baseCast_proland_GraphListener},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ElevationGraphLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_ElevationGraphLayer::_cast_from_Object},
	{"proland::GraphListener", &luna_wrapper_proland_ElevationGraphLayer::_cast_from_GraphListener},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ElevationGraphLayer >::enumValues[] = {
	{0,0}
};


