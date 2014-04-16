#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_MaskOrthoLayer.h>

class luna_wrapper_proland_MaskOrthoLayer {
public:
	typedef Luna< proland::MaskOrthoLayer > luna_t;

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

		proland::MaskOrthoLayer* self= (proland::MaskOrthoLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::MaskOrthoLayer >::push(L,self,false);
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
		//proland::MaskOrthoLayer* ptr= dynamic_cast< proland::MaskOrthoLayer* >(Luna< ork::Object >::check(L,1));
		proland::MaskOrthoLayer* ptr= luna_caster< ork::Object, proland::MaskOrthoLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::MaskOrthoLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<10 || luatop>11 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,13198241) ) return false;
		if( (!(Luna< set< int > >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,5))) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,8,50727209) ) return false;
		if( (!(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,9))) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( luatop>10 && lua_isboolean(L,11)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<11 || luatop>12 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,13198241) ) return false;
		if( (!(Luna< set< int > >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,4) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,6))) ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,9,50727209) ) return false;
		if( (!(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,9))) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,10))) ) return false;
		if( (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		if( luatop>11 && lua_isboolean(L,12)==0 ) return false;
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
	// proland::MaskOrthoLayer::MaskOrthoLayer(ork::ptr< proland::GraphProducer > graphs, set< int > ignored, ork::ptr< ork::Program > layerProgram, int writeMask, ork::vec4f color, float depth, float widthFactor, proland::MaskOrthoLayer::BlendParams blendParams, ork::vec4f blendColor, int displayLevel, bool deform = false)
	static proland::MaskOrthoLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::MaskOrthoLayer::MaskOrthoLayer(ork::ptr< proland::GraphProducer > graphs, set< int > ignored, ork::ptr< ork::Program > layerProgram, int writeMask, ork::vec4f color, float depth, float widthFactor, proland::MaskOrthoLayer::BlendParams blendParams, ork::vec4f blendColor, int displayLevel, bool deform = false) function, expected prototype:\nproland::MaskOrthoLayer::MaskOrthoLayer(ork::ptr< proland::GraphProducer > graphs, set< int > ignored, ork::ptr< ork::Program > layerProgram, int writeMask, ork::vec4f color, float depth, float widthFactor, proland::MaskOrthoLayer::BlendParams blendParams, ork::vec4f blendColor, int displayLevel, bool deform = false)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 5 ID = 81304302\narg 8 ID = 50727209\narg 9 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::GraphProducer > graphs = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,1);
		set< int >* ignored_ptr=(Luna< set< int > >::check(L,2));
		if( !ignored_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ignored in proland::MaskOrthoLayer::MaskOrthoLayer function");
		}
		set< int > ignored=*ignored_ptr;
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		int writeMask=(int)lua_tointeger(L,4);
		ork::vec4f* color_ptr=(Luna< ork::vec4f >::check(L,5));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in proland::MaskOrthoLayer::MaskOrthoLayer function");
		}
		ork::vec4f color=*color_ptr;
		float depth=(float)lua_tonumber(L,6);
		float widthFactor=(float)lua_tonumber(L,7);
		proland::MaskOrthoLayer::BlendParams* blendParams_ptr=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,8));
		if( !blendParams_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg blendParams in proland::MaskOrthoLayer::MaskOrthoLayer function");
		}
		proland::MaskOrthoLayer::BlendParams blendParams=*blendParams_ptr;
		ork::vec4f* blendColor_ptr=(Luna< ork::vec4f >::check(L,9));
		if( !blendColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg blendColor in proland::MaskOrthoLayer::MaskOrthoLayer function");
		}
		ork::vec4f blendColor=*blendColor_ptr;
		int displayLevel=(int)lua_tointeger(L,10);
		bool deform=luatop>10 ? (bool)(lua_toboolean(L,11)==1) : (bool)false;

		return new proland::MaskOrthoLayer(graphs, ignored, layerProgram, writeMask, color, depth, widthFactor, blendParams, blendColor, displayLevel, deform);
	}

	// proland::MaskOrthoLayer::MaskOrthoLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphs, set< int > ignored, ork::ptr< ork::Program > layerProgram, int writeMask, ork::vec4f color, float depth, float widthFactor, proland::MaskOrthoLayer::BlendParams blendParams, ork::vec4f blendColor, int displayLevel, bool deform = false)
	static proland::MaskOrthoLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::MaskOrthoLayer::MaskOrthoLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphs, set< int > ignored, ork::ptr< ork::Program > layerProgram, int writeMask, ork::vec4f color, float depth, float widthFactor, proland::MaskOrthoLayer::BlendParams blendParams, ork::vec4f blendColor, int displayLevel, bool deform = false) function, expected prototype:\nproland::MaskOrthoLayer::MaskOrthoLayer(lua_Table * data, ork::ptr< proland::GraphProducer > graphs, set< int > ignored, ork::ptr< ork::Program > layerProgram, int writeMask, ork::vec4f color, float depth, float widthFactor, proland::MaskOrthoLayer::BlendParams blendParams, ork::vec4f blendColor, int displayLevel, bool deform = false)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 6 ID = 81304302\narg 9 ID = 50727209\narg 10 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		ork::ptr< proland::GraphProducer > graphs = Luna< ork::Object >::checkSubType< proland::GraphProducer >(L,2);
		set< int >* ignored_ptr=(Luna< set< int > >::check(L,3));
		if( !ignored_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ignored in proland::MaskOrthoLayer::MaskOrthoLayer function");
		}
		set< int > ignored=*ignored_ptr;
		ork::ptr< ork::Program > layerProgram = Luna< ork::Object >::checkSubType< ork::Program >(L,4);
		int writeMask=(int)lua_tointeger(L,5);
		ork::vec4f* color_ptr=(Luna< ork::vec4f >::check(L,6));
		if( !color_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg color in proland::MaskOrthoLayer::MaskOrthoLayer function");
		}
		ork::vec4f color=*color_ptr;
		float depth=(float)lua_tonumber(L,7);
		float widthFactor=(float)lua_tonumber(L,8);
		proland::MaskOrthoLayer::BlendParams* blendParams_ptr=(Luna< proland::MaskOrthoLayer::BlendParams >::check(L,9));
		if( !blendParams_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg blendParams in proland::MaskOrthoLayer::MaskOrthoLayer function");
		}
		proland::MaskOrthoLayer::BlendParams blendParams=*blendParams_ptr;
		ork::vec4f* blendColor_ptr=(Luna< ork::vec4f >::check(L,10));
		if( !blendColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg blendColor in proland::MaskOrthoLayer::MaskOrthoLayer function");
		}
		ork::vec4f blendColor=*blendColor_ptr;
		int displayLevel=(int)lua_tointeger(L,11);
		bool deform=luatop>11 ? (bool)(lua_toboolean(L,12)==1) : (bool)false;

		return new wrapper_proland_MaskOrthoLayer(L,NULL, graphs, ignored, layerProgram, writeMask, color, depth, widthFactor, blendParams, blendColor, displayLevel, deform);
	}

	// Overload binder for proland::MaskOrthoLayer::MaskOrthoLayer
	static proland::MaskOrthoLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function MaskOrthoLayer, cannot match any of the overloads for function MaskOrthoLayer:\n  MaskOrthoLayer(ork::ptr< proland::GraphProducer >, set< int >, ork::ptr< ork::Program >, int, ork::vec4f, float, float, proland::MaskOrthoLayer::BlendParams, ork::vec4f, int, bool)\n  MaskOrthoLayer(lua_Table *, ork::ptr< proland::GraphProducer >, set< int >, ork::ptr< ork::Program >, int, ork::vec4f, float, float, proland::MaskOrthoLayer::BlendParams, ork::vec4f, int, bool)\n");
		return NULL;
	}


	// Function binds:
	// void proland::MaskOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_setTileSize(lua_State *L) {
		if (!_lg_typecheck_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::MaskOrthoLayer::setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// bool proland::MaskOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MaskOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::MaskOrthoLayer::doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MaskOrthoLayer::doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * proland::MaskOrthoLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::MaskOrthoLayer::base_toString() function, expected prototype:\nconst char * proland::MaskOrthoLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::MaskOrthoLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->MaskOrthoLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::MaskOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)
	static int _bind_base_setCache(lua_State *L) {
		if (!_lg_typecheck_base_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId) function, expected prototype:\nvoid proland::MaskOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int producerId=(int)lua_tointeger(L,3);

		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::base_setCache(ork::ptr< proland::TileCache >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaskOrthoLayer::setCache(cache, producerId);

		return 0;
	}

	// void proland::MaskOrthoLayer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::base_invalidateTiles() function, expected prototype:\nvoid proland::MaskOrthoLayer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaskOrthoLayer::invalidateTiles();

		return 0;
	}

	// void proland::MaskOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::MaskOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::MaskOrthoLayer::base_getReferencedProducers function");
		}
		vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::base_getReferencedProducers(vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaskOrthoLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::MaskOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_useTile(lua_State *L) {
		if (!_lg_typecheck_base_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::MaskOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::base_useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaskOrthoLayer::useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::MaskOrthoLayer::base_unuseTile(int level, int tx, int ty)
	static int _bind_base_unuseTile(lua_State *L) {
		if (!_lg_typecheck_base_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::base_unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::MaskOrthoLayer::base_unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::base_unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaskOrthoLayer::unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::MaskOrthoLayer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::MaskOrthoLayer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaskOrthoLayer::prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::MaskOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)
	static int _bind_base_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner) function, expected prototype:\nvoid proland::MaskOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > owner)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > owner = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::base_startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaskOrthoLayer::startCreateTile(level, tx, ty, deadline, task, owner);

		return 0;
	}

	// void proland::MaskOrthoLayer::base_beginCreateTile()
	static int _bind_base_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::base_beginCreateTile() function, expected prototype:\nvoid proland::MaskOrthoLayer::base_beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::base_beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaskOrthoLayer::beginCreateTile();

		return 0;
	}

	// void proland::MaskOrthoLayer::base_endCreateTile()
	static int _bind_base_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::base_endCreateTile() function, expected prototype:\nvoid proland::MaskOrthoLayer::base_endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::base_endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaskOrthoLayer::endCreateTile();

		return 0;
	}

	// void proland::MaskOrthoLayer::base_stopCreateTile(int level, int tx, int ty)
	static int _bind_base_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::base_stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::MaskOrthoLayer::base_stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::base_stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaskOrthoLayer::stopCreateTile(level, tx, ty);

		return 0;
	}

	// void proland::MaskOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_base_setTileSize(lua_State *L) {
		if (!_lg_typecheck_base_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::MaskOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::MaskOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::MaskOrthoLayer::base_setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->MaskOrthoLayer::setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// bool proland::MaskOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_base_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::MaskOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::MaskOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::MaskOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::MaskOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::MaskOrthoLayer::base_doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->MaskOrthoLayer::doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::MaskOrthoLayer* LunaTraits< proland::MaskOrthoLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_MaskOrthoLayer::_bind_ctor(L);
}

