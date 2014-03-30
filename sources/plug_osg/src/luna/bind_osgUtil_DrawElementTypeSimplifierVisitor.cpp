#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_DrawElementTypeSimplifierVisitor.h>

class luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor {
public:
	typedef Luna< osgUtil::DrawElementTypeSimplifierVisitor > luna_t;

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

		osgUtil::DrawElementTypeSimplifierVisitor* self= (osgUtil::DrawElementTypeSimplifierVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::DrawElementTypeSimplifierVisitor >::push(L,self,false);
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
		//osgUtil::DrawElementTypeSimplifierVisitor* ptr= dynamic_cast< osgUtil::DrawElementTypeSimplifierVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::DrawElementTypeSimplifierVisitor* ptr= luna_caster< osg::Referenced, osgUtil::DrawElementTypeSimplifierVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::DrawElementTypeSimplifierVisitor >::push(L,ptr,false);
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
	inline static bool _lg_typecheck_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_className(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_apply(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
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

	inline static bool _lg_typecheck_base_libraryName(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_base_className(lua_State *L) {
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
	// osgUtil::DrawElementTypeSimplifierVisitor::DrawElementTypeSimplifierVisitor()
	static osgUtil::DrawElementTypeSimplifierVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::DrawElementTypeSimplifierVisitor::DrawElementTypeSimplifierVisitor() function, expected prototype:\nosgUtil::DrawElementTypeSimplifierVisitor::DrawElementTypeSimplifierVisitor()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new osgUtil::DrawElementTypeSimplifierVisitor();
	}

	// osgUtil::DrawElementTypeSimplifierVisitor::DrawElementTypeSimplifierVisitor(lua_Table * data)
	static osgUtil::DrawElementTypeSimplifierVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::DrawElementTypeSimplifierVisitor::DrawElementTypeSimplifierVisitor(lua_Table * data) function, expected prototype:\nosgUtil::DrawElementTypeSimplifierVisitor::DrawElementTypeSimplifierVisitor(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_DrawElementTypeSimplifierVisitor(L,NULL);
	}

	// Overload binder for osgUtil::DrawElementTypeSimplifierVisitor::DrawElementTypeSimplifierVisitor
	static osgUtil::DrawElementTypeSimplifierVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function DrawElementTypeSimplifierVisitor, cannot match any of the overloads for function DrawElementTypeSimplifierVisitor:\n  DrawElementTypeSimplifierVisitor()\n  DrawElementTypeSimplifierVisitor(lua_Table *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgUtil::DrawElementTypeSimplifierVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DrawElementTypeSimplifierVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::DrawElementTypeSimplifierVisitor::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::DrawElementTypeSimplifierVisitor::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::DrawElementTypeSimplifierVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DrawElementTypeSimplifierVisitor::className() const function, expected prototype:\nconst char * osgUtil::DrawElementTypeSimplifierVisitor::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::DrawElementTypeSimplifierVisitor::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::DrawElementTypeSimplifierVisitor::apply(osg::Geode & node)
	static int _bind_apply(lua_State *L) {
		if (!_lg_typecheck_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DrawElementTypeSimplifierVisitor::apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::DrawElementTypeSimplifierVisitor::apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::DrawElementTypeSimplifierVisitor::apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DrawElementTypeSimplifierVisitor::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::DrawElementTypeSimplifierVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DrawElementTypeSimplifierVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::DrawElementTypeSimplifierVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DrawElementTypeSimplifierVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementTypeSimplifierVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// void osgUtil::DrawElementTypeSimplifierVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DrawElementTypeSimplifierVisitor::base_reset() function, expected prototype:\nvoid osgUtil::DrawElementTypeSimplifierVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DrawElementTypeSimplifierVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementTypeSimplifierVisitor::reset();

		return 0;
	}

	// osg::Vec3f osgUtil::DrawElementTypeSimplifierVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::DrawElementTypeSimplifierVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::DrawElementTypeSimplifierVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::DrawElementTypeSimplifierVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->DrawElementTypeSimplifierVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// osg::Vec3f osgUtil::DrawElementTypeSimplifierVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::DrawElementTypeSimplifierVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::DrawElementTypeSimplifierVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::DrawElementTypeSimplifierVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->DrawElementTypeSimplifierVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceToEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->DrawElementTypeSimplifierVisitor::getDistanceToEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->DrawElementTypeSimplifierVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::DrawElementTypeSimplifierVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->DrawElementTypeSimplifierVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osgUtil::DrawElementTypeSimplifierVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DrawElementTypeSimplifierVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::DrawElementTypeSimplifierVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::DrawElementTypeSimplifierVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawElementTypeSimplifierVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::DrawElementTypeSimplifierVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::DrawElementTypeSimplifierVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::DrawElementTypeSimplifierVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::DrawElementTypeSimplifierVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->DrawElementTypeSimplifierVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::DrawElementTypeSimplifierVisitor::base_apply(osg::Geode & node)
	static int _bind_base_apply(lua_State *L) {
		if (!_lg_typecheck_base_apply(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::DrawElementTypeSimplifierVisitor::base_apply(osg::Geode & node) function, expected prototype:\nvoid osgUtil::DrawElementTypeSimplifierVisitor::base_apply(osg::Geode & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::DrawElementTypeSimplifierVisitor::base_apply function");
		}
		osg::Geode & node=*node_ptr;

		osgUtil::DrawElementTypeSimplifierVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::DrawElementTypeSimplifierVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::DrawElementTypeSimplifierVisitor::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->DrawElementTypeSimplifierVisitor::apply(node);

		return 0;
	}


	// Operator binds:

};

osgUtil::DrawElementTypeSimplifierVisitor* LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::_bind_dtor(osgUtil::DrawElementTypeSimplifierVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::className[] = "DrawElementTypeSimplifierVisitor";
const char LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::fullName[] = "osgUtil::DrawElementTypeSimplifierVisitor";
const char LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::hash = 75967435;
const int LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_className},
	{"apply", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_reset", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_base_getEyePoint},
	{"base_getViewPoint", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_base_getViewPoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_base_getDistanceToEyePoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_base_className},
	{"base_apply", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_DrawElementTypeSimplifierVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::DrawElementTypeSimplifierVisitor >::enumValues[] = {
	{0,0}
};


