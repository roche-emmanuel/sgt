#include <plug_common.h>

class luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell {
public:
	typedef Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4475636) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* rhs =(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,2));
		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
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

		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self= (osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4475636) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
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

		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell");
		
		return luna_dynamicCast(L,converters,"osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getI(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getJ(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getK(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setI(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setJ(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setK(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4475636) ) return false;
		return true;
	}


	// Constructor binds:
	// osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::Cell(int in_i, int in_j, int in_k)
	static osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::Cell(int in_i, int in_j, int in_k) function, expected prototype:\nosgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::Cell(int in_i, int in_j, int in_k)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int in_i=(int)lua_tointeger(L,1);
		int in_j=(int)lua_tointeger(L,2);
		int in_k=(int)lua_tointeger(L,3);

		return new osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell(in_i, in_j, in_k);
	}


	// Function binds:
	// int osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::i()
	static int _bind_getI(lua_State *L) {
		if (!_lg_typecheck_getI(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::i() function, expected prototype:\nint osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::i()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::i(). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->i;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::j()
	static int _bind_getJ(lua_State *L) {
		if (!_lg_typecheck_getJ(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::j() function, expected prototype:\nint osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::j()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::j(). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->j;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::k()
	static int _bind_getK(lua_State *L) {
		if (!_lg_typecheck_getK(L)) {
			luaL_error(L, "luna typecheck failed in int osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::k() function, expected prototype:\nint osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::k()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::k(). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->k;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::i(int value)
	static int _bind_setI(lua_State *L) {
		if (!_lg_typecheck_setI(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::i(int value) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::i(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::i(int). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->i = value;

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::j(int value)
	static int _bind_setJ(lua_State *L) {
		if (!_lg_typecheck_setJ(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::j(int value) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::j(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::j(int). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->j = value;

		return 0;
	}

	// void osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::k(int value)
	static int _bind_setK(lua_State *L) {
		if (!_lg_typecheck_setK(L)) {
			luaL_error(L, "luna typecheck failed in void osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::k(int value) function, expected prototype:\nvoid osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::k(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::k(int). Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->k = value;

		return 0;
	}


	// Operator binds:
	// bool osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell & rhs) const function, expected prototype:\nbool osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell & rhs) const\nClass arguments details:\narg 1 ID = 4475636\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* rhs_ptr=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::operator< function");
		}
		const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell & rhs=*rhs_ptr;

		osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* self=(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell::operator<(const osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell &) const. Got : '%s'\n%s",typeid(Luna< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_ctor(L);
}

void LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::_bind_dtor(osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell* obj) {
	delete obj;
}

const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::className[] = "PrecipitationEffect_PrecipitationDrawable_Cell";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::fullName[] = "osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell";
const char LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::moduleName[] = "osgParticle";
const char* LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::parents[] = {0};
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::hash = 4475636;
const int LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::uniqueIDs[] = {4475636,0};

luna_RegType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::methods[] = {
	{"getI", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_getI},
	{"getJ", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_getJ},
	{"getK", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_getK},
	{"setI", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_setI},
	{"setJ", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_setJ},
	{"setK", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_setK},
	{"__lt", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind___lt},
	{"dynCast", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_dynCast},
	{"__eq", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind___eq},
	{"fromVoid", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgParticle_PrecipitationEffect_PrecipitationDrawable_Cell::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgParticle::PrecipitationEffect::PrecipitationDrawable::Cell >::enumValues[] = {
	{0,0}
};


