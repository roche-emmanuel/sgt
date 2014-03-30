#include <plug_common.h>

class luna_wrapper_osg_KdTree_BuildOptions {
public:
	typedef Luna< osg::KdTree::BuildOptions > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4714115) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::KdTree::BuildOptions*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::KdTree::BuildOptions* rhs =(Luna< osg::KdTree::BuildOptions >::check(L,2));
		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
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

		osg::KdTree::BuildOptions* self= (osg::KdTree::BuildOptions*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::KdTree::BuildOptions >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4714115) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::KdTree::BuildOptions >::check(L,1));
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

		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::BuildOptions");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::BuildOptions",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNumVerticesProcessed(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTargetNumTrianglesPerLeaf(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMaxNumLevels(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumVerticesProcessed(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTargetNumTrianglesPerLeaf(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMaxNumLevels(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::KdTree::BuildOptions::BuildOptions()
	static osg::KdTree::BuildOptions* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::BuildOptions::BuildOptions() function, expected prototype:\nosg::KdTree::BuildOptions::BuildOptions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::KdTree::BuildOptions();
	}


	// Function binds:
	// unsigned int osg::KdTree::BuildOptions::_numVerticesProcessed()
	static int _bind_getNumVerticesProcessed(lua_State *L) {
		if (!_lg_typecheck_getNumVerticesProcessed(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::BuildOptions::_numVerticesProcessed() function, expected prototype:\nunsigned int osg::KdTree::BuildOptions::_numVerticesProcessed()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::BuildOptions::_numVerticesProcessed(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_numVerticesProcessed;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf()
	static int _bind_getTargetNumTrianglesPerLeaf(lua_State *L) {
		if (!_lg_typecheck_getTargetNumTrianglesPerLeaf(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf() function, expected prototype:\nunsigned int osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_targetNumTrianglesPerLeaf;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::KdTree::BuildOptions::_maxNumLevels()
	static int _bind_getMaxNumLevels(lua_State *L) {
		if (!_lg_typecheck_getMaxNumLevels(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::BuildOptions::_maxNumLevels() function, expected prototype:\nunsigned int osg::KdTree::BuildOptions::_maxNumLevels()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::BuildOptions::_maxNumLevels(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_maxNumLevels;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::KdTree::BuildOptions::_numVerticesProcessed(unsigned int value)
	static int _bind_setNumVerticesProcessed(lua_State *L) {
		if (!_lg_typecheck_setNumVerticesProcessed(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::BuildOptions::_numVerticesProcessed(unsigned int value) function, expected prototype:\nvoid osg::KdTree::BuildOptions::_numVerticesProcessed(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::BuildOptions::_numVerticesProcessed(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_numVerticesProcessed = value;

		return 0;
	}

	// void osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf(unsigned int value)
	static int _bind_setTargetNumTrianglesPerLeaf(lua_State *L) {
		if (!_lg_typecheck_setTargetNumTrianglesPerLeaf(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf(unsigned int value) function, expected prototype:\nvoid osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::BuildOptions::_targetNumTrianglesPerLeaf(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_targetNumTrianglesPerLeaf = value;

		return 0;
	}

	// void osg::KdTree::BuildOptions::_maxNumLevels(unsigned int value)
	static int _bind_setMaxNumLevels(lua_State *L) {
		if (!_lg_typecheck_setMaxNumLevels(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::BuildOptions::_maxNumLevels(unsigned int value) function, expected prototype:\nvoid osg::KdTree::BuildOptions::_maxNumLevels(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::BuildOptions* self=(Luna< osg::KdTree::BuildOptions >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::BuildOptions::_maxNumLevels(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::KdTree::BuildOptions >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_maxNumLevels = value;

		return 0;
	}


	// Operator binds:

};

osg::KdTree::BuildOptions* LunaTraits< osg::KdTree::BuildOptions >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTree_BuildOptions::_bind_ctor(L);
}

void LunaTraits< osg::KdTree::BuildOptions >::_bind_dtor(osg::KdTree::BuildOptions* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::BuildOptions >::className[] = "KdTree_BuildOptions";
const char LunaTraits< osg::KdTree::BuildOptions >::fullName[] = "osg::KdTree::BuildOptions";
const char LunaTraits< osg::KdTree::BuildOptions >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::BuildOptions >::parents[] = {0};
const int LunaTraits< osg::KdTree::BuildOptions >::hash = 4714115;
const int LunaTraits< osg::KdTree::BuildOptions >::uniqueIDs[] = {4714115,0};

luna_RegType LunaTraits< osg::KdTree::BuildOptions >::methods[] = {
	{"getNumVerticesProcessed", &luna_wrapper_osg_KdTree_BuildOptions::_bind_getNumVerticesProcessed},
	{"getTargetNumTrianglesPerLeaf", &luna_wrapper_osg_KdTree_BuildOptions::_bind_getTargetNumTrianglesPerLeaf},
	{"getMaxNumLevels", &luna_wrapper_osg_KdTree_BuildOptions::_bind_getMaxNumLevels},
	{"setNumVerticesProcessed", &luna_wrapper_osg_KdTree_BuildOptions::_bind_setNumVerticesProcessed},
	{"setTargetNumTrianglesPerLeaf", &luna_wrapper_osg_KdTree_BuildOptions::_bind_setTargetNumTrianglesPerLeaf},
	{"setMaxNumLevels", &luna_wrapper_osg_KdTree_BuildOptions::_bind_setMaxNumLevels},
	{"dynCast", &luna_wrapper_osg_KdTree_BuildOptions::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_KdTree_BuildOptions::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_KdTree_BuildOptions::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_KdTree_BuildOptions::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::BuildOptions >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::BuildOptions >::enumValues[] = {
	{0,0}
};


