#include <plug_common.h>

class luna_wrapper_proland_FileReader {
public:
	typedef Luna< proland::FileReader > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30462081) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::FileReader*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::FileReader* rhs =(Luna< proland::FileReader >::check(L,2));
		proland::FileReader* self=(Luna< proland::FileReader >::check(L,1));
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

		proland::FileReader* self= (proland::FileReader*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::FileReader >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,30462081) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::FileReader >::check(L,1));
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

		proland::FileReader* self=(Luna< proland::FileReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::FileReader");
		
		return luna_dynamicCast(L,converters,"proland::FileReader",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_error(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::FileReader::FileReader(const string & file, bool & isIndexed)
	static proland::FileReader* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::FileReader::FileReader(const string & file, bool & isIndexed) function, expected prototype:\nproland::FileReader::FileReader(const string & file, bool & isIndexed)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string file(lua_tostring(L,1),lua_objlen(L,1));
		bool isIndexed=(bool)(lua_toboolean(L,2)==1);

		return new proland::FileReader(file, isIndexed);
	}


	// Function binds:
	// bool proland::FileReader::error()
	static int _bind_error(lua_State *L) {
		if (!_lg_typecheck_error(L)) {
			luaL_error(L, "luna typecheck failed in bool proland::FileReader::error() function, expected prototype:\nbool proland::FileReader::error()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::FileReader* self=(Luna< proland::FileReader >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool proland::FileReader::error(). Got : '%s'\n%s",typeid(Luna< proland::FileReader >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->error();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

proland::FileReader* LunaTraits< proland::FileReader >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_FileReader::_bind_ctor(L);
}

void LunaTraits< proland::FileReader >::_bind_dtor(proland::FileReader* obj) {
	delete obj;
}

const char LunaTraits< proland::FileReader >::className[] = "FileReader";
const char LunaTraits< proland::FileReader >::fullName[] = "proland::FileReader";
const char LunaTraits< proland::FileReader >::moduleName[] = "proland";
const char* LunaTraits< proland::FileReader >::parents[] = {0};
const int LunaTraits< proland::FileReader >::hash = 30462081;
const int LunaTraits< proland::FileReader >::uniqueIDs[] = {30462081,0};

luna_RegType LunaTraits< proland::FileReader >::methods[] = {
	{"error", &luna_wrapper_proland_FileReader::_bind_error},
	{"dynCast", &luna_wrapper_proland_FileReader::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_FileReader::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_FileReader::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_FileReader::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::FileReader >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::FileReader >::enumValues[] = {
	{0,0}
};


