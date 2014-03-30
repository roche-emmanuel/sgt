#include <plug_common.h>

#include <luna/wrappers/wrapper_sgt_FileLogger.h>

class luna_wrapper_sgt_FileLogger {
public:
	typedef Luna< sgt::FileLogger > luna_t;

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

		sgt::FileLogger* self= (sgt::FileLogger*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< sgt::FileLogger >::push(L,self,false);
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
		//sgt::FileLogger* ptr= dynamic_cast< sgt::FileLogger* >(Luna< osg::Referenced >::check(L,1));
		sgt::FileLogger* ptr= luna_caster< osg::Referenced, sgt::FileLogger >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< sgt::FileLogger >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_type(L,1)!=LUA_TSTRING ) return false;
		if( luatop>1 && lua_isboolean(L,2)==0 ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		if( luatop>3 && lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_output(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_init(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( luatop>2 && lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFilename(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAppending(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_process(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_output(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		if( lua_type(L,4)!=LUA_TSTRING ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// sgt::FileLogger::FileLogger()
	static sgt::FileLogger* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in sgt::FileLogger::FileLogger() function, expected prototype:\nsgt::FileLogger::FileLogger()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new sgt::FileLogger();
	}

	// sgt::FileLogger::FileLogger(const std::string & filename, bool append = false, const std::string & name = "")
	static sgt::FileLogger* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in sgt::FileLogger::FileLogger(const std::string & filename, bool append = false, const std::string & name = \"\") function, expected prototype:\nsgt::FileLogger::FileLogger(const std::string & filename, bool append = false, const std::string & name = \"\")\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,1),lua_objlen(L,1));
		bool append=luatop>1 ? (bool)(lua_toboolean(L,2)==1) : (bool)false;
		std::string name(lua_tostring(L,3),lua_objlen(L,3));

		return new sgt::FileLogger(filename, append, name);
	}

	// sgt::FileLogger::FileLogger(lua_Table * data)
	static sgt::FileLogger* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in sgt::FileLogger::FileLogger(lua_Table * data) function, expected prototype:\nsgt::FileLogger::FileLogger(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_sgt_FileLogger(L,NULL);
	}

	// sgt::FileLogger::FileLogger(lua_Table * data, const std::string & filename, bool append = false, const std::string & name = "")
	static sgt::FileLogger* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in sgt::FileLogger::FileLogger(lua_Table * data, const std::string & filename, bool append = false, const std::string & name = \"\") function, expected prototype:\nsgt::FileLogger::FileLogger(lua_Table * data, const std::string & filename, bool append = false, const std::string & name = \"\")\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		bool append=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;
		std::string name(lua_tostring(L,4),lua_objlen(L,4));

		return new wrapper_sgt_FileLogger(L,NULL, filename, append, name);
	}

	// Overload binder for sgt::FileLogger::FileLogger
	static sgt::FileLogger* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function FileLogger, cannot match any of the overloads for function FileLogger:\n  FileLogger()\n  FileLogger(const std::string &, bool, const std::string &)\n  FileLogger(lua_Table *)\n  FileLogger(lua_Table *, const std::string &, bool, const std::string &)\n");
		return NULL;
	}


	// Function binds:
	// void sgt::FileLogger::output(int level, std::string trace, std::string msg)
	static int _bind_output(lua_State *L) {
		if (!_lg_typecheck_output(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::FileLogger::output(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::FileLogger::output(int level, std::string trace, std::string msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::FileLogger* self=Luna< osg::Referenced >::checkSubType< sgt::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::FileLogger::output(int, std::string, std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->output(level, trace, msg);

		return 0;
	}

	// bool sgt::FileLogger::init(const std::string & filename, bool append = false)
	static int _bind_init(lua_State *L) {
		if (!_lg_typecheck_init(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::FileLogger::init(const std::string & filename, bool append = false) function, expected prototype:\nbool sgt::FileLogger::init(const std::string & filename, bool append = false)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		std::string filename(lua_tostring(L,2),lua_objlen(L,2));
		bool append=luatop>2 ? (bool)(lua_toboolean(L,3)==1) : (bool)false;

		sgt::FileLogger* self=Luna< osg::Referenced >::checkSubType< sgt::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::FileLogger::init(const std::string &, bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->init(filename, append);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// std::string sgt::FileLogger::getFilename()
	static int _bind_getFilename(lua_State *L) {
		if (!_lg_typecheck_getFilename(L)) {
			luaL_error(L, "luna typecheck failed in std::string sgt::FileLogger::getFilename() function, expected prototype:\nstd::string sgt::FileLogger::getFilename()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::FileLogger* self=Luna< osg::Referenced >::checkSubType< sgt::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string sgt::FileLogger::getFilename(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getFilename();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// bool sgt::FileLogger::getAppending()
	static int _bind_getAppending(lua_State *L) {
		if (!_lg_typecheck_getAppending(L)) {
			luaL_error(L, "luna typecheck failed in bool sgt::FileLogger::getAppending() function, expected prototype:\nbool sgt::FileLogger::getAppending()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		sgt::FileLogger* self=Luna< osg::Referenced >::checkSubType< sgt::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool sgt::FileLogger::getAppending(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getAppending();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void sgt::FileLogger::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::FileLogger::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid sgt::FileLogger::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		sgt::FileLogger* self=Luna< osg::Referenced >::checkSubType< sgt::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::FileLogger::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileLogger::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void sgt::FileLogger::base_process(int level, std::string trace, std::string msg)
	static int _bind_base_process(lua_State *L) {
		if (!_lg_typecheck_base_process(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::FileLogger::base_process(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::FileLogger::base_process(int level, std::string trace, std::string msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::FileLogger* self=Luna< osg::Referenced >::checkSubType< sgt::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::FileLogger::base_process(int, std::string, std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileLogger::process(level, trace, msg);

		return 0;
	}

	// void sgt::FileLogger::base_output(int level, std::string trace, std::string msg)
	static int _bind_base_output(lua_State *L) {
		if (!_lg_typecheck_base_output(L)) {
			luaL_error(L, "luna typecheck failed in void sgt::FileLogger::base_output(int level, std::string trace, std::string msg) function, expected prototype:\nvoid sgt::FileLogger::base_output(int level, std::string trace, std::string msg)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int level=(int)lua_tointeger(L,2);
		std::string trace(lua_tostring(L,3),lua_objlen(L,3));
		std::string msg(lua_tostring(L,4),lua_objlen(L,4));

		sgt::FileLogger* self=Luna< osg::Referenced >::checkSubType< sgt::FileLogger >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void sgt::FileLogger::base_output(int, std::string, std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->FileLogger::output(level, trace, msg);

		return 0;
	}


	// Operator binds:

};

sgt::FileLogger* LunaTraits< sgt::FileLogger >::_bind_ctor(lua_State *L) {
	return luna_wrapper_sgt_FileLogger::_bind_ctor(L);
}

void LunaTraits< sgt::FileLogger >::_bind_dtor(sgt::FileLogger* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< sgt::FileLogger >::className[] = "FileLogger";
const char LunaTraits< sgt::FileLogger >::fullName[] = "sgt::FileLogger";
const char LunaTraits< sgt::FileLogger >::moduleName[] = "sgt";
const char* LunaTraits< sgt::FileLogger >::parents[] = {"sgt.LogSink", 0};
const int LunaTraits< sgt::FileLogger >::hash = 37776665;
const int LunaTraits< sgt::FileLogger >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< sgt::FileLogger >::methods[] = {
	{"output", &luna_wrapper_sgt_FileLogger::_bind_output},
	{"init", &luna_wrapper_sgt_FileLogger::_bind_init},
	{"getFilename", &luna_wrapper_sgt_FileLogger::_bind_getFilename},
	{"getAppending", &luna_wrapper_sgt_FileLogger::_bind_getAppending},
	{"base_setThreadSafeRefUnref", &luna_wrapper_sgt_FileLogger::_bind_base_setThreadSafeRefUnref},
	{"base_process", &luna_wrapper_sgt_FileLogger::_bind_base_process},
	{"base_output", &luna_wrapper_sgt_FileLogger::_bind_base_output},
	{"fromVoid", &luna_wrapper_sgt_FileLogger::_bind_fromVoid},
	{"asVoid", &luna_wrapper_sgt_FileLogger::_bind_asVoid},
	{"getTable", &luna_wrapper_sgt_FileLogger::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< sgt::FileLogger >::converters[] = {
	{"osg::Referenced", &luna_wrapper_sgt_FileLogger::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< sgt::FileLogger >::enumValues[] = {
	{0,0}
};


