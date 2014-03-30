#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_EdgeCollector_Edge.h>

class luna_wrapper_osgUtil_EdgeCollector_Edge {
public:
	typedef Luna< osgUtil::EdgeCollector::Edge > luna_t;

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

		osgUtil::EdgeCollector::Edge* self= (osgUtil::EdgeCollector::Edge*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::EdgeCollector::Edge >::push(L,self,false);
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
		//osgUtil::EdgeCollector::Edge* ptr= dynamic_cast< osgUtil::EdgeCollector::Edge* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::EdgeCollector::Edge* ptr= luna_caster< osg::Referenced, osgUtil::EdgeCollector::Edge >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::EdgeCollector::Edge >::push(L,ptr,false);
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
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addTriangle(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_isBoundaryEdge(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_isAdjacentToBoundary(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_endConnected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_beginConnected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
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

	inline static bool _lg_typecheck_getOp1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOp2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangles(lua_State *L) {
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

	inline static bool _lg_typecheck_setTriangles(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,71050428) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 3 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_op_neq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::EdgeCollector::Edge::Edge()
	static osgUtil::EdgeCollector::Edge* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Edge::Edge() function, expected prototype:\nosgUtil::EdgeCollector::Edge::Edge()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::EdgeCollector::Edge();
	}

	// osgUtil::EdgeCollector::Edge::Edge(lua_Table * data)
	static osgUtil::EdgeCollector::Edge* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Edge::Edge(lua_Table * data) function, expected prototype:\nosgUtil::EdgeCollector::Edge::Edge(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_EdgeCollector_Edge(L,NULL);
	}

	// Overload binder for osgUtil::EdgeCollector::Edge::Edge
	static osgUtil::EdgeCollector::Edge* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Edge, cannot match any of the overloads for function Edge:\n  Edge()\n  Edge(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::EdgeCollector::Edge::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::clear() function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// void osgUtil::EdgeCollector::Edge::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2)
	static int _bind_setOrderedPoints(lua_State *L) {
		if (!_lg_typecheck_setOrderedPoints(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::setOrderedPoints(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::Point* p1=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,2));
		osgUtil::EdgeCollector::Point* p2=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,3));

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::setOrderedPoints(osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setOrderedPoints(p1, p2);

		return 0;
	}

	// void osgUtil::EdgeCollector::Edge::addTriangle(osgUtil::EdgeCollector::Triangle * triangle)
	static int _bind_addTriangle(lua_State *L) {
		if (!_lg_typecheck_addTriangle(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::addTriangle(osgUtil::EdgeCollector::Triangle * triangle) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::addTriangle(osgUtil::EdgeCollector::Triangle * triangle)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::Triangle* triangle=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,2));

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::addTriangle(osgUtil::EdgeCollector::Triangle *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addTriangle(triangle);

		return 0;
	}

	// bool osgUtil::EdgeCollector::Edge::isBoundaryEdge() const
	static int _bind_isBoundaryEdge(lua_State *L) {
		if (!_lg_typecheck_isBoundaryEdge(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::isBoundaryEdge() const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::isBoundaryEdge() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::isBoundaryEdge() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isBoundaryEdge();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Edge::isAdjacentToBoundary() const
	static int _bind_isAdjacentToBoundary(lua_State *L) {
		if (!_lg_typecheck_isAdjacentToBoundary(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::isAdjacentToBoundary() const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::isAdjacentToBoundary() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::isAdjacentToBoundary() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isAdjacentToBoundary();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Edge::endConnected(const osgUtil::EdgeCollector::Edge & rhs) const
	static int _bind_endConnected(lua_State *L) {
		if (!_lg_typecheck_endConnected(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::endConnected(const osgUtil::EdgeCollector::Edge & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::endConnected(const osgUtil::EdgeCollector::Edge & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::EdgeCollector::Edge* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Edge::endConnected function");
		}
		const osgUtil::EdgeCollector::Edge & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::endConnected(const osgUtil::EdgeCollector::Edge &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->endConnected(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Edge::beginConnected(const osgUtil::EdgeCollector::Edge & rhs) const
	static int _bind_beginConnected(lua_State *L) {
		if (!_lg_typecheck_beginConnected(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::beginConnected(const osgUtil::EdgeCollector::Edge & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::beginConnected(const osgUtil::EdgeCollector::Edge & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::EdgeCollector::Edge* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Edge::beginConnected function");
		}
		const osgUtil::EdgeCollector::Edge & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::beginConnected(const osgUtil::EdgeCollector::Edge &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->beginConnected(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_p1()
	static int _bind_getP1(lua_State *L) {
		if (!_lg_typecheck_getP1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_p1() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_p1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_p1(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_p1;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_p2()
	static int _bind_getP2(lua_State *L) {
		if (!_lg_typecheck_getP2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_p2() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_p2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_p2(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_p2;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_op1()
	static int _bind_getOp1(lua_State *L) {
		if (!_lg_typecheck_getOp1(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_op1() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_op1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_op1(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_op1;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_op2()
	static int _bind_getOp2(lua_State *L) {
		if (!_lg_typecheck_getOp2(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_op2() function, expected prototype:\nosg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_op2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osgUtil::EdgeCollector::Point > osgUtil::EdgeCollector::Edge::_op2(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osgUtil::EdgeCollector::Point > lret = self->_op2;
		Luna< osgUtil::EdgeCollector::Point >::push(L,lret.get(),false);

		return 1;
	}

	// osgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::Edge::_triangles()
	static int _bind_getTriangles(lua_State *L) {
		if (!_lg_typecheck_getTriangles(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::Edge::_triangles() function, expected prototype:\nosgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::Edge::_triangles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::Edge::_triangles(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::EdgeCollector::TriangleSet* lret = &self->_triangles;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::TriangleSet >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::EdgeCollector::Edge::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_setP1(lua_State *L) {
		if (!_lg_typecheck_setP1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::_p1(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_p1 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Edge::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_setP2(lua_State *L) {
		if (!_lg_typecheck_setP2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::_p2(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_p2 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Edge::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_setOp1(lua_State *L) {
		if (!_lg_typecheck_setOp1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::_op1(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_op1 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Edge::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)
	static int _bind_setOp2(lua_State *L) {
		if (!_lg_typecheck_setOp2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osgUtil::EdgeCollector::Point > value = dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::_op2(osg::ref_ptr< osgUtil::EdgeCollector::Point >). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_op2 = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Edge::_triangles(osgUtil::EdgeCollector::TriangleSet value)
	static int _bind_setTriangles(lua_State *L) {
		if (!_lg_typecheck_setTriangles(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::_triangles(osgUtil::EdgeCollector::TriangleSet value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::_triangles(osgUtil::EdgeCollector::TriangleSet value)\nClass arguments details:\narg 1 ID = 62987903\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::TriangleSet* value_ptr=(Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::checkSubType< osgUtil::EdgeCollector::TriangleSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::EdgeCollector::Edge::_triangles function");
		}
		osgUtil::EdgeCollector::TriangleSet value=*value_ptr;

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::_triangles(osgUtil::EdgeCollector::TriangleSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_triangles = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Edge::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Edge::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::EdgeCollector::Edge::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Edge::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Edge::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:
	// bool osgUtil::EdgeCollector::Edge::operator<(const osgUtil::EdgeCollector::Edge & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::operator<(const osgUtil::EdgeCollector::Edge & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::operator<(const osgUtil::EdgeCollector::Edge & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::EdgeCollector::Edge* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Edge::operator< function");
		}
		const osgUtil::EdgeCollector::Edge & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::operator<(const osgUtil::EdgeCollector::Edge &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Edge::operator==(const osgUtil::EdgeCollector::Edge & rhs) const
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::operator==(const osgUtil::EdgeCollector::Edge & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::operator==(const osgUtil::EdgeCollector::Edge & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::EdgeCollector::Edge* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Edge::operator== function");
		}
		const osgUtil::EdgeCollector::Edge & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::operator==(const osgUtil::EdgeCollector::Edge &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator==(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Edge::operator!=(const osgUtil::EdgeCollector::Edge & rhs) const
	static int _bind_op_neq(lua_State *L) {
		if (!_lg_typecheck_op_neq(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Edge::operator!=(const osgUtil::EdgeCollector::Edge & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Edge::operator!=(const osgUtil::EdgeCollector::Edge & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::EdgeCollector::Edge* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Edge::operator!= function");
		}
		const osgUtil::EdgeCollector::Edge & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Edge* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edge >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Edge::operator!=(const osgUtil::EdgeCollector::Edge &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator!=(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::EdgeCollector::Edge* LunaTraits< osgUtil::EdgeCollector::Edge >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_ctor(L);
}

void LunaTraits< osgUtil::EdgeCollector::Edge >::_bind_dtor(osgUtil::EdgeCollector::Edge* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::EdgeCollector::Edge >::className[] = "EdgeCollector_Edge";
const char LunaTraits< osgUtil::EdgeCollector::Edge >::fullName[] = "osgUtil::EdgeCollector::Edge";
const char LunaTraits< osgUtil::EdgeCollector::Edge >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::Edge >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::EdgeCollector::Edge >::hash = 2207058;
const int LunaTraits< osgUtil::EdgeCollector::Edge >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::Edge >::methods[] = {
	{"clear", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_clear},
	{"setOrderedPoints", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_setOrderedPoints},
	{"addTriangle", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_addTriangle},
	{"isBoundaryEdge", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_isBoundaryEdge},
	{"isAdjacentToBoundary", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_isAdjacentToBoundary},
	{"endConnected", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_endConnected},
	{"beginConnected", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_beginConnected},
	{"getP1", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_getP1},
	{"getP2", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_getP2},
	{"getOp1", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_getOp1},
	{"getOp2", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_getOp2},
	{"getTriangles", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_getTriangles},
	{"setP1", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_setP1},
	{"setP2", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_setP2},
	{"setOp1", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_setOp1},
	{"setOp2", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_setOp2},
	{"setTriangles", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_setTriangles},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_base_setThreadSafeRefUnref},
	{"__lt", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind___lt},
	{"__eq", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind___eq},
	{"op_neq", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_op_neq},
	{"fromVoid", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_EdgeCollector_Edge::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::Edge >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_EdgeCollector_Edge::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::Edge >::enumValues[] = {
	{0,0}
};


