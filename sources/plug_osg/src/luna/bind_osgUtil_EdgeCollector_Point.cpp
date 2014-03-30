#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_EdgeCollector_Point.h>

class luna_wrapper_osgUtil_EdgeCollector_Point {
public:
	typedef Luna< osgUtil::EdgeCollector::Point > luna_t;

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

		osgUtil::EdgeCollector::Point* self= (osgUtil::EdgeCollector::Point*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::EdgeCollector::Point >::push(L,self,false);
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
		//osgUtil::EdgeCollector::Point* ptr= dynamic_cast< osgUtil::EdgeCollector::Point* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::EdgeCollector::Point* ptr= luna_caster< osg::Referenced, osgUtil::EdgeCollector::Point >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::EdgeCollector::Point >::push(L,ptr,false);
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

	inline static bool _lg_typecheck_isBoundaryPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProtected(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getVertex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangles(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setProtected(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setVertex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
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
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::EdgeCollector::Point::Point()
	static osgUtil::EdgeCollector::Point* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Point::Point() function, expected prototype:\nosgUtil::EdgeCollector::Point::Point()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::EdgeCollector::Point();
	}

	// osgUtil::EdgeCollector::Point::Point(lua_Table * data)
	static osgUtil::EdgeCollector::Point* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::Point::Point(lua_Table * data) function, expected prototype:\nosgUtil::EdgeCollector::Point::Point(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_EdgeCollector_Point(L,NULL);
	}

	// Overload binder for osgUtil::EdgeCollector::Point::Point
	static osgUtil::EdgeCollector::Point* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function Point, cannot match any of the overloads for function Point:\n  Point()\n  Point(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::EdgeCollector::Point::clear()
	static int _bind_clear(lua_State *L) {
		if (!_lg_typecheck_clear(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Point::clear() function, expected prototype:\nvoid osgUtil::EdgeCollector::Point::clear()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Point::clear(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->clear();

		return 0;
	}

	// bool osgUtil::EdgeCollector::Point::isBoundaryPoint() const
	static int _bind_isBoundaryPoint(lua_State *L) {
		if (!_lg_typecheck_isBoundaryPoint(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Point::isBoundaryPoint() const function, expected prototype:\nbool osgUtil::EdgeCollector::Point::isBoundaryPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Point::isBoundaryPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->isBoundaryPoint();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::EdgeCollector::Point::_protected()
	static int _bind_getProtected(lua_State *L) {
		if (!_lg_typecheck_getProtected(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Point::_protected() function, expected prototype:\nbool osgUtil::EdgeCollector::Point::_protected()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Point::_protected(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->_protected;
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// unsigned int osgUtil::EdgeCollector::Point::_index()
	static int _bind_getIndex(lua_State *L) {
		if (!_lg_typecheck_getIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::EdgeCollector::Point::_index() function, expected prototype:\nunsigned int osgUtil::EdgeCollector::Point::_index()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::EdgeCollector::Point::_index(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->_index;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3d osgUtil::EdgeCollector::Point::_vertex()
	static int _bind_getVertex(lua_State *L) {
		if (!_lg_typecheck_getVertex(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgUtil::EdgeCollector::Point::_vertex() function, expected prototype:\nosg::Vec3d osgUtil::EdgeCollector::Point::_vertex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osgUtil::EdgeCollector::Point::_vertex(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->_vertex;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// osgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::Point::_triangles()
	static int _bind_getTriangles(lua_State *L) {
		if (!_lg_typecheck_getTriangles(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::Point::_triangles() function, expected prototype:\nosgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::Point::_triangles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::EdgeCollector::TriangleSet osgUtil::EdgeCollector::Point::_triangles(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::EdgeCollector::TriangleSet* lret = &self->_triangles;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::EdgeCollector::TriangleSet >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::EdgeCollector::Point::_protected(bool value)
	static int _bind_setProtected(lua_State *L) {
		if (!_lg_typecheck_setProtected(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Point::_protected(bool value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Point::_protected(bool value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool value=(bool)(lua_toboolean(L,2)==1);

		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Point::_protected(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_protected = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Point::_index(unsigned int value)
	static int _bind_setIndex(lua_State *L) {
		if (!_lg_typecheck_setIndex(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Point::_index(unsigned int value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Point::_index(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Point::_index(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_index = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Point::_vertex(osg::Vec3d value)
	static int _bind_setVertex(lua_State *L) {
		if (!_lg_typecheck_setVertex(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Point::_vertex(osg::Vec3d value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Point::_vertex(osg::Vec3d value)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::EdgeCollector::Point::_vertex function");
		}
		osg::Vec3d value=*value_ptr;

		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Point::_vertex(osg::Vec3d). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_vertex = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Point::_triangles(osgUtil::EdgeCollector::TriangleSet value)
	static int _bind_setTriangles(lua_State *L) {
		if (!_lg_typecheck_setTriangles(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Point::_triangles(osgUtil::EdgeCollector::TriangleSet value) function, expected prototype:\nvoid osgUtil::EdgeCollector::Point::_triangles(osgUtil::EdgeCollector::TriangleSet value)\nClass arguments details:\narg 1 ID = 62987903\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::EdgeCollector::TriangleSet* value_ptr=(Luna< std::set< osg::ref_ptr< osgUtil::EdgeCollector::Triangle > > >::checkSubType< osgUtil::EdgeCollector::TriangleSet >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::EdgeCollector::Point::_triangles function");
		}
		osgUtil::EdgeCollector::TriangleSet value=*value_ptr;

		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Point::_triangles(osgUtil::EdgeCollector::TriangleSet). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->_triangles = value;

		return 0;
	}

	// void osgUtil::EdgeCollector::Point::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::EdgeCollector::Point::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::EdgeCollector::Point::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::EdgeCollector::Point::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->Point::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:
	// bool osgUtil::EdgeCollector::Point::operator<(const osgUtil::EdgeCollector::Point & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::EdgeCollector::Point::operator<(const osgUtil::EdgeCollector::Point & rhs) const function, expected prototype:\nbool osgUtil::EdgeCollector::Point::operator<(const osgUtil::EdgeCollector::Point & rhs) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::EdgeCollector::Point* rhs_ptr=(Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::EdgeCollector::Point::operator< function");
		}
		const osgUtil::EdgeCollector::Point & rhs=*rhs_ptr;

		osgUtil::EdgeCollector::Point* self=Luna< osg::Referenced >::checkSubType< osgUtil::EdgeCollector::Point >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::EdgeCollector::Point::operator<(const osgUtil::EdgeCollector::Point &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::EdgeCollector::Point* LunaTraits< osgUtil::EdgeCollector::Point >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_EdgeCollector_Point::_bind_ctor(L);
}

void LunaTraits< osgUtil::EdgeCollector::Point >::_bind_dtor(osgUtil::EdgeCollector::Point* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::EdgeCollector::Point >::className[] = "EdgeCollector_Point";
const char LunaTraits< osgUtil::EdgeCollector::Point >::fullName[] = "osgUtil::EdgeCollector::Point";
const char LunaTraits< osgUtil::EdgeCollector::Point >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::EdgeCollector::Point >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::EdgeCollector::Point >::hash = 78907547;
const int LunaTraits< osgUtil::EdgeCollector::Point >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::EdgeCollector::Point >::methods[] = {
	{"clear", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_clear},
	{"isBoundaryPoint", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_isBoundaryPoint},
	{"getProtected", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_getProtected},
	{"getIndex", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_getIndex},
	{"getVertex", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_getVertex},
	{"getTriangles", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_getTriangles},
	{"setProtected", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_setProtected},
	{"setIndex", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_setIndex},
	{"setVertex", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_setVertex},
	{"setTriangles", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_setTriangles},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_base_setThreadSafeRefUnref},
	{"__lt", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind___lt},
	{"fromVoid", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_EdgeCollector_Point::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::EdgeCollector::Point >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_EdgeCollector_Point::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::EdgeCollector::Point >::enumValues[] = {
	{0,0}
};


