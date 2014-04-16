#include <plug_common.h>

class luna_wrapper_proland_FileWriter {
public:
	typedef Luna< proland::FileWriter > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85867294) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(proland::FileWriter*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		proland::FileWriter* rhs =(Luna< proland::FileWriter >::check(L,2));
		proland::FileWriter* self=(Luna< proland::FileWriter >::check(L,1));
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

		proland::FileWriter* self= (proland::FileWriter*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::FileWriter >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,85867294) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< proland::FileWriter >::check(L,1));
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

		proland::FileWriter* self=(Luna< proland::FileWriter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("proland::FileWriter");
		
		return luna_dynamicCast(L,converters,"proland::FileWriter",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_magicNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::FileWriter::FileWriter(const string & file, bool binary = true)
	static proland::FileWriter* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in proland::FileWriter::FileWriter(const string & file, bool binary = true) function, expected prototype:\nproland::FileWriter::FileWriter(const string & file, bool binary = true)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string file(lua_tostring(L,1),lua_objlen(L,1));
		bool binary=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)true;

		return new proland::FileWriter(file, binary);
	}


	// Function binds:
	// void proland::FileWriter::magicNumber(int i)
	static int _bind_magicNumber(lua_State *L) {
		if (!_lg_typecheck_magicNumber(L)) {
			luaL_error(L, "luna typecheck failed in void proland::FileWriter::magicNumber(int i) function, expected prototype:\nvoid proland::FileWriter::magicNumber(int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		proland::FileWriter* self=(Luna< proland::FileWriter >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::FileWriter::magicNumber(int). Got : '%s'\n%s",typeid(Luna< proland::FileWriter >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->magicNumber(i);

		return 0;
	}


	// Operator binds:

};

proland::FileWriter* LunaTraits< proland::FileWriter >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_FileWriter::_bind_ctor(L);
}

void LunaTraits< proland::FileWriter >::_bind_dtor(proland::FileWriter* obj) {
	delete obj;
}

const char LunaTraits< proland::FileWriter >::className[] = "FileWriter";
const char LunaTraits< proland::FileWriter >::fullName[] = "proland::FileWriter";
const char LunaTraits< proland::FileWriter >::moduleName[] = "proland";
const char* LunaTraits< proland::FileWriter >::parents[] = {0};
const int LunaTraits< proland::FileWriter >::hash = 85867294;
const int LunaTraits< proland::FileWriter >::uniqueIDs[] = {85867294,0};

luna_RegType LunaTraits< proland::FileWriter >::methods[] = {
	{"magicNumber", &luna_wrapper_proland_FileWriter::_bind_magicNumber},
	{"dynCast", &luna_wrapper_proland_FileWriter::_bind_dynCast},
	{"__eq", &luna_wrapper_proland_FileWriter::_bind___eq},
	{"fromVoid", &luna_wrapper_proland_FileWriter::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_FileWriter::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< proland::FileWriter >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< proland::FileWriter >::enumValues[] = {
	{0,0}
};


