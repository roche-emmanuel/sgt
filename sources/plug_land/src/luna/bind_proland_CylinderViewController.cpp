#include <plug_common.h>

#include <luna/wrappers/wrapper_proland_CylinderViewController.h>

class luna_wrapper_proland_CylinderViewController {
public:
	typedef Luna< proland::CylinderViewController > luna_t;

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

		proland::CylinderViewController* self= (proland::CylinderViewController*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< proland::CylinderViewController >::push(L,self,false);
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
		//proland::CylinderViewController* ptr= dynamic_cast< proland::CylinderViewController* >(Luna< ork::Object >::check(L,1));
		proland::CylinderViewController* ptr= luna_caster< ork::Object, proland::CylinderViewController >::cast(Luna< ork::Object >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< proland::CylinderViewController >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getR(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_toString(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

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

	inline static bool _lg_typecheck_base_setProjection(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>4 ) return false;

		if( luatop>1 && lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( luatop>2 && lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,81304302) ) return false;
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

	inline static bool _lg_typecheck_base_update(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// proland::CylinderViewController::CylinderViewController(ork::ptr< ork::SceneNode > node, double R)
	static proland::CylinderViewController* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in proland::CylinderViewController::CylinderViewController(ork::ptr< ork::SceneNode > node, double R) function, expected prototype:\nproland::CylinderViewController::CylinderViewController(ork::ptr< ork::SceneNode > node, double R)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > node = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,1);
		double R=(double)lua_tonumber(L,2);

		return new proland::CylinderViewController(node, R);
	}

	// proland::CylinderViewController::CylinderViewController(lua_Table * data, ork::ptr< ork::SceneNode > node, double R)
	static proland::CylinderViewController* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in proland::CylinderViewController::CylinderViewController(lua_Table * data, ork::ptr< ork::SceneNode > node, double R) function, expected prototype:\nproland::CylinderViewController::CylinderViewController(lua_Table * data, ork::ptr< ork::SceneNode > node, double R)\nClass arguments details:\narg 2 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::ptr< ork::SceneNode > node = Luna< ork::Object >::checkSubType< ork::SceneNode >(L,2);
		double R=(double)lua_tonumber(L,3);

		return new wrapper_proland_CylinderViewController(L,NULL, node, R);
	}

	// Overload binder for proland::CylinderViewController::CylinderViewController
	static proland::CylinderViewController* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function CylinderViewController, cannot match any of the overloads for function CylinderViewController:\n  CylinderViewController(ork::ptr< ork::SceneNode >, double)\n  CylinderViewController(lua_Table *, ork::ptr< ork::SceneNode >, double)\n");
		return NULL;
	}


	// Function binds:
	// double proland::CylinderViewController::getHeight()
	static int _bind_getHeight(lua_State *L) {
		if (!_lg_typecheck_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in double proland::CylinderViewController::getHeight() function, expected prototype:\ndouble proland::CylinderViewController::getHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::CylinderViewController::getHeight(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::CylinderViewController::move(ork::vec3d & oldp, ork::vec3d & p)
	static int _bind_move(lua_State *L) {
		if (!_lg_typecheck_move(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CylinderViewController::move(ork::vec3d & oldp, ork::vec3d & p) function, expected prototype:\nvoid proland::CylinderViewController::move(ork::vec3d & oldp, ork::vec3d & p)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* oldp_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !oldp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg oldp in proland::CylinderViewController::move function");
		}
		ork::vec3d & oldp=*oldp_ptr;
		ork::vec3d* p_ptr=(Luna< ork::vec3d >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::CylinderViewController::move function");
		}
		ork::vec3d & p=*p_ptr;

		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CylinderViewController::move(ork::vec3d &, ork::vec3d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->move(oldp, p);

		return 0;
	}

	// void proland::CylinderViewController::update()
	static int _bind_update(lua_State *L) {
		if (!_lg_typecheck_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CylinderViewController::update() function, expected prototype:\nvoid proland::CylinderViewController::update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CylinderViewController::update(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->update();

		return 0;
	}

	// const double proland::CylinderViewController::R()
	static int _bind_getR(lua_State *L) {
		if (!_lg_typecheck_getR(L)) {
			luaL_error(L, "luna typecheck failed in const double proland::CylinderViewController::R() function, expected prototype:\nconst double proland::CylinderViewController::R()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const double proland::CylinderViewController::R(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const double lret = self->R;
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * proland::CylinderViewController::base_toString()
	static int _bind_base_toString(lua_State *L) {
		if (!_lg_typecheck_base_toString(L)) {
			luaL_error(L, "luna typecheck failed in const char * proland::CylinderViewController::base_toString() function, expected prototype:\nconst char * proland::CylinderViewController::base_toString()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * proland::CylinderViewController::base_toString(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->CylinderViewController::toString();
		lua_pushstring(L,lret);

		return 1;
	}

	// void proland::CylinderViewController::base_moveForward(double distance)
	static int _bind_base_moveForward(lua_State *L) {
		if (!_lg_typecheck_base_moveForward(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CylinderViewController::base_moveForward(double distance) function, expected prototype:\nvoid proland::CylinderViewController::base_moveForward(double distance)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double distance=(double)lua_tonumber(L,2);

		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CylinderViewController::base_moveForward(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CylinderViewController::moveForward(distance);

		return 0;
	}

	// void proland::CylinderViewController::base_turn(double angle)
	static int _bind_base_turn(lua_State *L) {
		if (!_lg_typecheck_base_turn(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CylinderViewController::base_turn(double angle) function, expected prototype:\nvoid proland::CylinderViewController::base_turn(double angle)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double angle=(double)lua_tonumber(L,2);

		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CylinderViewController::base_turn(double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CylinderViewController::turn(angle);

		return 0;
	}

	// double proland::CylinderViewController::base_interpolate(double sx0, double sy0, double stheta, double sphi, double sd, double dx0, double dy0, double dtheta, double dphi, double dd, double t)
	static int _bind_base_interpolate(lua_State *L) {
		if (!_lg_typecheck_base_interpolate(L)) {
			luaL_error(L, "luna typecheck failed in double proland::CylinderViewController::base_interpolate(double sx0, double sy0, double stheta, double sphi, double sd, double dx0, double dy0, double dtheta, double dphi, double dd, double t) function, expected prototype:\ndouble proland::CylinderViewController::base_interpolate(double sx0, double sy0, double stheta, double sphi, double sd, double dx0, double dy0, double dtheta, double dphi, double dd, double t)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
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

		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::CylinderViewController::base_interpolate(double, double, double, double, double, double, double, double, double, double, double). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->CylinderViewController::interpolate(sx0, sy0, stheta, sphi, sd, dx0, dy0, dtheta, dphi, dd, t);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::CylinderViewController::base_interpolatePos(double sx0, double sy0, double dx0, double dy0, double t, double & x0, double & y0)
	static int _bind_base_interpolatePos(lua_State *L) {
		if (!_lg_typecheck_base_interpolatePos(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CylinderViewController::base_interpolatePos(double sx0, double sy0, double dx0, double dy0, double t, double & x0, double & y0) function, expected prototype:\nvoid proland::CylinderViewController::base_interpolatePos(double sx0, double sy0, double dx0, double dy0, double t, double & x0, double & y0)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double sx0=(double)lua_tonumber(L,2);
		double sy0=(double)lua_tonumber(L,3);
		double dx0=(double)lua_tonumber(L,4);
		double dy0=(double)lua_tonumber(L,5);
		double t=(double)lua_tonumber(L,6);
		double x0=(double)lua_tonumber(L,7);
		double y0=(double)lua_tonumber(L,8);

		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CylinderViewController::base_interpolatePos(double, double, double, double, double, double &, double &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CylinderViewController::interpolatePos(sx0, sy0, dx0, dy0, t, x0, y0);

		lua_pushnumber(L,x0);
		lua_pushnumber(L,y0);
		return 2;
	}

	// void proland::CylinderViewController::base_setProjection(float znear = 0.0f, float zfar = 0.0f, ork::vec4f viewport = ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f))
	static int _bind_base_setProjection(lua_State *L) {
		if (!_lg_typecheck_base_setProjection(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CylinderViewController::base_setProjection(float znear = 0.0f, float zfar = 0.0f, ork::vec4f viewport = ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f)) function, expected prototype:\nvoid proland::CylinderViewController::base_setProjection(float znear = 0.0f, float zfar = 0.0f, ork::vec4f viewport = ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f))\nClass arguments details:\narg 3 ID = 81304302\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		float znear=luatop>1 ? (float)lua_tonumber(L,2) : (float)0.0f;
		float zfar=luatop>2 ? (float)lua_tonumber(L,3) : (float)0.0f;
		ork::vec4f* viewport_ptr=luatop>3 ? (Luna< ork::vec4f >::check(L,4)) : NULL;
		if( luatop>3 && !viewport_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg viewport in proland::CylinderViewController::base_setProjection function");
		}
		ork::vec4f viewport=luatop>3 ? *viewport_ptr : (ork::vec4f)ork::vec4f (-1.0f, 1.0f,-1.0f, 1.0f);

		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CylinderViewController::base_setProjection(float, float, ork::vec4f). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CylinderViewController::setProjection(znear, zfar, viewport);

		return 0;
	}

	// double proland::CylinderViewController::base_getHeight()
	static int _bind_base_getHeight(lua_State *L) {
		if (!_lg_typecheck_base_getHeight(L)) {
			luaL_error(L, "luna typecheck failed in double proland::CylinderViewController::base_getHeight() function, expected prototype:\ndouble proland::CylinderViewController::base_getHeight()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call double proland::CylinderViewController::base_getHeight(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->CylinderViewController::getHeight();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void proland::CylinderViewController::base_move(ork::vec3d & oldp, ork::vec3d & p)
	static int _bind_base_move(lua_State *L) {
		if (!_lg_typecheck_base_move(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CylinderViewController::base_move(ork::vec3d & oldp, ork::vec3d & p) function, expected prototype:\nvoid proland::CylinderViewController::base_move(ork::vec3d & oldp, ork::vec3d & p)\nClass arguments details:\narg 1 ID = 81304269\narg 2 ID = 81304269\n\n%s",luna_dumpStack(L).c_str());
		}

		ork::vec3d* oldp_ptr=(Luna< ork::vec3d >::check(L,2));
		if( !oldp_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg oldp in proland::CylinderViewController::base_move function");
		}
		ork::vec3d & oldp=*oldp_ptr;
		ork::vec3d* p_ptr=(Luna< ork::vec3d >::check(L,3));
		if( !p_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg p in proland::CylinderViewController::base_move function");
		}
		ork::vec3d & p=*p_ptr;

		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CylinderViewController::base_move(ork::vec3d &, ork::vec3d &). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CylinderViewController::move(oldp, p);

		return 0;
	}

	// void proland::CylinderViewController::base_update()
	static int _bind_base_update(lua_State *L) {
		if (!_lg_typecheck_base_update(L)) {
			luaL_error(L, "luna typecheck failed in void proland::CylinderViewController::base_update() function, expected prototype:\nvoid proland::CylinderViewController::base_update()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		proland::CylinderViewController* self=Luna< ork::Object >::checkSubType< proland::CylinderViewController >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void proland::CylinderViewController::base_update(). Got : '%s'\n%s",typeid(Luna< ork::Object >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->CylinderViewController::update();

		return 0;
	}


	// Operator binds:

};

proland::CylinderViewController* LunaTraits< proland::CylinderViewController >::_bind_ctor(lua_State *L) {
	return luna_wrapper_proland_CylinderViewController::_bind_ctor(L);
}

void LunaTraits< proland::CylinderViewController >::_bind_dtor(proland::CylinderViewController* obj) {
	ork::ptr<ork::Object> refptr = obj;
}

const char LunaTraits< proland::CylinderViewController >::className[] = "CylinderViewController";
const char LunaTraits< proland::CylinderViewController >::fullName[] = "proland::CylinderViewController";
const char LunaTraits< proland::CylinderViewController >::moduleName[] = "proland";
const char* LunaTraits< proland::CylinderViewController >::parents[] = {"proland.TerrainViewController", 0};
const int LunaTraits< proland::CylinderViewController >::hash = 43306238;
const int LunaTraits< proland::CylinderViewController >::uniqueIDs[] = {1381405,0};

luna_RegType LunaTraits< proland::CylinderViewController >::methods[] = {
	{"getHeight", &luna_wrapper_proland_CylinderViewController::_bind_getHeight},
	{"move", &luna_wrapper_proland_CylinderViewController::_bind_move},
	{"update", &luna_wrapper_proland_CylinderViewController::_bind_update},
	{"getR", &luna_wrapper_proland_CylinderViewController::_bind_getR},
	{"base_toString", &luna_wrapper_proland_CylinderViewController::_bind_base_toString},
	{"base_moveForward", &luna_wrapper_proland_CylinderViewController::_bind_base_moveForward},
	{"base_turn", &luna_wrapper_proland_CylinderViewController::_bind_base_turn},
	{"base_interpolate", &luna_wrapper_proland_CylinderViewController::_bind_base_interpolate},
	{"base_interpolatePos", &luna_wrapper_proland_CylinderViewController::_bind_base_interpolatePos},
	{"base_setProjection", &luna_wrapper_proland_CylinderViewController::_bind_base_setProjection},
	{"base_getHeight", &luna_wrapper_proland_CylinderViewController::_bind_base_getHeight},
	{"base_move", &luna_wrapper_proland_CylinderViewController::_bind_base_move},
	{"base_update", &luna_wrapper_proland_CylinderViewController::_bind_base_update},
	{"fromVoid", &luna_wrapper_proland_CylinderViewController::_bind_fromVoid},
	{"asVoid", &luna_wrapper_proland_CylinderViewController::_bind_asVoid},
	{"getTable", &luna_wrapper_proland_CylinderViewController::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< proland::CylinderViewController >::converters[] = {
	{"ork::Object", &luna_wrapper_proland_CylinderViewController::_cast_from_Object},
	{0,0}
};

luna_RegEnumType LunaTraits< proland::CylinderViewController >::enumValues[] = {
	{0,0}
};


