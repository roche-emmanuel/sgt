#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_ModuleProvider.h>

class luna_wrapper_sgt_ModuleProvider {
public:
	typedef Luna< sgt::ModuleProvider > luna_t;

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

		sgt::ModuleProvider* self= (sgt::ModuleProvider*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::ModuleProvider >::push(L,self,false);
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
		//sgt::ModuleProvider* ptr= dynamic_cast< sgt::ModuleProvider* >(Luna< osg::Referenced >::check(L,1));
		sgt::ModuleProvider* ptr= luna_caster< osg::Referenced, sgt::ModuleProvider >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::ModuleProvider >::push(L,ptr,false);
		return 1;
	};


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
	inline static bool _lg_typecheck_hasModule(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_registerModule(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_unregisterModule(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getModule(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_loadPackage(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
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
	// sgt::ModuleProvider::ModuleProvider()
	static sgt::ModuleProvider* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::ModuleProvider::ModuleProvider() function, expected prototype:\nsgt::ModuleProvider::ModuleProvider()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::ModuleProvider();
	}

	// sgt::ModuleProvider::ModuleProvider(lua_Table * data)
	static sgt::ModuleProvider* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::ModuleProvider::ModuleProvider(lua_Table * data) function, expected prototype:\nsgt::ModuleProvider::ModuleProvider(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_sgt_ModuleProvider(L,NULL);
	}

	// Overload binder for sgt::ModuleProvider::ModuleProvider
	static sgt::ModuleProvider* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ModuleProvider, cannot match any of the overloads for function ModuleProvider:\n  ModuleProvider()\n  ModuleProvider(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// static bool sgt::ModuleProvider::hasModule(const std::string & moduleName)
	static int _bind_hasModule(lua_State *L) {
		if (!_lg_typecheck_hasModule(L)) {
			luaL_error(L, "luna typecheck failed in static bool sgt::ModuleProvider::hasModule(const std::string & moduleName) function, expected prototype:\nstatic bool sgt::ModuleProvider::hasModule(const std::string & moduleName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string moduleName(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = sgt::ModuleProvider::hasModule(moduleName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool sgt::ModuleProvider::registerModule(const std::string & moduleName, const std::string & data)
	static int _bind_registerModule(lua_State *L) {
		if (!_lg_typecheck_registerModule(L)) {
			luaL_error(L, "luna typecheck failed in static bool sgt::ModuleProvider::registerModule(const std::string & moduleName, const std::string & data) function, expected prototype:\nstatic bool sgt::ModuleProvider::registerModule(const std::string & moduleName, const std::string & data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string moduleName(lua_tostring(L,1),lua_objlen(L,1));
		std::string data(lua_tostring(L,2),lua_objlen(L,2));

		bool lret = sgt::ModuleProvider::registerModule(moduleName, data);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static bool sgt::ModuleProvider::unregisterModule(const std::string & moduleName)
	static int _bind_unregisterModule(lua_State *L) {
		if (!_lg_typecheck_unregisterModule(L)) {
			luaL_error(L, "luna typecheck failed in static bool sgt::ModuleProvider::unregisterModule(const std::string & moduleName) function, expected prototype:\nstatic bool sgt::ModuleProvider::unregisterModule(const std::string & moduleName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string moduleName(lua_tostring(L,1),lua_objlen(L,1));

		bool lret = sgt::ModuleProvider::unregisterModule(moduleName);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// static std::string sgt::ModuleProvider::getModule(const std::string & moduleName)
	static int _bind_getModule(lua_State *L) {
		if (!_lg_typecheck_getModule(L)) {
			luaL_error(L, "luna typecheck failed in static std::string sgt::ModuleProvider::getModule(const std::string & moduleName) function, expected prototype:\nstatic std::string sgt::ModuleProvider::getModule(const std::string & moduleName)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string moduleName(lua_tostring(L,1),lua_objlen(L,1));

		std::string lret = sgt::ModuleProvider::getModule(moduleName);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// static void sgt::ModuleProvider::loadPackage(const std::string & packageFile)
	static int _bind_loadPackage(lua_State *L) {
		if (!_lg_typecheck_loadPackage(L)) {
			luaL_error(L, "luna typecheck failed in static void sgt::ModuleProvider::loadPackage(const std::string & packageFile) function, expected prototype:\nstatic void sgt::ModuleProvider::loadPackage(const std::string & packageFile)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string packageFile(lua_tostring(L,1),lua_objlen(L,1));

		sgt::ModuleProvider::loadPackage(packageFile);

		return 0;
	}

	// void sgt::ModuleProvider::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::ModuleProvider::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid sgt::ModuleProvider::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		sgt::ModuleProvider* self=Luna< osg::Referenced >::checkSubType< sgt::ModuleProvider >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::ModuleProvider::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ModuleProvider::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

sgt::ModuleProvider* LunaTraits< sgt::ModuleProvider >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_ModuleProvider::_bind_ctor(L);
}

void LunaTraits< sgt::ModuleProvider >::_bind_dtor(sgt::ModuleProvider* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::ModuleProvider >::className[] = "ModuleProvider";
const char LunaTraits< sgt::ModuleProvider >::fullName[] = "sgt::ModuleProvider";
const char LunaTraits< sgt::ModuleProvider >::moduleName[] = "sgt";
const char* LunaTraits< sgt::ModuleProvider >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< sgt::ModuleProvider >::hash = 28667775;
const int LunaTraits< sgt::ModuleProvider >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::ModuleProvider >::methods[] = {
	{"hasModule", &luna_wrapper_sgt_ModuleProvider::_bind_hasModule},
	{"registerModule", &luna_wrapper_sgt_ModuleProvider::_bind_registerModule},
	{"unregisterModule", &luna_wrapper_sgt_ModuleProvider::_bind_unregisterModule},
	{"getModule", &luna_wrapper_sgt_ModuleProvider::_bind_getModule},
	{"loadPackage", &luna_wrapper_sgt_ModuleProvider::_bind_loadPackage},
	{"base_setThreadSafeRefUnref", &luna_wrapper_sgt_ModuleProvider::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_sgt_ModuleProvider::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_ModuleProvider::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_ModuleProvider::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::ModuleProvider >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_ModuleProvider::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::ModuleProvider >::enumValues[] = {
	{0,0}
};


