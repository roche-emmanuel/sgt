#include <plug_common.h>

class luna_wrapper_osgDB_ofstream {
public:
	typedef Luna< osgDB::ofstream > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78216342) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ofstream*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ofstream* rhs =(Luna< osgDB::ofstream >::check(L,2));
		osgDB::ofstream* self=(Luna< osgDB::ofstream >::check(L,1));
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

		osgDB::ofstream* self= (osgDB::ofstream*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ofstream >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78216342) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::ofstream >::check(L,1));
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

		osgDB::ofstream* self=(Luna< osgDB::ofstream >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ofstream");
		
		return luna_dynamicCast(L,converters,"osgDB::ofstream",name);
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
	// osgDB::ofstream::ofstream()
	static osgDB::ofstream* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ofstream::ofstream() function, expected prototype:\nosgDB::ofstream::ofstream()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ofstream();
	}


	// Function binds:

	// Operator binds:

};

osgDB::ofstream* LunaTraits< osgDB::ofstream >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ofstream::_bind_ctor(L);
}

void LunaTraits< osgDB::ofstream >::_bind_dtor(osgDB::ofstream* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ofstream >::className[] = "ofstream";
const char LunaTraits< osgDB::ofstream >::fullName[] = "osgDB::ofstream";
const char LunaTraits< osgDB::ofstream >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ofstream >::parents[] = {0};
const int LunaTraits< osgDB::ofstream >::hash = 78216342;
const int LunaTraits< osgDB::ofstream >::uniqueIDs[] = {78216342,0};

luna_RegType LunaTraits< osgDB::ofstream >::methods[] = {
	{"dynCast", &luna_wrapper_osgDB_ofstream::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ofstream::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_ofstream::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ofstream::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ofstream >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ofstream >::enumValues[] = {
	{0,0}
};


