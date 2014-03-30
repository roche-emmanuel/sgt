#include <plug_common.h>

#include <luna/wrappers/wrapper_osgViewer_Scene.h>

class luna_wrapper_osgViewer_Scene {
public:
	typedef Luna< osgViewer::Scene > luna_t;

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

		osgViewer::Scene* self= (osgViewer::Scene*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgViewer::Scene >::push(L,self,false);
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
		//osgViewer::Scene* ptr= dynamic_cast< osgViewer::Scene* >(Luna< osg::Referenced >::check(L,1));
		osgViewer::Scene* ptr= luna_caster< osg::Referenced, osgViewer::Scene >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgViewer::Scene >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setSceneData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getSceneData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getSceneData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDatabasePager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDatabasePager_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDatabasePager_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setImagePager(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getImagePager_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getImagePager_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_updateSceneGraph(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getScene(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// const char * osgViewer::Scene::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::Scene::className() const function, expected prototype:\nconst char * osgViewer::Scene::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::Scene::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgViewer::Scene::setSceneData(osg::Node * node)
	static int _bind_setSceneData(lua_State *L) {
		if (!_lg_typecheck_setSceneData(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Scene::setSceneData(osg::Node * node) function, expected prototype:\nvoid osgViewer::Scene::setSceneData(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));

		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Scene::setSceneData(osg::Node *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setSceneData(node);

		return 0;
	}

	// osg::Node * osgViewer::Scene::getSceneData()
	static int _bind_getSceneData_overload_1(lua_State *L) {
		if (!_lg_typecheck_getSceneData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Node * osgViewer::Scene::getSceneData() function, expected prototype:\nosg::Node * osgViewer::Scene::getSceneData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Node * osgViewer::Scene::getSceneData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Node * lret = self->getSceneData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// const osg::Node * osgViewer::Scene::getSceneData() const
	static int _bind_getSceneData_overload_2(lua_State *L) {
		if (!_lg_typecheck_getSceneData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Node * osgViewer::Scene::getSceneData() const function, expected prototype:\nconst osg::Node * osgViewer::Scene::getSceneData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Node * osgViewer::Scene::getSceneData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Node * lret = self->getSceneData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Node >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::Scene::getSceneData
	static int _bind_getSceneData(lua_State *L) {
		if (_lg_typecheck_getSceneData_overload_1(L)) return _bind_getSceneData_overload_1(L);
		if (_lg_typecheck_getSceneData_overload_2(L)) return _bind_getSceneData_overload_2(L);

		luaL_error(L, "error in function getSceneData, cannot match any of the overloads for function getSceneData:\n  getSceneData()\n  getSceneData()\n");
		return 0;
	}

	// void osgViewer::Scene::setDatabasePager(osgDB::DatabasePager * dp)
	static int _bind_setDatabasePager(lua_State *L) {
		if (!_lg_typecheck_setDatabasePager(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Scene::setDatabasePager(osgDB::DatabasePager * dp) function, expected prototype:\nvoid osgViewer::Scene::setDatabasePager(osgDB::DatabasePager * dp)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::DatabasePager* dp=(Luna< osg::Referenced >::checkSubType< osgDB::DatabasePager >(L,2));

		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Scene::setDatabasePager(osgDB::DatabasePager *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDatabasePager(dp);

		return 0;
	}

	// osgDB::DatabasePager * osgViewer::Scene::getDatabasePager()
	static int _bind_getDatabasePager_overload_1(lua_State *L) {
		if (!_lg_typecheck_getDatabasePager_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::DatabasePager * osgViewer::Scene::getDatabasePager() function, expected prototype:\nosgDB::DatabasePager * osgViewer::Scene::getDatabasePager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::DatabasePager * osgViewer::Scene::getDatabasePager(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::DatabasePager * lret = self->getDatabasePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabasePager >::push(L,lret,false);

		return 1;
	}

	// const osgDB::DatabasePager * osgViewer::Scene::getDatabasePager() const
	static int _bind_getDatabasePager_overload_2(lua_State *L) {
		if (!_lg_typecheck_getDatabasePager_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::DatabasePager * osgViewer::Scene::getDatabasePager() const function, expected prototype:\nconst osgDB::DatabasePager * osgViewer::Scene::getDatabasePager() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::DatabasePager * osgViewer::Scene::getDatabasePager() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::DatabasePager * lret = self->getDatabasePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::DatabasePager >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::Scene::getDatabasePager
	static int _bind_getDatabasePager(lua_State *L) {
		if (_lg_typecheck_getDatabasePager_overload_1(L)) return _bind_getDatabasePager_overload_1(L);
		if (_lg_typecheck_getDatabasePager_overload_2(L)) return _bind_getDatabasePager_overload_2(L);

		luaL_error(L, "error in function getDatabasePager, cannot match any of the overloads for function getDatabasePager:\n  getDatabasePager()\n  getDatabasePager()\n");
		return 0;
	}

	// void osgViewer::Scene::setImagePager(osgDB::ImagePager * ip)
	static int _bind_setImagePager(lua_State *L) {
		if (!_lg_typecheck_setImagePager(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Scene::setImagePager(osgDB::ImagePager * ip) function, expected prototype:\nvoid osgViewer::Scene::setImagePager(osgDB::ImagePager * ip)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgDB::ImagePager* ip=(Luna< osg::Referenced >::checkSubType< osgDB::ImagePager >(L,2));

		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Scene::setImagePager(osgDB::ImagePager *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setImagePager(ip);

		return 0;
	}

	// osgDB::ImagePager * osgViewer::Scene::getImagePager()
	static int _bind_getImagePager_overload_1(lua_State *L) {
		if (!_lg_typecheck_getImagePager_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgDB::ImagePager * osgViewer::Scene::getImagePager() function, expected prototype:\nosgDB::ImagePager * osgViewer::Scene::getImagePager()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgDB::ImagePager * osgViewer::Scene::getImagePager(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgDB::ImagePager * lret = self->getImagePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImagePager >::push(L,lret,false);

		return 1;
	}

	// const osgDB::ImagePager * osgViewer::Scene::getImagePager() const
	static int _bind_getImagePager_overload_2(lua_State *L) {
		if (!_lg_typecheck_getImagePager_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgDB::ImagePager * osgViewer::Scene::getImagePager() const function, expected prototype:\nconst osgDB::ImagePager * osgViewer::Scene::getImagePager() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgDB::ImagePager * osgViewer::Scene::getImagePager() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgDB::ImagePager * lret = self->getImagePager();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgDB::ImagePager >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgViewer::Scene::getImagePager
	static int _bind_getImagePager(lua_State *L) {
		if (_lg_typecheck_getImagePager_overload_1(L)) return _bind_getImagePager_overload_1(L);
		if (_lg_typecheck_getImagePager_overload_2(L)) return _bind_getImagePager_overload_2(L);

		luaL_error(L, "error in function getImagePager, cannot match any of the overloads for function getImagePager:\n  getImagePager()\n  getImagePager()\n");
		return 0;
	}

	// void osgViewer::Scene::updateSceneGraph(osg::NodeVisitor & updateVisitor)
	static int _bind_updateSceneGraph(lua_State *L) {
		if (!_lg_typecheck_updateSceneGraph(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Scene::updateSceneGraph(osg::NodeVisitor & updateVisitor) function, expected prototype:\nvoid osgViewer::Scene::updateSceneGraph(osg::NodeVisitor & updateVisitor)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodeVisitor* updateVisitor_ptr=(Luna< osg::Referenced >::checkSubType< osg::NodeVisitor >(L,2));
		if( !updateVisitor_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg updateVisitor in osgViewer::Scene::updateSceneGraph function");
		}
		osg::NodeVisitor & updateVisitor=*updateVisitor_ptr;

		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Scene::updateSceneGraph(osg::NodeVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateSceneGraph(updateVisitor);

		return 0;
	}

	// static osgViewer::Scene * osgViewer::Scene::getScene(osg::Node * node)
	static int _bind_getScene(lua_State *L) {
		if (!_lg_typecheck_getScene(L)) {
			luaL_error(L, "luna typecheck failed in static osgViewer::Scene * osgViewer::Scene::getScene(osg::Node * node) function, expected prototype:\nstatic osgViewer::Scene * osgViewer::Scene::getScene(osg::Node * node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,1));

		osgViewer::Scene * lret = osgViewer::Scene::getScene(node);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgViewer::Scene >::push(L,lret,false);

		return 1;
	}

	// void osgViewer::Scene::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgViewer::Scene::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgViewer::Scene::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgViewer::Scene::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Scene::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgViewer::Scene::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgViewer::Scene::base_className() const function, expected prototype:\nconst char * osgViewer::Scene::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgViewer::Scene* self=Luna< osg::Referenced >::checkSubType< osgViewer::Scene >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgViewer::Scene::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->Scene::className();
		lua_pushstring(L,lret);

		return 1;
	}


	// Operator binds:

};

osgViewer::Scene* LunaTraits< osgViewer::Scene >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgViewer::Scene >::_bind_dtor(osgViewer::Scene* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgViewer::Scene >::className[] = "Scene";
const char LunaTraits< osgViewer::Scene >::fullName[] = "osgViewer::Scene";
const char LunaTraits< osgViewer::Scene >::moduleName[] = "osgViewer";
const char* LunaTraits< osgViewer::Scene >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgViewer::Scene >::hash = 24989431;
const int LunaTraits< osgViewer::Scene >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgViewer::Scene >::methods[] = {
	{"className", &luna_wrapper_osgViewer_Scene::_bind_className},
	{"setSceneData", &luna_wrapper_osgViewer_Scene::_bind_setSceneData},
	{"getSceneData", &luna_wrapper_osgViewer_Scene::_bind_getSceneData},
	{"setDatabasePager", &luna_wrapper_osgViewer_Scene::_bind_setDatabasePager},
	{"getDatabasePager", &luna_wrapper_osgViewer_Scene::_bind_getDatabasePager},
	{"setImagePager", &luna_wrapper_osgViewer_Scene::_bind_setImagePager},
	{"getImagePager", &luna_wrapper_osgViewer_Scene::_bind_getImagePager},
	{"updateSceneGraph", &luna_wrapper_osgViewer_Scene::_bind_updateSceneGraph},
	{"getScene", &luna_wrapper_osgViewer_Scene::_bind_getScene},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgViewer_Scene::_bind_base_setThreadSafeRefUnref},
	{"base_className", &luna_wrapper_osgViewer_Scene::_bind_base_className},
	{"fromVoid", &luna_wrapper_osgViewer_Scene::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgViewer_Scene::_bind_asVoid},
	{"getTable", &luna_wrapper_osgViewer_Scene::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgViewer::Scene >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgViewer_Scene::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgViewer::Scene >::enumValues[] = {
	{0,0}
};


