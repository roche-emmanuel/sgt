#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_basic_type_wrapper.h>

class luna_wrapper_osgDB_basic_type_wrapper {
public:
	typedef Luna< osgDB::basic_type_wrapper > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::basic_type_wrapper* self=(Luna< osgDB::basic_type_wrapper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osgDB::basic_type_wrapper,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56095127) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgDB::basic_type_wrapper*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::basic_type_wrapper* rhs =(Luna< osgDB::basic_type_wrapper >::check(L,2));
		osgDB::basic_type_wrapper* self=(Luna< osgDB::basic_type_wrapper >::check(L,1));
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

		osgDB::basic_type_wrapper* self= (osgDB::basic_type_wrapper*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::basic_type_wrapper >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,56095127) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgDB::basic_type_wrapper >::check(L,1));
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

		osgDB::basic_type_wrapper* self=(Luna< osgDB::basic_type_wrapper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgDB::basic_type_wrapper");
		
		return luna_dynamicCast(L,converters,"osgDB::basic_type_wrapper",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_matches(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::basic_type_wrapper::basic_type_wrapper(lua_Table * data)
	static osgDB::basic_type_wrapper* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::basic_type_wrapper::basic_type_wrapper(lua_Table * data) function, expected prototype:\nosgDB::basic_type_wrapper::basic_type_wrapper(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_basic_type_wrapper(L,NULL);
	}


	// Function binds:
	// bool osgDB::basic_type_wrapper::matches(const osg::Object * proto) const
	static int _bind_matches(lua_State *L) {
		if (!_lg_typecheck_matches(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::basic_type_wrapper::matches(const osg::Object * proto) const function, expected prototype:\nbool osgDB::basic_type_wrapper::matches(const osg::Object * proto) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* proto=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgDB::basic_type_wrapper* self=(Luna< osgDB::basic_type_wrapper >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::basic_type_wrapper::matches(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osgDB::basic_type_wrapper >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->matches(proto);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgDB::basic_type_wrapper* LunaTraits< osgDB::basic_type_wrapper >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_basic_type_wrapper::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// bool osgDB::basic_type_wrapper::matches(const osg::Object * proto) const
}

void LunaTraits< osgDB::basic_type_wrapper >::_bind_dtor(osgDB::basic_type_wrapper* obj) {
	delete obj;
}

const char LunaTraits< osgDB::basic_type_wrapper >::className[] = "basic_type_wrapper";
const char LunaTraits< osgDB::basic_type_wrapper >::fullName[] = "osgDB::basic_type_wrapper";
const char LunaTraits< osgDB::basic_type_wrapper >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::basic_type_wrapper >::parents[] = {0};
const int LunaTraits< osgDB::basic_type_wrapper >::hash = 56095127;
const int LunaTraits< osgDB::basic_type_wrapper >::uniqueIDs[] = {56095127,0};

luna_RegType LunaTraits< osgDB::basic_type_wrapper >::methods[] = {
	{"matches", &luna_wrapper_osgDB_basic_type_wrapper::_bind_matches},
	{"dynCast", &luna_wrapper_osgDB_basic_type_wrapper::_bind_dynCast},
	{"__eq", &luna_wrapper_osgDB_basic_type_wrapper::_bind___eq},
	{"fromVoid", &luna_wrapper_osgDB_basic_type_wrapper::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_basic_type_wrapper::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_basic_type_wrapper::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::basic_type_wrapper >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::basic_type_wrapper >::enumValues[] = {
	{0,0}
};


