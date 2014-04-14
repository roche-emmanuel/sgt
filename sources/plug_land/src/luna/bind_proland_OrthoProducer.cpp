#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_OrthoProducer.h>

class luna_wrapper_proland_OrthoProducer {
public:
	typedef Luna< proland::OrthoProducer > luna_t;

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

		proland::OrthoProducer* self= (proland::OrthoProducer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::OrthoProducer >::push(L,self,false);
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
		//proland::OrthoProducer* ptr= dynamic_cast< proland::OrthoProducer* >(Luna< ork::Object >::check(L,1));
		proland::OrthoProducer* ptr= luna_caster< ork::Object, proland::OrthoProducer >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::OrthoProducer >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=11 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileCache >(L,1) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,5) ) return false;
		if( !Luna<void>::has_uniqueid(L,6,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,6))) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,77249888) ) return false;
		if( (!(Luna< std::vector< float > >::check(L,8))) ) return false;
		if( lua_isboolean(L,9)==0 ) return false;
		if( lua_type(L,10)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,11)!=LUA_TNUMBER || lua_tointeger(L,11) != lua_tonumber(L,11)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=12 ) return false;

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
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,6) ) return false;
		if( !Luna<void>::has_uniqueid(L,7,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,7))) ) return false;
		if( !Luna<void>::has_uniqueid(L,8,81304302) ) return false;
		if( (!(Luna< ork::vec4f >::check(L,8))) ) return false;
		if( !Luna<void>::has_uniqueid(L,9,77249888) ) return false;
		if( (!(Luna< std::vector< float > >::check(L,9))) ) return false;
		if( lua_isboolean(L,10)==0 ) return false;
		if( lua_type(L,11)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,12)!=LUA_TNUMBER || lua_tointeger(L,12) != lua_tonumber(L,12)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getReferencedProducers(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,75010607) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRootQuadSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBorder(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasTile(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_prefetchTile(lua_State *L) {
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

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2) ) return false;
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


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::OrthoProducer::OrthoProducer(ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel)
	static proland::OrthoProducer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::OrthoProducer::OrthoProducer(ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel) function, expected prototype:\nproland::OrthoProducer::OrthoProducer(ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = 81304302\narg 7 ID = 81304302\narg 8 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,1);
		ork::ptr< proland::TileProducer > residualTiles = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);
		ork::ptr< ork::Texture2D > orthoTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,3);
		ork::ptr< ork::Texture2D > residualTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4);
		ork::ptr< ork::Program > upsample = Luna< ork::Object >::checkSubType< ork::Program >(L,5);
		ork::vec4f* rootNoiseColor_ptr=(Luna< ork::vec4f >::check(L,6));
		if( !rootNoiseColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rootNoiseColor in proland::OrthoProducer::OrthoProducer function");
		}
		ork::vec4f rootNoiseColor=*rootNoiseColor_ptr;
		ork::vec4f* noiseColor_ptr=(Luna< ork::vec4f >::check(L,7));
		if( !noiseColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg noiseColor in proland::OrthoProducer::OrthoProducer function");
		}
		ork::vec4f noiseColor=*noiseColor_ptr;
		std::vector< float >* noiseAmp_ptr=(Luna< std::vector< float > >::check(L,8));
		if( !noiseAmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg noiseAmp in proland::OrthoProducer::OrthoProducer function");
		}
		std::vector< float > & noiseAmp=*noiseAmp_ptr;
		bool noiseHsv=(bool)(lua_toboolean(L,9)==1);
		float scale=(float)lua_tonumber(L,10);
		int maxLevel=(int)lua_tointeger(L,11);

		return new proland::OrthoProducer(cache, residualTiles, orthoTexture, residualTexture, upsample, rootNoiseColor, noiseColor, noiseAmp, noiseHsv, scale, maxLevel);
	}

	// proland::OrthoProducer::OrthoProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel)
	static proland::OrthoProducer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::OrthoProducer::OrthoProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel) function, expected prototype:\nproland::OrthoProducer::OrthoProducer(lua_Table * data, ork::ptr< proland::TileCache > cache, ork::ptr< proland::TileProducer > residualTiles, ork::ptr< ork::Texture2D > orthoTexture, ork::ptr< ork::Texture2D > residualTexture, ork::ptr< ork::Program > upsample, ork::vec4f rootNoiseColor, ork::vec4f noiseColor, std::vector< float > & noiseAmp, bool noiseHsv, float scale, int maxLevel)\nClass arguments details:\narg 2 ID = [unknown]\narg 3 ID = [unknown]\narg 4 ID = [unknown]\narg 5 ID = [unknown]\narg 6 ID = [unknown]\narg 7 ID = 81304302\narg 8 ID = 81304302\narg 9 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< proland::TileCache > cache = Luna< ork::Object >::checkSubType< proland::TileCache >(L,2);
		ork::ptr< proland::TileProducer > residualTiles = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3);
		ork::ptr< ork::Texture2D > orthoTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,4);
		ork::ptr< ork::Texture2D > residualTexture = Luna< ork::Object >::checkSubType< ork::Texture2D >(L,5);
		ork::ptr< ork::Program > upsample = Luna< ork::Object >::checkSubType< ork::Program >(L,6);
		ork::vec4f* rootNoiseColor_ptr=(Luna< ork::vec4f >::check(L,7));
		if( !rootNoiseColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rootNoiseColor in proland::OrthoProducer::OrthoProducer function");
		}
		ork::vec4f rootNoiseColor=*rootNoiseColor_ptr;
		ork::vec4f* noiseColor_ptr=(Luna< ork::vec4f >::check(L,8));
		if( !noiseColor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg noiseColor in proland::OrthoProducer::OrthoProducer function");
		}
		ork::vec4f noiseColor=*noiseColor_ptr;
		std::vector< float >* noiseAmp_ptr=(Luna< std::vector< float > >::check(L,9));
		if( !noiseAmp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg noiseAmp in proland::OrthoProducer::OrthoProducer function");
		}
		std::vector< float > & noiseAmp=*noiseAmp_ptr;
		bool noiseHsv=(bool)(lua_toboolean(L,10)==1);
		float scale=(float)lua_tonumber(L,11);
		int maxLevel=(int)lua_tointeger(L,12);

		return new wrapper_proland_OrthoProducer(L,NULL, cache, residualTiles, orthoTexture, residualTexture, upsample, rootNoiseColor, noiseColor, noiseAmp, noiseHsv, scale, maxLevel);
	}

	// Overload binder for proland::OrthoProducer::OrthoProducer
	static proland::OrthoProducer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function OrthoProducer, cannot match any of the overloads for function OrthoProducer:\n  OrthoProducer(ork::ptr< proland::TileCache >, ork::ptr< proland::TileProducer >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Program >, ork::vec4f, ork::vec4f, std::vector< float > &, bool, float, int)\n  OrthoProducer(lua_Table *, ork::ptr< proland::TileCache >, ork::ptr< proland::TileProducer >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Texture2D >, ork::ptr< ork::Program >, ork::vec4f, ork::vec4f, std::vector< float > &, bool, float, int)\n");
		return NULL;
	}


	// Function binds:
	// void proland::OrthoProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::OrthoProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::OrthoProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::OrthoProducer::getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::OrthoProducer::getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getReferencedProducers(producers);

		return 0;
	}

	// void proland::OrthoProducer::setRootQuadSize(float size)
	static int _bind_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::OrthoProducer::setRootQuadSize(float size) function, expected prototype:\nvoid proland::OrthoProducer::setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::OrthoProducer::setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRootQuadSize(size);

		return 0;
	}

	// int proland::OrthoProducer::getBorder()
	static int _bind_getBorder(lua_State *L) {
		if (!_lg_typecheck_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::OrthoProducer::getBorder() function, expected prototype:\nint proland::OrthoProducer::getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::OrthoProducer::getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::OrthoProducer::hasTile(int level, int tx, int ty)
	static int _bind_hasTile(lua_State *L) {
		if (!_lg_typecheck_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::OrthoProducer::hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::OrthoProducer::hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::OrthoProducer::hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::OrthoProducer::prefetchTile(int level, int tx, int ty)
	static int _bind_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::OrthoProducer::prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::OrthoProducer::prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::OrthoProducer::prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * proland::OrthoProducer::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::OrthoProducer::base_toString() function, expected prototype:\nconst char * proland::OrthoProducer::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::OrthoProducer::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->OrthoProducer::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< proland::TileCache > proland::OrthoProducer::base_getCache()
	static int _bind_base_getCache(lua_State *L) {
		if (!_lg_typecheck_base_getCache(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TileCache > proland::OrthoProducer::base_getCache() function, expected prototype:\nork::ptr< proland::TileCache > proland::OrthoProducer::base_getCache()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TileCache > proland::OrthoProducer::base_getCache(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TileCache > lret = self->OrthoProducer::getCache();
		Luna< proland::TileCache >::push(L,lret.get(),false);

		return 1;
	}

	// proland::TileCache::Tile * proland::OrthoProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)
	static int _bind_base_findTile(lua_State *L) {
		if (!_lg_typecheck_base_findTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::OrthoProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false) function, expected prototype:\nproland::TileCache::Tile * proland::OrthoProducer::base_findTile(int level, int tx, int ty, bool includeCache = false, bool done = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		bool includeCache=luatop>4 ? (bool)(lua_toboolean(L,5)==1) : (bool)false;
		bool done=luatop>5 ? (bool)(lua_toboolean(L,6)==1) : (bool)false;

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::OrthoProducer::base_findTile(int, int, int, bool, bool). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->OrthoProducer::findTile(level, tx, ty, includeCache, done);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// proland::TileCache::Tile * proland::OrthoProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)
	static int _bind_base_getTile(lua_State *L) {
		if (!_lg_typecheck_base_getTile(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileCache::Tile * proland::OrthoProducer::base_getTile(int level, int tx, int ty, unsigned int deadline) function, expected prototype:\nproland::TileCache::Tile * proland::OrthoProducer::base_getTile(int level, int tx, int ty, unsigned int deadline)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);
		unsigned int deadline=(unsigned int)lua_tointeger(L,5);

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::TileCache::Tile * proland::OrthoProducer::base_getTile(int, int, int, unsigned int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::TileCache::Tile * lret = self->OrthoProducer::getTile(level, tx, ty, deadline);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::TileCache::Tile >::push(L,lret,false);

		return 1;
	}

	// void proland::OrthoProducer::base_putTile(proland::TileCache::Tile * t)
	static int _bind_base_putTile(lua_State *L) {
		if (!_lg_typecheck_base_putTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::OrthoProducer::base_putTile(proland::TileCache::Tile * t) function, expected prototype:\nvoid proland::OrthoProducer::base_putTile(proland::TileCache::Tile * t)\nClass arguments details:\narg 1 ID = 10515563\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::TileCache::Tile* t=(Luna< proland::TileCache::Tile >::check(L,2));

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::OrthoProducer::base_putTile(proland::TileCache::Tile *). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrthoProducer::putTile(t);

		return 0;
	}

	// void proland::OrthoProducer::base_invalidateTiles()
	static int _bind_base_invalidateTiles(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTiles(L)) {
			luaL_error(L, "luna typecheck failed in void proland::OrthoProducer::base_invalidateTiles() function, expected prototype:\nvoid proland::OrthoProducer::base_invalidateTiles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::OrthoProducer::base_invalidateTiles(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrthoProducer::invalidateTiles();

		return 0;
	}

	// void proland::OrthoProducer::base_invalidateTile(int level, int tx, int ty)
	static int _bind_base_invalidateTile(lua_State *L) {
		if (!_lg_typecheck_base_invalidateTile(L)) {
			luaL_error(L, "luna typecheck failed in void proland::OrthoProducer::base_invalidateTile(int level, int tx, int ty) function, expected prototype:\nvoid proland::OrthoProducer::base_invalidateTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::OrthoProducer::base_invalidateTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrthoProducer::invalidateTile(level, tx, ty);

		return 0;
	}

	// void proland::OrthoProducer::base_update(ork::ptr< ork::SceneManager > scene)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::OrthoProducer::base_update(ork::ptr< ork::SceneManager > scene) function, expected prototype:\nvoid proland::OrthoProducer::base_update(ork::ptr< ork::SceneManager > scene)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::OrthoProducer::base_update(ork::ptr< ork::SceneManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrthoProducer::update(scene);

		return 0;
	}

	// void proland::OrthoProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const
	static int _bind_base_getReferencedProducers(lua_State *L) {
		if (!_lg_typecheck_base_getReferencedProducers(L)) {
			luaL_error(L, "luna typecheck failed in void proland::OrthoProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const function, expected prototype:\nvoid proland::OrthoProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > & producers) const\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::vector< ork::ptr< proland::TileProducer > >* producers_ptr=(Luna< std::vector< ork::ptr< proland::TileProducer > > >::check(L,2));
		if( !producers_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg producers in proland::OrthoProducer::base_getReferencedProducers function");
		}
		std::vector< ork::ptr< proland::TileProducer > > & producers=*producers_ptr;

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::OrthoProducer::base_getReferencedProducers(std::vector< ork::ptr< proland::TileProducer > > &) const. Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrthoProducer::getReferencedProducers(producers);

		return 0;
	}

	// void proland::OrthoProducer::base_setRootQuadSize(float size)
	static int _bind_base_setRootQuadSize(lua_State *L) {
		if (!_lg_typecheck_base_setRootQuadSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::OrthoProducer::base_setRootQuadSize(float size) function, expected prototype:\nvoid proland::OrthoProducer::base_setRootQuadSize(float size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float size=(float)lua_tonumber(L,2);

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::OrthoProducer::base_setRootQuadSize(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->OrthoProducer::setRootQuadSize(size);

		return 0;
	}

	// int proland::OrthoProducer::base_getBorder()
	static int _bind_base_getBorder(lua_State *L) {
		if (!_lg_typecheck_base_getBorder(L)) {
			luaL_error(L, "luna typecheck failed in int proland::OrthoProducer::base_getBorder() function, expected prototype:\nint proland::OrthoProducer::base_getBorder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::OrthoProducer::base_getBorder(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->OrthoProducer::getBorder();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool proland::OrthoProducer::base_hasTile(int level, int tx, int ty)
	static int _bind_base_hasTile(lua_State *L) {
		if (!_lg_typecheck_base_hasTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::OrthoProducer::base_hasTile(int level, int tx, int ty) function, expected prototype:\nbool proland::OrthoProducer::base_hasTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::OrthoProducer::base_hasTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OrthoProducer::hasTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool proland::OrthoProducer::base_prefetchTile(int level, int tx, int ty)
	static int _bind_base_prefetchTile(lua_State *L) {
		if (!_lg_typecheck_base_prefetchTile(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::OrthoProducer::base_prefetchTile(int level, int tx, int ty) function, expected prototype:\nbool proland::OrthoProducer::base_prefetchTile(int level, int tx, int ty)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		int tx=(int)lua_tointeger(L,3);
		int ty=(int)lua_tointeger(L,4);

		proland::OrthoProducer* self=Luna< ork::Object >::checkSubType< proland::OrthoProducer >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::OrthoProducer::base_prefetchTile(int, int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->OrthoProducer::prefetchTile(level, tx, ty);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::OrthoProducer* LunaTraits< proland::OrthoProducer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_OrthoProducer::_bind_ctor(L);
}

void LunaTraits< proland::OrthoProducer >::_bind_dtor(proland::OrthoProducer* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::OrthoProducer >::className[] = "OrthoProducer";
const char LunaTraits< proland::OrthoProducer >::fullName[] = "proland::OrthoProducer";
const char LunaTraits< proland::OrthoProducer >::moduleName[] = "proland";
const char* LunaTraits< proland::OrthoProducer >::parents[] = {"proland.TileProducer", 0};
const int LunaTraits< proland::OrthoProducer >::hash = 87614839;
const int LunaTraits< proland::OrthoProducer >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::OrthoProducer >::methods[] = {
	{"getReferencedProducers", &luna_wrapper_proland_OrthoProducer::_bind_getReferencedProducers},
	{"setRootQuadSize", &luna_wrapper_proland_OrthoProducer::_bind_setRootQuadSize},
	{"getBorder", &luna_wrapper_proland_OrthoProducer::_bind_getBorder},
	{"hasTile", &luna_wrapper_proland_OrthoProducer::_bind_hasTile},
	{"prefetchTile", &luna_wrapper_proland_OrthoProducer::_bind_prefetchTile},
	{"base_toString", &luna_wrapper_proland_OrthoProducer::_bind_base_toString},
	{"base_getCache", &luna_wrapper_proland_OrthoProducer::_bind_base_getCache},
	{"base_findTile", &luna_wrapper_proland_OrthoProducer::_bind_base_findTile},
	{"base_getTile", &luna_wrapper_proland_OrthoProducer::_bind_base_getTile},
	{"base_putTile", &luna_wrapper_proland_OrthoProducer::_bind_base_putTile},
	{"base_invalidateTiles", &luna_wrapper_proland_OrthoProducer::_bind_base_invalidateTiles},
	{"base_invalidateTile", &luna_wrapper_proland_OrthoProducer::_bind_base_invalidateTile},
	{"base_update", &luna_wrapper_proland_OrthoProducer::_bind_base_update},
	{"base_getReferencedProducers", &luna_wrapper_proland_OrthoProducer::_bind_base_getReferencedProducers},
	{"base_setRootQuadSize", &luna_wrapper_proland_OrthoProducer::_bind_base_setRootQuadSize},
	{"base_getBorder", &luna_wrapper_proland_OrthoProducer::_bind_base_getBorder},
	{"base_hasTile", &luna_wrapper_proland_OrthoProducer::_bind_base_hasTile},
	{"base_prefetchTile", &luna_wrapper_proland_OrthoProducer::_bind_base_prefetchTile},
	{"fromVoid", &luna_wrapper_proland_OrthoProducer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_OrthoProducer::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_OrthoProducer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::OrthoProducer >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_OrthoProducer::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::OrthoProducer >::enumValues[] = {
	{0,0}
};


