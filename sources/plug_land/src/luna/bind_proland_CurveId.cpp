#include <plug_common.h>

class luna_wrapper_proland_CurveId {
public:
	typedef Luna< proland::CurveId > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58015782) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::CurveId*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::CurveId* rhs =(Luna< proland::CurveId >::check(L,2));
		proland::CurveId* self=(Luna< proland::CurveId >::check(L,1));
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

		proland::CurveId* self= (proland::CurveId*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::CurveId >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58015782) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::CurveId >::check(L,1));
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

		proland::CurveId* self=(Luna< proland::CurveId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::CurveId");
		
		return luna_dynamicCast(L,converters,"proland::CurveId",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getId(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRef(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setId(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRef(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int proland::CurveId::id()
	static int _bind_getId(lua_State *L) {
		if (!_lg_typecheck_getId(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int proland::CurveId::id() function, expected prototype:\nunsigned int proland::CurveId::id()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurveId* self=(Luna< proland::CurveId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int proland::CurveId::id(). Got : '%s'\n%s",typeid(Luna< proland::CurveId >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->id;
		lua_pushnumber(L,lret);

		return 1;
	}

	// proland::Curve * proland::CurveId::ref()
	static int _bind_getRef(lua_State *L) {
		if (!_lg_typecheck_getRef(L)) {
			luaL_error(L, "luna typecheck failed in proland::Curve * proland::CurveId::ref() function, expected prototype:\nproland::Curve * proland::CurveId::ref()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CurveId* self=(Luna< proland::CurveId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call proland::Curve * proland::CurveId::ref(). Got : '%s'\n%s",typeid(Luna< proland::CurveId >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		proland::Curve * lret = self->ref;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< proland::Curve >::push(L,lret,false);

		return 1;
	}

	// void proland::CurveId::id(unsigned int value)
	static int _bind_setId(lua_State *L) {
		if (!_lg_typecheck_setId(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurveId::id(unsigned int value) function, expected prototype:\nvoid proland::CurveId::id(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		proland::CurveId* self=(Luna< proland::CurveId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurveId::id(unsigned int). Got : '%s'\n%s",typeid(Luna< proland::CurveId >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->id = value;

		return 0;
	}

	// void proland::CurveId::ref(proland::Curve * value)
	static int _bind_setRef(lua_State *L) {
		if (!_lg_typecheck_setRef(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CurveId::ref(proland::Curve * value) function, expected prototype:\nvoid proland::CurveId::ref(proland::Curve * value)\nClass arguments details:\narg 1 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		proland::Curve* value=(Luna< ork::Object >::checkSubType< proland::Curve >(L,2));

		proland::CurveId* self=(Luna< proland::CurveId >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CurveId::ref(proland::Curve *). Got : '%s'\n%s",typeid(Luna< proland::CurveId >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ref = value;

		return 0;
	}


	// Operator binds:

};

proland::CurveId* LunaTraits< proland::CurveId >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::CurveId >::_bind_dtor(proland::CurveId* obj) {
	delete obj;
}

const char LunaTraits< proland::CurveId >::className[] = "CurveId";
const char LunaTraits< proland::CurveId >::fullName[] = "proland::CurveId";
const char LunaTraits< proland::CurveId >::moduleName[] = "proland";
const char* LunaTraits< proland::CurveId >::parents[] = {0};
const int LunaTraits< proland::CurveId >::hash = 58015782;
const int LunaTraits< proland::CurveId >::uniqueIDs[] = {58015782,0};

luna_RegType LunaTraits< proland::CurveId >::methods[] = {
	{"getId", &luna_wrapper_proland_CurveId::_bind_getId},
	{"getRef", &luna_wrapper_proland_CurveId::_bind_getRef},
	{"setId", &luna_wrapper_proland_CurveId::_bind_setId},
	{"setRef", &luna_wrapper_proland_CurveId::_bind_setRef},
	{"dynCast", &luna_wrapper_proland_CurveId::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_CurveId::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_CurveId::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_CurveId::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::CurveId >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::CurveId >::enumValues[] = {
	{0,0}
};


