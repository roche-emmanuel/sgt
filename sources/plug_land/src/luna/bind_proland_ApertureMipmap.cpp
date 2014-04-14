#include <plug_common.h>

class luna_wrapper_proland_ApertureMipmap {
public:
	typedef Luna< proland::ApertureMipmap > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6950945) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::ApertureMipmap*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::ApertureMipmap* rhs =(Luna< proland::ApertureMipmap >::check(L,2));
		proland::ApertureMipmap* self=(Luna< proland::ApertureMipmap >::check(L,1));
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

		proland::ApertureMipmap* self= (proland::ApertureMipmap*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::ApertureMipmap >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,6950945) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::ApertureMipmap >::check(L,1));
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

		proland::ApertureMipmap* self=(Luna< proland::ApertureMipmap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::ApertureMipmap");
		
		return luna_dynamicCast(L,converters,"proland::ApertureMipmap",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_build(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generate(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void proland::ApertureMipmap::build(const string & temp)
	static int _bind_build(lua_State *L) {
		if (!_lg_typecheck_build(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ApertureMipmap::build(const string & temp) function, expected prototype:\nvoid proland::ApertureMipmap::build(const string & temp)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string temp(lua_tostring(L,2),lua_objlen(L,2));

		proland::ApertureMipmap* self=(Luna< proland::ApertureMipmap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ApertureMipmap::build(const string &). Got : '%s'\n%s",typeid(Luna< proland::ApertureMipmap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->build(temp);

		return 0;
	}

	// void proland::ApertureMipmap::generate(const string & cache, const string & file)
	static int _bind_generate(lua_State *L) {
		if (!_lg_typecheck_generate(L)) {
			luaL_error(L, "luna typecheck failed in void proland::ApertureMipmap::generate(const string & cache, const string & file) function, expected prototype:\nvoid proland::ApertureMipmap::generate(const string & cache, const string & file)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string cache(lua_tostring(L,2),lua_objlen(L,2));
		std::string file(lua_tostring(L,3),lua_objlen(L,3));

		proland::ApertureMipmap* self=(Luna< proland::ApertureMipmap >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::ApertureMipmap::generate(const string &, const string &). Got : '%s'\n%s",typeid(Luna< proland::ApertureMipmap >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->generate(cache, file);

		return 0;
	}


	// Operator binds:

};

proland::ApertureMipmap* LunaTraits< proland::ApertureMipmap >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< proland::ApertureMipmap >::_bind_dtor(proland::ApertureMipmap* obj) {
	delete obj;
}

const char LunaTraits< proland::ApertureMipmap >::className[] = "ApertureMipmap";
const char LunaTraits< proland::ApertureMipmap >::fullName[] = "proland::ApertureMipmap";
const char LunaTraits< proland::ApertureMipmap >::moduleName[] = "proland";
const char* LunaTraits< proland::ApertureMipmap >::parents[] = {0};
const int LunaTraits< proland::ApertureMipmap >::hash = 6950945;
const int LunaTraits< proland::ApertureMipmap >::uniqueIDs[] = {6950945,0};

luna_RegType LunaTraits< proland::ApertureMipmap >::methods[] = {
	{"build", &luna_wrapper_proland_ApertureMipmap::_bind_build},
	{"generate", &luna_wrapper_proland_ApertureMipmap::_bind_generate},
	{"dynCast", &luna_wrapper_proland_ApertureMipmap::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_ApertureMipmap::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_ApertureMipmap::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_ApertureMipmap::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::ApertureMipmap >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::ApertureMipmap >::enumValues[] = {
	{0,0}
};


