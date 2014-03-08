#include <plug_common.h>

class luna_wrapper_osg_VertexAttribAlias {
public:
	typedef Luna< osg::VertexAttribAlias > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48453816) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::VertexAttribAlias*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::VertexAttribAlias* rhs =(Luna< osg::VertexAttribAlias >::check(L,2));
		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
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

		osg::VertexAttribAlias* self= (osg::VertexAttribAlias*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::VertexAttribAlias >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48453816) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::VertexAttribAlias >::check(L,1));
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

		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::VertexAttribAlias");
		
		return luna_dynamicCast(L,converters,"osg::VertexAttribAlias",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48453816) ) return false;
		if( (!(Luna< osg::VertexAttribAlias >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getLocation(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGlName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOsgName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeclaration(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLocation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setGlName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOsgName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDeclaration(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::VertexAttribAlias::VertexAttribAlias()
	static osg::VertexAttribAlias* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::VertexAttribAlias::VertexAttribAlias() function, expected prototype:\nosg::VertexAttribAlias::VertexAttribAlias()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::VertexAttribAlias();
	}

	// osg::VertexAttribAlias::VertexAttribAlias(const osg::VertexAttribAlias & rhs)
	static osg::VertexAttribAlias* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::VertexAttribAlias::VertexAttribAlias(const osg::VertexAttribAlias & rhs) function, expected prototype:\nosg::VertexAttribAlias::VertexAttribAlias(const osg::VertexAttribAlias & rhs)\nClass arguments details:\narg 1 ID = 48453816\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::VertexAttribAlias* rhs_ptr=(Luna< osg::VertexAttribAlias >::check(L,1));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::VertexAttribAlias::VertexAttribAlias function");
		}
		const osg::VertexAttribAlias & rhs=*rhs_ptr;

		return new osg::VertexAttribAlias(rhs);
	}

	// osg::VertexAttribAlias::VertexAttribAlias(unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration)
	static osg::VertexAttribAlias* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osg::VertexAttribAlias::VertexAttribAlias(unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration) function, expected prototype:\nosg::VertexAttribAlias::VertexAttribAlias(unsigned int location, const std::string glName, const std::string osgName, const std::string & declaration)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int location=(unsigned int)lua_tointeger(L,1);
		std::string glName(lua_tostring(L,2),lua_objlen(L,2));
		std::string osgName(lua_tostring(L,3),lua_objlen(L,3));
		std::string declaration(lua_tostring(L,4),lua_objlen(L,4));

		return new osg::VertexAttribAlias(location, glName, osgName, declaration);
	}

	// Overload binder for osg::VertexAttribAlias::VertexAttribAlias
	static osg::VertexAttribAlias* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function VertexAttribAlias, cannot match any of the overloads for function VertexAttribAlias:\n  VertexAttribAlias()\n  VertexAttribAlias(const osg::VertexAttribAlias &)\n  VertexAttribAlias(unsigned int, const std::string, const std::string, const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osg::VertexAttribAlias::_location()
	static int _bind_getLocation(lua_State *L) {
		if (!_lg_typecheck_getLocation(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::VertexAttribAlias::_location() function, expected prototype:\nunsigned int osg::VertexAttribAlias::_location()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::VertexAttribAlias::_location(). Got : '%s'\n%s",typeid(Luna< osg::VertexAttribAlias >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_location;
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string osg::VertexAttribAlias::_glName()
	static int _bind_getGlName(lua_State *L) {
		if (!_lg_typecheck_getGlName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osg::VertexAttribAlias::_glName() function, expected prototype:\nstd::string osg::VertexAttribAlias::_glName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osg::VertexAttribAlias::_glName(). Got : '%s'\n%s",typeid(Luna< osg::VertexAttribAlias >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->_glName;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osg::VertexAttribAlias::_osgName()
	static int _bind_getOsgName(lua_State *L) {
		if (!_lg_typecheck_getOsgName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osg::VertexAttribAlias::_osgName() function, expected prototype:\nstd::string osg::VertexAttribAlias::_osgName()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osg::VertexAttribAlias::_osgName(). Got : '%s'\n%s",typeid(Luna< osg::VertexAttribAlias >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->_osgName;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osg::VertexAttribAlias::_declaration()
	static int _bind_getDeclaration(lua_State *L) {
		if (!_lg_typecheck_getDeclaration(L)) {
			luaL_error(L, "luna typecheck failed in std::string osg::VertexAttribAlias::_declaration() function, expected prototype:\nstd::string osg::VertexAttribAlias::_declaration()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osg::VertexAttribAlias::_declaration(). Got : '%s'\n%s",typeid(Luna< osg::VertexAttribAlias >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->_declaration;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osg::VertexAttribAlias::_location(unsigned int value)
	static int _bind_setLocation(lua_State *L) {
		if (!_lg_typecheck_setLocation(L)) {
			luaL_error(L, "luna typecheck failed in void osg::VertexAttribAlias::_location(unsigned int value) function, expected prototype:\nvoid osg::VertexAttribAlias::_location(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::VertexAttribAlias::_location(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::VertexAttribAlias >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_location = value;

		return 0;
	}

	// void osg::VertexAttribAlias::_glName(std::string value)
	static int _bind_setGlName(lua_State *L) {
		if (!_lg_typecheck_setGlName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::VertexAttribAlias::_glName(std::string value) function, expected prototype:\nvoid osg::VertexAttribAlias::_glName(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::VertexAttribAlias::_glName(std::string). Got : '%s'\n%s",typeid(Luna< osg::VertexAttribAlias >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_glName = value;

		return 0;
	}

	// void osg::VertexAttribAlias::_osgName(std::string value)
	static int _bind_setOsgName(lua_State *L) {
		if (!_lg_typecheck_setOsgName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::VertexAttribAlias::_osgName(std::string value) function, expected prototype:\nvoid osg::VertexAttribAlias::_osgName(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::VertexAttribAlias::_osgName(std::string). Got : '%s'\n%s",typeid(Luna< osg::VertexAttribAlias >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_osgName = value;

		return 0;
	}

	// void osg::VertexAttribAlias::_declaration(std::string value)
	static int _bind_setDeclaration(lua_State *L) {
		if (!_lg_typecheck_setDeclaration(L)) {
			luaL_error(L, "luna typecheck failed in void osg::VertexAttribAlias::_declaration(std::string value) function, expected prototype:\nvoid osg::VertexAttribAlias::_declaration(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osg::VertexAttribAlias* self=(Luna< osg::VertexAttribAlias >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::VertexAttribAlias::_declaration(std::string). Got : '%s'\n%s",typeid(Luna< osg::VertexAttribAlias >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_declaration = value;

		return 0;
	}


	// Operator binds:

};

osg::VertexAttribAlias* LunaTraits< osg::VertexAttribAlias >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_VertexAttribAlias::_bind_ctor(L);
}

void LunaTraits< osg::VertexAttribAlias >::_bind_dtor(osg::VertexAttribAlias* obj) {
	delete obj;
}

const char LunaTraits< osg::VertexAttribAlias >::className[] = "VertexAttribAlias";
const char LunaTraits< osg::VertexAttribAlias >::fullName[] = "osg::VertexAttribAlias";
const char LunaTraits< osg::VertexAttribAlias >::moduleName[] = "osg";
const char* LunaTraits< osg::VertexAttribAlias >::parents[] = {0};
const int LunaTraits< osg::VertexAttribAlias >::hash = 48453816;
const int LunaTraits< osg::VertexAttribAlias >::uniqueIDs[] = {48453816,0};

luna_RegType LunaTraits< osg::VertexAttribAlias >::methods[] = {
	{"getLocation", &luna_wrapper_osg_VertexAttribAlias::_bind_getLocation},
	{"getGlName", &luna_wrapper_osg_VertexAttribAlias::_bind_getGlName},
	{"getOsgName", &luna_wrapper_osg_VertexAttribAlias::_bind_getOsgName},
	{"getDeclaration", &luna_wrapper_osg_VertexAttribAlias::_bind_getDeclaration},
	{"setLocation", &luna_wrapper_osg_VertexAttribAlias::_bind_setLocation},
	{"setGlName", &luna_wrapper_osg_VertexAttribAlias::_bind_setGlName},
	{"setOsgName", &luna_wrapper_osg_VertexAttribAlias::_bind_setOsgName},
	{"setDeclaration", &luna_wrapper_osg_VertexAttribAlias::_bind_setDeclaration},
	{"dynCast", &luna_wrapper_osg_VertexAttribAlias::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_VertexAttribAlias::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_VertexAttribAlias::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_VertexAttribAlias::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::VertexAttribAlias >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::VertexAttribAlias >::enumValues[] = {
	{0,0}
};


