#include <plug_common.h>

class luna_wrapper_osgDB_ObjectGLenum {
public:
	typedef Luna< osgDB::ObjectGLenum > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32567652) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ObjectGLenum*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ObjectGLenum* rhs =(Luna< osgDB::ObjectGLenum >::check(L,2));
		osgDB::ObjectGLenum* self=(Luna< osgDB::ObjectGLenum >::check(L,1));
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

		osgDB::ObjectGLenum* self= (osgDB::ObjectGLenum*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ObjectGLenum >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32567652) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::ObjectGLenum >::check(L,1));
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

		osgDB::ObjectGLenum* self=(Luna< osgDB::ObjectGLenum >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ObjectGLenum");
		
		return luna_dynamicCast(L,converters,"osgDB::ObjectGLenum",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,32567652) ) return false;
		if( (!(Luna< osgDB::ObjectGLenum >::check(L,1))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_get(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::ObjectGLenum::ObjectGLenum(unsigned int value = 0)
	static osgDB::ObjectGLenum* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectGLenum::ObjectGLenum(unsigned int value = 0) function, expected prototype:\nosgDB::ObjectGLenum::ObjectGLenum(unsigned int value = 0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int value=luatop>0 ? (unsigned int)lua_tointeger(L,1) : (unsigned int)0;

		return new osgDB::ObjectGLenum(value);
	}

	// osgDB::ObjectGLenum::ObjectGLenum(const osgDB::ObjectGLenum & copy)
	static osgDB::ObjectGLenum* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectGLenum::ObjectGLenum(const osgDB::ObjectGLenum & copy) function, expected prototype:\nosgDB::ObjectGLenum::ObjectGLenum(const osgDB::ObjectGLenum & copy)\nClass arguments details:\narg 1 ID = 32567652\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::ObjectGLenum* copy_ptr=(Luna< osgDB::ObjectGLenum >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgDB::ObjectGLenum::ObjectGLenum function");
		}
		const osgDB::ObjectGLenum & copy=*copy_ptr;

		return new osgDB::ObjectGLenum(copy);
	}

	// Overload binder for osgDB::ObjectGLenum::ObjectGLenum
	static osgDB::ObjectGLenum* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ObjectGLenum, cannot match any of the overloads for function ObjectGLenum:\n  ObjectGLenum(unsigned int)\n  ObjectGLenum(const osgDB::ObjectGLenum &)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::ObjectGLenum::set(unsigned int e)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectGLenum::set(unsigned int e) function, expected prototype:\nvoid osgDB::ObjectGLenum::set(unsigned int e)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int e=(unsigned int)lua_tointeger(L,2);

		osgDB::ObjectGLenum* self=(Luna< osgDB::ObjectGLenum >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ObjectGLenum::set(unsigned int). Got : '%s'\n%s",typeid(Luna< osgDB::ObjectGLenum >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(e);

		return 0;
	}

	// unsigned int osgDB::ObjectGLenum::get() const
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::ObjectGLenum::get() const function, expected prototype:\nunsigned int osgDB::ObjectGLenum::get() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ObjectGLenum* self=(Luna< osgDB::ObjectGLenum >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::ObjectGLenum::get() const. Got : '%s'\n%s",typeid(Luna< osgDB::ObjectGLenum >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->get();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osgDB::ObjectGLenum::_value()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::ObjectGLenum::_value() function, expected prototype:\nunsigned int osgDB::ObjectGLenum::_value()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ObjectGLenum* self=(Luna< osgDB::ObjectGLenum >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::ObjectGLenum::_value(). Got : '%s'\n%s",typeid(Luna< osgDB::ObjectGLenum >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_value;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::ObjectGLenum::_value(unsigned int value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectGLenum::_value(unsigned int value) function, expected prototype:\nvoid osgDB::ObjectGLenum::_value(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgDB::ObjectGLenum* self=(Luna< osgDB::ObjectGLenum >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ObjectGLenum::_value(unsigned int). Got : '%s'\n%s",typeid(Luna< osgDB::ObjectGLenum >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_value = value;

		return 0;
	}


	// Operator binds:

};

osgDB::ObjectGLenum* LunaTraits< osgDB::ObjectGLenum >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ObjectGLenum::_bind_ctor(L);
}

void LunaTraits< osgDB::ObjectGLenum >::_bind_dtor(osgDB::ObjectGLenum* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ObjectGLenum >::className[] = "ObjectGLenum";
const char LunaTraits< osgDB::ObjectGLenum >::fullName[] = "osgDB::ObjectGLenum";
const char LunaTraits< osgDB::ObjectGLenum >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectGLenum >::parents[] = {0};
const int LunaTraits< osgDB::ObjectGLenum >::hash = 32567652;
const int LunaTraits< osgDB::ObjectGLenum >::uniqueIDs[] = {32567652,0};

luna_RegType LunaTraits< osgDB::ObjectGLenum >::methods[] = {
	{"set", &luna_wrapper_osgDB_ObjectGLenum::_bind_set},
	{"get", &luna_wrapper_osgDB_ObjectGLenum::_bind_get},
	{"getValue", &luna_wrapper_osgDB_ObjectGLenum::_bind_getValue},
	{"setValue", &luna_wrapper_osgDB_ObjectGLenum::_bind_setValue},
	{"dynCast", &luna_wrapper_osgDB_ObjectGLenum::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ObjectGLenum::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_ObjectGLenum::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ObjectGLenum::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectGLenum >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectGLenum >::enumValues[] = {
	{0,0}
};


