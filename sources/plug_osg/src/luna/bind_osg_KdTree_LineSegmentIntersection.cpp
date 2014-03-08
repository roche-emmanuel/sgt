#include <plug_common.h>

class luna_wrapper_osg_KdTree_LineSegmentIntersection {
public:
	typedef Luna< osg::KdTree::LineSegmentIntersection > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2943627) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osg::KdTree::LineSegmentIntersection*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osg::KdTree::LineSegmentIntersection* rhs =(Luna< osg::KdTree::LineSegmentIntersection >::check(L,2));
		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
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

		osg::KdTree::LineSegmentIntersection* self= (osg::KdTree::LineSegmentIntersection*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osg::KdTree::LineSegmentIntersection >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,2943627) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
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

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osg::KdTree::LineSegmentIntersection");
		
		return luna_dynamicCast(L,converters,"osg::KdTree::LineSegmentIntersection",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIntersectionPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIntersectionNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getP0(lua_State *L) {
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

	inline static bool _lg_typecheck_getR0(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getR1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getR2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPrimitiveIndex(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setRatio(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIntersectionPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIntersectionNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setP2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setR0(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setR1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setR2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPrimitiveIndex(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2943627) ) return false;
		return true;
	}


	// Constructor binds:
	// osg::KdTree::LineSegmentIntersection::LineSegmentIntersection()
	static osg::KdTree::LineSegmentIntersection* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osg::KdTree::LineSegmentIntersection::LineSegmentIntersection() function, expected prototype:\nosg::KdTree::LineSegmentIntersection::LineSegmentIntersection()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osg::KdTree::LineSegmentIntersection();
	}


	// Function binds:
	// double osg::KdTree::LineSegmentIntersection::ratio()
	static int _bind_getRatio(lua_State *L) {
		if (!_lg_typecheck_getRatio(L)) {
			luaL_error(L, "luna typecheck failed in double osg::KdTree::LineSegmentIntersection::ratio() function, expected prototype:\ndouble osg::KdTree::LineSegmentIntersection::ratio()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osg::KdTree::LineSegmentIntersection::ratio(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ratio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3d osg::KdTree::LineSegmentIntersection::intersectionPoint()
	static int _bind_getIntersectionPoint(lua_State *L) {
		if (!_lg_typecheck_getIntersectionPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osg::KdTree::LineSegmentIntersection::intersectionPoint() function, expected prototype:\nosg::Vec3d osg::KdTree::LineSegmentIntersection::intersectionPoint()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osg::KdTree::LineSegmentIntersection::intersectionPoint(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->intersectionPoint;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osg::KdTree::LineSegmentIntersection::intersectionNormal()
	static int _bind_getIntersectionNormal(lua_State *L) {
		if (!_lg_typecheck_getIntersectionNormal(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osg::KdTree::LineSegmentIntersection::intersectionNormal() function, expected prototype:\nosg::Vec3f osg::KdTree::LineSegmentIntersection::intersectionNormal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osg::KdTree::LineSegmentIntersection::intersectionNormal(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->intersectionNormal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// unsigned int osg::KdTree::LineSegmentIntersection::p0()
	static int _bind_getP0(lua_State *L) {
		if (!_lg_typecheck_getP0(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::LineSegmentIntersection::p0() function, expected prototype:\nunsigned int osg::KdTree::LineSegmentIntersection::p0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::LineSegmentIntersection::p0(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->p0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::KdTree::LineSegmentIntersection::p1()
	static int _bind_getP1(lua_State *L) {
		if (!_lg_typecheck_getP1(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::LineSegmentIntersection::p1() function, expected prototype:\nunsigned int osg::KdTree::LineSegmentIntersection::p1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::LineSegmentIntersection::p1(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->p1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::KdTree::LineSegmentIntersection::p2()
	static int _bind_getP2(lua_State *L) {
		if (!_lg_typecheck_getP2(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::LineSegmentIntersection::p2() function, expected prototype:\nunsigned int osg::KdTree::LineSegmentIntersection::p2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::LineSegmentIntersection::p2(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->p2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::KdTree::LineSegmentIntersection::r0()
	static int _bind_getR0(lua_State *L) {
		if (!_lg_typecheck_getR0(L)) {
			luaL_error(L, "luna typecheck failed in float osg::KdTree::LineSegmentIntersection::r0() function, expected prototype:\nfloat osg::KdTree::LineSegmentIntersection::r0()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::KdTree::LineSegmentIntersection::r0(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->r0;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::KdTree::LineSegmentIntersection::r1()
	static int _bind_getR1(lua_State *L) {
		if (!_lg_typecheck_getR1(L)) {
			luaL_error(L, "luna typecheck failed in float osg::KdTree::LineSegmentIntersection::r1() function, expected prototype:\nfloat osg::KdTree::LineSegmentIntersection::r1()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::KdTree::LineSegmentIntersection::r1(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->r1;
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osg::KdTree::LineSegmentIntersection::r2()
	static int _bind_getR2(lua_State *L) {
		if (!_lg_typecheck_getR2(L)) {
			luaL_error(L, "luna typecheck failed in float osg::KdTree::LineSegmentIntersection::r2() function, expected prototype:\nfloat osg::KdTree::LineSegmentIntersection::r2()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call float osg::KdTree::LineSegmentIntersection::r2(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->r2;
		lua_pushnumber(L,lret);

		return 1;
	}

	// unsigned int osg::KdTree::LineSegmentIntersection::primitiveIndex()
	static int _bind_getPrimitiveIndex(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osg::KdTree::LineSegmentIntersection::primitiveIndex() function, expected prototype:\nunsigned int osg::KdTree::LineSegmentIntersection::primitiveIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osg::KdTree::LineSegmentIntersection::primitiveIndex(). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->primitiveIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osg::KdTree::LineSegmentIntersection::ratio(double value)
	static int _bind_setRatio(lua_State *L) {
		if (!_lg_typecheck_setRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::LineSegmentIntersection::ratio(double value) function, expected prototype:\nvoid osg::KdTree::LineSegmentIntersection::ratio(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::LineSegmentIntersection::ratio(double). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ratio = value;

		return 0;
	}

	// void osg::KdTree::LineSegmentIntersection::intersectionPoint(osg::Vec3d value)
	static int _bind_setIntersectionPoint(lua_State *L) {
		if (!_lg_typecheck_setIntersectionPoint(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::LineSegmentIntersection::intersectionPoint(osg::Vec3d value) function, expected prototype:\nvoid osg::KdTree::LineSegmentIntersection::intersectionPoint(osg::Vec3d value)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::KdTree::LineSegmentIntersection::intersectionPoint function");
		}
		osg::Vec3d value=*value_ptr;

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::LineSegmentIntersection::intersectionPoint(osg::Vec3d). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->intersectionPoint = value;

		return 0;
	}

	// void osg::KdTree::LineSegmentIntersection::intersectionNormal(osg::Vec3f value)
	static int _bind_setIntersectionNormal(lua_State *L) {
		if (!_lg_typecheck_setIntersectionNormal(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::LineSegmentIntersection::intersectionNormal(osg::Vec3f value) function, expected prototype:\nvoid osg::KdTree::LineSegmentIntersection::intersectionNormal(osg::Vec3f value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osg::KdTree::LineSegmentIntersection::intersectionNormal function");
		}
		osg::Vec3f value=*value_ptr;

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::LineSegmentIntersection::intersectionNormal(osg::Vec3f). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->intersectionNormal = value;

		return 0;
	}

	// void osg::KdTree::LineSegmentIntersection::p0(unsigned int value)
	static int _bind_setP0(lua_State *L) {
		if (!_lg_typecheck_setP0(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::LineSegmentIntersection::p0(unsigned int value) function, expected prototype:\nvoid osg::KdTree::LineSegmentIntersection::p0(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::LineSegmentIntersection::p0(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->p0 = value;

		return 0;
	}

	// void osg::KdTree::LineSegmentIntersection::p1(unsigned int value)
	static int _bind_setP1(lua_State *L) {
		if (!_lg_typecheck_setP1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::LineSegmentIntersection::p1(unsigned int value) function, expected prototype:\nvoid osg::KdTree::LineSegmentIntersection::p1(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::LineSegmentIntersection::p1(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->p1 = value;

		return 0;
	}

	// void osg::KdTree::LineSegmentIntersection::p2(unsigned int value)
	static int _bind_setP2(lua_State *L) {
		if (!_lg_typecheck_setP2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::LineSegmentIntersection::p2(unsigned int value) function, expected prototype:\nvoid osg::KdTree::LineSegmentIntersection::p2(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::LineSegmentIntersection::p2(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->p2 = value;

		return 0;
	}

	// void osg::KdTree::LineSegmentIntersection::r0(float value)
	static int _bind_setR0(lua_State *L) {
		if (!_lg_typecheck_setR0(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::LineSegmentIntersection::r0(float value) function, expected prototype:\nvoid osg::KdTree::LineSegmentIntersection::r0(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::LineSegmentIntersection::r0(float). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->r0 = value;

		return 0;
	}

	// void osg::KdTree::LineSegmentIntersection::r1(float value)
	static int _bind_setR1(lua_State *L) {
		if (!_lg_typecheck_setR1(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::LineSegmentIntersection::r1(float value) function, expected prototype:\nvoid osg::KdTree::LineSegmentIntersection::r1(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::LineSegmentIntersection::r1(float). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->r1 = value;

		return 0;
	}

	// void osg::KdTree::LineSegmentIntersection::r2(float value)
	static int _bind_setR2(lua_State *L) {
		if (!_lg_typecheck_setR2(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::LineSegmentIntersection::r2(float value) function, expected prototype:\nvoid osg::KdTree::LineSegmentIntersection::r2(float value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		float value=(float)lua_tonumber(L,2);

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::LineSegmentIntersection::r2(float). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->r2 = value;

		return 0;
	}

	// void osg::KdTree::LineSegmentIntersection::primitiveIndex(unsigned int value)
	static int _bind_setPrimitiveIndex(lua_State *L) {
		if (!_lg_typecheck_setPrimitiveIndex(L)) {
			luaL_error(L, "luna typecheck failed in void osg::KdTree::LineSegmentIntersection::primitiveIndex(unsigned int value) function, expected prototype:\nvoid osg::KdTree::LineSegmentIntersection::primitiveIndex(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osg::KdTree::LineSegmentIntersection::primitiveIndex(unsigned int). Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->primitiveIndex = value;

		return 0;
	}


	// Operator binds:
	// bool osg::KdTree::LineSegmentIntersection::operator<(const osg::KdTree::LineSegmentIntersection & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osg::KdTree::LineSegmentIntersection::operator<(const osg::KdTree::LineSegmentIntersection & rhs) const function, expected prototype:\nbool osg::KdTree::LineSegmentIntersection::operator<(const osg::KdTree::LineSegmentIntersection & rhs) const\nClass arguments details:\narg 1 ID = 2943627\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::KdTree::LineSegmentIntersection* rhs_ptr=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osg::KdTree::LineSegmentIntersection::operator< function");
		}
		const osg::KdTree::LineSegmentIntersection & rhs=*rhs_ptr;

		osg::KdTree::LineSegmentIntersection* self=(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osg::KdTree::LineSegmentIntersection::operator<(const osg::KdTree::LineSegmentIntersection &) const. Got : '%s'\n%s",typeid(Luna< osg::KdTree::LineSegmentIntersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osg::KdTree::LineSegmentIntersection* LunaTraits< osg::KdTree::LineSegmentIntersection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_ctor(L);
}

void LunaTraits< osg::KdTree::LineSegmentIntersection >::_bind_dtor(osg::KdTree::LineSegmentIntersection* obj) {
	delete obj;
}

const char LunaTraits< osg::KdTree::LineSegmentIntersection >::className[] = "KdTree_LineSegmentIntersection";
const char LunaTraits< osg::KdTree::LineSegmentIntersection >::fullName[] = "osg::KdTree::LineSegmentIntersection";
const char LunaTraits< osg::KdTree::LineSegmentIntersection >::moduleName[] = "osg";
const char* LunaTraits< osg::KdTree::LineSegmentIntersection >::parents[] = {0};
const int LunaTraits< osg::KdTree::LineSegmentIntersection >::hash = 2943627;
const int LunaTraits< osg::KdTree::LineSegmentIntersection >::uniqueIDs[] = {2943627,0};

luna_RegType LunaTraits< osg::KdTree::LineSegmentIntersection >::methods[] = {
	{"getRatio", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_getRatio},
	{"getIntersectionPoint", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_getIntersectionPoint},
	{"getIntersectionNormal", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_getIntersectionNormal},
	{"getP0", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_getP0},
	{"getP1", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_getP1},
	{"getP2", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_getP2},
	{"getR0", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_getR0},
	{"getR1", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_getR1},
	{"getR2", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_getR2},
	{"getPrimitiveIndex", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_getPrimitiveIndex},
	{"setRatio", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_setRatio},
	{"setIntersectionPoint", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_setIntersectionPoint},
	{"setIntersectionNormal", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_setIntersectionNormal},
	{"setP0", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_setP0},
	{"setP1", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_setP1},
	{"setP2", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_setP2},
	{"setR0", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_setR0},
	{"setR1", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_setR1},
	{"setR2", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_setR2},
	{"setPrimitiveIndex", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_setPrimitiveIndex},
	{"__lt", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind___lt},
	{"dynCast", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_dynCast},
	{"__eq", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind___eq},
	{"fromVoid", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osg_KdTree_LineSegmentIntersection::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osg::KdTree::LineSegmentIntersection >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osg::KdTree::LineSegmentIntersection >::enumValues[] = {
	{0,0}
};


