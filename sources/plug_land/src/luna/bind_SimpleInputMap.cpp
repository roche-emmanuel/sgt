#include <plug_common.h>

#include <luna/wrappers/wrapper_SimpleInputMap.h>

class luna_wrapper_SimpleInputMap {
public:
	typedef Luna< SimpleInputMap > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<proland::InputMap,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		SimpleInputMap* self= (SimpleInputMap*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< SimpleInputMap >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3893247) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_InputMap(lua_State *L) {
		// all checked are already performed before reaching this point.
		//SimpleInputMap* ptr= dynamic_cast< SimpleInputMap* >(Luna< proland::InputMap >::check(L,1));
		SimpleInputMap* ptr= luna_caster< proland::InputMap, SimpleInputMap >::cast(Luna< proland::InputMap >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< SimpleInputMap >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<6 || luatop>7 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( luatop>6 && (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<7 || luatop>8 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		if( (lua_type(L,7)!=LUA_TNUMBER || lua_tointeger(L,7) != lua_tonumber(L,7)) ) return false;
		if( luatop>7 && (lua_type(L,8)!=LUA_TNUMBER || lua_tointeger(L,8) != lua_tonumber(L,8)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// SimpleInputMap::SimpleInputMap(const string & file, float scale, int width, int height, int channels, int tileSize, int cache = 20)
	static SimpleInputMap* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in SimpleInputMap::SimpleInputMap(const string & file, float scale, int width, int height, int channels, int tileSize, int cache = 20) function, expected prototype:\nSimpleInputMap::SimpleInputMap(const string & file, float scale, int width, int height, int channels, int tileSize, int cache = 20)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string file(lua_tostring(L,1),lua_objlen(L,1));
		float scale=(float)lua_tonumber(L,2);
		int width=(int)lua_tointeger(L,3);
		int height=(int)lua_tointeger(L,4);
		int channels=(int)lua_tointeger(L,5);
		int tileSize=(int)lua_tointeger(L,6);
		int cache=luatop>6 ? (int)lua_tointeger(L,7) : (int)20;

		return new SimpleInputMap(file, scale, width, height, channels, tileSize, cache);
	}

	// SimpleInputMap::SimpleInputMap(lua_Table * data, const string & file, float scale, int width, int height, int channels, int tileSize, int cache = 20)
	static SimpleInputMap* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in SimpleInputMap::SimpleInputMap(lua_Table * data, const string & file, float scale, int width, int height, int channels, int tileSize, int cache = 20) function, expected prototype:\nSimpleInputMap::SimpleInputMap(lua_Table * data, const string & file, float scale, int width, int height, int channels, int tileSize, int cache = 20)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string file(lua_tostring(L,2),lua_objlen(L,2));
		float scale=(float)lua_tonumber(L,3);
		int width=(int)lua_tointeger(L,4);
		int height=(int)lua_tointeger(L,5);
		int channels=(int)lua_tointeger(L,6);
		int tileSize=(int)lua_tointeger(L,7);
		int cache=luatop>7 ? (int)lua_tointeger(L,8) : (int)20;

		return new wrapper_SimpleInputMap(L,NULL, file, scale, width, height, channels, tileSize, cache);
	}

	// Overload binder for SimpleInputMap::SimpleInputMap
	static SimpleInputMap* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SimpleInputMap, cannot match any of the overloads for function SimpleInputMap:\n  SimpleInputMap(const string &, float, int, int, int, int, int)\n  SimpleInputMap(lua_Table *, const string &, float, int, int, int, int, int)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec4f SimpleInputMap::getValue(int x, int y)
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f SimpleInputMap::getValue(int x, int y) function, expected prototype:\nork::vec4f SimpleInputMap::getValue(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		SimpleInputMap* self=Luna< proland::InputMap >::checkSubType< SimpleInputMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f SimpleInputMap::getValue(int, int). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->getValue(x, y);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// ork::vec4f SimpleInputMap::base_getValue(int x, int y)
	static int _bind_base_getValue(lua_State *L) {
		if (!_lg_typecheck_base_getValue(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f SimpleInputMap::base_getValue(int x, int y) function, expected prototype:\nork::vec4f SimpleInputMap::base_getValue(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		SimpleInputMap* self=Luna< proland::InputMap >::checkSubType< SimpleInputMap >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f SimpleInputMap::base_getValue(int, int). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->SimpleInputMap::getValue(x, y);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

};

SimpleInputMap* LunaTraits< SimpleInputMap >::_bind_ctor(lua_State *L) {
	return luna_wrapper_SimpleInputMap::_bind_ctor(L);
}

void LunaTraits< SimpleInputMap >::_bind_dtor(SimpleInputMap* obj) {
	delete obj;
}

const char LunaTraits< SimpleInputMap >::className[] = "SimpleInputMap";
const char LunaTraits< SimpleInputMap >::fullName[] = "SimpleInputMap";
const char LunaTraits< SimpleInputMap >::moduleName[] = "land";
const char* LunaTraits< SimpleInputMap >::parents[] = {"proland.InputMap", 0};
const int LunaTraits< SimpleInputMap >::hash = 35152916;
const int LunaTraits< SimpleInputMap >::uniqueIDs[] = {3893247,0};

luna_RegType LunaTraits< SimpleInputMap >::methods[] = {
	{"getValue", &luna_wrapper_SimpleInputMap::_bind_getValue},
	{"base_getValue", &luna_wrapper_SimpleInputMap::_bind_base_getValue},
	{"fromVoid", &luna_wrapper_SimpleInputMap::_bind_fromVoid},
	{"asVoid", &luna_wrapper_SimpleInputMap::_bind_asVoid},
	{"getTable", &luna_wrapper_SimpleInputMap::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< SimpleInputMap >::converters[] = {
	{"proland::InputMap", &luna_wrapper_SimpleInputMap::_cast_from_InputMap},
	{0,0}
};

luna_RegEnumType LunaTraits< SimpleInputMap >::enumValues[] = {
	{0,0}
};


