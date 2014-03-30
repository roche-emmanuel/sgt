#include <plug_common.h>

#include <luna/wrappers/wrapper_IString.h>

class luna_wrapper_IString {
public:
	typedef Luna< IString > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<IString,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74613221) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(IString*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		IString* rhs =(Luna< IString >::check(L,2));
		IString* self=(Luna< IString >::check(L,1));
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

		IString* self= (IString*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< IString >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74613221) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< IString >::check(L,1));
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

		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("IString");
		
		return luna_dynamicCast(L,converters,"IString",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_latin1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_utf8(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_unicodeCharAt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isEmpty(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_length(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// IString::IString(lua_Table * data)
	static IString* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in IString::IString(lua_Table * data) function, expected prototype:\nIString::IString(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_IString(L,NULL);
	}


	// Function binds:
	// const char * IString::latin1() const
	static int _bind_latin1(lua_State *L) {
		if (!_lg_typecheck_latin1(L)) {
			luaL_error(L, "luna typecheck failed in const char * IString::latin1() const function, expected prototype:\nconst char * IString::latin1() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * IString::latin1() const. Got : '%s'\n%s",typeid(Luna< IString >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->latin1();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * IString::utf8() const
	static int _bind_utf8(lua_State *L) {
		if (!_lg_typecheck_utf8(L)) {
			luaL_error(L, "luna typecheck failed in const char * IString::utf8() const function, expected prototype:\nconst char * IString::utf8() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * IString::utf8() const. Got : '%s'\n%s",typeid(Luna< IString >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->utf8();
		lua_pushstring(L,lret);

		return 1;
	}

	// unsigned short IString::unicodeCharAt(int index) const
	static int _bind_unicodeCharAt(lua_State *L) {
		if (!_lg_typecheck_unicodeCharAt(L)) {
			luaL_error(L, "luna typecheck failed in unsigned short IString::unicodeCharAt(int index) const function, expected prototype:\nunsigned short IString::unicodeCharAt(int index) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int index=(int)lua_tointeger(L,2);

		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned short IString::unicodeCharAt(int) const. Got : '%s'\n%s",typeid(Luna< IString >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned short lret = self->unicodeCharAt(index);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool IString::isEmpty() const
	static int _bind_isEmpty(lua_State *L) {
		if (!_lg_typecheck_isEmpty(L)) {
			luaL_error(L, "luna typecheck failed in bool IString::isEmpty() const function, expected prototype:\nbool IString::isEmpty() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool IString::isEmpty() const. Got : '%s'\n%s",typeid(Luna< IString >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isEmpty();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// int IString::length() const
	static int _bind_length(lua_State *L) {
		if (!_lg_typecheck_length(L)) {
			luaL_error(L, "luna typecheck failed in int IString::length() const function, expected prototype:\nint IString::length() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		IString* self=(Luna< IString >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call int IString::length() const. Got : '%s'\n%s",typeid(Luna< IString >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->length();
		lua_pushnumber(L,lret);

		return 1;
	}


	// Operator binds:

};

IString* LunaTraits< IString >::_bind_ctor(lua_State *L) {
	return luna_wrapper_IString::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// const char * IString::latin1() const
	// const char * IString::utf8() const
	// unsigned short IString::unicodeCharAt(int index) const
	// bool IString::isEmpty() const
	// int IString::length() const
}

void LunaTraits< IString >::_bind_dtor(IString* obj) {
	delete obj;
}

const char LunaTraits< IString >::className[] = "IString";
const char LunaTraits< IString >::fullName[] = "IString";
const char LunaTraits< IString >::moduleName[] = "doxmlparser";
const char* LunaTraits< IString >::parents[] = {0};
const int LunaTraits< IString >::hash = 74613221;
const int LunaTraits< IString >::uniqueIDs[] = {74613221,0};

luna_RegType LunaTraits< IString >::methods[] = {
	{"latin1", &luna_wrapper_IString::_bind_latin1},
	{"utf8", &luna_wrapper_IString::_bind_utf8},
	{"unicodeCharAt", &luna_wrapper_IString::_bind_unicodeCharAt},
	{"isEmpty", &luna_wrapper_IString::_bind_isEmpty},
	{"length", &luna_wrapper_IString::_bind_length},
	{"dynCast", &luna_wrapper_IString::_bind_dynCast},
	{"__eq", &luna_wrapper_IString::_bind___eq},
	{"fromVoid", &luna_wrapper_IString::_bind_fromVoid},
	{"asVoid", &luna_wrapper_IString::_bind_asVoid},
	{"getTable", &luna_wrapper_IString::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< IString >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< IString >::enumValues[] = {
	{0,0}
};


