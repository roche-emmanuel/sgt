#include <plug_common.h>

class luna_wrapper_osg_Program_UniformBlockInfo {
public:
	typedef Luna< osg::Program::UniformBlockInfo > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92598171) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Program::UniformBlockInfo*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Program::UniformBlockInfo* rhs =(Luna< osg::Program::UniformBlockInfo >::check(L,2));
		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
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

		osg::Program::UniformBlockInfo* self= (osg::Program::UniformBlockInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Program::UniformBlockInfo >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,92598171) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Program::UniformBlockInfo >::check(L,1));
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

		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Program::UniformBlockInfo");
		
		return luna_dynamicCast(L,converters,"osg::Program::UniformBlockInfo",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIndex(lua_State *L) {
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
	// osg::Program::UniformBlockInfo::UniformBlockInfo()
	static osg::Program::UniformBlockInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::UniformBlockInfo::UniformBlockInfo() function, expected prototype:\nosg::Program::UniformBlockInfo::UniformBlockInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Program::UniformBlockInfo();
	}

	// osg::Program::UniformBlockInfo::UniformBlockInfo(unsigned int index, int size)
	static osg::Program::UniformBlockInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Program::UniformBlockInfo::UniformBlockInfo(unsigned int index, int size) function, expected prototype:\nosg::Program::UniformBlockInfo::UniformBlockInfo(unsigned int index, int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int index=(unsigned int)lua_tointeger(L,1);
		int size=(int)lua_tointeger(L,2);

		return new osg::Program::UniformBlockInfo(index, size);
	}

	// Overload binder for osg::Program::UniformBlockInfo::UniformBlockInfo
	static osg::Program::UniformBlockInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function UniformBlockInfo, cannot match any of the overloads for function UniformBlockInfo:\n  UniformBlockInfo()\n  UniformBlockInfo(unsigned int, int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osg::Program::UniformBlockInfo::_index()
	static int _bind_getIndex(lua_State *L) {
		if (!_lg_typecheck_getIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::Program::UniformBlockInfo::_index() function, expected prototype:\nunsigned int osg::Program::UniformBlockInfo::_index()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::Program::UniformBlockInfo::_index(). Got : '%s'\n%s",typeid(Luna< osg::Program::UniformBlockInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_index;
		lua_pushnumber(L,lret);

		return 1;
	}

	// int osg::Program::UniformBlockInfo::_size()
	static int _bind_getSize(lua_State *L) {
		if (!_lg_typecheck_getSize(L)) {
			luaL_error(L, "luna typecheck failed in int osg::Program::UniformBlockInfo::_size() function, expected prototype:\nint osg::Program::UniformBlockInfo::_size()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osg::Program::UniformBlockInfo::_size(). Got : '%s'\n%s",typeid(Luna< osg::Program::UniformBlockInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->_size;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::Program::UniformBlockInfo::_index(unsigned int value)
	static int _bind_setIndex(lua_State *L) {
		if (!_lg_typecheck_setIndex(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::UniformBlockInfo::_index(unsigned int value) function, expected prototype:\nvoid osg::Program::UniformBlockInfo::_index(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::UniformBlockInfo::_index(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Program::UniformBlockInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_index = value;

		return 0;
	}

	// void osg::Program::UniformBlockInfo::_size(int value)
	static int _bind_setSize(lua_State *L) {
		if (!_lg_typecheck_setSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Program::UniformBlockInfo::_size(int value) function, expected prototype:\nvoid osg::Program::UniformBlockInfo::_size(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osg::Program::UniformBlockInfo* self=(Luna< osg::Program::UniformBlockInfo >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Program::UniformBlockInfo::_size(int). Got : '%s'\n%s",typeid(Luna< osg::Program::UniformBlockInfo >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_size = value;

		return 0;
	}


	// Operator binds:

};

osg::Program::UniformBlockInfo* LunaTraits< osg::Program::UniformBlockInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Program_UniformBlockInfo::_bind_ctor(L);
}

void LunaTraits< osg::Program::UniformBlockInfo >::_bind_dtor(osg::Program::UniformBlockInfo* obj) {
	delete obj;
}

const char LunaTraits< osg::Program::UniformBlockInfo >::className[] = "Program_UniformBlockInfo";
const char LunaTraits< osg::Program::UniformBlockInfo >::fullName[] = "osg::Program::UniformBlockInfo";
const char LunaTraits< osg::Program::UniformBlockInfo >::moduleName[] = "osg";
const char* LunaTraits< osg::Program::UniformBlockInfo >::parents[] = {0};
const int LunaTraits< osg::Program::UniformBlockInfo >::hash = 92598171;
const int LunaTraits< osg::Program::UniformBlockInfo >::uniqueIDs[] = {92598171,0};

luna_RegType LunaTraits< osg::Program::UniformBlockInfo >::methods[] = {
	{"getIndex", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_getIndex},
	{"getSize", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_getSize},
	{"setIndex", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_setIndex},
	{"setSize", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_setSize},
	{"dynCast", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Program_UniformBlockInfo::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Program_UniformBlockInfo::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Program::UniformBlockInfo >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Program::UniformBlockInfo >::enumValues[] = {
	{0,0}
};


