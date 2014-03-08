#include <plug_common.h>

class luna_wrapper_osgUtil_dereference_less {
public:
	typedef Luna< osgUtil::dereference_less > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4191371) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::dereference_less*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::dereference_less* rhs =(Luna< osgUtil::dereference_less >::check(L,2));
		osgUtil::dereference_less* self=(Luna< osgUtil::dereference_less >::check(L,1));
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

		osgUtil::dereference_less* self= (osgUtil::dereference_less*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::dereference_less >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,4191371) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::dereference_less >::check(L,1));
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

		osgUtil::dereference_less* self=(Luna< osgUtil::dereference_less >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::dereference_less");
		
		return luna_dynamicCast(L,converters,"osgUtil::dereference_less",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osgUtil::dereference_less* LunaTraits< osgUtil::dereference_less >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::dereference_less >::_bind_dtor(osgUtil::dereference_less* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::dereference_less >::className[] = "dereference_less";
const char LunaTraits< osgUtil::dereference_less >::fullName[] = "osgUtil::dereference_less";
const char LunaTraits< osgUtil::dereference_less >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::dereference_less >::parents[] = {0};
const int LunaTraits< osgUtil::dereference_less >::hash = 4191371;
const int LunaTraits< osgUtil::dereference_less >::uniqueIDs[] = {4191371,0};

luna_RegType LunaTraits< osgUtil::dereference_less >::methods[] = {
	{"dynCast", &luna_wrapper_osgUtil_dereference_less::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_dereference_less::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_dereference_less::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_dereference_less::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::dereference_less >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::dereference_less >::enumValues[] = {
	{0,0}
};


