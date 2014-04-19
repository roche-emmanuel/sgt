#include <plug_common.h>

#include <luna/wrappers/wrapper_land_ProlandDrawable.h>

class luna_wrapper_land_ProlandDrawable {
public:
	typedef Luna< land::ProlandDrawable > luna_t;

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

		land::ProlandDrawable* self= (land::ProlandDrawable*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< land::ProlandDrawable >::push(L,self,false);
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
		//land::ProlandDrawable* ptr= dynamic_cast< land::ProlandDrawable* >(Luna< osg::Referenced >::check(L,1));
		land::ProlandDrawable* ptr= luna_caster< osg::Referenced, land::ProlandDrawable >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< land::ProlandDrawable >::push(L,ptr,false);
		return 1;
	};

	static int _cast_from_ViewManager(lua_State *L) {
		// all checked are already performed before reaching this point.
		//land::ProlandDrawable* ptr= dynamic_cast< land::ProlandDrawable* >(Luna< proland::ViewManager >::check(L,1));
		land::ProlandDrawable* ptr= luna_caster< proland::ViewManager, land::ProlandDrawable >::cast(Luna< proland::ViewManager >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< land::ProlandDrawable >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,1381405)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1)) ) ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,1381405)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,1381405)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,3)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getWorldCoordinates(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getViewController(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getScene(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_reshape(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_mouseWheel(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		if( (lua_type(L,5)!=LUA_TNUMBER || lua_tointeger(L,5) != lua_tonumber(L,5)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_idle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_updateResources(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getWorldCoordinates(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getViewController(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getScene(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// land::ProlandDrawable::ProlandDrawable(ork::SceneManager * sman, proland::TerrainViewController * con)
	static land::ProlandDrawable* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in land::ProlandDrawable::ProlandDrawable(ork::SceneManager * sman, proland::TerrainViewController * con) function, expected prototype:\nland::ProlandDrawable::ProlandDrawable(ork::SceneManager * sman, proland::TerrainViewController * con)\nClass arguments details:\narg 1 ID = 1381405\narg 2 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::SceneManager* sman=(Luna< ork::Object >::checkSubType< ork::SceneManager >(L,1));
		proland::TerrainViewController* con=(Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,2));

		return new land::ProlandDrawable(sman, con);
	}

	// land::ProlandDrawable::ProlandDrawable(lua_Table * data, ork::SceneManager * sman, proland::TerrainViewController * con)
	static land::ProlandDrawable* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in land::ProlandDrawable::ProlandDrawable(lua_Table * data, ork::SceneManager * sman, proland::TerrainViewController * con) function, expected prototype:\nland::ProlandDrawable::ProlandDrawable(lua_Table * data, ork::SceneManager * sman, proland::TerrainViewController * con)\nClass arguments details:\narg 2 ID = 1381405\narg 3 ID = 1381405\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::SceneManager* sman=(Luna< ork::Object >::checkSubType< ork::SceneManager >(L,2));
		proland::TerrainViewController* con=(Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,3));

		return new wrapper_land_ProlandDrawable(L,NULL, sman, con);
	}

	// Overload binder for land::ProlandDrawable::ProlandDrawable
	static land::ProlandDrawable* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function ProlandDrawable, cannot match any of the overloads for function ProlandDrawable:\n  ProlandDrawable(ork::SceneManager *, proland::TerrainViewController *)\n  ProlandDrawable(lua_Table *, ork::SceneManager *, proland::TerrainViewController *)\n");
		return NULL;
	}


	// Function binds:
	// ork::vec3d land::ProlandDrawable::getWorldCoordinates(int x, int y)
	static int _bind_getWorldCoordinates(lua_State *L) {
		if (!_lg_typecheck_getWorldCoordinates(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d land::ProlandDrawable::getWorldCoordinates(int x, int y) function, expected prototype:\nork::vec3d land::ProlandDrawable::getWorldCoordinates(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d land::ProlandDrawable::getWorldCoordinates(int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->getWorldCoordinates(x, y);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::ptr< proland::TerrainViewController > land::ProlandDrawable::getViewController()
	static int _bind_getViewController(lua_State *L) {
		if (!_lg_typecheck_getViewController(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TerrainViewController > land::ProlandDrawable::getViewController() function, expected prototype:\nork::ptr< proland::TerrainViewController > land::ProlandDrawable::getViewController()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TerrainViewController > land::ProlandDrawable::getViewController(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TerrainViewController > lret = self->getViewController();
		Luna< proland::TerrainViewController >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::SceneManager > land::ProlandDrawable::getScene()
	static int _bind_getScene(lua_State *L) {
		if (!_lg_typecheck_getScene(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneManager > land::ProlandDrawable::getScene() function, expected prototype:\nork::ptr< ork::SceneManager > land::ProlandDrawable::getScene()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneManager > land::ProlandDrawable::getScene(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneManager > lret = self->getScene();
		Luna< ork::SceneManager >::push(L,lret.get(),false);

		return 1;
	}

	// void land::ProlandDrawable::reshape(int x, int y)
	static int _bind_reshape(lua_State *L) {
		if (!_lg_typecheck_reshape(L)) {
			luaL_error(L, "luna typecheck failed in void land::ProlandDrawable::reshape(int x, int y) function, expected prototype:\nvoid land::ProlandDrawable::reshape(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void land::ProlandDrawable::reshape(int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reshape(x, y);

		return 0;
	}

	// bool land::ProlandDrawable::mouseWheel(int b, int m, int x, int y)
	static int _bind_mouseWheel(lua_State *L) {
		if (!_lg_typecheck_mouseWheel(L)) {
			luaL_error(L, "luna typecheck failed in bool land::ProlandDrawable::mouseWheel(int b, int m, int x, int y) function, expected prototype:\nbool land::ProlandDrawable::mouseWheel(int b, int m, int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int b=(int)lua_tointeger(L,2);
		int m=(int)lua_tointeger(L,3);
		int x=(int)lua_tointeger(L,4);
		int y=(int)lua_tointeger(L,5);

		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool land::ProlandDrawable::mouseWheel(int, int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->mouseWheel(b, m, x, y);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void land::ProlandDrawable::idle(bool damaged)
	static int _bind_idle(lua_State *L) {
		if (!_lg_typecheck_idle(L)) {
			luaL_error(L, "luna typecheck failed in void land::ProlandDrawable::idle(bool damaged) function, expected prototype:\nvoid land::ProlandDrawable::idle(bool damaged)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool damaged=(bool)(lua_toboolean(L,2)==1);

		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void land::ProlandDrawable::idle(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->idle(damaged);

		return 0;
	}

	// void land::ProlandDrawable::updateResources()
	static int _bind_updateResources(lua_State *L) {
		if (!_lg_typecheck_updateResources(L)) {
			luaL_error(L, "luna typecheck failed in void land::ProlandDrawable::updateResources() function, expected prototype:\nvoid land::ProlandDrawable::updateResources()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void land::ProlandDrawable::updateResources(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->updateResources();

		return 0;
	}

	// void land::ProlandDrawable::drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void land::ProlandDrawable::drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid land::ProlandDrawable::drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in land::ProlandDrawable::drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void land::ProlandDrawable::drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawImplementation(renderInfo);

		return 0;
	}

	// osg::BoundingBox land::ProlandDrawable::computeBound() const
	static int _bind_computeBound(lua_State *L) {
		if (!_lg_typecheck_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBox land::ProlandDrawable::computeBound() const function, expected prototype:\nosg::BoundingBox land::ProlandDrawable::computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBox land::ProlandDrawable::computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBox stack_lret = self->computeBound();
		osg::BoundingBox* lret = new osg::BoundingBox(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBox >::push(L,lret,true);

		return 1;
	}

	// ork::vec3d land::ProlandDrawable::base_getWorldCoordinates(int x, int y)
	static int _bind_base_getWorldCoordinates(lua_State *L) {
		if (!_lg_typecheck_base_getWorldCoordinates(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d land::ProlandDrawable::base_getWorldCoordinates(int x, int y) function, expected prototype:\nork::vec3d land::ProlandDrawable::base_getWorldCoordinates(int x, int y)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int x=(int)lua_tointeger(L,2);
		int y=(int)lua_tointeger(L,3);

		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d land::ProlandDrawable::base_getWorldCoordinates(int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::vec3d stack_lret = self->ProlandDrawable::getWorldCoordinates(x, y);
		ork::vec3d* lret = new ork::vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,true);

		return 1;
	}

	// ork::ptr< proland::TerrainViewController > land::ProlandDrawable::base_getViewController()
	static int _bind_base_getViewController(lua_State *L) {
		if (!_lg_typecheck_base_getViewController(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< proland::TerrainViewController > land::ProlandDrawable::base_getViewController() function, expected prototype:\nork::ptr< proland::TerrainViewController > land::ProlandDrawable::base_getViewController()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< proland::TerrainViewController > land::ProlandDrawable::base_getViewController(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< proland::TerrainViewController > lret = self->ProlandDrawable::getViewController();
		Luna< proland::TerrainViewController >::push(L,lret.get(),false);

		return 1;
	}

	// ork::ptr< ork::SceneManager > land::ProlandDrawable::base_getScene()
	static int _bind_base_getScene(lua_State *L) {
		if (!_lg_typecheck_base_getScene(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneManager > land::ProlandDrawable::base_getScene() function, expected prototype:\nork::ptr< ork::SceneManager > land::ProlandDrawable::base_getScene()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneManager > land::ProlandDrawable::base_getScene(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneManager > lret = self->ProlandDrawable::getScene();
		Luna< ork::SceneManager >::push(L,lret.get(),false);

		return 1;
	}

	// void land::ProlandDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void land::ProlandDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid land::ProlandDrawable::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in land::ProlandDrawable::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void land::ProlandDrawable::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ProlandDrawable::drawImplementation(renderInfo);

		return 0;
	}

	// osg::BoundingBox land::ProlandDrawable::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBox land::ProlandDrawable::base_computeBound() const function, expected prototype:\nosg::BoundingBox land::ProlandDrawable::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		land::ProlandDrawable* self=Luna< osg::Referenced >::checkSubType< land::ProlandDrawable >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBox land::ProlandDrawable::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBox stack_lret = self->ProlandDrawable::computeBound();
		osg::BoundingBox* lret = new osg::BoundingBox(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBox >::push(L,lret,true);

		return 1;
	}


	// Operator binds:

	inline static bool _lg_typecheck_baseCast_proland_ViewManager(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	static int _bind_baseCast_proland_ViewManager(lua_State *L) {
		if (!_lg_typecheck_baseCast_proland_ViewManager(L)) {
			luaL_error(L, "luna typecheck failed in baseCast_proland_ViewManager function, expected prototype:\nbaseCast(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* self=(Luna< osg::Referenced >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call baseCast(...)");
		}
		
		proland::ViewManager* res = luna_caster<osg::Referenced,proland::ViewManager>::cast(self); // dynamic_cast<proland::ViewManager*>(self);
		if(!res)
			return 0;
			
		Luna< proland::ViewManager >::push(L,res,false);
		return 1;

	}

};

land::ProlandDrawable* LunaTraits< land::ProlandDrawable >::_bind_ctor(lua_State *L) {
	return luna_wrapper_land_ProlandDrawable::_bind_ctor(L);
}

void LunaTraits< land::ProlandDrawable >::_bind_dtor(land::ProlandDrawable* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< land::ProlandDrawable >::className[] = "ProlandDrawable";
const char LunaTraits< land::ProlandDrawable >::fullName[] = "land::ProlandDrawable";
const char LunaTraits< land::ProlandDrawable >::moduleName[] = "land";
const char* LunaTraits< land::ProlandDrawable >::parents[] = {"osg.Drawable", "proland.ViewManager", 0};
const int LunaTraits< land::ProlandDrawable >::hash = 34744539;
const int LunaTraits< land::ProlandDrawable >::uniqueIDs[] = {50169651, 2915545,0};

luna_RegType LunaTraits< land::ProlandDrawable >::methods[] = {
	{"getWorldCoordinates", &luna_wrapper_land_ProlandDrawable::_bind_getWorldCoordinates},
	{"getViewController", &luna_wrapper_land_ProlandDrawable::_bind_getViewController},
	{"getScene", &luna_wrapper_land_ProlandDrawable::_bind_getScene},
	{"reshape", &luna_wrapper_land_ProlandDrawable::_bind_reshape},
	{"mouseWheel", &luna_wrapper_land_ProlandDrawable::_bind_mouseWheel},
	{"idle", &luna_wrapper_land_ProlandDrawable::_bind_idle},
	{"updateResources", &luna_wrapper_land_ProlandDrawable::_bind_updateResources},
	{"drawImplementation", &luna_wrapper_land_ProlandDrawable::_bind_drawImplementation},
	{"computeBound", &luna_wrapper_land_ProlandDrawable::_bind_computeBound},
	{"base_getWorldCoordinates", &luna_wrapper_land_ProlandDrawable::_bind_base_getWorldCoordinates},
	{"base_getViewController", &luna_wrapper_land_ProlandDrawable::_bind_base_getViewController},
	{"base_getScene", &luna_wrapper_land_ProlandDrawable::_bind_base_getScene},
	{"base_drawImplementation", &luna_wrapper_land_ProlandDrawable::_bind_base_drawImplementation},
	{"base_computeBound", &luna_wrapper_land_ProlandDrawable::_bind_base_computeBound},
	{"fromVoid", &luna_wrapper_land_ProlandDrawable::_bind_fromVoid},
	{"asVoid", &luna_wrapper_land_ProlandDrawable::_bind_asVoid},
	{"getTable", &luna_wrapper_land_ProlandDrawable::_bind_getTable},
	{"asViewManager", &luna_wrapper_land_ProlandDrawable::_bind_baseCast_proland_ViewManager},
	{0,0}
};

luna_ConverterType LunaTraits< land::ProlandDrawable >::converters[] = {
	{"osg::Referenced", &luna_wrapper_land_ProlandDrawable::_cast_from_Referenced},
	{"proland::ViewManager", &luna_wrapper_land_ProlandDrawable::_cast_from_ViewManager},
	{0,0}
};

luna_RegEnumType LunaTraits< land::ProlandDrawable >::enumValues[] = {
	{0,0}
};


