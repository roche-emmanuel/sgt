#include <plug_common.h>

class luna_wrapper_osgUtil_AddRangeOperator {
public:
	typedef Luna< osgUtil::AddRangeOperator > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12139482) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::AddRangeOperator*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::AddRangeOperator* rhs =(Luna< osgUtil::AddRangeOperator >::check(L,2));
		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
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

		osgUtil::AddRangeOperator* self= (osgUtil::AddRangeOperator*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::AddRangeOperator >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,12139482) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::AddRangeOperator >::check(L,1));
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

		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::AddRangeOperator");
		
		return luna_dynamicCast(L,converters,"osgUtil::AddRangeOperator",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_getBegin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCount(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVector(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setBegin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setCount(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// unsigned int osgUtil::AddRangeOperator::_begin()
	static int _bind_getBegin(lua_State *L) {
		if (!_lg_typecheck_getBegin(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::AddRangeOperator::_begin() function, expected prototype:\nunsigned int osgUtil::AddRangeOperator::_begin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::AddRangeOperator::_begin(). Got : '%s'\n%s",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_begin;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgUtil::AddRangeOperator::_count()
	static int _bind_getCount(lua_State *L) {
		if (!_lg_typecheck_getCount(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::AddRangeOperator::_count() function, expected prototype:\nunsigned int osgUtil::AddRangeOperator::_count()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::AddRangeOperator::_count(). Got : '%s'\n%s",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_count;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3d osgUtil::AddRangeOperator::_vector()
	static int _bind_getVector(lua_State *L) {
		if (!_lg_typecheck_getVector(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgUtil::AddRangeOperator::_vector() function, expected prototype:\nosg::Vec3d osgUtil::AddRangeOperator::_vector()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osgUtil::AddRangeOperator::_vector(). Got : '%s'\n%s",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->_vector;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::AddRangeOperator::_begin(unsigned int value)
	static int _bind_setBegin(lua_State *L) {
		if (!_lg_typecheck_setBegin(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::AddRangeOperator::_begin(unsigned int value) function, expected prototype:\nvoid osgUtil::AddRangeOperator::_begin(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::AddRangeOperator::_begin(unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_begin = value;

		return 0;
	}

	// void osgUtil::AddRangeOperator::_count(unsigned int value)
	static int _bind_setCount(lua_State *L) {
		if (!_lg_typecheck_setCount(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::AddRangeOperator::_count(unsigned int value) function, expected prototype:\nvoid osgUtil::AddRangeOperator::_count(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::AddRangeOperator::_count(unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_count = value;

		return 0;
	}

	// void osgUtil::AddRangeOperator::_vector(osg::Vec3d value)
	static int _bind_setVector(lua_State *L) {
		if (!_lg_typecheck_setVector(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::AddRangeOperator::_vector(osg::Vec3d value) function, expected prototype:\nvoid osgUtil::AddRangeOperator::_vector(osg::Vec3d value)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::AddRangeOperator::_vector function");
		}
		osg::Vec3d value=*value_ptr;

		osgUtil::AddRangeOperator* self=(Luna< osgUtil::AddRangeOperator >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::AddRangeOperator::_vector(osg::Vec3d). Got : '%s'\n%s",typeid(Luna< osgUtil::AddRangeOperator >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_vector = value;

		return 0;
	}


	// Operator binds:

};

osgUtil::AddRangeOperator* LunaTraits< osgUtil::AddRangeOperator >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::AddRangeOperator >::_bind_dtor(osgUtil::AddRangeOperator* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::AddRangeOperator >::className[] = "AddRangeOperator";
const char LunaTraits< osgUtil::AddRangeOperator >::fullName[] = "osgUtil::AddRangeOperator";
const char LunaTraits< osgUtil::AddRangeOperator >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::AddRangeOperator >::parents[] = {0};
const int LunaTraits< osgUtil::AddRangeOperator >::hash = 12139482;
const int LunaTraits< osgUtil::AddRangeOperator >::uniqueIDs[] = {12139482,0};

luna_RegType LunaTraits< osgUtil::AddRangeOperator >::methods[] = {
	{"getBegin", &luna_wrapper_osgUtil_AddRangeOperator::_bind_getBegin},
	{"getCount", &luna_wrapper_osgUtil_AddRangeOperator::_bind_getCount},
	{"getVector", &luna_wrapper_osgUtil_AddRangeOperator::_bind_getVector},
	{"setBegin", &luna_wrapper_osgUtil_AddRangeOperator::_bind_setBegin},
	{"setCount", &luna_wrapper_osgUtil_AddRangeOperator::_bind_setCount},
	{"setVector", &luna_wrapper_osgUtil_AddRangeOperator::_bind_setVector},
	{"dynCast", &luna_wrapper_osgUtil_AddRangeOperator::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_AddRangeOperator::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_AddRangeOperator::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_AddRangeOperator::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::AddRangeOperator >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::AddRangeOperator >::enumValues[] = {
	{0,0}
};


