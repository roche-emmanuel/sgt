#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_EditOrthoProducer.h>

class luna_wrapper_proland_EditOrthoProducer {
public:
	typedef Luna< proland::EditOrthoProducer > luna_t;

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

		proland::EditOrthoProducer* self= (proland::EditOrthoProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::EditOrthoProducer >::push(L,self,false);
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
		//proland::EditOrthoProducer* ptr= dynamic_cast< proland::EditOrthoProducer* >(Luna< ork::Object >::check(L,1));
		proland::EditOrthoProducer* ptr= luna_caster< ork::Object, proland::EditOrthoProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::EditOrthoProducer >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_Editor(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::EditOrthoProducer* ptr= dynamic_cast< proland::EditOrthoProducer* >(Luna< proland::Editor >::check(L,1));
		proland::EditOrthoProducer* ptr= luna_caster< proland::Editor, proland::EditOrthoProducer >::cast(Luna< proland::Editor >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::EditOrthoProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=17 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,22716960) ) return false;
		if( (!(Luna< vector< float > >::check(L,9))) ) return false;
		if( lua_isboolean(L,10)==0 ) return false;
		if( lua_type(L,11)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,12)!=LUA_TNUMBER || lua_tointeger(L,12) != lua_tonumber(L,12)) ) return false;
		if( !Luna<void>::has_uniqueid(L,13,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Module >(L,13) ) return false;
		if( !Luna<void>::has_uniqueid(L,14,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,14) ) return false;
		if( !Luna<void>::has_uniqueid(L,15,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,15) ) return false;
		if( !Luna<void>::has_uniqueid(L,16,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,16) ) return false;
		if( lua_type(L,17)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=18 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,7) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,9))) ) return false;
		if( !Luna<void>::has_uniqueid(L,10,22716960) ) return false;
		if( (!(Luna< vector< float > >::check(L,10))) ) return false;
		if( lua_isboolean(L,11)==0 ) return false;
		if( lua_type(L,12)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,13)!=LUA_TNUMBER || lua_tointeger(L,13) != lua_tonumber(L,13)) ) return false;
		if( !Luna<void>::has_uniqueid(L,14,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Module >(L,14) ) return false;
		if( !Luna<void>::has_uniqueid(L,15,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,15) ) return false;
		if( !Luna<void>::has_uniqueid(L,16,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,16) ) return false;
		if( !Luna<void>::has_uniqueid(L,17,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,17) ) return false;
		if( lua_type(L,18)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getTerrain(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTerrainNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPencil(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304302) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBrushColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_edit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55852521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEditorHandler(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_findTile(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<4 || luatop>6 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( luatop>4 && lua_isboolean(L,5)==0 ) return false;
		if( luatop>5 && lua_isboolean(L,6)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getTile(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_putTile(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,10515563)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTiles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_invalidateTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_hasTile(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getTerrain(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getTerrainNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setPencil(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304302) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304302) ) return false;
		if( lua_isboolean(L,4)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getBrushColor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_edit(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,55852521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::EditOrthoProducer::EditOrthoProducer(ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, ork::ptr< ork::ResourceManager > manager, const string & terrain)
	static proland::EditOrthoProducer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditOrthoProducer::EditOrthoProducer(ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, ork::ptr< ork::ResourceManager > manager, const string & terrain) function, expected prototype:\nproland::EditOrthoProducer::EditOrthoProducer(ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, ork::ptr< ork::ResourceManager > manager, const string & terrain)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = 81304302\narg 8 ID = 81304302\narg 9 ID = [unknown]\narg 13 ID = [unknown]\narg 14 ID = [unknown]\narg 15 ID = [unknown]\narg 16 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		ork::ptr< proland::TileProducer > residualTiles = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);
		ork::ptr< ork::Texture2D > orthoTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3);
		ork::ptr< ork::Texture2D > residualTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4);
		ork::ptr< ork::Texture2D > layerTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,5);
		ork::ptr< ork::Program > upsample = Luna< ork::Object >::checkSubType< ork::Program >(L,6);
		ork::vec4f* rootNoiseColor_ptr=(Luna< ork::vec4f >::check(L,7));
		if( !rootNoiseColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rootNoiseColor in proland::EditOrthoProducer::EditOrthoProducer function");
		}
		ork::vec4f rootNoiseColor=*rootNoiseColor_ptr;
		ork::vec4f* noiseColor_ptr=(Luna< ork::vec4f >::check(L,8));
		if( !noiseColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg noiseColor in proland::EditOrthoProducer::EditOrthoProducer function");
		}
		ork::vec4f noiseColor=*noiseColor_ptr;
		vector< float >* noiseAmp_ptr=(Luna< vector< float > >::check(L,9));
		if( !noiseAmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg noiseAmp in proland::EditOrthoProducer::EditOrthoProducer function");
		}
		vector< float > & noiseAmp=*noiseAmp_ptr;
		bool noiseHsv=(bool)(lua_toboolean(L,10)==1);
		float scale=(float)lua_tonumber(L,11);
		int maxLevel=(int)lua_tointeger(L,12);
		ork::ptr< ork::Module > edit = Luna< ork::Object >::checkSubType< ork::Module >(L,13);
		ork::ptr< ork::Program > brush = Luna< ork::Object >::checkSubType< ork::Program >(L,14);
		ork::ptr< ork::Program > compose = Luna< ork::Object >::checkSubType< ork::Program >(L,15);
		ork::ptr< ork::ResourceManager > manager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,16);
		std::string terrain(lua_tostring(L,17),lua_objlen(L,17));

		return new proland::EditOrthoProducer(cache, residualTiles, orthoTexture, residualTexture, layerTexture, upsample, rootNoiseColor, noiseColor, noiseAmp, noiseHsv, scale, maxLevel, edit, brush, compose, manager, terrain);
	}

	// proland::EditOrthoProducer::EditOrthoProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, ork::ptr< ork::ResourceManager > manager, const string & terrain)
	static proland::EditOrthoProducer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::EditOrthoProducer::EditOrthoProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, ork::ptr< ork::ResourceManager > manager, const string & terrain) function, expected prototype:\nproland::EditOrthoProducer::EditOrthoProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Texture2D > layerTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel, ork::ptr< ork::Module > edit, ork::ptr< ork::Program > brush, ork::ptr< ork::Program > compose, ork::ptr< ork::ResourceManager > manager, const string & terrain)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = [unknown]\narg 8 ID = 81304302\narg 9 ID = 81304302\narg 10 ID = [unknown]\narg 14 ID = [unknown]\narg 15 ID = [unknown]\narg 16 ID = [unknown]\narg 17 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		ork::ptr< proland::TileProducer > residualTiles = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3);
		ork::ptr< ork::Texture2D > orthoTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4);
		ork::ptr< ork::Texture2D > residualTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,5);
		ork::ptr< ork::Texture2D > layerTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,6);
		ork::ptr< ork::Program > upsample = Luna< ork::Object >::checkSubType< ork::Program >(L,7);
		ork::vec4f* rootNoiseColor_ptr=(Luna< ork::vec4f >::check(L,8));
		if( !rootNoiseColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rootNoiseColor in proland::EditOrthoProducer::EditOrthoProducer function");
		}
		ork::vec4f rootNoiseColor=*rootNoiseColor_ptr;
		ork::vec4f* noiseColor_ptr=(Luna< ork::vec4f >::check(L,9));
		if( !noiseColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg noiseColor in proland::EditOrthoProducer::EditOrthoProducer function");
		}
		ork::vec4f noiseColor=*noiseColor_ptr;
		vector< float >* noiseAmp_ptr=(Luna< vector< float > >::check(L,10));
		if( !noiseAmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg noiseAmp in proland::EditOrthoProducer::EditOrthoProducer function");
		}
		vector< float > & noiseAmp=*noiseAmp_ptr;
		bool noiseHsv=(bool)(lua_toboolean(L,11)==1);
		float scale=(float)lua_tonumber(L,12);
		int maxLevel=(int)lua_tointeger(L,13);
		ork::ptr< ork::Module > edit = Luna< ork::Object >::checkSubType< ork::Module >(L,14);
		ork::ptr< ork::Program > brush = Luna< ork::Object >::checkSubType< ork::Program >(L,15);
		ork::ptr< ork::Program > compose = Luna< ork::Object >::checkSubType< ork::Program >(L,16);
		ork::ptr< ork::ResourceManager > manager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,17);
		std::string terrain(lua_tostring(L,18),lua_objlen(L,18));

		return new wrapper_proland_EditOrthoProducer(L,NULL, cache, residualTiles, orthoTexture, residualTexture, layerTexture, upsample, rootNoiseColor, noiseColor, noiseAmp, noiseHsv, scale, maxLevel, edit, brush, compose, manager, terrain);
	}

	// Overload binder for proland::EditOrthoProducer::EditOrthoProducer
	static proland::EditOrthoProducer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function EditOrthoProducer, cannot match any of the overloads for function EditOrthoProducer:\n  EditOrthoProducer(ork::ptr< proland::TileCache >, ork::ptr< proland::TileProducer >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Program >, ork::vec4f, ork::vec4f, vector< float > &, bool, float, int, ork::ptr< ork::Module >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::ResourceManager >, const string &)\n  EditOrthoProducer(lua_Table *, ork::ptr< proland::TileCache >, ork::ptr< proland::TileProducer >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Program >, ork::vec4f, ork::vec4f, vector< float > &, bool, float, int, ork::ptr< ork::Module >, ork::ptr< ork::Program >, ork::ptr< ork::Program >, ork::ptr< ork::ResourceManager >, const string &)\n");
		return NULL;
	}


	// Function binds:
	// ork::SceneNode * proland::EditOrthoProducer::getTerrain()
	static int _bind_getTerrain(lua_State *L) {
		if (!_lg_typecheck_getTerrain(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode * proland::EditOrthoProducer::getTerrain() function, expected prototype:\nork::SceneNode * proland::EditOrthoProducer::getTerrain()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneNode * proland::EditOrthoProducer::getTerrain(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneNode * lret = self->getTerrain();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::SceneNode >::push(L,lret,false);

		return 1;
	}

	// proland::TerrainNode * proland::EditOrthoProducer::getTerrainNode()
	static int _bind_getTerrainNode(lua_State *L) {
		if (!_lg_typecheck_getTerrainNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainNode * proland::EditOrthoProducer::getTerrainNode() function, expected prototype:\nproland::TerrainNode * proland::EditOrthoProducer::getTerrainNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TerrainNode * proland::EditOrthoProducer::getTerrainNode(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TerrainNode * lret = self->getTerrainNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TerrainNode >::push(L,lret,false);

		return 1;
	}

	// void proland::EditOrthoProducer::setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint)
	static int _bind_setPencil(lua_State *L) {
		if (!_lg_typecheck_setPencil(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint) function, expected prototype:\nvoid proland::EditOrthoProducer::setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint)\nClass arguments details:\narg 1 ID = 81304302\narg 2 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* pencil_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !pencil_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pencil in proland::EditOrthoProducer::setPencil function");
		}
		const ork::vec4f & pencil=*pencil_ptr;
		const ork::vec4f* brushColor_ptr=(Luna< ork::vec4f >::check(L,3));
		if( !brushColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brushColor in proland::EditOrthoProducer::setPencil function");
		}
		const ork::vec4f & brushColor=*brushColor_ptr;
		bool paint=(bool)(lua_toboolean(L,4)==1);

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::setPencil(const ork::vec4f &, const ork::vec4f &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setPencil(pencil, brushColor, paint);

		return 0;
	}

	// ork::vec4f proland::EditOrthoProducer::getBrushColor()
	static int _bind_getBrushColor(lua_State *L) {
		if (!_lg_typecheck_getBrushColor(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::EditOrthoProducer::getBrushColor() function, expected prototype:\nork::vec4f proland::EditOrthoProducer::getBrushColor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::EditOrthoProducer::getBrushColor(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->getBrushColor();
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// void proland::EditOrthoProducer::edit(const vector< ork::vec4d > & strokes)
	static int _bind_edit(lua_State *L) {
		if (!_lg_typecheck_edit(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::edit(const vector< ork::vec4d > & strokes) function, expected prototype:\nvoid proland::EditOrthoProducer::edit(const vector< ork::vec4d > & strokes)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const vector< ork::vec4d >* strokes_ptr=(Luna< vector< ork::vec4d > >::check(L,2));
		if( !strokes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg strokes in proland::EditOrthoProducer::edit function");
		}
		const vector< ork::vec4d > & strokes=*strokes_ptr;

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::edit(const vector< ork::vec4d > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->edit(strokes);

		return 0;
	}

	// void proland::EditOrthoProducer::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::update() function, expected prototype:\nvoid proland::EditOrthoProducer::update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::update(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update();

		return 0;
	}

	// void proland::EditOrthoProducer::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::reset() function, expected prototype:\nvoid proland::EditOrthoProducer::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::reset(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// static ork::ptr< proland::EditorHandler > proland::EditOrthoProducer::getEditorHandler()
	static int _bind_getEditorHandler(lua_State *L) {
		if (!_lg_typecheck_getEditorHandler(L)) {
			luaL_error(L, "luna typecheck failed in static ork::ptr< proland::EditorHandler > proland::EditOrthoProducer::getEditorHandler() function, expected prototype:\nstatic ork::ptr< proland::EditorHandler > proland::EditOrthoProducer::getEditorHandler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ptr< proland::EditorHandler > lret = proland::EditOrthoProducer::getEditorHandler();
		Luna< proland::EditorHandler >::push(L,lret.get(),false);

		return 1;
	}

	// const char * proland::EditOrthoProducer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::EditOrthoProducer::base_toString() function, expected prototype:\nconst char * proland::EditOrthoProducer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::EditOrthoProducer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->EditOrthoProducer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< proland::TileCache > proland::EditOrthoProducer::base_getCache()
	static int _bind_base_getCache(lua_State *L) {
		if (!_lg_typecheck_base_getCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileCache > proland::EditOrthoProducer::base_getCache() function, expected prototype:\nork::ptr< proland::TileCache > proland::EditOrthoProducer::base_getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileCache > proland::EditOrthoProducer::base_getCache(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileCache > lret = self->EditOrthoProducer::getCache();
		Luna< proland::TileCache >::push(L,lret.get(),false);

		return 1;
	}

	// proland::TileCache::Tile * proland::EditOrthoProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_base_findTile(lua_State *L) {
		if (!_lg_typecheck_base_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::EditOrthoProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nproland::TileCache::Tile * proland::EditOrthoProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::EditOrthoProducer::base_findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->EditOrthoProducer::findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// proland::TileCache::Tile * proland::EditOrthoProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_getTile(lua_State *L) {
		if (!_lg_typecheck_base_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::EditOrthoProducer::base_getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::EditOrthoProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::EditOrthoProducer::base_getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->EditOrthoProducer::getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// void proland::EditOrthoProducer::base_putTile(proland::TileCache::Tile * t)
	static int _bind_base_putTile(lua_State *L) {
		if (!_lg_typecheck_base_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::base_putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::EditOrthoProducer::base_putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::base_putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoProducer::putTile(t);

		return 0;
	}

	// void proland::EditOrthoProducer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::base_invalidateTiles() function, expected prototype:\nvoid proland::EditOrthoProducer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoProducer::invalidateTiles();

		return 0;
	}

	// void proland::EditOrthoProducer::base_invalidateTile(int level, int tx, int ty)
	static int _bind_base_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::base_invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::EditOrthoProducer::base_invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::base_invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoProducer::invalidateTile(level, tx, ty);

		return 0;
	}

	// void proland::EditOrthoProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::EditOrthoProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::EditOrthoProducer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoProducer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::EditOrthoProducer::base_setRootQuadSize(float size)
	static int _bind_base_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_base_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::base_setRootQuadSize(float size) function, expected prototype:\nvoid proland::EditOrthoProducer::base_setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::base_setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoProducer::setRootQuadSize(size);

		return 0;
	}

	// int proland::EditOrthoProducer::base_getBorder()
	static int _bind_base_getBorder(lua_State *L) {
		if (!_lg_typecheck_base_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::EditOrthoProducer::base_getBorder() function, expected prototype:\nint proland::EditOrthoProducer::base_getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::EditOrthoProducer::base_getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->EditOrthoProducer::getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::EditOrthoProducer::base_hasTile(int level, int tx, int ty)
	static int _bind_base_hasTile(lua_State *L) {
		if (!_lg_typecheck_base_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditOrthoProducer::base_hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::EditOrthoProducer::base_hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditOrthoProducer::base_hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditOrthoProducer::hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::EditOrthoProducer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::EditOrthoProducer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::EditOrthoProducer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::EditOrthoProducer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->EditOrthoProducer::prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::SceneNode * proland::EditOrthoProducer::base_getTerrain()
	static int _bind_base_getTerrain(lua_State *L) {
		if (!_lg_typecheck_base_getTerrain(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneNode * proland::EditOrthoProducer::base_getTerrain() function, expected prototype:\nork::SceneNode * proland::EditOrthoProducer::base_getTerrain()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneNode * proland::EditOrthoProducer::base_getTerrain(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneNode * lret = self->EditOrthoProducer::getTerrain();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::SceneNode >::push(L,lret,false);

		return 1;
	}

	// proland::TerrainNode * proland::EditOrthoProducer::base_getTerrainNode()
	static int _bind_base_getTerrainNode(lua_State *L) {
		if (!_lg_typecheck_base_getTerrainNode(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainNode * proland::EditOrthoProducer::base_getTerrainNode() function, expected prototype:\nproland::TerrainNode * proland::EditOrthoProducer::base_getTerrainNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TerrainNode * proland::EditOrthoProducer::base_getTerrainNode(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TerrainNode * lret = self->EditOrthoProducer::getTerrainNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TerrainNode >::push(L,lret,false);

		return 1;
	}

	// void proland::EditOrthoProducer::base_setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint)
	static int _bind_base_setPencil(lua_State *L) {
		if (!_lg_typecheck_base_setPencil(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::base_setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint) function, expected prototype:\nvoid proland::EditOrthoProducer::base_setPencil(const ork::vec4f & pencil, const ork::vec4f & brushColor, bool paint)\nClass arguments details:\narg 1 ID = 81304302\narg 2 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4f* pencil_ptr=(Luna< ork::vec4f >::check(L,2));
		if( !pencil_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pencil in proland::EditOrthoProducer::base_setPencil function");
		}
		const ork::vec4f & pencil=*pencil_ptr;
		const ork::vec4f* brushColor_ptr=(Luna< ork::vec4f >::check(L,3));
		if( !brushColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg brushColor in proland::EditOrthoProducer::base_setPencil function");
		}
		const ork::vec4f & brushColor=*brushColor_ptr;
		bool paint=(bool)(lua_toboolean(L,4)==1);

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::base_setPencil(const ork::vec4f &, const ork::vec4f &, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoProducer::setPencil(pencil, brushColor, paint);

		return 0;
	}

	// ork::vec4f proland::EditOrthoProducer::base_getBrushColor()
	static int _bind_base_getBrushColor(lua_State *L) {
		if (!_lg_typecheck_base_getBrushColor(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::EditOrthoProducer::base_getBrushColor() function, expected prototype:\nork::vec4f proland::EditOrthoProducer::base_getBrushColor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::EditOrthoProducer::base_getBrushColor(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->EditOrthoProducer::getBrushColor();
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// void proland::EditOrthoProducer::base_edit(const vector< ork::vec4d > & strokes)
	static int _bind_base_edit(lua_State *L) {
		if (!_lg_typecheck_base_edit(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::base_edit(const vector< ork::vec4d > & strokes) function, expected prototype:\nvoid proland::EditOrthoProducer::base_edit(const vector< ork::vec4d > & strokes)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		const vector< ork::vec4d >* strokes_ptr=(Luna< vector< ork::vec4d > >::check(L,2));
		if( !strokes_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg strokes in proland::EditOrthoProducer::base_edit function");
		}
		const vector< ork::vec4d > & strokes=*strokes_ptr;

		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::base_edit(const vector< ork::vec4d > &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoProducer::edit(strokes);

		return 0;
	}

	// void proland::EditOrthoProducer::base_update()
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::base_update() function, expected prototype:\nvoid proland::EditOrthoProducer::base_update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::base_update(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoProducer::update();

		return 0;
	}

	// void proland::EditOrthoProducer::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void proland::EditOrthoProducer::base_reset() function, expected prototype:\nvoid proland::EditOrthoProducer::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::EditOrthoProducer* self=Luna< ork::Object >::checkSubType< proland::EditOrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::EditOrthoProducer::base_reset(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->EditOrthoProducer::reset();

		return 0;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_proland_Editor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_proland_Editor(lua_State *L) {
		if (!_lg_typecheck_baseCast_proland_Editor(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_proland_Editor function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		proland::Editor* res = luna_caster<ork::Object,proland::Editor>::cast(self); // dynamic_cast<proland::Editor*>(self);
		if(!res)
			return 0;
			
		Luna< proland::Editor >::push(L,res,false);
		return 1;

	}

};

proland::EditOrthoProducer* LunaTraits< proland::EditOrthoProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_EditOrthoProducer::_bind_ctor(L);
}

void LunaTraits< proland::EditOrthoProducer >::_bind_dtor(proland::EditOrthoProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::EditOrthoProducer >::className[] = "EditOrthoProducer";
const char LunaTraits< proland::EditOrthoProducer >::fullName[] = "proland::EditOrthoProducer";
const char LunaTraits< proland::EditOrthoProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::EditOrthoProducer >::parents[] = {"proland.OrthoProducer", "proland.Editor", 0};
const int LunaTraits< proland::EditOrthoProducer >::hash = 48155224;
const int LunaTraits< proland::EditOrthoProducer >::uniqueIDs[] = {1381405, 4450546,0};

luna_RegType LunaTraits< proland::EditOrthoProducer >::methods[] = {
	{"getTerrain", &luna_wrapper_proland_EditOrthoProducer::_bind_getTerrain},
	{"getTerrainNode", &luna_wrapper_proland_EditOrthoProducer::_bind_getTerrainNode},
	{"setPencil", &luna_wrapper_proland_EditOrthoProducer::_bind_setPencil},
	{"getBrushColor", &luna_wrapper_proland_EditOrthoProducer::_bind_getBrushColor},
	{"edit", &luna_wrapper_proland_EditOrthoProducer::_bind_edit},
	{"update", &luna_wrapper_proland_EditOrthoProducer::_bind_update},
	{"reset", &luna_wrapper_proland_EditOrthoProducer::_bind_reset},
	{"getEditorHandler", &luna_wrapper_proland_EditOrthoProducer::_bind_getEditorHandler},
	{"base_toString", &luna_wrapper_proland_EditOrthoProducer::_bind_base_toString},
	{"base_getCache", &luna_wrapper_proland_EditOrthoProducer::_bind_base_getCache},
	{"base_findTile", &luna_wrapper_proland_EditOrthoProducer::_bind_base_findTile},
	{"base_getTile", &luna_wrapper_proland_EditOrthoProducer::_bind_base_getTile},
	{"base_putTile", &luna_wrapper_proland_EditOrthoProducer::_bind_base_putTile},
	{"base_invalidateTiles", &luna_wrapper_proland_EditOrthoProducer::_bind_base_invalidateTiles},
	{"base_invalidateTile", &luna_wrapper_proland_EditOrthoProducer::_bind_base_invalidateTile},
	{"base_getReferencedProducers", &luna_wrapper_proland_EditOrthoProducer::_bind_base_getReferencedProducers},
	{"base_setRootQuadSize", &luna_wrapper_proland_EditOrthoProducer::_bind_base_setRootQuadSize},
	{"base_getBorder", &luna_wrapper_proland_EditOrthoProducer::_bind_base_getBorder},
	{"base_hasTile", &luna_wrapper_proland_EditOrthoProducer::_bind_base_hasTile},
	{"base_prefetchTile", &luna_wrapper_proland_EditOrthoProducer::_bind_base_prefetchTile},
	{"base_getTerrain", &luna_wrapper_proland_EditOrthoProducer::_bind_base_getTerrain},
	{"base_getTerrainNode", &luna_wrapper_proland_EditOrthoProducer::_bind_base_getTerrainNode},
	{"base_setPencil", &luna_wrapper_proland_EditOrthoProducer::_bind_base_setPencil},
	{"base_getBrushColor", &luna_wrapper_proland_EditOrthoProducer::_bind_base_getBrushColor},
	{"base_edit", &luna_wrapper_proland_EditOrthoProducer::_bind_base_edit},
	{"base_update", &luna_wrapper_proland_EditOrthoProducer::_bind_base_update},
	{"base_reset", &luna_wrapper_proland_EditOrthoProducer::_bind_base_reset},
	{"fromVoid", &luna_wrapper_proland_EditOrthoProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_EditOrthoProducer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_EditOrthoProducer::_bind_getTable},
	{"asEditor", &luna_wrapper_proland_EditOrthoProducer::_bind_baseCast_proland_Editor},
	{0,0}
};

luna_ConverterType LunaTraits< proland::EditOrthoProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_EditOrthoProducer::_cast_from_Object},
	{"proland::Editor", &luna_wrapper_proland_EditOrthoProducer::_cast_from_Editor},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::EditOrthoProducer >::enumValues[] = {
	{0,0}
};


