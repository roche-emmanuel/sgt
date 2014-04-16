#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_RoadOrthoLayer.h>

class luna_wrapper_proland_RoadOrthoLayer {
public:
	typedef Luna< proland::RoadOrthoLayer > luna_t;

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

		proland::RoadOrthoLayer* self= (proland::RoadOrthoLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::RoadOrthoLayer >::push(L,self,false);
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
		//proland::RoadOrthoLayer* ptr= dynamic_cast< proland::RoadOrthoLayer* >(Luna< ork::Object >::check(L,1));
		proland::RoadOrthoLayer* ptr= luna_caster< ork::Object, proland::RoadOrthoLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::RoadOrthoLayer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_GraphListener(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::RoadOrthoLayer* ptr= dynamic_cast< proland::RoadOrthoLayer* >(Luna< proland::GraphListener >::check(L,1));
		proland::RoadOrthoLayer* ptr= luna_caster< proland::GraphListener, proland::RoadOrthoLayer >::cast(Luna< proland::GraphListener >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::RoadOrthoLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>10 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_isboolean(L,4)==0 ) return false;
		if( luatop>4 && !Luna<void>::has_uniqueid(L,5,81304302) ) return false;
		if( luatop>4 && (!(Luna< ork::vec4f >::check(L,5))) ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,81304302) ) return false;
		if( luatop>5 && (!(Luna< ork::vec4f >::check(L,6))) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,81304302) ) return false;
		if( luatop>6 && (!(Luna< ork::vec4f >::check(L,7))) ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( luatop>9 && lua_isboolean(L,10)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>11 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && !Luna<void>::has_uniqueid(L,6,81304302) ) return false;
		if( luatop>5 && (!(Luna< ork::vec4f >::check(L,6))) ) return false;
		if( luatop>6 && !Luna<void>::has_uniqueid(L,7,81304302) ) return false;
		if( luatop>6 && (!(Luna< ork::vec4f >::check(L,7))) ) return false;
		if( luatop>7 && !Luna<void>::has_uniqueid(L,8,81304302) ) return false;
		if( luatop>7 && (!(Luna< ork::vec4f >::check(L,8))) ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( luatop>9 && lua_type(L,10)!=LUA_TNUMBER ) return false;
		if( luatop>10 && lua_isboolean(L,11)==0 ) return false;
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

	inline static bool _lg_typecheck_doCreateTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,72091111)) ) return false;
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

	inline static bool _lg_typecheck_base_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
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

	inline static bool _lg_typecheck_base_doCreateTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_isnil(L,5)==0 && !Luna<void>::has_uniqueid(L,5,72091111)) ) return false;
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
	// proland::RoadOrthoLayer::RoadOrthoLayer(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dirt = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false)
	static proland::RoadOrthoLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::RoadOrthoLayer::RoadOrthoLayer(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dirt = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false) function, expected prototype:\nproland::RoadOrthoLayer::RoadOrthoLayer(ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dirt = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 5 ID = 81304302\narg 6 ID = 81304302\narg 7 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::GraphProducer > graphProducer = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		int displayLevel=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		bool quality=luatop>3 ? (bool)(lua_toboolean(L,4)==1) : (bool)true;
		ork::vec4f* color_ptr=luatop>4 ? (Luna< ork::vec4f >::check(L,5)) : NULL;
		if( luatop>4 && !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in proland::RoadOrthoLayer::RoadOrthoLayer function");
		}
		ork::vec4f color=luatop>4 ? *color_ptr : (ork::vec4f)ork::vec4f (0, 0, 0, 0);
		ork::vec4f* dirt_ptr=luatop>5 ? (Luna< ork::vec4f >::check(L,6)) : NULL;
		if( luatop>5 && !dirt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dirt in proland::RoadOrthoLayer::RoadOrthoLayer function");
		}
		ork::vec4f dirt=luatop>5 ? *dirt_ptr : (ork::vec4f)ork::vec4f (0, 0, 0, 0);
		ork::vec4f* border_ptr=luatop>6 ? (Luna< ork::vec4f >::check(L,7)) : NULL;
		if( luatop>6 && !border_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg border in proland::RoadOrthoLayer::RoadOrthoLayer function");
		}
		ork::vec4f border=luatop>6 ? *border_ptr : (ork::vec4f)ork::vec4f (1, 1, 1, 0);
		float border_width=luatop>7 ? (float)lua_tonumber(L,8) : (float)1.2f;
		float inner_border_width=luatop>8 ? (float)lua_tonumber(L,9) : (float)2.0f;
		bool deform=luatop>9 ? (bool)(lua_toboolean(L,10)==1) : (bool)false;

		return new proland::RoadOrthoLayer(graphProducer, layerProgram, displayLevel, quality, color, dirt, border, border_width, inner_border_width, deform);
	}

	// proland::RoadOrthoLayer::RoadOrthoLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dirt = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false)
	static proland::RoadOrthoLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::RoadOrthoLayer::RoadOrthoLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dirt = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false) function, expected prototype:\nproland::RoadOrthoLayer::RoadOrthoLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphProducer, ork::ptr< ork::Program > layerProgram, int displayLevel = 0, bool quality = true, ork::vec4f color = ork::vec4f (0, 0, 0, 0), ork::vec4f dirt = ork::vec4f (0, 0, 0, 0), ork::vec4f border = ork::vec4f (1, 1, 1, 0), float border_width = 1.2f, float inner_border_width = 2.0f, bool deform = false)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 6 ID = 81304302\narg 7 ID = 81304302\narg 8 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::GraphProducer > graphProducer = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2);
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		int displayLevel=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		bool quality=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;
		ork::vec4f* color_ptr=luatop>5 ? (Luna< ork::vec4f >::check(L,6)) : NULL;
		if( luatop>5 && !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in proland::RoadOrthoLayer::RoadOrthoLayer function");
		}
		ork::vec4f color=luatop>5 ? *color_ptr : (ork::vec4f)ork::vec4f (0, 0, 0, 0);
		ork::vec4f* dirt_ptr=luatop>6 ? (Luna< ork::vec4f >::check(L,7)) : NULL;
		if( luatop>6 && !dirt_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg dirt in proland::RoadOrthoLayer::RoadOrthoLayer function");
		}
		ork::vec4f dirt=luatop>6 ? *dirt_ptr : (ork::vec4f)ork::vec4f (0, 0, 0, 0);
		ork::vec4f* border_ptr=luatop>7 ? (Luna< ork::vec4f >::check(L,8)) : NULL;
		if( luatop>7 && !border_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg border in proland::RoadOrthoLayer::RoadOrthoLayer function");
		}
		ork::vec4f border=luatop>7 ? *border_ptr : (ork::vec4f)ork::vec4f (1, 1, 1, 0);
		float border_width=luatop>8 ? (float)lua_tonumber(L,9) : (float)1.2f;
		float inner_border_width=luatop>9 ? (float)lua_tonumber(L,10) : (float)2.0f;
		bool deform=luatop>10 ? (bool)(lua_toboolean(L,11)==1) : (bool)false;

		return new wrapper_proland_RoadOrthoLayer(L,NULL, graphProducer, layerProgram, displayLevel, quality, color, dirt, border, border_width, inner_border_width, deform);
	}

	// Overload binder for proland::RoadOrthoLayer::RoadOrthoLayer
	static proland::RoadOrthoLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RoadOrthoLayer, cannot match any of the overloads for function RoadOrthoLayer:\n  RoadOrthoLayer(ork::ptr< proland::GraphProducer >, ork::ptr< ork::Program >, int, bool, ork::vec4f, ork::vec4f, ork::vec4f, float, float, bool)\n  RoadOrthoLayer(lua_Table *, ork::ptr< proland::GraphProducer >, ork::ptr< ork::Program >, int, bool, ork::vec4f, ork::vec4f, ork::vec4f, float, float, bool)\n");
		return NULL;
	}


	// Function binds:
	// void proland::RoadOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_setTileSize(lua_State *L) {
		if (!_lg_typecheck_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::RoadOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void proland::RoadOrthoLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::RoadOrthoLayer::startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// bool proland::RoadOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::RoadOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::RoadOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::RoadOrthoLayer::doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::RoadOrthoLayer::stopCreateTile(int level, int tx, int ty)
	static int _bind_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::RoadOrthoLayer::stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->stopCreateTile(level, tx, ty);

		return 0;
	}

	// const char * proland::RoadOrthoLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::RoadOrthoLayer::base_toString() function, expected prototype:\nconst char * proland::RoadOrthoLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::RoadOrthoLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->RoadOrthoLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::RoadOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)
	static int _bind_base_setCache(lua_State *L) {
		if (!_lg_typecheck_base_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId) function, expected prototype:\nvoid proland::RoadOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int producerId=(int)lua_tointeger(L,3);

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_setCache(ork::ptr< proland::TileCache >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::setCache(cache, producerId);

		return 0;
	}

	// void proland::RoadOrthoLayer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_invalidateTiles() function, expected prototype:\nvoid proland::RoadOrthoLayer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::invalidateTiles();

		return 0;
	}

	// void proland::RoadOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::RoadOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::RoadOrthoLayer::base_getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::RoadOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_useTile(lua_State *L) {
		if (!_lg_typecheck_base_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::RoadOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::RoadOrthoLayer::base_unuseTile(int level, int tx, int ty)
	static int _bind_base_unuseTile(lua_State *L) {
		if (!_lg_typecheck_base_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::RoadOrthoLayer::base_unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::RoadOrthoLayer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::RoadOrthoLayer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::RoadOrthoLayer::base_beginCreateTile()
	static int _bind_base_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_beginCreateTile() function, expected prototype:\nvoid proland::RoadOrthoLayer::base_beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::beginCreateTile();

		return 0;
	}

	// void proland::RoadOrthoLayer::base_endCreateTile()
	static int _bind_base_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_endCreateTile() function, expected prototype:\nvoid proland::RoadOrthoLayer::base_endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::endCreateTile();

		return 0;
	}

	// proland::CurveData * proland::RoadOrthoLayer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)
	static int _bind_base_newCurveData(lua_State *L) {
		if (!_lg_typecheck_base_newCurveData(L)) {
			luaL_error(L, "luna typecheck failed in proland::CurveData * proland::RoadOrthoLayer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve) function, expected prototype:\nproland::CurveData * proland::RoadOrthoLayer::base_newCurveData(proland::CurveId id, proland::CurvePtr flattenCurve)\nClass arguments details:\narg 1 ID = 58015782\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* id_ptr=(Luna< proland::CurveId >::check(L,2));
		if( !id_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg id in proland::RoadOrthoLayer::base_newCurveData function");
		}
		proland::CurveId id=*id_ptr;
		proland::CurvePtr* flattenCurve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !flattenCurve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg flattenCurve in proland::RoadOrthoLayer::base_newCurveData function");
		}
		proland::CurvePtr flattenCurve=*flattenCurve_ptr;

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::CurveData * proland::RoadOrthoLayer::base_newCurveData(proland::CurveId, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::CurveData * lret = self->RoadOrthoLayer::newCurveData(id, flattenCurve);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::CurveData >::push(L,lret,false);

		return 1;
	}

	// void proland::RoadOrthoLayer::base_graphChanged()
	static int _bind_base_graphChanged(lua_State *L) {
		if (!_lg_typecheck_base_graphChanged(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_graphChanged() function, expected prototype:\nvoid proland::RoadOrthoLayer::base_graphChanged()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_graphChanged(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::graphChanged();

		return 0;
	}

	// void proland::RoadOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_base_setTileSize(lua_State *L) {
		if (!_lg_typecheck_base_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::RoadOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void proland::RoadOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_base_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::RoadOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// bool proland::RoadOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_base_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::RoadOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::RoadOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::RoadOrthoLayer::base_doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->RoadOrthoLayer::doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::RoadOrthoLayer::base_stopCreateTile(int level, int tx, int ty)
	static int _bind_base_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::RoadOrthoLayer::base_stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::RoadOrthoLayer::base_stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::RoadOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::RoadOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::RoadOrthoLayer::base_stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->RoadOrthoLayer::stopCreateTile(level, tx, ty);

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

proland::RoadOrthoLayer* LunaTraits< proland::RoadOrthoLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_RoadOrthoLayer::_bind_ctor(L);
}

void LunaTraits< proland::RoadOrthoLayer >::_bind_dtor(proland::RoadOrthoLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::RoadOrthoLayer >::className[] = "RoadOrthoLayer";
const char LunaTraits< proland::RoadOrthoLayer >::fullName[] = "proland::RoadOrthoLayer";
const char LunaTraits< proland::RoadOrthoLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::RoadOrthoLayer >::parents[] = {"proland.GraphLayer", "proland.CurveDataFactory", 0};
const int LunaTraits< proland::RoadOrthoLayer >::hash = 6854141;
const int LunaTraits< proland::RoadOrthoLayer >::uniqueIDs[] = {1381405, 23314933,0};

luna_RegType LunaTraits< proland::RoadOrthoLayer >::methods[] = {
	{"setTileSize", &luna_wrapper_proland_RoadOrthoLayer::_bind_setTileSize},
	{"startCreateTile", &luna_wrapper_proland_RoadOrthoLayer::_bind_startCreateTile},
	{"doCreateTile", &luna_wrapper_proland_RoadOrthoLayer::_bind_doCreateTile},
	{"stopCreateTile", &luna_wrapper_proland_RoadOrthoLayer::_bind_stopCreateTile},
	{"base_toString", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_toString},
	{"base_setCache", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_setCache},
	{"base_invalidateTiles", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_invalidateTiles},
	{"base_getReferencedProducers", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_getReferencedProducers},
	{"base_useTile", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_useTile},
	{"base_unuseTile", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_unuseTile},
	{"base_prefetchTile", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_prefetchTile},
	{"base_beginCreateTile", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_beginCreateTile},
	{"base_endCreateTile", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_endCreateTile},
	{"base_newCurveData", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_newCurveData},
	{"base_graphChanged", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_graphChanged},
	{"base_setTileSize", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_setTileSize},
	{"base_startCreateTile", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_startCreateTile},
	{"base_doCreateTile", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_doCreateTile},
	{"base_stopCreateTile", &luna_wrapper_proland_RoadOrthoLayer::_bind_base_stopCreateTile},
	{"fromVoid", &luna_wrapper_proland_RoadOrthoLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_RoadOrthoLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_RoadOrthoLayer::_bind_getTable},
	{"asGraphListener", &luna_wrapper_proland_RoadOrthoLayer::_bind_baseCast_proland_GraphListener},
	{0,0}
};

luna_ConverterType LunaTraits< proland::RoadOrthoLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_RoadOrthoLayer::_cast_from_Object},
	{"proland::GraphListener", &luna_wrapper_proland_RoadOrthoLayer::_cast_from_GraphListener},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::RoadOrthoLayer >::enumValues[] = {
	{"BASIC", proland::RoadOrthoLayer::BASIC},
	{"ROAD", proland::RoadOrthoLayer::ROAD},
	{"UNKNOWN", proland::RoadOrthoLayer::UNKNOWN},
	{"BRIDGE", proland::RoadOrthoLayer::BRIDGE},
	{0,0}
};


