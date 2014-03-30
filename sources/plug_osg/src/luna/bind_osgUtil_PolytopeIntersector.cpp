#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_PolytopeIntersector.h>

class luna_wrapper_osgUtil_PolytopeIntersector {
public:
	typedef Luna< osgUtil::PolytopeIntersector > luna_t;

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

		osgUtil::PolytopeIntersector* self= (osgUtil::PolytopeIntersector*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::PolytopeIntersector >::push(L,self,false);
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
		//osgUtil::PolytopeIntersector* ptr= dynamic_cast< osgUtil::PolytopeIntersector* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::PolytopeIntersector* ptr= luna_caster< osg::Referenced, osgUtil::PolytopeIntersector >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::PolytopeIntersector >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,26652350) ) return false;
		if( (!(Luna< osg::Polytope >::check(L,1))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,26652350) ) return false;
		if( (!(Luna< osg::Polytope >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_3(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_type(L,1)!=LUA_TNUMBER || lua_tointeger(L,1) != lua_tonumber(L,1)) ) return false;
		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( !Luna<void>::has_uniqueid(L,2,26652350) ) return false;
		if( (!(Luna< osg::Polytope >::check(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_5(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,26652350) ) return false;
		if( (!(Luna< osg::Polytope >::check(L,3))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_6(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( lua_type(L,3)!=LUA_TNUMBER ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_insertIntersection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,31087672) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntersections(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getFirstIntersection(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDimensionMask(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDimensionMask(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferencePlane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferencePlane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
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
	// osgUtil::PolytopeIntersector::PolytopeIntersector(const osg::Polytope & polytope)
	static osgUtil::PolytopeIntersector* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::PolytopeIntersector(const osg::Polytope & polytope) function, expected prototype:\nosgUtil::PolytopeIntersector::PolytopeIntersector(const osg::Polytope & polytope)\nClass arguments details:\narg 1 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Polytope* polytope_ptr=(Luna< osg::Polytope >::check(L,1));
		if( !polytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg polytope in osgUtil::PolytopeIntersector::PolytopeIntersector function");
		}
		const osg::Polytope & polytope=*polytope_ptr;

		return new osgUtil::PolytopeIntersector(polytope);
	}

	// osgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope)
	static osgUtil::PolytopeIntersector* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope) function, expected prototype:\nosgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope)\nClass arguments details:\narg 2 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,1);
		const osg::Polytope* polytope_ptr=(Luna< osg::Polytope >::check(L,2));
		if( !polytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg polytope in osgUtil::PolytopeIntersector::PolytopeIntersector function");
		}
		const osg::Polytope & polytope=*polytope_ptr;

		return new osgUtil::PolytopeIntersector(cf, polytope);
	}

	// osgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax)
	static osgUtil::PolytopeIntersector* _bind_ctor_overload_3(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax) function, expected prototype:\nosgUtil::PolytopeIntersector::PolytopeIntersector(osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,1);
		double xMin=(double)lua_tonumber(L,2);
		double yMin=(double)lua_tonumber(L,3);
		double xMax=(double)lua_tonumber(L,4);
		double yMax=(double)lua_tonumber(L,5);

		return new osgUtil::PolytopeIntersector(cf, xMin, yMin, xMax, yMax);
	}

	// osgUtil::PolytopeIntersector::PolytopeIntersector(lua_Table * data, const osg::Polytope & polytope)
	static osgUtil::PolytopeIntersector* _bind_ctor_overload_4(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::PolytopeIntersector(lua_Table * data, const osg::Polytope & polytope) function, expected prototype:\nosgUtil::PolytopeIntersector::PolytopeIntersector(lua_Table * data, const osg::Polytope & polytope)\nClass arguments details:\narg 2 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Polytope* polytope_ptr=(Luna< osg::Polytope >::check(L,2));
		if( !polytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg polytope in osgUtil::PolytopeIntersector::PolytopeIntersector function");
		}
		const osg::Polytope & polytope=*polytope_ptr;

		return new wrapper_osgUtil_PolytopeIntersector(L,NULL, polytope);
	}

	// osgUtil::PolytopeIntersector::PolytopeIntersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope)
	static osgUtil::PolytopeIntersector* _bind_ctor_overload_5(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::PolytopeIntersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope) function, expected prototype:\nosgUtil::PolytopeIntersector::PolytopeIntersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf, const osg::Polytope & polytope)\nClass arguments details:\narg 3 ID = 26652350\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,2);
		const osg::Polytope* polytope_ptr=(Luna< osg::Polytope >::check(L,3));
		if( !polytope_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg polytope in osgUtil::PolytopeIntersector::PolytopeIntersector function");
		}
		const osg::Polytope & polytope=*polytope_ptr;

		return new wrapper_osgUtil_PolytopeIntersector(L,NULL, cf, polytope);
	}

	// osgUtil::PolytopeIntersector::PolytopeIntersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax)
	static osgUtil::PolytopeIntersector* _bind_ctor_overload_6(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::PolytopeIntersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax) function, expected prototype:\nosgUtil::PolytopeIntersector::PolytopeIntersector(lua_Table * data, osgUtil::Intersector::CoordinateFrame cf, double xMin, double yMin, double xMax, double yMax)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,2);
		double xMin=(double)lua_tonumber(L,3);
		double yMin=(double)lua_tonumber(L,4);
		double xMax=(double)lua_tonumber(L,5);
		double yMax=(double)lua_tonumber(L,6);

		return new wrapper_osgUtil_PolytopeIntersector(L,NULL, cf, xMin, yMin, xMax, yMax);
	}

	// Overload binder for osgUtil::PolytopeIntersector::PolytopeIntersector
	static osgUtil::PolytopeIntersector* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);
		if (_lg_typecheck_ctor_overload_3(L)) return _bind_ctor_overload_3(L);
		if (_lg_typecheck_ctor_overload_4(L)) return _bind_ctor_overload_4(L);
		if (_lg_typecheck_ctor_overload_5(L)) return _bind_ctor_overload_5(L);
		if (_lg_typecheck_ctor_overload_6(L)) return _bind_ctor_overload_6(L);

		luaL_error(L, "error in function PolytopeIntersector, cannot match any of the overloads for function PolytopeIntersector:\n  PolytopeIntersector(const osg::Polytope &)\n  PolytopeIntersector(osgUtil::Intersector::CoordinateFrame, const osg::Polytope &)\n  PolytopeIntersector(osgUtil::Intersector::CoordinateFrame, double, double, double, double)\n  PolytopeIntersector(lua_Table *, const osg::Polytope &)\n  PolytopeIntersector(lua_Table *, osgUtil::Intersector::CoordinateFrame, const osg::Polytope &)\n  PolytopeIntersector(lua_Table *, osgUtil::Intersector::CoordinateFrame, double, double, double, double)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::PolytopeIntersector::insertIntersection(const osgUtil::PolytopeIntersector::Intersection & intersection)
	static int _bind_insertIntersection(lua_State *L) {
		if (!_lg_typecheck_insertIntersection(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::insertIntersection(const osgUtil::PolytopeIntersector::Intersection & intersection) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::insertIntersection(const osgUtil::PolytopeIntersector::Intersection & intersection)\nClass arguments details:\narg 1 ID = 31087672\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::PolytopeIntersector::Intersection* intersection_ptr=(Luna< osgUtil::PolytopeIntersector::Intersection >::check(L,2));
		if( !intersection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg intersection in osgUtil::PolytopeIntersector::insertIntersection function");
		}
		const osgUtil::PolytopeIntersector::Intersection & intersection=*intersection_ptr;

		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::insertIntersection(const osgUtil::PolytopeIntersector::Intersection &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->insertIntersection(intersection);

		return 0;
	}

	// osgUtil::PolytopeIntersector::Intersections & osgUtil::PolytopeIntersector::getIntersections()
	static int _bind_getIntersections(lua_State *L) {
		if (!_lg_typecheck_getIntersections(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::Intersections & osgUtil::PolytopeIntersector::getIntersections() function, expected prototype:\nosgUtil::PolytopeIntersector::Intersections & osgUtil::PolytopeIntersector::getIntersections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::PolytopeIntersector::Intersections & osgUtil::PolytopeIntersector::getIntersections(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::PolytopeIntersector::Intersections* lret = &self->getIntersections();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::PolytopeIntersector::Intersections >::push(L,lret,false);

		return 1;
	}

	// osgUtil::PolytopeIntersector::Intersection osgUtil::PolytopeIntersector::getFirstIntersection()
	static int _bind_getFirstIntersection(lua_State *L) {
		if (!_lg_typecheck_getFirstIntersection(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PolytopeIntersector::Intersection osgUtil::PolytopeIntersector::getFirstIntersection() function, expected prototype:\nosgUtil::PolytopeIntersector::Intersection osgUtil::PolytopeIntersector::getFirstIntersection()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::PolytopeIntersector::Intersection osgUtil::PolytopeIntersector::getFirstIntersection(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::PolytopeIntersector::Intersection stack_lret = self->getFirstIntersection();
		osgUtil::PolytopeIntersector::Intersection* lret = new osgUtil::PolytopeIntersector::Intersection(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::PolytopeIntersector::Intersection >::push(L,lret,true);

		return 1;
	}

	// unsigned int osgUtil::PolytopeIntersector::getDimensionMask() const
	static int _bind_getDimensionMask(lua_State *L) {
		if (!_lg_typecheck_getDimensionMask(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::PolytopeIntersector::getDimensionMask() const function, expected prototype:\nunsigned int osgUtil::PolytopeIntersector::getDimensionMask() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::PolytopeIntersector::getDimensionMask() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getDimensionMask();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::PolytopeIntersector::setDimensionMask(unsigned int dimensionMask)
	static int _bind_setDimensionMask(lua_State *L) {
		if (!_lg_typecheck_setDimensionMask(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::setDimensionMask(unsigned int dimensionMask) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::setDimensionMask(unsigned int dimensionMask)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int dimensionMask=(unsigned int)lua_tointeger(L,2);

		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::setDimensionMask(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDimensionMask(dimensionMask);

		return 0;
	}

	// const osg::Plane & osgUtil::PolytopeIntersector::getReferencePlane() const
	static int _bind_getReferencePlane(lua_State *L) {
		if (!_lg_typecheck_getReferencePlane(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Plane & osgUtil::PolytopeIntersector::getReferencePlane() const function, expected prototype:\nconst osg::Plane & osgUtil::PolytopeIntersector::getReferencePlane() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Plane & osgUtil::PolytopeIntersector::getReferencePlane() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Plane* lret = &self->getReferencePlane();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::PolytopeIntersector::setReferencePlane(const osg::Plane & plane)
	static int _bind_setReferencePlane(lua_State *L) {
		if (!_lg_typecheck_setReferencePlane(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::setReferencePlane(const osg::Plane & plane) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::setReferencePlane(const osg::Plane & plane)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Plane* plane_ptr=(Luna< osg::Plane >::check(L,2));
		if( !plane_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg plane in osgUtil::PolytopeIntersector::setReferencePlane function");
		}
		const osg::Plane & plane=*plane_ptr;

		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::setReferencePlane(const osg::Plane &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferencePlane(plane);

		return 0;
	}

	// osgUtil::Intersector * osgUtil::PolytopeIntersector::clone(osgUtil::IntersectionVisitor & iv)
	static int _bind_clone(lua_State *L) {
		if (!_lg_typecheck_clone(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::PolytopeIntersector::clone(osgUtil::IntersectionVisitor & iv) function, expected prototype:\nosgUtil::Intersector * osgUtil::PolytopeIntersector::clone(osgUtil::IntersectionVisitor & iv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::PolytopeIntersector::clone function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;

		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::PolytopeIntersector::clone(osgUtil::IntersectionVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Intersector * lret = self->clone(iv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::PolytopeIntersector::enter(const osg::Node & node)
	static int _bind_enter(lua_State *L) {
		if (!_lg_typecheck_enter(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::PolytopeIntersector::enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::PolytopeIntersector::enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::PolytopeIntersector::enter function");
		}
		const osg::Node & node=*node_ptr;

		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::PolytopeIntersector::enter(const osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::PolytopeIntersector::leave()
	static int _bind_leave(lua_State *L) {
		if (!_lg_typecheck_leave(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::leave() function, expected prototype:\nvoid osgUtil::PolytopeIntersector::leave()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::leave(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->leave();

		return 0;
	}

	// void osgUtil::PolytopeIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	static int _bind_intersect(lua_State *L) {
		if (!_lg_typecheck_intersect(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::PolytopeIntersector::intersect function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::intersect(osgUtil::IntersectionVisitor &, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->intersect(iv, drawable);

		return 0;
	}

	// void osgUtil::PolytopeIntersector::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::reset() function, expected prototype:\nvoid osgUtil::PolytopeIntersector::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// bool osgUtil::PolytopeIntersector::containsIntersections()
	static int _bind_containsIntersections(lua_State *L) {
		if (!_lg_typecheck_containsIntersections(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::PolytopeIntersector::containsIntersections() function, expected prototype:\nbool osgUtil::PolytopeIntersector::containsIntersections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::PolytopeIntersector::containsIntersections(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->containsIntersections();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::PolytopeIntersector::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolytopeIntersector::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osgUtil::Intersector * osgUtil::PolytopeIntersector::base_clone(osgUtil::IntersectionVisitor & iv)
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::PolytopeIntersector::base_clone(osgUtil::IntersectionVisitor & iv) function, expected prototype:\nosgUtil::Intersector * osgUtil::PolytopeIntersector::base_clone(osgUtil::IntersectionVisitor & iv)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::PolytopeIntersector::base_clone function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;

		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::PolytopeIntersector::base_clone(osgUtil::IntersectionVisitor &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Intersector * lret = self->PolytopeIntersector::clone(iv);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::PolytopeIntersector::base_enter(const osg::Node & node)
	static int _bind_base_enter(lua_State *L) {
		if (!_lg_typecheck_base_enter(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::PolytopeIntersector::base_enter(const osg::Node & node) function, expected prototype:\nbool osgUtil::PolytopeIntersector::base_enter(const osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::PolytopeIntersector::base_enter function");
		}
		const osg::Node & node=*node_ptr;

		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::PolytopeIntersector::base_enter(const osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PolytopeIntersector::enter(node);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::PolytopeIntersector::base_leave()
	static int _bind_base_leave(lua_State *L) {
		if (!_lg_typecheck_base_leave(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::base_leave() function, expected prototype:\nvoid osgUtil::PolytopeIntersector::base_leave()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::base_leave(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolytopeIntersector::leave();

		return 0;
	}

	// void osgUtil::PolytopeIntersector::base_intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)
	static int _bind_base_intersect(lua_State *L) {
		if (!_lg_typecheck_base_intersect(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::base_intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable) function, expected prototype:\nvoid osgUtil::PolytopeIntersector::base_intersect(osgUtil::IntersectionVisitor & iv, osg::Drawable * drawable)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor* iv_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,2));
		if( !iv_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg iv in osgUtil::PolytopeIntersector::base_intersect function");
		}
		osgUtil::IntersectionVisitor & iv=*iv_ptr;
		osg::Drawable* drawable=(Luna< osg::Referenced >::checkSubType< osg::Drawable >(L,3));

		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::base_intersect(osgUtil::IntersectionVisitor &, osg::Drawable *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolytopeIntersector::intersect(iv, drawable);

		return 0;
	}

	// void osgUtil::PolytopeIntersector::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PolytopeIntersector::base_reset() function, expected prototype:\nvoid osgUtil::PolytopeIntersector::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PolytopeIntersector::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PolytopeIntersector::reset();

		return 0;
	}

	// bool osgUtil::PolytopeIntersector::base_containsIntersections()
	static int _bind_base_containsIntersections(lua_State *L) {
		if (!_lg_typecheck_base_containsIntersections(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::PolytopeIntersector::base_containsIntersections() function, expected prototype:\nbool osgUtil::PolytopeIntersector::base_containsIntersections()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PolytopeIntersector* self=Luna< osg::Referenced >::checkSubType< osgUtil::PolytopeIntersector >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::PolytopeIntersector::base_containsIntersections(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->PolytopeIntersector::containsIntersections();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgUtil::PolytopeIntersector* LunaTraits< osgUtil::PolytopeIntersector >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PolytopeIntersector::_bind_ctor(L);
}

void LunaTraits< osgUtil::PolytopeIntersector >::_bind_dtor(osgUtil::PolytopeIntersector* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::PolytopeIntersector >::className[] = "PolytopeIntersector";
const char LunaTraits< osgUtil::PolytopeIntersector >::fullName[] = "osgUtil::PolytopeIntersector";
const char LunaTraits< osgUtil::PolytopeIntersector >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PolytopeIntersector >::parents[] = {"osgUtil.Intersector", 0};
const int LunaTraits< osgUtil::PolytopeIntersector >::hash = 2263597;
const int LunaTraits< osgUtil::PolytopeIntersector >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::PolytopeIntersector >::methods[] = {
	{"insertIntersection", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_insertIntersection},
	{"getIntersections", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_getIntersections},
	{"getFirstIntersection", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_getFirstIntersection},
	{"getDimensionMask", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_getDimensionMask},
	{"setDimensionMask", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_setDimensionMask},
	{"getReferencePlane", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_getReferencePlane},
	{"setReferencePlane", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_setReferencePlane},
	{"clone", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_clone},
	{"enter", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_enter},
	{"leave", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_leave},
	{"intersect", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_intersect},
	{"reset", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_reset},
	{"containsIntersections", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_containsIntersections},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_base_setThreadSafeRefUnref},
	{"base_clone", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_base_clone},
	{"base_enter", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_base_enter},
	{"base_leave", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_base_leave},
	{"base_intersect", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_base_intersect},
	{"base_reset", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_base_reset},
	{"base_containsIntersections", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_base_containsIntersections},
	{"fromVoid", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_PolytopeIntersector::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PolytopeIntersector >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_PolytopeIntersector::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PolytopeIntersector >::enumValues[] = {
	{"DimZero", osgUtil::PolytopeIntersector::DimZero},
	{"DimOne", osgUtil::PolytopeIntersector::DimOne},
	{"DimTwo", osgUtil::PolytopeIntersector::DimTwo},
	{"AllDims", osgUtil::PolytopeIntersector::AllDims},
	{0,0}
};


