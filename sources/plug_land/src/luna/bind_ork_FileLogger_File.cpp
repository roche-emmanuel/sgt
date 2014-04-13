#include <plug_common.h>

class luna_wrapper_ork_FileLogger_File {
public:
	typedef Luna< ork::FileLogger::File > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23966078) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(ork::FileLogger::File*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::FileLogger::File* rhs =(Luna< ork::FileLogger::File >::check(L,2));
		ork::FileLogger::File* self=(Luna< ork::FileLogger::File >::check(L,1));
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

		ork::FileLogger::File* self= (ork::FileLogger::File*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::FileLogger::File >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23966078) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::FileLogger::File >::check(L,1));
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

		ork::FileLogger::File* self=(Luna< ork::FileLogger::File >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("ork::FileLogger::File");
		
		return luna_dynamicCast(L,converters,"ork::FileLogger::File",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::FileLogger::File::File(const std::string & name)
	static ork::FileLogger::File* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in ork::FileLogger::File::File(const std::string & name) function, expected prototype:\nork::FileLogger::File::File(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,1),lua_objlen(L,1));

		return new ork::FileLogger::File(name);
	}


	// Function binds:

	// Operator binds:

};

ork::FileLogger::File* LunaTraits< ork::FileLogger::File >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_FileLogger_File::_bind_ctor(L);
}

void LunaTraits< ork::FileLogger::File >::_bind_dtor(ork::FileLogger::File* obj) {
	delete obj;
}

const char LunaTraits< ork::FileLogger::File >::className[] = "FileLogger_File";
const char LunaTraits< ork::FileLogger::File >::fullName[] = "ork::FileLogger::File";
const char LunaTraits< ork::FileLogger::File >::moduleName[] = "ork";
const char* LunaTraits< ork::FileLogger::File >::parents[] = {0};
const int LunaTraits< ork::FileLogger::File >::hash = 23966078;
const int LunaTraits< ork::FileLogger::File >::uniqueIDs[] = {23966078,0};

luna_RegType LunaTraits< ork::FileLogger::File >::methods[] = {
	{"dynCast", &luna_wrapper_ork_FileLogger_File::_bind_dynCast},
	{"__eq", &luna_wrapper_ork_FileLogger_File::_bind___eq},
	{"fromVoid", &luna_wrapper_ork_FileLogger_File::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_FileLogger_File::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< ork::FileLogger::File >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< ork::FileLogger::File >::enumValues[] = {
	{0,0}
};


