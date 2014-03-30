#include <plug_common.h>

class luna_wrapper_osg_Matrix3 {
public:
	typedef Luna< osg::Matrix3 > luna_t;

	inline static bool _lg_typecheck_fromVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,3625364) ) return false;
		return true;
	}
	
	static int _bind_fromVoid(lua_State *L) {
		if (!_lg_typecheck_fromVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nfromVoid(void*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix3* self= (osg::Matrix3*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Matrix3 >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,18903789) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Matrix3 >::check(L,1));
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

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Matrix3");
		
		return luna_dynamicCast(L,converters,"osg::Matrix3",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=9 ) return false;

		if( lua_type(L,1)!=LUA_TNUMBER ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903789) ) return false;
		if( (!(Luna< osg::Matrix3 >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=10 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( lua_type(L,10)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeIdentity(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,18903789)) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,18903789)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 2 valid operators)
	inline static bool _lg_typecheck_op_index(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::Matrix3::Matrix3(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22)
	static osg::Matrix3* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrix3::Matrix3(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22) function, expected prototype:\nosg::Matrix3::Matrix3(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float a00=(float)lua_tonumber(L,1);
		float a01=(float)lua_tonumber(L,2);
		float a02=(float)lua_tonumber(L,3);
		float a10=(float)lua_tonumber(L,4);
		float a11=(float)lua_tonumber(L,5);
		float a12=(float)lua_tonumber(L,6);
		float a20=(float)lua_tonumber(L,7);
		float a21=(float)lua_tonumber(L,8);
		float a22=(float)lua_tonumber(L,9);

		return new osg::Matrix3(a00, a01, a02, a10, a11, a12, a20, a21, a22);
	}


	// Function binds:
	// void osg::Matrix3::set(const osg::Matrix3 & rhs)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrix3::set(const osg::Matrix3 & rhs) function, expected prototype:\nvoid osg::Matrix3::set(const osg::Matrix3 & rhs)\nClass arguments details:\narg 1 ID = 18903789\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix3* rhs_ptr=(Luna< osg::Matrix3 >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Matrix3::set function");
		}
		const osg::Matrix3 & rhs=*rhs_ptr;

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrix3::set(const osg::Matrix3 &). Got : '%s'\n%s",typeid(Luna< osg::Matrix3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(rhs);

		return 0;
	}

	// void osg::Matrix3::set(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrix3::set(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22) function, expected prototype:\nvoid osg::Matrix3::set(float a00, float a01, float a02, float a10, float a11, float a12, float a20, float a21, float a22)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float a00=(float)lua_tonumber(L,2);
		float a01=(float)lua_tonumber(L,3);
		float a02=(float)lua_tonumber(L,4);
		float a10=(float)lua_tonumber(L,5);
		float a11=(float)lua_tonumber(L,6);
		float a12=(float)lua_tonumber(L,7);
		float a20=(float)lua_tonumber(L,8);
		float a21=(float)lua_tonumber(L,9);
		float a22=(float)lua_tonumber(L,10);

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrix3::set(float, float, float, float, float, float, float, float, float). Got : '%s'\n%s",typeid(Luna< osg::Matrix3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(a00, a01, a02, a10, a11, a12, a20, a21, a22);

		return 0;
	}

	// Overload binder for osg::Matrix3::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(const osg::Matrix3 &)\n  set(float, float, float, float, float, float, float, float, float)\n");
		return 0;
	}

	// void osg::Matrix3::makeIdentity()
	static int _bind_makeIdentity(lua_State *L) {
		if (!_lg_typecheck_makeIdentity(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrix3::makeIdentity() function, expected prototype:\nvoid osg::Matrix3::makeIdentity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrix3::makeIdentity(). Got : '%s'\n%s",typeid(Luna< osg::Matrix3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeIdentity();

		return 0;
	}

	// float osg::Matrix3::matrix3f_eq(osg::Matrix3 * mat, osg::Matrix3 * rhs)
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Matrix3::matrix3f_eq(osg::Matrix3 * mat, osg::Matrix3 * rhs) function, expected prototype:\nfloat osg::Matrix3::matrix3f_eq(osg::Matrix3 * mat, osg::Matrix3 * rhs)\nClass arguments details:\narg 1 ID = 18903789\narg 2 ID = 18903789\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix3* mat=(Luna< osg::Matrix3 >::check(L,1));
		osg::Matrix3* rhs=(Luna< osg::Matrix3 >::check(L,2));

		float lret = matrix3f_eq(mat, rhs);
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:
	// float osg::Matrix3::operator[](int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Matrix3::operator[](int i) function, expected prototype:\nfloat osg::Matrix3::operator[](int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Matrix3::operator[](int). Got : '%s'\n%s",typeid(Luna< osg::Matrix3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::Matrix3::operator()(int row, int col)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in float osg::Matrix3::operator()(int row, int col) function, expected prototype:\nfloat osg::Matrix3::operator()(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		osg::Matrix3* self=(Luna< osg::Matrix3 >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::Matrix3::operator()(int, int). Got : '%s'\n%s",typeid(Luna< osg::Matrix3 >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->operator()(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}


};

osg::Matrix3* LunaTraits< osg::Matrix3 >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Matrix3::_bind_ctor(L);
}

void LunaTraits< osg::Matrix3 >::_bind_dtor(osg::Matrix3* obj) {
	delete obj;
}

const char LunaTraits< osg::Matrix3 >::className[] = "Matrix3";
const char LunaTraits< osg::Matrix3 >::fullName[] = "osg::Matrix3";
const char LunaTraits< osg::Matrix3 >::moduleName[] = "osg";
const char* LunaTraits< osg::Matrix3 >::parents[] = {0};
const int LunaTraits< osg::Matrix3 >::hash = 18903789;
const int LunaTraits< osg::Matrix3 >::uniqueIDs[] = {18903789,0};

luna_RegType LunaTraits< osg::Matrix3 >::methods[] = {
	{"set", &luna_wrapper_osg_Matrix3::_bind_set},
	{"makeIdentity", &luna_wrapper_osg_Matrix3::_bind_makeIdentity},
	{"__eq", &luna_wrapper_osg_Matrix3::_bind___eq},
	{"op_index", &luna_wrapper_osg_Matrix3::_bind_op_index},
	{"op_call", &luna_wrapper_osg_Matrix3::_bind_op_call},
	{"dynCast", &luna_wrapper_osg_Matrix3::_bind_dynCast},
	{"fromVoid", &luna_wrapper_osg_Matrix3::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Matrix3::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Matrix3 >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Matrix3 >::enumValues[] = {
	{0,0}
};


