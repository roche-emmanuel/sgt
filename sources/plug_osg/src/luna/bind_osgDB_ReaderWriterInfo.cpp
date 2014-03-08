#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_ReaderWriterInfo.h>

class luna_wrapper_osgDB_ReaderWriterInfo {
public:
	typedef Luna< osgDB::ReaderWriterInfo > luna_t;

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

		osgDB::ReaderWriterInfo* self= (osgDB::ReaderWriterInfo*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ReaderWriterInfo >::push(L,self,false);
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
		//osgDB::ReaderWriterInfo* ptr= dynamic_cast< osgDB::ReaderWriterInfo* >(Luna< osg::Referenced >::check(L,1));
		osgDB::ReaderWriterInfo* ptr= luna_caster< osg::Referenced, osgDB::ReaderWriterInfo >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ReaderWriterInfo >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getPlugin(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDescription(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProtocols(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getExtensions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOptions(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFeatures(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setPlugin(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDescription(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setProtocols(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,29293820) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setExtensions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,29293820) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOptions(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,29293820) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setFeatures(lua_State *L) {
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
	// osgDB::ReaderWriterInfo::ReaderWriterInfo()
	static osgDB::ReaderWriterInfo* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriterInfo::ReaderWriterInfo() function, expected prototype:\nosgDB::ReaderWriterInfo::ReaderWriterInfo()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgDB::ReaderWriterInfo();
	}

	// osgDB::ReaderWriterInfo::ReaderWriterInfo(lua_Table * data)
	static osgDB::ReaderWriterInfo* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriterInfo::ReaderWriterInfo(lua_Table * data) function, expected prototype:\nosgDB::ReaderWriterInfo::ReaderWriterInfo(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgDB_ReaderWriterInfo(L,NULL);
	}

	// Overload binder for osgDB::ReaderWriterInfo::ReaderWriterInfo
	static osgDB::ReaderWriterInfo* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ReaderWriterInfo, cannot match any of the overloads for function ReaderWriterInfo:\n  ReaderWriterInfo()\n  ReaderWriterInfo(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// std::string osgDB::ReaderWriterInfo::plugin()
	static int _bind_getPlugin(lua_State *L) {
		if (!_lg_typecheck_getPlugin(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::ReaderWriterInfo::plugin() function, expected prototype:\nstd::string osgDB::ReaderWriterInfo::plugin()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::ReaderWriterInfo::plugin(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->plugin;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// std::string osgDB::ReaderWriterInfo::description()
	static int _bind_getDescription(lua_State *L) {
		if (!_lg_typecheck_getDescription(L)) {
			luaL_error(L, "luna typecheck failed in std::string osgDB::ReaderWriterInfo::description() function, expected prototype:\nstd::string osgDB::ReaderWriterInfo::description()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string osgDB::ReaderWriterInfo::description(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->description;
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// osgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::protocols()
	static int _bind_getProtocols(lua_State *L) {
		if (!_lg_typecheck_getProtocols(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::protocols() function, expected prototype:\nosgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::protocols()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::protocols(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->protocols;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// osgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::extensions()
	static int _bind_getExtensions(lua_State *L) {
		if (!_lg_typecheck_getExtensions(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::extensions() function, expected prototype:\nosgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::extensions()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::extensions(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->extensions;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// osgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::options()
	static int _bind_getOptions(lua_State *L) {
		if (!_lg_typecheck_getOptions(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::options() function, expected prototype:\nosgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::options()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::FormatDescriptionMap osgDB::ReaderWriterInfo::options(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ReaderWriter::FormatDescriptionMap* lret = &self->options;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ReaderWriter::FormatDescriptionMap >::push(L,lret,false);

		return 1;
	}

	// osgDB::ReaderWriter::Features osgDB::ReaderWriterInfo::features()
	static int _bind_getFeatures(lua_State *L) {
		if (!_lg_typecheck_getFeatures(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ReaderWriter::Features osgDB::ReaderWriterInfo::features() function, expected prototype:\nosgDB::ReaderWriter::Features osgDB::ReaderWriterInfo::features()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ReaderWriter::Features osgDB::ReaderWriterInfo::features(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ReaderWriter::Features lret = self->features;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::ReaderWriterInfo::plugin(std::string value)
	static int _bind_setPlugin(lua_State *L) {
		if (!_lg_typecheck_setPlugin(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriterInfo::plugin(std::string value) function, expected prototype:\nvoid osgDB::ReaderWriterInfo::plugin(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriterInfo::plugin(std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->plugin = value;

		return 0;
	}

	// void osgDB::ReaderWriterInfo::description(std::string value)
	static int _bind_setDescription(lua_State *L) {
		if (!_lg_typecheck_setDescription(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriterInfo::description(std::string value) function, expected prototype:\nvoid osgDB::ReaderWriterInfo::description(std::string value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string value(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriterInfo::description(std::string). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->description = value;

		return 0;
	}

	// void osgDB::ReaderWriterInfo::protocols(osgDB::ReaderWriter::FormatDescriptionMap value)
	static int _bind_setProtocols(lua_State *L) {
		if (!_lg_typecheck_setProtocols(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriterInfo::protocols(osgDB::ReaderWriter::FormatDescriptionMap value) function, expected prototype:\nvoid osgDB::ReaderWriterInfo::protocols(osgDB::ReaderWriter::FormatDescriptionMap value)\nClass arguments details:\narg 1 ID = 59830411\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ReaderWriter::FormatDescriptionMap* value_ptr=(Luna< std::map< std::string, std::string > >::checkSubType< osgDB::ReaderWriter::FormatDescriptionMap >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::ReaderWriterInfo::protocols function");
		}
		osgDB::ReaderWriter::FormatDescriptionMap value=*value_ptr;

		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriterInfo::protocols(osgDB::ReaderWriter::FormatDescriptionMap). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->protocols = value;

		return 0;
	}

	// void osgDB::ReaderWriterInfo::extensions(osgDB::ReaderWriter::FormatDescriptionMap value)
	static int _bind_setExtensions(lua_State *L) {
		if (!_lg_typecheck_setExtensions(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriterInfo::extensions(osgDB::ReaderWriter::FormatDescriptionMap value) function, expected prototype:\nvoid osgDB::ReaderWriterInfo::extensions(osgDB::ReaderWriter::FormatDescriptionMap value)\nClass arguments details:\narg 1 ID = 59830411\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ReaderWriter::FormatDescriptionMap* value_ptr=(Luna< std::map< std::string, std::string > >::checkSubType< osgDB::ReaderWriter::FormatDescriptionMap >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::ReaderWriterInfo::extensions function");
		}
		osgDB::ReaderWriter::FormatDescriptionMap value=*value_ptr;

		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriterInfo::extensions(osgDB::ReaderWriter::FormatDescriptionMap). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->extensions = value;

		return 0;
	}

	// void osgDB::ReaderWriterInfo::options(osgDB::ReaderWriter::FormatDescriptionMap value)
	static int _bind_setOptions(lua_State *L) {
		if (!_lg_typecheck_setOptions(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriterInfo::options(osgDB::ReaderWriter::FormatDescriptionMap value) function, expected prototype:\nvoid osgDB::ReaderWriterInfo::options(osgDB::ReaderWriter::FormatDescriptionMap value)\nClass arguments details:\narg 1 ID = 59830411\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ReaderWriter::FormatDescriptionMap* value_ptr=(Luna< std::map< std::string, std::string > >::checkSubType< osgDB::ReaderWriter::FormatDescriptionMap >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgDB::ReaderWriterInfo::options function");
		}
		osgDB::ReaderWriter::FormatDescriptionMap value=*value_ptr;

		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriterInfo::options(osgDB::ReaderWriter::FormatDescriptionMap). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->options = value;

		return 0;
	}

	// void osgDB::ReaderWriterInfo::features(osgDB::ReaderWriter::Features value)
	static int _bind_setFeatures(lua_State *L) {
		if (!_lg_typecheck_setFeatures(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriterInfo::features(osgDB::ReaderWriter::Features value) function, expected prototype:\nvoid osgDB::ReaderWriterInfo::features(osgDB::ReaderWriter::Features value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ReaderWriter::Features value=(osgDB::ReaderWriter::Features)lua_tointeger(L,2);

		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriterInfo::features(osgDB::ReaderWriter::Features). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->features = value;

		return 0;
	}

	// void osgDB::ReaderWriterInfo::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ReaderWriterInfo::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::ReaderWriterInfo::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::ReaderWriterInfo* self=Luna< osg::Referenced >::checkSubType< osgDB::ReaderWriterInfo >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ReaderWriterInfo::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ReaderWriterInfo::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::ReaderWriterInfo* LunaTraits< osgDB::ReaderWriterInfo >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_ReaderWriterInfo::_bind_ctor(L);
}

void LunaTraits< osgDB::ReaderWriterInfo >::_bind_dtor(osgDB::ReaderWriterInfo* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ReaderWriterInfo >::className[] = "ReaderWriterInfo";
const char LunaTraits< osgDB::ReaderWriterInfo >::fullName[] = "osgDB::ReaderWriterInfo";
const char LunaTraits< osgDB::ReaderWriterInfo >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ReaderWriterInfo >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::ReaderWriterInfo >::hash = 61536756;
const int LunaTraits< osgDB::ReaderWriterInfo >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ReaderWriterInfo >::methods[] = {
	{"getPlugin", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_getPlugin},
	{"getDescription", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_getDescription},
	{"getProtocols", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_getProtocols},
	{"getExtensions", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_getExtensions},
	{"getOptions", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_getOptions},
	{"getFeatures", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_getFeatures},
	{"setPlugin", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_setPlugin},
	{"setDescription", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_setDescription},
	{"setProtocols", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_setProtocols},
	{"setExtensions", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_setExtensions},
	{"setOptions", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_setOptions},
	{"setFeatures", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_setFeatures},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_ReaderWriterInfo::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ReaderWriterInfo >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ReaderWriterInfo::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ReaderWriterInfo >::enumValues[] = {
	{0,0}
};


