#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ComposedMargin.h>

class luna_wrapper_proland_ComposedMargin {
public:
	typedef Luna< proland::ComposedMargin > luna_t;

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

		proland::ComposedMargin* self= (proland::ComposedMargin*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ComposedMargin >::push(L,self,false);
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
		//proland::ComposedMargin* ptr= dynamic_cast< proland::ComposedMargin* >(Luna< proland::Margin >::check(L,1));
		proland::ComposedMargin* ptr= luna_caster< proland::Margin, proland::ComposedMargin >::cast(Luna< proland::Margin >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::ComposedMargin >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
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

	inline static bool _lg_typecheck_getMargin_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,72385761) ) return false;
		if( (!(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,30968597)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeMargin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,30968597)) ) return false;
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

	inline static bool _lg_typecheck_base_getMargin_overload_3(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,72385761) ) return false;
		if( (!(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,3))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ComposedMargin::ComposedMargin()
	static proland::ComposedMargin* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::ComposedMargin::ComposedMargin() function, expected prototype:\nproland::ComposedMargin::ComposedMargin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::ComposedMargin();
	}

	// proland::ComposedMargin::ComposedMargin(lua_Table * data)
	static proland::ComposedMargin* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::ComposedMargin::ComposedMargin(lua_Table * data) function, expected prototype:\nproland::ComposedMargin::ComposedMargin(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_ComposedMargin(L,NULL);
	}

	// Overload binder for proland::ComposedMargin::ComposedMargin
	static proland::ComposedMargin* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ComposedMargin, cannot match any of the overloads for function ComposedMargin:\n  ComposedMargin()\n  ComposedMargin(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// double proland::ComposedMargin::getMargin(double clipSize)
	static int _bind_getMargin_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMargin_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double proland::ComposedMargin::getMargin(double clipSize) function, expected prototype:\ndouble proland::ComposedMargin::getMargin(double clipSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);

		proland::ComposedMargin* self=Luna< proland::Margin >::checkSubType< proland::ComposedMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::ComposedMargin::getMargin(double). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMargin(clipSize);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::ComposedMargin::getMargin(double clipSize, proland::CurvePtr p)
	static int _bind_getMargin_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMargin_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double proland::ComposedMargin::getMargin(double clipSize, proland::CurvePtr p) function, expected prototype:\ndouble proland::ComposedMargin::getMargin(double clipSize, proland::CurvePtr p)\nClass arguments details:\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);
		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::ComposedMargin::getMargin function");
		}
		proland::CurvePtr p=*p_ptr;

		proland::ComposedMargin* self=Luna< proland::Margin >::checkSubType< proland::ComposedMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::ComposedMargin::getMargin(double, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMargin(clipSize, p);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::ComposedMargin::getMargin(double clipSize, proland::AreaPtr a)
	static int _bind_getMargin_overload_3(lua_State *L) {
		if (!_lg_typecheck_getMargin_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in double proland::ComposedMargin::getMargin(double clipSize, proland::AreaPtr a) function, expected prototype:\ndouble proland::ComposedMargin::getMargin(double clipSize, proland::AreaPtr a)\nClass arguments details:\narg 2 ID = 84471053\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);
		proland::AreaPtr* a_ptr=(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::ComposedMargin::getMargin function");
		}
		proland::AreaPtr a=*a_ptr;

		proland::ComposedMargin* self=Luna< proland::Margin >::checkSubType< proland::ComposedMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::ComposedMargin::getMargin(double, proland::AreaPtr). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMargin(clipSize, a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for proland::ComposedMargin::getMargin
	static int _bind_getMargin(lua_State *L) {
		if (_lg_typecheck_getMargin_overload_1(L)) return _bind_getMargin_overload_1(L);
		if (_lg_typecheck_getMargin_overload_2(L)) return _bind_getMargin_overload_2(L);
		if (_lg_typecheck_getMargin_overload_3(L)) return _bind_getMargin_overload_3(L);

		luaL_error(L, "error in function getMargin, cannot match any of the overloads for function getMargin:\n  getMargin(double)\n  getMargin(double, proland::CurvePtr)\n  getMargin(double, proland::AreaPtr)\n");
		return 0;
	}

	// void proland::ComposedMargin::addMargin(proland::Margin * m)
	static int _bind_addMargin(lua_State *L) {
		if (!_lg_typecheck_addMargin(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ComposedMargin::addMargin(proland::Margin * m) function, expected prototype:\nvoid proland::ComposedMargin::addMargin(proland::Margin * m)\nClass arguments details:\narg 1 ID = 30968597\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Margin* m=(Luna< proland::Margin >::check(L,2));

		proland::ComposedMargin* self=Luna< proland::Margin >::checkSubType< proland::ComposedMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ComposedMargin::addMargin(proland::Margin *). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addMargin(m);

		return 0;
	}

	// void proland::ComposedMargin::removeMargin(proland::Margin * m)
	static int _bind_removeMargin(lua_State *L) {
		if (!_lg_typecheck_removeMargin(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ComposedMargin::removeMargin(proland::Margin * m) function, expected prototype:\nvoid proland::ComposedMargin::removeMargin(proland::Margin * m)\nClass arguments details:\narg 1 ID = 30968597\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Margin* m=(Luna< proland::Margin >::check(L,2));

		proland::ComposedMargin* self=Luna< proland::Margin >::checkSubType< proland::ComposedMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ComposedMargin::removeMargin(proland::Margin *). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeMargin(m);

		return 0;
	}

	// double proland::ComposedMargin::base_getMargin(double clipSize)
	static int _bind_base_getMargin_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getMargin_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double proland::ComposedMargin::base_getMargin(double clipSize) function, expected prototype:\ndouble proland::ComposedMargin::base_getMargin(double clipSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);

		proland::ComposedMargin* self=Luna< proland::Margin >::checkSubType< proland::ComposedMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::ComposedMargin::base_getMargin(double). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ComposedMargin::getMargin(clipSize);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::ComposedMargin::base_getMargin(double clipSize, proland::CurvePtr p)
	static int _bind_base_getMargin_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getMargin_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double proland::ComposedMargin::base_getMargin(double clipSize, proland::CurvePtr p) function, expected prototype:\ndouble proland::ComposedMargin::base_getMargin(double clipSize, proland::CurvePtr p)\nClass arguments details:\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);
		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::ComposedMargin::base_getMargin function");
		}
		proland::CurvePtr p=*p_ptr;

		proland::ComposedMargin* self=Luna< proland::Margin >::checkSubType< proland::ComposedMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::ComposedMargin::base_getMargin(double, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ComposedMargin::getMargin(clipSize, p);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::ComposedMargin::base_getMargin(double clipSize, proland::AreaPtr a)
	static int _bind_base_getMargin_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_getMargin_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in double proland::ComposedMargin::base_getMargin(double clipSize, proland::AreaPtr a) function, expected prototype:\ndouble proland::ComposedMargin::base_getMargin(double clipSize, proland::AreaPtr a)\nClass arguments details:\narg 2 ID = 84471053\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);
		proland::AreaPtr* a_ptr=(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::ComposedMargin::base_getMargin function");
		}
		proland::AreaPtr a=*a_ptr;

		proland::ComposedMargin* self=Luna< proland::Margin >::checkSubType< proland::ComposedMargin >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::ComposedMargin::base_getMargin(double, proland::AreaPtr). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ComposedMargin::getMargin(clipSize, a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for proland::ComposedMargin::base_getMargin
	static int _bind_base_getMargin(lua_State *L) {
		if (_lg_typecheck_base_getMargin_overload_1(L)) return _bind_base_getMargin_overload_1(L);
		if (_lg_typecheck_base_getMargin_overload_2(L)) return _bind_base_getMargin_overload_2(L);
		if (_lg_typecheck_base_getMargin_overload_3(L)) return _bind_base_getMargin_overload_3(L);

		luaL_error(L, "error in function base_getMargin, cannot match any of the overloads for function base_getMargin:\n  base_getMargin(double)\n  base_getMargin(double, proland::CurvePtr)\n  base_getMargin(double, proland::AreaPtr)\n");
		return 0;
	}


	// Operator binds:

};

proland::ComposedMargin* LunaTraits< proland::ComposedMargin >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ComposedMargin::_bind_ctor(L);
}

void LunaTraits< proland::ComposedMargin >::_bind_dtor(proland::ComposedMargin* obj) {
	delete obj;
}

const char LunaTraits< proland::ComposedMargin >::className[] = "ComposedMargin";
const char LunaTraits< proland::ComposedMargin >::fullName[] = "proland::ComposedMargin";
const char LunaTraits< proland::ComposedMargin >::moduleName[] = "proland";
const char* LunaTraits< proland::ComposedMargin >::parents[] = {"proland.Margin", 0};
const int LunaTraits< proland::ComposedMargin >::hash = 63245411;
const int LunaTraits< proland::ComposedMargin >::uniqueIDs[] = {30968597,0};

luna_RegType LunaTraits< proland::ComposedMargin >::methods[] = {
	{"getMargin", &luna_wrapper_proland_ComposedMargin::_bind_getMargin},
	{"addMargin", &luna_wrapper_proland_ComposedMargin::_bind_addMargin},
	{"removeMargin", &luna_wrapper_proland_ComposedMargin::_bind_removeMargin},
	{"base_getMargin", &luna_wrapper_proland_ComposedMargin::_bind_base_getMargin},
	{"fromVoid", &luna_wrapper_proland_ComposedMargin::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ComposedMargin::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ComposedMargin::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ComposedMargin >::converters[] = {
	{"proland::Margin", &luna_wrapper_proland_ComposedMargin::_cast_from_Margin},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ComposedMargin >::enumValues[] = {
	{0,0}
};


