#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_AnimatedPerlinWaveTile.h>

class luna_wrapper_proland_AnimatedPerlinWaveTile {
public:
	typedef Luna< proland::AnimatedPerlinWaveTile > luna_t;

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

		proland::AnimatedPerlinWaveTile* self= (proland::AnimatedPerlinWaveTile*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::AnimatedPerlinWaveTile >::push(L,self,false);
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
		//proland::AnimatedPerlinWaveTile* ptr= dynamic_cast< proland::AnimatedPerlinWaveTile* >(Luna< ork::Object >::check(L,1));
		proland::AnimatedPerlinWaveTile* ptr= luna_caster< ork::Object, proland::AnimatedPerlinWaveTile >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::AnimatedPerlinWaveTile >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_updateUniform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_timeStep(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_checkUniforms(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_updateUniform(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,2) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::AnimatedPerlinWaveTile::AnimatedPerlinWaveTile(std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop)
	static proland::AnimatedPerlinWaveTile* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::AnimatedPerlinWaveTile::AnimatedPerlinWaveTile(std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop) function, expected prototype:\nproland::AnimatedPerlinWaveTile::AnimatedPerlinWaveTile(std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,1),lua_objlen(L,1));
		int tileSize=(int)lua_tointeger(L,2);
		int gridSize=(int)lua_tointeger(L,3);
		float waveLength=(float)lua_tonumber(L,4);
		int timeLoop=(int)lua_tointeger(L,5);

		return new proland::AnimatedPerlinWaveTile(name, tileSize, gridSize, waveLength, timeLoop);
	}

	// proland::AnimatedPerlinWaveTile::AnimatedPerlinWaveTile(lua_Table * data, std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop)
	static proland::AnimatedPerlinWaveTile* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::AnimatedPerlinWaveTile::AnimatedPerlinWaveTile(lua_Table * data, std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop) function, expected prototype:\nproland::AnimatedPerlinWaveTile::AnimatedPerlinWaveTile(lua_Table * data, std::string & name, int tileSize, int gridSize, float waveLength, int timeLoop)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		int tileSize=(int)lua_tointeger(L,3);
		int gridSize=(int)lua_tointeger(L,4);
		float waveLength=(float)lua_tonumber(L,5);
		int timeLoop=(int)lua_tointeger(L,6);

		return new wrapper_proland_AnimatedPerlinWaveTile(L,NULL, name, tileSize, gridSize, waveLength, timeLoop);
	}

