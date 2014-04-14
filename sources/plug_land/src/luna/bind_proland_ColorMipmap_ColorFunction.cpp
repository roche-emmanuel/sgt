#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_ColorMipmap_ColorFunction.h>

class luna_wrapper_proland_ColorMipmap_ColorFunction {
public:
	typedef Luna< proland::ColorMipmap::ColorFunction > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::ColorMipmap::ColorFunction* self=(Luna< proland::ColorMipmap::ColorFunction >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::ColorMipmap::ColorFunction,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14812871) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::ColorMipmap::ColorFunction*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::ColorMipmap::ColorFunction* rhs =(Luna< proland::ColorMipmap::ColorFunction >::check(L,2));
		proland::ColorMipmap::ColorFunction* self=(Luna< proland::ColorMipmap::ColorFunction >::check(L,1));
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

		proland::ColorMipmap::ColorFunction* self= (proland::ColorMipmap::ColorFunction*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ColorMipmap::ColorFunction >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,14812871) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::ColorMipmap::ColorFunction >::check(L,1));
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

		proland::ColorMipmap::ColorFunction* self=(Luna< proland::ColorMipmap::ColorFunction >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::ColorMipmap::ColorFunction");
		
		return luna_dynamicCast(L,converters,"proland::ColorMipmap::ColorFunction",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getColor(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::ColorMipmap::ColorFunction::ColorFunction(lua_Table * data)
	static proland::ColorMipmap::ColorFunction* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::ColorMipmap::ColorFunction::ColorFunction(lua_Table * data) function, expected prototype:\nproland::ColorMipmap::ColorFunction::ColorFunction(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_proland_ColorMipmap_ColorFunction(L,NULL);
	}


	// Function binds:
	// ork::vec4f proland::ColorMipmap::ColorFunction::getColor(int x, int y)
	static int _bind_getColor(lua_State *L) {
		if (!_lg_typecheck_getColor(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::ColorMipmap::ColorFunction::getColor(int x, int y) function, expected prototype:\nork::vec4f proland::ColorMipmap::ColorFunction::getColor(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::ColorMipmap::ColorFunction* self=(Luna< proland::ColorMipmap::ColorFunction >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::ColorMipmap::ColorFunction::getColor(int, int). Got : '%s'\n%s",typeid(Luna< proland::ColorMipmap::ColorFunction >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->getColor(x, y);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

proland::ColorMipmap::ColorFunction* LunaTraits< proland::ColorMipmap::ColorFunction >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_ColorMipmap_ColorFunction::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ork::vec4f proland::ColorMipmap::ColorFunction::getColor(int x, int y)
}

void LunaTraits< proland::ColorMipmap::ColorFunction >::_bind_dtor(proland::ColorMipmap::ColorFunction* obj) {
	delete obj;
}

const char LunaTraits< proland::ColorMipmap::ColorFunction >::className[] = "ColorMipmap_ColorFunction";
const char LunaTraits< proland::ColorMipmap::ColorFunction >::fullName[] = "proland::ColorMipmap::ColorFunction";
const char LunaTraits< proland::ColorMipmap::ColorFunction >::moduleName[] = "proland";
const char* LunaTraits< proland::ColorMipmap::ColorFunction >::parents[] = {0};
const int LunaTraits< proland::ColorMipmap::ColorFunction >::hash = 14812871;
const int LunaTraits< proland::ColorMipmap::ColorFunction >::uniqueIDs[] = {14812871,0};

luna_RegType LunaTraits< proland::ColorMipmap::ColorFunction >::methods[] = {
	{"getColor", &luna_wrapper_proland_ColorMipmap_ColorFunction::_bind_getColor},
	{"dynCast", &luna_wrapper_proland_ColorMipmap_ColorFunction::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_ColorMipmap_ColorFunction::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_ColorMipmap_ColorFunction::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ColorMipmap_ColorFunction::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_ColorMipmap_ColorFunction::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ColorMipmap::ColorFunction >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ColorMipmap::ColorFunction >::enumValues[] = {
	{0,0}
};


