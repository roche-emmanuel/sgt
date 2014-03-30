#include <plug_common.h>

class luna_wrapper_osg_ClampedLinearCostFunction1D {
public:
	typedef Luna< osg::ClampedLinearCostFunction1D > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49050770) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ClampedLinearCostFunction1D*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ClampedLinearCostFunction1D* rhs =(Luna< osg::ClampedLinearCostFunction1D >::check(L,2));
		osg::ClampedLinearCostFunction1D* self=(Luna< osg::ClampedLinearCostFunction1D >::check(L,1));
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

		osg::ClampedLinearCostFunction1D* self= (osg::ClampedLinearCostFunction1D*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ClampedLinearCostFunction1D >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,49050770) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ClampedLinearCostFunction1D >::check(L,1));
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

		osg::ClampedLinearCostFunction1D* self=(Luna< osg::ClampedLinearCostFunction1D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ClampedLinearCostFunction1D");
		
		return luna_dynamicCast(L,converters,"osg::ClampedLinearCostFunction1D",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>3 ) return false;

		if( luatop>0 && lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCost0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_dcost_di(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_get_min_input(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCost0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_dcost_di(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_min_input(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::ClampedLinearCostFunction1D::ClampedLinearCostFunction1D(double cost0 = 0.0, double dcost_di = 0.0, unsigned int min_input = 0)
	static osg::ClampedLinearCostFunction1D* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::ClampedLinearCostFunction1D::ClampedLinearCostFunction1D(double cost0 = 0.0, double dcost_di = 0.0, unsigned int min_input = 0) function, expected prototype:\nosg::ClampedLinearCostFunction1D::ClampedLinearCostFunction1D(double cost0 = 0.0, double dcost_di = 0.0, unsigned int min_input = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double cost0=luatop>0 ? (double)lua_tonumber(L,1) : (double)0.0;
		double dcost_di=luatop>1 ? (double)lua_tonumber(L,2) : (double)0.0;
		unsigned int min_input=luatop>2 ? (unsigned int)lua_tointeger(L,3) : (unsigned int)0;

		return new osg::ClampedLinearCostFunction1D(cost0, dcost_di, min_input);
	}


	// Function binds:
	// void osg::ClampedLinearCostFunction1D::set(double cost0, double dcost_di, unsigned int min_input)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClampedLinearCostFunction1D::set(double cost0, double dcost_di, unsigned int min_input) function, expected prototype:\nvoid osg::ClampedLinearCostFunction1D::set(double cost0, double dcost_di, unsigned int min_input)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double cost0=(double)lua_tonumber(L,2);
		double dcost_di=(double)lua_tonumber(L,3);
		unsigned int min_input=(unsigned int)lua_tointeger(L,4);

		osg::ClampedLinearCostFunction1D* self=(Luna< osg::ClampedLinearCostFunction1D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClampedLinearCostFunction1D::set(double, double, unsigned int). Got : '%s'\n%s",typeid(Luna< osg::ClampedLinearCostFunction1D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(cost0, dcost_di, min_input);

		return 0;
	}

	// double osg::ClampedLinearCostFunction1D::_cost0()
	static int _bind_getCost0(lua_State *L) {
		if (!_lg_typecheck_getCost0(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ClampedLinearCostFunction1D::_cost0() function, expected prototype:\ndouble osg::ClampedLinearCostFunction1D::_cost0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClampedLinearCostFunction1D* self=(Luna< osg::ClampedLinearCostFunction1D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ClampedLinearCostFunction1D::_cost0(). Got : '%s'\n%s",typeid(Luna< osg::ClampedLinearCostFunction1D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->_cost0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ClampedLinearCostFunction1D::_dcost_di()
	static int _bind_get_dcost_di(lua_State *L) {
		if (!_lg_typecheck_get_dcost_di(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ClampedLinearCostFunction1D::_dcost_di() function, expected prototype:\ndouble osg::ClampedLinearCostFunction1D::_dcost_di()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClampedLinearCostFunction1D* self=(Luna< osg::ClampedLinearCostFunction1D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ClampedLinearCostFunction1D::_dcost_di(). Got : '%s'\n%s",typeid(Luna< osg::ClampedLinearCostFunction1D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->_dcost_di;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::ClampedLinearCostFunction1D::_min_input()
	static int _bind_get_min_input(lua_State *L) {
		if (!_lg_typecheck_get_min_input(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::ClampedLinearCostFunction1D::_min_input() function, expected prototype:\nunsigned int osg::ClampedLinearCostFunction1D::_min_input()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ClampedLinearCostFunction1D* self=(Luna< osg::ClampedLinearCostFunction1D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::ClampedLinearCostFunction1D::_min_input(). Got : '%s'\n%s",typeid(Luna< osg::ClampedLinearCostFunction1D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_min_input;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ClampedLinearCostFunction1D::_cost0(double value)
	static int _bind_setCost0(lua_State *L) {
		if (!_lg_typecheck_setCost0(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClampedLinearCostFunction1D::_cost0(double value) function, expected prototype:\nvoid osg::ClampedLinearCostFunction1D::_cost0(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osg::ClampedLinearCostFunction1D* self=(Luna< osg::ClampedLinearCostFunction1D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClampedLinearCostFunction1D::_cost0(double). Got : '%s'\n%s",typeid(Luna< osg::ClampedLinearCostFunction1D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_cost0 = value;

		return 0;
	}

	// void osg::ClampedLinearCostFunction1D::_dcost_di(double value)
	static int _bind_set_dcost_di(lua_State *L) {
		if (!_lg_typecheck_set_dcost_di(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClampedLinearCostFunction1D::_dcost_di(double value) function, expected prototype:\nvoid osg::ClampedLinearCostFunction1D::_dcost_di(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osg::ClampedLinearCostFunction1D* self=(Luna< osg::ClampedLinearCostFunction1D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClampedLinearCostFunction1D::_dcost_di(double). Got : '%s'\n%s",typeid(Luna< osg::ClampedLinearCostFunction1D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_dcost_di = value;

		return 0;
	}

	// void osg::ClampedLinearCostFunction1D::_min_input(unsigned int value)
	static int _bind_set_min_input(lua_State *L) {
		if (!_lg_typecheck_set_min_input(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ClampedLinearCostFunction1D::_min_input(unsigned int value) function, expected prototype:\nvoid osg::ClampedLinearCostFunction1D::_min_input(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::ClampedLinearCostFunction1D* self=(Luna< osg::ClampedLinearCostFunction1D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ClampedLinearCostFunction1D::_min_input(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::ClampedLinearCostFunction1D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_min_input = value;

		return 0;
	}


	// Operator binds:
	// double osg::ClampedLinearCostFunction1D::operator()(unsigned int input) const
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ClampedLinearCostFunction1D::operator()(unsigned int input) const function, expected prototype:\ndouble osg::ClampedLinearCostFunction1D::operator()(unsigned int input) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int input=(unsigned int)lua_tointeger(L,2);

		osg::ClampedLinearCostFunction1D* self=(Luna< osg::ClampedLinearCostFunction1D >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ClampedLinearCostFunction1D::operator()(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::ClampedLinearCostFunction1D >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->operator()(input);
		lua_pushnumber(L,lret);

		return 1;
	}


};

osg::ClampedLinearCostFunction1D* LunaTraits< osg::ClampedLinearCostFunction1D >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_ctor(L);
}

void LunaTraits< osg::ClampedLinearCostFunction1D >::_bind_dtor(osg::ClampedLinearCostFunction1D* obj) {
	delete obj;
}

const char LunaTraits< osg::ClampedLinearCostFunction1D >::className[] = "ClampedLinearCostFunction1D";
const char LunaTraits< osg::ClampedLinearCostFunction1D >::fullName[] = "osg::ClampedLinearCostFunction1D";
const char LunaTraits< osg::ClampedLinearCostFunction1D >::moduleName[] = "osg";
const char* LunaTraits< osg::ClampedLinearCostFunction1D >::parents[] = {0};
const int LunaTraits< osg::ClampedLinearCostFunction1D >::hash = 49050770;
const int LunaTraits< osg::ClampedLinearCostFunction1D >::uniqueIDs[] = {49050770,0};

luna_RegType LunaTraits< osg::ClampedLinearCostFunction1D >::methods[] = {
	{"set", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_set},
	{"getCost0", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_getCost0},
	{"get_dcost_di", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_get_dcost_di},
	{"get_min_input", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_get_min_input},
	{"setCost0", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_setCost0},
	{"set_dcost_di", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_set_dcost_di},
	{"set_min_input", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_set_min_input},
	{"op_call", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_op_call},
	{"dynCast", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ClampedLinearCostFunction1D::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ClampedLinearCostFunction1D >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ClampedLinearCostFunction1D >::enumValues[] = {
	{0,0}
};


