#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_GLBufferObjectSet.h>

class luna_wrapper_osg_GLBufferObjectSet {
public:
	typedef Luna< osg::GLBufferObjectSet > luna_t;

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

		osg::GLBufferObjectSet* self= (osg::GLBufferObjectSet*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::GLBufferObjectSet >::push(L,self,false);
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
		//osg::GLBufferObjectSet* ptr= dynamic_cast< osg::GLBufferObjectSet* >(Luna< osg::Referenced >::check(L,1));
		osg::GLBufferObjectSet* ptr= luna_caster< osg::Referenced, osg::GLBufferObjectSet >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::GLBufferObjectSet >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,12032151) ) return false;
		if( (!(Luna< osg::BufferObjectProfile >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,12032151) ) return false;
		if( (!(Luna< osg::BufferObjectProfile >::check(L,3))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getProfile(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_takeFromOrphans(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_takeOrGenerate(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveToBack(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addToBack(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_orphan(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_remove(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveToSet(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_size(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_makeSpace(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_checkConsistency(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getParent(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_computeNumGLBufferObjectsInList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumOfGLBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumOrphans(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumPendingOrphans(lua_State *L) {
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
	// osg::GLBufferObjectSet::GLBufferObjectSet(osg::GLBufferObjectManager * parent, const osg::BufferObjectProfile & profile)
	static osg::GLBufferObjectSet* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObjectSet::GLBufferObjectSet(osg::GLBufferObjectManager * parent, const osg::BufferObjectProfile & profile) function, expected prototype:\nosg::GLBufferObjectSet::GLBufferObjectSet(osg::GLBufferObjectManager * parent, const osg::BufferObjectProfile & profile)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 12032151\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObjectManager* parent=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,1));
		const osg::BufferObjectProfile* profile_ptr=(Luna< osg::BufferObjectProfile >::check(L,2));
		if( !profile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg profile in osg::GLBufferObjectSet::GLBufferObjectSet function");
		}
		const osg::BufferObjectProfile & profile=*profile_ptr;

		return new osg::GLBufferObjectSet(parent, profile);
	}

	// osg::GLBufferObjectSet::GLBufferObjectSet(lua_Table * data, osg::GLBufferObjectManager * parent, const osg::BufferObjectProfile & profile)
	static osg::GLBufferObjectSet* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObjectSet::GLBufferObjectSet(lua_Table * data, osg::GLBufferObjectManager * parent, const osg::BufferObjectProfile & profile) function, expected prototype:\nosg::GLBufferObjectSet::GLBufferObjectSet(lua_Table * data, osg::GLBufferObjectManager * parent, const osg::BufferObjectProfile & profile)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 12032151\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObjectManager* parent=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectManager >(L,2));
		const osg::BufferObjectProfile* profile_ptr=(Luna< osg::BufferObjectProfile >::check(L,3));
		if( !profile_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg profile in osg::GLBufferObjectSet::GLBufferObjectSet function");
		}
		const osg::BufferObjectProfile & profile=*profile_ptr;

		return new wrapper_osg_GLBufferObjectSet(L,NULL, parent, profile);
	}

	// Overload binder for osg::GLBufferObjectSet::GLBufferObjectSet
	static osg::GLBufferObjectSet* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function GLBufferObjectSet, cannot match any of the overloads for function GLBufferObjectSet:\n  GLBufferObjectSet(osg::GLBufferObjectManager *, const osg::BufferObjectProfile &)\n  GLBufferObjectSet(lua_Table *, osg::GLBufferObjectManager *, const osg::BufferObjectProfile &)\n");
		return NULL;
	}


	// Function binds:
	// const osg::BufferObjectProfile & osg::GLBufferObjectSet::getProfile() const
	static int _bind_getProfile(lua_State *L) {
		if (!_lg_typecheck_getProfile(L)) {
			luaL_error(L, "luna typecheck failed in const osg::BufferObjectProfile & osg::GLBufferObjectSet::getProfile() const function, expected prototype:\nconst osg::BufferObjectProfile & osg::GLBufferObjectSet::getProfile() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::BufferObjectProfile & osg::GLBufferObjectSet::getProfile() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::BufferObjectProfile* lret = &self->getProfile();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BufferObjectProfile >::push(L,lret,false);

		return 1;
	}

	// void osg::GLBufferObjectSet::handlePendingOrphandedGLBufferObjects()
	static int _bind_handlePendingOrphandedGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_handlePendingOrphandedGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::handlePendingOrphandedGLBufferObjects() function, expected prototype:\nvoid osg::GLBufferObjectSet::handlePendingOrphandedGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::handlePendingOrphandedGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->handlePendingOrphandedGLBufferObjects();

		return 0;
	}

	// void osg::GLBufferObjectSet::deleteAllGLBufferObjects()
	static int _bind_deleteAllGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_deleteAllGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::deleteAllGLBufferObjects() function, expected prototype:\nvoid osg::GLBufferObjectSet::deleteAllGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::deleteAllGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->deleteAllGLBufferObjects();

		return 0;
	}

	// void osg::GLBufferObjectSet::discardAllGLBufferObjects()
	static int _bind_discardAllGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::discardAllGLBufferObjects() function, expected prototype:\nvoid osg::GLBufferObjectSet::discardAllGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::discardAllGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->discardAllGLBufferObjects();

		return 0;
	}

	// void osg::GLBufferObjectSet::flushAllDeletedGLBufferObjects()
	static int _bind_flushAllDeletedGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_flushAllDeletedGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::flushAllDeletedGLBufferObjects() function, expected prototype:\nvoid osg::GLBufferObjectSet::flushAllDeletedGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::flushAllDeletedGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flushAllDeletedGLBufferObjects();

		return 0;
	}

	// void osg::GLBufferObjectSet::discardAllDeletedGLBufferObjects()
	static int _bind_discardAllDeletedGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_discardAllDeletedGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::discardAllDeletedGLBufferObjects() function, expected prototype:\nvoid osg::GLBufferObjectSet::discardAllDeletedGLBufferObjects()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::discardAllDeletedGLBufferObjects(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->discardAllDeletedGLBufferObjects();

		return 0;
	}

	// void osg::GLBufferObjectSet::flushDeletedGLBufferObjects(double currentTime, double & availableTime)
	static int _bind_flushDeletedGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_flushDeletedGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::flushDeletedGLBufferObjects(double currentTime, double & availableTime) function, expected prototype:\nvoid osg::GLBufferObjectSet::flushDeletedGLBufferObjects(double currentTime, double & availableTime)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double currentTime=(double)lua_tonumber(L,2);
		double availableTime=(double)lua_tonumber(L,3);

		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::flushDeletedGLBufferObjects(double, double &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->flushDeletedGLBufferObjects(currentTime, availableTime);

		lua_pushnumber(L,availableTime);
		return 1;
	}

	// osg::GLBufferObject * osg::GLBufferObjectSet::takeFromOrphans(osg::BufferObject * bufferObject)
	static int _bind_takeFromOrphans(lua_State *L) {
		if (!_lg_typecheck_takeFromOrphans(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject * osg::GLBufferObjectSet::takeFromOrphans(osg::BufferObject * bufferObject) function, expected prototype:\nosg::GLBufferObject * osg::GLBufferObjectSet::takeFromOrphans(osg::BufferObject * bufferObject)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BufferObject* bufferObject=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));

		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GLBufferObject * osg::GLBufferObjectSet::takeFromOrphans(osg::BufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GLBufferObject * lret = self->takeFromOrphans(bufferObject);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject >::push(L,lret,false);

		return 1;
	}

	// osg::GLBufferObject * osg::GLBufferObjectSet::takeOrGenerate(osg::BufferObject * bufferObject)
	static int _bind_takeOrGenerate(lua_State *L) {
		if (!_lg_typecheck_takeOrGenerate(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObject * osg::GLBufferObjectSet::takeOrGenerate(osg::BufferObject * bufferObject) function, expected prototype:\nosg::GLBufferObject * osg::GLBufferObjectSet::takeOrGenerate(osg::BufferObject * bufferObject)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::BufferObject* bufferObject=(Luna< osg::Referenced >::checkSubType< osg::BufferObject >(L,2));

		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GLBufferObject * osg::GLBufferObjectSet::takeOrGenerate(osg::BufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GLBufferObject * lret = self->takeOrGenerate(bufferObject);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObject >::push(L,lret,false);

		return 1;
	}

	// void osg::GLBufferObjectSet::moveToBack(osg::GLBufferObject * to)
	static int _bind_moveToBack(lua_State *L) {
		if (!_lg_typecheck_moveToBack(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::moveToBack(osg::GLBufferObject * to) function, expected prototype:\nvoid osg::GLBufferObjectSet::moveToBack(osg::GLBufferObject * to)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* to=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::moveToBack(osg::GLBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->moveToBack(to);

		return 0;
	}

	// void osg::GLBufferObjectSet::addToBack(osg::GLBufferObject * to)
	static int _bind_addToBack(lua_State *L) {
		if (!_lg_typecheck_addToBack(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::addToBack(osg::GLBufferObject * to) function, expected prototype:\nvoid osg::GLBufferObjectSet::addToBack(osg::GLBufferObject * to)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* to=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::addToBack(osg::GLBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addToBack(to);

		return 0;
	}

	// void osg::GLBufferObjectSet::orphan(osg::GLBufferObject * to)
	static int _bind_orphan(lua_State *L) {
		if (!_lg_typecheck_orphan(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::orphan(osg::GLBufferObject * to) function, expected prototype:\nvoid osg::GLBufferObjectSet::orphan(osg::GLBufferObject * to)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* to=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::orphan(osg::GLBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->orphan(to);

		return 0;
	}

	// void osg::GLBufferObjectSet::remove(osg::GLBufferObject * to)
	static int _bind_remove(lua_State *L) {
		if (!_lg_typecheck_remove(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::remove(osg::GLBufferObject * to) function, expected prototype:\nvoid osg::GLBufferObjectSet::remove(osg::GLBufferObject * to)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* to=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));

		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::remove(osg::GLBufferObject *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->remove(to);

		return 0;
	}

	// void osg::GLBufferObjectSet::moveToSet(osg::GLBufferObject * to, osg::GLBufferObjectSet * set)
	static int _bind_moveToSet(lua_State *L) {
		if (!_lg_typecheck_moveToSet(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::moveToSet(osg::GLBufferObject * to, osg::GLBufferObjectSet * set) function, expected prototype:\nvoid osg::GLBufferObjectSet::moveToSet(osg::GLBufferObject * to, osg::GLBufferObjectSet * set)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::GLBufferObject* to=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObject >(L,2));
		osg::GLBufferObjectSet* set=(Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,3));

		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::moveToSet(osg::GLBufferObject *, osg::GLBufferObjectSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->moveToSet(to, set);

		return 0;
	}

	// unsigned int osg::GLBufferObjectSet::size() const
	static int _bind_size(lua_State *L) {
		if (!_lg_typecheck_size(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObjectSet::size() const function, expected prototype:\nunsigned int osg::GLBufferObjectSet::size() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObjectSet::size() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->size();
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osg::GLBufferObjectSet::makeSpace(unsigned int & size)
	static int _bind_makeSpace(lua_State *L) {
		if (!_lg_typecheck_makeSpace(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GLBufferObjectSet::makeSpace(unsigned int & size) function, expected prototype:\nbool osg::GLBufferObjectSet::makeSpace(unsigned int & size)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int size=(unsigned int)lua_tointeger(L,2);

		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GLBufferObjectSet::makeSpace(unsigned int &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->makeSpace(size);
		lua_pushboolean(L,lret?1:0);

		lua_pushnumber(L,size);
		return 2;
	}

	// bool osg::GLBufferObjectSet::checkConsistency() const
	static int _bind_checkConsistency(lua_State *L) {
		if (!_lg_typecheck_checkConsistency(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::GLBufferObjectSet::checkConsistency() const function, expected prototype:\nbool osg::GLBufferObjectSet::checkConsistency() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::GLBufferObjectSet::checkConsistency() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->checkConsistency();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::GLBufferObjectManager * osg::GLBufferObjectSet::getParent()
	static int _bind_getParent(lua_State *L) {
		if (!_lg_typecheck_getParent(L)) {
			luaL_error(L, "luna typecheck failed in osg::GLBufferObjectManager * osg::GLBufferObjectSet::getParent() function, expected prototype:\nosg::GLBufferObjectManager * osg::GLBufferObjectSet::getParent()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::GLBufferObjectManager * osg::GLBufferObjectSet::getParent(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::GLBufferObjectManager * lret = self->getParent();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::GLBufferObjectManager >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::GLBufferObjectSet::computeNumGLBufferObjectsInList() const
	static int _bind_computeNumGLBufferObjectsInList(lua_State *L) {
		if (!_lg_typecheck_computeNumGLBufferObjectsInList(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObjectSet::computeNumGLBufferObjectsInList() const function, expected prototype:\nunsigned int osg::GLBufferObjectSet::computeNumGLBufferObjectsInList() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObjectSet::computeNumGLBufferObjectsInList() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->computeNumGLBufferObjectsInList();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GLBufferObjectSet::getNumOfGLBufferObjects() const
	static int _bind_getNumOfGLBufferObjects(lua_State *L) {
		if (!_lg_typecheck_getNumOfGLBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObjectSet::getNumOfGLBufferObjects() const function, expected prototype:\nunsigned int osg::GLBufferObjectSet::getNumOfGLBufferObjects() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObjectSet::getNumOfGLBufferObjects() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumOfGLBufferObjects();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GLBufferObjectSet::getNumOrphans() const
	static int _bind_getNumOrphans(lua_State *L) {
		if (!_lg_typecheck_getNumOrphans(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObjectSet::getNumOrphans() const function, expected prototype:\nunsigned int osg::GLBufferObjectSet::getNumOrphans() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObjectSet::getNumOrphans() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumOrphans();
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::GLBufferObjectSet::getNumPendingOrphans() const
	static int _bind_getNumPendingOrphans(lua_State *L) {
		if (!_lg_typecheck_getNumPendingOrphans(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::GLBufferObjectSet::getNumPendingOrphans() const function, expected prototype:\nunsigned int osg::GLBufferObjectSet::getNumPendingOrphans() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::GLBufferObjectSet::getNumPendingOrphans() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumPendingOrphans();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::GLBufferObjectSet::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::GLBufferObjectSet::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::GLBufferObjectSet::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::GLBufferObjectSet* self=Luna< osg::Referenced >::checkSubType< osg::GLBufferObjectSet >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::GLBufferObjectSet::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->GLBufferObjectSet::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osg::GLBufferObjectSet* LunaTraits< osg::GLBufferObjectSet >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_GLBufferObjectSet::_bind_ctor(L);
}

void LunaTraits< osg::GLBufferObjectSet >::_bind_dtor(osg::GLBufferObjectSet* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::GLBufferObjectSet >::className[] = "GLBufferObjectSet";
const char LunaTraits< osg::GLBufferObjectSet >::fullName[] = "osg::GLBufferObjectSet";
const char LunaTraits< osg::GLBufferObjectSet >::moduleName[] = "osg";
const char* LunaTraits< osg::GLBufferObjectSet >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osg::GLBufferObjectSet >::hash = 92257414;
const int LunaTraits< osg::GLBufferObjectSet >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::GLBufferObjectSet >::methods[] = {
	{"getProfile", &luna_wrapper_osg_GLBufferObjectSet::_bind_getProfile},
	{"handlePendingOrphandedGLBufferObjects", &luna_wrapper_osg_GLBufferObjectSet::_bind_handlePendingOrphandedGLBufferObjects},
	{"deleteAllGLBufferObjects", &luna_wrapper_osg_GLBufferObjectSet::_bind_deleteAllGLBufferObjects},
	{"discardAllGLBufferObjects", &luna_wrapper_osg_GLBufferObjectSet::_bind_discardAllGLBufferObjects},
	{"flushAllDeletedGLBufferObjects", &luna_wrapper_osg_GLBufferObjectSet::_bind_flushAllDeletedGLBufferObjects},
	{"discardAllDeletedGLBufferObjects", &luna_wrapper_osg_GLBufferObjectSet::_bind_discardAllDeletedGLBufferObjects},
	{"flushDeletedGLBufferObjects", &luna_wrapper_osg_GLBufferObjectSet::_bind_flushDeletedGLBufferObjects},
	{"takeFromOrphans", &luna_wrapper_osg_GLBufferObjectSet::_bind_takeFromOrphans},
	{"takeOrGenerate", &luna_wrapper_osg_GLBufferObjectSet::_bind_takeOrGenerate},
	{"moveToBack", &luna_wrapper_osg_GLBufferObjectSet::_bind_moveToBack},
	{"addToBack", &luna_wrapper_osg_GLBufferObjectSet::_bind_addToBack},
	{"orphan", &luna_wrapper_osg_GLBufferObjectSet::_bind_orphan},
	{"remove", &luna_wrapper_osg_GLBufferObjectSet::_bind_remove},
	{"moveToSet", &luna_wrapper_osg_GLBufferObjectSet::_bind_moveToSet},
	{"size", &luna_wrapper_osg_GLBufferObjectSet::_bind_size},
	{"makeSpace", &luna_wrapper_osg_GLBufferObjectSet::_bind_makeSpace},
	{"checkConsistency", &luna_wrapper_osg_GLBufferObjectSet::_bind_checkConsistency},
	{"getParent", &luna_wrapper_osg_GLBufferObjectSet::_bind_getParent},
	{"computeNumGLBufferObjectsInList", &luna_wrapper_osg_GLBufferObjectSet::_bind_computeNumGLBufferObjectsInList},
	{"getNumOfGLBufferObjects", &luna_wrapper_osg_GLBufferObjectSet::_bind_getNumOfGLBufferObjects},
	{"getNumOrphans", &luna_wrapper_osg_GLBufferObjectSet::_bind_getNumOrphans},
	{"getNumPendingOrphans", &luna_wrapper_osg_GLBufferObjectSet::_bind_getNumPendingOrphans},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_GLBufferObjectSet::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osg_GLBufferObjectSet::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_GLBufferObjectSet::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_GLBufferObjectSet::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::GLBufferObjectSet >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_GLBufferObjectSet::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::GLBufferObjectSet >::enumValues[] = {
	{0,0}
};


