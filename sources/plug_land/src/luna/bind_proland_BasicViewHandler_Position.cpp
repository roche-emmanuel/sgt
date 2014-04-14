#include <plug_common.h>

class luna_wrapper_proland_BasicViewHandler_Position {
public:
	typedef Luna< proland::BasicViewHandler::Position > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6582046) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::BasicViewHandler::Position*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::BasicViewHandler::Position* rhs =(Luna< proland::BasicViewHandler::Position >::check(L,2));
		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
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

		proland::BasicViewHandler::Position* self= (proland::BasicViewHandler::Position*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::BasicViewHandler::Position >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6582046) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::BasicViewHandler::Position >::check(L,1));
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

		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::BasicViewHandler::Position");
		
		return luna_dynamicCast(L,converters,"proland::BasicViewHandler::Position",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getX0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTheta(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPhi(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSx(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSy(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSz(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setX0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTheta(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPhi(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSx(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSy(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSz(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::BasicViewHandler::Position::Position()
	static proland::BasicViewHandler::Position* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::BasicViewHandler::Position::Position() function, expected prototype:\nproland::BasicViewHandler::Position::Position()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new proland::BasicViewHandler::Position();
	}


	// Function binds:
	// double proland::BasicViewHandler::Position::x0()
	static int _bind_getX0(lua_State *L) {
		if (!_lg_typecheck_getX0(L)) {
			luaL_error(L, "luna typecheck failed in double proland::BasicViewHandler::Position::x0() function, expected prototype:\ndouble proland::BasicViewHandler::Position::x0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::BasicViewHandler::Position::x0(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->x0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::BasicViewHandler::Position::y0()
	static int _bind_getY0(lua_State *L) {
		if (!_lg_typecheck_getY0(L)) {
			luaL_error(L, "luna typecheck failed in double proland::BasicViewHandler::Position::y0() function, expected prototype:\ndouble proland::BasicViewHandler::Position::y0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::BasicViewHandler::Position::y0(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->y0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::BasicViewHandler::Position::theta()
	static int _bind_getTheta(lua_State *L) {
		if (!_lg_typecheck_getTheta(L)) {
			luaL_error(L, "luna typecheck failed in double proland::BasicViewHandler::Position::theta() function, expected prototype:\ndouble proland::BasicViewHandler::Position::theta()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::BasicViewHandler::Position::theta(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->theta;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::BasicViewHandler::Position::phi()
	static int _bind_getPhi(lua_State *L) {
		if (!_lg_typecheck_getPhi(L)) {
			luaL_error(L, "luna typecheck failed in double proland::BasicViewHandler::Position::phi() function, expected prototype:\ndouble proland::BasicViewHandler::Position::phi()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::BasicViewHandler::Position::phi(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->phi;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::BasicViewHandler::Position::d()
	static int _bind_getD(lua_State *L) {
		if (!_lg_typecheck_getD(L)) {
			luaL_error(L, "luna typecheck failed in double proland::BasicViewHandler::Position::d() function, expected prototype:\ndouble proland::BasicViewHandler::Position::d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::BasicViewHandler::Position::d(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->d;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::BasicViewHandler::Position::sx()
	static int _bind_getSx(lua_State *L) {
		if (!_lg_typecheck_getSx(L)) {
			luaL_error(L, "luna typecheck failed in double proland::BasicViewHandler::Position::sx() function, expected prototype:\ndouble proland::BasicViewHandler::Position::sx()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::BasicViewHandler::Position::sx(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->sx;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::BasicViewHandler::Position::sy()
	static int _bind_getSy(lua_State *L) {
		if (!_lg_typecheck_getSy(L)) {
			luaL_error(L, "luna typecheck failed in double proland::BasicViewHandler::Position::sy() function, expected prototype:\ndouble proland::BasicViewHandler::Position::sy()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::BasicViewHandler::Position::sy(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->sy;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::BasicViewHandler::Position::sz()
	static int _bind_getSz(lua_State *L) {
		if (!_lg_typecheck_getSz(L)) {
			luaL_error(L, "luna typecheck failed in double proland::BasicViewHandler::Position::sz() function, expected prototype:\ndouble proland::BasicViewHandler::Position::sz()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::BasicViewHandler::Position::sz(). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->sz;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::BasicViewHandler::Position::x0(double value)
	static int _bind_setX0(lua_State *L) {
		if (!_lg_typecheck_setX0(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::Position::x0(double value) function, expected prototype:\nvoid proland::BasicViewHandler::Position::x0(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::Position::x0(double). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x0 = value;

		return 0;
	}

	// void proland::BasicViewHandler::Position::y0(double value)
	static int _bind_setY0(lua_State *L) {
		if (!_lg_typecheck_setY0(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::Position::y0(double value) function, expected prototype:\nvoid proland::BasicViewHandler::Position::y0(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::Position::y0(double). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y0 = value;

		return 0;
	}

	// void proland::BasicViewHandler::Position::theta(double value)
	static int _bind_setTheta(lua_State *L) {
		if (!_lg_typecheck_setTheta(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::Position::theta(double value) function, expected prototype:\nvoid proland::BasicViewHandler::Position::theta(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::Position::theta(double). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->theta = value;

		return 0;
	}

	// void proland::BasicViewHandler::Position::phi(double value)
	static int _bind_setPhi(lua_State *L) {
		if (!_lg_typecheck_setPhi(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::Position::phi(double value) function, expected prototype:\nvoid proland::BasicViewHandler::Position::phi(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::Position::phi(double). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->phi = value;

		return 0;
	}

	// void proland::BasicViewHandler::Position::d(double value)
	static int _bind_setD(lua_State *L) {
		if (!_lg_typecheck_setD(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::Position::d(double value) function, expected prototype:\nvoid proland::BasicViewHandler::Position::d(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::Position::d(double). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->d = value;

		return 0;
	}

	// void proland::BasicViewHandler::Position::sx(double value)
	static int _bind_setSx(lua_State *L) {
		if (!_lg_typecheck_setSx(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::Position::sx(double value) function, expected prototype:\nvoid proland::BasicViewHandler::Position::sx(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::Position::sx(double). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sx = value;

		return 0;
	}

	// void proland::BasicViewHandler::Position::sy(double value)
	static int _bind_setSy(lua_State *L) {
		if (!_lg_typecheck_setSy(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::Position::sy(double value) function, expected prototype:\nvoid proland::BasicViewHandler::Position::sy(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::Position::sy(double). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sy = value;

		return 0;
	}

	// void proland::BasicViewHandler::Position::sz(double value)
	static int _bind_setSz(lua_State *L) {
		if (!_lg_typecheck_setSz(L)) {
			luaL_error(L, "luna typecheck failed in void proland::BasicViewHandler::Position::sz(double value) function, expected prototype:\nvoid proland::BasicViewHandler::Position::sz(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::BasicViewHandler::Position* self=(Luna< proland::BasicViewHandler::Position >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::BasicViewHandler::Position::sz(double). Got : '%s'\n%s",typeid(Luna< proland::BasicViewHandler::Position >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->sz = value;

		return 0;
	}


	// Operator binds:

};

proland::BasicViewHandler::Position* LunaTraits< proland::BasicViewHandler::Position >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_BasicViewHandler_Position::_bind_ctor(L);
}

void LunaTraits< proland::BasicViewHandler::Position >::_bind_dtor(proland::BasicViewHandler::Position* obj) {
	delete obj;
}

const char LunaTraits< proland::BasicViewHandler::Position >::className[] = "BasicViewHandler_Position";
const char LunaTraits< proland::BasicViewHandler::Position >::fullName[] = "proland::BasicViewHandler::Position";
const char LunaTraits< proland::BasicViewHandler::Position >::moduleName[] = "proland";
const char* LunaTraits< proland::BasicViewHandler::Position >::parents[] = {0};
const int LunaTraits< proland::BasicViewHandler::Position >::hash = 6582046;
const int LunaTraits< proland::BasicViewHandler::Position >::uniqueIDs[] = {6582046,0};

luna_RegType LunaTraits< proland::BasicViewHandler::Position >::methods[] = {
	{"getX0", &luna_wrapper_proland_BasicViewHandler_Position::_bind_getX0},
	{"getY0", &luna_wrapper_proland_BasicViewHandler_Position::_bind_getY0},
	{"getTheta", &luna_wrapper_proland_BasicViewHandler_Position::_bind_getTheta},
	{"getPhi", &luna_wrapper_proland_BasicViewHandler_Position::_bind_getPhi},
	{"getD", &luna_wrapper_proland_BasicViewHandler_Position::_bind_getD},
	{"getSx", &luna_wrapper_proland_BasicViewHandler_Position::_bind_getSx},
	{"getSy", &luna_wrapper_proland_BasicViewHandler_Position::_bind_getSy},
	{"getSz", &luna_wrapper_proland_BasicViewHandler_Position::_bind_getSz},
	{"setX0", &luna_wrapper_proland_BasicViewHandler_Position::_bind_setX0},
	{"setY0", &luna_wrapper_proland_BasicViewHandler_Position::_bind_setY0},
	{"setTheta", &luna_wrapper_proland_BasicViewHandler_Position::_bind_setTheta},
	{"setPhi", &luna_wrapper_proland_BasicViewHandler_Position::_bind_setPhi},
	{"setD", &luna_wrapper_proland_BasicViewHandler_Position::_bind_setD},
	{"setSx", &luna_wrapper_proland_BasicViewHandler_Position::_bind_setSx},
	{"setSy", &luna_wrapper_proland_BasicViewHandler_Position::_bind_setSy},
	{"setSz", &luna_wrapper_proland_BasicViewHandler_Position::_bind_setSz},
	{"dynCast", &luna_wrapper_proland_BasicViewHandler_Position::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_BasicViewHandler_Position::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_BasicViewHandler_Position::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_BasicViewHandler_Position::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::BasicViewHandler::Position >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::BasicViewHandler::Position >::enumValues[] = {
	{0,0}
};


