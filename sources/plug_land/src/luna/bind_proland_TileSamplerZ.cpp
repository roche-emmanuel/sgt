#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TileSamplerZ.h>

class luna_wrapper_proland_TileSamplerZ {
public:
	typedef Luna< proland::TileSamplerZ > luna_t;

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

		proland::TileSamplerZ* self= (proland::TileSamplerZ*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TileSamplerZ >::push(L,self,false);
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
		//proland::TileSamplerZ* ptr= dynamic_cast< proland::TileSamplerZ* >(Luna< ork::Object >::check(L,1));
		proland::TileSamplerZ* ptr= luna_caster< ork::Object, proland::TileSamplerZ >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TileSamplerZ >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TileSamplerZ::TileSamplerZ(const std::string & name, ork::ptr< proland::TileProducer > producer = NULL)
	static proland::TileSamplerZ* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileSamplerZ::TileSamplerZ(const std::string & name, ork::ptr< proland::TileProducer > producer = NULL) function, expected prototype:\nproland::TileSamplerZ::TileSamplerZ(const std::string & name, ork::ptr< proland::TileProducer > producer = NULL)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,1),lua_objlen(L,1));
		ork::ptr< proland::TileProducer > producer = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,2);

		return new proland::TileSamplerZ(name, producer);
	}

	// proland::TileSamplerZ::TileSamplerZ(lua_Table * data, const std::string & name, ork::ptr< proland::TileProducer > producer = NULL)
	static proland::TileSamplerZ* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TileSamplerZ::TileSamplerZ(lua_Table * data, const std::string & name, ork::ptr< proland::TileProducer > producer = NULL) function, expected prototype:\nproland::TileSamplerZ::TileSamplerZ(lua_Table * data, const std::string & name, ork::ptr< proland::TileProducer > producer = NULL)\nClass arguments details:\narg 3 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< proland::TileProducer > producer = Luna< ork::Object >::checkSubType< proland::TileProducer >(L,3);

		return new wrapper_proland_TileSamplerZ(L,NULL, name, producer);
	}

	// Overload binder for proland::TileSamplerZ::TileSamplerZ
	static proland::TileSamplerZ* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TileSamplerZ, cannot match any of the overloads for function TileSamplerZ:\n  TileSamplerZ(const std::string &, ork::ptr< proland::TileProducer >)\n  TileSamplerZ(lua_Table *, const std::string &, ork::ptr< proland::TileProducer >)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::Task > proland::TileSamplerZ::update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::TileSamplerZ::update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root) function, expected prototype:\nork::ptr< ork::Task > proland::TileSamplerZ::update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);
		ork::ptr< proland::TerrainQuad > root = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3);

		proland::TileSamplerZ* self=Luna< ork::Object >::checkSubType< proland::TileSamplerZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::TileSamplerZ::update(ork::ptr< ork::SceneManager >, ork::ptr< proland::TerrainQuad >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->update(scene, root);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}

	// const char * proland::TileSamplerZ::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TileSamplerZ::base_toString() function, expected prototype:\nconst char * proland::TileSamplerZ::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TileSamplerZ* self=Luna< ork::Object >::checkSubType< proland::TileSamplerZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TileSamplerZ::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TileSamplerZ::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// ork::ptr< ork::Task > proland::TileSamplerZ::base_update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root)
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Task > proland::TileSamplerZ::base_update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root) function, expected prototype:\nork::ptr< ork::Task > proland::TileSamplerZ::base_update(ork::ptr< ork::SceneManager > scene, ork::ptr< proland::TerrainQuad > root)\nClass arguments details:\narg 1 ID = [unknown]\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneManager > scene = Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2);
		ork::ptr< proland::TerrainQuad > root = Luna< ork::Object >::checkSubType< proland::TerrainQuad >(L,3);

		proland::TileSamplerZ* self=Luna< ork::Object >::checkSubType< proland::TileSamplerZ >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Task > proland::TileSamplerZ::base_update(ork::ptr< ork::SceneManager >, ork::ptr< proland::TerrainQuad >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Task > lret = self->TileSamplerZ::update(scene, root);
		Luna< ork::Task >::push(L,lret.get(),false);

		return 1;
	}


	// Operator binds:

};

proland::TileSamplerZ* LunaTraits< proland::TileSamplerZ >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TileSamplerZ::_bind_ctor(L);
}

void LunaTraits< proland::TileSamplerZ >::_bind_dtor(proland::TileSamplerZ* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TileSamplerZ >::className[] = "TileSamplerZ";
const char LunaTraits< proland::TileSamplerZ >::fullName[] = "proland::TileSamplerZ";
const char LunaTraits< proland::TileSamplerZ >::moduleName[] = "proland";
const char* LunaTraits< proland::TileSamplerZ >::parents[] = {"proland.TileSampler", 0};
const int LunaTraits< proland::TileSamplerZ >::hash = 69236609;
const int LunaTraits< proland::TileSamplerZ >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TileSamplerZ >::methods[] = {
	{"update", &luna_wrapper_proland_TileSamplerZ::_bind_update},
	{"base_toString", &luna_wrapper_proland_TileSamplerZ::_bind_base_toString},
	{"base_update", &luna_wrapper_proland_TileSamplerZ::_bind_base_update},
	{"fromVoid", &luna_wrapper_proland_TileSamplerZ::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TileSamplerZ::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TileSamplerZ::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TileSamplerZ >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TileSamplerZ::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TileSamplerZ >::enumValues[] = {
	{0,0}
};


