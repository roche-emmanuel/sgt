#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_EdgeCollector_Triangle.h>

class luna_wrapper_osgUtil_EdgeCollector_Triangle {
public:
	typedef Luna< osgUtil::EdgeCollector::Triangle > luna_t;

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

		osgUtil::EdgeCollector::Triangle* self= (osgUtil::EdgeCollector::Triangle*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::EdgeCollector::Triangle >::push(L,self,false);
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
		//osgUtil::EdgeCollector::Triangle* ptr= dynamic_cast< osgUtil::EdgeCollector::Triangle* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::EdgeCollector::Triangle* ptr= luna_caster< osg::Referenced, osgUtil::EdgeCollector::Triangle >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::EdgeCollector::Triangle >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_clear(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setOrderedPoints(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_distance(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBoundaryTriangle(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOp1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOp2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOp3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getE1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getE2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getE3(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPlane(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setP1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOp1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOp2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOp3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,28717922) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setE1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95131209) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setE2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95131209) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setE3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,95131209) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPlane(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,86970521) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::EdgeCollector::Triangle::Triangle()
	static osgUtil::EdgeCollector::Triangle* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Triangle::Triangle() function, expected prototype:\nosgUtil::EdgeCollector::Triangle::Triangle()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::EdgeCollector::Triangle();
	}

	// osgUtil::EdgeCollector::Triangle::Triangle(lua_Table * data)
	static osgUtil::EdgeCollector::Triangle* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Triangle::Triangle(lua_Table * data) function, expected prototype:\nosgUtil::EdgeCollector::Triangle::Triangle(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_EdgeCollector_Triangle(L,NULL);
	}

