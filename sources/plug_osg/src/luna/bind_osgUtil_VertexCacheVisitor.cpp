#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_VertexCacheVisitor.h>

class luna_wrapper_osgUtil_VertexCacheVisitor {
public:
	typedef Luna< osgUtil::VertexCacheVisitor > luna_t;

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

		osgUtil::VertexCacheVisitor* self= (osgUtil::VertexCacheVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::VertexCacheVisitor >::push(L,self,false);
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
		//osgUtil::VertexCacheVisitor* ptr= dynamic_cast< osgUtil::VertexCacheVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::VertexCacheVisitor* ptr= luna_caster< osg::Referenced, osgUtil::VertexCacheVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::VertexCacheVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>1 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,85233381)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osgUtil::Optimizer >::check(L,1)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>2 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,85233381)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osgUtil::Optimizer >::check(L,2)) ) ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_optimizeVertices_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_optimizeVertices_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getViewPoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
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

	inline static bool _lg_typecheck_base_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::VertexCacheVisitor::VertexCacheVisitor(osgUtil::Optimizer * optimizer = 0)
	static osgUtil::VertexCacheVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::VertexCacheVisitor::VertexCacheVisitor(osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::VertexCacheVisitor::VertexCacheVisitor(osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 1 ID = 85233381\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>0 ? (Luna< osgUtil::Optimizer >::check(L,1)) : (osgUtil::Optimizer*)0;

		return new osgUtil::VertexCacheVisitor(optimizer);
	}

	// osgUtil::VertexCacheVisitor::VertexCacheVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0)
	static osgUtil::VertexCacheVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::VertexCacheVisitor::VertexCacheVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::VertexCacheVisitor::VertexCacheVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 2 ID = 85233381\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>1 ? (Luna< osgUtil::Optimizer >::check(L,2)) : (osgUtil::Optimizer*)0;

		return new wrapper_osgUtil_VertexCacheVisitor(L,NULL, optimizer);
	}

	// Overload binder for osgUtil::VertexCacheVisitor::VertexCacheVisitor
	static osgUtil::VertexCacheVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function VertexCacheVisitor, cannot match any of the overloads for function VertexCacheVisitor:\n  VertexCacheVisitor(osgUtil::Optimizer *)\n  VertexCacheVisitor(lua_Table *, osgUtil::Optimizer *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::VertexCacheVisitor::optimizeVertices(osg::Geometry & geom)
	static int _bind_optimizeVertices_overload_1(lua_State *L) {
		if (!_lg_typecheck_optimizeVertices_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheVisitor::optimizeVertices(osg::Geometry & geom) function, expected prototype:\nvoid osgUtil::VertexCacheVisitor::optimizeVertices(osg::Geometry & geom)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry* geom_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !geom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geom in osgUtil::VertexCacheVisitor::optimizeVertices function");
		}
		osg::Geometry & geom=*geom_ptr;

		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheVisitor::optimizeVertices(osg::Geometry &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->optimizeVertices(geom);

		return 0;
	}

	// void osgUtil::VertexCacheVisitor::optimizeVertices()
	static int _bind_optimizeVertices_overload_2(lua_State *L) {
		if (!_lg_typecheck_optimizeVertices_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheVisitor::optimizeVertices() function, expected prototype:\nvoid osgUtil::VertexCacheVisitor::optimizeVertices()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheVisitor::optimizeVertices(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->optimizeVertices();

		return 0;
	}

	// Overload binder for osgUtil::VertexCacheVisitor::optimizeVertices
	static int _bind_optimizeVertices(lua_State *L) {
		if (_lg_typecheck_optimizeVertices_overload_1(L)) return _bind_optimizeVertices_overload_1(L);
		if (_lg_typecheck_optimizeVertices_overload_2(L)) return _bind_optimizeVertices_overload_2(L);

		luaL_error(L, "error in function optimizeVertices, cannot match any of the overloads for function optimizeVertices:\n  optimizeVertices(osg::Geometry &)\n  optimizeVertices()\n");
		return 0;
	}

	// void osgUtil::VertexCacheVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::VertexCacheVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexCacheVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgUtil::VertexCacheVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::VertexCacheVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::VertexCacheVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::VertexCacheVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->VertexCacheVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::VertexCacheVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::VertexCacheVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::VertexCacheVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::VertexCacheVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->VertexCacheVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Vec3f osgUtil::VertexCacheVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::VertexCacheVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::VertexCacheVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::VertexCacheVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->VertexCacheVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::VertexCacheVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::VertexCacheVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::VertexCacheVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::VertexCacheVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->VertexCacheVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::VertexCacheVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::VertexCacheVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::VertexCacheVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::VertexCacheVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::VertexCacheVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->VertexCacheVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::VertexCacheVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::VertexCacheVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::VertexCacheVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::VertexCacheVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::VertexCacheVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->VertexCacheVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::VertexCacheVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::VertexCacheVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::VertexCacheVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::VertexCacheVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::VertexCacheVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->VertexCacheVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::VertexCacheVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheVisitor::base_reset() function, expected prototype:\nvoid osgUtil::VertexCacheVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexCacheVisitor::reset();

		return 0;
	}

	// void osgUtil::VertexCacheVisitor::base_apply(osg::Geode & geode)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexCacheVisitor::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::VertexCacheVisitor::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::VertexCacheVisitor::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::VertexCacheVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexCacheVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexCacheVisitor::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexCacheVisitor::apply(geode);

		return 0;
	}


	// Operator binds:

};

osgUtil::VertexCacheVisitor* LunaTraits< osgUtil::VertexCacheVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_VertexCacheVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::VertexCacheVisitor >::_bind_dtor(osgUtil::VertexCacheVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::VertexCacheVisitor >::className[] = "VertexCacheVisitor";
const char LunaTraits< osgUtil::VertexCacheVisitor >::fullName[] = "osgUtil::VertexCacheVisitor";
const char LunaTraits< osgUtil::VertexCacheVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::VertexCacheVisitor >::parents[] = {"osgUtil.GeometryCollector", 0};
const int LunaTraits< osgUtil::VertexCacheVisitor >::hash = 81431095;
const int LunaTraits< osgUtil::VertexCacheVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::VertexCacheVisitor >::methods[] = {
	{"optimizeVertices", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_optimizeVertices},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_libraryName", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_base_className},
	{"base_getEyePoint", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_base_getDistanceToViewPoint},
	{"base_reset", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_base_reset},
	{"base_apply", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_VertexCacheVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::VertexCacheVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_VertexCacheVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::VertexCacheVisitor >::enumValues[] = {
	{0,0}
};


