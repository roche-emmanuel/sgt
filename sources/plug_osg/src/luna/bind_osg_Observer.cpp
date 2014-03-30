#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_Observer.h>

class luna_wrapper_osg_Observer {
public:
	typedef Luna< osg::Observer > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Observer* self=(Luna< osg::Observer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Observer,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58375525) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::Observer*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Observer* rhs =(Luna< osg::Observer >::check(L,2));
		osg::Observer* self=(Luna< osg::Observer >::check(L,1));
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

		osg::Observer* self= (osg::Observer*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::Observer >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,58375525) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Observer >::check(L,1));
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

		osg::Observer* self=(Luna< osg::Observer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::Observer");
		
		return luna_dynamicCast(L,converters,"osg::Observer",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_objectDeleted(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_objectDeleted(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,3625364)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::Observer::Observer()
	static osg::Observer* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Observer::Observer() function, expected prototype:\nosg::Observer::Observer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::Observer();
	}

	// osg::Observer::Observer(lua_Table * data)
	static osg::Observer* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::Observer::Observer(lua_Table * data) function, expected prototype:\nosg::Observer::Observer(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_Observer(L,NULL);
	}

	// Overload binder for osg::Observer::Observer
	static osg::Observer* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Observer, cannot match any of the overloads for function Observer:\n  Observer()\n  Observer(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::Observer::objectDeleted(void * arg1)
	static int _bind_objectDeleted(lua_State *L) {
		if (!_lg_typecheck_objectDeleted(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Observer::objectDeleted(void * arg1) function, expected prototype:\nvoid osg::Observer::objectDeleted(void * arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* _arg1=(Luna< void >::check(L,2));

		osg::Observer* self=(Luna< osg::Observer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Observer::objectDeleted(void *). Got : '%s'\n%s",typeid(Luna< osg::Observer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->objectDeleted(_arg1);

		return 0;
	}

	// void osg::Observer::base_objectDeleted(void * arg1)
	static int _bind_base_objectDeleted(lua_State *L) {
		if (!_lg_typecheck_base_objectDeleted(L)) {
			luaL_error(L, "luna typecheck failed in void osg::Observer::base_objectDeleted(void * arg1) function, expected prototype:\nvoid osg::Observer::base_objectDeleted(void * arg1)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		void* _arg1=(Luna< void >::check(L,2));

		osg::Observer* self=(Luna< osg::Observer >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::Observer::base_objectDeleted(void *). Got : '%s'\n%s",typeid(Luna< osg::Observer >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Observer::objectDeleted(_arg1);

		return 0;
	}


	// Operator binds:

};

osg::Observer* LunaTraits< osg::Observer >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_Observer::_bind_ctor(L);
}

void LunaTraits< osg::Observer >::_bind_dtor(osg::Observer* obj) {
	delete obj;
}

const char LunaTraits< osg::Observer >::className[] = "Observer";
const char LunaTraits< osg::Observer >::fullName[] = "osg::Observer";
const char LunaTraits< osg::Observer >::moduleName[] = "osg";
const char* LunaTraits< osg::Observer >::parents[] = {0};
const int LunaTraits< osg::Observer >::hash = 58375525;
const int LunaTraits< osg::Observer >::uniqueIDs[] = {58375525,0};

luna_RegType LunaTraits< osg::Observer >::methods[] = {
	{"objectDeleted", &luna_wrapper_osg_Observer::_bind_objectDeleted},
	{"base_objectDeleted", &luna_wrapper_osg_Observer::_bind_base_objectDeleted},
	{"dynCast", &luna_wrapper_osg_Observer::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_Observer::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_Observer::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_Observer::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_Observer::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::Observer >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::Observer >::enumValues[] = {
	{0,0}
};


