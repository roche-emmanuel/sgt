#include <plug_common.h>

class luna_wrapper_wxLogRecordInfo {
public:
	typedef Luna< wxLogRecordInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82105951) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(wxLogRecordInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		wxLogRecordInfo* rhs =(Luna< wxLogRecordInfo >::check(L,2));
		wxLogRecordInfo* self=(Luna< wxLogRecordInfo >::check(L,1));
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

		wxLogRecordInfo* self= (wxLogRecordInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< wxLogRecordInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,82105951) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< wxLogRecordInfo >::check(L,1));
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

		wxLogRecordInfo* self=(Luna< wxLogRecordInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("wxLogRecordInfo");
		
		return luna_dynamicCast(L,converters,"wxLogRecordInfo",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLine(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFunc(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLine(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const char * wxLogRecordInfo::filename()
	static int _bind_getFilename(lua_State *L) {
		if (!_lg_typecheck_getFilename(L)) {
			luaL_error(L, "luna typecheck failed in const char * wxLogRecordInfo::filename() function, expected prototype:\nconst char * wxLogRecordInfo::filename()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLogRecordInfo* self=(Luna< wxLogRecordInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * wxLogRecordInfo::filename(). Got : '%s'\n%s",typeid(Luna< wxLogRecordInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->filename;
		lua_pushstring(L,lret);

		return 1;
	}

	// int wxLogRecordInfo::line()
	static int _bind_getLine(lua_State *L) {
		if (!_lg_typecheck_getLine(L)) {
			luaL_error(L, "luna typecheck failed in int wxLogRecordInfo::line() function, expected prototype:\nint wxLogRecordInfo::line()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLogRecordInfo* self=(Luna< wxLogRecordInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int wxLogRecordInfo::line(). Got : '%s'\n%s",typeid(Luna< wxLogRecordInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->line;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * wxLogRecordInfo::func()
	static int _bind_getFunc(lua_State *L) {
		if (!_lg_typecheck_getFunc(L)) {
			luaL_error(L, "luna typecheck failed in const char * wxLogRecordInfo::func() function, expected prototype:\nconst char * wxLogRecordInfo::func()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		wxLogRecordInfo* self=(Luna< wxLogRecordInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * wxLogRecordInfo::func(). Got : '%s'\n%s",typeid(Luna< wxLogRecordInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->func;
		lua_pushstring(L,lret);

		return 1;
	}

	// void wxLogRecordInfo::line(int value)
	static int _bind_setLine(lua_State *L) {
		if (!_lg_typecheck_setLine(L)) {
			luaL_error(L, "luna typecheck failed in void wxLogRecordInfo::line(int value) function, expected prototype:\nvoid wxLogRecordInfo::line(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		wxLogRecordInfo* self=(Luna< wxLogRecordInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void wxLogRecordInfo::line(int). Got : '%s'\n%s",typeid(Luna< wxLogRecordInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->line = value;

		return 0;
	}


	// Operator binds:

};

wxLogRecordInfo* LunaTraits< wxLogRecordInfo >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< wxLogRecordInfo >::_bind_dtor(wxLogRecordInfo* obj) {
	delete obj;
}

const char LunaTraits< wxLogRecordInfo >::className[] = "wxLogRecordInfo";
const char LunaTraits< wxLogRecordInfo >::fullName[] = "wxLogRecordInfo";
const char LunaTraits< wxLogRecordInfo >::moduleName[] = "wx";
const char* LunaTraits< wxLogRecordInfo >::parents[] = {0};
const int LunaTraits< wxLogRecordInfo >::hash = 82105951;
const int LunaTraits< wxLogRecordInfo >::uniqueIDs[] = {82105951,0};

luna_RegType LunaTraits< wxLogRecordInfo >::methods[] = {
	{"getFilename", &luna_wrapper_wxLogRecordInfo::_bind_getFilename},
	{"getLine", &luna_wrapper_wxLogRecordInfo::_bind_getLine},
	{"getFunc", &luna_wrapper_wxLogRecordInfo::_bind_getFunc},
	{"setLine", &luna_wrapper_wxLogRecordInfo::_bind_setLine},
	{"dynCast", &luna_wrapper_wxLogRecordInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_wxLogRecordInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_wxLogRecordInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_wxLogRecordInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< wxLogRecordInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< wxLogRecordInfo >::enumValues[] = {
	{0,0}
};


