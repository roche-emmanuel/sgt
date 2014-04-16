#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_HydroFlowProducer_RiverMargin.h>

class luna_wrapper_proland_HydroFlowProducer_RiverMargin {
public:
	typedef Luna< proland::HydroFlowProducer::RiverMargin > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::Margin* self=(Luna< proland::Margin >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::Margin,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		proland::HydroFlowProducer::RiverMargin* self= (proland::HydroFlowProducer::RiverMargin*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::HydroFlowProducer::RiverMargin >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30968597) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::Margin >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Margin(lua_State *L) {
		// all checked are already performed before reaching this point.
		//proland::HydroFlowProducer::RiverMargin* ptr= dynamic_cast< proland::HydroFlowProducer::RiverMargin* >(Luna< proland::Margin >::check(L,1));
		proland::HydroFlowProducer::RiverMargin* ptr= luna_caster< proland::Margin, proland::HydroFlowProducer::RiverMargin >::cast(Luna< proland::Margin >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::HydroFlowProducer::RiverMargin >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getMargin_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMargin_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getMargin_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getMargin_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,17549196) ) return false;
		if( (!(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::HydroFlowProducer::RiverMargin::RiverMargin(int samplesPerTile, float borderFactor)
	static proland::HydroFlowProducer::RiverMargin* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::HydroFlowProducer::RiverMargin::RiverMargin(int samplesPerTile, float borderFactor) function, expected prototype:\nproland::HydroFlowProducer::RiverMargin::RiverMargin(int samplesPerTile, float borderFactor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int samplesPerTile=(int)lua_tointeger(L,1);
		float borderFactor=(float)lua_tonumber(L,2);

		return new proland::HydroFlowProducer::RiverMargin(samplesPerTile, borderFactor);
	}

	// proland::HydroFlowProducer::RiverMargin::RiverMargin(lua_Table * data, int samplesPerTile, float borderFactor)
	static proland::HydroFlowProducer::RiverMargin* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::HydroFlowProducer::RiverMargin::RiverMargin(lua_Table * data, int samplesPerTile, float borderFactor) function, expected prototype:\nproland::HydroFlowProducer::RiverMargin::RiverMargin(lua_Table * data, int samplesPerTile, float borderFactor)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int samplesPerTile=(int)lua_tointeger(L,2);
		float borderFactor=(float)lua_tonumber(L,3);

		return new wrapper_proland_HydroFlowProducer_RiverMargin(L,NULL, samplesPerTile, borderFactor);
	}

	// Overload binder for proland::HydroFlowProducer::RiverMargin::RiverMargin
	static proland::HydroFlowProducer::RiverMargin* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function RiverMargin, cannot match any of the overloads for function RiverMargin:\n  RiverMargin(int, float)\n  RiverMargin(lua_Table *, int, float)\n");
		return NULL;
	}


	// Function binds:
	// double proland::HydroFlowProducer::RiverMargin::getMargin(double clipSize)
	static int _bind_getMargin_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMargin_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double proland::HydroFlowProducer::RiverMargin::getMargin(double clipSize) function, expected prototype:\ndouble proland::HydroFlowProducer::RiverMargin::getMargin(double clipSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);

		proland::HydroFlowProducer::RiverMargin* self=Luna< proland::Margin >::checkSubType< proland::HydroFlowProducer::RiverMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::HydroFlowProducer::RiverMargin::getMargin(double). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMargin(clipSize);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::HydroFlowProducer::RiverMargin::getMargin(double clipSize, proland::CurvePtr p)
	static int _bind_getMargin_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMargin_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double proland::HydroFlowProducer::RiverMargin::getMargin(double clipSize, proland::CurvePtr p) function, expected prototype:\ndouble proland::HydroFlowProducer::RiverMargin::getMargin(double clipSize, proland::CurvePtr p)\nClass arguments details:\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);
		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::HydroFlowProducer::RiverMargin::getMargin function");
		}
		proland::CurvePtr p=*p_ptr;

