#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_EditHydroGraphOrthoLayer.h>

class luna_wrapper_proland_EditHydroGraphOrthoLayer {
public:
	typedef Luna< proland::EditHydroGraphOrthoLayer > luna_t;

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

		proland::EditHydroGraphOrthoLayer* self= (proland::EditHydroGraphOrthoLayer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EditHydroGraphOrthoLayer >::push(L,self,false);
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
		//proland::EditHydroGraphOrthoLayer* ptr= dynamic_cast< proland::EditHydroGraphOrthoLayer* >(Luna< ork::Object >::check(L,1));
		proland::EditHydroGraphOrthoLayer* ptr= luna_caster< ork::Object, proland::EditHydroGraphOrthoLayer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::EditHydroGraphOrthoLayer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>9 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,73900203) ) return false;
		if( (!(Luna< vector< ork::ptr< proland::GraphProducer > > >::check(L,1))) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( luatop>6 && lua_isboolean(L,7)==0 ) return false;
		if( luatop>7 && lua_type(L,8)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,9,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,9) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>10 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,73900203) ) return false;
		if( (!(Luna< vector< ork::ptr< proland::GraphProducer > > >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,3) ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		if( luatop>6 && lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( luatop>7 && lua_isboolean(L,8)==0 ) return false;
		if( luatop>8 && lua_type(L,9)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,10,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,10) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_addCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,6))) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,8))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,7,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,8))) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,11))) ) return false;
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

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_prefetchTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTiles(lua_State *L) {
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

	inline static bool _lg_typecheck_base_drawGraph(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,65799894) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Mesh< ork::vec3f, unsigned int > >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,81304238) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,81304238) ) return false;
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

	inline static bool _lg_typecheck_base_fitCurve(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTypeNames(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,61351880) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addCurve_overload_1(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,5,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,5))) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,6))) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,8))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_addCurve_overload_2(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,7,65799894) ) return false;
		if( (!(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,8))) ) return false;
		if( (lua_type(L,9)!=LUA_TNUMBER || lua_tointeger(L,9) != lua_tonumber(L,9)) ) return false;
		if( (lua_type(L,10)!=LUA_TNUMBER || lua_tointeger(L,10) != lua_tonumber(L,10)) ) return false;
		if( !Luna<void>::has_uniqueid(L,11,47132056) ) return false;
		if( (!(Luna< proland::Graph::Changes >::check(L,11))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::EditHydroGraphOrthoLayer::EditHydroGraphOrthoLayer(const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = "", ork::ptr< ork::ResourceManager > manager = NULL)
	static proland::EditHydroGraphOrthoLayer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditHydroGraphOrthoLayer::EditHydroGraphOrthoLayer(const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = \"\", ork::ptr< ork::ResourceManager > manager = NULL) function, expected prototype:\nproland::EditHydroGraphOrthoLayer::EditHydroGraphOrthoLayer(const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = \"\", ork::ptr< ork::ResourceManager > manager = NULL)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 9 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const vector< ork::ptr< proland::GraphProducer > >* graphs_ptr=(Luna< vector< ork::ptr< proland::GraphProducer > > >::check(L,1));
		if( !graphs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg graphs in proland::EditHydroGraphOrthoLayer::EditHydroGraphOrthoLayer function");
		}
		const vector< ork::ptr< proland::GraphProducer > > & graphs=*graphs_ptr;
		ork::ptr< ork::Program > layerProg = Luna< ork::Object >::checkSubType< ork::Program >(L,2);
		int displayLevel=luatop>2 ? (int)lua_tointeger(L,3) : (int)0;
		float tolerance=luatop>3 ? (float)lua_tonumber(L,4) : (float)8.0f/192.0f;
		bool softEdition=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)true;
		double softEditionDelay=luatop>5 ? (double)lua_tonumber(L,6) : (double)100000.0;
		bool deform=luatop>6 ? (bool)(lua_toboolean(L,7)==1) : (bool)false;
		std::string terrain(lua_tostring(L,8),lua_objlen(L,8));
		ork::ptr< ork::ResourceManager > manager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,9);

		return new proland::EditHydroGraphOrthoLayer(graphs, layerProg, displayLevel, tolerance, softEdition, softEditionDelay, deform, terrain, manager);
	}

	// proland::EditHydroGraphOrthoLayer::EditHydroGraphOrthoLayer(lua_Table * data, const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = "", ork::ptr< ork::ResourceManager > manager = NULL)
	static proland::EditHydroGraphOrthoLayer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditHydroGraphOrthoLayer::EditHydroGraphOrthoLayer(lua_Table * data, const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = \"\", ork::ptr< ork::ResourceManager > manager = NULL) function, expected prototype:\nproland::EditHydroGraphOrthoLayer::EditHydroGraphOrthoLayer(lua_Table * data, const vector< ork::ptr< proland::GraphProducer > > & graphs, ork::ptr< ork::Program > layerProg, int displayLevel = 0, float tolerance = 8.0f/192.0f, bool softEdition = true, double softEditionDelay = 100000.0, bool deform = false, string terrain = \"\", ork::ptr< ork::ResourceManager > manager = NULL)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 10 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const vector< ork::ptr< proland::GraphProducer > >* graphs_ptr=(Luna< vector< ork::ptr< proland::GraphProducer > > >::check(L,2));
		if( !graphs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg graphs in proland::EditHydroGraphOrthoLayer::EditHydroGraphOrthoLayer function");
		}
		const vector< ork::ptr< proland::GraphProducer > > & graphs=*graphs_ptr;
		ork::ptr< ork::Program > layerProg = Luna< ork::Object >::checkSubType< ork::Program >(L,3);
		int displayLevel=luatop>3 ? (int)lua_tointeger(L,4) : (int)0;
		float tolerance=luatop>4 ? (float)lua_tonumber(L,5) : (float)8.0f/192.0f;
		bool softEdition=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)true;
		double softEditionDelay=luatop>6 ? (double)lua_tonumber(L,7) : (double)100000.0;
		bool deform=luatop>7 ? (bool)(lua_toboolean(L,8)==1) : (bool)false;
		std::string terrain(lua_tostring(L,9),lua_objlen(L,9));
		ork::ptr< ork::ResourceManager > manager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,10);

		return new wrapper_proland_EditHydroGraphOrthoLayer(L,NULL, graphs, layerProg, displayLevel, tolerance, softEdition, softEditionDelay, deform, terrain, manager);
	}

	// Overload binder for proland::EditHydroGraphOrthoLayer::EditHydroGraphOrthoLayer
	static proland::EditHydroGraphOrthoLayer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EditHydroGraphOrthoLayer, cannot match any of the overloads for function EditHydroGraphOrthoLayer:\n  EditHydroGraphOrthoLayer(const vector< ork::ptr< proland::GraphProducer > > &, ork::ptr< ork::Program >, int, float, bool, double, bool, string, ork::ptr< ork::ResourceManager >)\n  EditHydroGraphOrthoLayer(lua_Table *, const vector< ork::ptr< proland::GraphProducer > > &, ork::ptr< ork::Program >, int, float, bool, double, bool, string, ork::ptr< ork::ResourceManager >)\n");
		return NULL;
	}


	// Function binds:
	// bool proland::EditHydroGraphOrthoLayer::addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)
	static int _bind_addCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_addCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 4 ID = 94278244\narg 5 ID = 98496290\narg 7 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float tolerance=(float)lua_tonumber(L,4);
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,5));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditHydroGraphOrthoLayer::addCurve function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,6));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditHydroGraphOrthoLayer::addCurve function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int point=(int)lua_tointeger(L,7);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,8));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditHydroGraphOrthoLayer::addCurve function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::addCurve(double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addCurve(x, y, tolerance, g, curve, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,point);
		return 2;
	}

	// bool proland::EditHydroGraphOrthoLayer::addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)
	static int _bind_addCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_addCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 6 ID = 94278244\narg 7 ID = 98496290\narg 10 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		double x1=(double)lua_tonumber(L,2);
		double y1=(double)lua_tonumber(L,3);
		double x2=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);
		float tolerance=(float)lua_tonumber(L,6);
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,7));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditHydroGraphOrthoLayer::addCurve function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,8));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditHydroGraphOrthoLayer::addCurve function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int segment=(int)lua_tointeger(L,9);
		int point=(int)lua_tointeger(L,10);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,11));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditHydroGraphOrthoLayer::addCurve function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::addCurve(double, double, double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->addCurve(x1, y1, x2, y2, tolerance, g, curve, segment, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,segment);
		lua_pushnumber(L,point);
		return 3;
	}

	// Overload binder for proland::EditHydroGraphOrthoLayer::addCurve
	static int _bind_addCurve(lua_State *L) {
		if (_lg_typecheck_addCurve_overload_1(L)) return _bind_addCurve_overload_1(L);
		if (_lg_typecheck_addCurve_overload_2(L)) return _bind_addCurve_overload_2(L);

		luaL_error(L, "error in function addCurve, cannot match any of the overloads for function addCurve:\n  addCurve(double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &)\n  addCurve(double, double, double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &)\n");
		return 0;
	}

	// const char * proland::EditHydroGraphOrthoLayer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::EditHydroGraphOrthoLayer::base_toString() function, expected prototype:\nconst char * proland::EditHydroGraphOrthoLayer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::EditHydroGraphOrthoLayer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EditHydroGraphOrthoLayer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::EditHydroGraphOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)
	static int _bind_base_setCache(lua_State *L) {
		if (!_lg_typecheck_base_setCache(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_setCache(ork::ptr< proland::TileCache > cache, int producerId)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		int producerId=(int)lua_tointeger(L,3);

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_setCache(ork::ptr< proland::TileCache >, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::setCache(cache, producerId);

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::EditHydroGraphOrthoLayer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::prefetchTile(level, tx, ty);

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_invalidateTiles() function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::invalidateTiles();

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)
	static int _bind_base_setTileSize(lua_State *L) {
		if (!_lg_typecheck_base_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_setTileSize(int tileSize, int tileBorder, float rootQuadSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int tileSize=(int)lua_tointeger(L,2);
		int tileBorder=(int)lua_tointeger(L,3);
		float rootQuadSize=(float)lua_tonumber(L,4);

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_setTileSize(int, int, float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::setTileSize(tileSize, tileBorder, rootQuadSize);

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_useTile(lua_State *L) {
		if (!_lg_typecheck_base_useTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_useTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_useTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::useTile(level, tx, ty, deadline);

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::base_unuseTile(int level, int tx, int ty)
	static int _bind_base_unuseTile(lua_State *L) {
		if (!_lg_typecheck_base_unuseTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_unuseTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_unuseTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_unuseTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::unuseTile(level, tx, ty);

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > result)
	static int _bind_base_startCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_startCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > result) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_startCreateTile(int level, int tx, int ty, unsigned int deadline, ork::ptr< ork::Task > task, ork::ptr< ork::TaskGraph > result)\nClass arguments details:\narg 5 ID = [unknown]\narg 6 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);
		ork::ptr< ork::Task > task = Luna< ork::Object >::checkSubType< ork::Task >(L,6);
		ork::ptr< ork::TaskGraph > result = Luna< ork::Object >::checkSubType< ork::TaskGraph >(L,7);

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_startCreateTile(int, int, int, unsigned int, ork::ptr< ork::Task >, ork::ptr< ork::TaskGraph >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::startCreateTile(level, tx, ty, deadline, task, result);

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::base_beginCreateTile()
	static int _bind_base_beginCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_beginCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_beginCreateTile() function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_beginCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_beginCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::beginCreateTile();

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::base_drawGraph(const ork::vec3d & tileCoords, proland::GraphPtr g, float pointSize, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly)
	static int _bind_base_drawGraph(lua_State *L) {
		if (!_lg_typecheck_base_drawGraph(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_drawGraph(const ork::vec3d & tileCoords, proland::GraphPtr g, float pointSize, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_drawGraph(const ork::vec3d & tileCoords, proland::GraphPtr g, float pointSize, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh, ork::vec2d & nx, ork::vec2d & ny, ork::vec2d & lx, ork::vec2d & ly)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 94278244\narg 4 ID = [unknown]\narg 5 ID = 81304238\narg 6 ID = 81304238\narg 7 ID = 81304238\narg 8 ID = 81304238\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* tileCoords_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !tileCoords_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg tileCoords in proland::EditHydroGraphOrthoLayer::base_drawGraph function");
		}
		const ork::vec3d & tileCoords=*tileCoords_ptr;
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,3));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditHydroGraphOrthoLayer::base_drawGraph function");
		}
		proland::GraphPtr g=*g_ptr;
		float pointSize=(float)lua_tonumber(L,4);
		ork::ptr< ork::Mesh< ork::vec3f, unsigned int > > mesh = Luna< ork::Object >::checkSubType< ork::Mesh< ork::vec3f, unsigned int > >(L,5);
		ork::vec2d* nx_ptr=(Luna< ork::vec2d >::check(L,6));
		if( !nx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nx in proland::EditHydroGraphOrthoLayer::base_drawGraph function");
		}
		ork::vec2d & nx=*nx_ptr;
		ork::vec2d* ny_ptr=(Luna< ork::vec2d >::check(L,7));
		if( !ny_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ny in proland::EditHydroGraphOrthoLayer::base_drawGraph function");
		}
		ork::vec2d & ny=*ny_ptr;
		ork::vec2d* lx_ptr=(Luna< ork::vec2d >::check(L,8));
		if( !lx_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lx in proland::EditHydroGraphOrthoLayer::base_drawGraph function");
		}
		ork::vec2d & lx=*lx_ptr;
		ork::vec2d* ly_ptr=(Luna< ork::vec2d >::check(L,9));
		if( !ly_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ly in proland::EditHydroGraphOrthoLayer::base_drawGraph function");
		}
		ork::vec2d & ly=*ly_ptr;

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_drawGraph(const ork::vec3d &, proland::GraphPtr, float, ork::ptr< ork::Mesh< ork::vec3f, unsigned int > >, ork::vec2d &, ork::vec2d &, ork::vec2d &, ork::vec2d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::drawGraph(tileCoords, g, pointSize, mesh, nx, ny, lx, ly);

		return 0;
	}

	// bool proland::EditHydroGraphOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)
	static int _bind_base_doCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_doCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::base_doCreateTile(int level, int tx, int ty, proland::TileStorage::Slot * data)\nClass arguments details:\narg 4 ID = 72091111\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		proland::TileStorage::Slot* data=(Luna< proland::TileStorage::Slot >::check(L,5));

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::base_doCreateTile(int, int, int, proland::TileStorage::Slot *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphOrthoLayer::doCreateTile(level, tx, ty, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditHydroGraphOrthoLayer::base_endCreateTile()
	static int _bind_base_endCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_endCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_endCreateTile() function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_endCreateTile()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_endCreateTile(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::endCreateTile();

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::base_stopCreateTile(int level, int tx, int ty)
	static int _bind_base_stopCreateTile(lua_State *L) {
		if (!_lg_typecheck_base_stopCreateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_stopCreateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_stopCreateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_stopCreateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::stopCreateTile(level, tx, ty);

		return 0;
	}

	// bool proland::EditHydroGraphOrthoLayer::base_fitCurve()
	static int _bind_base_fitCurve(lua_State *L) {
		if (!_lg_typecheck_base_fitCurve(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::base_fitCurve() function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::base_fitCurve()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::base_fitCurve(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphOrthoLayer::fitCurve();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void proland::EditHydroGraphOrthoLayer::base_update()
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_update() function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_update(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::update();

		return 0;
	}

	// void proland::EditHydroGraphOrthoLayer::base_getTypeNames(vector< string > & names)
	static int _bind_base_getTypeNames(lua_State *L) {
		if (!_lg_typecheck_base_getTypeNames(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditHydroGraphOrthoLayer::base_getTypeNames(vector< string > & names) function, expected prototype:\nvoid proland::EditHydroGraphOrthoLayer::base_getTypeNames(vector< string > & names)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		vector< string >* names_ptr=(Luna< vector< string > >::check(L,2));
		if( !names_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg names in proland::EditHydroGraphOrthoLayer::base_getTypeNames function");
		}
		vector< string > & names=*names_ptr;

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditHydroGraphOrthoLayer::base_getTypeNames(vector< string > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditHydroGraphOrthoLayer::getTypeNames(names);

		return 0;
	}

	// bool proland::EditHydroGraphOrthoLayer::base_addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)
	static int _bind_base_addCurve_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_addCurve_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::base_addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::base_addCurve(double x, double y, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 4 ID = 94278244\narg 5 ID = 98496290\narg 7 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		double x=(double)lua_tonumber(L,2);
		double y=(double)lua_tonumber(L,3);
		float tolerance=(float)lua_tonumber(L,4);
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,5));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditHydroGraphOrthoLayer::base_addCurve function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,6));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditHydroGraphOrthoLayer::base_addCurve function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int point=(int)lua_tointeger(L,7);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,8));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditHydroGraphOrthoLayer::base_addCurve function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::base_addCurve(double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphOrthoLayer::addCurve(x, y, tolerance, g, curve, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,point);
		return 2;
	}

	// bool proland::EditHydroGraphOrthoLayer::base_addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)
	static int _bind_base_addCurve_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_addCurve_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditHydroGraphOrthoLayer::base_addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes) function, expected prototype:\nbool proland::EditHydroGraphOrthoLayer::base_addCurve(double x1, double y1, double x2, double y2, float tolerance, proland::GraphPtr g, proland::CurvePtr & curve, int & segment, int & point, proland::Graph::Changes & changes)\nClass arguments details:\narg 6 ID = 94278244\narg 7 ID = 98496290\narg 10 ID = 47132056\n\n%s",luna_dumpStack(L).c_str());
		}

		double x1=(double)lua_tonumber(L,2);
		double y1=(double)lua_tonumber(L,3);
		double x2=(double)lua_tonumber(L,4);
		double y2=(double)lua_tonumber(L,5);
		float tolerance=(float)lua_tonumber(L,6);
		proland::GraphPtr* g_ptr=(Luna< ork::ptr< proland::Graph > >::checkSubType< proland::GraphPtr >(L,7));
		if( !g_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg g in proland::EditHydroGraphOrthoLayer::base_addCurve function");
		}
		proland::GraphPtr g=*g_ptr;
		proland::CurvePtr* curve_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,8));
		if( !curve_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg curve in proland::EditHydroGraphOrthoLayer::base_addCurve function");
		}
		proland::CurvePtr & curve=*curve_ptr;
		int segment=(int)lua_tointeger(L,9);
		int point=(int)lua_tointeger(L,10);
		proland::Graph::Changes* changes_ptr=(Luna< proland::Graph::Changes >::check(L,11));
		if( !changes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg changes in proland::EditHydroGraphOrthoLayer::base_addCurve function");
		}
		proland::Graph::Changes & changes=*changes_ptr;

		proland::EditHydroGraphOrthoLayer* self=Luna< ork::Object >::checkSubType< proland::EditHydroGraphOrthoLayer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditHydroGraphOrthoLayer::base_addCurve(double, double, double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditHydroGraphOrthoLayer::addCurve(x1, y1, x2, y2, tolerance, g, curve, segment, point, changes);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,segment);
		lua_pushnumber(L,point);
		return 3;
	}

	// Overload binder for proland::EditHydroGraphOrthoLayer::base_addCurve
	static int _bind_base_addCurve(lua_State *L) {
		if (_lg_typecheck_base_addCurve_overload_1(L)) return _bind_base_addCurve_overload_1(L);
		if (_lg_typecheck_base_addCurve_overload_2(L)) return _bind_base_addCurve_overload_2(L);

		luaL_error(L, "error in function base_addCurve, cannot match any of the overloads for function base_addCurve:\n  base_addCurve(double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, proland::Graph::Changes &)\n  base_addCurve(double, double, double, double, float, proland::GraphPtr, proland::CurvePtr &, int &, int &, proland::Graph::Changes &)\n");
		return 0;
	}


	// Operator binds:

};

proland::EditHydroGraphOrthoLayer* LunaTraits< proland::EditHydroGraphOrthoLayer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_ctor(L);
}

void LunaTraits< proland::EditHydroGraphOrthoLayer >::_bind_dtor(proland::EditHydroGraphOrthoLayer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::EditHydroGraphOrthoLayer >::className[] = "EditHydroGraphOrthoLayer";
const char LunaTraits< proland::EditHydroGraphOrthoLayer >::fullName[] = "proland::EditHydroGraphOrthoLayer";
const char LunaTraits< proland::EditHydroGraphOrthoLayer >::moduleName[] = "proland";
const char* LunaTraits< proland::EditHydroGraphOrthoLayer >::parents[] = {"proland.EditGraphOrthoLayer", 0};
const int LunaTraits< proland::EditHydroGraphOrthoLayer >::hash = 97434146;
const int LunaTraits< proland::EditHydroGraphOrthoLayer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::EditHydroGraphOrthoLayer >::methods[] = {
	{"addCurve", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_addCurve},
	{"base_toString", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_toString},
	{"base_setCache", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_setCache},
	{"base_getReferencedProducers", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_getReferencedProducers},
	{"base_prefetchTile", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_prefetchTile},
	{"base_invalidateTiles", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_invalidateTiles},
	{"base_setTileSize", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_setTileSize},
	{"base_useTile", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_useTile},
	{"base_unuseTile", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_unuseTile},
	{"base_startCreateTile", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_startCreateTile},
	{"base_beginCreateTile", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_beginCreateTile},
	{"base_drawGraph", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_drawGraph},
	{"base_doCreateTile", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_doCreateTile},
	{"base_endCreateTile", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_endCreateTile},
	{"base_stopCreateTile", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_stopCreateTile},
	{"base_fitCurve", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_fitCurve},
	{"base_update", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_update},
	{"base_getTypeNames", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_getTypeNames},
	{"base_addCurve", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_base_addCurve},
	{"fromVoid", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EditHydroGraphOrthoLayer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_EditHydroGraphOrthoLayer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EditHydroGraphOrthoLayer >::enumValues[] = {
	{0,0}
};


