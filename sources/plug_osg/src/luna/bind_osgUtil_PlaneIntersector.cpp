#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_PlaneIntersector.h>

class luna_wrapper_osgUtil_PlaneIntersector {
public:
	typedef Luna< osgUtil::PlaneIntersector > luna_t;

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

		osgUtil::PlaneIntersector* self= (osgUtil::PlaneIntersector*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::PlaneIntersector >::push(L,self,false);
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
		//osgUtil::PlaneIntersector* ptr= dynamic_cast< osgUtil::PlaneIntersector* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::PlaneIntersector* ptr= luna_caster< osg::Referenced, osgUtil::PlaneIntersector >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::PlaneIntersector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,86970521) ) return false;
		if( (!(Luna< osg::Plane >::check(L,1))) ) return false;
		if( luatop>1 && !Luna<void>::has_uniqueid(L,2,26652350) ) return false;
		if( luatop>1 && (!(Luna< osg::Polytope >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		if( (!(Luna< osg::Plane >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,26652350) ) return false;
		if( luatop>2 && (!(Luna< osg::Polytope >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<2 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		if( (!(Luna< osg::Plane >::check(L,2))) ) return false;
		if( luatop>2 && !Luna<void>::has_uniqueid(L,3,26652350) ) return false;
		if( luatop>2 && (!(Luna< osg::Polytope >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<3 || luatop>4 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,86970521) ) return false;
		if( (!(Luna< osg::Plane >::check(L,3))) ) return false;
		if( luatop>3 && !Luna<void>::has_uniqueid(L,4,26652350) ) return false;
		if( luatop>3 && (!(Luna< osg::Polytope >::check(L,4))) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_insertIntersection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,761678) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntersections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRecordHeightsAsAttributes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getRecordHeightsAsAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEllipsoidModel(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEllipsoidModel(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_enter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_leave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_intersect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_containsIntersections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_enter(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_leave(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_intersect(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_containsIntersections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::PlaneIntersector::PlaneIntersector(const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ())
	static osgUtil::PlaneIntersector* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PlaneIntersector::PlaneIntersector(const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ()) function, expected prototype:\nosgUtil::PlaneIntersector::PlaneIntersector(const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ())\nClass arguments details:\narg 1 ID = 86970521\narg 2 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,1));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osgUtil::PlaneIntersector::PlaneIntersector function");
		}
		const osg::Plane & plane=*plane_ptr;
		const osg::Polytope* boundingPolytope_ptr=luatop>1 ? (Luna< osg::Polytope >::check(L,2)) : NULL;
		if( luatop>1 && !boundingPolytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg boundingPolytope in osgUtil::PlaneIntersector::PlaneIntersector function");
		}
		const osg::Polytope & boundingPolytope=luatop>1 ? *boundingPolytope_ptr : (const osg::Polytope&)osg::Polytope ();

		return new osgUtil::PlaneIntersector(plane, boundingPolytope);
	}

	// osgUtil::PlaneIntersector::PlaneIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ())
	static osgUtil::PlaneIntersector* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PlaneIntersector::PlaneIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ()) function, expected prototype:\nosgUtil::PlaneIntersector::PlaneIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ())\nClass arguments details:\narg 2 ID = 86970521\narg 3 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,1);
		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osgUtil::PlaneIntersector::PlaneIntersector function");
		}
		const osg::Plane & plane=*plane_ptr;
		const osg::Polytope* boundingPolytope_ptr=luatop>2 ? (Luna< osg::Polytope >::check(L,3)) : NULL;
		if( luatop>2 && !boundingPolytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg boundingPolytope in osgUtil::PlaneIntersector::PlaneIntersector function");
		}
		const osg::Polytope & boundingPolytope=luatop>2 ? *boundingPolytope_ptr : (const osg::Polytope&)osg::Polytope ();

		return new osgUtil::PlaneIntersector(cf, plane, boundingPolytope);
	}

	// osgUtil::PlaneIntersector::PlaneIntersector(lua_Table * data, const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ())
	static osgUtil::PlaneIntersector* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PlaneIntersector::PlaneIntersector(lua_Table * data, const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ()) function, expected prototype:\nosgUtil::PlaneIntersector::PlaneIntersector(lua_Table * data, const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ())\nClass arguments details:\narg 2 ID = 86970521\narg 3 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osgUtil::PlaneIntersector::PlaneIntersector function");
		}
		const osg::Plane & plane=*plane_ptr;
		const osg::Polytope* boundingPolytope_ptr=luatop>2 ? (Luna< osg::Polytope >::check(L,3)) : NULL;
		if( luatop>2 && !boundingPolytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg boundingPolytope in osgUtil::PlaneIntersector::PlaneIntersector function");
		}
		const osg::Polytope & boundingPolytope=luatop>2 ? *boundingPolytope_ptr : (const osg::Polytope&)osg::Polytope ();

		return new wrapper_osgUtil_PlaneIntersector(L,NULL, plane, boundingPolytope);
	}

	// osgUtil::PlaneIntersector::PlaneIntersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf, const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ())
	static osgUtil::PlaneIntersector* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PlaneIntersector::PlaneIntersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf, const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ()) function, expected prototype:\nosgUtil::PlaneIntersector::PlaneIntersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf, const osg::Plane & plane, const osg::Polytope & boundingPolytope = osg::Polytope ())\nClass arguments details:\narg 3 ID = 86970521\narg 4 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,2);
		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,3));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osgUtil::PlaneIntersector::PlaneIntersector function");
		}
		const osg::Plane & plane=*plane_ptr;
		const osg::Polytope* boundingPolytope_ptr=luatop>3 ? (Luna< osg::Polytope >::check(L,4)) : NULL;
		if( luatop>3 && !boundingPolytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg boundingPolytope in osgUtil::PlaneIntersector::PlaneIntersector function");
		}
		const osg::Polytope & boundingPolytope=luatop>3 ? *boundingPolytope_ptr : (const osg::Polytope&)osg::Polytope ();

		return new wrapper_osgUtil_PlaneIntersector(L,NULL, cf, plane, boundingPolytope);
	}

	// Overload binder for osgUtil::PlaneIntersector::PlaneIntersector
	static osgUtil::PlaneIntersector* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);

		luaL_error(L, "error in function PlaneIntersector, cannot match any of the overloads for function PlaneIntersector:\n  PlaneIntersector(const osg::Plane &, const osg::Polytope &)\n  PlaneIntersector(osgUtil::Intersector::CoordinateFrame, const osg::Plane &, const osg::Polytope &)\n  PlaneIntersector(lua_Table *, const osg::Plane &, const osg::Polytope &)\n  PlaneIntersector(lua_Table *, osgUtil::Intersector::CoordinateFrame, const osg::Plane &, const osg::Polytope &)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::PlaneIntersector::insertIntersection(const osgUtil::PlaneIntersector::Intersection & intersection)
	static int _bind_insertIntersection(lua_State *L) {
		if (!_lg_typecheck_insertIntersection(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::insertIntersection(const osgUtil::PlaneIntersector::Intersection & intersection) function, expected prototype:\nvoid osgUtil::PlaneIntersector::insertIntersection(const osgUtil::PlaneIntersector::Intersection & intersection)\nClass arguments details:\narg 1 ID = 761678\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::PlaneIntersector::Intersection* intersection_ptr=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,2));
		if( !intersection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersection in osgUtil::PlaneIntersector::insertIntersection function");
		}
		const osgUtil::PlaneIntersector::Intersection & intersection=*intersection_ptr;

		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::insertIntersection(const osgUtil::PlaneIntersector::Intersection &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->insertIntersection(intersection);

		return 0;
	}

	// osgUtil::PlaneIntersector::Intersections & osgUtil::PlaneIntersector::getIntersections()
	static int _bind_getIntersections(lua_State *L) {
		if (!_lg_typecheck_getIntersections(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PlaneIntersector::Intersections & osgUtil::PlaneIntersector::getIntersections() function, expected prototype:\nosgUtil::PlaneIntersector::Intersections & osgUtil::PlaneIntersector::getIntersections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::PlaneIntersector::Intersections & osgUtil::PlaneIntersector::getIntersections(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::PlaneIntersector::Intersections* lret = &self->getIntersections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::PlaneIntersector::Intersections >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::PlaneIntersector::setRecordHeightsAsAttributes(bool flag)
	static int _bind_setRecordHeightsAsAttributes(lua_State *L) {
		if (!_lg_typecheck_setRecordHeightsAsAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::setRecordHeightsAsAttributes(bool flag) function, expected prototype:\nvoid osgUtil::PlaneIntersector::setRecordHeightsAsAttributes(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::setRecordHeightsAsAttributes(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setRecordHeightsAsAttributes(flag);

		return 0;
	}

	// bool osgUtil::PlaneIntersector::getRecordHeightsAsAttributes() const
	static int _bind_getRecordHeightsAsAttributes(lua_State *L) {
		if (!_lg_typecheck_getRecordHeightsAsAttributes(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::PlaneIntersector::getRecordHeightsAsAttributes() const function, expected prototype:\nbool osgUtil::PlaneIntersector::getRecordHeightsAsAttributes() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::PlaneIntersector::getRecordHeightsAsAttributes() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getRecordHeightsAsAttributes();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::PlaneIntersector::setEllipsoidModel(osg::EllipsoidModel * em)
	static int _bind_setEllipsoidModel(lua_State *L) {
		if (!_lg_typecheck_setEllipsoidModel(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::setEllipsoidModel(osg::EllipsoidModel * em) function, expected prototype:\nvoid osgUtil::PlaneIntersector::setEllipsoidModel(osg::EllipsoidModel * em)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::EllipsoidModel* em=(Luna< osg::Referenced >::checkSubType< osg::EllipsoidModel >(L,2));

		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::setEllipsoidModel(osg::EllipsoidModel *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setEllipsoidModel(em);

		return 0;
	}

	// const osg::EllipsoidModel * osgUtil::PlaneIntersector::getEllipsoidModel() const
	static int _bind_getEllipsoidModel(lua_State *L) {
		if (!_lg_typecheck_getEllipsoidModel(L)) {
			luaL_error(L, "luna typecheck failed in const osg::EllipsoidModel * osgUtil::PlaneIntersector::getEllipsoidModel() const function, expected prototype:\nconst osg::EllipsoidModel * osgUtil::PlaneIntersector::getEllipsoidModel() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::EllipsoidModel * osgUtil::PlaneIntersector::getEllipsoidModel() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::EllipsoidModel * lret = self->getEllipsoidModel();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::EllipsoidModel >::push(L,lret,false);

		return 1;
	}

	// osgUtil::Intersector * osgUtil::PlaneIntersector::clone(osgUtil::IntersectionVisitor & iv)
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::PlaneIntersector::clone(osgUtil::IntersectionVisitor & iv) function, expected prototype:\nosgUtil::Intersector * osgUtil::PlaneIntersector::clone(osgUtil::IntersectionVisitor & iv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::PlaneIntersector::clone function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;

		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::PlaneIntersector::clone(osgUtil::IntersectionVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Intersector * lret = self->clone(iv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::PlaneIntersector::enter(const osg::Node & node)
	static int _bind_enter(lua_State *L) {
		if (!_lg_typecheck_enter(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::PlaneIntersector::enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::PlaneIntersector::enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::PlaneIntersector::enter function");
		}
		const osg::Node & node=*node_ptr;

		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::PlaneIntersector::enter(const osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::PlaneIntersector::leave()
	static int _bind_leave(lua_State *L) {
		if (!_lg_typecheck_leave(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::leave() function, expected prototype:\nvoid osgUtil::PlaneIntersector::leave()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::leave(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->leave();

		return 0;
	}

	// void osgUtil::PlaneIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	static int _bind_intersect(lua_State *L) {
		if (!_lg_typecheck_intersect(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::PlaneIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::PlaneIntersector::intersect function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::intersect(osgUtil::IntersectionVisitor &, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->intersect(iv, drawable);

		return 0;
	}

	// void osgUtil::PlaneIntersector::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::reset() function, expected prototype:\nvoid osgUtil::PlaneIntersector::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// bool osgUtil::PlaneIntersector::containsIntersections()
	static int _bind_containsIntersections(lua_State *L) {
		if (!_lg_typecheck_containsIntersections(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::PlaneIntersector::containsIntersections() function, expected prototype:\nbool osgUtil::PlaneIntersector::containsIntersections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::PlaneIntersector::containsIntersections(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsIntersections();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::PlaneIntersector::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::PlaneIntersector::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PlaneIntersector::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osgUtil::Intersector * osgUtil::PlaneIntersector::base_clone(osgUtil::IntersectionVisitor & iv)
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::PlaneIntersector::base_clone(osgUtil::IntersectionVisitor & iv) function, expected prototype:\nosgUtil::Intersector * osgUtil::PlaneIntersector::base_clone(osgUtil::IntersectionVisitor & iv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::PlaneIntersector::base_clone function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;

		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::PlaneIntersector::base_clone(osgUtil::IntersectionVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Intersector * lret = self->PlaneIntersector::clone(iv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::PlaneIntersector::base_enter(const osg::Node & node)
	static int _bind_base_enter(lua_State *L) {
		if (!_lg_typecheck_base_enter(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::PlaneIntersector::base_enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::PlaneIntersector::base_enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::PlaneIntersector::base_enter function");
		}
		const osg::Node & node=*node_ptr;

		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::PlaneIntersector::base_enter(const osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PlaneIntersector::enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::PlaneIntersector::base_leave()
	static int _bind_base_leave(lua_State *L) {
		if (!_lg_typecheck_base_leave(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::base_leave() function, expected prototype:\nvoid osgUtil::PlaneIntersector::base_leave()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::base_leave(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PlaneIntersector::leave();

		return 0;
	}

	// void osgUtil::PlaneIntersector::base_intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	static int _bind_base_intersect(lua_State *L) {
		if (!_lg_typecheck_base_intersect(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::base_intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::PlaneIntersector::base_intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::PlaneIntersector::base_intersect function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::base_intersect(osgUtil::IntersectionVisitor &, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PlaneIntersector::intersect(iv, drawable);

		return 0;
	}

	// void osgUtil::PlaneIntersector::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::base_reset() function, expected prototype:\nvoid osgUtil::PlaneIntersector::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PlaneIntersector::reset();

		return 0;
	}

	// bool osgUtil::PlaneIntersector::base_containsIntersections()
	static int _bind_base_containsIntersections(lua_State *L) {
		if (!_lg_typecheck_base_containsIntersections(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::PlaneIntersector::base_containsIntersections() function, expected prototype:\nbool osgUtil::PlaneIntersector::base_containsIntersections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PlaneIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::PlaneIntersector::base_containsIntersections(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PlaneIntersector::containsIntersections();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgUtil::PlaneIntersector* LunaTraits< osgUtil::PlaneIntersector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PlaneIntersector::_bind_ctor(L);
}

void LunaTraits< osgUtil::PlaneIntersector >::_bind_dtor(osgUtil::PlaneIntersector* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::PlaneIntersector >::className[] = "PlaneIntersector";
const char LunaTraits< osgUtil::PlaneIntersector >::fullName[] = "osgUtil::PlaneIntersector";
const char LunaTraits< osgUtil::PlaneIntersector >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PlaneIntersector >::parents[] = {"osgUtil.Intersector", 0};
const int LunaTraits< osgUtil::PlaneIntersector >::hash = 99530641;
const int LunaTraits< osgUtil::PlaneIntersector >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::PlaneIntersector >::methods[] = {
	{"insertIntersection", &luna_wrapper_osgUtil_PlaneIntersector::_bind_insertIntersection},
	{"getIntersections", &luna_wrapper_osgUtil_PlaneIntersector::_bind_getIntersections},
	{"setRecordHeightsAsAttributes", &luna_wrapper_osgUtil_PlaneIntersector::_bind_setRecordHeightsAsAttributes},
	{"getRecordHeightsAsAttributes", &luna_wrapper_osgUtil_PlaneIntersector::_bind_getRecordHeightsAsAttributes},
	{"setEllipsoidModel", &luna_wrapper_osgUtil_PlaneIntersector::_bind_setEllipsoidModel},
	{"getEllipsoidModel", &luna_wrapper_osgUtil_PlaneIntersector::_bind_getEllipsoidModel},
	{"clone", &luna_wrapper_osgUtil_PlaneIntersector::_bind_clone},
	{"enter", &luna_wrapper_osgUtil_PlaneIntersector::_bind_enter},
	{"leave", &luna_wrapper_osgUtil_PlaneIntersector::_bind_leave},
	{"intersect", &luna_wrapper_osgUtil_PlaneIntersector::_bind_intersect},
	{"reset", &luna_wrapper_osgUtil_PlaneIntersector::_bind_reset},
	{"containsIntersections", &luna_wrapper_osgUtil_PlaneIntersector::_bind_containsIntersections},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_PlaneIntersector::_bind_base_setThreadSafeRefUnref},
	{"base_clone", &luna_wrapper_osgUtil_PlaneIntersector::_bind_base_clone},
	{"base_enter", &luna_wrapper_osgUtil_PlaneIntersector::_bind_base_enter},
	{"base_leave", &luna_wrapper_osgUtil_PlaneIntersector::_bind_base_leave},
	{"base_intersect", &luna_wrapper_osgUtil_PlaneIntersector::_bind_base_intersect},
	{"base_reset", &luna_wrapper_osgUtil_PlaneIntersector::_bind_base_reset},
	{"base_containsIntersections", &luna_wrapper_osgUtil_PlaneIntersector::_bind_base_containsIntersections},
	{"fromVoid", &luna_wrapper_osgUtil_PlaneIntersector::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_PlaneIntersector::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_PlaneIntersector::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PlaneIntersector >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_PlaneIntersector::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PlaneIntersector >::enumValues[] = {
	{0,0}
};


