#include <plug_common.h>

class luna_wrapper_osgDB_ObjectProperty {
public:
	typedef Luna< osgDB::ObjectProperty > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23791141) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::ObjectProperty*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ObjectProperty* rhs =(Luna< osgDB::ObjectProperty >::check(L,2));
		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
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

		osgDB::ObjectProperty* self= (osgDB::ObjectProperty*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ObjectProperty >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23791141) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::ObjectProperty >::check(L,1));
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

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::ObjectProperty");
		
		return luna_dynamicCast(L,converters,"osgDB::ObjectProperty",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,23791141) ) return false;
		if( (!(Luna< osgDB::ObjectProperty >::check(L,1))) ) return false;
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

	inline static bool _lg_typecheck_getName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMapProperty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setValue(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMapProperty(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}


	// Constructor binds:
	// osgDB::ObjectProperty::ObjectProperty()
	static osgDB::ObjectProperty* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectProperty::ObjectProperty() function, expected prototype:\nosgDB::ObjectProperty::ObjectProperty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ObjectProperty();
	}

	// osgDB::ObjectProperty::ObjectProperty(const char * name, int value = 0, bool useMap = false)
	static osgDB::ObjectProperty* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectProperty::ObjectProperty(const char * name, int value = 0, bool useMap = false) function, expected prototype:\nosgDB::ObjectProperty::ObjectProperty(const char * name, int value = 0, bool useMap = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const char * name=(const char *)lua_tostring(L,1);
		int value=luatop>1 ? (int)lua_tointeger(L,2) : (int)0;
		bool useMap=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		return new osgDB::ObjectProperty(name, value, useMap);
	}

	// osgDB::ObjectProperty::ObjectProperty(const osgDB::ObjectProperty & copy)
	static osgDB::ObjectProperty* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectProperty::ObjectProperty(const osgDB::ObjectProperty & copy) function, expected prototype:\nosgDB::ObjectProperty::ObjectProperty(const osgDB::ObjectProperty & copy)\nClass arguments details:\narg 1 ID = 23791141\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgDB::ObjectProperty* copy_ptr=(Luna< osgDB::ObjectProperty >::check(L,1));
		if( !copy_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg copy in osgDB::ObjectProperty::ObjectProperty function");
		}
		const osgDB::ObjectProperty & copy=*copy_ptr;

		return new osgDB::ObjectProperty(copy);
	}

	// Overload binder for osgDB::ObjectProperty::ObjectProperty
	static osgDB::ObjectProperty* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);

		luaL_error(L, "error in function ObjectProperty, cannot match any of the overloads for function ObjectProperty:\n  ObjectProperty()\n  ObjectProperty(const char *, int, bool)\n  ObjectProperty(const osgDB::ObjectProperty &)\n");
		return NULL;
	}


	// Function binds:
	// void osgDB::ObjectProperty::set(int v)
	static int _bind_set(lua_State *L) {
		if (!_lg_typecheck_set(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectProperty::set(int v) function, expected prototype:\nvoid osgDB::ObjectProperty::set(int v)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int v=(int)lua_tointeger(L,2);

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ObjectProperty::set(int). Got : '%s'\n%s",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(v);

		return 0;
	}

	// int osgDB::ObjectProperty::get() const
	static int _bind_get(lua_State *L) {
		if (!_lg_typecheck_get(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::ObjectProperty::get() const function, expected prototype:\nint osgDB::ObjectProperty::get() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::ObjectProperty::get() const. Got : '%s'\n%s",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->get();
		lua_pushnumber(L,lret);

		return 1;
	}

	// std::string osgDB::ObjectProperty::_name()
	static int _bind_getName(lua_State *L) {
		if (!_lg_typecheck_getName(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::ObjectProperty::_name() function, expected prototype:\nstd::string osgDB::ObjectProperty::_name()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::ObjectProperty::_name(). Got : '%s'\n%s",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->_name;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// int osgDB::ObjectProperty::_value()
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::ObjectProperty::_value() function, expected prototype:\nint osgDB::ObjectProperty::_value()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::ObjectProperty::_value(). Got : '%s'\n%s",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->_value;
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::ObjectProperty::_mapProperty()
	static int _bind_getMapProperty(lua_State *L) {
		if (!_lg_typecheck_getMapProperty(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::ObjectProperty::_mapProperty() function, expected prototype:\nbool osgDB::ObjectProperty::_mapProperty()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::ObjectProperty::_mapProperty(). Got : '%s'\n%s",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->_mapProperty;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::ObjectProperty::_name(std::string value)
	static int _bind_setName(lua_State *L) {
		if (!_lg_typecheck_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectProperty::_name(std::string value) function, expected prototype:\nvoid osgDB::ObjectProperty::_name(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ObjectProperty::_name(std::string). Got : '%s'\n%s",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_name = value;

		return 0;
	}

	// void osgDB::ObjectProperty::_value(int value)
	static int _bind_setValue(lua_State *L) {
		if (!_lg_typecheck_setValue(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectProperty::_value(int value) function, expected prototype:\nvoid osgDB::ObjectProperty::_value(int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int value=(int)lua_tointeger(L,2);

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ObjectProperty::_value(int). Got : '%s'\n%s",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_value = value;

		return 0;
	}

	// void osgDB::ObjectProperty::_mapProperty(bool value)
	static int _bind_setMapProperty(lua_State *L) {
		if (!_lg_typecheck_setMapProperty(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectProperty::_mapProperty(bool value) function, expected prototype:\nvoid osgDB::ObjectProperty::_mapProperty(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ObjectProperty::_mapProperty(bool). Got : '%s'\n%s",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_mapProperty = value;

		return 0;
	}


	// Operator binds:
	// osgDB::ObjectProperty & osgDB::ObjectProperty::operator()(const char * name)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectProperty & osgDB::ObjectProperty::operator()(const char * name) function, expected prototype:\nosgDB::ObjectProperty & osgDB::ObjectProperty::operator()(const char * name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		const char * name=(const char *)lua_tostring(L,2);

		osgDB::ObjectProperty* self=(Luna< osgDB::ObjectProperty >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ObjectProperty & osgDB::ObjectProperty::operator()(const char *). Got : '%s'\n%s",typeid(Luna< osgDB::ObjectProperty >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ObjectProperty* lret = &self->operator()(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ObjectProperty >::push(L,lret,false);

		return 1;
	}


};

osgDB::ObjectProperty* LunaTraits< osgDB::ObjectProperty >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ObjectProperty::_bind_ctor(L);
}

void LunaTraits< osgDB::ObjectProperty >::_bind_dtor(osgDB::ObjectProperty* obj) {
	delete obj;
}

const char LunaTraits< osgDB::ObjectProperty >::className[] = "ObjectProperty";
const char LunaTraits< osgDB::ObjectProperty >::fullName[] = "osgDB::ObjectProperty";
const char LunaTraits< osgDB::ObjectProperty >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectProperty >::parents[] = {0};
const int LunaTraits< osgDB::ObjectProperty >::hash = 23791141;
const int LunaTraits< osgDB::ObjectProperty >::uniqueIDs[] = {23791141,0};

luna_RegType LunaTraits< osgDB::ObjectProperty >::methods[] = {
	{"set", &luna_wrapper_osgDB_ObjectProperty::_bind_set},
	{"get", &luna_wrapper_osgDB_ObjectProperty::_bind_get},
	{"getName", &luna_wrapper_osgDB_ObjectProperty::_bind_getName},
	{"getValue", &luna_wrapper_osgDB_ObjectProperty::_bind_getValue},
	{"getMapProperty", &luna_wrapper_osgDB_ObjectProperty::_bind_getMapProperty},
	{"setName", &luna_wrapper_osgDB_ObjectProperty::_bind_setName},
	{"setValue", &luna_wrapper_osgDB_ObjectProperty::_bind_setValue},
	{"setMapProperty", &luna_wrapper_osgDB_ObjectProperty::_bind_setMapProperty},
	{"op_call", &luna_wrapper_osgDB_ObjectProperty::_bind_op_call},
	{"dynCast", &luna_wrapper_osgDB_ObjectProperty::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_ObjectProperty::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_ObjectProperty::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ObjectProperty::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectProperty >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectProperty >::enumValues[] = {
	{0,0}
};


