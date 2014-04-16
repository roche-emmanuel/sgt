#include <plug_common.h>

#include <luna/wrappers/wrapper_ork_SceneManager.h>

class luna_wrapper_ork_SceneManager {
public:
	typedef Luna< ork::SceneManager > luna_t;

	inline static bool _lg_typecheck_getTable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;
		return true;
	}
	
	static int _bind_getTable(lua_State *L) {
		if (!_lg_typecheck_getTable(L)) {
			luaL_error(L, "luna typecheck failed in getTable function, expected prototype:\ngetTable(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		ork::Object* self=(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call getTable()");
		}
		
		luna_wrapper_base* wrapper = luna_caster<ork::Object,luna_wrapper_base>::cast(self); //dynamic_cast<luna_wrapper_base*>(self);
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

		ork::SceneManager* self= (ork::SceneManager*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< ork::SceneManager >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< ork::Object >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Derived class converters:
	static int _cast_from_Object(lua_State *L) {
		// all checked are already performed before reaching this point.
		//ork::SceneManager* ptr= dynamic_cast< ork::SceneManager* >(Luna< ork::Object >::check(L,1));
		ork::SceneManager* ptr= luna_caster< ork::Object, ork::SceneManager >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< ork::SceneManager >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_getRoot(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRoot(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCameraNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraMethod(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCameraMethod(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getNodeVar(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setNodeVar(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		if( !Luna<void>::has_uniqueid(L,3,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,3) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getResourceManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setResourceManager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScheduler(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setScheduler(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Scheduler >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCameraToScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCameraToScreen(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,72889784) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getWorldToScreen(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isVisible(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibility_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		if( (!(Luna< ork::box3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getVisibility_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,81304300)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::vec4d >::check(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,63151940) ) return false;
		if( (!(Luna< ork::box3d >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_draw(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFrameNumber(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getElapsedTime(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldCoordinates(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFrustumPlanes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,72889784) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,81304300)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentFrameBuffer(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCurrentFrameBuffer(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getCurrentProgram(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setCurrentProgram(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::Program >(L,1) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// ork::SceneManager::SceneManager()
	static ork::SceneManager* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneManager::SceneManager() function, expected prototype:\nork::SceneManager::SceneManager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new ork::SceneManager();
	}

	// ork::SceneManager::SceneManager(lua_Table * data)
	static ork::SceneManager* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneManager::SceneManager(lua_Table * data) function, expected prototype:\nork::SceneManager::SceneManager(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_ork_SceneManager(L,NULL);
	}

	// Overload binder for ork::SceneManager::SceneManager
	static ork::SceneManager* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function SceneManager, cannot match any of the overloads for function SceneManager:\n  SceneManager()\n  SceneManager(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::SceneNode > ork::SceneManager::getRoot()
	static int _bind_getRoot(lua_State *L) {
		if (!_lg_typecheck_getRoot(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneNode > ork::SceneManager::getRoot() function, expected prototype:\nork::ptr< ork::SceneNode > ork::SceneManager::getRoot()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneNode > ork::SceneManager::getRoot(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneNode > lret = self->getRoot();
		Luna< ork::SceneNode >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::SceneManager::setRoot(ork::ptr< ork::SceneNode > root)
	static int _bind_setRoot(lua_State *L) {
		if (!_lg_typecheck_setRoot(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneManager::setRoot(ork::ptr< ork::SceneNode > root) function, expected prototype:\nvoid ork::SceneManager::setRoot(ork::ptr< ork::SceneNode > root)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > root = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneManager::setRoot(ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRoot(root);

		return 0;
	}

	// ork::ptr< ork::SceneNode > ork::SceneManager::getCameraNode()
	static int _bind_getCameraNode(lua_State *L) {
		if (!_lg_typecheck_getCameraNode(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneNode > ork::SceneManager::getCameraNode() function, expected prototype:\nork::ptr< ork::SceneNode > ork::SceneManager::getCameraNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneNode > ork::SceneManager::getCameraNode(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneNode > lret = self->getCameraNode();
		Luna< ork::SceneNode >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::SceneManager::setCameraNode(const std::string & node)
	static int _bind_setCameraNode(lua_State *L) {
		if (!_lg_typecheck_setCameraNode(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneManager::setCameraNode(const std::string & node) function, expected prototype:\nvoid ork::SceneManager::setCameraNode(const std::string & node)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string node(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneManager::setCameraNode(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCameraNode(node);

		return 0;
	}

	// std::string ork::SceneManager::getCameraMethod()
	static int _bind_getCameraMethod(lua_State *L) {
		if (!_lg_typecheck_getCameraMethod(L)) {
			luaL_error(L, "luna typecheck failed in std::string ork::SceneManager::getCameraMethod() function, expected prototype:\nstd::string ork::SceneManager::getCameraMethod()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call std::string ork::SceneManager::getCameraMethod(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		std::string lret = self->getCameraMethod();
		lua_pushlstring(L,lret.data(),lret.size());

		return 1;
	}

	// void ork::SceneManager::setCameraMethod(const std::string & method)
	static int _bind_setCameraMethod(lua_State *L) {
		if (!_lg_typecheck_setCameraMethod(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneManager::setCameraMethod(const std::string & method) function, expected prototype:\nvoid ork::SceneManager::setCameraMethod(const std::string & method)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string method(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneManager::setCameraMethod(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCameraMethod(method);

		return 0;
	}

	// ork::ptr< ork::SceneNode > ork::SceneManager::getNodeVar(const std::string & name)
	static int _bind_getNodeVar(lua_State *L) {
		if (!_lg_typecheck_getNodeVar(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneNode > ork::SceneManager::getNodeVar(const std::string & name) function, expected prototype:\nork::ptr< ork::SceneNode > ork::SceneManager::getNodeVar(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneNode > ork::SceneManager::getNodeVar(const std::string &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneNode > lret = self->getNodeVar(name);
		Luna< ork::SceneNode >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::SceneManager::setNodeVar(const std::string & name, ork::ptr< ork::SceneNode > node)
	static int _bind_setNodeVar(lua_State *L) {
		if (!_lg_typecheck_setNodeVar(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneManager::setNodeVar(const std::string & name, ork::ptr< ork::SceneNode > node) function, expected prototype:\nvoid ork::SceneManager::setNodeVar(const std::string & name, ork::ptr< ork::SceneNode > node)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));
		ork::ptr< ork::SceneNode > node = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,3);

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneManager::setNodeVar(const std::string &, ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNodeVar(name, node);

		return 0;
	}

	// ork::ptr< ork::ResourceManager > ork::SceneManager::getResourceManager()
	static int _bind_getResourceManager(lua_State *L) {
		if (!_lg_typecheck_getResourceManager(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::ResourceManager > ork::SceneManager::getResourceManager() function, expected prototype:\nork::ptr< ork::ResourceManager > ork::SceneManager::getResourceManager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::ResourceManager > ork::SceneManager::getResourceManager(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::ResourceManager > lret = self->getResourceManager();
		Luna< ork::ResourceManager >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::SceneManager::setResourceManager(ork::ptr< ork::ResourceManager > resourceManager)
	static int _bind_setResourceManager(lua_State *L) {
		if (!_lg_typecheck_setResourceManager(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneManager::setResourceManager(ork::ptr< ork::ResourceManager > resourceManager) function, expected prototype:\nvoid ork::SceneManager::setResourceManager(ork::ptr< ork::ResourceManager > resourceManager)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::ResourceManager > resourceManager = Luna< ork::Object >::checkSubType< ork::ResourceManager >(L,2);

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneManager::setResourceManager(ork::ptr< ork::ResourceManager >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setResourceManager(resourceManager);

		return 0;
	}

	// ork::ptr< ork::Scheduler > ork::SceneManager::getScheduler()
	static int _bind_getScheduler(lua_State *L) {
		if (!_lg_typecheck_getScheduler(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::Scheduler > ork::SceneManager::getScheduler() function, expected prototype:\nork::ptr< ork::Scheduler > ork::SceneManager::getScheduler()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::Scheduler > ork::SceneManager::getScheduler(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::Scheduler > lret = self->getScheduler();
		Luna< ork::Scheduler >::push(L,lret.get(),false);

		return 1;
	}

	// void ork::SceneManager::setScheduler(ork::ptr< ork::Scheduler > scheduler)
	static int _bind_setScheduler(lua_State *L) {
		if (!_lg_typecheck_setScheduler(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneManager::setScheduler(ork::ptr< ork::Scheduler > scheduler) function, expected prototype:\nvoid ork::SceneManager::setScheduler(ork::ptr< ork::Scheduler > scheduler)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Scheduler > scheduler = Luna< ork::Object >::checkSubType< ork::Scheduler >(L,2);

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneManager::setScheduler(ork::ptr< ork::Scheduler >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setScheduler(scheduler);

		return 0;
	}

	// ork::mat4d ork::SceneManager::getCameraToScreen()
	static int _bind_getCameraToScreen(lua_State *L) {
		if (!_lg_typecheck_getCameraToScreen(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::SceneManager::getCameraToScreen() function, expected prototype:\nork::mat4d ork::SceneManager::getCameraToScreen()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::SceneManager::getCameraToScreen(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->getCameraToScreen();
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// void ork::SceneManager::setCameraToScreen(const ork::mat4d & cameraToScreen)
	static int _bind_setCameraToScreen(lua_State *L) {
		if (!_lg_typecheck_setCameraToScreen(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneManager::setCameraToScreen(const ork::mat4d & cameraToScreen) function, expected prototype:\nvoid ork::SceneManager::setCameraToScreen(const ork::mat4d & cameraToScreen)\nClass arguments details:\narg 1 ID = 72889784\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4d* cameraToScreen_ptr=(Luna< ork::mat4d >::check(L,2));
		if( !cameraToScreen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg cameraToScreen in ork::SceneManager::setCameraToScreen function");
		}
		const ork::mat4d & cameraToScreen=*cameraToScreen_ptr;

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneManager::setCameraToScreen(const ork::mat4d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setCameraToScreen(cameraToScreen);

		return 0;
	}

	// ork::mat4d ork::SceneManager::getWorldToScreen()
	static int _bind_getWorldToScreen(lua_State *L) {
		if (!_lg_typecheck_getWorldToScreen(L)) {
			luaL_error(L, "luna typecheck failed in ork::mat4d ork::SceneManager::getWorldToScreen() function, expected prototype:\nork::mat4d ork::SceneManager::getWorldToScreen()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::mat4d ork::SceneManager::getWorldToScreen(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::mat4d stack_lret = self->getWorldToScreen();
		ork::mat4d* lret = new ork::mat4d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::mat4d >::push(L,lret,true);

		return 1;
	}

	// bool ork::SceneManager::isVisible(const ork::vec3d & worldPoint)
	static int _bind_isVisible(lua_State *L) {
		if (!_lg_typecheck_isVisible(L)) {
			luaL_error(L, "luna typecheck failed in bool ork::SceneManager::isVisible(const ork::vec3d & worldPoint) function, expected prototype:\nbool ork::SceneManager::isVisible(const ork::vec3d & worldPoint)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec3d* worldPoint_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !worldPoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldPoint in ork::SceneManager::isVisible function");
		}
		const ork::vec3d & worldPoint=*worldPoint_ptr;

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool ork::SceneManager::isVisible(const ork::vec3d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isVisible(worldPoint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// ork::SceneManager::visibility ork::SceneManager::getVisibility(const ork::box3d & worldBounds)
	static int _bind_getVisibility_overload_1(lua_State *L) {
		if (!_lg_typecheck_getVisibility_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in ork::SceneManager::visibility ork::SceneManager::getVisibility(const ork::box3d & worldBounds) function, expected prototype:\nork::SceneManager::visibility ork::SceneManager::getVisibility(const ork::box3d & worldBounds)\nClass arguments details:\narg 1 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::box3d* worldBounds_ptr=(Luna< ork::box3d >::check(L,2));
		if( !worldBounds_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg worldBounds in ork::SceneManager::getVisibility function");
		}
		const ork::box3d & worldBounds=*worldBounds_ptr;

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::SceneManager::visibility ork::SceneManager::getVisibility(const ork::box3d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::SceneManager::visibility lret = self->getVisibility(worldBounds);
		lua_pushnumber(L,lret);

		return 1;
	}

	// static ork::SceneManager::visibility ork::SceneManager::getVisibility(const ork::vec4d * frustumPlanes, const ork::box3d & b)
	static int _bind_getVisibility_overload_2(lua_State *L) {
		if (!_lg_typecheck_getVisibility_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in static ork::SceneManager::visibility ork::SceneManager::getVisibility(const ork::vec4d * frustumPlanes, const ork::box3d & b) function, expected prototype:\nstatic ork::SceneManager::visibility ork::SceneManager::getVisibility(const ork::vec4d * frustumPlanes, const ork::box3d & b)\nClass arguments details:\narg 1 ID = 81304300\narg 2 ID = 63151940\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::vec4d* frustumPlanes=(Luna< ork::vec4d >::check(L,1));
		const ork::box3d* b_ptr=(Luna< ork::box3d >::check(L,2));
		if( !b_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg b in ork::SceneManager::getVisibility function");
		}
		const ork::box3d & b=*b_ptr;

		ork::SceneManager::visibility lret = ork::SceneManager::getVisibility(frustumPlanes, b);
		lua_pushnumber(L,lret);

		return 1;
	}

	// Overload binder for ork::SceneManager::getVisibility
	static int _bind_getVisibility(lua_State *L) {
		if (_lg_typecheck_getVisibility_overload_1(L)) return _bind_getVisibility_overload_1(L);
		if (_lg_typecheck_getVisibility_overload_2(L)) return _bind_getVisibility_overload_2(L);

		luaL_error(L, "error in function getVisibility, cannot match any of the overloads for function getVisibility:\n  getVisibility(const ork::box3d &)\n  getVisibility(const ork::vec4d *, const ork::box3d &)\n");
		return 0;
	}

	// void ork::SceneManager::update(double t, double dt)
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneManager::update(double t, double dt) function, expected prototype:\nvoid ork::SceneManager::update(double t, double dt)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double t=(double)lua_tonumber(L,2);
		double dt=(double)lua_tonumber(L,3);

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneManager::update(double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update(t, dt);

		return 0;
	}

	// void ork::SceneManager::draw()
	static int _bind_draw(lua_State *L) {
		if (!_lg_typecheck_draw(L)) {
			luaL_error(L, "luna typecheck failed in void ork::SceneManager::draw() function, expected prototype:\nvoid ork::SceneManager::draw()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void ork::SceneManager::draw(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->draw();

		return 0;
	}

	// unsigned int ork::SceneManager::getFrameNumber()
	static int _bind_getFrameNumber(lua_State *L) {
		if (!_lg_typecheck_getFrameNumber(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int ork::SceneManager::getFrameNumber() function, expected prototype:\nunsigned int ork::SceneManager::getFrameNumber()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int ork::SceneManager::getFrameNumber(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getFrameNumber();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::SceneManager::getTime()
	static int _bind_getTime(lua_State *L) {
		if (!_lg_typecheck_getTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::SceneManager::getTime() function, expected prototype:\ndouble ork::SceneManager::getTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::SceneManager::getTime(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// double ork::SceneManager::getElapsedTime()
	static int _bind_getElapsedTime(lua_State *L) {
		if (!_lg_typecheck_getElapsedTime(L)) {
			luaL_error(L, "luna typecheck failed in double ork::SceneManager::getElapsedTime() function, expected prototype:\ndouble ork::SceneManager::getElapsedTime()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double ork::SceneManager::getElapsedTime(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getElapsedTime();
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec3d ork::SceneManager::getWorldCoordinates(int x, int y)
	static int _bind_getWorldCoordinates(lua_State *L) {
		if (!_lg_typecheck_getWorldCoordinates(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d ork::SceneManager::getWorldCoordinates(int x, int y) function, expected prototype:\nork::vec3d ork::SceneManager::getWorldCoordinates(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d ork::SceneManager::getWorldCoordinates(int, int). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getWorldCoordinates(x, y);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// static void ork::SceneManager::getFrustumPlanes(const ork::mat4d & toScreen, ork::vec4d * frustumPlanes)
	static int _bind_getFrustumPlanes(lua_State *L) {
		if (!_lg_typecheck_getFrustumPlanes(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::SceneManager::getFrustumPlanes(const ork::mat4d & toScreen, ork::vec4d * frustumPlanes) function, expected prototype:\nstatic void ork::SceneManager::getFrustumPlanes(const ork::mat4d & toScreen, ork::vec4d * frustumPlanes)\nClass arguments details:\narg 1 ID = 72889784\narg 2 ID = 81304300\n\n%s",luna_dumpStack(L).c_str());
		}

		const ork::mat4d* toScreen_ptr=(Luna< ork::mat4d >::check(L,1));
		if( !toScreen_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg toScreen in ork::SceneManager::getFrustumPlanes function");
		}
		const ork::mat4d & toScreen=*toScreen_ptr;
		ork::vec4d* frustumPlanes=(Luna< ork::vec4d >::check(L,2));

		ork::SceneManager::getFrustumPlanes(toScreen, frustumPlanes);

		return 0;
	}

	// static ork::ptr< ork::FrameBuffer > ork::SceneManager::getCurrentFrameBuffer()
	static int _bind_getCurrentFrameBuffer(lua_State *L) {
		if (!_lg_typecheck_getCurrentFrameBuffer(L)) {
			luaL_error(L, "luna typecheck failed in static ork::ptr< ork::FrameBuffer > ork::SceneManager::getCurrentFrameBuffer() function, expected prototype:\nstatic ork::ptr< ork::FrameBuffer > ork::SceneManager::getCurrentFrameBuffer()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ptr< ork::FrameBuffer > lret = ork::SceneManager::getCurrentFrameBuffer();
		Luna< ork::FrameBuffer >::push(L,lret.get(),false);

		return 1;
	}

	// static void ork::SceneManager::setCurrentFrameBuffer(ork::ptr< ork::FrameBuffer > fb)
	static int _bind_setCurrentFrameBuffer(lua_State *L) {
		if (!_lg_typecheck_setCurrentFrameBuffer(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::SceneManager::setCurrentFrameBuffer(ork::ptr< ork::FrameBuffer > fb) function, expected prototype:\nstatic void ork::SceneManager::setCurrentFrameBuffer(ork::ptr< ork::FrameBuffer > fb)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::FrameBuffer > fb = Luna< ork::Object >::checkSubType< ork::FrameBuffer >(L,1);

		ork::SceneManager::setCurrentFrameBuffer(fb);

		return 0;
	}

	// static ork::ptr< ork::Program > ork::SceneManager::getCurrentProgram()
	static int _bind_getCurrentProgram(lua_State *L) {
		if (!_lg_typecheck_getCurrentProgram(L)) {
			luaL_error(L, "luna typecheck failed in static ork::ptr< ork::Program > ork::SceneManager::getCurrentProgram() function, expected prototype:\nstatic ork::ptr< ork::Program > ork::SceneManager::getCurrentProgram()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::ptr< ork::Program > lret = ork::SceneManager::getCurrentProgram();
		Luna< ork::Program >::push(L,lret.get(),false);

		return 1;
	}

	// static void ork::SceneManager::setCurrentProgram(ork::ptr< ork::Program > prog)
	static int _bind_setCurrentProgram(lua_State *L) {
		if (!_lg_typecheck_setCurrentProgram(L)) {
			luaL_error(L, "luna typecheck failed in static void ork::SceneManager::setCurrentProgram(ork::ptr< ork::Program > prog) function, expected prototype:\nstatic void ork::SceneManager::setCurrentProgram(ork::ptr< ork::Program > prog)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::Program > prog = Luna< ork::Object >::checkSubType< ork::Program >(L,1);

		ork::SceneManager::setCurrentProgram(prog);

		return 0;
	}

	// const char * ork::SceneManager::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * ork::SceneManager::base_toString() function, expected prototype:\nconst char * ork::SceneManager::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		ork::SceneManager* self=Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * ork::SceneManager::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->SceneManager::toString();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

ork::SceneManager* LunaTraits< ork::SceneManager >::_bind_ctor(lua_State *L) {
	return luna_wrapper_ork_SceneManager::_bind_ctor(L);
}

void LunaTraits< ork::SceneManager >::_bind_dtor(ork::SceneManager* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< ork::SceneManager >::className[] = "SceneManager";
const char LunaTraits< ork::SceneManager >::fullName[] = "ork::SceneManager";
const char LunaTraits< ork::SceneManager >::moduleName[] = "ork";
const char* LunaTraits< ork::SceneManager >::parents[] = {"ork.Object", 0};
const int LunaTraits< ork::SceneManager >::hash = 53477594;
const int LunaTraits< ork::SceneManager >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< ork::SceneManager >::methods[] = {
	{"getRoot", &luna_wrapper_ork_SceneManager::_bind_getRoot},
	{"setRoot", &luna_wrapper_ork_SceneManager::_bind_setRoot},
	{"getCameraNode", &luna_wrapper_ork_SceneManager::_bind_getCameraNode},
	{"setCameraNode", &luna_wrapper_ork_SceneManager::_bind_setCameraNode},
	{"getCameraMethod", &luna_wrapper_ork_SceneManager::_bind_getCameraMethod},
	{"setCameraMethod", &luna_wrapper_ork_SceneManager::_bind_setCameraMethod},
	{"getNodeVar", &luna_wrapper_ork_SceneManager::_bind_getNodeVar},
	{"setNodeVar", &luna_wrapper_ork_SceneManager::_bind_setNodeVar},
	{"getResourceManager", &luna_wrapper_ork_SceneManager::_bind_getResourceManager},
	{"setResourceManager", &luna_wrapper_ork_SceneManager::_bind_setResourceManager},
	{"getScheduler", &luna_wrapper_ork_SceneManager::_bind_getScheduler},
	{"setScheduler", &luna_wrapper_ork_SceneManager::_bind_setScheduler},
	{"getCameraToScreen", &luna_wrapper_ork_SceneManager::_bind_getCameraToScreen},
	{"setCameraToScreen", &luna_wrapper_ork_SceneManager::_bind_setCameraToScreen},
	{"getWorldToScreen", &luna_wrapper_ork_SceneManager::_bind_getWorldToScreen},
	{"isVisible", &luna_wrapper_ork_SceneManager::_bind_isVisible},
	{"getVisibility", &luna_wrapper_ork_SceneManager::_bind_getVisibility},
	{"update", &luna_wrapper_ork_SceneManager::_bind_update},
	{"draw", &luna_wrapper_ork_SceneManager::_bind_draw},
	{"getFrameNumber", &luna_wrapper_ork_SceneManager::_bind_getFrameNumber},
	{"getTime", &luna_wrapper_ork_SceneManager::_bind_getTime},
	{"getElapsedTime", &luna_wrapper_ork_SceneManager::_bind_getElapsedTime},
	{"getWorldCoordinates", &luna_wrapper_ork_SceneManager::_bind_getWorldCoordinates},
	{"getFrustumPlanes", &luna_wrapper_ork_SceneManager::_bind_getFrustumPlanes},
	{"getCurrentFrameBuffer", &luna_wrapper_ork_SceneManager::_bind_getCurrentFrameBuffer},
	{"setCurrentFrameBuffer", &luna_wrapper_ork_SceneManager::_bind_setCurrentFrameBuffer},
	{"getCurrentProgram", &luna_wrapper_ork_SceneManager::_bind_getCurrentProgram},
	{"setCurrentProgram", &luna_wrapper_ork_SceneManager::_bind_setCurrentProgram},
	{"base_toString", &luna_wrapper_ork_SceneManager::_bind_base_toString},
	{"fromVoid", &luna_wrapper_ork_SceneManager::_bind_fromVoid},
	{"asVoid", &luna_wrapper_ork_SceneManager::_bind_asVoid},
	{"getTable", &luna_wrapper_ork_SceneManager::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< ork::SceneManager >::converters[] = {
	{"ork::Object", &luna_wrapper_ork_SceneManager::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< ork::SceneManager >::enumValues[] = {
	{"FULLY_VISIBLE", ork::SceneManager::FULLY_VISIBLE},
	{"PARTIALLY_VISIBLE", ork::SceneManager::PARTIALLY_VISIBLE},
	{"INVISIBLE", ork::SceneManager::INVISIBLE},
	{0,0}
};


