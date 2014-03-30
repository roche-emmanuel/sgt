#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_ObjectWrapperManager.h>

class luna_wrapper_osgDB_ObjectWrapperManager {
public:
	typedef Luna< osgDB::ObjectWrapperManager > luna_t;

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

		osgDB::ObjectWrapperManager* self= (osgDB::ObjectWrapperManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::ObjectWrapperManager >::push(L,self,false);
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
		//osgDB::ObjectWrapperManager* ptr= dynamic_cast< osgDB::ObjectWrapperManager* >(Luna< osg::Referenced >::check(L,1));
		osgDB::ObjectWrapperManager* ptr= luna_caster< osg::Referenced, osgDB::ObjectWrapperManager >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::ObjectWrapperManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_addWrapper(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeWrapper(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findWrapper(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWrapperMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWrapperMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addCompressor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeCompressor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_findCompressor(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCompressorMap_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCompressorMap_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getValue(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( lua_type(L,3)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getString(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
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

	// Function binds:
	// void osgDB::ObjectWrapperManager::addWrapper(osgDB::ObjectWrapper * wrapper)
	static int _bind_addWrapper(lua_State *L) {
		if (!_lg_typecheck_addWrapper(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapperManager::addWrapper(osgDB::ObjectWrapper * wrapper) function, expected prototype:\nvoid osgDB::ObjectWrapperManager::addWrapper(osgDB::ObjectWrapper * wrapper)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ObjectWrapper* wrapper=(Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,2));

		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapperManager::addWrapper(osgDB::ObjectWrapper *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addWrapper(wrapper);

		return 0;
	}

	// void osgDB::ObjectWrapperManager::removeWrapper(osgDB::ObjectWrapper * wrapper)
	static int _bind_removeWrapper(lua_State *L) {
		if (!_lg_typecheck_removeWrapper(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapperManager::removeWrapper(osgDB::ObjectWrapper * wrapper) function, expected prototype:\nvoid osgDB::ObjectWrapperManager::removeWrapper(osgDB::ObjectWrapper * wrapper)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ObjectWrapper* wrapper=(Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapper >(L,2));

		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapperManager::removeWrapper(osgDB::ObjectWrapper *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeWrapper(wrapper);

		return 0;
	}

	// osgDB::ObjectWrapper * osgDB::ObjectWrapperManager::findWrapper(const std::string & name)
	static int _bind_findWrapper(lua_State *L) {
		if (!_lg_typecheck_findWrapper(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectWrapper * osgDB::ObjectWrapperManager::findWrapper(const std::string & name) function, expected prototype:\nosgDB::ObjectWrapper * osgDB::ObjectWrapperManager::findWrapper(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ObjectWrapper * osgDB::ObjectWrapperManager::findWrapper(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ObjectWrapper * lret = self->findWrapper(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ObjectWrapper >::push(L,lret,false);

		return 1;
	}

	// osgDB::ObjectWrapperManager::WrapperMap & osgDB::ObjectWrapperManager::getWrapperMap()
	static int _bind_getWrapperMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getWrapperMap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectWrapperManager::WrapperMap & osgDB::ObjectWrapperManager::getWrapperMap() function, expected prototype:\nosgDB::ObjectWrapperManager::WrapperMap & osgDB::ObjectWrapperManager::getWrapperMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ObjectWrapperManager::WrapperMap & osgDB::ObjectWrapperManager::getWrapperMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ObjectWrapperManager::WrapperMap* lret = &self->getWrapperMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ObjectWrapperManager::WrapperMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ObjectWrapperManager::WrapperMap & osgDB::ObjectWrapperManager::getWrapperMap() const
	static int _bind_getWrapperMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getWrapperMap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ObjectWrapperManager::WrapperMap & osgDB::ObjectWrapperManager::getWrapperMap() const function, expected prototype:\nconst osgDB::ObjectWrapperManager::WrapperMap & osgDB::ObjectWrapperManager::getWrapperMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ObjectWrapperManager::WrapperMap & osgDB::ObjectWrapperManager::getWrapperMap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ObjectWrapperManager::WrapperMap* lret = &self->getWrapperMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ObjectWrapperManager::WrapperMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::ObjectWrapperManager::getWrapperMap
	static int _bind_getWrapperMap(lua_State *L) {
		if (_lg_typecheck_getWrapperMap_overload_1(L)) return _bind_getWrapperMap_overload_1(L);
		if (_lg_typecheck_getWrapperMap_overload_2(L)) return _bind_getWrapperMap_overload_2(L);

		luaL_error(L, "error in function getWrapperMap, cannot match any of the overloads for function getWrapperMap:\n  getWrapperMap()\n  getWrapperMap()\n");
		return 0;
	}

	// void osgDB::ObjectWrapperManager::addCompressor(osgDB::BaseCompressor * compressor)
	static int _bind_addCompressor(lua_State *L) {
		if (!_lg_typecheck_addCompressor(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapperManager::addCompressor(osgDB::BaseCompressor * compressor) function, expected prototype:\nvoid osgDB::ObjectWrapperManager::addCompressor(osgDB::BaseCompressor * compressor)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::BaseCompressor* compressor=(Luna< osg::Referenced >::checkSubType< osgDB::BaseCompressor >(L,2));

		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapperManager::addCompressor(osgDB::BaseCompressor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addCompressor(compressor);

		return 0;
	}

	// void osgDB::ObjectWrapperManager::removeCompressor(osgDB::BaseCompressor * compressor)
	static int _bind_removeCompressor(lua_State *L) {
		if (!_lg_typecheck_removeCompressor(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapperManager::removeCompressor(osgDB::BaseCompressor * compressor) function, expected prototype:\nvoid osgDB::ObjectWrapperManager::removeCompressor(osgDB::BaseCompressor * compressor)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::BaseCompressor* compressor=(Luna< osg::Referenced >::checkSubType< osgDB::BaseCompressor >(L,2));

		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapperManager::removeCompressor(osgDB::BaseCompressor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeCompressor(compressor);

		return 0;
	}

	// osgDB::BaseCompressor * osgDB::ObjectWrapperManager::findCompressor(const std::string & name)
	static int _bind_findCompressor(lua_State *L) {
		if (!_lg_typecheck_findCompressor(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::BaseCompressor * osgDB::ObjectWrapperManager::findCompressor(const std::string & name) function, expected prototype:\nosgDB::BaseCompressor * osgDB::ObjectWrapperManager::findCompressor(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::BaseCompressor * osgDB::ObjectWrapperManager::findCompressor(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::BaseCompressor * lret = self->findCompressor(name);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::BaseCompressor >::push(L,lret,false);

		return 1;
	}

	// osgDB::ObjectWrapperManager::CompressorMap & osgDB::ObjectWrapperManager::getCompressorMap()
	static int _bind_getCompressorMap_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCompressorMap_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ObjectWrapperManager::CompressorMap & osgDB::ObjectWrapperManager::getCompressorMap() function, expected prototype:\nosgDB::ObjectWrapperManager::CompressorMap & osgDB::ObjectWrapperManager::getCompressorMap()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ObjectWrapperManager::CompressorMap & osgDB::ObjectWrapperManager::getCompressorMap(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ObjectWrapperManager::CompressorMap* lret = &self->getCompressorMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ObjectWrapperManager::CompressorMap >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ObjectWrapperManager::CompressorMap & osgDB::ObjectWrapperManager::getCompressorMap() const
	static int _bind_getCompressorMap_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCompressorMap_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ObjectWrapperManager::CompressorMap & osgDB::ObjectWrapperManager::getCompressorMap() const function, expected prototype:\nconst osgDB::ObjectWrapperManager::CompressorMap & osgDB::ObjectWrapperManager::getCompressorMap() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ObjectWrapperManager::CompressorMap & osgDB::ObjectWrapperManager::getCompressorMap() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ObjectWrapperManager::CompressorMap* lret = &self->getCompressorMap();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ObjectWrapperManager::CompressorMap >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgDB::ObjectWrapperManager::getCompressorMap
	static int _bind_getCompressorMap(lua_State *L) {
		if (_lg_typecheck_getCompressorMap_overload_1(L)) return _bind_getCompressorMap_overload_1(L);
		if (_lg_typecheck_getCompressorMap_overload_2(L)) return _bind_getCompressorMap_overload_2(L);

		luaL_error(L, "error in function getCompressorMap, cannot match any of the overloads for function getCompressorMap:\n  getCompressorMap()\n  getCompressorMap()\n");
		return 0;
	}

	// int osgDB::ObjectWrapperManager::getValue(const std::string & group, const std::string & str)
	static int _bind_getValue(lua_State *L) {
		if (!_lg_typecheck_getValue(L)) {
			luaL_error(L, "luna typecheck failed in int osgDB::ObjectWrapperManager::getValue(const std::string & group, const std::string & str) function, expected prototype:\nint osgDB::ObjectWrapperManager::getValue(const std::string & group, const std::string & str)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string group(lua_tostring(L,2),lua_objlen(L,2));
		std::string str(lua_tostring(L,3),lua_objlen(L,3));

		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call int osgDB::ObjectWrapperManager::getValue(const std::string &, const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		int lret = self->getValue(group, str);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const std::string & osgDB::ObjectWrapperManager::getString(const std::string & group, int value)
	static int _bind_getString(lua_State *L) {
		if (!_lg_typecheck_getString(L)) {
			luaL_error(L, "luna typecheck failed in const std::string & osgDB::ObjectWrapperManager::getString(const std::string & group, int value) function, expected prototype:\nconst std::string & osgDB::ObjectWrapperManager::getString(const std::string & group, int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string group(lua_tostring(L,2),lua_objlen(L,2));
		int value=(int)lua_tointeger(L,3);

		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const std::string & osgDB::ObjectWrapperManager::getString(const std::string &, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const std::string & lret = self->getString(group, value);
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void osgDB::ObjectWrapperManager::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::ObjectWrapperManager::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::ObjectWrapperManager::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::ObjectWrapperManager* self=Luna< osg::Referenced >::checkSubType< osgDB::ObjectWrapperManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::ObjectWrapperManager::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ObjectWrapperManager::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgDB::ObjectWrapperManager* LunaTraits< osgDB::ObjectWrapperManager >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgDB::ObjectWrapperManager >::_bind_dtor(osgDB::ObjectWrapperManager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::ObjectWrapperManager >::className[] = "ObjectWrapperManager";
const char LunaTraits< osgDB::ObjectWrapperManager >::fullName[] = "osgDB::ObjectWrapperManager";
const char LunaTraits< osgDB::ObjectWrapperManager >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::ObjectWrapperManager >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgDB::ObjectWrapperManager >::hash = 11391365;
const int LunaTraits< osgDB::ObjectWrapperManager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::ObjectWrapperManager >::methods[] = {
	{"addWrapper", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_addWrapper},
	{"removeWrapper", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_removeWrapper},
	{"findWrapper", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_findWrapper},
	{"getWrapperMap", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_getWrapperMap},
	{"addCompressor", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_addCompressor},
	{"removeCompressor", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_removeCompressor},
	{"findCompressor", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_findCompressor},
	{"getCompressorMap", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_getCompressorMap},
	{"getValue", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_getValue},
	{"getString", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_getString},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_ObjectWrapperManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::ObjectWrapperManager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_ObjectWrapperManager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::ObjectWrapperManager >::enumValues[] = {
	{0,0}
};


