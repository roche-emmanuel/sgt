#include <plug_common.h>

class luna_wrapper_osg_Matrix3d {
public:
	typedef Luna< osg::Matrix3d > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86017494) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Matrix3d*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Matrix3d* rhs =(Luna< osg::Matrix3d >::check(L,2));
		osg::Matrix3d* self=(Luna< osg::Matrix3d >::check(L,1));
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

		osg::Matrix3d* self= (osg::Matrix3d*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Matrix3d >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86017494) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Matrix3d >::check(L,1));
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

		osg::Matrix3d* self=(Luna< osg::Matrix3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Matrix3d");
		
		return luna_dynamicCast(L,converters,"osg::Matrix3d",name);
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

		if( !Luna<void>::has_uniqueid(L,2,86017494) ) return false;
		if( (!(Luna< osg::Matrix3d >::check(L,2))) ) return false;
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
	// osg::Matrix3d::Matrix3d(double a00, double a01, double a02, double a10, double a11, double a12, double a20, double a21, double a22)
	static osg::Matrix3d* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrix3d::Matrix3d(double a00, double a01, double a02, double a10, double a11, double a12, double a20, double a21, double a22) function, expected prototype:\nosg::Matrix3d::Matrix3d(double a00, double a01, double a02, double a10, double a11, double a12, double a20, double a21, double a22)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double a00=(double)lua_tonumber(L,1);
		double a01=(double)lua_tonumber(L,2);
		double a02=(double)lua_tonumber(L,3);
		double a10=(double)lua_tonumber(L,4);
		double a11=(double)lua_tonumber(L,5);
		double a12=(double)lua_tonumber(L,6);
		double a20=(double)lua_tonumber(L,7);
		double a21=(double)lua_tonumber(L,8);
		double a22=(double)lua_tonumber(L,9);

		return new osg::Matrix3d(a00, a01, a02, a10, a11, a12, a20, a21, a22);
	}


	// Function binds:
	// void osg::Matrix3d::set(const osg::Matrix3d & rhs)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrix3d::set(const osg::Matrix3d & rhs) function, expected prototype:\nvoid osg::Matrix3d::set(const osg::Matrix3d & rhs)\nClass arguments details:\narg 1 ID = 86017494\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrix3d* rhs_ptr=(Luna< osg::Matrix3d >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::Matrix3d::set function");
		}
		const osg::Matrix3d & rhs=*rhs_ptr;

		osg::Matrix3d* self=(Luna< osg::Matrix3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrix3d::set(const osg::Matrix3d &). Got : '%s'\n%s",typeid(Luna< osg::Matrix3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(rhs);

		return 0;
	}

	// void osg::Matrix3d::set(double a00, double a01, double a02, double a10, double a11, double a12, double a20, double a21, double a22)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrix3d::set(double a00, double a01, double a02, double a10, double a11, double a12, double a20, double a21, double a22) function, expected prototype:\nvoid osg::Matrix3d::set(double a00, double a01, double a02, double a10, double a11, double a12, double a20, double a21, double a22)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double a00=(double)lua_tonumber(L,2);
		double a01=(double)lua_tonumber(L,3);
		double a02=(double)lua_tonumber(L,4);
		double a10=(double)lua_tonumber(L,5);
		double a11=(double)lua_tonumber(L,6);
		double a12=(double)lua_tonumber(L,7);
		double a20=(double)lua_tonumber(L,8);
		double a21=(double)lua_tonumber(L,9);
		double a22=(double)lua_tonumber(L,10);

		osg::Matrix3d* self=(Luna< osg::Matrix3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrix3d::set(double, double, double, double, double, double, double, double, double). Got : '%s'\n%s",typeid(Luna< osg::Matrix3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(a00, a01, a02, a10, a11, a12, a20, a21, a22);

		return 0;
	}

	// Overload binder for osg::Matrix3d::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(const osg::Matrix3d &)\n  set(double, double, double, double, double, double, double, double, double)\n");
		return 0;
	}

	// void osg::Matrix3d::makeIdentity()
	static int _bind_makeIdentity(lua_State *L) {
		if (!_lg_typecheck_makeIdentity(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Matrix3d::makeIdentity() function, expected prototype:\nvoid osg::Matrix3d::makeIdentity()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::Matrix3d* self=(Luna< osg::Matrix3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Matrix3d::makeIdentity(). Got : '%s'\n%s",typeid(Luna< osg::Matrix3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->makeIdentity();

		return 0;
	}


	// Operator binds:
	// double osg::Matrix3d::operator[](int i)
	static int _bind_op_index(lua_State *L) {
		if (!_lg_typecheck_op_index(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Matrix3d::operator[](int i) function, expected prototype:\ndouble osg::Matrix3d::operator[](int i)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i=(int)lua_tointeger(L,2);

		osg::Matrix3d* self=(Luna< osg::Matrix3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Matrix3d::operator[](int). Got : '%s'\n%s",typeid(Luna< osg::Matrix3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->operator[](i);
		lua_pushnumber(L,lret);

		return 1;
	}

	// double osg::Matrix3d::operator()(int row, int col)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in double osg::Matrix3d::operator()(int row, int col) function, expected prototype:\ndouble osg::Matrix3d::operator()(int row, int col)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int row=(int)lua_tointeger(L,2);
		int col=(int)lua_tointeger(L,3);

		osg::Matrix3d* self=(Luna< osg::Matrix3d >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::Matrix3d::operator()(int, int). Got : '%s'\n%s",typeid(Luna< osg::Matrix3d >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->operator()(row, col);
		lua_pushnumber(L,lret);

		return 1;
	}


};

osg::Matrix3d* LunaTraits< osg::Matrix3d >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Matrix3d::_bind_ctor(L);
}

void LunaTraits< osg::Matrix3d >::_bind_dtor(osg::Matrix3d* obj) {
	delete obj;
}

const char LunaTraits< osg::Matrix3d >::className[] = "Matrix3d";
const char LunaTraits< osg::Matrix3d >::fullName[] = "osg::Matrix3d";
const char LunaTraits< osg::Matrix3d >::moduleName[] = "osg";
const char* LunaTraits< osg::Matrix3d >::parents[] = {0};
const int LunaTraits< osg::Matrix3d >::hash = 86017494;
const int LunaTraits< osg::Matrix3d >::uniqueIDs[] = {86017494,0};

luna_RegType LunaTraits< osg::Matrix3d >::methods[] = {
	{"set", &luna_wrapper_osg_Matrix3d::_bind_set},
	{"makeIdentity", &luna_wrapper_osg_Matrix3d::_bind_makeIdentity},
	{"op_index", &luna_wrapper_osg_Matrix3d::_bind_op_index},
	{"op_call", &luna_wrapper_osg_Matrix3d::_bind_op_call},
	{"dynCast", &luna_wrapper_osg_Matrix3d::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Matrix3d::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Matrix3d::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Matrix3d::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Matrix3d >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Matrix3d >::enumValues[] = {
	{0,0}
};


