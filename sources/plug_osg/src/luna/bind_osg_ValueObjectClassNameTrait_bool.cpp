#include <plug_common.h>

class luna_wrapper_osg_ValueObjectClassNameTrait_bool {
public:
	typedef Luna< osg::ValueObjectClassNameTrait< bool > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41483556) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObjectClassNameTrait< bool >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ValueObjectClassNameTrait< bool >* rhs =(Luna< osg::ValueObjectClassNameTrait< bool > >::check(L,2));
		osg::ValueObjectClassNameTrait< bool >* self=(Luna< osg::ValueObjectClassNameTrait< bool > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< bool >* self= (osg::ValueObjectClassNameTrait< bool >*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ValueObjectClassNameTrait< bool > >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,41483556) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ValueObjectClassNameTrait< bool > >::check(L,1));
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

		osg::ValueObjectClassNameTrait< bool >* self=(Luna< osg::ValueObjectClassNameTrait< bool > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObjectClassNameTrait< bool >");
		
		return luna_dynamicCast(L,converters,"osg::ValueObjectClassNameTrait< bool >",name);
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
	// static const char * osg::ValueObjectClassNameTrait< bool >::className()
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in static const char * osg::ValueObjectClassNameTrait< bool >::className() function, expected prototype:\nstatic const char * osg::ValueObjectClassNameTrait< bool >::className()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		const char * lret = osg::ValueObjectClassNameTrait< bool >::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osg::ValueObjectClassNameTrait< bool >* LunaTraits< osg::ValueObjectClassNameTrait< bool > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObjectClassNameTrait< bool > >::_bind_dtor(osg::ValueObjectClassNameTrait< bool >* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObjectClassNameTrait< bool > >::className[] = "ValueObjectClassNameTrait_bool";
const char LunaTraits< osg::ValueObjectClassNameTrait< bool > >::fullName[] = "osg::ValueObjectClassNameTrait< bool >";
const char LunaTraits< osg::ValueObjectClassNameTrait< bool > >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObjectClassNameTrait< bool > >::parents[] = {0};
const int LunaTraits< osg::ValueObjectClassNameTrait< bool > >::hash = 41483556;
const int LunaTraits< osg::ValueObjectClassNameTrait< bool > >::uniqueIDs[] = {41483556,0};

luna_RegType LunaTraits< osg::ValueObjectClassNameTrait< bool > >::methods[] = {
	{"className", &luna_wrapper_osg_ValueObjectClassNameTrait_bool::_bind_className},
	{"dynCast", &luna_wrapper_osg_ValueObjectClassNameTrait_bool::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObjectClassNameTrait_bool::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ValueObjectClassNameTrait_bool::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ValueObjectClassNameTrait_bool::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObjectClassNameTrait< bool > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObjectClassNameTrait< bool > >::enumValues[] = {
	{0,0}
};