	// Overload binder for proland::AnimatedPerlinWaveTile::AnimatedPerlinWaveTile
	static proland::AnimatedPerlinWaveTile* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AnimatedPerlinWaveTile, cannot match any of the overloads for function AnimatedPerlinWaveTile:\n  AnimatedPerlinWaveTile(std::string &, int, int, float, int)\n  AnimatedPerlinWaveTile(lua_Table *, std::string &, int, int, float, int)\n");
		return NULL;
	}


	// Function binds:
	// void proland::AnimatedPerlinWaveTile::updateUniform(ork::ptr< ork::Program > p)
	static int _bind_updateUniform(lua_State *L) {
		if (!_lg_typecheck_updateUniform(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AnimatedPerlinWaveTile::updateUniform(ork::ptr< ork::Program > p) function, expected prototype:\nvoid proland::AnimatedPerlinWaveTile::updateUniform(ork::ptr< ork::Program > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AnimatedPerlinWaveTile* self=Luna< ork::Object >::checkSubType< proland::AnimatedPerlinWaveTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AnimatedPerlinWaveTile::updateUniform(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateUniform(p);

		return 0;
	}

	// const char * proland::AnimatedPerlinWaveTile::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::AnimatedPerlinWaveTile::base_toString() function, expected prototype:\nconst char * proland::AnimatedPerlinWaveTile::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::AnimatedPerlinWaveTile* self=Luna< ork::Object >::checkSubType< proland::AnimatedPerlinWaveTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::AnimatedPerlinWaveTile::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->AnimatedPerlinWaveTile::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::AnimatedPerlinWaveTile::base_timeStep(float dt)
	static int _bind_base_timeStep(lua_State *L) {
		if (!_lg_typecheck_base_timeStep(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AnimatedPerlinWaveTile::base_timeStep(float dt) function, expected prototype:\nvoid proland::AnimatedPerlinWaveTile::base_timeStep(float dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float dt=(float)lua_tonumber(L,2);

		proland::AnimatedPerlinWaveTile* self=Luna< ork::Object >::checkSubType< proland::AnimatedPerlinWaveTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AnimatedPerlinWaveTile::base_timeStep(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimatedPerlinWaveTile::timeStep(dt);

		return 0;
	}

	// void proland::AnimatedPerlinWaveTile::base_checkUniforms(ork::ptr< ork::Program > p)
	static int _bind_base_checkUniforms(lua_State *L) {
		if (!_lg_typecheck_base_checkUniforms(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AnimatedPerlinWaveTile::base_checkUniforms(ork::ptr< ork::Program > p) function, expected prototype:\nvoid proland::AnimatedPerlinWaveTile::base_checkUniforms(ork::ptr< ork::Program > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AnimatedPerlinWaveTile* self=Luna< ork::Object >::checkSubType< proland::AnimatedPerlinWaveTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AnimatedPerlinWaveTile::base_checkUniforms(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimatedPerlinWaveTile::checkUniforms(p);

		return 0;
	}

	// void proland::AnimatedPerlinWaveTile::base_updateUniform(ork::ptr< ork::Program > p)
	static int _bind_base_updateUniform(lua_State *L) {
		if (!_lg_typecheck_base_updateUniform(L)) {
			luaL_error(L, "luna typecheck failed in void proland::AnimatedPerlinWaveTile::base_updateUniform(ork::ptr< ork::Program > p) function, expected prototype:\nvoid proland::AnimatedPerlinWaveTile::base_updateUniform(ork::ptr< ork::Program > p)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > p = Luna< ork::Object >::checkSubType< ork::Program >(L,2);

		proland::AnimatedPerlinWaveTile* self=Luna< ork::Object >::checkSubType< proland::AnimatedPerlinWaveTile >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::AnimatedPerlinWaveTile::base_updateUniform(ork::ptr< ork::Program >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AnimatedPerlinWaveTile::updateUniform(p);

		return 0;
	}


	// Operator binds:

};

proland::AnimatedPerlinWaveTile* LunaTraits< proland::AnimatedPerlinWaveTile >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_AnimatedPerlinWaveTile::_bind_ctor(L);
}

void LunaTraits< proland::AnimatedPerlinWaveTile >::_bind_dtor(proland::AnimatedPerlinWaveTile* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::AnimatedPerlinWaveTile >::className[] = "AnimatedPerlinWaveTile";
const char LunaTraits< proland::AnimatedPerlinWaveTile >::fullName[] = "proland::AnimatedPerlinWaveTile";
const char LunaTraits< proland::AnimatedPerlinWaveTile >::moduleName[] = "proland";
const char* LunaTraits< proland::AnimatedPerlinWaveTile >::parents[] = {"proland.WaveTile", 0};
const int LunaTraits< proland::AnimatedPerlinWaveTile >::hash = 37799752;
const int LunaTraits< proland::AnimatedPerlinWaveTile >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::AnimatedPerlinWaveTile >::methods[] = {
	{"updateUniform", &luna_wrapper_proland_AnimatedPerlinWaveTile::_bind_updateUniform},
	{"base_toString", &luna_wrapper_proland_AnimatedPerlinWaveTile::_bind_base_toString},
	{"base_timeStep", &luna_wrapper_proland_AnimatedPerlinWaveTile::_bind_base_timeStep},
	{"base_checkUniforms", &luna_wrapper_proland_AnimatedPerlinWaveTile::_bind_base_checkUniforms},
	{"base_updateUniform", &luna_wrapper_proland_AnimatedPerlinWaveTile::_bind_base_updateUniform},
	{"fromVoid", &luna_wrapper_proland_AnimatedPerlinWaveTile::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_AnimatedPerlinWaveTile::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_AnimatedPerlinWaveTile::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::AnimatedPerlinWaveTile >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_AnimatedPerlinWaveTile::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::AnimatedPerlinWaveTile >::enumValues[] = {
	{0,0}
};


