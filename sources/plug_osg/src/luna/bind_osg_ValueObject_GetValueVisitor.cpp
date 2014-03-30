#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_ValueObject_GetValueVisitor.h>

class luna_wrapper_osg_ValueObject_GetValueVisitor {
public:
	typedef Luna< osg::ValueObject::GetValueVisitor > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ValueObject::GetValueVisitor* self=(Luna< osg::ValueObject::GetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::ValueObject::GetValueVisitor,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96962033) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::ValueObject::GetValueVisitor*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::ValueObject::GetValueVisitor* rhs =(Luna< osg::ValueObject::GetValueVisitor >::check(L,2));
		osg::ValueObject::GetValueVisitor* self=(Luna< osg::ValueObject::GetValueVisitor >::check(L,1));
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

		osg::ValueObject::GetValueVisitor* self= (osg::ValueObject::GetValueVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::ValueObject::GetValueVisitor >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,96962033) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::ValueObject::GetValueVisitor >::check(L,1));
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

		osg::ValueObject::GetValueVisitor* self=(Luna< osg::ValueObject::GetValueVisitor >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::ValueObject::GetValueVisitor");
		
		return luna_dynamicCast(L,converters,"osg::ValueObject::GetValueVisitor",name);
	}


	// Constructor checkers:

	// Function checkers:

	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:

	// Operator binds:

};

osg::ValueObject::GetValueVisitor* LunaTraits< osg::ValueObject::GetValueVisitor >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osg::ValueObject::GetValueVisitor >::_bind_dtor(osg::ValueObject::GetValueVisitor* obj) {
	delete obj;
}

const char LunaTraits< osg::ValueObject::GetValueVisitor >::className[] = "ValueObject_GetValueVisitor";
const char LunaTraits< osg::ValueObject::GetValueVisitor >::fullName[] = "osg::ValueObject::GetValueVisitor";
const char LunaTraits< osg::ValueObject::GetValueVisitor >::moduleName[] = "osg";
const char* LunaTraits< osg::ValueObject::GetValueVisitor >::parents[] = {0};
const int LunaTraits< osg::ValueObject::GetValueVisitor >::hash = 96962033;
const int LunaTraits< osg::ValueObject::GetValueVisitor >::uniqueIDs[] = {96962033,0};

luna_RegType LunaTraits< osg::ValueObject::GetValueVisitor >::methods[] = {
	{"dynCast", &luna_wrapper_osg_ValueObject_GetValueVisitor::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_ValueObject_GetValueVisitor::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_ValueObject_GetValueVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_ValueObject_GetValueVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_ValueObject_GetValueVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::ValueObject::GetValueVisitor >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::ValueObject::GetValueVisitor >::enumValues[] = {
	{0,0}
};


