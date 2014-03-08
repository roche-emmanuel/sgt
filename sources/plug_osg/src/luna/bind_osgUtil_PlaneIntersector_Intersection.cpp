#include <plug_common.h>

class luna_wrapper_osgUtil_PlaneIntersector_Intersection {
public:
	typedef Luna< osgUtil::PlaneIntersector::Intersection > luna_t;

	inline static bool _lg_typecheck___eq(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,761678) ) return false;
		return true;
	}
	
	static int _bind___eq(lua_State *L) {
		if (!_lg_typecheck___eq(L)) {
			luaL_error(L, "luna typecheck failed in __eq function, expected prototype:\n__eq(osgUtil::PlaneIntersector::Intersection*). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::PlaneIntersector::Intersection* rhs =(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,2));
		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
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

		osgUtil::PlaneIntersector::Intersection* self= (osgUtil::PlaneIntersector::Intersection*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::PlaneIntersector::Intersection >::push(L,self,false);
		return 1;
	}
	
	inline static bool _lg_typecheck_asVoid(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( !Luna<void>::has_uniqueid(L,1,761678) ) return false;
		return true;
	}
	
	static int _bind_asVoid(lua_State *L) {
		if (!_lg_typecheck_asVoid(L)) {
			luaL_error(L, "luna typecheck failed in fromVoid function, expected prototype:\nasVoid(). Got arguments:\n%s",luna_dumpStack(L).c_str());
		}

		void* self= (void*)(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
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

		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call dynCast(...)");
		}
		
		static LunaConverterMap& converters = luna_getConverterMap("osgUtil::PlaneIntersector::Intersection");
		
		return luna_dynamicCast(L,converters,"osgUtil::PlaneIntersector::Intersection",name);
	}


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=0 ) return false;

		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_getNodePath(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPolyline(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getAttributes(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setNodePath(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,52841328) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,24622227) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setDrawable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,91334477) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setPolyline(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,30218166) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_setAttributes(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,4564820) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 1 valid operators)
	inline static bool _lg_typecheck___lt(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,761678) ) return false;
		return true;
	}


	// Constructor binds:
	// osgUtil::PlaneIntersector::Intersection::Intersection()
	static osgUtil::PlaneIntersector::Intersection* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PlaneIntersector::Intersection::Intersection() function, expected prototype:\nosgUtil::PlaneIntersector::Intersection::Intersection()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::PlaneIntersector::Intersection();
	}


	// Function binds:
	// osg::NodePath osgUtil::PlaneIntersector::Intersection::nodePath()
	static int _bind_getNodePath(lua_State *L) {
		if (!_lg_typecheck_getNodePath(L)) {
			luaL_error(L, "luna typecheck failed in osg::NodePath osgUtil::PlaneIntersector::Intersection::nodePath() function, expected prototype:\nosg::NodePath osgUtil::PlaneIntersector::Intersection::nodePath()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::NodePath osgUtil::PlaneIntersector::Intersection::nodePath(). Got : '%s'\n%s",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::NodePath* lret = &self->nodePath;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::NodePath >::push(L,lret,false);

		return 1;
	}

	// osg::ref_ptr< osg::RefMatrixd > osgUtil::PlaneIntersector::Intersection::matrix()
	static int _bind_getMatrix(lua_State *L) {
		if (!_lg_typecheck_getMatrix(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::RefMatrixd > osgUtil::PlaneIntersector::Intersection::matrix() function, expected prototype:\nosg::ref_ptr< osg::RefMatrixd > osgUtil::PlaneIntersector::Intersection::matrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::RefMatrixd > osgUtil::PlaneIntersector::Intersection::matrix(). Got : '%s'\n%s",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::RefMatrixd > lret = self->matrix;
		Luna< osg::RefMatrixd >::push(L,lret.get(),false);

		return 1;
	}

	// osg::ref_ptr< osg::Drawable > osgUtil::PlaneIntersector::Intersection::drawable()
	static int _bind_getDrawable(lua_State *L) {
		if (!_lg_typecheck_getDrawable(L)) {
			luaL_error(L, "luna typecheck failed in osg::ref_ptr< osg::Drawable > osgUtil::PlaneIntersector::Intersection::drawable() function, expected prototype:\nosg::ref_ptr< osg::Drawable > osgUtil::PlaneIntersector::Intersection::drawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::ref_ptr< osg::Drawable > osgUtil::PlaneIntersector::Intersection::drawable(). Got : '%s'\n%s",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::ref_ptr< osg::Drawable > lret = self->drawable;
		Luna< osg::Drawable >::push(L,lret.get(),false);

		return 1;
	}

	// osgUtil::PlaneIntersector::Intersection::Polyline osgUtil::PlaneIntersector::Intersection::polyline()
	static int _bind_getPolyline(lua_State *L) {
		if (!_lg_typecheck_getPolyline(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PlaneIntersector::Intersection::Polyline osgUtil::PlaneIntersector::Intersection::polyline() function, expected prototype:\nosgUtil::PlaneIntersector::Intersection::Polyline osgUtil::PlaneIntersector::Intersection::polyline()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::PlaneIntersector::Intersection::Polyline osgUtil::PlaneIntersector::Intersection::polyline(). Got : '%s'\n%s",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::PlaneIntersector::Intersection::Polyline* lret = &self->polyline;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::PlaneIntersector::Intersection::Polyline >::push(L,lret,false);

		return 1;
	}

	// osgUtil::PlaneIntersector::Intersection::Attributes osgUtil::PlaneIntersector::Intersection::attributes()
	static int _bind_getAttributes(lua_State *L) {
		if (!_lg_typecheck_getAttributes(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PlaneIntersector::Intersection::Attributes osgUtil::PlaneIntersector::Intersection::attributes() function, expected prototype:\nosgUtil::PlaneIntersector::Intersection::Attributes osgUtil::PlaneIntersector::Intersection::attributes()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::PlaneIntersector::Intersection::Attributes osgUtil::PlaneIntersector::Intersection::attributes(). Got : '%s'\n%s",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::PlaneIntersector::Intersection::Attributes* lret = &self->attributes;
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::PlaneIntersector::Intersection::Attributes >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::PlaneIntersector::Intersection::nodePath(osg::NodePath value)
	static int _bind_setNodePath(lua_State *L) {
		if (!_lg_typecheck_setNodePath(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::Intersection::nodePath(osg::NodePath value) function, expected prototype:\nvoid osgUtil::PlaneIntersector::Intersection::nodePath(osg::NodePath value)\nClass arguments details:\narg 1 ID = 52841328\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::NodePath* value_ptr=(Luna< osg::NodePath >::check(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::PlaneIntersector::Intersection::nodePath function");
		}
		osg::NodePath value=*value_ptr;

		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::Intersection::nodePath(osg::NodePath). Got : '%s'\n%s",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->nodePath = value;

		return 0;
	}

	// void osgUtil::PlaneIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd > value)
	static int _bind_setMatrix(lua_State *L) {
		if (!_lg_typecheck_setMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd > value) function, expected prototype:\nvoid osgUtil::PlaneIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::RefMatrixd > value = dynamic_cast< osg::RefMatrixd* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::Intersection::matrix(osg::ref_ptr< osg::RefMatrixd >). Got : '%s'\n%s",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->matrix = value;

		return 0;
	}

	// void osgUtil::PlaneIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable > value)
	static int _bind_setDrawable(lua_State *L) {
		if (!_lg_typecheck_setDrawable(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable > value) function, expected prototype:\nvoid osgUtil::PlaneIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable > value)\nClass arguments details:\narg 1 ID = [unknown]\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::ref_ptr< osg::Drawable > value = dynamic_cast< osg::Drawable* >(Luna< osg::Referenced >::check(L,2));

		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::Intersection::drawable(osg::ref_ptr< osg::Drawable >). Got : '%s'\n%s",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->drawable = value;

		return 0;
	}

	// void osgUtil::PlaneIntersector::Intersection::polyline(osgUtil::PlaneIntersector::Intersection::Polyline value)
	static int _bind_setPolyline(lua_State *L) {
		if (!_lg_typecheck_setPolyline(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::Intersection::polyline(osgUtil::PlaneIntersector::Intersection::Polyline value) function, expected prototype:\nvoid osgUtil::PlaneIntersector::Intersection::polyline(osgUtil::PlaneIntersector::Intersection::Polyline value)\nClass arguments details:\narg 1 ID = 1808182\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::PlaneIntersector::Intersection::Polyline* value_ptr=(Luna< std::vector< osg::Vec3d > >::checkSubType< osgUtil::PlaneIntersector::Intersection::Polyline >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::PlaneIntersector::Intersection::polyline function");
		}
		osgUtil::PlaneIntersector::Intersection::Polyline value=*value_ptr;

		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::Intersection::polyline(osgUtil::PlaneIntersector::Intersection::Polyline). Got : '%s'\n%s",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->polyline = value;

		return 0;
	}

	// void osgUtil::PlaneIntersector::Intersection::attributes(osgUtil::PlaneIntersector::Intersection::Attributes value)
	static int _bind_setAttributes(lua_State *L) {
		if (!_lg_typecheck_setAttributes(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PlaneIntersector::Intersection::attributes(osgUtil::PlaneIntersector::Intersection::Attributes value) function, expected prototype:\nvoid osgUtil::PlaneIntersector::Intersection::attributes(osgUtil::PlaneIntersector::Intersection::Attributes value)\nClass arguments details:\narg 1 ID = 4564820\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::PlaneIntersector::Intersection::Attributes* value_ptr=(Luna< std::vector< double > >::checkSubType< osgUtil::PlaneIntersector::Intersection::Attributes >(L,2));
		if( !value_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg value in osgUtil::PlaneIntersector::Intersection::attributes function");
		}
		osgUtil::PlaneIntersector::Intersection::Attributes value=*value_ptr;

		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PlaneIntersector::Intersection::attributes(osgUtil::PlaneIntersector::Intersection::Attributes). Got : '%s'\n%s",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->attributes = value;

		return 0;
	}


	// Operator binds:
	// bool osgUtil::PlaneIntersector::Intersection::operator<(const osgUtil::PlaneIntersector::Intersection & rhs) const
	static int _bind___lt(lua_State *L) {
		if (!_lg_typecheck___lt(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::PlaneIntersector::Intersection::operator<(const osgUtil::PlaneIntersector::Intersection & rhs) const function, expected prototype:\nbool osgUtil::PlaneIntersector::Intersection::operator<(const osgUtil::PlaneIntersector::Intersection & rhs) const\nClass arguments details:\narg 1 ID = 761678\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::PlaneIntersector::Intersection* rhs_ptr=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,2));
		if( !rhs_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg rhs in osgUtil::PlaneIntersector::Intersection::operator< function");
		}
		const osgUtil::PlaneIntersector::Intersection & rhs=*rhs_ptr;

		osgUtil::PlaneIntersector::Intersection* self=(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::PlaneIntersector::Intersection::operator<(const osgUtil::PlaneIntersector::Intersection &) const. Got : '%s'\n%s",typeid(Luna< osgUtil::PlaneIntersector::Intersection >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->operator<(rhs);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


};

osgUtil::PlaneIntersector::Intersection* LunaTraits< osgUtil::PlaneIntersector::Intersection >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_ctor(L);
}

void LunaTraits< osgUtil::PlaneIntersector::Intersection >::_bind_dtor(osgUtil::PlaneIntersector::Intersection* obj) {
	delete obj;
}

const char LunaTraits< osgUtil::PlaneIntersector::Intersection >::className[] = "PlaneIntersector_Intersection";
const char LunaTraits< osgUtil::PlaneIntersector::Intersection >::fullName[] = "osgUtil::PlaneIntersector::Intersection";
const char LunaTraits< osgUtil::PlaneIntersector::Intersection >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PlaneIntersector::Intersection >::parents[] = {0};
const int LunaTraits< osgUtil::PlaneIntersector::Intersection >::hash = 761678;
const int LunaTraits< osgUtil::PlaneIntersector::Intersection >::uniqueIDs[] = {761678,0};

luna_RegType LunaTraits< osgUtil::PlaneIntersector::Intersection >::methods[] = {
	{"getNodePath", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_getNodePath},
	{"getMatrix", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_getMatrix},
	{"getDrawable", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_getDrawable},
	{"getPolyline", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_getPolyline},
	{"getAttributes", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_getAttributes},
	{"setNodePath", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_setNodePath},
	{"setMatrix", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_setMatrix},
	{"setDrawable", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_setDrawable},
	{"setPolyline", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_setPolyline},
	{"setAttributes", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_setAttributes},
	{"__lt", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind___lt},
	{"dynCast", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_dynCast},
	{"__eq", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind___eq},
	{"fromVoid", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_PlaneIntersector_Intersection::_bind_asVoid},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PlaneIntersector::Intersection >::converters[] = {
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PlaneIntersector::Intersection >::enumValues[] = {
	{0,0}
};


