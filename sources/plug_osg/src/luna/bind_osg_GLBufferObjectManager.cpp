#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GLBufferObjectManager.h>

class luna_wrapper_osg_GLBufferObjectManager {
public:
	typedef Luna< osg::GLBufferObjectManager > luna_t;

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

		osg::GLBufferObjectManager* self= (osg::GLBufferObjectManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::GLBufferObjectManager >::push(L,self,false);
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
		//osg::GLBufferObjectManager* ptr= dynamic_cast< osg::GLBufferObjectManager* >(Luna< osg::Referenced >::check(L,1));
		osg::GLBufferObjectManager* ptr= luna_caster< osg::Referenced, osg::GLBufferObjectManager >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GLBufferObjectManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getContextID(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumberActiveGLBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberActiveGLBufferObjects_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberActiveGLBufferObjects_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNumberOrphanedGLBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNumberOrphanedGLBufferObjects_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberOrphanedGLBufferObjects_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCurrGLBufferObjectPoolSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrGLBufferObjectPoolSize_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getCurrGLBufferObjectPoolSize_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setMaxGLBufferObjectPoolSize(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getMaxGLBufferObjectPoolSize(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_hasSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_generateGLBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handlePendingOrphandedGLBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_deleteAllGLBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_discardAllGLBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flushAllDeletedGLBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_discardAllDeletedGLBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_flushDeletedGLBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLBufferObject(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGLBufferObjectSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,12032151) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_newFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_resetStats(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reportStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_recomputeStats(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2993706) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberFrames(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberDeleted(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDeleteTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberGenerated(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGenerateTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumberApplied(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getApplyTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getGLBufferObjectManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
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
	// osg::GLBufferObjectManager::GLBufferObjectManager(unsigned int contextID)
	static osg::GLBufferObjectManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObjectManager::GLBufferObjectManager(unsigned int contextID) function, expected prototype:\nosg::GLBufferObjectManager::GLBufferObjectManager(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		return new osg::GLBufferObjectManager(contextID);
	}

	// osg::GLBufferObjectManager::GLBufferObjectManager(lua_Table * data, unsigned int contextID)
	static osg::GLBufferObjectManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObjectManager::GLBufferObjectManager(lua_Table * data, unsigned int contextID) function, expected prototype:\nosg::GLBufferObjectManager::GLBufferObjectManager(lua_Table * data, unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,2);

		return new wrapper_osg_GLBufferObjectManager(L,NULL, contextID);
	}

	// Overload binder for osg::GLBufferObjectManager::GLBufferObjectManager
	static osg::GLBufferObjectManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GLBufferObjectManager, cannot match any of the overloads for function GLBufferObjectManager:\n  GLBufferObjectManager(unsigned int)\n  GLBufferObjectManager(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// unsigned int osg::GLBufferObjectManager::getContextID() const
	static int _bind_getContextID(lua_State *L) {
		if (!_lg_typecheck_getContextID(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObjectManager::getContextID() const function, expected prototype:\nunsigned int osg::GLBufferObjectManager::getContextID() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObjectManager::getContextID() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getContextID();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GLBufferObjectManager::setNumberActiveGLBufferObjects(unsigned int size)
	static int _bind_setNumberActiveGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_setNumberActiveGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::setNumberActiveGLBufferObjects(unsigned int size) function, expected prototype:\nvoid osg::GLBufferObjectManager::setNumberActiveGLBufferObjects(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::setNumberActiveGLBufferObjects(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumberActiveGLBufferObjects(size);

		return 0;
	}

	// unsigned int & osg::GLBufferObjectManager::getNumberActiveGLBufferObjects()
	static int _bind_getNumberActiveGLBufferObjects_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNumberActiveGLBufferObjects_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::GLBufferObjectManager::getNumberActiveGLBufferObjects() function, expected prototype:\nunsigned int & osg::GLBufferObjectManager::getNumberActiveGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::GLBufferObjectManager::getNumberActiveGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getNumberActiveGLBufferObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GLBufferObjectManager::getNumberActiveGLBufferObjects() const
	static int _bind_getNumberActiveGLBufferObjects_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNumberActiveGLBufferObjects_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObjectManager::getNumberActiveGLBufferObjects() const function, expected prototype:\nunsigned int osg::GLBufferObjectManager::getNumberActiveGLBufferObjects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObjectManager::getNumberActiveGLBufferObjects() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumberActiveGLBufferObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::GLBufferObjectManager::getNumberActiveGLBufferObjects
	static int _bind_getNumberActiveGLBufferObjects(lua_State *L) {
		if (_lg_typecheck_getNumberActiveGLBufferObjects_overload_1(L)) return _bind_getNumberActiveGLBufferObjects_overload_1(L);
		if (_lg_typecheck_getNumberActiveGLBufferObjects_overload_2(L)) return _bind_getNumberActiveGLBufferObjects_overload_2(L);

		luaL_error(L, "error in function getNumberActiveGLBufferObjects, cannot match any of the overloads for function getNumberActiveGLBufferObjects:\n  getNumberActiveGLBufferObjects()\n  getNumberActiveGLBufferObjects()\n");
		return 0;
	}

	// void osg::GLBufferObjectManager::setNumberOrphanedGLBufferObjects(unsigned int size)
	static int _bind_setNumberOrphanedGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_setNumberOrphanedGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::setNumberOrphanedGLBufferObjects(unsigned int size) function, expected prototype:\nvoid osg::GLBufferObjectManager::setNumberOrphanedGLBufferObjects(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::setNumberOrphanedGLBufferObjects(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNumberOrphanedGLBufferObjects(size);

		return 0;
	}

	// unsigned int & osg::GLBufferObjectManager::getNumberOrphanedGLBufferObjects()
	static int _bind_getNumberOrphanedGLBufferObjects_overload_1(lua_State *L) {
		if (!_lg_typecheck_getNumberOrphanedGLBufferObjects_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::GLBufferObjectManager::getNumberOrphanedGLBufferObjects() function, expected prototype:\nunsigned int & osg::GLBufferObjectManager::getNumberOrphanedGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::GLBufferObjectManager::getNumberOrphanedGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getNumberOrphanedGLBufferObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GLBufferObjectManager::getNumberOrphanedGLBufferObjects() const
	static int _bind_getNumberOrphanedGLBufferObjects_overload_2(lua_State *L) {
		if (!_lg_typecheck_getNumberOrphanedGLBufferObjects_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObjectManager::getNumberOrphanedGLBufferObjects() const function, expected prototype:\nunsigned int osg::GLBufferObjectManager::getNumberOrphanedGLBufferObjects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObjectManager::getNumberOrphanedGLBufferObjects() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumberOrphanedGLBufferObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::GLBufferObjectManager::getNumberOrphanedGLBufferObjects
	static int _bind_getNumberOrphanedGLBufferObjects(lua_State *L) {
		if (_lg_typecheck_getNumberOrphanedGLBufferObjects_overload_1(L)) return _bind_getNumberOrphanedGLBufferObjects_overload_1(L);
		if (_lg_typecheck_getNumberOrphanedGLBufferObjects_overload_2(L)) return _bind_getNumberOrphanedGLBufferObjects_overload_2(L);

		luaL_error(L, "error in function getNumberOrphanedGLBufferObjects, cannot match any of the overloads for function getNumberOrphanedGLBufferObjects:\n  getNumberOrphanedGLBufferObjects()\n  getNumberOrphanedGLBufferObjects()\n");
		return 0;
	}

	// void osg::GLBufferObjectManager::setCurrGLBufferObjectPoolSize(unsigned int size)
	static int _bind_setCurrGLBufferObjectPoolSize(lua_State *L) {
		if (!_lg_typecheck_setCurrGLBufferObjectPoolSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::setCurrGLBufferObjectPoolSize(unsigned int size) function, expected prototype:\nvoid osg::GLBufferObjectManager::setCurrGLBufferObjectPoolSize(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::setCurrGLBufferObjectPoolSize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCurrGLBufferObjectPoolSize(size);

		return 0;
	}

	// unsigned int & osg::GLBufferObjectManager::getCurrGLBufferObjectPoolSize()
	static int _bind_getCurrGLBufferObjectPoolSize_overload_1(lua_State *L) {
		if (!_lg_typecheck_getCurrGLBufferObjectPoolSize_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::GLBufferObjectManager::getCurrGLBufferObjectPoolSize() function, expected prototype:\nunsigned int & osg::GLBufferObjectManager::getCurrGLBufferObjectPoolSize()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::GLBufferObjectManager::getCurrGLBufferObjectPoolSize(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getCurrGLBufferObjectPoolSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GLBufferObjectManager::getCurrGLBufferObjectPoolSize() const
	static int _bind_getCurrGLBufferObjectPoolSize_overload_2(lua_State *L) {
		if (!_lg_typecheck_getCurrGLBufferObjectPoolSize_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObjectManager::getCurrGLBufferObjectPoolSize() const function, expected prototype:\nunsigned int osg::GLBufferObjectManager::getCurrGLBufferObjectPoolSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObjectManager::getCurrGLBufferObjectPoolSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getCurrGLBufferObjectPoolSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for osg::GLBufferObjectManager::getCurrGLBufferObjectPoolSize
	static int _bind_getCurrGLBufferObjectPoolSize(lua_State *L) {
		if (_lg_typecheck_getCurrGLBufferObjectPoolSize_overload_1(L)) return _bind_getCurrGLBufferObjectPoolSize_overload_1(L);
		if (_lg_typecheck_getCurrGLBufferObjectPoolSize_overload_2(L)) return _bind_getCurrGLBufferObjectPoolSize_overload_2(L);

		luaL_error(L, "error in function getCurrGLBufferObjectPoolSize, cannot match any of the overloads for function getCurrGLBufferObjectPoolSize:\n  getCurrGLBufferObjectPoolSize()\n  getCurrGLBufferObjectPoolSize()\n");
		return 0;
	}

	// void osg::GLBufferObjectManager::setMaxGLBufferObjectPoolSize(unsigned int size)
	static int _bind_setMaxGLBufferObjectPoolSize(lua_State *L) {
		if (!_lg_typecheck_setMaxGLBufferObjectPoolSize(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::setMaxGLBufferObjectPoolSize(unsigned int size) function, expected prototype:\nvoid osg::GLBufferObjectManager::setMaxGLBufferObjectPoolSize(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::setMaxGLBufferObjectPoolSize(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setMaxGLBufferObjectPoolSize(size);

		return 0;
	}

	// unsigned int osg::GLBufferObjectManager::getMaxGLBufferObjectPoolSize() const
	static int _bind_getMaxGLBufferObjectPoolSize(lua_State *L) {
		if (!_lg_typecheck_getMaxGLBufferObjectPoolSize(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObjectManager::getMaxGLBufferObjectPoolSize() const function, expected prototype:\nunsigned int osg::GLBufferObjectManager::getMaxGLBufferObjectPoolSize() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObjectManager::getMaxGLBufferObjectPoolSize() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getMaxGLBufferObjectPoolSize();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::GLBufferObjectManager::hasSpace(unsigned int size) const
	static int _bind_hasSpace(lua_State *L) {
		if (!_lg_typecheck_hasSpace(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GLBufferObjectManager::hasSpace(unsigned int size) const function, expected prototype:\nbool osg::GLBufferObjectManager::hasSpace(unsigned int size) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GLBufferObjectManager::hasSpace(unsigned int) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->hasSpace(size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osg::GLBufferObjectManager::makeSpace(unsigned int size)
	static int _bind_makeSpace(lua_State *L) {
		if (!_lg_typecheck_makeSpace(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GLBufferObjectManager::makeSpace(unsigned int size) function, expected prototype:\nbool osg::GLBufferObjectManager::makeSpace(unsigned int size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GLBufferObjectManager::makeSpace(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->makeSpace(size);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::GLBufferObject * osg::GLBufferObjectManager::generateGLBufferObject(const osg::BufferObject * bufferObject)
	static int _bind_generateGLBufferObject(lua_State *L) {
		if (!_lg_typecheck_generateGLBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject * osg::GLBufferObjectManager::generateGLBufferObject(const osg::BufferObject * bufferObject) function, expected prototype:\nosg::GLBufferObject * osg::GLBufferObjectManager::generateGLBufferObject(const osg::BufferObject * bufferObject)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BufferObject* bufferObject=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GLBufferObject * osg::GLBufferObjectManager::generateGLBufferObject(const osg::BufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GLBufferObject * lret = self->generateGLBufferObject(bufferObject);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject >::push(L,lret,false);

		return 1;
	}

	// void osg::GLBufferObjectManager::handlePendingOrphandedGLBufferObjects()
	static int _bind_handlePendingOrphandedGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_handlePendingOrphandedGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::handlePendingOrphandedGLBufferObjects() function, expected prototype:\nvoid osg::GLBufferObjectManager::handlePendingOrphandedGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::handlePendingOrphandedGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->handlePendingOrphandedGLBufferObjects();

		return 0;
	}

	// void osg::GLBufferObjectManager::deleteAllGLBufferObjects()
	static int _bind_deleteAllGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_deleteAllGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::deleteAllGLBufferObjects() function, expected prototype:\nvoid osg::GLBufferObjectManager::deleteAllGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::deleteAllGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deleteAllGLBufferObjects();

		return 0;
	}

	// void osg::GLBufferObjectManager::discardAllGLBufferObjects()
	static int _bind_discardAllGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::discardAllGLBufferObjects() function, expected prototype:\nvoid osg::GLBufferObjectManager::discardAllGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::discardAllGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->discardAllGLBufferObjects();

		return 0;
	}

	// void osg::GLBufferObjectManager::flushAllDeletedGLBufferObjects()
	static int _bind_flushAllDeletedGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_flushAllDeletedGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::flushAllDeletedGLBufferObjects() function, expected prototype:\nvoid osg::GLBufferObjectManager::flushAllDeletedGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::flushAllDeletedGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flushAllDeletedGLBufferObjects();

		return 0;
	}

	// void osg::GLBufferObjectManager::discardAllDeletedGLBufferObjects()
	static int _bind_discardAllDeletedGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllDeletedGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::discardAllDeletedGLBufferObjects() function, expected prototype:\nvoid osg::GLBufferObjectManager::discardAllDeletedGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::discardAllDeletedGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->discardAllDeletedGLBufferObjects();

		return 0;
	}

	// void osg::GLBufferObjectManager::flushDeletedGLBufferObjects(double currentTime, double & availableTime)
	static int _bind_flushDeletedGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::flushDeletedGLBufferObjects(double currentTime, double & availableTime) function, expected prototype:\nvoid osg::GLBufferObjectManager::flushDeletedGLBufferObjects(double currentTime, double & availableTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::flushDeletedGLBufferObjects(double, double &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flushDeletedGLBufferObjects(currentTime, availableTime);

		lua_pushnumber(L,availableTime);
		return 1;
	}

	// void osg::GLBufferObjectManager::releaseGLBufferObject(osg::GLBufferObject * to)
	static int _bind_releaseGLBufferObject(lua_State *L) {
		if (!_lg_typecheck_releaseGLBufferObject(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::releaseGLBufferObject(osg::GLBufferObject * to) function, expected prototype:\nvoid osg::GLBufferObjectManager::releaseGLBufferObject(osg::GLBufferObject * to)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* to=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::releaseGLBufferObject(osg::GLBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLBufferObject(to);

		return 0;
	}

	// osg::GLBufferObjectSet * osg::GLBufferObjectManager::getGLBufferObjectSet(const osg::BufferObjectProfile & profile)
	static int _bind_getGLBufferObjectSet(lua_State *L) {
		if (!_lg_typecheck_getGLBufferObjectSet(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObjectSet * osg::GLBufferObjectManager::getGLBufferObjectSet(const osg::BufferObjectProfile & profile) function, expected prototype:\nosg::GLBufferObjectSet * osg::GLBufferObjectManager::getGLBufferObjectSet(const osg::BufferObjectProfile & profile)\nClass arguments details:\narg 1 ID = 12032151\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::BufferObjectProfile* profile_ptr=(Luna< osg::BufferObjectProfile >::check(L,2));
		if( !profile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg profile in osg::GLBufferObjectManager::getGLBufferObjectSet function");
		}
		const osg::BufferObjectProfile & profile=*profile_ptr;

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GLBufferObjectSet * osg::GLBufferObjectManager::getGLBufferObjectSet(const osg::BufferObjectProfile &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GLBufferObjectSet * lret = self->getGLBufferObjectSet(profile);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObjectSet >::push(L,lret,false);

		return 1;
	}

	// void osg::GLBufferObjectManager::newFrame(osg::FrameStamp * fs)
	static int _bind_newFrame(lua_State *L) {
		if (!_lg_typecheck_newFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::newFrame(osg::FrameStamp * fs) function, expected prototype:\nvoid osg::GLBufferObjectManager::newFrame(osg::FrameStamp * fs)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::FrameStamp* fs=(Luna< osg::Referenced >::checkSubType< osg::FrameStamp >(L,2));

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::newFrame(osg::FrameStamp *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->newFrame(fs);

		return 0;
	}

	// void osg::GLBufferObjectManager::resetStats()
	static int _bind_resetStats(lua_State *L) {
		if (!_lg_typecheck_resetStats(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::resetStats() function, expected prototype:\nvoid osg::GLBufferObjectManager::resetStats()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::resetStats(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->resetStats();

		return 0;
	}

	// void osg::GLBufferObjectManager::reportStats(std::ostream & out)
	static int _bind_reportStats(lua_State *L) {
		if (!_lg_typecheck_reportStats(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::reportStats(std::ostream & out) function, expected prototype:\nvoid osg::GLBufferObjectManager::reportStats(std::ostream & out)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osg::GLBufferObjectManager::reportStats function");
		}
		std::ostream & out=*out_ptr;

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::reportStats(std::ostream &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reportStats(out);

		return 0;
	}

	// void osg::GLBufferObjectManager::recomputeStats(std::ostream & out)
	static int _bind_recomputeStats(lua_State *L) {
		if (!_lg_typecheck_recomputeStats(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::recomputeStats(std::ostream & out) function, expected prototype:\nvoid osg::GLBufferObjectManager::recomputeStats(std::ostream & out)\nClass arguments details:\narg 1 ID = 2993706\n\n%s",luna_dumpStack(L).c_str());
		}

		std::ostream* out_ptr=(Luna< std::ostream >::check(L,2));
		if( !out_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg out in osg::GLBufferObjectManager::recomputeStats function");
		}
		std::ostream & out=*out_ptr;

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::recomputeStats(std::ostream &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->recomputeStats(out);

		return 0;
	}

	// unsigned int & osg::GLBufferObjectManager::getFrameNumber()
	static int _bind_getFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::GLBufferObjectManager::getFrameNumber() function, expected prototype:\nunsigned int & osg::GLBufferObjectManager::getFrameNumber()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::GLBufferObjectManager::getFrameNumber(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getFrameNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int & osg::GLBufferObjectManager::getNumberFrames()
	static int _bind_getNumberFrames(lua_State *L) {
		if (!_lg_typecheck_getNumberFrames(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::GLBufferObjectManager::getNumberFrames() function, expected prototype:\nunsigned int & osg::GLBufferObjectManager::getNumberFrames()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::GLBufferObjectManager::getNumberFrames(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getNumberFrames();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int & osg::GLBufferObjectManager::getNumberDeleted()
	static int _bind_getNumberDeleted(lua_State *L) {
		if (!_lg_typecheck_getNumberDeleted(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::GLBufferObjectManager::getNumberDeleted() function, expected prototype:\nunsigned int & osg::GLBufferObjectManager::getNumberDeleted()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::GLBufferObjectManager::getNumberDeleted(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getNumberDeleted();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double & osg::GLBufferObjectManager::getDeleteTime()
	static int _bind_getDeleteTime(lua_State *L) {
		if (!_lg_typecheck_getDeleteTime(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::GLBufferObjectManager::getDeleteTime() function, expected prototype:\ndouble & osg::GLBufferObjectManager::getDeleteTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::GLBufferObjectManager::getDeleteTime(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->getDeleteTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int & osg::GLBufferObjectManager::getNumberGenerated()
	static int _bind_getNumberGenerated(lua_State *L) {
		if (!_lg_typecheck_getNumberGenerated(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::GLBufferObjectManager::getNumberGenerated() function, expected prototype:\nunsigned int & osg::GLBufferObjectManager::getNumberGenerated()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::GLBufferObjectManager::getNumberGenerated(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getNumberGenerated();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double & osg::GLBufferObjectManager::getGenerateTime()
	static int _bind_getGenerateTime(lua_State *L) {
		if (!_lg_typecheck_getGenerateTime(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::GLBufferObjectManager::getGenerateTime() function, expected prototype:\ndouble & osg::GLBufferObjectManager::getGenerateTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::GLBufferObjectManager::getGenerateTime(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->getGenerateTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int & osg::GLBufferObjectManager::getNumberApplied()
	static int _bind_getNumberApplied(lua_State *L) {
		if (!_lg_typecheck_getNumberApplied(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int & osg::GLBufferObjectManager::getNumberApplied() function, expected prototype:\nunsigned int & osg::GLBufferObjectManager::getNumberApplied()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int & osg::GLBufferObjectManager::getNumberApplied(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int & lret = self->getNumberApplied();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double & osg::GLBufferObjectManager::getApplyTime()
	static int _bind_getApplyTime(lua_State *L) {
		if (!_lg_typecheck_getApplyTime(L)) {
			luaL_error(L, "luna typecheck failed in double & osg::GLBufferObjectManager::getApplyTime() function, expected prototype:\ndouble & osg::GLBufferObjectManager::getApplyTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double & osg::GLBufferObjectManager::getApplyTime(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double & lret = self->getApplyTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// static osg::ref_ptr< osg::GLBufferObjectManager > & osg::GLBufferObjectManager::getGLBufferObjectManager(unsigned int contextID)
	static int _bind_getGLBufferObjectManager(lua_State *L) {
		if (!_lg_typecheck_getGLBufferObjectManager(L)) {
			luaL_error(L, "luna typecheck failed in static osg::ref_ptr< osg::GLBufferObjectManager > & osg::GLBufferObjectManager::getGLBufferObjectManager(unsigned int contextID) function, expected prototype:\nstatic osg::ref_ptr< osg::GLBufferObjectManager > & osg::GLBufferObjectManager::getGLBufferObjectManager(unsigned int contextID)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int contextID=(unsigned int)lua_tointeger(L,1);

		osg::ref_ptr< osg::GLBufferObjectManager > & lret = osg::GLBufferObjectManager::getGLBufferObjectManager(contextID);
		Luna< osg::GLBufferObjectManager >::push(L,lret.get(),false);

		return 1;
	}

	// void osg::GLBufferObjectManager::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectManager::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::GLBufferObjectManager::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::GLBufferObjectManager* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectManager::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLBufferObjectManager::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::GLBufferObjectManager* LunaTraits< osg::GLBufferObjectManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GLBufferObjectManager::_bind_ctor(L);
}

void LunaTraits< osg::GLBufferObjectManager >::_bind_dtor(osg::GLBufferObjectManager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GLBufferObjectManager >::className[] = "GLBufferObjectManager";
const char LunaTraits< osg::GLBufferObjectManager >::fullName[] = "osg::GLBufferObjectManager";
const char LunaTraits< osg::GLBufferObjectManager >::moduleName[] = "osg";
const char* LunaTraits< osg::GLBufferObjectManager >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GLBufferObjectManager >::hash = 97533383;
const int LunaTraits< osg::GLBufferObjectManager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GLBufferObjectManager >::methods[] = {
	{"getContextID", &luna_wrapper_osg_GLBufferObjectManager::_bind_getContextID},
	{"setNumberActiveGLBufferObjects", &luna_wrapper_osg_GLBufferObjectManager::_bind_setNumberActiveGLBufferObjects},
	{"getNumberActiveGLBufferObjects", &luna_wrapper_osg_GLBufferObjectManager::_bind_getNumberActiveGLBufferObjects},
	{"setNumberOrphanedGLBufferObjects", &luna_wrapper_osg_GLBufferObjectManager::_bind_setNumberOrphanedGLBufferObjects},
	{"getNumberOrphanedGLBufferObjects", &luna_wrapper_osg_GLBufferObjectManager::_bind_getNumberOrphanedGLBufferObjects},
	{"setCurrGLBufferObjectPoolSize", &luna_wrapper_osg_GLBufferObjectManager::_bind_setCurrGLBufferObjectPoolSize},
	{"getCurrGLBufferObjectPoolSize", &luna_wrapper_osg_GLBufferObjectManager::_bind_getCurrGLBufferObjectPoolSize},
	{"setMaxGLBufferObjectPoolSize", &luna_wrapper_osg_GLBufferObjectManager::_bind_setMaxGLBufferObjectPoolSize},
	{"getMaxGLBufferObjectPoolSize", &luna_wrapper_osg_GLBufferObjectManager::_bind_getMaxGLBufferObjectPoolSize},
	{"hasSpace", &luna_wrapper_osg_GLBufferObjectManager::_bind_hasSpace},
	{"makeSpace", &luna_wrapper_osg_GLBufferObjectManager::_bind_makeSpace},
	{"generateGLBufferObject", &luna_wrapper_osg_GLBufferObjectManager::_bind_generateGLBufferObject},
	{"handlePendingOrphandedGLBufferObjects", &luna_wrapper_osg_GLBufferObjectManager::_bind_handlePendingOrphandedGLBufferObjects},
	{"deleteAllGLBufferObjects", &luna_wrapper_osg_GLBufferObjectManager::_bind_deleteAllGLBufferObjects},
	{"discardAllGLBufferObjects", &luna_wrapper_osg_GLBufferObjectManager::_bind_discardAllGLBufferObjects},
	{"flushAllDeletedGLBufferObjects", &luna_wrapper_osg_GLBufferObjectManager::_bind_flushAllDeletedGLBufferObjects},
	{"discardAllDeletedGLBufferObjects", &luna_wrapper_osg_GLBufferObjectManager::_bind_discardAllDeletedGLBufferObjects},
	{"flushDeletedGLBufferObjects", &luna_wrapper_osg_GLBufferObjectManager::_bind_flushDeletedGLBufferObjects},
	{"releaseGLBufferObject", &luna_wrapper_osg_GLBufferObjectManager::_bind_releaseGLBufferObject},
	{"getGLBufferObjectSet", &luna_wrapper_osg_GLBufferObjectManager::_bind_getGLBufferObjectSet},
	{"newFrame", &luna_wrapper_osg_GLBufferObjectManager::_bind_newFrame},
	{"resetStats", &luna_wrapper_osg_GLBufferObjectManager::_bind_resetStats},
	{"reportStats", &luna_wrapper_osg_GLBufferObjectManager::_bind_reportStats},
	{"recomputeStats", &luna_wrapper_osg_GLBufferObjectManager::_bind_recomputeStats},
	{"getFrameNumber", &luna_wrapper_osg_GLBufferObjectManager::_bind_getFrameNumber},
	{"getNumberFrames", &luna_wrapper_osg_GLBufferObjectManager::_bind_getNumberFrames},
	{"getNumberDeleted", &luna_wrapper_osg_GLBufferObjectManager::_bind_getNumberDeleted},
	{"getDeleteTime", &luna_wrapper_osg_GLBufferObjectManager::_bind_getDeleteTime},
	{"getNumberGenerated", &luna_wrapper_osg_GLBufferObjectManager::_bind_getNumberGenerated},
	{"getGenerateTime", &luna_wrapper_osg_GLBufferObjectManager::_bind_getGenerateTime},
	{"getNumberApplied", &luna_wrapper_osg_GLBufferObjectManager::_bind_getNumberApplied},
	{"getApplyTime", &luna_wrapper_osg_GLBufferObjectManager::_bind_getApplyTime},
	{"getGLBufferObjectManager", &luna_wrapper_osg_GLBufferObjectManager::_bind_getGLBufferObjectManager},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_GLBufferObjectManager::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_GLBufferObjectManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_GLBufferObjectManager::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_GLBufferObjectManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GLBufferObjectManager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GLBufferObjectManager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GLBufferObjectManager >::enumValues[] = {
	{0,0}
};


