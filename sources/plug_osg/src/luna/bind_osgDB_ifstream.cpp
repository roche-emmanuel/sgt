#include <plug_common.h>

class luna_wrapper_osgDB_ifstream {
public:
	typedef Luna< osgDB::ifstream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2552861) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ifstream*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ifstream* rhs =(Luna< osgDB::ifstream >::check(L,2));
		osgDB::ifstream* self=(Luna< osgDB::ifstream >::check(L,1));
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

		osgDB::ifstream* self= (osgDB::ifstream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ifstream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2552861) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::ifstream >::check(L,1));
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

		osgDB::ifstream* self=(Luna< osgDB::ifstream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ifstream");
		
		return luna_dynamicCast(L,converters,"osgDB::ifstream",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ifstream::ifstream()
	static osgDB::ifstream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ifstream::ifstream() function, expected prototype:\nosgDB::ifstream::ifstream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ifstream();
	}


	// Function binds:

	// Operator binds:

};

osgDB::ifstream* LunaTraits< osgDB::ifstream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ifstream::_bind_ctor(L);
}

void LunaTraits< osgDB::ifstream >::_bind_dtor(osgDB::ifstream* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ifstream >::className[] = "ifstream";
const char LunaTraits< osgDB::ifstream >::fullName[] = "osgDB::ifstream";
const char LunaTraits< osgDB::ifstream >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ifstream >::parents[] = {0};
const int LunaTraits< osgDB::ifstream >::hash = 2552861;
const int LunaTraits< osgDB::ifstream >::uniqueIDs[] = {2552861,0};

luna_RegType LunaTraits< osgDB::ifstream >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ifstream::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ifstream::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_ifstream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ifstream::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ifstream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ifstream >::enumValues[] = {
	{0,0}
};


