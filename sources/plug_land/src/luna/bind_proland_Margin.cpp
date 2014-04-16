#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_Margin.h>

class luna_wrapper_proland_Margin {
public:
	typedef Luna< proland::Margin > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30968597) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::Margin*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::Margin* rhs =(Luna< proland::Margin >::check(L,2));
		proland::Margin* self=(Luna< proland::Margin >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		proland::Margin* self= (proland::Margin*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::Margin >::push(L,self,false);
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

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		proland::Margin* self=(Luna< proland::Margin >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::Margin");
		
		return luna_dynamicCast(L,converters,"proland::Margin",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
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

	inline static bool _lg_typecheck_base_getMargin(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( !Luna<void>::has_uniqueid(L,3,72385761) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::Margin::Margin(lua_Table * data)
	static proland::Margin* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::Margin::Margin(lua_Table * data) function, expected prototype:\nproland::Margin::Margin(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_Margin(L,NULL);
	}


	// Function binds:
	// double proland::Margin::getMargin(double clipSize)
	static int _bind_getMargin_overload_1(lua_State *L) {
		if (!_lg_typecheck_getMargin_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in double proland::Margin::getMargin(double clipSize) function, expected prototype:\ndouble proland::Margin::getMargin(double clipSize)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);

		proland::Margin* self=(Luna< proland::Margin >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::Margin::getMargin(double). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMargin(clipSize);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::Margin::getMargin(double clipSize, proland::CurvePtr p)
	static int _bind_getMargin_overload_2(lua_State *L) {
		if (!_lg_typecheck_getMargin_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in double proland::Margin::getMargin(double clipSize, proland::CurvePtr p) function, expected prototype:\ndouble proland::Margin::getMargin(double clipSize, proland::CurvePtr p)\nClass arguments details:\narg 2 ID = 98496290\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);
		proland::CurvePtr* p_ptr=(Luna< ork::ptr< proland::Curve > >::checkSubType< proland::CurvePtr >(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::Margin::getMargin function");
		}
		proland::CurvePtr p=*p_ptr;

		proland::Margin* self=(Luna< proland::Margin >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::Margin::getMargin(double, proland::CurvePtr). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMargin(clipSize, p);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::Margin::getMargin(double clipSize, proland::AreaPtr a)
	static int _bind_getMargin_overload_3(lua_State *L) {
		if (!_lg_typecheck_getMargin_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in double proland::Margin::getMargin(double clipSize, proland::AreaPtr a) function, expected prototype:\ndouble proland::Margin::getMargin(double clipSize, proland::AreaPtr a)\nClass arguments details:\narg 2 ID = 84471053\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);
		proland::AreaPtr* a_ptr=(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::Margin::getMargin function");
		}
		proland::AreaPtr a=*a_ptr;

		proland::Margin* self=(Luna< proland::Margin >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::Margin::getMargin(double, proland::AreaPtr). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getMargin(clipSize, a);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for proland::Margin::getMargin
	static int _bind_getMargin(lua_State *L) {
		if (_lg_typecheck_getMargin_overload_1(L)) return _bind_getMargin_overload_1(L);
		if (_lg_typecheck_getMargin_overload_2(L)) return _bind_getMargin_overload_2(L);
		if (_lg_typecheck_getMargin_overload_3(L)) return _bind_getMargin_overload_3(L);

		luaL_error(L, "error in function getMargin, cannot match any of the overloads for function getMargin:\n  getMargin(double)\n  getMargin(double, proland::CurvePtr)\n  getMargin(double, proland::AreaPtr)\n");
		return 0;
	}

	// double proland::Margin::base_getMargin(double clipSize, proland::AreaPtr a)
	static int _bind_base_getMargin(lua_State *L) {
		if (!_lg_typecheck_base_getMargin(L)) {
			luaL_error(L, "luna typecheck failed in double proland::Margin::base_getMargin(double clipSize, proland::AreaPtr a) function, expected prototype:\ndouble proland::Margin::base_getMargin(double clipSize, proland::AreaPtr a)\nClass arguments details:\narg 2 ID = 84471053\n\n%s",luna_dumpStack(L).c_str());
		}

		double clipSize=(double)lua_tonumber(L,2);
		proland::AreaPtr* a_ptr=(Luna< ork::ptr< proland::Area > >::checkSubType< proland::AreaPtr >(L,3));
		if( !a_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg a in proland::Margin::base_getMargin function");
		}
		proland::AreaPtr a=*a_ptr;

		proland::Margin* self=(Luna< proland::Margin >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::Margin::base_getMargin(double, proland::AreaPtr). Got : '%s'\n%s",typeid(Luna< proland::Margin >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->Margin::getMargin(clipSize, a);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::Margin* LunaTraits< proland::Margin >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_Margin::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// double proland::Margin::getMargin(double clipSize)
	// double proland::Margin::getMargin(double clipSize, proland::CurvePtr p)
}

void LunaTraits< proland::Margin >::_bind_dtor(proland::Margin* obj) {
	delete obj;
}

const char LunaTraits< proland::Margin >::className[] = "Margin";
const char LunaTraits< proland::Margin >::fullName[] = "proland::Margin";
const char LunaTraits< proland::Margin >::moduleName[] = "proland";
const char* LunaTraits< proland::Margin >::parents[] = {0};
const int LunaTraits< proland::Margin >::hash = 30968597;
const int LunaTraits< proland::Margin >::uniqueIDs[] = {30968597,0};

luna_RegType LunaTraits< proland::Margin >::methods[] = {
	{"getMargin", &luna_wrapper_proland_Margin::_bind_getMargin},
	{"base_getMargin", &luna_wrapper_proland_Margin::_bind_base_getMargin},
	{"dynCast", &luna_wrapper_proland_Margin::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_Margin::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_Margin::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_Margin::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_Margin::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::Margin >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::Margin >::enumValues[] = {
	{0,0}
};