		proland::HydroFlowProducer::RiverMargin* self=Luna< proland::Margin >::checkSubType< proland::HydroFlowProducer::RiverMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::HydroFlowProducer::RiverMargin::getMargin(double, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMargin(clipSize, p);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for proland::HydroFlowProducer::RiverMargin::getMargin
	static int _bind_getMargin(lua_State *L) {
		if (_lg_typecheck_getMargin_overload_1(L)) return _bind_getMargin_overload_1(L);
		if (_lg_typecheck_getMargin_overload_2(L)) return _bind_getMargin_overload_2(L);

		luaL_error(L, "error in function getMargin, cannot match any of the overloads for function getMargin:\n  getMargin(double)\n  getMargin(double, proland::CurvePtr)\n");
		return 0;
	}

	// double proland::HydroFlowProducer::RiverMargin::base_getMargin(double clipSize)
	static int _bind_base_getMargin_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getMargin_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double proland::HydroFlowProducer::RiverMargin::base_getMargin(double clipSize) function, expected prototype:\ndouble proland::HydroFlowProducer::RiverMargin::base_getMargin(double clipSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);

		proland::HydroFlowProducer::RiverMargin* self=Luna< proland::Margin >::checkSubType< proland::HydroFlowProducer::RiverMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::HydroFlowProducer::RiverMargin::base_getMargin(double). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->RiverMargin::getMargin(clipSize);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::HydroFlowProducer::RiverMargin::base_getMargin(double clipSize, proland::CurvePtr p)
	static int _bind_base_getMargin_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getMargin_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double proland::HydroFlowProducer::RiverMargin::base_getMargin(double clipSize, proland::CurvePtr p) function, expected prototype:\ndouble proland::HydroFlowProducer::RiverMargin::base_getMargin(double clipSize, proland::CurvePtr p)\nClass arguments details:\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);
		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::HydroFlowProducer::RiverMargin::base_getMargin function");
		}
		proland::CurvePtr p=*p_ptr;

		proland::HydroFlowProducer::RiverMargin* self=Luna< proland::Margin >::checkSubType< proland::HydroFlowProducer::RiverMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::HydroFlowProducer::RiverMargin::base_getMargin(double, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->RiverMargin::getMargin(clipSize, p);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for proland::HydroFlowProducer::RiverMargin::base_getMargin
	static int _bind_base_getMargin(lua_State *L) {
		if (_lg_typecheck_base_getMargin_overload_1(L)) return _bind_base_getMargin_overload_1(L);
		if (_lg_typecheck_base_getMargin_overload_2(L)) return _bind_base_getMargin_overload_2(L);

		luaL_error(L, "error in function base_getMargin, cannot match any of the overloads for function base_getMargin:\n  base_getMargin(double)\n  base_getMargin(double, proland::CurvePtr)\n");
		return 0;
	}


	// Operator binds:

};

proland::HydroFlowProducer::RiverMargin* LunaTraits< proland::HydroFlowProducer::RiverMargin >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_HydroFlowProducer_RiverMargin::_bind_ctor(L);
}

void LunaTraits< proland::HydroFlowProducer::RiverMargin >::_bind_dtor(proland::HydroFlowProducer::RiverMargin* obj) {
	delete obj;
}

const char LunaTraits< proland::HydroFlowProducer::RiverMargin >::className[] = "HydroFlowProducer_RiverMargin";
const char LunaTraits< proland::HydroFlowProducer::RiverMargin >::fullName[] = "proland::HydroFlowProducer::RiverMargin";
const char LunaTraits< proland::HydroFlowProducer::RiverMargin >::moduleName[] = "proland";
const char* LunaTraits< proland::HydroFlowProducer::RiverMargin >::parents[] = {"proland.Margin", 0};
const int LunaTraits< proland::HydroFlowProducer::RiverMargin >::hash = 3405373;
const int LunaTraits< proland::HydroFlowProducer::RiverMargin >::uniqueIDs[] = {30968597,0};

luna_RegType LunaTraits< proland::HydroFlowProducer::RiverMargin >::methods[] = {
	{"getMargin", &luna_wrapper_proland_HydroFlowProducer_RiverMargin::_bind_getMargin},
	{"base_getMargin", &luna_wrapper_proland_HydroFlowProducer_RiverMargin::_bind_base_getMargin},
	{"fromVoid", &luna_wrapper_proland_HydroFlowProducer_RiverMargin::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_HydroFlowProducer_RiverMargin::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_HydroFlowProducer_RiverMargin::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::HydroFlowProducer::RiverMargin >::converters[] = {
	{"proland::Margin", &luna_wrapper_proland_HydroFlowProducer_RiverMargin::_cast_from_Margin},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::HydroFlowProducer::RiverMargin >::enumValues[] = {
	{0,0}
};


