#include <plug_common.h>

class luna_wrapper_osg_Program_ActiveVarInfo {
public:
	typedef Luna< osg::Program::ActiveVarInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71916305) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Program::ActiveVarInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Program::ActiveVarInfo* rhs =(Luna< osg::Program::ActiveVarInfo >::check(L,2));
		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
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

		osg::Program::ActiveVarInfo* self= (osg::Program::ActiveVarInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Program::ActiveVarInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,71916305) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Program::ActiveVarInfo >::check(L,1));
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

		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Program::ActiveVarInfo");
		
		return luna_dynamicCast(L,converters,"osg::Program::ActiveVarInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getLocation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setType(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Program::ActiveVarInfo::ActiveVarInfo()
	static osg::Program::ActiveVarInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::ActiveVarInfo::ActiveVarInfo() function, expected prototype:\nosg::Program::ActiveVarInfo::ActiveVarInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Program::ActiveVarInfo();
	}

	// osg::Program::ActiveVarInfo::ActiveVarInfo(int loc, unsigned int type, int size)
	static osg::Program::ActiveVarInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::ActiveVarInfo::ActiveVarInfo(int loc, unsigned int type, int size) function, expected prototype:\nosg::Program::ActiveVarInfo::ActiveVarInfo(int loc, unsigned int type, int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int loc=(int)lua_tointeger(L,1);
		unsigned int type=(unsigned int)lua_tointeger(L,2);
		int size=(int)lua_tointeger(L,3);

		return new osg::Program::ActiveVarInfo(loc, type, size);
	}

	// Overload binder for osg::Program::ActiveVarInfo::ActiveVarInfo
	static osg::Program::ActiveVarInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ActiveVarInfo, cannot match any of the overloads for function ActiveVarInfo:\n  ActiveVarInfo()\n  ActiveVarInfo(int, unsigned int, int)\n");
		return NULL;
	}


	// Function binds:
	// int osg::Program::ActiveVarInfo::_location()
	static int _bind_getLocation(lua_State *L) {
		if (!_lg_typecheck_getLocation(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Program::ActiveVarInfo::_location() function, expected prototype:\nint osg::Program::ActiveVarInfo::_location()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Program::ActiveVarInfo::_location(). Got : '%s'\n%s",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->_location;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::Program::ActiveVarInfo::_type()
	static int _bind_getType(lua_State *L) {
		if (!_lg_typecheck_getType(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Program::ActiveVarInfo::_type() function, expected prototype:\nunsigned int osg::Program::ActiveVarInfo::_type()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Program::ActiveVarInfo::_type(). Got : '%s'\n%s",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_type;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Program::ActiveVarInfo::_size()
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Program::ActiveVarInfo::_size() function, expected prototype:\nint osg::Program::ActiveVarInfo::_size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Program::ActiveVarInfo::_size(). Got : '%s'\n%s",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->_size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Program::ActiveVarInfo::_location(int value)
	static int _bind_setLocation(lua_State *L) {
		if (!_lg_typecheck_setLocation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::ActiveVarInfo::_location(int value) function, expected prototype:\nvoid osg::Program::ActiveVarInfo::_location(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::ActiveVarInfo::_location(int). Got : '%s'\n%s",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_location = value;

		return 0;
	}

	// void osg::Program::ActiveVarInfo::_type(unsigned int value)
	static int _bind_setType(lua_State *L) {
		if (!_lg_typecheck_setType(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::ActiveVarInfo::_type(unsigned int value) function, expected prototype:\nvoid osg::Program::ActiveVarInfo::_type(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::ActiveVarInfo::_type(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_type = value;

		return 0;
	}

	// void osg::Program::ActiveVarInfo::_size(int value)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::ActiveVarInfo::_size(int value) function, expected prototype:\nvoid osg::Program::ActiveVarInfo::_size(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::Program::ActiveVarInfo* self=(Luna< osg::Program::ActiveVarInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::ActiveVarInfo::_size(int). Got : '%s'\n%s",typeid(Luna< osg::Program::ActiveVarInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_size = value;

		return 0;
	}


	// Operator binds:

};

osg::Program::ActiveVarInfo* LunaTraits< osg::Program::ActiveVarInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Program_ActiveVarInfo::_bind_ctor(L);
}

void LunaTraits< osg::Program::ActiveVarInfo >::_bind_dtor(osg::Program::ActiveVarInfo* obj) {
	delete obj;
}

const char LunaTraits< osg::Program::ActiveVarInfo >::className[] = "Program_ActiveVarInfo";
const char LunaTraits< osg::Program::ActiveVarInfo >::fullName[] = "osg::Program::ActiveVarInfo";
const char LunaTraits< osg::Program::ActiveVarInfo >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::ActiveVarInfo >::parents[] = {0};
const int LunaTraits< osg::Program::ActiveVarInfo >::hash = 71916305;
const int LunaTraits< osg::Program::ActiveVarInfo >::uniqueIDs[] = {71916305,0};

luna_RegType LunaTraits< osg::Program::ActiveVarInfo >::methods[] = {
	{"getLocation", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_getLocation},
	{"getType", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_getType},
	{"getSize", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_getSize},
	{"setLocation", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_setLocation},
	{"setType", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_setType},
	{"setSize", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_setSize},
	{"dynCast", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Program_ActiveVarInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Program_ActiveVarInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::ActiveVarInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::ActiveVarInfo >::enumValues[] = {
	{0,0}
};


