#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_StateAttribute_ModeUsage.h>

class luna_wrapper_osg_StateAttribute_ModeUsage {
public:
	typedef Luna< osg::StateAttribute::ModeUsage > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* self=(Luna< osg::StateAttribute::ModeUsage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::StateAttribute::ModeUsage,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48108040) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::StateAttribute::ModeUsage*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateAttribute::ModeUsage* rhs =(Luna< osg::StateAttribute::ModeUsage >::check(L,2));
		osg::StateAttribute::ModeUsage* self=(Luna< osg::StateAttribute::ModeUsage >::check(L,1));
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

		osg::StateAttribute::ModeUsage* self= (osg::StateAttribute::ModeUsage*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::StateAttribute::ModeUsage >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,48108040) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::StateAttribute::ModeUsage >::check(L,1));
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

		osg::StateAttribute::ModeUsage* self=(Luna< osg::StateAttribute::ModeUsage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::StateAttribute::ModeUsage");
		
		return luna_dynamicCast(L,converters,"osg::StateAttribute::ModeUsage",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_usesMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_usesTextureMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osg::StateAttribute::ModeUsage::ModeUsage(lua_Table * data)
	static osg::StateAttribute::ModeUsage* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::StateAttribute::ModeUsage::ModeUsage(lua_Table * data) function, expected prototype:\nosg::StateAttribute::ModeUsage::ModeUsage(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_StateAttribute_ModeUsage(L,NULL);
	}


	// Function binds:
	// void osg::StateAttribute::ModeUsage::usesMode(unsigned int mode)
	static int _bind_usesMode(lua_State *L) {
		if (!_lg_typecheck_usesMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::ModeUsage::usesMode(unsigned int mode) function, expected prototype:\nvoid osg::StateAttribute::ModeUsage::usesMode(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::StateAttribute::ModeUsage* self=(Luna< osg::StateAttribute::ModeUsage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::ModeUsage::usesMode(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::StateAttribute::ModeUsage >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->usesMode(mode);

		return 0;
	}

	// void osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int mode)
	static int _bind_usesTextureMode(lua_State *L) {
		if (!_lg_typecheck_usesTextureMode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int mode) function, expected prototype:\nvoid osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osg::StateAttribute::ModeUsage* self=(Luna< osg::StateAttribute::ModeUsage >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::StateAttribute::ModeUsage >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->usesTextureMode(mode);

		return 0;
	}


	// Operator binds:

};

osg::StateAttribute::ModeUsage* LunaTraits< osg::StateAttribute::ModeUsage >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_StateAttribute_ModeUsage::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// void osg::StateAttribute::ModeUsage::usesMode(unsigned int mode)
	// void osg::StateAttribute::ModeUsage::usesTextureMode(unsigned int mode)
}

void LunaTraits< osg::StateAttribute::ModeUsage >::_bind_dtor(osg::StateAttribute::ModeUsage* obj) {
	delete obj;
}

const char LunaTraits< osg::StateAttribute::ModeUsage >::className[] = "StateAttribute_ModeUsage";
const char LunaTraits< osg::StateAttribute::ModeUsage >::fullName[] = "osg::StateAttribute::ModeUsage";
const char LunaTraits< osg::StateAttribute::ModeUsage >::moduleName[] = "osg";
const char* LunaTraits< osg::StateAttribute::ModeUsage >::parents[] = {0};
const int LunaTraits< osg::StateAttribute::ModeUsage >::hash = 48108040;
const int LunaTraits< osg::StateAttribute::ModeUsage >::uniqueIDs[] = {48108040,0};

luna_RegType LunaTraits< osg::StateAttribute::ModeUsage >::methods[] = {
	{"usesMode", &luna_wrapper_osg_StateAttribute_ModeUsage::_bind_usesMode},
	{"usesTextureMode", &luna_wrapper_osg_StateAttribute_ModeUsage::_bind_usesTextureMode},
	{"dynCast", &luna_wrapper_osg_StateAttribute_ModeUsage::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_StateAttribute_ModeUsage::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_StateAttribute_ModeUsage::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_StateAttribute_ModeUsage::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_StateAttribute_ModeUsage::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::StateAttribute::ModeUsage >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::StateAttribute::ModeUsage >::enumValues[] = {
	{0,0}
};


