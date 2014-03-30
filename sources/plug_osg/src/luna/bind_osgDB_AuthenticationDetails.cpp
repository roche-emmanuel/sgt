#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_AuthenticationDetails.h>

class luna_wrapper_osgDB_AuthenticationDetails {
public:
	typedef Luna< osgDB::AuthenticationDetails > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<osg::Referenced,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
		if(wrapper) {
			CHECK_RET(wrapper->pushTable(),0,"Cannot push table from value wrapper.");
			return 1;
		}
		return 0;
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

		osgDB::AuthenticationDetails* self= (osgDB::AuthenticationDetails*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::AuthenticationDetails >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,50169651) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Referenced(lua_State *L) {
		// all checked are already performed before reaching this point.
		//osgDB::AuthenticationDetails* ptr= dynamic_cast< osgDB::AuthenticationDetails* >(Luna< osg::Referenced >::check(L,1));
		osgDB::AuthenticationDetails* ptr= luna_caster< osg::Referenced, osgDB::AuthenticationDetails >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::AuthenticationDetails >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( luatop>3 && (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getUsername(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPassword(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getHttpAuthentication(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUsername(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPassword(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setHttpAuthentication(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::AuthenticationDetails::AuthenticationDetails(const std::string & u, const std::string & p, osgDB::AuthenticationDetails::HttpAuthentication auth = osgDB::AuthenticationDetails::BASIC)
	static osgDB::AuthenticationDetails* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::AuthenticationDetails::AuthenticationDetails(const std::string & u, const std::string & p, osgDB::AuthenticationDetails::HttpAuthentication auth = osgDB::AuthenticationDetails::BASIC) function, expected prototype:\nosgDB::AuthenticationDetails::AuthenticationDetails(const std::string & u, const std::string & p, osgDB::AuthenticationDetails::HttpAuthentication auth = osgDB::AuthenticationDetails::BASIC)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string u(lua_tostring(L,1),lua_objlen(L,1));
		std::string p(lua_tostring(L,2),lua_objlen(L,2));
		osgDB::AuthenticationDetails::HttpAuthentication auth=luatop>2 ? (osgDB::AuthenticationDetails::HttpAuthentication)lua_tointeger(L,3) : (osgDB::AuthenticationDetails::HttpAuthentication)osgDB::AuthenticationDetails::BASIC;

		return new osgDB::AuthenticationDetails(u, p, auth);
	}

	// osgDB::AuthenticationDetails::AuthenticationDetails(lua_Table * data, const std::string & u, const std::string & p, osgDB::AuthenticationDetails::HttpAuthentication auth = osgDB::AuthenticationDetails::BASIC)
	static osgDB::AuthenticationDetails* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::AuthenticationDetails::AuthenticationDetails(lua_Table * data, const std::string & u, const std::string & p, osgDB::AuthenticationDetails::HttpAuthentication auth = osgDB::AuthenticationDetails::BASIC) function, expected prototype:\nosgDB::AuthenticationDetails::AuthenticationDetails(lua_Table * data, const std::string & u, const std::string & p, osgDB::AuthenticationDetails::HttpAuthentication auth = osgDB::AuthenticationDetails::BASIC)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string u(lua_tostring(L,2),lua_objlen(L,2));
		std::string p(lua_tostring(L,3),lua_objlen(L,3));
		osgDB::AuthenticationDetails::HttpAuthentication auth=luatop>3 ? (osgDB::AuthenticationDetails::HttpAuthentication)lua_tointeger(L,4) : (osgDB::AuthenticationDetails::HttpAuthentication)osgDB::AuthenticationDetails::BASIC;

		return new wrapper_osgDB_AuthenticationDetails(L,NULL, u, p, auth);
	}

	// Overload binder for osgDB::AuthenticationDetails::AuthenticationDetails
	static osgDB::AuthenticationDetails* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function AuthenticationDetails, cannot match any of the overloads for function AuthenticationDetails:\n  AuthenticationDetails(const std::string &, const std::string &, osgDB::AuthenticationDetails::HttpAuthentication)\n  AuthenticationDetails(lua_Table *, const std::string &, const std::string &, osgDB::AuthenticationDetails::HttpAuthentication)\n");
		return NULL;
	}


	// Function binds:
	// std::string osgDB::AuthenticationDetails::username()
	static int _bind_getUsername(lua_State *L) {
		if (!_lg_typecheck_getUsername(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::AuthenticationDetails::username() function, expected prototype:\nstd::string osgDB::AuthenticationDetails::username()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::AuthenticationDetails* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationDetails >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::AuthenticationDetails::username(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->username;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::AuthenticationDetails::password()
	static int _bind_getPassword(lua_State *L) {
		if (!_lg_typecheck_getPassword(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::AuthenticationDetails::password() function, expected prototype:\nstd::string osgDB::AuthenticationDetails::password()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::AuthenticationDetails* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationDetails >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::AuthenticationDetails::password(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->password;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// osgDB::AuthenticationDetails::HttpAuthentication osgDB::AuthenticationDetails::httpAuthentication()
	static int _bind_getHttpAuthentication(lua_State *L) {
		if (!_lg_typecheck_getHttpAuthentication(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::AuthenticationDetails::HttpAuthentication osgDB::AuthenticationDetails::httpAuthentication() function, expected prototype:\nosgDB::AuthenticationDetails::HttpAuthentication osgDB::AuthenticationDetails::httpAuthentication()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::AuthenticationDetails* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationDetails >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::AuthenticationDetails::HttpAuthentication osgDB::AuthenticationDetails::httpAuthentication(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::AuthenticationDetails::HttpAuthentication lret = self->httpAuthentication;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::AuthenticationDetails::username(std::string value)
	static int _bind_setUsername(lua_State *L) {
		if (!_lg_typecheck_setUsername(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::AuthenticationDetails::username(std::string value) function, expected prototype:\nvoid osgDB::AuthenticationDetails::username(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::AuthenticationDetails* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationDetails >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::AuthenticationDetails::username(std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->username = value;

		return 0;
	}

	// void osgDB::AuthenticationDetails::password(std::string value)
	static int _bind_setPassword(lua_State *L) {
		if (!_lg_typecheck_setPassword(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::AuthenticationDetails::password(std::string value) function, expected prototype:\nvoid osgDB::AuthenticationDetails::password(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::AuthenticationDetails* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationDetails >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::AuthenticationDetails::password(std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->password = value;

		return 0;
	}

	// void osgDB::AuthenticationDetails::httpAuthentication(osgDB::AuthenticationDetails::HttpAuthentication value)
	static int _bind_setHttpAuthentication(lua_State *L) {
		if (!_lg_typecheck_setHttpAuthentication(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::AuthenticationDetails::httpAuthentication(osgDB::AuthenticationDetails::HttpAuthentication value) function, expected prototype:\nvoid osgDB::AuthenticationDetails::httpAuthentication(osgDB::AuthenticationDetails::HttpAuthentication value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::AuthenticationDetails::HttpAuthentication value=(osgDB::AuthenticationDetails::HttpAuthentication)lua_tointeger(L,2);

		osgDB::AuthenticationDetails* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationDetails >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::AuthenticationDetails::httpAuthentication(osgDB::AuthenticationDetails::HttpAuthentication). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->httpAuthentication = value;

		return 0;
	}

	// void osgDB::AuthenticationDetails::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::AuthenticationDetails::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::AuthenticationDetails::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::AuthenticationDetails* self=Luna< osg::Referenced >::checkSubType< osgDB::AuthenticationDetails >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::AuthenticationDetails::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->AuthenticationDetails::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::AuthenticationDetails* LunaTraits< osgDB::AuthenticationDetails >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_AuthenticationDetails::_bind_ctor(L);
}

void LunaTraits< osgDB::AuthenticationDetails >::_bind_dtor(osgDB::AuthenticationDetails* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::AuthenticationDetails >::className[] = "AuthenticationDetails";
const char LunaTraits< osgDB::AuthenticationDetails >::fullName[] = "osgDB::AuthenticationDetails";
const char LunaTraits< osgDB::AuthenticationDetails >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::AuthenticationDetails >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::AuthenticationDetails >::hash = 16438336;
const int LunaTraits< osgDB::AuthenticationDetails >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::AuthenticationDetails >::methods[] = {
	{"getUsername", &luna_wrapper_osgDB_AuthenticationDetails::_bind_getUsername},
	{"getPassword", &luna_wrapper_osgDB_AuthenticationDetails::_bind_getPassword},
	{"getHttpAuthentication", &luna_wrapper_osgDB_AuthenticationDetails::_bind_getHttpAuthentication},
	{"setUsername", &luna_wrapper_osgDB_AuthenticationDetails::_bind_setUsername},
	{"setPassword", &luna_wrapper_osgDB_AuthenticationDetails::_bind_setPassword},
	{"setHttpAuthentication", &luna_wrapper_osgDB_AuthenticationDetails::_bind_setHttpAuthentication},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_AuthenticationDetails::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgDB_AuthenticationDetails::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_AuthenticationDetails::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_AuthenticationDetails::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::AuthenticationDetails >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_AuthenticationDetails::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::AuthenticationDetails >::enumValues[] = {
	{"BASIC", osgDB::AuthenticationDetails::BASIC},
	{"DIGEST", osgDB::AuthenticationDetails::DIGEST},
	{"NTLM", osgDB::AuthenticationDetails::NTLM},
	{"GSSNegotiate", osgDB::AuthenticationDetails::GSSNegotiate},
	{"ANY", osgDB::AuthenticationDetails::ANY},
	{"ANYSAFE", osgDB::AuthenticationDetails::ANYSAFE},
	{0,0}
};


