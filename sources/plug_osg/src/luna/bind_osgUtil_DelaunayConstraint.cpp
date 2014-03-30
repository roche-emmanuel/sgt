#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_DelaunayConstraint.h>

class luna_wrapper_osgUtil_DelaunayConstraint {
public:
	typedef Luna< osgUtil::DelaunayConstraint > luna_t;

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

		osgUtil::DelaunayConstraint* self= (osgUtil::DelaunayConstraint*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::DelaunayConstraint >::push(L,self,false);
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
		//osgUtil::DelaunayConstraint* ptr= dynamic_cast< osgUtil::DelaunayConstraint* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::DelaunayConstraint* ptr= luna_caster< osg::Referenced, osgUtil::DelaunayConstraint >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::DelaunayConstraint >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_addtriangle(lua_State *L) {
		if( lua_gettop(L)!=4 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		if( (lua_type(L,3)!=LUA_TNUMBER || lua_tointeger(L,3) != lua_tonumber(L,3)) ) return false;
		if( (lua_type(L,4)!=LUA_TNUMBER || lua_tointeger(L,4) != lua_tonumber(L,4)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getTriangles_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getTriangles_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getPoints(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_makeDrawable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_merge(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_removeVerticesInside(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_windingNumber(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_outside(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_handleOverlaps(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setName(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_type(L,2)!=LUA_TSTRING ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUserData(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getUserData_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeDataVariance(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_computeBound(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setUpdateCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setEventCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setCullCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setDrawCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_cloneType(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_clone(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,27134364) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_isSameKindAs(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeometry_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_asGeometry_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setUseVertexBufferObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_dirtyDisplayList(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_releaseGLObjects(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getGLObjectSizeHint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_compileGLObjects(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_drawImplementation(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,2286263) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_contains(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_outside(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::DelaunayConstraint::DelaunayConstraint()
	static osgUtil::DelaunayConstraint* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::DelaunayConstraint::DelaunayConstraint() function, expected prototype:\nosgUtil::DelaunayConstraint::DelaunayConstraint()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::DelaunayConstraint();
	}

	// osgUtil::DelaunayConstraint::DelaunayConstraint(lua_Table * data)
	static osgUtil::DelaunayConstraint* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::DelaunayConstraint::DelaunayConstraint(lua_Table * data) function, expected prototype:\nosgUtil::DelaunayConstraint::DelaunayConstraint(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_DelaunayConstraint(L,NULL);
	}

	// Overload binder for osgUtil::DelaunayConstraint::DelaunayConstraint
	static osgUtil::DelaunayConstraint* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DelaunayConstraint, cannot match any of the overloads for function DelaunayConstraint:\n  DelaunayConstraint()\n  DelaunayConstraint(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::DelaunayConstraint::addtriangle(int i1, int i2, int i3)
	static int _bind_addtriangle(lua_State *L) {
		if (!_lg_typecheck_addtriangle(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::addtriangle(int i1, int i2, int i3) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::addtriangle(int i1, int i2, int i3)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		int i1=(int)lua_tointeger(L,2);
		int i2=(int)lua_tointeger(L,3);
		int i3=(int)lua_tointeger(L,4);

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::addtriangle(int, int, int). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->addtriangle(i1, i2, i3);

		return 0;
	}

	// const osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles() const
	static int _bind_getTriangles_overload_1(lua_State *L) {
		if (!_lg_typecheck_getTriangles_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in const osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles() const function, expected prototype:\nconst osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::DrawElementsUInt * lret = self->getTriangles();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElementsUInt >::push(L,lret,false);

		return 1;
	}

	// osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles()
	static int _bind_getTriangles_overload_2(lua_State *L) {
		if (!_lg_typecheck_getTriangles_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles() function, expected prototype:\nosg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::DrawElementsUInt * osgUtil::DelaunayConstraint::getTriangles(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::DrawElementsUInt * lret = self->getTriangles();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElementsUInt >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::DelaunayConstraint::getTriangles
	static int _bind_getTriangles(lua_State *L) {
		if (_lg_typecheck_getTriangles_overload_1(L)) return _bind_getTriangles_overload_1(L);
		if (_lg_typecheck_getTriangles_overload_2(L)) return _bind_getTriangles_overload_2(L);

		luaL_error(L, "error in function getTriangles, cannot match any of the overloads for function getTriangles:\n  getTriangles()\n  getTriangles()\n");
		return 0;
	}

	// osg::Vec3Array * osgUtil::DelaunayConstraint::getPoints(const osg::Vec3Array * points)
	static int _bind_getPoints(lua_State *L) {
		if (!_lg_typecheck_getPoints(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3Array * osgUtil::DelaunayConstraint::getPoints(const osg::Vec3Array * points) function, expected prototype:\nosg::Vec3Array * osgUtil::DelaunayConstraint::getPoints(const osg::Vec3Array * points)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3Array* points=(Luna< osg::Referenced >::checkSubType< osg::Vec3Array >(L,2));

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3Array * osgUtil::DelaunayConstraint::getPoints(const osg::Vec3Array *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3Array * lret = self->getPoints(points);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3Array >::push(L,lret,false);

		return 1;
	}

	// osg::DrawElementsUInt * osgUtil::DelaunayConstraint::makeDrawable()
	static int _bind_makeDrawable(lua_State *L) {
		if (!_lg_typecheck_makeDrawable(L)) {
			luaL_error(L, "luna typecheck failed in osg::DrawElementsUInt * osgUtil::DelaunayConstraint::makeDrawable() function, expected prototype:\nosg::DrawElementsUInt * osgUtil::DelaunayConstraint::makeDrawable()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::DrawElementsUInt * osgUtil::DelaunayConstraint::makeDrawable(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::DrawElementsUInt * lret = self->makeDrawable();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::DrawElementsUInt >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::DelaunayConstraint::merge(osgUtil::DelaunayConstraint * dco)
	static int _bind_merge(lua_State *L) {
		if (!_lg_typecheck_merge(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::merge(osgUtil::DelaunayConstraint * dco) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::merge(osgUtil::DelaunayConstraint * dco)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::DelaunayConstraint* dco=(Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,2));

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::merge(osgUtil::DelaunayConstraint *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->merge(dco);

		return 0;
	}

	// void osgUtil::DelaunayConstraint::removeVerticesInside(const osgUtil::DelaunayConstraint * dco)
	static int _bind_removeVerticesInside(lua_State *L) {
		if (!_lg_typecheck_removeVerticesInside(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::removeVerticesInside(const osgUtil::DelaunayConstraint * dco) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::removeVerticesInside(const osgUtil::DelaunayConstraint * dco)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osgUtil::DelaunayConstraint* dco=(Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,2));

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::removeVerticesInside(const osgUtil::DelaunayConstraint *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->removeVerticesInside(dco);

		return 0;
	}

	// float osgUtil::DelaunayConstraint::windingNumber(const osg::Vec3f & testpoint) const
	static int _bind_windingNumber(lua_State *L) {
		if (!_lg_typecheck_windingNumber(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::DelaunayConstraint::windingNumber(const osg::Vec3f & testpoint) const function, expected prototype:\nfloat osgUtil::DelaunayConstraint::windingNumber(const osg::Vec3f & testpoint) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* testpoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !testpoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg testpoint in osgUtil::DelaunayConstraint::windingNumber function");
		}
		const osg::Vec3f & testpoint=*testpoint_ptr;

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::DelaunayConstraint::windingNumber(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->windingNumber(testpoint);
		lua_pushnumber(L,lret);

		return 1;
	}

	// bool osgUtil::DelaunayConstraint::contains(const osg::Vec3f & testpoint) const
	static int _bind_contains(lua_State *L) {
		if (!_lg_typecheck_contains(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::DelaunayConstraint::contains(const osg::Vec3f & testpoint) const function, expected prototype:\nbool osgUtil::DelaunayConstraint::contains(const osg::Vec3f & testpoint) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* testpoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !testpoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg testpoint in osgUtil::DelaunayConstraint::contains function");
		}
		const osg::Vec3f & testpoint=*testpoint_ptr;

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::DelaunayConstraint::contains(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->contains(testpoint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::DelaunayConstraint::outside(const osg::Vec3f & testpoint) const
	static int _bind_outside(lua_State *L) {
		if (!_lg_typecheck_outside(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::DelaunayConstraint::outside(const osg::Vec3f & testpoint) const function, expected prototype:\nbool osgUtil::DelaunayConstraint::outside(const osg::Vec3f & testpoint) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* testpoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !testpoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg testpoint in osgUtil::DelaunayConstraint::outside function");
		}
		const osg::Vec3f & testpoint=*testpoint_ptr;

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::DelaunayConstraint::outside(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->outside(testpoint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::DelaunayConstraint::handleOverlaps()
	static int _bind_handleOverlaps(lua_State *L) {
		if (!_lg_typecheck_handleOverlaps(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::handleOverlaps() function, expected prototype:\nvoid osgUtil::DelaunayConstraint::handleOverlaps()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::handleOverlaps(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->handleOverlaps();

		return 0;
	}

	// void osgUtil::DelaunayConstraint::base_setName(const std::string & name)
	static int _bind_base_setName(lua_State *L) {
		if (!_lg_typecheck_base_setName(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_setName(const std::string & name) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_setName(const std::string & name)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		std::string name(lua_tostring(L,2),lua_objlen(L,2));

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_setName(const std::string &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::setName(name);

		return 0;
	}

	// void osgUtil::DelaunayConstraint::base_setUserData(osg::Referenced * obj)
	static int _bind_base_setUserData(lua_State *L) {
		if (!_lg_typecheck_base_setUserData(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_setUserData(osg::Referenced * obj) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_setUserData(osg::Referenced * obj)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Referenced* obj=(Luna< osg::Referenced >::check(L,2));

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_setUserData(osg::Referenced *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::setUserData(obj);

		return 0;
	}

	// osg::Referenced * osgUtil::DelaunayConstraint::base_getUserData()
	static int _bind_base_getUserData_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Referenced * osgUtil::DelaunayConstraint::base_getUserData() function, expected prototype:\nosg::Referenced * osgUtil::DelaunayConstraint::base_getUserData()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Referenced * osgUtil::DelaunayConstraint::base_getUserData(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Referenced * lret = self->DelaunayConstraint::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// const osg::Referenced * osgUtil::DelaunayConstraint::base_getUserData() const
	static int _bind_base_getUserData_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_getUserData_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Referenced * osgUtil::DelaunayConstraint::base_getUserData() const function, expected prototype:\nconst osg::Referenced * osgUtil::DelaunayConstraint::base_getUserData() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Referenced * osgUtil::DelaunayConstraint::base_getUserData() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Referenced * lret = self->DelaunayConstraint::getUserData();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Referenced >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::DelaunayConstraint::base_getUserData
	static int _bind_base_getUserData(lua_State *L) {
		if (_lg_typecheck_base_getUserData_overload_1(L)) return _bind_base_getUserData_overload_1(L);
		if (_lg_typecheck_base_getUserData_overload_2(L)) return _bind_base_getUserData_overload_2(L);

		luaL_error(L, "error in function base_getUserData, cannot match any of the overloads for function base_getUserData:\n  base_getUserData()\n  base_getUserData()\n");
		return 0;
	}

	// void osgUtil::DelaunayConstraint::base_computeDataVariance()
	static int _bind_base_computeDataVariance(lua_State *L) {
		if (!_lg_typecheck_base_computeDataVariance(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_computeDataVariance() function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_computeDataVariance()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_computeDataVariance(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::computeDataVariance();

		return 0;
	}

	// osg::BoundingBoxd osgUtil::DelaunayConstraint::base_computeBound() const
	static int _bind_base_computeBound(lua_State *L) {
		if (!_lg_typecheck_base_computeBound(L)) {
			luaL_error(L, "luna typecheck failed in osg::BoundingBoxd osgUtil::DelaunayConstraint::base_computeBound() const function, expected prototype:\nosg::BoundingBoxd osgUtil::DelaunayConstraint::base_computeBound() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::BoundingBoxd osgUtil::DelaunayConstraint::base_computeBound() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::BoundingBoxd stack_lret = self->DelaunayConstraint::computeBound();
		osg::BoundingBoxd* lret = new osg::BoundingBoxd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::BoundingBoxd >::push(L,lret,true);

		return 1;
	}

	// void osgUtil::DelaunayConstraint::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgUtil::DelaunayConstraint::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)
	static int _bind_base_setUpdateCallback(lua_State *L) {
		if (!_lg_typecheck_base_setUpdateCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_setUpdateCallback(osg::Drawable::UpdateCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::UpdateCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::UpdateCallback >(L,2));

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_setUpdateCallback(osg::Drawable::UpdateCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::setUpdateCallback(ac);

		return 0;
	}

	// void osgUtil::DelaunayConstraint::base_setEventCallback(osg::Drawable::EventCallback * ac)
	static int _bind_base_setEventCallback(lua_State *L) {
		if (!_lg_typecheck_base_setEventCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_setEventCallback(osg::Drawable::EventCallback * ac) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_setEventCallback(osg::Drawable::EventCallback * ac)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::EventCallback* ac=(Luna< osg::Referenced >::checkSubType< osg::Drawable::EventCallback >(L,2));

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_setEventCallback(osg::Drawable::EventCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::setEventCallback(ac);

		return 0;
	}

	// void osgUtil::DelaunayConstraint::base_setCullCallback(osg::Drawable::CullCallback * cc)
	static int _bind_base_setCullCallback(lua_State *L) {
		if (!_lg_typecheck_base_setCullCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_setCullCallback(osg::Drawable::CullCallback * cc) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_setCullCallback(osg::Drawable::CullCallback * cc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::CullCallback* cc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::CullCallback >(L,2));

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_setCullCallback(osg::Drawable::CullCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::setCullCallback(cc);

		return 0;
	}

	// void osgUtil::DelaunayConstraint::base_setDrawCallback(osg::Drawable::DrawCallback * dc)
	static int _bind_base_setDrawCallback(lua_State *L) {
		if (!_lg_typecheck_base_setDrawCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_setDrawCallback(osg::Drawable::DrawCallback * dc) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_setDrawCallback(osg::Drawable::DrawCallback * dc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Drawable::DrawCallback* dc=(Luna< osg::Referenced >::checkSubType< osg::Drawable::DrawCallback >(L,2));

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_setDrawCallback(osg::Drawable::DrawCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::setDrawCallback(dc);

		return 0;
	}

	// osg::Object * osgUtil::DelaunayConstraint::base_cloneType() const
	static int _bind_base_cloneType(lua_State *L) {
		if (!_lg_typecheck_base_cloneType(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::DelaunayConstraint::base_cloneType() const function, expected prototype:\nosg::Object * osgUtil::DelaunayConstraint::base_cloneType() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::DelaunayConstraint::base_cloneType() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DelaunayConstraint::cloneType();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// osg::Object * osgUtil::DelaunayConstraint::base_clone(const osg::CopyOp & arg1) const
	static int _bind_base_clone(lua_State *L) {
		if (!_lg_typecheck_base_clone(L)) {
			luaL_error(L, "luna typecheck failed in osg::Object * osgUtil::DelaunayConstraint::base_clone(const osg::CopyOp & arg1) const function, expected prototype:\nosg::Object * osgUtil::DelaunayConstraint::base_clone(const osg::CopyOp & arg1) const\nClass arguments details:\narg 1 ID = 27134364\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::CopyOp* _arg1_ptr=(Luna< osg::CopyOp >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::DelaunayConstraint::base_clone function");
		}
		const osg::CopyOp & _arg1=*_arg1_ptr;

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Object * osgUtil::DelaunayConstraint::base_clone(const osg::CopyOp &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Object * lret = self->DelaunayConstraint::clone(_arg1);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Object >::push(L,lret,false);

		return 1;
	}

	// bool osgUtil::DelaunayConstraint::base_isSameKindAs(const osg::Object * obj) const
	static int _bind_base_isSameKindAs(lua_State *L) {
		if (!_lg_typecheck_base_isSameKindAs(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::DelaunayConstraint::base_isSameKindAs(const osg::Object * obj) const function, expected prototype:\nbool osgUtil::DelaunayConstraint::base_isSameKindAs(const osg::Object * obj) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Object* obj=(Luna< osg::Referenced >::checkSubType< osg::Object >(L,2));

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::DelaunayConstraint::base_isSameKindAs(const osg::Object *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DelaunayConstraint::isSameKindAs(obj);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// const char * osgUtil::DelaunayConstraint::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DelaunayConstraint::base_libraryName() const function, expected prototype:\nconst char * osgUtil::DelaunayConstraint::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::DelaunayConstraint::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DelaunayConstraint::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::DelaunayConstraint::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DelaunayConstraint::base_className() const function, expected prototype:\nconst char * osgUtil::DelaunayConstraint::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::DelaunayConstraint::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DelaunayConstraint::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Geometry * osgUtil::DelaunayConstraint::base_asGeometry()
	static int _bind_base_asGeometry_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::Geometry * osgUtil::DelaunayConstraint::base_asGeometry() function, expected prototype:\nosg::Geometry * osgUtil::DelaunayConstraint::base_asGeometry()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Geometry * osgUtil::DelaunayConstraint::base_asGeometry(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Geometry * lret = self->DelaunayConstraint::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// const osg::Geometry * osgUtil::DelaunayConstraint::base_asGeometry() const
	static int _bind_base_asGeometry_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_asGeometry_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Geometry * osgUtil::DelaunayConstraint::base_asGeometry() const function, expected prototype:\nconst osg::Geometry * osgUtil::DelaunayConstraint::base_asGeometry() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Geometry * osgUtil::DelaunayConstraint::base_asGeometry() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Geometry * lret = self->DelaunayConstraint::asGeometry();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Geometry >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::DelaunayConstraint::base_asGeometry
	static int _bind_base_asGeometry(lua_State *L) {
		if (_lg_typecheck_base_asGeometry_overload_1(L)) return _bind_base_asGeometry_overload_1(L);
		if (_lg_typecheck_base_asGeometry_overload_2(L)) return _bind_base_asGeometry_overload_2(L);

		luaL_error(L, "error in function base_asGeometry, cannot match any of the overloads for function base_asGeometry:\n  base_asGeometry()\n  base_asGeometry()\n");
		return 0;
	}

	// void osgUtil::DelaunayConstraint::base_setUseVertexBufferObjects(bool flag)
	static int _bind_base_setUseVertexBufferObjects(lua_State *L) {
		if (!_lg_typecheck_base_setUseVertexBufferObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_setUseVertexBufferObjects(bool flag) function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_setUseVertexBufferObjects(bool flag)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool flag=(bool)(lua_toboolean(L,2)==1);

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_setUseVertexBufferObjects(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::setUseVertexBufferObjects(flag);

		return 0;
	}

	// void osgUtil::DelaunayConstraint::base_dirtyDisplayList()
	static int _bind_base_dirtyDisplayList(lua_State *L) {
		if (!_lg_typecheck_base_dirtyDisplayList(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_dirtyDisplayList() function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_dirtyDisplayList()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_dirtyDisplayList(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::dirtyDisplayList();

		return 0;
	}

	// void osgUtil::DelaunayConstraint::base_releaseGLObjects(osg::State * state = 0) const
	static int _bind_base_releaseGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_releaseGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_releaseGLObjects(osg::State * state = 0) const function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_releaseGLObjects(osg::State * state = 0) const\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osg::State* state=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osg::State >(L,2)) : (osg::State*)0;

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_releaseGLObjects(osg::State *) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::releaseGLObjects(state);

		return 0;
	}

	// unsigned int osgUtil::DelaunayConstraint::base_getGLObjectSizeHint() const
	static int _bind_base_getGLObjectSizeHint(lua_State *L) {
		if (!_lg_typecheck_base_getGLObjectSizeHint(L)) {
			luaL_error(L, "luna typecheck failed in unsigned int osgUtil::DelaunayConstraint::base_getGLObjectSizeHint() const function, expected prototype:\nunsigned int osgUtil::DelaunayConstraint::base_getGLObjectSizeHint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call unsigned int osgUtil::DelaunayConstraint::base_getGLObjectSizeHint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		unsigned int lret = self->DelaunayConstraint::getGLObjectSizeHint();
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::DelaunayConstraint::base_compileGLObjects(osg::RenderInfo & renderInfo) const
	static int _bind_base_compileGLObjects(lua_State *L) {
		if (!_lg_typecheck_base_compileGLObjects(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_compileGLObjects(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_compileGLObjects(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::DelaunayConstraint::base_compileGLObjects function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_compileGLObjects(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::compileGLObjects(renderInfo);

		return 0;
	}

	// void osgUtil::DelaunayConstraint::base_drawImplementation(osg::RenderInfo & renderInfo) const
	static int _bind_base_drawImplementation(lua_State *L) {
		if (!_lg_typecheck_base_drawImplementation(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DelaunayConstraint::base_drawImplementation(osg::RenderInfo & renderInfo) const function, expected prototype:\nvoid osgUtil::DelaunayConstraint::base_drawImplementation(osg::RenderInfo & renderInfo) const\nClass arguments details:\narg 1 ID = 2286263\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RenderInfo* renderInfo_ptr=(Luna< osg::RenderInfo >::check(L,2));
		if( !renderInfo_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg renderInfo in osgUtil::DelaunayConstraint::base_drawImplementation function");
		}
		osg::RenderInfo & renderInfo=*renderInfo_ptr;

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DelaunayConstraint::base_drawImplementation(osg::RenderInfo &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DelaunayConstraint::drawImplementation(renderInfo);

		return 0;
	}

	// bool osgUtil::DelaunayConstraint::base_contains(const osg::Vec3f & testpoint) const
	static int _bind_base_contains(lua_State *L) {
		if (!_lg_typecheck_base_contains(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::DelaunayConstraint::base_contains(const osg::Vec3f & testpoint) const function, expected prototype:\nbool osgUtil::DelaunayConstraint::base_contains(const osg::Vec3f & testpoint) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* testpoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !testpoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg testpoint in osgUtil::DelaunayConstraint::base_contains function");
		}
		const osg::Vec3f & testpoint=*testpoint_ptr;

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::DelaunayConstraint::base_contains(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DelaunayConstraint::contains(testpoint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// bool osgUtil::DelaunayConstraint::base_outside(const osg::Vec3f & testpoint) const
	static int _bind_base_outside(lua_State *L) {
		if (!_lg_typecheck_base_outside(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::DelaunayConstraint::base_outside(const osg::Vec3f & testpoint) const function, expected prototype:\nbool osgUtil::DelaunayConstraint::base_outside(const osg::Vec3f & testpoint) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* testpoint_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !testpoint_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg testpoint in osgUtil::DelaunayConstraint::base_outside function");
		}
		const osg::Vec3f & testpoint=*testpoint_ptr;

		osgUtil::DelaunayConstraint* self=Luna< osg::Referenced >::checkSubType< osgUtil::DelaunayConstraint >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::DelaunayConstraint::base_outside(const osg::Vec3f &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->DelaunayConstraint::outside(testpoint);
		lua_pushboolean(L,lret?1:0);

		return 1;
	}


	// Operator binds:

};

osgUtil::DelaunayConstraint* LunaTraits< osgUtil::DelaunayConstraint >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_DelaunayConstraint::_bind_ctor(L);
}

void LunaTraits< osgUtil::DelaunayConstraint >::_bind_dtor(osgUtil::DelaunayConstraint* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::DelaunayConstraint >::className[] = "DelaunayConstraint";
const char LunaTraits< osgUtil::DelaunayConstraint >::fullName[] = "osgUtil::DelaunayConstraint";
const char LunaTraits< osgUtil::DelaunayConstraint >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::DelaunayConstraint >::parents[] = {"osg.Geometry", 0};
const int LunaTraits< osgUtil::DelaunayConstraint >::hash = 48712683;
const int LunaTraits< osgUtil::DelaunayConstraint >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::DelaunayConstraint >::methods[] = {
	{"addtriangle", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_addtriangle},
	{"getTriangles", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_getTriangles},
	{"getPoints", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_getPoints},
	{"makeDrawable", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_makeDrawable},
	{"merge", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_merge},
	{"removeVerticesInside", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_removeVerticesInside},
	{"windingNumber", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_windingNumber},
	{"contains", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_contains},
	{"outside", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_outside},
	{"handleOverlaps", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_handleOverlaps},
	{"base_setName", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_setName},
	{"base_setUserData", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_setUserData},
	{"base_getUserData", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_getUserData},
	{"base_computeDataVariance", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_computeDataVariance},
	{"base_computeBound", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_computeBound},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_setThreadSafeRefUnref},
	{"base_setUpdateCallback", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_setUpdateCallback},
	{"base_setEventCallback", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_setEventCallback},
	{"base_setCullCallback", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_setCullCallback},
	{"base_setDrawCallback", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_setDrawCallback},
	{"base_cloneType", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_cloneType},
	{"base_clone", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_clone},
	{"base_isSameKindAs", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_isSameKindAs},
	{"base_libraryName", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_className},
	{"base_asGeometry", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_asGeometry},
	{"base_setUseVertexBufferObjects", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_setUseVertexBufferObjects},
	{"base_dirtyDisplayList", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_dirtyDisplayList},
	{"base_releaseGLObjects", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_releaseGLObjects},
	{"base_getGLObjectSizeHint", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_getGLObjectSizeHint},
	{"base_compileGLObjects", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_compileGLObjects},
	{"base_drawImplementation", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_drawImplementation},
	{"base_contains", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_contains},
	{"base_outside", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_base_outside},
	{"fromVoid", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_DelaunayConstraint::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::DelaunayConstraint >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_DelaunayConstraint::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::DelaunayConstraint >::enumValues[] = {
	{0,0}
};


