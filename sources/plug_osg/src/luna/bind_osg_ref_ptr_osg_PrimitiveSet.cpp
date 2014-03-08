#include <plug_common.h>

class luna_wrapper_osg_ref_ptr_osg_PrimitiveSet {
public:
	typedef Luna< osg::ref_ptr< osg::PrimitiveSet > > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88770621) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ref_ptr< osg::PrimitiveSet >*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::PrimitiveSet >* rhs =(Luna< osg::ref_ptr< osg::PrimitiveSet > >::check(L,2));
		osg::ref_ptr< osg::PrimitiveSet >* self=(Luna< osg::ref_ptr< osg::PrimitiveSet > >::check(L,1));
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

		osg::ref_ptr< osg::PrimitiveSet >* self= (osg::ref_ptr< osg::PrimitiveSet >*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ref_ptr< osg::PrimitiveSet > >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,88770621) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ref_ptr< osg::PrimitiveSet > >::check(L,1));
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

		osg::ref_ptr< osg::PrimitiveSet >* self=(Luna< osg::ref_ptr< osg::PrimitiveSet > >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ref_ptr< osg::PrimitiveSet >");
		
		return luna_dynamicCast(L,converters,"osg::ref_ptr< osg::PrimitiveSet >",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ref_ptr< osg::PrimitiveSet >* LunaTraits< osg::ref_ptr< osg::PrimitiveSet > >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ref_ptr< osg::PrimitiveSet > >::_bind_dtor(osg::ref_ptr< osg::PrimitiveSet >* obj) {
	delete obj;
}

const char LunaTraits< osg::ref_ptr< osg::PrimitiveSet > >::className[] = "ref_ptr_osg_PrimitiveSet";
const char LunaTraits< osg::ref_ptr< osg::PrimitiveSet > >::fullName[] = "osg::ref_ptr< osg::PrimitiveSet >";
const char LunaTraits< osg::ref_ptr< osg::PrimitiveSet > >::moduleName[] = "osg";
const char* LunaTraits< osg::ref_ptr< osg::PrimitiveSet > >::parents[] = {0};
const int LunaTraits< osg::ref_ptr< osg::PrimitiveSet > >::hash = 88770621;
const int LunaTraits< osg::ref_ptr< osg::PrimitiveSet > >::uniqueIDs[] = {88770621,0};

luna_RegType LunaTraits< osg::ref_ptr< osg::PrimitiveSet > >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ref_ptr_osg_PrimitiveSet::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ref_ptr_osg_PrimitiveSet::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ref_ptr_osg_PrimitiveSet::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ref_ptr_osg_PrimitiveSet::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ref_ptr< osg::PrimitiveSet > >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ref_ptr< osg::PrimitiveSet > >::enumValues[] = {
	{0,0}
};