void LunaTraits< proland::MaskOrthoLayer >::_bind_dtor(proland::MaskOrthoLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::MaskOrthoLayer >::className[] = "MaskOrthoLayer";
const char LunaTraits< proland::MaskOrthoLayer >::fullName[] = "proland::MaskOrthoLayer";
const char LunaTraits< proland::MaskOrthoLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::MaskOrthoLayer >::parents[] = {"proland.GraphLayer", 0};
const int LunaTraits< proland::MaskOrthoLayer >::hash = 1085565;
const int LunaTraits< proland::MaskOrthoLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::MaskOrthoLayer >::methods[] = {
	{"setTileSize", &luna_wrapper_proland_MaskOrthoLayer::_bind_setTileSize},
	{"doCreateTile", &luna_wrapper_proland_MaskOrthoLayer::_bind_doCreateTile},
	{"base_toString", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_toString},
	{"base_setCache", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_setCache},
	{"base_invalidateTiles", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_invalidateTiles},
	{"base_getReferencedProducers", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_getReferencedProducers},
	{"base_useTile", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_useTile},
	{"base_unuseTile", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_unuseTile},
	{"base_prefetchTile", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_prefetchTile},
	{"base_startCreateTile", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_startCreateTile},
	{"base_beginCreateTile", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_beginCreateTile},
	{"base_endCreateTile", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_endCreateTile},
	{"base_stopCreateTile", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_stopCreateTile},
	{"base_setTileSize", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_setTileSize},
	{"base_doCreateTile", &luna_wrapper_proland_MaskOrthoLayer::_bind_base_doCreateTile},
	{"fromVoid", &luna_wrapper_proland_MaskOrthoLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_MaskOrthoLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_MaskOrthoLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::MaskOrthoLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_MaskOrthoLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::MaskOrthoLayer >::enumValues[] = {
	{0,0}
};


