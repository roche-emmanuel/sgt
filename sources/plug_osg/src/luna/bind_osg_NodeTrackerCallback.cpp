#include <plug_common.h>

#include <luna/wrappers/wrapper_osg_NodeTrackerCallback.h>

class luna_wrapper_osg_NodeTrackerCallback {
public:
	typedef Luna< osg::NodeTrackerCallback > luna_t;

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

		osg::NodeTrackerCallback* self= (osg::NodeTrackerCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::NodeTrackerCallback >::push(L,self,false);
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
		//osg::NodeTrackerCallback* ptr= dynamic_cast< osg::NodeTrackerCallback* >(Luna< osg::Referenced >::check(L,1));
		osg::NodeTrackerCallback* ptr= luna_caster< osg::Referenced, osg::NodeTrackerCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osg::NodeTrackerCallback >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_setTrackNodePath_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		if( (!(Luna< osg::NodePath >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTrackNodePath_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,5626651) ) return false;
		if( (!(Luna< osg::ObserverNodePath >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTrackNodePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setTrackNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTrackNode_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTrackNode_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
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


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck_op_call(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::NodeTrackerCallback::NodeTrackerCallback()
	static osg::NodeTrackerCallback* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeTrackerCallback::NodeTrackerCallback() function, expected prototype:\nosg::NodeTrackerCallback::NodeTrackerCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::NodeTrackerCallback();
	}

	// osg::NodeTrackerCallback::NodeTrackerCallback(lua_Table * data)
	static osg::NodeTrackerCallback* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodeTrackerCallback::NodeTrackerCallback(lua_Table * data) function, expected prototype:\nosg::NodeTrackerCallback::NodeTrackerCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osg_NodeTrackerCallback(L,NULL);
	}

	// Overload binder for osg::NodeTrackerCallback::NodeTrackerCallback
	static osg::NodeTrackerCallback* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function NodeTrackerCallback, cannot match any of the overloads for function NodeTrackerCallback:\n  NodeTrackerCallback()\n  NodeTrackerCallback(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osg::NodeTrackerCallback::setTrackNodePath(const osg::NodePath & nodePath)
	static int _bind_setTrackNodePath_overload_1(lua_State *L) {
		if (!_lg_typecheck_setTrackNodePath_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::setTrackNodePath(const osg::NodePath & nodePath) function, expected prototype:\nvoid osg::NodeTrackerCallback::setTrackNodePath(const osg::NodePath & nodePath)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::NodePath* nodePath_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::NodeTrackerCallback::setTrackNodePath function");
		}
		const osg::NodePath & nodePath=*nodePath_ptr;

		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::setTrackNodePath(const osg::NodePath &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTrackNodePath(nodePath);

		return 0;
	}

	// void osg::NodeTrackerCallback::setTrackNodePath(const osg::ObserverNodePath & nodePath)
	static int _bind_setTrackNodePath_overload_2(lua_State *L) {
		if (!_lg_typecheck_setTrackNodePath_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::setTrackNodePath(const osg::ObserverNodePath & nodePath) function, expected prototype:\nvoid osg::NodeTrackerCallback::setTrackNodePath(const osg::ObserverNodePath & nodePath)\nClass arguments details:\narg 1 ID = 5626651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::ObserverNodePath* nodePath_ptr=(Luna< osg::ObserverNodePath >::check(L,2));
		if( !nodePath_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg nodePath in osg::NodeTrackerCallback::setTrackNodePath function");
		}
		const osg::ObserverNodePath & nodePath=*nodePath_ptr;

		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::setTrackNodePath(const osg::ObserverNodePath &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTrackNodePath(nodePath);

		return 0;
	}

	// Overload binder for osg::NodeTrackerCallback::setTrackNodePath
	static int _bind_setTrackNodePath(lua_State *L) {
		if (_lg_typecheck_setTrackNodePath_overload_1(L)) return _bind_setTrackNodePath_overload_1(L);
		if (_lg_typecheck_setTrackNodePath_overload_2(L)) return _bind_setTrackNodePath_overload_2(L);

		luaL_error(L, "error in function setTrackNodePath, cannot match any of the overloads for function setTrackNodePath:\n  setTrackNodePath(const osg::NodePath &)\n  setTrackNodePath(const osg::ObserverNodePath &)\n");
		return 0;
	}

	// osg::ObserverNodePath & osg::NodeTrackerCallback::getTrackNodePath()
	static int _bind_getTrackNodePath(lua_State *L) {
		if (!_lg_typecheck_getTrackNodePath(L)) {
			luaL_error(L, "luna typecheck failed in osg::ObserverNodePath & osg::NodeTrackerCallback::getTrackNodePath() function, expected prototype:\nosg::ObserverNodePath & osg::NodeTrackerCallback::getTrackNodePath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ObserverNodePath & osg::NodeTrackerCallback::getTrackNodePath(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::ObserverNodePath* lret = &self->getTrackNodePath();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::ObserverNodePath >::push(L,lret,false);

		return 1;
	}

	// void osg::NodeTrackerCallback::setTrackNode(osg::Node * node)
	static int _bind_setTrackNode(lua_State *L) {
		if (!_lg_typecheck_setTrackNode(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::setTrackNode(osg::Node * node) function, expected prototype:\nvoid osg::NodeTrackerCallback::setTrackNode(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::setTrackNode(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setTrackNode(node);

		return 0;
	}

	// osg::Node * osg::NodeTrackerCallback::getTrackNode()
	static int _bind_getTrackNode_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTrackNode_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osg::NodeTrackerCallback::getTrackNode() function, expected prototype:\nosg::Node * osg::NodeTrackerCallback::getTrackNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osg::NodeTrackerCallback::getTrackNode(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->getTrackNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// const osg::Node * osg::NodeTrackerCallback::getTrackNode() const
	static int _bind_getTrackNode_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTrackNode_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osg::NodeTrackerCallback::getTrackNode() const function, expected prototype:\nconst osg::Node * osg::NodeTrackerCallback::getTrackNode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osg::NodeTrackerCallback::getTrackNode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->getTrackNode();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeTrackerCallback::getTrackNode
	static int _bind_getTrackNode(lua_State *L) {
		if (_lg_typecheck_getTrackNode_overload_1(L)) return _bind_getTrackNode_overload_1(L);
		if (_lg_typecheck_getTrackNode_overload_2(L)) return _bind_getTrackNode_overload_2(L);

		luaL_error(L, "error in function getTrackNode, cannot match any of the overloads for function getTrackNode:\n  getTrackNode()\n  getTrackNode()\n");
		return 0;
	}

	// void osg::NodeTrackerCallback::update(osg::Node & node)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::update(osg::Node & node) function, expected prototype:\nvoid osg::NodeTrackerCallback::update(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osg::NodeTrackerCallback::update function");
		}
		osg::Node & node=*node_ptr;

		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::update(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update(node);

		return 0;
	}

	// void osg::NodeTrackerCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osg::NodeTrackerCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeTrackerCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osg::NodeTrackerCallback::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::base_setName(const std::string & name) function, expected prototype:\nvoid osg::NodeTrackerCallback::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeTrackerCallback::setName(name);

		return 0;
	}

	// void osg::NodeTrackerCallback::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::base_computeDataVariance() function, expected prototype:\nvoid osg::NodeTrackerCallback::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeTrackerCallback::computeDataVariance();

		return 0;
	}

	// void osg::NodeTrackerCallback::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osg::NodeTrackerCallback::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeTrackerCallback::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osg::NodeTrackerCallback::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osg::NodeTrackerCallback::base_getUserData() function, expected prototype:\nosg::Referenced * osg::NodeTrackerCallback::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osg::NodeTrackerCallback::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->NodeTrackerCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osg::NodeTrackerCallback::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osg::NodeTrackerCallback::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osg::NodeTrackerCallback::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osg::NodeTrackerCallback::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->NodeTrackerCallback::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osg::NodeTrackerCallback::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osg::NodeTrackerCallback::base_releaseGLObjects(osg::State * arg1 = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::base_releaseGLObjects(osg::State * arg1 = 0) const function, expected prototype:\nvoid osg::NodeTrackerCallback::base_releaseGLObjects(osg::State * arg1 = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* _arg1=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->NodeTrackerCallback::releaseGLObjects(_arg1);

		return 0;
	}

	// osg::Object * osg::NodeTrackerCallback::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::NodeTrackerCallback::base_cloneType() const function, expected prototype:\nosg::Object * osg::NodeTrackerCallback::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::NodeTrackerCallback::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->NodeTrackerCallback::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osg::NodeTrackerCallback::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osg::NodeTrackerCallback::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osg::NodeTrackerCallback::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osg::NodeTrackerCallback::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osg::NodeTrackerCallback::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->NodeTrackerCallback::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osg::NodeTrackerCallback::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::NodeTrackerCallback::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osg::NodeTrackerCallback::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::NodeTrackerCallback::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->NodeTrackerCallback::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osg::NodeTrackerCallback::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::NodeTrackerCallback::base_libraryName() const function, expected prototype:\nconst char * osg::NodeTrackerCallback::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::NodeTrackerCallback::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->NodeTrackerCallback::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osg::NodeTrackerCallback::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osg::NodeTrackerCallback::base_className() const function, expected prototype:\nconst char * osg::NodeTrackerCallback::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osg::NodeTrackerCallback::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->NodeTrackerCallback::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:
	// void osg::NodeTrackerCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)
	static int _bind_op_call(lua_State *L) {
		if (!_lg_typecheck_op_call(L)) {
			luaL_error(L, "luna typecheck failed in void osg::NodeTrackerCallback::operator()(osg::Node * node, osg::NodeVisitor * nv) function, expected prototype:\nvoid osg::NodeTrackerCallback::operator()(osg::Node * node, osg::NodeVisitor * nv)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		osg::NodeVisitor* nv=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,3));

		osg::NodeTrackerCallback* self=Luna< osg::Referenced >::checkSubType< osg::NodeTrackerCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::NodeTrackerCallback::operator()(osg::Node *, osg::NodeVisitor *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->operator()(node, nv);

		return 0;
	}


};

osg::NodeTrackerCallback* LunaTraits< osg::NodeTrackerCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_NodeTrackerCallback::_bind_ctor(L);
}

void LunaTraits< osg::NodeTrackerCallback >::_bind_dtor(osg::NodeTrackerCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osg::NodeTrackerCallback >::className[] = "NodeTrackerCallback";
const char LunaTraits< osg::NodeTrackerCallback >::fullName[] = "osg::NodeTrackerCallback";
const char LunaTraits< osg::NodeTrackerCallback >::moduleName[] = "osg";
const char* LunaTraits< osg::NodeTrackerCallback >::parents[] = {"osg.NodeCallback", 0};
const int LunaTraits< osg::NodeTrackerCallback >::hash = 18241815;
const int LunaTraits< osg::NodeTrackerCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osg::NodeTrackerCallback >::methods[] = {
	{"setTrackNodePath", &luna_wrapper_osg_NodeTrackerCallback::_bind_setTrackNodePath},
	{"getTrackNodePath", &luna_wrapper_osg_NodeTrackerCallback::_bind_getTrackNodePath},
	{"setTrackNode", &luna_wrapper_osg_NodeTrackerCallback::_bind_setTrackNode},
	{"getTrackNode", &luna_wrapper_osg_NodeTrackerCallback::_bind_getTrackNode},
	{"update", &luna_wrapper_osg_NodeTrackerCallback::_bind_update},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osg_NodeTrackerCallback::_bind_base_setThreadSafeRefUnref},
	{"base_setName", &luna_wrapper_osg_NodeTrackerCallback::_bind_base_setName},
	{"base_computeDataVariance", &luna_wrapper_osg_NodeTrackerCallback::_bind_base_computeDataVariance},
	{"base_setUserData", &luna_wrapper_osg_NodeTrackerCallback::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osg_NodeTrackerCallback::_bind_base_getUserData},
	{"base_releaseGLObjects", &luna_wrapper_osg_NodeTrackerCallback::_bind_base_releaseGLObjects},
	{"base_cloneType", &luna_wrapper_osg_NodeTrackerCallback::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osg_NodeTrackerCallback::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osg_NodeTrackerCallback::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osg_NodeTrackerCallback::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osg_NodeTrackerCallback::_bind_base_className},
	{"op_call", &luna_wrapper_osg_NodeTrackerCallback::_bind_op_call},
	{"fromVoid", &luna_wrapper_osg_NodeTrackerCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_NodeTrackerCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osg_NodeTrackerCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osg::NodeTrackerCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osg_NodeTrackerCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osg::NodeTrackerCallback >::enumValues[] = {
	{0,0}
};


