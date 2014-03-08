#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_unsigned_char {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< unsigned char > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78346813) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObjectClassNameTrait< unsigned char >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ValueObjectClassNameTrait< unsigned char >* rhs =(Luna< osg::ValueObjectClassNameTrait< unsigned char > >::check(L,2));
		osg::ValueObjectClassNameTrait< unsigned char >* self=(Luna< osg::ValueObjectClassNameTrait< unsigned char > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< unsigned char >* self= (osg::ValueObjectClassNameTrait< unsigned char >*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ValueObjectClassNameTrait< unsigned char > >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,78346813) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ValueObjectClassNameTrait< unsigned char > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< unsigned char >* self=(Luna< osg::ValueObjectClassNameTrait< unsigned char > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< unsigned char >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< unsigned char >",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// static const char * osg::ValueObjectClassNameTrait< unsigned char >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< unsigned char >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< unsigned char >::className()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		const char * lret = osg::ValueObjectClassNameTrait< unsigned char >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< unsigned char >* LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > >::_bind_dtor(osg::ValueObjectClassNameTrait< unsigned char >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > >::className[] = "ValueObjectClassNameTrait_unsigned_char";
const char LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > >::fullName[] = "osg::ValueObjectClassNameTrait< unsigned char >";
const char LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > >::hash = 78346813;
const int LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > >::uniqueIDs[] = {78346813,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_unsigned_char::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_unsigned_char::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObjectClassNameTrait_unsigned_char::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ValueObjectClassNameTrait_unsigned_char::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ValueObjectClassNameTrait_unsigned_char::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< unsigned char > >::enumValues[] = {
	{0,0}
};


