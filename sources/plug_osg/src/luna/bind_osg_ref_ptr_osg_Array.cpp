#include <plug_common.h>

class luna_wrapper_osg_ref_ptr_osg_Array {
public:
	typedef Luna< osg::ref_ptr< osg::Array > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74215671) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ref_ptr< osg::Array >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Array >* rhs =(Luna< osg::ref_ptr< osg::Array > >::check(L,2));
		osg::ref_ptr< osg::Array >* self=(Luna< osg::ref_ptr< osg::Array > >::check(L,1));
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

		osg::ref_ptr< osg::Array >* self= (osg::ref_ptr< osg::Array >*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ref_ptr< osg::Array > >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74215671) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ref_ptr< osg::Array > >::check(L,1));
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

		osg::ref_ptr< osg::Array >* self=(Luna< osg::ref_ptr< osg::Array > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ref_ptr< osg::Array >");
		
		return luna_dynamicCast(L,converters,"osg::ref_ptr< osg::Array >",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ref_ptr< osg::Array >* LunaTraits< osg::ref_ptr< osg::Array > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ref_ptr< osg::Array > >::_bind_dtor(osg::ref_ptr< osg::Array >* obj) {
	delete obj;
}

const char LunaTraits< osg::ref_ptr< osg::Array > >::className[] = "ref_ptr_osg_Array";
const char LunaTraits< osg::ref_ptr< osg::Array > >::fullName[] = "osg::ref_ptr< osg::Array >";
const char LunaTraits< osg::ref_ptr< osg::Array > >::moduleName[] = "osg";
const char* LunaTraits< osg::ref_ptr< osg::Array > >::parents[] = {0};
const int LunaTraits< osg::ref_ptr< osg::Array > >::hash = 74215671;
const int LunaTraits< osg::ref_ptr< osg::Array > >::uniqueIDs[] = {74215671,0};

luna_RegType LunaTraits< osg::ref_ptr< osg::Array > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ref_ptr_osg_Array::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ref_ptr_osg_Array::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ref_ptr_osg_Array::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ref_ptr_osg_Array::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ref_ptr< osg::Array > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ref_ptr< osg::Array > >::enumValues[] = {
	{0,0}
};


