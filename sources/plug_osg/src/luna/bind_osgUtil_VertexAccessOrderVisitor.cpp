#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_VertexAccessOrderVisitor.h>

class luna_wrapper_osgUtil_VertexAccessOrderVisitor {
public:
	typedef Luna< osgUtil::VertexAccessOrderVisitor > luna_t;

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

		osgUtil::VertexAccessOrderVisitor* self= (osgUtil::VertexAccessOrderVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::VertexAccessOrderVisitor >::push(L,self,false);
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
		//osgUtil::VertexAccessOrderVisitor* ptr= dynamic_cast< osgUtil::VertexAccessOrderVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::VertexAccessOrderVisitor* ptr= luna_caster< osg::Referenced, osgUtil::VertexAccessOrderVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::VertexAccessOrderVisitor >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_optimizeOrder_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_optimizeOrder_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2))) ) return false;
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
	// osgUtil::VertexAccessOrderVisitor::VertexAccessOrderVisitor(osgUtil::Optimizer * optimizer = 0)
	static osgUtil::VertexAccessOrderVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::VertexAccessOrderVisitor::VertexAccessOrderVisitor(osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::VertexAccessOrderVisitor::VertexAccessOrderVisitor(osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 1 ID = 85233381\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>0 ? (Luna< osgUtil::Optimizer >::check(L,1)) : (osgUtil::Optimizer*)0;

		return new osgUtil::VertexAccessOrderVisitor(optimizer);
	}

	// osgUtil::VertexAccessOrderVisitor::VertexAccessOrderVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0)
	static osgUtil::VertexAccessOrderVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::VertexAccessOrderVisitor::VertexAccessOrderVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0) function, expected prototype:\nosgUtil::VertexAccessOrderVisitor::VertexAccessOrderVisitor(lua_Table * data, osgUtil::Optimizer * optimizer = 0)\nClass arguments details:\narg 2 ID = 85233381\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::Optimizer* optimizer=luatop>1 ? (Luna< osgUtil::Optimizer >::check(L,2)) : (osgUtil::Optimizer*)0;

		return new wrapper_osgUtil_VertexAccessOrderVisitor(L,NULL, optimizer);
	}

