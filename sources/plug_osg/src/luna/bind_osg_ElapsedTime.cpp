#include <plug_common.h>

class luna_wrapper_osg_ElapsedTime {
public:
	typedef Luna< osg::ElapsedTime > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83804404) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ElapsedTime*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ElapsedTime* rhs =(Luna< osg::ElapsedTime >::check(L,2));
		osg::ElapsedTime* self=(Luna< osg::ElapsedTime >::check(L,1));
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

		osg::ElapsedTime* self= (osg::ElapsedTime*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ElapsedTime >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,83804404) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ElapsedTime >::check(L,1));
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

		osg::ElapsedTime* self=(Luna< osg::ElapsedTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ElapsedTime");
		
		return luna_dynamicCast(L,converters,"osg::ElapsedTime",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,3625364)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,90586498)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Timer >::check(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,90586498)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osg::Timer >::check(L,1)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_elapsedTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_elapsedTime_m(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_elapsedTime_u(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_elapsedTime_n(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_finish(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::ElapsedTime::ElapsedTime(double * elapsedTime, osg::Timer * timer = 0)
	static osg::ElapsedTime* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ElapsedTime::ElapsedTime(double * elapsedTime, osg::Timer * timer = 0) function, expected prototype:\nosg::ElapsedTime::ElapsedTime(double * elapsedTime, osg::Timer * timer = 0)\nClass arguments details:\narg 2 ID = 90586498\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		double* elapsedTime=(double*)Luna< void >::check(L,1);
		osg::Timer* timer=luatop>1 ? (Luna< osg::Timer >::check(L,2)) : (osg::Timer*)0;

		return new osg::ElapsedTime(elapsedTime, timer);
	}

	// osg::ElapsedTime::ElapsedTime(osg::Timer * timer = 0)
	static osg::ElapsedTime* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ElapsedTime::ElapsedTime(osg::Timer * timer = 0) function, expected prototype:\nosg::ElapsedTime::ElapsedTime(osg::Timer * timer = 0)\nClass arguments details:\narg 1 ID = 90586498\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::Timer* timer=luatop>0 ? (Luna< osg::Timer >::check(L,1)) : (osg::Timer*)0;

		return new osg::ElapsedTime(timer);
	}

	// Overload binder for osg::ElapsedTime::ElapsedTime
	static osg::ElapsedTime* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ElapsedTime, cannot match any of the overloads for function ElapsedTime:\n  ElapsedTime(double *, osg::Timer *)\n  ElapsedTime(osg::Timer *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::ElapsedTime::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ElapsedTime::reset() function, expected prototype:\nvoid osg::ElapsedTime::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ElapsedTime* self=(Luna< osg::ElapsedTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ElapsedTime::reset(). Got : '%s'\n%s",typeid(Luna< osg::ElapsedTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// double osg::ElapsedTime::elapsedTime() const
	static int _bind_elapsedTime(lua_State *L) {
		if (!_lg_typecheck_elapsedTime(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ElapsedTime::elapsedTime() const function, expected prototype:\ndouble osg::ElapsedTime::elapsedTime() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ElapsedTime* self=(Luna< osg::ElapsedTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ElapsedTime::elapsedTime() const. Got : '%s'\n%s",typeid(Luna< osg::ElapsedTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->elapsedTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ElapsedTime::elapsedTime_m() const
	static int _bind_elapsedTime_m(lua_State *L) {
		if (!_lg_typecheck_elapsedTime_m(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ElapsedTime::elapsedTime_m() const function, expected prototype:\ndouble osg::ElapsedTime::elapsedTime_m() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ElapsedTime* self=(Luna< osg::ElapsedTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ElapsedTime::elapsedTime_m() const. Got : '%s'\n%s",typeid(Luna< osg::ElapsedTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->elapsedTime_m();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ElapsedTime::elapsedTime_u() const
	static int _bind_elapsedTime_u(lua_State *L) {
		if (!_lg_typecheck_elapsedTime_u(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ElapsedTime::elapsedTime_u() const function, expected prototype:\ndouble osg::ElapsedTime::elapsedTime_u() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ElapsedTime* self=(Luna< osg::ElapsedTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ElapsedTime::elapsedTime_u() const. Got : '%s'\n%s",typeid(Luna< osg::ElapsedTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->elapsedTime_u();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::ElapsedTime::elapsedTime_n() const
	static int _bind_elapsedTime_n(lua_State *L) {
		if (!_lg_typecheck_elapsedTime_n(L)) {
			luaL_error(L, "luna typecheck failed in double osg::ElapsedTime::elapsedTime_n() const function, expected prototype:\ndouble osg::ElapsedTime::elapsedTime_n() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ElapsedTime* self=(Luna< osg::ElapsedTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::ElapsedTime::elapsedTime_n() const. Got : '%s'\n%s",typeid(Luna< osg::ElapsedTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->elapsedTime_n();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::ElapsedTime::finish()
	static int _bind_finish(lua_State *L) {
		if (!_lg_typecheck_finish(L)) {
			luaL_error(L, "luna typecheck failed in void osg::ElapsedTime::finish() function, expected prototype:\nvoid osg::ElapsedTime::finish()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::ElapsedTime* self=(Luna< osg::ElapsedTime >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::ElapsedTime::finish(). Got : '%s'\n%s",typeid(Luna< osg::ElapsedTime >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->finish();

		return 0;
	}


	// Operator binds:

};

osg::ElapsedTime* LunaTraits< osg::ElapsedTime >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_ElapsedTime::_bind_ctor(L);
}

void LunaTraits< osg::ElapsedTime >::_bind_dtor(osg::ElapsedTime* obj) {
	delete obj;
}

const char LunaTraits< osg::ElapsedTime >::className[] = "ElapsedTime";
const char LunaTraits< osg::ElapsedTime >::fullName[] = "osg::ElapsedTime";
const char LunaTraits< osg::ElapsedTime >::moduleName[] = "osg";
const char* LunaTraits< osg::ElapsedTime >::parents[] = {0};
const int LunaTraits< osg::ElapsedTime >::hash = 83804404;
const int LunaTraits< osg::ElapsedTime >::uniqueIDs[] = {83804404,0};

luna_RegType LunaTraits< osg::ElapsedTime >::methods[] = {
	{"reset", &luna_wrapper_osg_ElapsedTime::_bind_reset},
	{"elapsedTime", &luna_wrapper_osg_ElapsedTime::_bind_elapsedTime},
	{"elapsedTime_m", &luna_wrapper_osg_ElapsedTime::_bind_elapsedTime_m},
	{"elapsedTime_u", &luna_wrapper_osg_ElapsedTime::_bind_elapsedTime_u},
	{"elapsedTime_n", &luna_wrapper_osg_ElapsedTime::_bind_elapsedTime_n},
	{"finish", &luna_wrapper_osg_ElapsedTime::_bind_finish},
	{"dynCast", &luna_wrapper_osg_ElapsedTime::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ElapsedTime::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ElapsedTime::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ElapsedTime::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ElapsedTime >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ElapsedTime >::enumValues[] = {
	{0,0}
};


