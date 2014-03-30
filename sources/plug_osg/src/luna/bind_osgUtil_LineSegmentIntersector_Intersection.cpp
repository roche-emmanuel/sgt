#include <plug_common.h>

class luna_wrapper_osgUtil_LineSegmentIntersector_Intersection {
public:
	typedef Luna< osgUtil::LineSegmentIntersector::Intersection > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74825011) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::LineSegmentIntersector::Intersection*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::LineSegmentIntersector::Intersection* rhs =(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,2));
		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
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

		osgUtil::LineSegmentIntersector::Intersection* self= (osgUtil::LineSegmentIntersector::Intersection*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::LineSegmentIntersector::Intersection >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,74825011) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
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

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::LineSegmentIntersector::Intersection");
		
		return luna_dynamicCast(L,converters,"osgUtil::LineSegmentIntersector::Intersection",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getLocalIntersectPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldIntersectPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalIntersectNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWorldIntersectNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRatio(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getNodePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalIntersectionPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getLocalIntersectionNormal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIndexList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getRatioList(lua_State *L) {
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

	inline static bool _lg_typecheck_setNodePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91334477) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24622227) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalIntersectionPoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303202) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setLocalIntersectionNormal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setIndexList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27834872) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setRatioList(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4564820) ) return false;
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

		if( !Luna<void>::has_uniqueid(L,2,74825011) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::LineSegmentIntersector::Intersection::Intersection()
	static osgUtil::LineSegmentIntersector::Intersection* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::LineSegmentIntersector::Intersection::Intersection() function, expected prototype:\nosgUtil::LineSegmentIntersector::Intersection::Intersection()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::LineSegmentIntersector::Intersection();
	}


	// Function binds:
	// const osg::Vec3d & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectPoint() const
	static int _bind_getLocalIntersectPoint(lua_State *L) {
		if (!_lg_typecheck_getLocalIntersectPoint(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3d & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectPoint() const function, expected prototype:\nconst osg::Vec3d & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3d & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectPoint() const. Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->getLocalIntersectPoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3d osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectPoint() const
	static int _bind_getWorldIntersectPoint(lua_State *L) {
		if (!_lg_typecheck_getWorldIntersectPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectPoint() const function, expected prototype:\nosg::Vec3d osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectPoint() const. Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3d stack_lret = self->getWorldIntersectPoint();
		osg::Vec3d* lret = new osg::Vec3d(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,true);

		return 1;
	}

	// const osg::Vec3f & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectNormal() const
	static int _bind_getLocalIntersectNormal(lua_State *L) {
		if (!_lg_typecheck_getLocalIntersectNormal(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectNormal() const function, expected prototype:\nconst osg::Vec3f & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgUtil::LineSegmentIntersector::Intersection::getLocalIntersectNormal() const. Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getLocalIntersectNormal();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectNormal() const
	static int _bind_getWorldIntersectNormal(lua_State *L) {
		if (!_lg_typecheck_getWorldIntersectNormal(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectNormal() const function, expected prototype:\nosg::Vec3f osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectNormal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::LineSegmentIntersector::Intersection::getWorldIntersectNormal() const. Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->getWorldIntersectNormal();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// double osgUtil::LineSegmentIntersector::Intersection::ratio()
	static int _bind_getRatio(lua_State *L) {
		if (!_lg_typecheck_getRatio(L)) {
			luaL_error(L, "luna typecheck failed in double osgUtil::LineSegmentIntersector::Intersection::ratio() function, expected prototype:\ndouble osgUtil::LineSegmentIntersector::Intersection::ratio()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call double osgUtil::LineSegmentIntersector::Intersection::ratio(). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		double lret = self->ratio;
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::NodePath osgUtil::LineSegmentIntersector::Intersection::nodePath()
	static int _bind_getNodePath(lua_State *L) {
		if (!_lg_typecheck_getNodePath(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodePath osgUtil::LineSegmentIntersector::Intersection::nodePath() function, expected prototype:\nosg::NodePath osgUtil::LineSegmentIntersector::Intersection::nodePath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodePath osgUtil::LineSegmentIntersector::Intersection::nodePath(). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodePath* lret = &self->nodePath;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osg::Drawable > osgUtil::LineSegmentIntersector::Intersection::drawable()
	static int _bind_getDrawable(lua_State *L) {
		if (!_lg_typecheck_getDrawable(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Drawable > osgUtil::LineSegmentIntersector::Intersection::drawable() function, expected prototype:\nosg::ref_ptr< osg::Drawable > osgUtil::LineSegmentIntersector::Intersection::drawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Drawable > osgUtil::LineSegmentIntersector::Intersection::drawable(). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Drawable > lret = self->drawable;
		Luna< osg::Drawable >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::RefMatrixd > osgUtil::LineSegmentIntersector::Intersection::matrix()
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::RefMatrixd > osgUtil::LineSegmentIntersector::Intersection::matrix() function, expected prototype:\nosg::ref_ptr< osg::RefMatrixd > osgUtil::LineSegmentIntersector::Intersection::matrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::RefMatrixd > osgUtil::LineSegmentIntersector::Intersection::matrix(). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::RefMatrixd > lret = self->matrix;
		Luna< osg::RefMatrixd >::push(L,lret.get(),false);

		return 1;
	}

	// osg::Vec3d osgUtil::LineSegmentIntersector::Intersection::localIntersectionPoint()
	static int _bind_getLocalIntersectionPoint(lua_State *L) {
		if (!_lg_typecheck_getLocalIntersectionPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3d osgUtil::LineSegmentIntersector::Intersection::localIntersectionPoint() function, expected prototype:\nosg::Vec3d osgUtil::LineSegmentIntersector::Intersection::localIntersectionPoint()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3d osgUtil::LineSegmentIntersector::Intersection::localIntersectionPoint(). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3d* lret = &self->localIntersectionPoint;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3d >::push(L,lret,false);

		return 1;
	}

	// osg::Vec3f osgUtil::LineSegmentIntersector::Intersection::localIntersectionNormal()
	static int _bind_getLocalIntersectionNormal(lua_State *L) {
		if (!_lg_typecheck_getLocalIntersectionNormal(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::LineSegmentIntersector::Intersection::localIntersectionNormal() function, expected prototype:\nosg::Vec3f osgUtil::LineSegmentIntersector::Intersection::localIntersectionNormal()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::LineSegmentIntersector::Intersection::localIntersectionNormal(). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->localIntersectionNormal;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// osgUtil::LineSegmentIntersector::Intersection::IndexList osgUtil::LineSegmentIntersector::Intersection::indexList()
	static int _bind_getIndexList(lua_State *L) {
		if (!_lg_typecheck_getIndexList(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::LineSegmentIntersector::Intersection::IndexList osgUtil::LineSegmentIntersector::Intersection::indexList() function, expected prototype:\nosgUtil::LineSegmentIntersector::Intersection::IndexList osgUtil::LineSegmentIntersector::Intersection::indexList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::LineSegmentIntersector::Intersection::IndexList osgUtil::LineSegmentIntersector::Intersection::indexList(). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::LineSegmentIntersector::Intersection::IndexList* lret = &self->indexList;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::LineSegmentIntersector::Intersection::IndexList >::push(L,lret,false);

		return 1;
	}

	// osgUtil::LineSegmentIntersector::Intersection::RatioList osgUtil::LineSegmentIntersector::Intersection::ratioList()
	static int _bind_getRatioList(lua_State *L) {
		if (!_lg_typecheck_getRatioList(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::LineSegmentIntersector::Intersection::RatioList osgUtil::LineSegmentIntersector::Intersection::ratioList() function, expected prototype:\nosgUtil::LineSegmentIntersector::Intersection::RatioList osgUtil::LineSegmentIntersector::Intersection::ratioList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::LineSegmentIntersector::Intersection::RatioList osgUtil::LineSegmentIntersector::Intersection::ratioList(). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::LineSegmentIntersector::Intersection::RatioList* lret = &self->ratioList;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::LineSegmentIntersector::Intersection::RatioList >::push(L,lret,false);

		return 1;
	}

	// unsigned int osgUtil::LineSegmentIntersector::Intersection::primitiveIndex()
	static int _bind_getPrimitiveIndex(lua_State *L) {
		if (!_lg_typecheck_getPrimitiveIndex(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::LineSegmentIntersector::Intersection::primitiveIndex() function, expected prototype:\nunsigned int osgUtil::LineSegmentIntersector::Intersection::primitiveIndex()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::LineSegmentIntersector::Intersection::primitiveIndex(). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->primitiveIndex;
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::LineSegmentIntersector::Intersection::ratio(double value)
	static int _bind_setRatio(lua_State *L) {
		if (!_lg_typecheck_setRatio(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::Intersection::ratio(double value) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::Intersection::ratio(double value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		double value=(double)lua_tonumber(L,2);

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::Intersection::ratio(double). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ratio = value;

		return 0;
	}

	// void osgUtil::LineSegmentIntersector::Intersection::nodePath(osg::NodePath value)
	static int _bind_setNodePath(lua_State *L) {
		if (!_lg_typecheck_setNodePath(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::Intersection::nodePath(osg::NodePath value) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::Intersection::nodePath(osg::NodePath value)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodePath* value_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::LineSegmentIntersector::Intersection::nodePath function");
		}
		osg::NodePath value=*value_ptr;

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::Intersection::nodePath(osg::NodePath). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nodePath = value;

		return 0;
	}

	// void osgUtil::LineSegmentIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable > value)
	static int _bind_setDrawable(lua_State *L) {
		if (!_lg_typecheck_setDrawable(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable > value) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Drawable > value = dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable >). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawable = value;

		return 0;
	}

	// void osgUtil::LineSegmentIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd > value)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd > value) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::RefMatrixd > value = dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd >). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->matrix = value;

		return 0;
	}

	// void osgUtil::LineSegmentIntersector::Intersection::localIntersectionPoint(osg::Vec3d value)
	static int _bind_setLocalIntersectionPoint(lua_State *L) {
		if (!_lg_typecheck_setLocalIntersectionPoint(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::Intersection::localIntersectionPoint(osg::Vec3d value) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::Intersection::localIntersectionPoint(osg::Vec3d value)\nClass arguments details:\narg 1 ID = 92303202\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3d* value_ptr=(Luna< osg::Vec3d >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::LineSegmentIntersector::Intersection::localIntersectionPoint function");
		}
		osg::Vec3d value=*value_ptr;

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::Intersection::localIntersectionPoint(osg::Vec3d). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localIntersectionPoint = value;

		return 0;
	}

	// void osgUtil::LineSegmentIntersector::Intersection::localIntersectionNormal(osg::Vec3f value)
	static int _bind_setLocalIntersectionNormal(lua_State *L) {
		if (!_lg_typecheck_setLocalIntersectionNormal(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::Intersection::localIntersectionNormal(osg::Vec3f value) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::Intersection::localIntersectionNormal(osg::Vec3f value)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Vec3f* value_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::LineSegmentIntersector::Intersection::localIntersectionNormal function");
		}
		osg::Vec3f value=*value_ptr;

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::Intersection::localIntersectionNormal(osg::Vec3f). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->localIntersectionNormal = value;

		return 0;
	}

	// void osgUtil::LineSegmentIntersector::Intersection::indexList(osgUtil::LineSegmentIntersector::Intersection::IndexList value)
	static int _bind_setIndexList(lua_State *L) {
		if (!_lg_typecheck_setIndexList(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::Intersection::indexList(osgUtil::LineSegmentIntersector::Intersection::IndexList value) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::Intersection::indexList(osgUtil::LineSegmentIntersector::Intersection::IndexList value)\nClass arguments details:\narg 1 ID = 24112391\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::LineSegmentIntersector::Intersection::IndexList* value_ptr=(Luna< std::vector< unsigned int > >::checkSubType< osgUtil::LineSegmentIntersector::Intersection::IndexList >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::LineSegmentIntersector::Intersection::indexList function");
		}
		osgUtil::LineSegmentIntersector::Intersection::IndexList value=*value_ptr;

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::Intersection::indexList(osgUtil::LineSegmentIntersector::Intersection::IndexList). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->indexList = value;

		return 0;
	}

	// void osgUtil::LineSegmentIntersector::Intersection::ratioList(osgUtil::LineSegmentIntersector::Intersection::RatioList value)
	static int _bind_setRatioList(lua_State *L) {
		if (!_lg_typecheck_setRatioList(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::Intersection::ratioList(osgUtil::LineSegmentIntersector::Intersection::RatioList value) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::Intersection::ratioList(osgUtil::LineSegmentIntersector::Intersection::RatioList value)\nClass arguments details:\narg 1 ID = 4564820\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::LineSegmentIntersector::Intersection::RatioList* value_ptr=(Luna< std::vector< double > >::checkSubType< osgUtil::LineSegmentIntersector::Intersection::RatioList >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::LineSegmentIntersector::Intersection::ratioList function");
		}
		osgUtil::LineSegmentIntersector::Intersection::RatioList value=*value_ptr;

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::Intersection::ratioList(osgUtil::LineSegmentIntersector::Intersection::RatioList). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ratioList = value;

		return 0;
	}

	// void osgUtil::LineSegmentIntersector::Intersection::primitiveIndex(unsigned int value)
	static int _bind_setPrimitiveIndex(lua_State *L) {
		if (!_lg_typecheck_setPrimitiveIndex(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::LineSegmentIntersector::Intersection::primitiveIndex(unsigned int value) function, expected prototype:\nvoid osgUtil::LineSegmentIntersector::Intersection::primitiveIndex(unsigned int value)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		unsigned int value=(unsigned int)lua_tointeger(L,2);

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::LineSegmentIntersector::Intersection::primitiveIndex(unsigned int). Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->primitiveIndex = value;

		return 0;
	}


	// Operator binds:
	// bool osgUtil::LineSegmentIntersector::Intersection::operator<(const osgUtil::LineSegmentIntersector::Intersection & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::LineSegmentIntersector::Intersection::operator<(const osgUtil::LineSegmentIntersector::Intersection & rhs) const function, expected prototype:\nbool osgUtil::LineSegmentIntersector::Intersection::operator<(const osgUtil::LineSegmentIntersector::Intersection & rhs) const\nClass arguments details:\narg 1 ID = 74825011\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::LineSegmentIntersector::Intersection* rhs_ptr=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::LineSegmentIntersector::Intersection::operator< function");
		}
		const osgUtil::LineSegmentIntersector::Intersection & rhs=*rhs_ptr;

		osgUtil::LineSegmentIntersector::Intersection* self=(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::LineSegmentIntersector::Intersection::operator<(const osgUtil::LineSegmentIntersector::Intersection &) const. Got : '%s'\n%s",typeid(Luna< osgUtil::LineSegmentIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::LineSegmentIntersector::Intersection* LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_ctor(L);
}

void LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::_bind_dtor(osgUtil::LineSegmentIntersector::Intersection* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::className[] = "LineSegmentIntersector_Intersection";
const char LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::fullName[] = "osgUtil::LineSegmentIntersector::Intersection";
const char LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::parents[] = {0};
const int LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::hash = 74825011;
const int LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::uniqueIDs[] = {74825011,0};

luna_RegType LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::methods[] = {
	{"getLocalIntersectPoint", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getLocalIntersectPoint},
	{"getWorldIntersectPoint", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getWorldIntersectPoint},
	{"getLocalIntersectNormal", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getLocalIntersectNormal},
	{"getWorldIntersectNormal", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getWorldIntersectNormal},
	{"getRatio", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getRatio},
	{"getNodePath", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getNodePath},
	{"getDrawable", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getDrawable},
	{"getMatrix", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getMatrix},
	{"getLocalIntersectionPoint", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getLocalIntersectionPoint},
	{"getLocalIntersectionNormal", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getLocalIntersectionNormal},
	{"getIndexList", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getIndexList},
	{"getRatioList", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getRatioList},
	{"getPrimitiveIndex", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_getPrimitiveIndex},
	{"setRatio", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_setRatio},
	{"setNodePath", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_setNodePath},
	{"setDrawable", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_setDrawable},
	{"setMatrix", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_setMatrix},
	{"setLocalIntersectionPoint", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_setLocalIntersectionPoint},
	{"setLocalIntersectionNormal", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_setLocalIntersectionNormal},
	{"setIndexList", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_setIndexList},
	{"setRatioList", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_setRatioList},
	{"setPrimitiveIndex", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_setPrimitiveIndex},
	{"__lt", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind___lt},
	{"dynCast", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_LineSegmentIntersector_Intersection::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::LineSegmentIntersector::Intersection >::enumValues[] = {
	{0,0}
};


