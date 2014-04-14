#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_InputMap.h>

class luna_wrapper_proland_InputMap {
public:
	typedef Luna< proland::InputMap > luna_t;

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

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3893247) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::InputMap*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::InputMap* rhs =(Luna< proland::InputMap >::check(L,2));
		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
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

		proland::InputMap* self= (proland::InputMap*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::InputMap >::push(L,self,false);
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

		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::InputMap");
		
		return luna_dynamicCast(L,converters,"proland::InputMap",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<5 || luatop>6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		if( luatop>5 && (lua_type(L,6)!=LUA_TNUMBER || lua_tointeger(L,6) != lua_tonumber(L,6)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWidth(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getChannels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTileSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setWidth(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setChannels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTileSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::InputMap::InputMap(lua_Table * data, int width, int height, int channels, int tileSize, int cache = 20)
	static proland::InputMap* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::InputMap::InputMap(lua_Table * data, int width, int height, int channels, int tileSize, int cache = 20) function, expected prototype:\nproland::InputMap::InputMap(lua_Table * data, int width, int height, int channels, int tileSize, int cache = 20)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		int width=(int)lua_tointeger(L,2);
		int height=(int)lua_tointeger(L,3);
		int channels=(int)lua_tointeger(L,4);
		int tileSize=(int)lua_tointeger(L,5);
		int cache=luatop>5 ? (int)lua_tointeger(L,6) : (int)20;

		return new wrapper_proland_InputMap(L,NULL, width, height, channels, tileSize, cache);
	}


	// Function binds:
	// ork::vec4f proland::InputMap::getValue(int x, int y)
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::InputMap::getValue(int x, int y) function, expected prototype:\nork::vec4f proland::InputMap::getValue(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::InputMap::getValue(int, int). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->getValue(x, y);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// ork::vec4f proland::InputMap::get(int x, int y)
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec4f proland::InputMap::get(int x, int y) function, expected prototype:\nork::vec4f proland::InputMap::get(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec4f proland::InputMap::get(int, int). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec4f stack_lret = self->get(x, y);
		ork::vec4f* lret = new ork::vec4f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec4f >::push(L,lret,true);

		return 1;
	}

	// int proland::InputMap::width()
	static int _bind_getWidth(lua_State *L) {
		if (!_lg_typecheck_getWidth(L)) {
			luaL_error(L, "luna typecheck failed in int proland::InputMap::width() function, expected prototype:\nint proland::InputMap::width()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::InputMap::width(). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->width;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::InputMap::height()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in int proland::InputMap::height() function, expected prototype:\nint proland::InputMap::height()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::InputMap::height(). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->height;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::InputMap::channels()
	static int _bind_getChannels(lua_State *L) {
		if (!_lg_typecheck_getChannels(L)) {
			luaL_error(L, "luna typecheck failed in int proland::InputMap::channels() function, expected prototype:\nint proland::InputMap::channels()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::InputMap::channels(). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->channels;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int proland::InputMap::tileSize()
	static int _bind_getTileSize(lua_State *L) {
		if (!_lg_typecheck_getTileSize(L)) {
			luaL_error(L, "luna typecheck failed in int proland::InputMap::tileSize() function, expected prototype:\nint proland::InputMap::tileSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int proland::InputMap::tileSize(). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->tileSize;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::InputMap::width(int value)
	static int _bind_setWidth(lua_State *L) {
		if (!_lg_typecheck_setWidth(L)) {
			luaL_error(L, "luna typecheck failed in void proland::InputMap::width(int value) function, expected prototype:\nvoid proland::InputMap::width(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::InputMap::width(int). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->width = value;

		return 0;
	}

	// void proland::InputMap::height(int value)
	static int _bind_setHeight(lua_State *L) {
		if (!_lg_typecheck_setHeight(L)) {
			luaL_error(L, "luna typecheck failed in void proland::InputMap::height(int value) function, expected prototype:\nvoid proland::InputMap::height(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::InputMap::height(int). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->height = value;

		return 0;
	}

	// void proland::InputMap::channels(int value)
	static int _bind_setChannels(lua_State *L) {
		if (!_lg_typecheck_setChannels(L)) {
			luaL_error(L, "luna typecheck failed in void proland::InputMap::channels(int value) function, expected prototype:\nvoid proland::InputMap::channels(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::InputMap::channels(int). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->channels = value;

		return 0;
	}

	// void proland::InputMap::tileSize(int value)
	static int _bind_setTileSize(lua_State *L) {
		if (!_lg_typecheck_setTileSize(L)) {
			luaL_error(L, "luna typecheck failed in void proland::InputMap::tileSize(int value) function, expected prototype:\nvoid proland::InputMap::tileSize(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		proland::InputMap* self=(Luna< proland::InputMap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::InputMap::tileSize(int). Got : '%s'\n%s",typeid(Luna< proland::InputMap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->tileSize = value;

		return 0;
	}


	// Operator binds:

};

proland::InputMap* LunaTraits< proland::InputMap >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_InputMap::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// ork::vec4f proland::InputMap::getValue(int x, int y)
}

void LunaTraits< proland::InputMap >::_bind_dtor(proland::InputMap* obj) {
	delete obj;
}

const char LunaTraits< proland::InputMap >::className[] = "InputMap";
const char LunaTraits< proland::InputMap >::fullName[] = "proland::InputMap";
const char LunaTraits< proland::InputMap >::moduleName[] = "proland";
const char* LunaTraits< proland::InputMap >::parents[] = {0};
const int LunaTraits< proland::InputMap >::hash = 3893247;
const int LunaTraits< proland::InputMap >::uniqueIDs[] = {3893247,0};

luna_RegType LunaTraits< proland::InputMap >::methods[] = {
	{"getValue", &luna_wrapper_proland_InputMap::_bind_getValue},
	{"get", &luna_wrapper_proland_InputMap::_bind_get},
	{"getWidth", &luna_wrapper_proland_InputMap::_bind_getWidth},
	{"getHeight", &luna_wrapper_proland_InputMap::_bind_getHeight},
	{"getChannels", &luna_wrapper_proland_InputMap::_bind_getChannels},
	{"getTileSize", &luna_wrapper_proland_InputMap::_bind_getTileSize},
	{"setWidth", &luna_wrapper_proland_InputMap::_bind_setWidth},
	{"setHeight", &luna_wrapper_proland_InputMap::_bind_setHeight},
	{"setChannels", &luna_wrapper_proland_InputMap::_bind_setChannels},
	{"setTileSize", &luna_wrapper_proland_InputMap::_bind_setTileSize},
	{"dynCast", &luna_wrapper_proland_InputMap::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_InputMap::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_InputMap::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_InputMap::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_InputMap::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::InputMap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::InputMap >::enumValues[] = {
	{0,0}
};


