#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_FileLocationCallback.h>

class luna_wrapper_osgDB_FileLocationCallback {
public:
	typedef Luna< osgDB::FileLocationCallback > luna_t;

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

		osgDB::FileLocationCallback* self= (osgDB::FileLocationCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::FileLocationCallback >::push(L,self,false);
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
		//osgDB::FileLocationCallback* ptr= dynamic_cast< osgDB::FileLocationCallback* >(Luna< osg::Referenced >::check(L,1));
		osgDB::FileLocationCallback* ptr= luna_caster< osg::Referenced, osgDB::FileLocationCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::FileLocationCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_fileLocation(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_useFileCache(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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
	// osgDB::FileLocationCallback::FileLocationCallback(lua_Table * data)
	static osgDB::FileLocationCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FileLocationCallback::FileLocationCallback(lua_Table * data) function, expected prototype:\nosgDB::FileLocationCallback::FileLocationCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_FileLocationCallback(L,NULL);
	}


	// Function binds:
	// osgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string & filename, const osgDB::Options * options)
	static int _bind_fileLocation(lua_State *L) {
		if (!_lg_typecheck_fileLocation(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string & filename, const osgDB::Options * options) function, expected prototype:\nosgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string & filename, const osgDB::Options * options)\nClass arguments details:\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		const osgDB::Options* options=(Luna< osg::Referenced >::checkSubType< osgDB::Options >(L,3));

		osgDB::FileLocationCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::FileLocationCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string &, const osgDB::Options *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::FileLocationCallback::Location lret = self->fileLocation(filename, options);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgDB::FileLocationCallback::useFileCache() const
	static int _bind_useFileCache(lua_State *L) {
		if (!_lg_typecheck_useFileCache(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::FileLocationCallback::useFileCache() const function, expected prototype:\nbool osgDB::FileLocationCallback::useFileCache() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::FileLocationCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::FileLocationCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::FileLocationCallback::useFileCache() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->useFileCache();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgDB::FileLocationCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::FileLocationCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::FileLocationCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::FileLocationCallback* self=Luna< osg::Referenced >::checkSubType< osgDB::FileLocationCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::FileLocationCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileLocationCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::FileLocationCallback* LunaTraits< osgDB::FileLocationCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_FileLocationCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// osgDB::FileLocationCallback::Location osgDB::FileLocationCallback::fileLocation(const std::string & filename, const osgDB::Options * options)
	// bool osgDB::FileLocationCallback::useFileCache() const
}

void LunaTraits< osgDB::FileLocationCallback >::_bind_dtor(osgDB::FileLocationCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::FileLocationCallback >::className[] = "FileLocationCallback";
const char LunaTraits< osgDB::FileLocationCallback >::fullName[] = "osgDB::FileLocationCallback";
const char LunaTraits< osgDB::FileLocationCallback >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::FileLocationCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::FileLocationCallback >::hash = 24950336;
const int LunaTraits< osgDB::FileLocationCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::FileLocationCallback >::methods[] = {
	{"fileLocation", &luna_wrapper_osgDB_FileLocationCallback::_bind_fileLocation},
	{"useFileCache", &luna_wrapper_osgDB_FileLocationCallback::_bind_useFileCache},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_FileLocationCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgDB_FileLocationCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_FileLocationCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_FileLocationCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::FileLocationCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_FileLocationCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::FileLocationCallback >::enumValues[] = {
	{"LOCAL_FILE", osgDB::FileLocationCallback::LOCAL_FILE},
	{"REMOTE_FILE", osgDB::FileLocationCallback::REMOTE_FILE},
	{0,0}
};


