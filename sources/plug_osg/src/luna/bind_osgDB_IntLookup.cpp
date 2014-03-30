#include <plug_common.h>

class luna_wrapper_osgDB_IntLookup {
public:
	typedef Luna< osgDB::IntLookup > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10250166) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::IntLookup*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::IntLookup* rhs =(Luna< osgDB::IntLookup >::check(L,2));
		osgDB::IntLookup* self=(Luna< osgDB::IntLookup >::check(L,1));
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

		osgDB::IntLookup* self= (osgDB::IntLookup*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::IntLookup >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,10250166) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::IntLookup >::check(L,1));
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

		osgDB::IntLookup* self=(Luna< osgDB::IntLookup >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::IntLookup");
		
		return luna_dynamicCast(L,converters,"osgDB::IntLookup",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_add(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getString(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::IntLookup::IntLookup()
	static osgDB::IntLookup* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::IntLookup::IntLookup() function, expected prototype:\nosgDB::IntLookup::IntLookup()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::IntLookup();
	}


	// Function binds:
	// unsigned int osgDB::IntLookup::size() const
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::IntLookup::size() const function, expected prototype:\nunsigned int osgDB::IntLookup::size() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::IntLookup* self=(Luna< osgDB::IntLookup >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::IntLookup::size() const. Got : '%s'\n%s",typeid(Luna< osgDB::IntLookup >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::IntLookup::add(const char * str, int value)
	static int _bind_add(lua_State *L) {
		if (!_lg_typecheck_add(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::IntLookup::add(const char * str, int value) function, expected prototype:\nvoid osgDB::IntLookup::add(const char * str, int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);
		int value=(int)lua_tointeger(L,3);

		osgDB::IntLookup* self=(Luna< osgDB::IntLookup >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::IntLookup::add(const char *, int). Got : '%s'\n%s",typeid(Luna< osgDB::IntLookup >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->add(str, value);

		return 0;
	}

	// int osgDB::IntLookup::getValue(const char * str)
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::IntLookup::getValue(const char * str) function, expected prototype:\nint osgDB::IntLookup::getValue(const char * str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * str=(const char *)lua_tostring(L,2);

		osgDB::IntLookup* self=(Luna< osgDB::IntLookup >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::IntLookup::getValue(const char *). Got : '%s'\n%s",typeid(Luna< osgDB::IntLookup >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getValue(str);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const std::string & osgDB::IntLookup::getString(int value)
	static int _bind_getString(lua_State *L) {
		if (!_lg_typecheck_getString(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::IntLookup::getString(int value) function, expected prototype:\nconst std::string & osgDB::IntLookup::getString(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgDB::IntLookup* self=(Luna< osgDB::IntLookup >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osgDB::IntLookup::getString(int). Got : '%s'\n%s",typeid(Luna< osgDB::IntLookup >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getString(value);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:

};

osgDB::IntLookup* LunaTraits< osgDB::IntLookup >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_IntLookup::_bind_ctor(L);
}

void LunaTraits< osgDB::IntLookup >::_bind_dtor(osgDB::IntLookup* obj) {
	delete obj;
}

const char LunaTraits< osgDB::IntLookup >::className[] = "IntLookup";
const char LunaTraits< osgDB::IntLookup >::fullName[] = "osgDB::IntLookup";
const char LunaTraits< osgDB::IntLookup >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::IntLookup >::parents[] = {0};
const int LunaTraits< osgDB::IntLookup >::hash = 10250166;
const int LunaTraits< osgDB::IntLookup >::uniqueIDs[] = {10250166,0};

luna_RegType LunaTraits< osgDB::IntLookup >::methods[] = {
	{"size", &luna_wrapper_osgDB_IntLookup::_bind_size},
	{"add", &luna_wrapper_osgDB_IntLookup::_bind_add},
	{"getValue", &luna_wrapper_osgDB_IntLookup::_bind_getValue},
	{"getString", &luna_wrapper_osgDB_IntLookup::_bind_getString},
	{"dynCast", &luna_wrapper_osgDB_IntLookup::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_IntLookup::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_IntLookup::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_IntLookup::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::IntLookup >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::IntLookup >::enumValues[] = {
	{0,0}
};


