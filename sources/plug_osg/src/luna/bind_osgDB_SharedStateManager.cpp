#include <plug_common.h>

#include <luna/wrappers/wrapper_osgDB_SharedStateManager.h>

class luna_wrapper_osgDB_SharedStateManager {
public:
	typedef Luna< osgDB::SharedStateManager > luna_t;

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

		osgDB::SharedStateManager* self= (osgDB::SharedStateManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgDB::SharedStateManager >::push(L,self,false);
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
		//osgDB::SharedStateManager* ptr= dynamic_cast< osgDB::SharedStateManager* >(Luna< osg::Referenced >::check(L,1));
		osgDB::SharedStateManager* ptr= luna_caster< osg::Referenced, osgDB::SharedStateManager >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgDB::SharedStateManager >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setShareMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getShareMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_prune(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isShared_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isShared_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_releaseGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgDB::SharedStateManager::SharedStateManager(unsigned int mode = osgDB::SharedStateManager::SHARE_ALL)
	static osgDB::SharedStateManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::SharedStateManager::SharedStateManager(unsigned int mode = osgDB::SharedStateManager::SHARE_ALL) function, expected prototype:\nosgDB::SharedStateManager::SharedStateManager(unsigned int mode = osgDB::SharedStateManager::SHARE_ALL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>0 ? (unsigned int)lua_tointeger(L,1) : (unsigned int)osgDB::SharedStateManager::SHARE_ALL;

		return new osgDB::SharedStateManager(mode);
	}

	// osgDB::SharedStateManager::SharedStateManager(lua_Table * data, unsigned int mode = osgDB::SharedStateManager::SHARE_ALL)
	static osgDB::SharedStateManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::SharedStateManager::SharedStateManager(lua_Table * data, unsigned int mode = osgDB::SharedStateManager::SHARE_ALL) function, expected prototype:\nosgDB::SharedStateManager::SharedStateManager(lua_Table * data, unsigned int mode = osgDB::SharedStateManager::SHARE_ALL)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		unsigned int mode=luatop>1 ? (unsigned int)lua_tointeger(L,2) : (unsigned int)osgDB::SharedStateManager::SHARE_ALL;

		return new wrapper_osgDB_SharedStateManager(L,NULL, mode);
	}

	// Overload binder for osgDB::SharedStateManager::SharedStateManager
	static osgDB::SharedStateManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SharedStateManager, cannot match any of the overloads for function SharedStateManager:\n  SharedStateManager(unsigned int)\n  SharedStateManager(lua_Table *, unsigned int)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgDB::SharedStateManager::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::SharedStateManager::libraryName() const function, expected prototype:\nconst char * osgDB::SharedStateManager::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::SharedStateManager::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::SharedStateManager::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::SharedStateManager::className() const function, expected prototype:\nconst char * osgDB::SharedStateManager::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::SharedStateManager::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::SharedStateManager::setShareMode(unsigned int mode)
	static int _bind_setShareMode(lua_State *L) {
		if (!_lg_typecheck_setShareMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::setShareMode(unsigned int mode) function, expected prototype:\nvoid osgDB::SharedStateManager::setShareMode(unsigned int mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int mode=(unsigned int)lua_tointeger(L,2);

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::setShareMode(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setShareMode(mode);

		return 0;
	}

	// unsigned int osgDB::SharedStateManager::getShareMode()
	static int _bind_getShareMode(lua_State *L) {
		if (!_lg_typecheck_getShareMode(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgDB::SharedStateManager::getShareMode() function, expected prototype:\nunsigned int osgDB::SharedStateManager::getShareMode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgDB::SharedStateManager::getShareMode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getShareMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgDB::SharedStateManager::prune()
	static int _bind_prune(lua_State *L) {
		if (!_lg_typecheck_prune(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::prune() function, expected prototype:\nvoid osgDB::SharedStateManager::prune()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::prune(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->prune();

		return 0;
	}

	// void osgDB::SharedStateManager::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::apply(osg::Node & node) function, expected prototype:\nvoid osgDB::SharedStateManager::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgDB::SharedStateManager::apply function");
		}
		osg::Node & node=*node_ptr;

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgDB::SharedStateManager::apply(osg::Geode & geode)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::apply(osg::Geode & geode) function, expected prototype:\nvoid osgDB::SharedStateManager::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgDB::SharedStateManager::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(geode);

		return 0;
	}

	// Overload binder for osgDB::SharedStateManager::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n");
		return 0;
	}

	// bool osgDB::SharedStateManager::isShared(osg::StateSet * stateSet)
	static int _bind_isShared_overload_1(lua_State *L) {
		if (!_lg_typecheck_isShared_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::SharedStateManager::isShared(osg::StateSet * stateSet) function, expected prototype:\nbool osgDB::SharedStateManager::isShared(osg::StateSet * stateSet)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::StateSet* stateSet=(Luna< osg::Referenced >::checkSubType< osg::StateSet >(L,2));

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::SharedStateManager::isShared(osg::StateSet *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isShared(stateSet);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgDB::SharedStateManager::isShared(osg::Texture * texture)
	static int _bind_isShared_overload_2(lua_State *L) {
		if (!_lg_typecheck_isShared_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in bool osgDB::SharedStateManager::isShared(osg::Texture * texture) function, expected prototype:\nbool osgDB::SharedStateManager::isShared(osg::Texture * texture)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Texture* texture=(Luna< osg::Referenced >::checkSubType< osg::Texture >(L,2));

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgDB::SharedStateManager::isShared(osg::Texture *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isShared(texture);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// Overload binder for osgDB::SharedStateManager::isShared
	static int _bind_isShared(lua_State *L) {
		if (_lg_typecheck_isShared_overload_1(L)) return _bind_isShared_overload_1(L);
		if (_lg_typecheck_isShared_overload_2(L)) return _bind_isShared_overload_2(L);

		luaL_error(L, "error in function isShared, cannot match any of the overloads for function isShared:\n  isShared(osg::StateSet *)\n  isShared(osg::Texture *)\n");
		return 0;
	}

	// void osgDB::SharedStateManager::releaseGLObjects(osg::State * state) const
	static int _bind_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::releaseGLObjects(osg::State * state) const function, expected prototype:\nvoid osgDB::SharedStateManager::releaseGLObjects(osg::State * state) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::State* state=(Luna< osg::Referenced >::checkSubType< osg::State >(L,2));

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->releaseGLObjects(state);

		return 0;
	}

	// void osgDB::SharedStateManager::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgDB::SharedStateManager::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SharedStateManager::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgDB::SharedStateManager::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::base_reset() function, expected prototype:\nvoid osgDB::SharedStateManager::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SharedStateManager::reset();

		return 0;
	}

	// osg::Vec3f osgDB::SharedStateManager::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgDB::SharedStateManager::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgDB::SharedStateManager::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgDB::SharedStateManager::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->SharedStateManager::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgDB::SharedStateManager::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgDB::SharedStateManager::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgDB::SharedStateManager::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgDB::SharedStateManager::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->SharedStateManager::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgDB::SharedStateManager::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgDB::SharedStateManager::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgDB::SharedStateManager::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::SharedStateManager::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgDB::SharedStateManager::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->SharedStateManager::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgDB::SharedStateManager::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgDB::SharedStateManager::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgDB::SharedStateManager::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::SharedStateManager::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgDB::SharedStateManager::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->SharedStateManager::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgDB::SharedStateManager::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgDB::SharedStateManager::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgDB::SharedStateManager::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgDB::SharedStateManager::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgDB::SharedStateManager::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->SharedStateManager::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osgDB::SharedStateManager::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::SharedStateManager::base_libraryName() const function, expected prototype:\nconst char * osgDB::SharedStateManager::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::SharedStateManager::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SharedStateManager::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgDB::SharedStateManager::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgDB::SharedStateManager::base_className() const function, expected prototype:\nconst char * osgDB::SharedStateManager::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgDB::SharedStateManager::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SharedStateManager::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgDB::SharedStateManager::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::base_apply(osg::Node & node) function, expected prototype:\nvoid osgDB::SharedStateManager::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgDB::SharedStateManager::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::base_apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SharedStateManager::apply(node);

		return 0;
	}

	// void osgDB::SharedStateManager::base_apply(osg::Geode & geode)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgDB::SharedStateManager::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgDB::SharedStateManager::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgDB::SharedStateManager::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgDB::SharedStateManager* self=Luna< osg::Referenced >::checkSubType< osgDB::SharedStateManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgDB::SharedStateManager::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->SharedStateManager::apply(geode);

		return 0;
	}

	// Overload binder for osgDB::SharedStateManager::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Geode &)\n");
		return 0;
	}


	// Operator binds:

};

osgDB::SharedStateManager* LunaTraits< osgDB::SharedStateManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgDB_SharedStateManager::_bind_ctor(L);
}

void LunaTraits< osgDB::SharedStateManager >::_bind_dtor(osgDB::SharedStateManager* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgDB::SharedStateManager >::className[] = "SharedStateManager";
const char LunaTraits< osgDB::SharedStateManager >::fullName[] = "osgDB::SharedStateManager";
const char LunaTraits< osgDB::SharedStateManager >::moduleName[] = "osgDB";
const char* LunaTraits< osgDB::SharedStateManager >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgDB::SharedStateManager >::hash = 15811135;
const int LunaTraits< osgDB::SharedStateManager >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgDB::SharedStateManager >::methods[] = {
	{"libraryName", &luna_wrapper_osgDB_SharedStateManager::_bind_libraryName},
	{"className", &luna_wrapper_osgDB_SharedStateManager::_bind_className},
	{"setShareMode", &luna_wrapper_osgDB_SharedStateManager::_bind_setShareMode},
	{"getShareMode", &luna_wrapper_osgDB_SharedStateManager::_bind_getShareMode},
	{"prune", &luna_wrapper_osgDB_SharedStateManager::_bind_prune},
	{"apply", &luna_wrapper_osgDB_SharedStateManager::_bind_apply},
	{"isShared", &luna_wrapper_osgDB_SharedStateManager::_bind_isShared},
	{"releaseGLObjects", &luna_wrapper_osgDB_SharedStateManager::_bind_releaseGLObjects},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgDB_SharedStateManager::_bind_base_setThreadSafeRefUnref},
	{"base_reset", &luna_wrapper_osgDB_SharedStateManager::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgDB_SharedStateManager::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgDB_SharedStateManager::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgDB_SharedStateManager::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgDB_SharedStateManager::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgDB_SharedStateManager::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osgDB_SharedStateManager::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgDB_SharedStateManager::_bind_base_className},
	{"base_apply", &luna_wrapper_osgDB_SharedStateManager::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgDB_SharedStateManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgDB_SharedStateManager::_bind_asVoid},
	{"getTable", &luna_wrapper_osgDB_SharedStateManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgDB::SharedStateManager >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgDB_SharedStateManager::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgDB::SharedStateManager >::enumValues[] = {
	{"SHARE_NONE", osgDB::SharedStateManager::SHARE_NONE},
	{"SHARE_STATIC_TEXTURES", osgDB::SharedStateManager::SHARE_STATIC_TEXTURES},
	{"SHARE_UNSPECIFIED_TEXTURES", osgDB::SharedStateManager::SHARE_UNSPECIFIED_TEXTURES},
	{"SHARE_DYNAMIC_TEXTURES", osgDB::SharedStateManager::SHARE_DYNAMIC_TEXTURES},
	{"SHARE_STATIC_STATESETS", osgDB::SharedStateManager::SHARE_STATIC_STATESETS},
	{"SHARE_UNSPECIFIED_STATESETS", osgDB::SharedStateManager::SHARE_UNSPECIFIED_STATESETS},
	{"SHARE_DYNAMIC_STATESETS", osgDB::SharedStateManager::SHARE_DYNAMIC_STATESETS},
	{"SHARE_TEXTURES", osgDB::SharedStateManager::SHARE_TEXTURES},
	{"SHARE_STATESETS", osgDB::SharedStateManager::SHARE_STATESETS},
	{"SHARE_ALL", osgDB::SharedStateManager::SHARE_ALL},
	{0,0}
};