	// Overload binder for osgUtil::VertexAccessOrderVisitor::VertexAccessOrderVisitor
	static osgUtil::VertexAccessOrderVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function VertexAccessOrderVisitor, cannot match any of the overloads for function VertexAccessOrderVisitor:\n  VertexAccessOrderVisitor(osgUtil::Optimizer *)\n  VertexAccessOrderVisitor(lua_Table *, osgUtil::Optimizer *)\n");
		return NULL;
	}


	// Function binds:
	// void osgUtil::VertexAccessOrderVisitor::optimizeOrder()
	static int _bind_optimizeOrder_overload_1(lua_State *L) {
		if (!_lg_typecheck_optimizeOrder_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexAccessOrderVisitor::optimizeOrder() function, expected prototype:\nvoid osgUtil::VertexAccessOrderVisitor::optimizeOrder()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexAccessOrderVisitor::optimizeOrder(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->optimizeOrder();

		return 0;
	}

	// void osgUtil::VertexAccessOrderVisitor::optimizeOrder(osg::Geometry & geom)
	static int _bind_optimizeOrder_overload_2(lua_State *L) {
		if (!_lg_typecheck_optimizeOrder_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexAccessOrderVisitor::optimizeOrder(osg::Geometry & geom) function, expected prototype:\nvoid osgUtil::VertexAccessOrderVisitor::optimizeOrder(osg::Geometry & geom)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geometry* geom_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geometry >(L,2));
		if( !geom_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geom in osgUtil::VertexAccessOrderVisitor::optimizeOrder function");
		}
		osg::Geometry & geom=*geom_ptr;

		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexAccessOrderVisitor::optimizeOrder(osg::Geometry &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->optimizeOrder(geom);

		return 0;
	}

	// Overload binder for osgUtil::VertexAccessOrderVisitor::optimizeOrder
	static int _bind_optimizeOrder(lua_State *L) {
		if (_lg_typecheck_optimizeOrder_overload_1(L)) return _bind_optimizeOrder_overload_1(L);
		if (_lg_typecheck_optimizeOrder_overload_2(L)) return _bind_optimizeOrder_overload_2(L);

		luaL_error(L, "error in function optimizeOrder, cannot match any of the overloads for function optimizeOrder:\n  optimizeOrder()\n  optimizeOrder(osg::Geometry &)\n");
		return 0;
	}

	// void osgUtil::VertexAccessOrderVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexAccessOrderVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::VertexAccessOrderVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexAccessOrderVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexAccessOrderVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// const char * osgUtil::VertexAccessOrderVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::VertexAccessOrderVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::VertexAccessOrderVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::VertexAccessOrderVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->VertexAccessOrderVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::VertexAccessOrderVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::VertexAccessOrderVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::VertexAccessOrderVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::VertexAccessOrderVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->VertexAccessOrderVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// osg::Vec3f osgUtil::VertexAccessOrderVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::VertexAccessOrderVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::VertexAccessOrderVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::VertexAccessOrderVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->VertexAccessOrderVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::VertexAccessOrderVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::VertexAccessOrderVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::VertexAccessOrderVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::VertexAccessOrderVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->VertexAccessOrderVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::VertexAccessOrderVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::VertexAccessOrderVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::VertexAccessOrderVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::VertexAccessOrderVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::VertexAccessOrderVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->VertexAccessOrderVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::VertexAccessOrderVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::VertexAccessOrderVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::VertexAccessOrderVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::VertexAccessOrderVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::VertexAccessOrderVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->VertexAccessOrderVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::VertexAccessOrderVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::VertexAccessOrderVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::VertexAccessOrderVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::VertexAccessOrderVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::VertexAccessOrderVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->VertexAccessOrderVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::VertexAccessOrderVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexAccessOrderVisitor::base_reset() function, expected prototype:\nvoid osgUtil::VertexAccessOrderVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexAccessOrderVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexAccessOrderVisitor::reset();

		return 0;
	}

	// void osgUtil::VertexAccessOrderVisitor::base_apply(osg::Geode & geode)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::VertexAccessOrderVisitor::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::VertexAccessOrderVisitor::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::VertexAccessOrderVisitor::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::VertexAccessOrderVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::VertexAccessOrderVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::VertexAccessOrderVisitor::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->VertexAccessOrderVisitor::apply(geode);

		return 0;
	}


	// Operator binds:

};

osgUtil::VertexAccessOrderVisitor* LunaTraits< osgUtil::VertexAccessOrderVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::VertexAccessOrderVisitor >::_bind_dtor(osgUtil::VertexAccessOrderVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::VertexAccessOrderVisitor >::className[] = "VertexAccessOrderVisitor";
const char LunaTraits< osgUtil::VertexAccessOrderVisitor >::fullName[] = "osgUtil::VertexAccessOrderVisitor";
const char LunaTraits< osgUtil::VertexAccessOrderVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::VertexAccessOrderVisitor >::parents[] = {"osgUtil.GeometryCollector", 0};
const int LunaTraits< osgUtil::VertexAccessOrderVisitor >::hash = 65955793;
const int LunaTraits< osgUtil::VertexAccessOrderVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::VertexAccessOrderVisitor >::methods[] = {
	{"optimizeOrder", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_optimizeOrder},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_libraryName", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_base_className},
	{"base_getEyePoint", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_base_getDistanceToViewPoint},
	{"base_reset", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_base_reset},
	{"base_apply", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::VertexAccessOrderVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_VertexAccessOrderVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::VertexAccessOrderVisitor >::enumValues[] = {
	{0,0}
};


