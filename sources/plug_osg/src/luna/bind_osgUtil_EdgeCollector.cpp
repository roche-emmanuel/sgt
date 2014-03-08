#include <plug_common.h>

class luna_wrapper_osgUtil_EdgeCollector {
public:
	typedef Luna< osgUtil::EdgeCollector > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81832682) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::EdgeCollector*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector* rhs =(Luna< osgUtil::EdgeCollector >::check(L,2));
		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call __eq(...)");
		}
		
		lua_pushboolean(L,self==rhs?1:0);

		return 1;
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

		osgUtil::EdgeCollector* self= (osgUtil::EdgeCollector*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::EdgeCollector >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,81832682) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call asVoid(...)");
		}
		
		Luna< void >::push(L,self,false);
		return 1;
	}	

	// Base class dynamic cast support:
	inline static bool _lg_typecheck_dynCast(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}
	
	static int _bind_dynCast(lua_State *L) {
		if (!_lg_typecheck_dynCast(L)) {
			luaL_error(L, "luna typecheck failed in dynCast function, expected prototype:\ndynCast(const std::string &). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::EdgeCollector");
		
		return luna_dynamicCast(L,converters,"osgUtil::EdgeCollector",name);
	}


	// Constructor checkers:

	// Function checkers:
	inline static bool _lg_typecheck_setGeometry(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getGeometry(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNumOfTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_addTriangle_overload_1(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addTriangle_overload_2(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,3)) ) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,4)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addEdge(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,4)==0 && !Luna<void>::has_uniqueid(L,4,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPoint_overload_1(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,2)) ) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_addPoint_overload_2(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,2)) ) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,3)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getBoundaryEdgeList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57514973) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_extractBoundaryEdgeloop(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57514973) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_extractBoundaryEdgeloopList(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,57514973) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,83036857) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEdgeloopIndexList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91716752) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getEdgeSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangleSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPointSet(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getOriginalPointList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setEdgeSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,17405453) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setTriangleSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,71050428) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPointSet(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,14213870) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setOriginalPointList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,26981281) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:

	// Function binds:
	// void osgUtil::EdgeCollector::setGeometry(osg::Geometry * geometry)
	static int _bind_setGeometry(lua_State *L) {
		if (!_lg_typecheck_setGeometry(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::setGeometry(osg::Geometry * geometry) function, expected prototype:\nvoid osgUtil::EdgeCollector::setGeometry(osg::Geometry * geometry)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry* geometry=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::setGeometry(osg::Geometry *). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setGeometry(geometry);

		return 0;
	}

	// osg::Geometry * osgUtil::EdgeCollector::getGeometry()
	static int _bind_getGeometry(lua_State *L) {
		if (!_lg_typecheck_getGeometry(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgUtil::EdgeCollector::getGeometry() function, expected prototype:\nosg::Geometry * osgUtil::EdgeCollector::getGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgUtil::EdgeCollector::getGeometry(). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->getGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// unsigned int osgUtil::EdgeCollector::getNumOfTriangles()
	static int _bind_getNumOfTriangles(lua_State *L) {
		if (!_lg_typecheck_getNumOfTriangles(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::EdgeCollector::getNumOfTriangles() function, expected prototype:\nunsigned int osgUtil::EdgeCollector::getNumOfTriangles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::EdgeCollector::getNumOfTriangles(). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->getNumOfTriangles();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osgUtil::EdgeCollector::Triangle * osgUtil::EdgeCollector::addTriangle(unsigned int p1, unsigned int p2, unsigned int p3)
	static int _bind_addTriangle_overload_1(lua_State *L) {
		if (!_lg_typecheck_addTriangle_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Triangle * osgUtil::EdgeCollector::addTriangle(unsigned int p1, unsigned int p2, unsigned int p3) function, expected prototype:\nosgUtil::EdgeCollector::Triangle * osgUtil::EdgeCollector::addTriangle(unsigned int p1, unsigned int p2, unsigned int p3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int p1=(unsigned int)lua_tointeger(L,2);
		unsigned int p2=(unsigned int)lua_tointeger(L,3);
		unsigned int p3=(unsigned int)lua_tointeger(L,4);

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::Triangle * osgUtil::EdgeCollector::addTriangle(unsigned int, unsigned int, unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::EdgeCollector::Triangle * lret = self->addTriangle(p1, p2, p3);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::Triangle >::push(L,lret,false);

		return 1;
	}

	// osgUtil::EdgeCollector::Triangle * osgUtil::EdgeCollector::addTriangle(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3)
	static int _bind_addTriangle_overload_2(lua_State *L) {
		if (!_lg_typecheck_addTriangle_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Triangle * osgUtil::EdgeCollector::addTriangle(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3) function, expected prototype:\nosgUtil::EdgeCollector::Triangle * osgUtil::EdgeCollector::addTriangle(osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2, osgUtil::EdgeCollector::Point * p3)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::Point* p1=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,2));
		osgUtil::EdgeCollector::Point* p2=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,3));
		osgUtil::EdgeCollector::Point* p3=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,4));

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::Triangle * osgUtil::EdgeCollector::addTriangle(osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::EdgeCollector::Triangle * lret = self->addTriangle(p1, p2, p3);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::Triangle >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::EdgeCollector::addTriangle
	static int _bind_addTriangle(lua_State *L) {
		if (_lg_typecheck_addTriangle_overload_1(L)) return _bind_addTriangle_overload_1(L);
		if (_lg_typecheck_addTriangle_overload_2(L)) return _bind_addTriangle_overload_2(L);

		luaL_error(L, "error in function addTriangle, cannot match any of the overloads for function addTriangle:\n  addTriangle(unsigned int, unsigned int, unsigned int)\n  addTriangle(osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *)\n");
		return 0;
	}

	// osgUtil::EdgeCollector::Edge * osgUtil::EdgeCollector::addEdge(osgUtil::EdgeCollector::Triangle * triangle, osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2)
	static int _bind_addEdge(lua_State *L) {
		if (!_lg_typecheck_addEdge(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Edge * osgUtil::EdgeCollector::addEdge(osgUtil::EdgeCollector::Triangle * triangle, osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2) function, expected prototype:\nosgUtil::EdgeCollector::Edge * osgUtil::EdgeCollector::addEdge(osgUtil::EdgeCollector::Triangle * triangle, osgUtil::EdgeCollector::Point * p1, osgUtil::EdgeCollector::Point * p2)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::Triangle* triangle=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,2));
		osgUtil::EdgeCollector::Point* p1=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,3));
		osgUtil::EdgeCollector::Point* p2=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,4));

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::Edge * osgUtil::EdgeCollector::addEdge(osgUtil::EdgeCollector::Triangle *, osgUtil::EdgeCollector::Point *, osgUtil::EdgeCollector::Point *). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::EdgeCollector::Edge * lret = self->addEdge(triangle, p1, p2);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::Edge >::push(L,lret,false);

		return 1;
	}

	// osgUtil::EdgeCollector::Point * osgUtil::EdgeCollector::addPoint(osgUtil::EdgeCollector::Triangle * triangle, unsigned int p1)
	static int _bind_addPoint_overload_1(lua_State *L) {
		if (!_lg_typecheck_addPoint_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Point * osgUtil::EdgeCollector::addPoint(osgUtil::EdgeCollector::Triangle * triangle, unsigned int p1) function, expected prototype:\nosgUtil::EdgeCollector::Point * osgUtil::EdgeCollector::addPoint(osgUtil::EdgeCollector::Triangle * triangle, unsigned int p1)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::Triangle* triangle=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,2));
		unsigned int p1=(unsigned int)lua_tointeger(L,3);

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::Point * osgUtil::EdgeCollector::addPoint(osgUtil::EdgeCollector::Triangle *, unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::EdgeCollector::Point * lret = self->addPoint(triangle, p1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::Point >::push(L,lret,false);

		return 1;
	}

	// osgUtil::EdgeCollector::Point * osgUtil::EdgeCollector::addPoint(osgUtil::EdgeCollector::Triangle * triangle, osgUtil::EdgeCollector::Point * point)
	static int _bind_addPoint_overload_2(lua_State *L) {
		if (!_lg_typecheck_addPoint_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Point * osgUtil::EdgeCollector::addPoint(osgUtil::EdgeCollector::Triangle * triangle, osgUtil::EdgeCollector::Point * point) function, expected prototype:\nosgUtil::EdgeCollector::Point * osgUtil::EdgeCollector::addPoint(osgUtil::EdgeCollector::Triangle * triangle, osgUtil::EdgeCollector::Point * point)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::Triangle* triangle=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Triangle >(L,2));
		osgUtil::EdgeCollector::Point* point=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,3));

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::Point * osgUtil::EdgeCollector::addPoint(osgUtil::EdgeCollector::Triangle *, osgUtil::EdgeCollector::Point *). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::EdgeCollector::Point * lret = self->addPoint(triangle, point);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::Point >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::EdgeCollector::addPoint
	static int _bind_addPoint(lua_State *L) {
		if (_lg_typecheck_addPoint_overload_1(L)) return _bind_addPoint_overload_1(L);
		if (_lg_typecheck_addPoint_overload_2(L)) return _bind_addPoint_overload_2(L);

		luaL_error(L, "error in function addPoint, cannot match any of the overloads for function addPoint:\n  addPoint(osgUtil::EdgeCollector::Triangle *, unsigned int)\n  addPoint(osgUtil::EdgeCollector::Triangle *, osgUtil::EdgeCollector::Point *)\n");
		return 0;
	}

	// void osgUtil::EdgeCollector::getBoundaryEdgeList(osgUtil::EdgeCollector::EdgeList & el)
	static int _bind_getBoundaryEdgeList(lua_State *L) {
		if (!_lg_typecheck_getBoundaryEdgeList(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::getBoundaryEdgeList(osgUtil::EdgeCollector::EdgeList & el) function, expected prototype:\nvoid osgUtil::EdgeCollector::getBoundaryEdgeList(osgUtil::EdgeCollector::EdgeList & el)\nClass arguments details:\narg 1 ID = 66168244\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::EdgeList* el_ptr=(Luna< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::checkSubType< osgUtil::EdgeCollector::EdgeList >(L,2));
		if( !el_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg el in osgUtil::EdgeCollector::getBoundaryEdgeList function");
		}
		osgUtil::EdgeCollector::EdgeList & el=*el_ptr;

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::getBoundaryEdgeList(osgUtil::EdgeCollector::EdgeList &). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getBoundaryEdgeList(el);

		return 0;
	}

	// bool osgUtil::EdgeCollector::extractBoundaryEdgeloop(osgUtil::EdgeCollector::EdgeList & el, osgUtil::EdgeCollector::Edgeloop & edgeloop)
	static int _bind_extractBoundaryEdgeloop(lua_State *L) {
		if (!_lg_typecheck_extractBoundaryEdgeloop(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::extractBoundaryEdgeloop(osgUtil::EdgeCollector::EdgeList & el, osgUtil::EdgeCollector::Edgeloop & edgeloop) function, expected prototype:\nbool osgUtil::EdgeCollector::extractBoundaryEdgeloop(osgUtil::EdgeCollector::EdgeList & el, osgUtil::EdgeCollector::Edgeloop & edgeloop)\nClass arguments details:\narg 1 ID = 66168244\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::EdgeList* el_ptr=(Luna< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::checkSubType< osgUtil::EdgeCollector::EdgeList >(L,2));
		if( !el_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg el in osgUtil::EdgeCollector::extractBoundaryEdgeloop function");
		}
		osgUtil::EdgeCollector::EdgeList & el=*el_ptr;
		osgUtil::EdgeCollector::Edgeloop* edgeloop_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Edgeloop >(L,3));
		if( !edgeloop_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg edgeloop in osgUtil::EdgeCollector::extractBoundaryEdgeloop function");
		}
		osgUtil::EdgeCollector::Edgeloop & edgeloop=*edgeloop_ptr;

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::extractBoundaryEdgeloop(osgUtil::EdgeCollector::EdgeList &, osgUtil::EdgeCollector::Edgeloop &). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->extractBoundaryEdgeloop(el, edgeloop);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::extractBoundaryEdgeloopList(osgUtil::EdgeCollector::EdgeList & el, osgUtil::EdgeCollector::EdgeloopList & edgeloopList)
	static int _bind_extractBoundaryEdgeloopList(lua_State *L) {
		if (!_lg_typecheck_extractBoundaryEdgeloopList(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::extractBoundaryEdgeloopList(osgUtil::EdgeCollector::EdgeList & el, osgUtil::EdgeCollector::EdgeloopList & edgeloopList) function, expected prototype:\nbool osgUtil::EdgeCollector::extractBoundaryEdgeloopList(osgUtil::EdgeCollector::EdgeList & el, osgUtil::EdgeCollector::EdgeloopList & edgeloopList)\nClass arguments details:\narg 1 ID = 66168244\narg 2 ID = 55216760\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::EdgeList* el_ptr=(Luna< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Edge > > >::checkSubType< osgUtil::EdgeCollector::EdgeList >(L,2));
		if( !el_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg el in osgUtil::EdgeCollector::extractBoundaryEdgeloopList function");
		}
		osgUtil::EdgeCollector::EdgeList & el=*el_ptr;
		osgUtil::EdgeCollector::EdgeloopList* edgeloopList_ptr=(Luna< std::list< osg::ref_ptr< osgUtil::EdgeCollector::Edgeloop > > >::checkSubType< osgUtil::EdgeCollector::EdgeloopList >(L,3));
		if( !edgeloopList_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg edgeloopList in osgUtil::EdgeCollector::extractBoundaryEdgeloopList function");
		}
		osgUtil::EdgeCollector::EdgeloopList & edgeloopList=*edgeloopList_ptr;

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::extractBoundaryEdgeloopList(osgUtil::EdgeCollector::EdgeList &, osgUtil::EdgeCollector::EdgeloopList &). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->extractBoundaryEdgeloopList(el, edgeloopList);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::EdgeCollector::getEdgeloopIndexList(osgUtil::EdgeCollector::IndexArrayList & ial)
	static int _bind_getEdgeloopIndexList(lua_State *L) {
		if (!_lg_typecheck_getEdgeloopIndexList(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::getEdgeloopIndexList(osgUtil::EdgeCollector::IndexArrayList & ial) function, expected prototype:\nvoid osgUtil::EdgeCollector::getEdgeloopIndexList(osgUtil::EdgeCollector::IndexArrayList & ial)\nClass arguments details:\narg 1 ID = 655286\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::IndexArrayList* ial_ptr=(Luna< std::list< osg::ref_ptr< osg::UIntArray > > >::checkSubType< osgUtil::EdgeCollector::IndexArrayList >(L,2));
		if( !ial_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ial in osgUtil::EdgeCollector::getEdgeloopIndexList function");
		}
		osgUtil::EdgeCollector::IndexArrayList & ial=*ial_ptr;

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::getEdgeloopIndexList(osgUtil::EdgeCollector::IndexArrayList &). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->getEdgeloopIndexList(ial);

		return 0;
	}

	// osgUtil::EdgeCollector::EdgeSet osgUtil::EdgeCollector::_edgeSet()
	static int _bind_getEdgeSet(lua_State *L) {
		if (!_lg_typecheck_getEdgeSet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::EdgeSet osgUtil::EdgeCollector::_edgeSet() function, expected prototype:\nosgUtil::EdgeCollector::EdgeSet osgUtil::EdgeCollector::_edgeSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::EdgeSet osgUtil::EdgeCollector::_edgeSet(). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::EdgeCollector::EdgeSet* lret = &self->_edgeSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::EdgeSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::_triangleSet()
	static int _bind_getTriangleSet(lua_State *L) {
		if (!_lg_typecheck_getTriangleSet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::_triangleSet() function, expected prototype:\nosgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::_triangleSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::_triangleSet(). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::EdgeCollector::TriangleSet* lret = &self->_triangleSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::TriangleSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::EdgeCollector::PointSet osgUtil::EdgeCollector::_pointSet()
	static int _bind_getPointSet(lua_State *L) {
		if (!_lg_typecheck_getPointSet(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::PointSet osgUtil::EdgeCollector::_pointSet() function, expected prototype:\nosgUtil::EdgeCollector::PointSet osgUtil::EdgeCollector::_pointSet()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::PointSet osgUtil::EdgeCollector::_pointSet(). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::EdgeCollector::PointSet* lret = &self->_pointSet;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::PointSet >::push(L,lret,false);

		return 1;
	}

	// osgUtil::EdgeCollector::PointList osgUtil::EdgeCollector::_originalPointList()
	static int _bind_getOriginalPointList(lua_State *L) {
		if (!_lg_typecheck_getOriginalPointList(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::PointList osgUtil::EdgeCollector::_originalPointList() function, expected prototype:\nosgUtil::EdgeCollector::PointList osgUtil::EdgeCollector::_originalPointList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::PointList osgUtil::EdgeCollector::_originalPointList(). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::EdgeCollector::PointList* lret = &self->_originalPointList;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::PointList >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::EdgeCollector::_edgeSet(osgUtil::EdgeCollector::EdgeSet value)
	static int _bind_setEdgeSet(lua_State *L) {
		if (!_lg_typecheck_setEdgeSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::_edgeSet(osgUtil::EdgeCollector::EdgeSet value) function, expected prototype:\nvoid osgUtil::EdgeCollector::_edgeSet(osgUtil::EdgeCollector::EdgeSet value)\nClass arguments details:\narg 1 ID = 50528172\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::EdgeSet* value_ptr=(Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Edge >, osgUtil::dereference_less > >::checkSubType< osgUtil::EdgeCollector::EdgeSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::EdgeCollector::_edgeSet function");
		}
		osgUtil::EdgeCollector::EdgeSet value=*value_ptr;

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::_edgeSet(osgUtil::EdgeCollector::EdgeSet). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_edgeSet = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::_triangleSet(osgUtil::EdgeCollector::TriangleSet value)
	static int _bind_setTriangleSet(lua_State *L) {
		if (!_lg_typecheck_setTriangleSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::_triangleSet(osgUtil::EdgeCollector::TriangleSet value) function, expected prototype:\nvoid osgUtil::EdgeCollector::_triangleSet(osgUtil::EdgeCollector::TriangleSet value)\nClass arguments details:\narg 1 ID = 62987903\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::TriangleSet* value_ptr=(Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::checkSubType< osgUtil::EdgeCollector::TriangleSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::EdgeCollector::_triangleSet function");
		}
		osgUtil::EdgeCollector::TriangleSet value=*value_ptr;

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::_triangleSet(osgUtil::EdgeCollector::TriangleSet). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_triangleSet = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::_pointSet(osgUtil::EdgeCollector::PointSet value)
	static int _bind_setPointSet(lua_State *L) {
		if (!_lg_typecheck_setPointSet(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::_pointSet(osgUtil::EdgeCollector::PointSet value) function, expected prototype:\nvoid osgUtil::EdgeCollector::_pointSet(osgUtil::EdgeCollector::PointSet value)\nClass arguments details:\narg 1 ID = 34110025\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::PointSet* value_ptr=(Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Point >, osgUtil::dereference_less > >::checkSubType< osgUtil::EdgeCollector::PointSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::EdgeCollector::_pointSet function");
		}
		osgUtil::EdgeCollector::PointSet value=*value_ptr;

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::_pointSet(osgUtil::EdgeCollector::PointSet). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_pointSet = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::_originalPointList(osgUtil::EdgeCollector::PointList value)
	static int _bind_setOriginalPointList(lua_State *L) {
		if (!_lg_typecheck_setOriginalPointList(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::_originalPointList(osgUtil::EdgeCollector::PointList value) function, expected prototype:\nvoid osgUtil::EdgeCollector::_originalPointList(osgUtil::EdgeCollector::PointList value)\nClass arguments details:\narg 1 ID = 57205837\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::PointList* value_ptr=(Luna< std::vector< osg::ref_ptr< osgUtil::EdgeCollector::Point > > >::checkSubType< osgUtil::EdgeCollector::PointList >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::EdgeCollector::_originalPointList function");
		}
		osgUtil::EdgeCollector::PointList value=*value_ptr;

		osgUtil::EdgeCollector* self=(Luna< osgUtil::EdgeCollector >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::_originalPointList(osgUtil::EdgeCollector::PointList). Got : '%s'\n%s",typeid(Luna< osgUtil::EdgeCollector >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_originalPointList = value;

		return 0;
	}


	// Operator binds:

};

osgUtil::EdgeCollector* LunaTraits< osgUtil::EdgeCollector >::_bind_ctor(lua_State *L) {
	return NULL; // No valid default constructor.
}

void LunaTraits< osgUtil::EdgeCollector >::_bind_dtor(osgUtil::EdgeCollector* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::EdgeCollector >::className[] = "EdgeCollector";
const char LunaTraits< osgUtil::EdgeCollector >::fullName[] = "osgUtil::EdgeCollector";
const char LunaTraits< osgUtil::EdgeCollector >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector >::parents[] = {0};
const int LunaTraits< osgUtil::EdgeCollector >::hash = 81832682;
const int LunaTraits< osgUtil::EdgeCollector >::uniqueIDs[] = {81832682,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector >::methods[] = {
	{"setGeometry", &luna_wrapper_osgUtil_EdgeCollector::_bind_setGeometry},
	{"getGeometry", &luna_wrapper_osgUtil_EdgeCollector::_bind_getGeometry},
	{"getNumOfTriangles", &luna_wrapper_osgUtil_EdgeCollector::_bind_getNumOfTriangles},
	{"addTriangle", &luna_wrapper_osgUtil_EdgeCollector::_bind_addTriangle},
	{"addEdge", &luna_wrapper_osgUtil_EdgeCollector::_bind_addEdge},
	{"addPoint", &luna_wrapper_osgUtil_EdgeCollector::_bind_addPoint},
	{"getBoundaryEdgeList", &luna_wrapper_osgUtil_EdgeCollector::_bind_getBoundaryEdgeList},
	{"extractBoundaryEdgeloop", &luna_wrapper_osgUtil_EdgeCollector::_bind_extractBoundaryEdgeloop},
	{"extractBoundaryEdgeloopList", &luna_wrapper_osgUtil_EdgeCollector::_bind_extractBoundaryEdgeloopList},
	{"getEdgeloopIndexList", &luna_wrapper_osgUtil_EdgeCollector::_bind_getEdgeloopIndexList},
	{"getEdgeSet", &luna_wrapper_osgUtil_EdgeCollector::_bind_getEdgeSet},
	{"getTriangleSet", &luna_wrapper_osgUtil_EdgeCollector::_bind_getTriangleSet},
	{"getPointSet", &luna_wrapper_osgUtil_EdgeCollector::_bind_getPointSet},
	{"getOriginalPointList", &luna_wrapper_osgUtil_EdgeCollector::_bind_getOriginalPointList},
	{"setEdgeSet", &luna_wrapper_osgUtil_EdgeCollector::_bind_setEdgeSet},
	{"setTriangleSet", &luna_wrapper_osgUtil_EdgeCollector::_bind_setTriangleSet},
	{"setPointSet", &luna_wrapper_osgUtil_EdgeCollector::_bind_setPointSet},
	{"setOriginalPointList", &luna_wrapper_osgUtil_EdgeCollector::_bind_setOriginalPointList},
	{"dynCast", &luna_wrapper_osgUtil_EdgeCollector::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_EdgeCollector::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_EdgeCollector::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_EdgeCollector::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector >::enumValues[] = {
	{0,0}
};


