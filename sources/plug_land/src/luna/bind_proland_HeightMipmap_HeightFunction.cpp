#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_HeightMipmap_HeightFunction.h>

class luna_wrapper_proland_HeightMipmap_HeightFunction {
public:
	typedef Luna< proland::HeightMipmap::HeightFunction > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::HeightMipmap::HeightFunction* self=(Luna< proland::HeightMipmap::HeightFunction >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::HeightMipmap::HeightFunction,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3347220) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::HeightMipmap::HeightFunction*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::HeightMipmap::HeightFunction* rhs =(Luna< proland::HeightMipmap::HeightFunction >::check(L,2));
		proland::HeightMipmap::HeightFunction* self=(Luna< proland::HeightMipmap::HeightFunction >::check(L,1));
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

		proland::HeightMipmap::HeightFunction* self= (proland::HeightMipmap::HeightFunction*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::HeightMipmap::HeightFunction >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3347220) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::HeightMipmap::HeightFunction >::check(L,1));
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

		proland::HeightMipmap::HeightFunction* self=(Luna< proland::HeightMipmap::HeightFunction >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::HeightMipmap::HeightFunction");
		
		return luna_dynamicCast(L,converters,"proland::HeightMipmap::HeightFunction",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::HeightMipmap::HeightFunction::HeightFunction(lua_Table * data)
	static proland::HeightMipmap::HeightFunction* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::HeightMipmap::HeightFunction::HeightFunction(lua_Table * data) function, expected prototype:\nproland::HeightMipmap::HeightFunction::HeightFunction(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_HeightMipmap_HeightFunction(L,NULL);
	}


	// Function binds:
	// float proland::HeightMipmap::HeightFunction::getHeight(int x, int y)
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::HeightMipmap::HeightFunction::getHeight(int x, int y) function, expected prototype:\nfloat proland::HeightMipmap::HeightFunction::getHeight(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::HeightMipmap::HeightFunction* self=(Luna< proland::HeightMipmap::HeightFunction >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::HeightMipmap::HeightFunction::getHeight(int, int). Got : '%s'\n%s",typeid(Luna< proland::HeightMipmap::HeightFunction >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getHeight(x, y);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

proland::HeightMipmap::HeightFunction* LunaTraits< proland::HeightMipmap::HeightFunction >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_HeightMipmap_HeightFunction::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// float proland::HeightMipmap::HeightFunction::getHeight(int x, int y)
}

void LunaTraits< proland::HeightMipmap::HeightFunction >::_bind_dtor(proland::HeightMipmap::HeightFunction* obj) {
	delete obj;
}

const char LunaTraits< proland::HeightMipmap::HeightFunction >::className[] = "HeightMipmap_HeightFunction";
const char LunaTraits< proland::HeightMipmap::HeightFunction >::fullName[] = "proland::HeightMipmap::HeightFunction";
const char LunaTraits< proland::HeightMipmap::HeightFunction >::moduleName[] = "proland";
const char* LunaTraits< proland::HeightMipmap::HeightFunction >::parents[] = {0};
const int LunaTraits< proland::HeightMipmap::HeightFunction >::hash = 3347220;
const int LunaTraits< proland::HeightMipmap::HeightFunction >::uniqueIDs[] = {3347220,0};

luna_RegType LunaTraits< proland::HeightMipmap::HeightFunction >::methods[] = {
	{"getHeight", &luna_wrapper_proland_HeightMipmap_HeightFunction::_bind_getHeight},
	{"dynCast", &luna_wrapper_proland_HeightMipmap_HeightFunction::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_HeightMipmap_HeightFunction::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_HeightMipmap_HeightFunction::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_HeightMipmap_HeightFunction::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_HeightMipmap_HeightFunction::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::HeightMipmap::HeightFunction >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::HeightMipmap::HeightFunction >::enumValues[] = {
	{0,0}
};


