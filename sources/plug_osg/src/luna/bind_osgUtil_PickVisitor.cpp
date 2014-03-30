#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_PickVisitor.h>

class luna_wrapper_osgUtil_PickVisitor {
public:
	typedef Luna< osgUtil::PickVisitor > luna_t;

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

		osgUtil::PickVisitor* self= (osgUtil::PickVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::PickVisitor >::push(L,self,false);
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
		//osgUtil::PickVisitor* ptr= dynamic_cast< osgUtil::PickVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::PickVisitor* ptr= luna_caster< osg::Referenced, osgUtil::PickVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::PickVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		if( lua_gettop(L)!=5 ) return false;

		if( (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,1)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,2))) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		if( lua_type(L,4)!=LUA_TNUMBER ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		if( lua_gettop(L)!=6 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,2)) ) ) return false;
		if( !Luna<void>::has_uniqueid(L,3,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,3))) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,18903838) ) return false;
		if( (!(Luna< osg::Matrixd >::check(L,4))) ) return false;
		if( lua_type(L,5)!=LUA_TNUMBER ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_runNestedPickVisitor(lua_State *L) {
		if( lua_gettop(L)!=7 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( !Luna<void>::has_uniqueid(L,4,18903838) ) return false;
		if( !Luna<void>::has_uniqueid(L,5,18903838) ) return false;
		if( lua_type(L,6)!=LUA_TNUMBER ) return false;
		if( lua_type(L,7)!=LUA_TNUMBER ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceFromEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToViewPoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::PickVisitor::PickVisitor(const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my)
	static osgUtil::PickVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PickVisitor::PickVisitor(const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my) function, expected prototype:\nosgUtil::PickVisitor::PickVisitor(const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 18903838\narg 3 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Viewport* viewport=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,1));
		const osg::Matrixd* proj_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !proj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg proj in osgUtil::PickVisitor::PickVisitor function");
		}
		const osg::Matrixd & proj=*proj_ptr;
		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::PickVisitor::PickVisitor function");
		}
		const osg::Matrixd & view=*view_ptr;
		float mx=(float)lua_tonumber(L,4);
		float my=(float)lua_tonumber(L,5);

		return new osgUtil::PickVisitor(viewport, proj, view, mx, my);
	}

	// osgUtil::PickVisitor::PickVisitor(lua_Table * data, const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my)
	static osgUtil::PickVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::PickVisitor::PickVisitor(lua_Table * data, const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my) function, expected prototype:\nosgUtil::PickVisitor::PickVisitor(lua_Table * data, const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 18903838\narg 4 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Viewport* viewport=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,2));
		const osg::Matrixd* proj_ptr=(Luna< osg::Matrixd >::check(L,3));
		if( !proj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg proj in osgUtil::PickVisitor::PickVisitor function");
		}
		const osg::Matrixd & proj=*proj_ptr;
		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,4));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::PickVisitor::PickVisitor function");
		}
		const osg::Matrixd & view=*view_ptr;
		float mx=(float)lua_tonumber(L,5);
		float my=(float)lua_tonumber(L,6);

		return new wrapper_osgUtil_PickVisitor(L,NULL, viewport, proj, view, mx, my);
	}

	// Overload binder for osgUtil::PickVisitor::PickVisitor
	static osgUtil::PickVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function PickVisitor, cannot match any of the overloads for function PickVisitor:\n  PickVisitor(const osg::Viewport *, const osg::Matrixd &, const osg::Matrixd &, float, float)\n  PickVisitor(lua_Table *, const osg::Viewport *, const osg::Matrixd &, const osg::Matrixd &, float, float)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::PickVisitor::runNestedPickVisitor(osg::Node & node, const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my)
	static int _bind_runNestedPickVisitor(lua_State *L) {
		if (!_lg_typecheck_runNestedPickVisitor(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PickVisitor::runNestedPickVisitor(osg::Node & node, const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my) function, expected prototype:\nvoid osgUtil::PickVisitor::runNestedPickVisitor(osg::Node & node, const osg::Viewport * viewport, const osg::Matrixd & proj, const osg::Matrixd & view, float mx, float my)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\narg 3 ID = 18903838\narg 4 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::PickVisitor::runNestedPickVisitor function");
		}
		osg::Node & node=*node_ptr;
		const osg::Viewport* viewport=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,3));
		const osg::Matrixd* proj_ptr=(Luna< osg::Matrixd >::check(L,4));
		if( !proj_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg proj in osgUtil::PickVisitor::runNestedPickVisitor function");
		}
		const osg::Matrixd & proj=*proj_ptr;
		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,5));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::PickVisitor::runNestedPickVisitor function");
		}
		const osg::Matrixd & view=*view_ptr;
		float mx=(float)lua_tonumber(L,6);
		float my=(float)lua_tonumber(L,7);

		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PickVisitor::runNestedPickVisitor(osg::Node &, const osg::Viewport *, const osg::Matrixd &, const osg::Matrixd &, float, float). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->runNestedPickVisitor(node, viewport, proj, view, mx, my);

		return 0;
	}

	// void osgUtil::PickVisitor::apply(osg::Projection & projection)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PickVisitor::apply(osg::Projection & projection) function, expected prototype:\nvoid osgUtil::PickVisitor::apply(osg::Projection & projection)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Projection* projection_ptr=(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::PickVisitor::apply function");
		}
		osg::Projection & projection=*projection_ptr;

		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PickVisitor::apply(osg::Projection &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(projection);

		return 0;
	}

	// void osgUtil::PickVisitor::apply(osg::Camera & camera)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PickVisitor::apply(osg::Camera & camera) function, expected prototype:\nvoid osgUtil::PickVisitor::apply(osg::Camera & camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in osgUtil::PickVisitor::apply function");
		}
		osg::Camera & camera=*camera_ptr;

		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PickVisitor::apply(osg::Camera &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(camera);

		return 0;
	}

	// Overload binder for osgUtil::PickVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Projection &)\n  apply(osg::Camera &)\n");
		return 0;
	}

	// void osgUtil::PickVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PickVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::PickVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PickVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PickVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osg::Vec3f osgUtil::PickVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::PickVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::PickVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::PickVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->PickVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::PickVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::PickVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::PickVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::PickVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::PickVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->PickVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::PickVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::PickVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::PickVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::PickVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::PickVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->PickVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osgUtil::PickVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::PickVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::PickVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::PickVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PickVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::PickVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::PickVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::PickVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::PickVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->PickVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::PickVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PickVisitor::base_reset() function, expected prototype:\nvoid osgUtil::PickVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PickVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PickVisitor::reset();

		return 0;
	}

	// osg::Vec3f osgUtil::PickVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::PickVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::PickVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::PickVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->PickVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::PickVisitor::base_getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::PickVisitor::base_getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const function, expected prototype:\nfloat osgUtil::PickVisitor::base_getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgUtil::PickVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & pos=*pos_ptr;
		bool withLODScale=(bool)(lua_toboolean(L,3)==1);

		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::PickVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->PickVisitor::getDistanceToEyePoint(pos, withLODScale);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::PickVisitor::base_apply(osg::Projection & projection)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PickVisitor::base_apply(osg::Projection & projection) function, expected prototype:\nvoid osgUtil::PickVisitor::base_apply(osg::Projection & projection)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Projection* projection_ptr=(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::PickVisitor::base_apply function");
		}
		osg::Projection & projection=*projection_ptr;

		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PickVisitor::base_apply(osg::Projection &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PickVisitor::apply(projection);

		return 0;
	}

	// void osgUtil::PickVisitor::base_apply(osg::Camera & camera)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::PickVisitor::base_apply(osg::Camera & camera) function, expected prototype:\nvoid osgUtil::PickVisitor::base_apply(osg::Camera & camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in osgUtil::PickVisitor::base_apply function");
		}
		osg::Camera & camera=*camera_ptr;

		osgUtil::PickVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::PickVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::PickVisitor::base_apply(osg::Camera &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->PickVisitor::apply(camera);

		return 0;
	}

	// Overload binder for osgUtil::PickVisitor::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Projection &)\n  base_apply(osg::Camera &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::PickVisitor* LunaTraits< osgUtil::PickVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_PickVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::PickVisitor >::_bind_dtor(osgUtil::PickVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::PickVisitor >::className[] = "PickVisitor";
const char LunaTraits< osgUtil::PickVisitor >::fullName[] = "osgUtil::PickVisitor";
const char LunaTraits< osgUtil::PickVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::PickVisitor >::parents[] = {"osgUtil.IntersectVisitor", 0};
const int LunaTraits< osgUtil::PickVisitor >::hash = 832843;
const int LunaTraits< osgUtil::PickVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::PickVisitor >::methods[] = {
	{"runNestedPickVisitor", &luna_wrapper_osgUtil_PickVisitor::_bind_runNestedPickVisitor},
	{"apply", &luna_wrapper_osgUtil_PickVisitor::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_PickVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_getViewPoint", &luna_wrapper_osgUtil_PickVisitor::_bind_base_getViewPoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_PickVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_PickVisitor::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osgUtil_PickVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_PickVisitor::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_PickVisitor::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgUtil_PickVisitor::_bind_base_getEyePoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_PickVisitor::_bind_base_getDistanceToEyePoint},
	{"base_apply", &luna_wrapper_osgUtil_PickVisitor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgUtil_PickVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_PickVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_PickVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::PickVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_PickVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::PickVisitor >::enumValues[] = {
	{0,0}
};


