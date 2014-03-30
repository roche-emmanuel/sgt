#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback.h>

class luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback {
public:
	typedef Luna< osgUtil::SceneView::ComputeStereoMatricesCallback > luna_t;

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

		osgUtil::SceneView::ComputeStereoMatricesCallback* self= (osgUtil::SceneView::ComputeStereoMatricesCallback*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::SceneView::ComputeStereoMatricesCallback >::push(L,self,false);
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
		//osgUtil::SceneView::ComputeStereoMatricesCallback* ptr= dynamic_cast< osgUtil::SceneView::ComputeStereoMatricesCallback* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::SceneView::ComputeStereoMatricesCallback* ptr= luna_caster< osg::Referenced, osgUtil::SceneView::ComputeStereoMatricesCallback >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::SceneView::ComputeStereoMatricesCallback >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		return true;
	}


	// Function checkers:
	inline static bool _lg_typecheck_computeLeftEyeProjection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeLeftEyeView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeRightEyeProjection(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_computeRightEyeView(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,18903838) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_setThreadSafeRefUnref(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::SceneView::ComputeStereoMatricesCallback::ComputeStereoMatricesCallback(lua_Table * data)
	static osgUtil::SceneView::ComputeStereoMatricesCallback* _bind_ctor(lua_State *L) {
		if (!_lg_typecheck_ctor(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::SceneView::ComputeStereoMatricesCallback::ComputeStereoMatricesCallback(lua_Table * data) function, expected prototype:\nosgUtil::SceneView::ComputeStereoMatricesCallback::ComputeStereoMatricesCallback(lua_Table * data)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		return new wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback(L,NULL);
	}


	// Function binds:
	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection(const osg::Matrixd & projection) const
	static int _bind_computeLeftEyeProjection(lua_State *L) {
		if (!_lg_typecheck_computeLeftEyeProjection(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection(const osg::Matrixd & projection) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection(const osg::Matrixd & projection) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection function");
		}
		const osg::Matrixd & projection=*projection_ptr;

		osgUtil::SceneView::ComputeStereoMatricesCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView::ComputeStereoMatricesCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection(const osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->computeLeftEyeProjection(projection);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView(const osg::Matrixd & view) const
	static int _bind_computeLeftEyeView(lua_State *L) {
		if (!_lg_typecheck_computeLeftEyeView(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView(const osg::Matrixd & view) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView(const osg::Matrixd & view) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView function");
		}
		const osg::Matrixd & view=*view_ptr;

		osgUtil::SceneView::ComputeStereoMatricesCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView::ComputeStereoMatricesCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView(const osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->computeLeftEyeView(view);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection(const osg::Matrixd & projection) const
	static int _bind_computeRightEyeProjection(lua_State *L) {
		if (!_lg_typecheck_computeRightEyeProjection(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection(const osg::Matrixd & projection) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection(const osg::Matrixd & projection) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* projection_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection function");
		}
		const osg::Matrixd & projection=*projection_ptr;

		osgUtil::SceneView::ComputeStereoMatricesCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView::ComputeStereoMatricesCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection(const osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->computeRightEyeProjection(projection);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView(const osg::Matrixd & view) const
	static int _bind_computeRightEyeView(lua_State *L) {
		if (!_lg_typecheck_computeRightEyeView(L)) {
			luaL_error(L, "luna typecheck failed in osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView(const osg::Matrixd & view) const function, expected prototype:\nosg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView(const osg::Matrixd & view) const\nClass arguments details:\narg 1 ID = 18903838\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Matrixd* view_ptr=(Luna< osg::Matrixd >::check(L,2));
		if( !view_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg view in osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView function");
		}
		const osg::Matrixd & view=*view_ptr;

		osgUtil::SceneView::ComputeStereoMatricesCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView::ComputeStereoMatricesCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView(const osg::Matrixd &) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Matrixd stack_lret = self->computeRightEyeView(view);
		osg::Matrixd* lret = new osg::Matrixd(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Matrixd >::push(L,lret,true);

		return 1;
	}

	// void osgUtil::SceneView::ComputeStereoMatricesCallback::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::SceneView::ComputeStereoMatricesCallback::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::SceneView::ComputeStereoMatricesCallback::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::SceneView::ComputeStereoMatricesCallback* self=Luna< osg::Referenced >::checkSubType< osgUtil::SceneView::ComputeStereoMatricesCallback >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::SceneView::ComputeStereoMatricesCallback::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->ComputeStereoMatricesCallback::setThreadSafeRefUnref(threadSafe);

		return 0;
	}


	// Operator binds:

};

osgUtil::SceneView::ComputeStereoMatricesCallback* LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_ctor(L);
	// Note that this class is abstract (only lua wrappers can be created).
	// Abstract methods:
	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeProjection(const osg::Matrixd & projection) const
	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeLeftEyeView(const osg::Matrixd & view) const
	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeProjection(const osg::Matrixd & projection) const
	// osg::Matrixd osgUtil::SceneView::ComputeStereoMatricesCallback::computeRightEyeView(const osg::Matrixd & view) const
}

void LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::_bind_dtor(osgUtil::SceneView::ComputeStereoMatricesCallback* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::className[] = "SceneView_ComputeStereoMatricesCallback";
const char LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::fullName[] = "osgUtil::SceneView::ComputeStereoMatricesCallback";
const char LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::parents[] = {"osg.Referenced", 0};
const int LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::hash = 42058343;
const int LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::methods[] = {
	{"computeLeftEyeProjection", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_computeLeftEyeProjection},
	{"computeLeftEyeView", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_computeLeftEyeView},
	{"computeRightEyeProjection", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_computeRightEyeProjection},
	{"computeRightEyeView", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_computeRightEyeView},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_base_setThreadSafeRefUnref},
	{"fromVoid", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_SceneView_ComputeStereoMatricesCallback::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::SceneView::ComputeStereoMatricesCallback >::enumValues[] = {
	{0,0}
};