	// Overload binder for osgUtil::EdgeCollector::Triangle::Triangle
	static osgUtil::EdgeCollector::Triangle* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Triangle, cannot match any of the overloads for function Triangle:\n  Triangle()\n  Triangle(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::EdgeCollector::Triangle::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::clear() function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3)
	static int _bind_setOrderedPoints(lua_State *L) {
		if (!_lg_typecheck_setOrderedPoints(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::Point* p1=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,2));
		osgUtil::EdgeCollector::Point* p2=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,3));
		osgUtil::EdgeCollector::Point* p3=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,4));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::setOrderedPoints(osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOrderedPoints(p1, p2, p3);

		return 0;
	}

	// float osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f & vertex) const
	static int _bind_distance(lua_State *L) {
		if (!_lg_typecheck_distance(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f & vertex) const function, expected prototype:\nfloat osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f & vertex) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* vertex_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !vertex_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg vertex in osgUtil::EdgeCollector::Triangle::distance function");
		}
		const osg::Vec3f & vertex=*vertex_ptr;

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::EdgeCollector::Triangle::distance(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->distance(vertex);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const
	static int _bind_isBoundaryTriangle(lua_State *L) {
		if (!_lg_typecheck_isBoundaryTriangle(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const function, expected prototype:\nbool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Triangle::isBoundaryTriangle() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isBoundaryTriangle();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p1()
	static int _bind_getP1(lua_State *L) {
		if (!_lg_typecheck_getP1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p1() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p1(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_p1;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p2()
	static int _bind_getP2(lua_State *L) {
		if (!_lg_typecheck_getP2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p2() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p2(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_p2;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p3()
	static int _bind_getP3(lua_State *L) {
		if (!_lg_typecheck_getP3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p3() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p3()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_p3(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_p3;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op1()
	static int _bind_getOp1(lua_State *L) {
		if (!_lg_typecheck_getOp1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op1() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op1(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_op1;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op2()
	static int _bind_getOp2(lua_State *L) {
		if (!_lg_typecheck_getOp2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op2() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op2(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_op2;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op3()
	static int _bind_getOp3(lua_State *L) {
		if (!_lg_typecheck_getOp3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op3() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op3()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Triangle::_op3(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_op3;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e1()
	static int _bind_getE1(lua_State *L) {
		if (!_lg_typecheck_getE1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e1() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e1(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Edge > lret = self->_e1;
		Luna< osgUtil::EdgeCollector::Edge >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e2()
	static int _bind_getE2(lua_State *L) {
		if (!_lg_typecheck_getE2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e2() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e2(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Edge > lret = self->_e2;
		Luna< osgUtil::EdgeCollector::Edge >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e3()
	static int _bind_getE3(lua_State *L) {
		if (!_lg_typecheck_getE3(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e3() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e3()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Edge > osgUtil::EdgeCollector::Triangle::_e3(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Edge > lret = self->_e3;
		Luna< osgUtil::EdgeCollector::Edge >::push(L,lret.get(),false);

		return 1;
	}

	// osg::Plane osgUtil::EdgeCollector::Triangle::_plane()
	static int _bind_getPlane(lua_State *L) {
		if (!_lg_typecheck_getPlane(L)) {
			luaL_error(L, "luna typecheck failed in osg::Plane osgUtil::EdgeCollector::Triangle::_plane() function, expected prototype:\nosg::Plane osgUtil::EdgeCollector::Triangle::_plane()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Plane osgUtil::EdgeCollector::Triangle::_plane(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Plane* lret = &self->_plane;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Plane >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::EdgeCollector::Triangle::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_setP1(lua_State *L) {
		if (!_lg_typecheck_setP1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_p1 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_setP2(lua_State *L) {
		if (!_lg_typecheck_setP2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_p2 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_p3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_setP3(lua_State *L) {
		if (!_lg_typecheck_setP3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_p3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_p3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_p3(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_p3 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_setOp1(lua_State *L) {
		if (!_lg_typecheck_setOp1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_op1 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_setOp2(lua_State *L) {
		if (!_lg_typecheck_setOp2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_op2 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_op3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_setOp3(lua_State *L) {
		if (!_lg_typecheck_setOp3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_op3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_op3(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_op3(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_op3 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_e1(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)
	static int _bind_setE1(lua_State *L) {
		if (!_lg_typecheck_setE1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_e1(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_e1(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Edge > value = dynamic_cast< osgUtil::EdgeCollector::Edge* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_e1(osg::ref_ptr< osgUtil::EdgeCollector::Edge >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_e1 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_e2(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)
	static int _bind_setE2(lua_State *L) {
		if (!_lg_typecheck_setE2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_e2(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_e2(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Edge > value = dynamic_cast< osgUtil::EdgeCollector::Edge* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_e2(osg::ref_ptr< osgUtil::EdgeCollector::Edge >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_e2 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_e3(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)
	static int _bind_setE3(lua_State *L) {
		if (!_lg_typecheck_setE3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_e3(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_e3(osg::ref_ptr< osgUtil::EdgeCollector::Edge > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Edge > value = dynamic_cast< osgUtil::EdgeCollector::Edge* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_e3(osg::ref_ptr< osgUtil::EdgeCollector::Edge >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_e3 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::_plane(osg::Plane value)
	static int _bind_setPlane(lua_State *L) {
		if (!_lg_typecheck_setPlane(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::_plane(osg::Plane value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::_plane(osg::Plane value)\nClass arguments details:\narg 1 ID = 86970521\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Plane* value_ptr=(Luna< osg::Plane >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::EdgeCollector::Triangle::_plane function");
		}
		osg::Plane value=*value_ptr;

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::_plane(osg::Plane). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_plane = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Triangle::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Triangle::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::EdgeCollector::Triangle::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Triangle::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Triangle::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:
	// bool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::EdgeCollector::Triangle* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Triangle::operator< function");
		}
		const osgUtil::EdgeCollector::Triangle & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Triangle* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Triangle::operator<(const osgUtil::EdgeCollector::Triangle &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::EdgeCollector::Triangle* LunaTraits< osgUtil::EdgeCollector::Triangle >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_ctor(L);
}

void LunaTraits< osgUtil::EdgeCollector::Triangle >::_bind_dtor(osgUtil::EdgeCollector::Triangle* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::EdgeCollector::Triangle >::className[] = "EdgeCollector_Triangle";
const char LunaTraits< osgUtil::EdgeCollector::Triangle >::fullName[] = "osgUtil::EdgeCollector::Triangle";
const char LunaTraits< osgUtil::EdgeCollector::Triangle >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::Triangle >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::EdgeCollector::Triangle >::hash = 34878428;
const int LunaTraits< osgUtil::EdgeCollector::Triangle >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::Triangle >::methods[] = {
	{"clear", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_clear},
	{"setOrderedPoints", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setOrderedPoints},
	{"distance", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_distance},
	{"isBoundaryTriangle", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_isBoundaryTriangle},
	{"getP1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getP1},
	{"getP2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getP2},
	{"getP3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getP3},
	{"getOp1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getOp1},
	{"getOp2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getOp2},
	{"getOp3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getOp3},
	{"getE1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getE1},
	{"getE2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getE2},
	{"getE3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getE3},
	{"getPlane", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getPlane},
	{"setP1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setP1},
	{"setP2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setP2},
	{"setP3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setP3},
	{"setOp1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setOp1},
	{"setOp2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setOp2},
	{"setOp3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setOp3},
	{"setE1", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setE1},
	{"setE2", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setE2},
	{"setE3", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setE3},
	{"setPlane", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_setPlane},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_base_setThreadSafeRefUnref},
	{"__lt", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind___lt},
	{"fromVoid", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::Triangle >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_EdgeCollector_Triangle::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::Triangle >::enumValues[] = {
	{0,0}
};


