#include <plug_common.h>

class luna_wrapper_osgText_String {
public:
	typedef Luna< osgText::String > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42086333) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgText::String*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgText::String* rhs =(Luna< osgText::String >::check(L,2));
		osgText::String* self=(Luna< osgText::String >::check(L,1));
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

		osgText::String* self= (osgText::String*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgText::String >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42086333) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgText::String >::check(L,1));
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

		osgText::String* self=(Luna< osgText::String >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgText::String");
		
		return luna_dynamicCast(L,converters,"osgText::String",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,42086333) ) return false;
		if( (!(Luna< osgText::String >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_set_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_set_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_createUTF8EncodedString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_assign(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,42086333) ) return false;
		return true;
	}


	// Constructor binds:
	// osgText::String::String()
	static osgText::String* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgText::String::String() function, expected prototype:\nosgText::String::String()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgText::String();
	}

	// osgText::String::String(const osgText::String & str)
	static osgText::String* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgText::String::String(const osgText::String & str) function, expected prototype:\nosgText::String::String(const osgText::String & str)\nClass arguments details:\narg 1 ID = 42086333\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgText::String* str_ptr=(Luna< osgText::String >::check(L,1));
		if( !str_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg str in osgText::String::String function");
		}
		const osgText::String & str=*str_ptr;

		return new osgText::String(str);
	}

	// osgText::String::String(const std::string & str)
	static osgText::String* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgText::String::String(const std::string & str) function, expected prototype:\nosgText::String::String(const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,1),lua_objlen(L,1));

		return new osgText::String(str);
	}

	// osgText::String::String(const std::string & text, osgText::String::Encoding encoding)
	static osgText::String* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgText::String::String(const std::string & text, osgText::String::Encoding encoding) function, expected prototype:\nosgText::String::String(const std::string & text, osgText::String::Encoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string text(lua_tostring(L,1),lua_objlen(L,1));
		osgText::String::Encoding encoding=(osgText::String::Encoding)lua_tointeger(L,2);

		return new osgText::String(text, encoding);
	}

	// Overload binder for osgText::String::String
	static osgText::String* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function String, cannot match any of the overloads for function String:\n  String()\n  String(const osgText::String &)\n  String(const std::string &)\n  String(const std::string &, osgText::String::Encoding)\n");
		return NULL;
	}


	// Function binds:
	// void osgText::String::set(const std::string & str)
	static int _bind_set_overload_1(lua_State *L) {
		if (!_lg_typecheck_set_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::String::set(const std::string & str) function, expected prototype:\nvoid osgText::String::set(const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string str(lua_tostring(L,2),lua_objlen(L,2));

		osgText::String* self=(Luna< osgText::String >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::String::set(const std::string &). Got : '%s'\n%s",typeid(Luna< osgText::String >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(str);

		return 0;
	}

	// void osgText::String::set(const std::string & text, osgText::String::Encoding encoding)
	static int _bind_set_overload_2(lua_State *L) {
		if (!_lg_typecheck_set_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgText::String::set(const std::string & text, osgText::String::Encoding encoding) function, expected prototype:\nvoid osgText::String::set(const std::string & text, osgText::String::Encoding encoding)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string text(lua_tostring(L,2),lua_objlen(L,2));
		osgText::String::Encoding encoding=(osgText::String::Encoding)lua_tointeger(L,3);

		osgText::String* self=(Luna< osgText::String >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgText::String::set(const std::string &, osgText::String::Encoding). Got : '%s'\n%s",typeid(Luna< osgText::String >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->set(text, encoding);

		return 0;
	}

	// Overload binder for osgText::String::set
	static int _bind_set(lua_State *L) {
		if (_lg_typecheck_set_overload_1(L)) return _bind_set_overload_1(L);
		if (_lg_typecheck_set_overload_2(L)) return _bind_set_overload_2(L);

		luaL_error(L, "error in function set, cannot match any of the overloads for function set:\n  set(const std::string &)\n  set(const std::string &, osgText::String::Encoding)\n");
		return 0;
	}

	// std::string osgText::String::createUTF8EncodedString() const
	static int _bind_createUTF8EncodedString(lua_State *L) {
		if (!_lg_typecheck_createUTF8EncodedString(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgText::String::createUTF8EncodedString() const function, expected prototype:\nstd::string osgText::String::createUTF8EncodedString() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgText::String* self=(Luna< osgText::String >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgText::String::createUTF8EncodedString() const. Got : '%s'\n%s",typeid(Luna< osgText::String >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->createUTF8EncodedString();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}


	// Operator binds:
	// osgText::String & osgText::String::operator=(const osgText::String & str)
	static int _bind_op_assign(lua_State *L) {
		if (!_lg_typecheck_op_assign(L)) {
			luaL_error(L, "luna typecheck failed in osgText::String & osgText::String::operator=(const osgText::String & str) function, expected prototype:\nosgText::String & osgText::String::operator=(const osgText::String & str)\nClass arguments details:\narg 1 ID = 42086333\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgText::String* str_ptr=(Luna< osgText::String >::check(L,2));
		if( !str_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg str in osgText::String::operator= function");
		}
		const osgText::String & str=*str_ptr;

		osgText::String* self=(Luna< osgText::String >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgText::String & osgText::String::operator=(const osgText::String &). Got : '%s'\n%s",typeid(Luna< osgText::String >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgText::String* lret = &self->operator=(str);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgText::String >::push(L,lret,false);

		return 1;
	}


};

osgText::String* LunaTraits< osgText::String >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgText_String::_bind_ctor(L);
}

void LunaTraits< osgText::String >::_bind_dtor(osgText::String* obj) {
	delete obj;
}

const char LunaTraits< osgText::String >::className[] = "String";
const char LunaTraits< osgText::String >::fullName[] = "osgText::String";
const char LunaTraits< osgText::String >::moduleName[] = "osgText";
const char* LunaTraits< osgText::String >::parents[] = {0};
const int LunaTraits< osgText::String >::hash = 42086333;
const int LunaTraits< osgText::String >::uniqueIDs[] = {42086333,0};

luna_RegType LunaTraits< osgText::String >::methods[] = {
	{"set", &luna_wrapper_osgText_String::_bind_set},
	{"createUTF8EncodedString", &luna_wrapper_osgText_String::_bind_createUTF8EncodedString},
	{"op_assign", &luna_wrapper_osgText_String::_bind_op_assign},
	{"dynCast", &luna_wrapper_osgText_String::_bind_dynCast},
	{"__eq", &luna_wrapper_osgText_String::_bind___eq},
	{"fromVoid", &luna_wrapper_osgText_String::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgText_String::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgText::String >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgText::String >::enumValues[] = {
	{"ENCODING_UNDEFINED", osgText::String::ENCODING_UNDEFINED},
	{"ENCODING_ASCII", osgText::String::ENCODING_ASCII},
	{"ENCODING_UTF8", osgText::String::ENCODING_UTF8},
	{"ENCODING_UTF16", osgText::String::ENCODING_UTF16},
	{"ENCODING_UTF16_BE", osgText::String::ENCODING_UTF16_BE},
	{"ENCODING_UTF16_LE", osgText::String::ENCODING_UTF16_LE},
	{"ENCODING_UTF32", osgText::String::ENCODING_UTF32},
	{"ENCODING_UTF32_BE", osgText::String::ENCODING_UTF32_BE},
	{"ENCODING_UTF32_LE", osgText::String::ENCODING_UTF32_LE},
	{"ENCODING_SIGNATURE", osgText::String::ENCODING_SIGNATURE},
	{0,0}
};


