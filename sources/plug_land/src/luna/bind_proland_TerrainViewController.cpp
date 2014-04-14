#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_TerrainViewController.h>

class luna_wrapper_proland_TerrainViewController {
public:
	typedef Luna< proland::TerrainViewController > luna_t;

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

		proland::TerrainViewController* self= (proland::TerrainViewController*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::TerrainViewController >::push(L,self,false);
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
		//proland::TerrainViewController* ptr= dynamic_cast< proland::TerrainViewController* >(Luna< ork::Object >::check(L,1));
		proland::TerrainViewController* ptr= luna_caster< ork::Object, proland::TerrainViewController >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::TerrainViewController >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,1381405) ) return false;
		if( !Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGroundHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setGroundHeight(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_move(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_moveForward(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_turn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolate(lua_State *L) {
		if( lua_gettop(L)!=12 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( lua_type(L,10)!=LUA_TNUMBER ) return false;
		if( lua_type(L,11)!=LUA_TNUMBER ) return false;
		if( lua_type(L,12)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolatePos(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_interpolateDirection(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setProjection(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,81304302) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getFov(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getX0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getY0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTheta(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPhi(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getD(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getZoom(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPosition(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setFov(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setX0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setY0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTheta(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPhi(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setD(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setZoom(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPosition(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getHeight(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_move(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,81304269) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,81304269) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_moveForward(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_turn(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_interpolate(lua_State *L) {
		if( lua_gettop(L)!=12 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		if( lua_type(L,9)!=LUA_TNUMBER ) return false;
		if( lua_type(L,10)!=LUA_TNUMBER ) return false;
		if( lua_type(L,11)!=LUA_TNUMBER ) return false;
		if( lua_type(L,12)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_interpolatePos(lua_State *L) {
		if( lua_gettop(L)!=8 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		if( lua_type(L,8)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setProjection(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,81304302) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::TerrainViewController::TerrainViewController(ork::ptr< ork::SceneNode > node, double d0)
	static proland::TerrainViewController* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainViewController::TerrainViewController(ork::ptr< ork::SceneNode > node, double d0) function, expected prototype:\nproland::TerrainViewController::TerrainViewController(ork::ptr< ork::SceneNode > node, double d0)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > node = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		double d0=(double)lua_tonumber(L,2);

		return new proland::TerrainViewController(node, d0);
	}

	// proland::TerrainViewController::TerrainViewController(lua_Table * data, ork::ptr< ork::SceneNode > node, double d0)
	static proland::TerrainViewController* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::TerrainViewController::TerrainViewController(lua_Table * data, ork::ptr< ork::SceneNode > node, double d0) function, expected prototype:\nproland::TerrainViewController::TerrainViewController(lua_Table * data, ork::ptr< ork::SceneNode > node, double d0)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > node = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);
		double d0=(double)lua_tonumber(L,3);

		return new wrapper_proland_TerrainViewController(L,NULL, node, d0);
	}

	// Overload binder for proland::TerrainViewController::TerrainViewController
	static proland::TerrainViewController* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function TerrainViewController, cannot match any of the overloads for function TerrainViewController:\n  TerrainViewController(ork::ptr< ork::SceneNode >, double)\n  TerrainViewController(lua_Table *, ork::ptr< ork::SceneNode >, double)\n");
		return NULL;
	}


	// Function binds:
	// ork::ptr< ork::SceneNode > proland::TerrainViewController::getNode()
	static int _bind_getNode(lua_State *L) {
		if (!_lg_typecheck_getNode(L)) {
			luaL_error(L, "luna typecheck failed in ork::ptr< ork::SceneNode > proland::TerrainViewController::getNode() function, expected prototype:\nork::ptr< ork::SceneNode > proland::TerrainViewController::getNode()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::ptr< ork::SceneNode > proland::TerrainViewController::getNode(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		ork::ptr< ork::SceneNode > lret = self->getNode();
		Luna< ork::SceneNode >::push(L,lret.get(),false);

		return 1;
	}

	// void proland::TerrainViewController::setNode(ork::ptr< ork::SceneNode > node)
	static int _bind_setNode(lua_State *L) {
		if (!_lg_typecheck_setNode(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::setNode(ork::ptr< ork::SceneNode > node) function, expected prototype:\nvoid proland::TerrainViewController::setNode(ork::ptr< ork::SceneNode > node)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > node = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::setNode(ork::ptr< ork::SceneNode >). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setNode(node);

		return 0;
	}

	// float proland::TerrainViewController::getGroundHeight()
	static int _bind_getGroundHeight(lua_State *L) {
		if (!_lg_typecheck_getGroundHeight(L)) {
			luaL_error(L, "luna typecheck failed in float proland::TerrainViewController::getGroundHeight() function, expected prototype:\nfloat proland::TerrainViewController::getGroundHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float proland::TerrainViewController::getGroundHeight(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getGroundHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainViewController::setGroundHeight(float groundHeight)
	static int _bind_setGroundHeight(lua_State *L) {
		if (!_lg_typecheck_setGroundHeight(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::setGroundHeight(float groundHeight) function, expected prototype:\nvoid proland::TerrainViewController::setGroundHeight(float groundHeight)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float groundHeight=(float)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::setGroundHeight(float). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGroundHeight(groundHeight);

		return 0;
	}

	// double proland::TerrainViewController::getHeight()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in double proland::TerrainViewController::getHeight() function, expected prototype:\ndouble proland::TerrainViewController::getHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::TerrainViewController::getHeight(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainViewController::move(ork::vec3d & oldp, ork::vec3d & p)
	static int _bind_move(lua_State *L) {
		if (!_lg_typecheck_move(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::move(ork::vec3d & oldp, ork::vec3d & p) function, expected prototype:\nvoid proland::TerrainViewController::move(ork::vec3d & oldp, ork::vec3d & p)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* oldp_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !oldp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg oldp in proland::TerrainViewController::move function");
		}
		ork::vec3d & oldp=*oldp_ptr;
		ork::vec3d* p_ptr=(Luna< ork::vec3d >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::TerrainViewController::move function");
		}
		ork::vec3d & p=*p_ptr;

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::move(ork::vec3d &, ork::vec3d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->move(oldp, p);

		return 0;
	}

	// void proland::TerrainViewController::moveForward(double distance)
	static int _bind_moveForward(lua_State *L) {
		if (!_lg_typecheck_moveForward(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::moveForward(double distance) function, expected prototype:\nvoid proland::TerrainViewController::moveForward(double distance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double distance=(double)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::moveForward(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->moveForward(distance);

		return 0;
	}

	// void proland::TerrainViewController::turn(double angle)
	static int _bind_turn(lua_State *L) {
		if (!_lg_typecheck_turn(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::turn(double angle) function, expected prototype:\nvoid proland::TerrainViewController::turn(double angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::turn(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->turn(angle);

		return 0;
	}

	// double proland::TerrainViewController::interpolate(double sx0, double sy0, double stheta, double sphi, double sd, double dx0, double dy0, double dtheta, double dphi, double dd, double t)
	static int _bind_interpolate(lua_State *L) {
		if (!_lg_typecheck_interpolate(L)) {
			luaL_error(L, "luna typecheck failed in double proland::TerrainViewController::interpolate(double sx0, double sy0, double stheta, double sphi, double sd, double dx0, double dy0, double dtheta, double dphi, double dd, double t) function, expected prototype:\ndouble proland::TerrainViewController::interpolate(double sx0, double sy0, double stheta, double sphi, double sd, double dx0, double dy0, double dtheta, double dphi, double dd, double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double sx0=(double)lua_tonumber(L,2);
		double sy0=(double)lua_tonumber(L,3);
		double stheta=(double)lua_tonumber(L,4);
		double sphi=(double)lua_tonumber(L,5);
		double sd=(double)lua_tonumber(L,6);
		double dx0=(double)lua_tonumber(L,7);
		double dy0=(double)lua_tonumber(L,8);
		double dtheta=(double)lua_tonumber(L,9);
		double dphi=(double)lua_tonumber(L,10);
		double dd=(double)lua_tonumber(L,11);
		double t=(double)lua_tonumber(L,12);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::TerrainViewController::interpolate(double, double, double, double, double, double, double, double, double, double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->interpolate(sx0, sy0, stheta, sphi, sd, dx0, dy0, dtheta, dphi, dd, t);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainViewController::interpolatePos(double sx0, double sy0, double dx0, double dy0, double t, double & x0, double & y0)
	static int _bind_interpolatePos(lua_State *L) {
		if (!_lg_typecheck_interpolatePos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::interpolatePos(double sx0, double sy0, double dx0, double dy0, double t, double & x0, double & y0) function, expected prototype:\nvoid proland::TerrainViewController::interpolatePos(double sx0, double sy0, double dx0, double dy0, double t, double & x0, double & y0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double sx0=(double)lua_tonumber(L,2);
		double sy0=(double)lua_tonumber(L,3);
		double dx0=(double)lua_tonumber(L,4);
		double dy0=(double)lua_tonumber(L,5);
		double t=(double)lua_tonumber(L,6);
		double x0=(double)lua_tonumber(L,7);
		double y0=(double)lua_tonumber(L,8);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::interpolatePos(double, double, double, double, double, double &, double &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->interpolatePos(sx0, sy0, dx0, dy0, t, x0, y0);

		lua_pushnumber(L,x0);
		lua_pushnumber(L,y0);
		return 2;
	}

	// void proland::TerrainViewController::interpolateDirection(double slon, double slat, double elon, double elat, double t, double & lon, double & lat)
	static int _bind_interpolateDirection(lua_State *L) {
		if (!_lg_typecheck_interpolateDirection(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::interpolateDirection(double slon, double slat, double elon, double elat, double t, double & lon, double & lat) function, expected prototype:\nvoid proland::TerrainViewController::interpolateDirection(double slon, double slat, double elon, double elat, double t, double & lon, double & lat)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double slon=(double)lua_tonumber(L,2);
		double slat=(double)lua_tonumber(L,3);
		double elon=(double)lua_tonumber(L,4);
		double elat=(double)lua_tonumber(L,5);
		double t=(double)lua_tonumber(L,6);
		double lon=(double)lua_tonumber(L,7);
		double lat=(double)lua_tonumber(L,8);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::interpolateDirection(double, double, double, double, double, double &, double &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->interpolateDirection(slon, slat, elon, elat, t, lon, lat);

		lua_pushnumber(L,lon);
		lua_pushnumber(L,lat);
		return 2;
	}

	// void proland::TerrainViewController::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::update() function, expected prototype:\nvoid proland::TerrainViewController::update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::update(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update();

		return 0;
	}

	// void proland::TerrainViewController::setProjection(float znear = 0.0f, float zfar = 0.0f, ork::vec4f viewport = ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f))
	static int _bind_setProjection(lua_State *L) {
		if (!_lg_typecheck_setProjection(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::setProjection(float znear = 0.0f, float zfar = 0.0f, ork::vec4f viewport = ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f)) function, expected prototype:\nvoid proland::TerrainViewController::setProjection(float znear = 0.0f, float zfar = 0.0f, ork::vec4f viewport = ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f))\nClass arguments details:\narg 3 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float znear=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.0f;
		float zfar=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;
		ork::vec4f* viewport_ptr=luatop>3 ? (Luna< ork::vec4f >::check(L,4)) : NULL;
		if( luatop>3 && !viewport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewport in proland::TerrainViewController::setProjection function");
		}
		ork::vec4f viewport=luatop>3 ? *viewport_ptr : (ork::vec4f)ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::setProjection(float, float, ork::vec4f). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setProjection(znear, zfar, viewport);

		return 0;
	}

	// double proland::TerrainViewController::fov()
	static int _bind_getFov(lua_State *L) {
		if (!_lg_typecheck_getFov(L)) {
			luaL_error(L, "luna typecheck failed in double proland::TerrainViewController::fov() function, expected prototype:\ndouble proland::TerrainViewController::fov()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::TerrainViewController::fov(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->fov;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::TerrainViewController::x0()
	static int _bind_getX0(lua_State *L) {
		if (!_lg_typecheck_getX0(L)) {
			luaL_error(L, "luna typecheck failed in double proland::TerrainViewController::x0() function, expected prototype:\ndouble proland::TerrainViewController::x0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::TerrainViewController::x0(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->x0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::TerrainViewController::y0()
	static int _bind_getY0(lua_State *L) {
		if (!_lg_typecheck_getY0(L)) {
			luaL_error(L, "luna typecheck failed in double proland::TerrainViewController::y0() function, expected prototype:\ndouble proland::TerrainViewController::y0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::TerrainViewController::y0(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->y0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::TerrainViewController::theta()
	static int _bind_getTheta(lua_State *L) {
		if (!_lg_typecheck_getTheta(L)) {
			luaL_error(L, "luna typecheck failed in double proland::TerrainViewController::theta() function, expected prototype:\ndouble proland::TerrainViewController::theta()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::TerrainViewController::theta(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->theta;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::TerrainViewController::phi()
	static int _bind_getPhi(lua_State *L) {
		if (!_lg_typecheck_getPhi(L)) {
			luaL_error(L, "luna typecheck failed in double proland::TerrainViewController::phi() function, expected prototype:\ndouble proland::TerrainViewController::phi()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::TerrainViewController::phi(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->phi;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::TerrainViewController::d()
	static int _bind_getD(lua_State *L) {
		if (!_lg_typecheck_getD(L)) {
			luaL_error(L, "luna typecheck failed in double proland::TerrainViewController::d() function, expected prototype:\ndouble proland::TerrainViewController::d()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::TerrainViewController::d(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->d;
		lua_pushnumber(L,lret);

		return 1;
	}

	// double proland::TerrainViewController::zoom()
	static int _bind_getZoom(lua_State *L) {
		if (!_lg_typecheck_getZoom(L)) {
			luaL_error(L, "luna typecheck failed in double proland::TerrainViewController::zoom() function, expected prototype:\ndouble proland::TerrainViewController::zoom()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::TerrainViewController::zoom(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->zoom;
		lua_pushnumber(L,lret);

		return 1;
	}

	// ork::vec3d proland::TerrainViewController::position()
	static int _bind_getPosition(lua_State *L) {
		if (!_lg_typecheck_getPosition(L)) {
			luaL_error(L, "luna typecheck failed in ork::vec3d proland::TerrainViewController::position() function, expected prototype:\nork::vec3d proland::TerrainViewController::position()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call ork::vec3d proland::TerrainViewController::position(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const ork::vec3d* lret = &self->position;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< ork::vec3d >::push(L,lret,false);

		return 1;
	}

	// void proland::TerrainViewController::fov(double value)
	static int _bind_setFov(lua_State *L) {
		if (!_lg_typecheck_setFov(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::fov(double value) function, expected prototype:\nvoid proland::TerrainViewController::fov(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::fov(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->fov = value;

		return 0;
	}

	// void proland::TerrainViewController::x0(double value)
	static int _bind_setX0(lua_State *L) {
		if (!_lg_typecheck_setX0(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::x0(double value) function, expected prototype:\nvoid proland::TerrainViewController::x0(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::x0(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->x0 = value;

		return 0;
	}

	// void proland::TerrainViewController::y0(double value)
	static int _bind_setY0(lua_State *L) {
		if (!_lg_typecheck_setY0(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::y0(double value) function, expected prototype:\nvoid proland::TerrainViewController::y0(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::y0(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->y0 = value;

		return 0;
	}

	// void proland::TerrainViewController::theta(double value)
	static int _bind_setTheta(lua_State *L) {
		if (!_lg_typecheck_setTheta(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::theta(double value) function, expected prototype:\nvoid proland::TerrainViewController::theta(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::theta(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->theta = value;

		return 0;
	}

	// void proland::TerrainViewController::phi(double value)
	static int _bind_setPhi(lua_State *L) {
		if (!_lg_typecheck_setPhi(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::phi(double value) function, expected prototype:\nvoid proland::TerrainViewController::phi(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::phi(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->phi = value;

		return 0;
	}

	// void proland::TerrainViewController::d(double value)
	static int _bind_setD(lua_State *L) {
		if (!_lg_typecheck_setD(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::d(double value) function, expected prototype:\nvoid proland::TerrainViewController::d(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::d(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->d = value;

		return 0;
	}

	// void proland::TerrainViewController::zoom(double value)
	static int _bind_setZoom(lua_State *L) {
		if (!_lg_typecheck_setZoom(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::zoom(double value) function, expected prototype:\nvoid proland::TerrainViewController::zoom(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::zoom(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->zoom = value;

		return 0;
	}

	// void proland::TerrainViewController::position(ork::vec3d value)
	static int _bind_setPosition(lua_State *L) {
		if (!_lg_typecheck_setPosition(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::position(ork::vec3d value) function, expected prototype:\nvoid proland::TerrainViewController::position(ork::vec3d value)\nClass arguments details:\narg 1 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* value_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in proland::TerrainViewController::position function");
		}
		ork::vec3d value=*value_ptr;

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::position(ork::vec3d). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->position = value;

		return 0;
	}

	// const char * proland::TerrainViewController::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::TerrainViewController::base_toString() function, expected prototype:\nconst char * proland::TerrainViewController::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::TerrainViewController::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->TerrainViewController::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// double proland::TerrainViewController::base_getHeight()
	static int _bind_base_getHeight(lua_State *L) {
		if (!_lg_typecheck_base_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in double proland::TerrainViewController::base_getHeight() function, expected prototype:\ndouble proland::TerrainViewController::base_getHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::TerrainViewController::base_getHeight(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->TerrainViewController::getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainViewController::base_move(ork::vec3d & oldp, ork::vec3d & p)
	static int _bind_base_move(lua_State *L) {
		if (!_lg_typecheck_base_move(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::base_move(ork::vec3d & oldp, ork::vec3d & p) function, expected prototype:\nvoid proland::TerrainViewController::base_move(ork::vec3d & oldp, ork::vec3d & p)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* oldp_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !oldp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg oldp in proland::TerrainViewController::base_move function");
		}
		ork::vec3d & oldp=*oldp_ptr;
		ork::vec3d* p_ptr=(Luna< ork::vec3d >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::TerrainViewController::base_move function");
		}
		ork::vec3d & p=*p_ptr;

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::base_move(ork::vec3d &, ork::vec3d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainViewController::move(oldp, p);

		return 0;
	}

	// void proland::TerrainViewController::base_moveForward(double distance)
	static int _bind_base_moveForward(lua_State *L) {
		if (!_lg_typecheck_base_moveForward(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::base_moveForward(double distance) function, expected prototype:\nvoid proland::TerrainViewController::base_moveForward(double distance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double distance=(double)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::base_moveForward(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainViewController::moveForward(distance);

		return 0;
	}

	// void proland::TerrainViewController::base_turn(double angle)
	static int _bind_base_turn(lua_State *L) {
		if (!_lg_typecheck_base_turn(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::base_turn(double angle) function, expected prototype:\nvoid proland::TerrainViewController::base_turn(double angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::base_turn(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainViewController::turn(angle);

		return 0;
	}

	// double proland::TerrainViewController::base_interpolate(double sx0, double sy0, double stheta, double sphi, double sd, double dx0, double dy0, double dtheta, double dphi, double dd, double t)
	static int _bind_base_interpolate(lua_State *L) {
		if (!_lg_typecheck_base_interpolate(L)) {
			luaL_error(L, "luna typecheck failed in double proland::TerrainViewController::base_interpolate(double sx0, double sy0, double stheta, double sphi, double sd, double dx0, double dy0, double dtheta, double dphi, double dd, double t) function, expected prototype:\ndouble proland::TerrainViewController::base_interpolate(double sx0, double sy0, double stheta, double sphi, double sd, double dx0, double dy0, double dtheta, double dphi, double dd, double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double sx0=(double)lua_tonumber(L,2);
		double sy0=(double)lua_tonumber(L,3);
		double stheta=(double)lua_tonumber(L,4);
		double sphi=(double)lua_tonumber(L,5);
		double sd=(double)lua_tonumber(L,6);
		double dx0=(double)lua_tonumber(L,7);
		double dy0=(double)lua_tonumber(L,8);
		double dtheta=(double)lua_tonumber(L,9);
		double dphi=(double)lua_tonumber(L,10);
		double dd=(double)lua_tonumber(L,11);
		double t=(double)lua_tonumber(L,12);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::TerrainViewController::base_interpolate(double, double, double, double, double, double, double, double, double, double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->TerrainViewController::interpolate(sx0, sy0, stheta, sphi, sd, dx0, dy0, dtheta, dphi, dd, t);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::TerrainViewController::base_interpolatePos(double sx0, double sy0, double dx0, double dy0, double t, double & x0, double & y0)
	static int _bind_base_interpolatePos(lua_State *L) {
		if (!_lg_typecheck_base_interpolatePos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::base_interpolatePos(double sx0, double sy0, double dx0, double dy0, double t, double & x0, double & y0) function, expected prototype:\nvoid proland::TerrainViewController::base_interpolatePos(double sx0, double sy0, double dx0, double dy0, double t, double & x0, double & y0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double sx0=(double)lua_tonumber(L,2);
		double sy0=(double)lua_tonumber(L,3);
		double dx0=(double)lua_tonumber(L,4);
		double dy0=(double)lua_tonumber(L,5);
		double t=(double)lua_tonumber(L,6);
		double x0=(double)lua_tonumber(L,7);
		double y0=(double)lua_tonumber(L,8);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::base_interpolatePos(double, double, double, double, double, double &, double &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainViewController::interpolatePos(sx0, sy0, dx0, dy0, t, x0, y0);

		lua_pushnumber(L,x0);
		lua_pushnumber(L,y0);
		return 2;
	}

	// void proland::TerrainViewController::base_update()
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::base_update() function, expected prototype:\nvoid proland::TerrainViewController::base_update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::base_update(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainViewController::update();

		return 0;
	}

	// void proland::TerrainViewController::base_setProjection(float znear = 0.0f, float zfar = 0.0f, ork::vec4f viewport = ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f))
	static int _bind_base_setProjection(lua_State *L) {
		if (!_lg_typecheck_base_setProjection(L)) {
			luaL_error(L, "luna typecheck failed in void proland::TerrainViewController::base_setProjection(float znear = 0.0f, float zfar = 0.0f, ork::vec4f viewport = ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f)) function, expected prototype:\nvoid proland::TerrainViewController::base_setProjection(float znear = 0.0f, float zfar = 0.0f, ork::vec4f viewport = ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f))\nClass arguments details:\narg 3 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float znear=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.0f;
		float zfar=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;
		ork::vec4f* viewport_ptr=luatop>3 ? (Luna< ork::vec4f >::check(L,4)) : NULL;
		if( luatop>3 && !viewport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewport in proland::TerrainViewController::base_setProjection function");
		}
		ork::vec4f viewport=luatop>3 ? *viewport_ptr : (ork::vec4f)ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f);

		proland::TerrainViewController* self=Luna< ork::Object >::checkSubType< proland::TerrainViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::TerrainViewController::base_setProjection(float, float, ork::vec4f). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->TerrainViewController::setProjection(znear, zfar, viewport);

		return 0;
	}


	// Operator binds:

};

proland::TerrainViewController* LunaTraits< proland::TerrainViewController >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_TerrainViewController::_bind_ctor(L);
}

void LunaTraits< proland::TerrainViewController >::_bind_dtor(proland::TerrainViewController* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::TerrainViewController >::className[] = "TerrainViewController";
const char LunaTraits< proland::TerrainViewController >::fullName[] = "proland::TerrainViewController";
const char LunaTraits< proland::TerrainViewController >::moduleName[] = "proland";
const char* LunaTraits< proland::TerrainViewController >::parents[] = {"ork.Object", 0};
const int LunaTraits< proland::TerrainViewController >::hash = 68502776;
const int LunaTraits< proland::TerrainViewController >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::TerrainViewController >::methods[] = {
	{"getNode", &luna_wrapper_proland_TerrainViewController::_bind_getNode},
	{"setNode", &luna_wrapper_proland_TerrainViewController::_bind_setNode},
	{"getGroundHeight", &luna_wrapper_proland_TerrainViewController::_bind_getGroundHeight},
	{"setGroundHeight", &luna_wrapper_proland_TerrainViewController::_bind_setGroundHeight},
	{"getHeight", &luna_wrapper_proland_TerrainViewController::_bind_getHeight},
	{"move", &luna_wrapper_proland_TerrainViewController::_bind_move},
	{"moveForward", &luna_wrapper_proland_TerrainViewController::_bind_moveForward},
	{"turn", &luna_wrapper_proland_TerrainViewController::_bind_turn},
	{"interpolate", &luna_wrapper_proland_TerrainViewController::_bind_interpolate},
	{"interpolatePos", &luna_wrapper_proland_TerrainViewController::_bind_interpolatePos},
	{"interpolateDirection", &luna_wrapper_proland_TerrainViewController::_bind_interpolateDirection},
	{"update", &luna_wrapper_proland_TerrainViewController::_bind_update},
	{"setProjection", &luna_wrapper_proland_TerrainViewController::_bind_setProjection},
	{"getFov", &luna_wrapper_proland_TerrainViewController::_bind_getFov},
	{"getX0", &luna_wrapper_proland_TerrainViewController::_bind_getX0},
	{"getY0", &luna_wrapper_proland_TerrainViewController::_bind_getY0},
	{"getTheta", &luna_wrapper_proland_TerrainViewController::_bind_getTheta},
	{"getPhi", &luna_wrapper_proland_TerrainViewController::_bind_getPhi},
	{"getD", &luna_wrapper_proland_TerrainViewController::_bind_getD},
	{"getZoom", &luna_wrapper_proland_TerrainViewController::_bind_getZoom},
	{"getPosition", &luna_wrapper_proland_TerrainViewController::_bind_getPosition},
	{"setFov", &luna_wrapper_proland_TerrainViewController::_bind_setFov},
	{"setX0", &luna_wrapper_proland_TerrainViewController::_bind_setX0},
	{"setY0", &luna_wrapper_proland_TerrainViewController::_bind_setY0},
	{"setTheta", &luna_wrapper_proland_TerrainViewController::_bind_setTheta},
	{"setPhi", &luna_wrapper_proland_TerrainViewController::_bind_setPhi},
	{"setD", &luna_wrapper_proland_TerrainViewController::_bind_setD},
	{"setZoom", &luna_wrapper_proland_TerrainViewController::_bind_setZoom},
	{"setPosition", &luna_wrapper_proland_TerrainViewController::_bind_setPosition},
	{"base_toString", &luna_wrapper_proland_TerrainViewController::_bind_base_toString},
	{"base_getHeight", &luna_wrapper_proland_TerrainViewController::_bind_base_getHeight},
	{"base_move", &luna_wrapper_proland_TerrainViewController::_bind_base_move},
	{"base_moveForward", &luna_wrapper_proland_TerrainViewController::_bind_base_moveForward},
	{"base_turn", &luna_wrapper_proland_TerrainViewController::_bind_base_turn},
	{"base_interpolate", &luna_wrapper_proland_TerrainViewController::_bind_base_interpolate},
	{"base_interpolatePos", &luna_wrapper_proland_TerrainViewController::_bind_base_interpolatePos},
	{"base_update", &luna_wrapper_proland_TerrainViewController::_bind_base_update},
	{"base_setProjection", &luna_wrapper_proland_TerrainViewController::_bind_base_setProjection},
	{"fromVoid", &luna_wrapper_proland_TerrainViewController::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_TerrainViewController::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_TerrainViewController::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::TerrainViewController >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_TerrainViewController::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::TerrainViewController >::enumValues[] = {
	{0,0}
};


