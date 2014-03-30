#include <plug_common.h>

#include <luna/wrappers/wrapper_osgUtil_IntersectionVisitor.h>

class luna_wrapper_osgUtil_IntersectionVisitor {
public:
	typedef Luna< osgUtil::IntersectionVisitor > luna_t;

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

		osgUtil::IntersectionVisitor* self= (osgUtil::IntersectionVisitor*)(Luna< void >::check(L,1));
		if(!self) {
			luaL_error(L, "Invalid object in function call fromVoid(...)");
		}
		
		Luna< osgUtil::IntersectionVisitor >::push(L,self,false);
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
		//osgUtil::IntersectionVisitor* ptr= dynamic_cast< osgUtil::IntersectionVisitor* >(Luna< osg::Referenced >::check(L,1));
		osgUtil::IntersectionVisitor* ptr= luna_caster< osg::Referenced, osgUtil::IntersectionVisitor >::cast(Luna< osg::Referenced >::check(L,1));
		if(!ptr)
			return 0;
		
		// Otherwise push the pointer:
		Luna< osgUtil::IntersectionVisitor >::push(L,ptr,false);
		return 1;
	};


	// Constructor checkers:
	inline static bool _lg_typecheck_ctor_overload_1(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<0 || luatop>2 ) return false;

		if( luatop>0 && (lua_isnil(L,1)==0 && !Luna<void>::has_uniqueid(L,1,50169651)) ) return false;
		if( luatop>0 && (lua_isnil(L,1)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1)) ) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor::ReadCallback >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_ctor_overload_2(lua_State *L) {
		int luatop = lua_gettop(L);
		if( luatop<1 || luatop>3 ) return false;

		if( lua_istable(L,1)==0 ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( luatop>1 && (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,2)) ) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !Luna<void>::has_uniqueid(L,3,50169651)) ) return false;
		if( luatop>2 && (lua_isnil(L,3)==0 && !(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor::ReadCallback >(L,3)) ) ) return false;
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

	inline static bool _lg_typecheck_reset(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setIntersector(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getIntersector_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getIntersector_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setUseKdTreeWhenAvailable(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getUseKdTreeWhenAvailable(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setDoDummyTraversal(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( lua_isboolean(L,2)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getDoDummyTraversal(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReadCallback(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReadCallback_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getReadCallback_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushWindowMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_pushWindowMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		if( (lua_isnil(L,2)==0 && !(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,2)) ) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popWindowMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getWindowMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushProjectionMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popProjectionMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getProjectionMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popViewMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getViewMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_pushModelMatrix(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_isnil(L,2)==0 && !Luna<void>::has_uniqueid(L,2,50169651)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_popModelMatrix(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModelMatrix_overload_1(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getModelMatrix_overload_2(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceEyePoint(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setReferenceEyePointCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getReferenceEyePointCoordinateFrame(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getEyePoint(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_setLODSelectionMode(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( (lua_type(L,2)!=LUA_TNUMBER || lua_tointeger(L,2) != lua_tonumber(L,2)) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_getLODSelectionMode(lua_State *L) {
		if( lua_gettop(L)!=1 ) return false;

		return true;
	}

	inline static bool _lg_typecheck_getDistanceToEyePoint(lua_State *L) {
		if( lua_gettop(L)!=3 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,92303204) ) return false;
		if( lua_isboolean(L,3)==0 ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_1(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_apply_overload_9(lua_State *L) {
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
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_2(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_3(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_4(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_5(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_6(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_7(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_8(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2))) ) return false;
		return true;
	}

	inline static bool _lg_typecheck_base_apply_overload_9(lua_State *L) {
		if( lua_gettop(L)!=2 ) return false;

		if( !Luna<void>::has_uniqueid(L,2,50169651) ) return false;
		if( (!(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2))) ) return false;
		return true;
	}


	// Operator checkers:
	// (found 0 valid operators)

	// Constructor binds:
	// osgUtil::IntersectionVisitor::IntersectionVisitor(osgUtil::Intersector * intersector = 0, osgUtil::IntersectionVisitor::ReadCallback * readCallback = 0)
	static osgUtil::IntersectionVisitor* _bind_ctor_overload_1(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectionVisitor::IntersectionVisitor(osgUtil::Intersector * intersector = 0, osgUtil::IntersectionVisitor::ReadCallback * readCallback = 0) function, expected prototype:\nosgUtil::IntersectionVisitor::IntersectionVisitor(osgUtil::Intersector * intersector = 0, osgUtil::IntersectionVisitor::ReadCallback * readCallback = 0)\nClass arguments details:\narg 1 ID = 50169651\narg 2 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::Intersector* intersector=luatop>0 ? (Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,1)) : (osgUtil::Intersector*)0;
		osgUtil::IntersectionVisitor::ReadCallback* readCallback=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor::ReadCallback >(L,2)) : (osgUtil::IntersectionVisitor::ReadCallback*)0;

		return new osgUtil::IntersectionVisitor(intersector, readCallback);
	}

	// osgUtil::IntersectionVisitor::IntersectionVisitor(lua_Table * data, osgUtil::Intersector * intersector = 0, osgUtil::IntersectionVisitor::ReadCallback * readCallback = 0)
	static osgUtil::IntersectionVisitor* _bind_ctor_overload_2(lua_State *L) {
		if (!_lg_typecheck_ctor_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectionVisitor::IntersectionVisitor(lua_Table * data, osgUtil::Intersector * intersector = 0, osgUtil::IntersectionVisitor::ReadCallback * readCallback = 0) function, expected prototype:\nosgUtil::IntersectionVisitor::IntersectionVisitor(lua_Table * data, osgUtil::Intersector * intersector = 0, osgUtil::IntersectionVisitor::ReadCallback * readCallback = 0)\nClass arguments details:\narg 2 ID = 50169651\narg 3 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		int luatop = lua_gettop(L);

		osgUtil::Intersector* intersector=luatop>1 ? (Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,2)) : (osgUtil::Intersector*)0;
		osgUtil::IntersectionVisitor::ReadCallback* readCallback=luatop>2 ? (Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor::ReadCallback >(L,3)) : (osgUtil::IntersectionVisitor::ReadCallback*)0;

		return new wrapper_osgUtil_IntersectionVisitor(L,NULL, intersector, readCallback);
	}

	// Overload binder for osgUtil::IntersectionVisitor::IntersectionVisitor
	static osgUtil::IntersectionVisitor* _bind_ctor(lua_State *L) {
		if (_lg_typecheck_ctor_overload_1(L)) return _bind_ctor_overload_1(L);
		if (_lg_typecheck_ctor_overload_2(L)) return _bind_ctor_overload_2(L);

		luaL_error(L, "error in function IntersectionVisitor, cannot match any of the overloads for function IntersectionVisitor:\n  IntersectionVisitor(osgUtil::Intersector *, osgUtil::IntersectionVisitor::ReadCallback *)\n  IntersectionVisitor(lua_Table *, osgUtil::Intersector *, osgUtil::IntersectionVisitor::ReadCallback *)\n");
		return NULL;
	}


	// Function binds:
	// const char * osgUtil::IntersectionVisitor::libraryName() const
	static int _bind_libraryName(lua_State *L) {
		if (!_lg_typecheck_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::IntersectionVisitor::libraryName() const function, expected prototype:\nconst char * osgUtil::IntersectionVisitor::libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::IntersectionVisitor::libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::IntersectionVisitor::className() const
	static int _bind_className(lua_State *L) {
		if (!_lg_typecheck_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::IntersectionVisitor::className() const function, expected prototype:\nconst char * osgUtil::IntersectionVisitor::className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::IntersectionVisitor::className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::reset()
	static int _bind_reset(lua_State *L) {
		if (!_lg_typecheck_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::reset() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->reset();

		return 0;
	}

	// void osgUtil::IntersectionVisitor::setIntersector(osgUtil::Intersector * intersector)
	static int _bind_setIntersector(lua_State *L) {
		if (!_lg_typecheck_setIntersector(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setIntersector(osgUtil::Intersector * intersector) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setIntersector(osgUtil::Intersector * intersector)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Intersector* intersector=(Luna< osg::Referenced >::checkSubType< osgUtil::Intersector >(L,2));

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setIntersector(osgUtil::Intersector *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setIntersector(intersector);

		return 0;
	}

	// osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector()
	static int _bind_getIntersector_overload_1(lua_State *L) {
		if (!_lg_typecheck_getIntersector_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector() function, expected prototype:\nosgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Intersector * lret = self->getIntersector();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector() const
	static int _bind_getIntersector_overload_2(lua_State *L) {
		if (!_lg_typecheck_getIntersector_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector() const function, expected prototype:\nconst osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgUtil::Intersector * osgUtil::IntersectionVisitor::getIntersector() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::Intersector * lret = self->getIntersector();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::Intersector >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getIntersector
	static int _bind_getIntersector(lua_State *L) {
		if (_lg_typecheck_getIntersector_overload_1(L)) return _bind_getIntersector_overload_1(L);
		if (_lg_typecheck_getIntersector_overload_2(L)) return _bind_getIntersector_overload_2(L);

		luaL_error(L, "error in function getIntersector, cannot match any of the overloads for function getIntersector:\n  getIntersector()\n  getIntersector()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::setUseKdTreeWhenAvailable(bool useKdTrees)
	static int _bind_setUseKdTreeWhenAvailable(lua_State *L) {
		if (!_lg_typecheck_setUseKdTreeWhenAvailable(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setUseKdTreeWhenAvailable(bool useKdTrees) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setUseKdTreeWhenAvailable(bool useKdTrees)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool useKdTrees=(bool)(lua_toboolean(L,2)==1);

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setUseKdTreeWhenAvailable(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setUseKdTreeWhenAvailable(useKdTrees);

		return 0;
	}

	// bool osgUtil::IntersectionVisitor::getUseKdTreeWhenAvailable() const
	static int _bind_getUseKdTreeWhenAvailable(lua_State *L) {
		if (!_lg_typecheck_getUseKdTreeWhenAvailable(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectionVisitor::getUseKdTreeWhenAvailable() const function, expected prototype:\nbool osgUtil::IntersectionVisitor::getUseKdTreeWhenAvailable() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectionVisitor::getUseKdTreeWhenAvailable() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getUseKdTreeWhenAvailable();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::setDoDummyTraversal(bool dummy)
	static int _bind_setDoDummyTraversal(lua_State *L) {
		if (!_lg_typecheck_setDoDummyTraversal(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setDoDummyTraversal(bool dummy) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setDoDummyTraversal(bool dummy)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool dummy=(bool)(lua_toboolean(L,2)==1);

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setDoDummyTraversal(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setDoDummyTraversal(dummy);

		return 0;
	}

	// bool osgUtil::IntersectionVisitor::getDoDummyTraversal() const
	static int _bind_getDoDummyTraversal(lua_State *L) {
		if (!_lg_typecheck_getDoDummyTraversal(L)) {
			luaL_error(L, "luna typecheck failed in bool osgUtil::IntersectionVisitor::getDoDummyTraversal() const function, expected prototype:\nbool osgUtil::IntersectionVisitor::getDoDummyTraversal() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call bool osgUtil::IntersectionVisitor::getDoDummyTraversal() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		bool lret = self->getDoDummyTraversal();
		lua_pushboolean(L,lret?1:0);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::setReadCallback(osgUtil::IntersectionVisitor::ReadCallback * rc)
	static int _bind_setReadCallback(lua_State *L) {
		if (!_lg_typecheck_setReadCallback(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setReadCallback(osgUtil::IntersectionVisitor::ReadCallback * rc) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setReadCallback(osgUtil::IntersectionVisitor::ReadCallback * rc)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor::ReadCallback* rc=(Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor::ReadCallback >(L,2));

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setReadCallback(osgUtil::IntersectionVisitor::ReadCallback *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReadCallback(rc);

		return 0;
	}

	// osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback()
	static int _bind_getReadCallback_overload_1(lua_State *L) {
		if (!_lg_typecheck_getReadCallback_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback() function, expected prototype:\nosgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::IntersectionVisitor::ReadCallback * lret = self->getReadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::IntersectionVisitor::ReadCallback >::push(L,lret,false);

		return 1;
	}

	// const osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback() const
	static int _bind_getReadCallback_overload_2(lua_State *L) {
		if (!_lg_typecheck_getReadCallback_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback() const function, expected prototype:\nconst osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osgUtil::IntersectionVisitor::ReadCallback * osgUtil::IntersectionVisitor::getReadCallback() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osgUtil::IntersectionVisitor::ReadCallback * lret = self->getReadCallback();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osgUtil::IntersectionVisitor::ReadCallback >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getReadCallback
	static int _bind_getReadCallback(lua_State *L) {
		if (_lg_typecheck_getReadCallback_overload_1(L)) return _bind_getReadCallback_overload_1(L);
		if (_lg_typecheck_getReadCallback_overload_2(L)) return _bind_getReadCallback_overload_2(L);

		luaL_error(L, "error in function getReadCallback, cannot match any of the overloads for function getReadCallback:\n  getReadCallback()\n  getReadCallback()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::RefMatrixd * matrix)
	static int _bind_pushWindowMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_pushWindowMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::RefMatrixd * matrix) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::pushWindowMatrix(osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::RefMatrixd *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushWindowMatrix(matrix);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::Viewport * viewport)
	static int _bind_pushWindowMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_pushWindowMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::Viewport * viewport) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::pushWindowMatrix(osg::Viewport * viewport)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Viewport* viewport=(Luna< osg::Referenced >::checkSubType< osg::Viewport >(L,2));

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::pushWindowMatrix(osg::Viewport *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushWindowMatrix(viewport);

		return 0;
	}

	// Overload binder for osgUtil::IntersectionVisitor::pushWindowMatrix
	static int _bind_pushWindowMatrix(lua_State *L) {
		if (_lg_typecheck_pushWindowMatrix_overload_1(L)) return _bind_pushWindowMatrix_overload_1(L);
		if (_lg_typecheck_pushWindowMatrix_overload_2(L)) return _bind_pushWindowMatrix_overload_2(L);

		luaL_error(L, "error in function pushWindowMatrix, cannot match any of the overloads for function pushWindowMatrix:\n  pushWindowMatrix(osg::RefMatrixd *)\n  pushWindowMatrix(osg::Viewport *)\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::popWindowMatrix()
	static int _bind_popWindowMatrix(lua_State *L) {
		if (!_lg_typecheck_popWindowMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::popWindowMatrix() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::popWindowMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::popWindowMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popWindowMatrix();

		return 0;
	}

	// osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix()
	static int _bind_getWindowMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getWindowMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix() function, expected prototype:\nosg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::RefMatrixd * lret = self->getWindowMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix() const
	static int _bind_getWindowMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getWindowMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix() const function, expected prototype:\nconst osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osgUtil::IntersectionVisitor::getWindowMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::RefMatrixd * lret = self->getWindowMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getWindowMatrix
	static int _bind_getWindowMatrix(lua_State *L) {
		if (_lg_typecheck_getWindowMatrix_overload_1(L)) return _bind_getWindowMatrix_overload_1(L);
		if (_lg_typecheck_getWindowMatrix_overload_2(L)) return _bind_getWindowMatrix_overload_2(L);

		luaL_error(L, "error in function getWindowMatrix, cannot match any of the overloads for function getWindowMatrix:\n  getWindowMatrix()\n  getWindowMatrix()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::pushProjectionMatrix(osg::RefMatrixd * matrix)
	static int _bind_pushProjectionMatrix(lua_State *L) {
		if (!_lg_typecheck_pushProjectionMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::pushProjectionMatrix(osg::RefMatrixd * matrix) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::pushProjectionMatrix(osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::pushProjectionMatrix(osg::RefMatrixd *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushProjectionMatrix(matrix);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::popProjectionMatrix()
	static int _bind_popProjectionMatrix(lua_State *L) {
		if (!_lg_typecheck_popProjectionMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::popProjectionMatrix() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::popProjectionMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::popProjectionMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popProjectionMatrix();

		return 0;
	}

	// osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix()
	static int _bind_getProjectionMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix() function, expected prototype:\nosg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::RefMatrixd * lret = self->getProjectionMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix() const
	static int _bind_getProjectionMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getProjectionMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix() const function, expected prototype:\nconst osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osgUtil::IntersectionVisitor::getProjectionMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::RefMatrixd * lret = self->getProjectionMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getProjectionMatrix
	static int _bind_getProjectionMatrix(lua_State *L) {
		if (_lg_typecheck_getProjectionMatrix_overload_1(L)) return _bind_getProjectionMatrix_overload_1(L);
		if (_lg_typecheck_getProjectionMatrix_overload_2(L)) return _bind_getProjectionMatrix_overload_2(L);

		luaL_error(L, "error in function getProjectionMatrix, cannot match any of the overloads for function getProjectionMatrix:\n  getProjectionMatrix()\n  getProjectionMatrix()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::pushViewMatrix(osg::RefMatrixd * matrix)
	static int _bind_pushViewMatrix(lua_State *L) {
		if (!_lg_typecheck_pushViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::pushViewMatrix(osg::RefMatrixd * matrix) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::pushViewMatrix(osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::pushViewMatrix(osg::RefMatrixd *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushViewMatrix(matrix);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::popViewMatrix()
	static int _bind_popViewMatrix(lua_State *L) {
		if (!_lg_typecheck_popViewMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::popViewMatrix() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::popViewMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::popViewMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popViewMatrix();

		return 0;
	}

	// osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix()
	static int _bind_getViewMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getViewMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix() function, expected prototype:\nosg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::RefMatrixd * lret = self->getViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix() const
	static int _bind_getViewMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getViewMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix() const function, expected prototype:\nconst osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osgUtil::IntersectionVisitor::getViewMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::RefMatrixd * lret = self->getViewMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getViewMatrix
	static int _bind_getViewMatrix(lua_State *L) {
		if (_lg_typecheck_getViewMatrix_overload_1(L)) return _bind_getViewMatrix_overload_1(L);
		if (_lg_typecheck_getViewMatrix_overload_2(L)) return _bind_getViewMatrix_overload_2(L);

		luaL_error(L, "error in function getViewMatrix, cannot match any of the overloads for function getViewMatrix:\n  getViewMatrix()\n  getViewMatrix()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::pushModelMatrix(osg::RefMatrixd * matrix)
	static int _bind_pushModelMatrix(lua_State *L) {
		if (!_lg_typecheck_pushModelMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::pushModelMatrix(osg::RefMatrixd * matrix) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::pushModelMatrix(osg::RefMatrixd * matrix)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::RefMatrixd* matrix=(Luna< osg::Referenced >::checkSubType< osg::RefMatrixd >(L,2));

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::pushModelMatrix(osg::RefMatrixd *). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->pushModelMatrix(matrix);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::popModelMatrix()
	static int _bind_popModelMatrix(lua_State *L) {
		if (!_lg_typecheck_popModelMatrix(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::popModelMatrix() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::popModelMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::popModelMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->popModelMatrix();

		return 0;
	}

	// osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix()
	static int _bind_getModelMatrix_overload_1(lua_State *L) {
		if (!_lg_typecheck_getModelMatrix_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix() function, expected prototype:\nosg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::RefMatrixd * lret = self->getModelMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// const osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix() const
	static int _bind_getModelMatrix_overload_2(lua_State *L) {
		if (!_lg_typecheck_getModelMatrix_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in const osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix() const function, expected prototype:\nconst osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::RefMatrixd * osgUtil::IntersectionVisitor::getModelMatrix() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::RefMatrixd * lret = self->getModelMatrix();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::RefMatrixd >::push(L,lret,false);

		return 1;
	}

	// Overload binder for osgUtil::IntersectionVisitor::getModelMatrix
	static int _bind_getModelMatrix(lua_State *L) {
		if (_lg_typecheck_getModelMatrix_overload_1(L)) return _bind_getModelMatrix_overload_1(L);
		if (_lg_typecheck_getModelMatrix_overload_2(L)) return _bind_getModelMatrix_overload_2(L);

		luaL_error(L, "error in function getModelMatrix, cannot match any of the overloads for function getModelMatrix:\n  getModelMatrix()\n  getModelMatrix()\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::setReferenceEyePoint(const osg::Vec3f & ep)
	static int _bind_setReferenceEyePoint(lua_State *L) {
		if (!_lg_typecheck_setReferenceEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setReferenceEyePoint(const osg::Vec3f & ep) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setReferenceEyePoint(const osg::Vec3f & ep)\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* ep_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !ep_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg ep in osgUtil::IntersectionVisitor::setReferenceEyePoint function");
		}
		const osg::Vec3f & ep=*ep_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setReferenceEyePoint(const osg::Vec3f &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceEyePoint(ep);

		return 0;
	}

	// const osg::Vec3f & osgUtil::IntersectionVisitor::getReferenceEyePoint() const
	static int _bind_getReferenceEyePoint(lua_State *L) {
		if (!_lg_typecheck_getReferenceEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in const osg::Vec3f & osgUtil::IntersectionVisitor::getReferenceEyePoint() const function, expected prototype:\nconst osg::Vec3f & osgUtil::IntersectionVisitor::getReferenceEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const osg::Vec3f & osgUtil::IntersectionVisitor::getReferenceEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const osg::Vec3f* lret = &self->getReferenceEyePoint();
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,false);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::setReferenceEyePointCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf)
	static int _bind_setReferenceEyePointCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_setReferenceEyePointCoordinateFrame(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setReferenceEyePointCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setReferenceEyePointCoordinateFrame(osgUtil::Intersector::CoordinateFrame cf)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::Intersector::CoordinateFrame cf=(osgUtil::Intersector::CoordinateFrame)lua_tointeger(L,2);

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setReferenceEyePointCoordinateFrame(osgUtil::Intersector::CoordinateFrame). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setReferenceEyePointCoordinateFrame(cf);

		return 0;
	}

	// osgUtil::Intersector::CoordinateFrame osgUtil::IntersectionVisitor::getReferenceEyePointCoordinateFrame() const
	static int _bind_getReferenceEyePointCoordinateFrame(lua_State *L) {
		if (!_lg_typecheck_getReferenceEyePointCoordinateFrame(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::Intersector::CoordinateFrame osgUtil::IntersectionVisitor::getReferenceEyePointCoordinateFrame() const function, expected prototype:\nosgUtil::Intersector::CoordinateFrame osgUtil::IntersectionVisitor::getReferenceEyePointCoordinateFrame() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::Intersector::CoordinateFrame osgUtil::IntersectionVisitor::getReferenceEyePointCoordinateFrame() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::Intersector::CoordinateFrame lret = self->getReferenceEyePointCoordinateFrame();
		lua_pushnumber(L,lret);

		return 1;
	}

	// osg::Vec3f osgUtil::IntersectionVisitor::getEyePoint() const
	static int _bind_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::IntersectionVisitor::getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::IntersectionVisitor::getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::IntersectionVisitor::getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::setLODSelectionMode(osgUtil::IntersectionVisitor::LODSelectionMode mode)
	static int _bind_setLODSelectionMode(lua_State *L) {
		if (!_lg_typecheck_setLODSelectionMode(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::setLODSelectionMode(osgUtil::IntersectionVisitor::LODSelectionMode mode) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::setLODSelectionMode(osgUtil::IntersectionVisitor::LODSelectionMode mode)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		osgUtil::IntersectionVisitor::LODSelectionMode mode=(osgUtil::IntersectionVisitor::LODSelectionMode)lua_tointeger(L,2);

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::setLODSelectionMode(osgUtil::IntersectionVisitor::LODSelectionMode). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->setLODSelectionMode(mode);

		return 0;
	}

	// osgUtil::IntersectionVisitor::LODSelectionMode osgUtil::IntersectionVisitor::getLODSelectionMode() const
	static int _bind_getLODSelectionMode(lua_State *L) {
		if (!_lg_typecheck_getLODSelectionMode(L)) {
			luaL_error(L, "luna typecheck failed in osgUtil::IntersectionVisitor::LODSelectionMode osgUtil::IntersectionVisitor::getLODSelectionMode() const function, expected prototype:\nosgUtil::IntersectionVisitor::LODSelectionMode osgUtil::IntersectionVisitor::getLODSelectionMode() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osgUtil::IntersectionVisitor::LODSelectionMode osgUtil::IntersectionVisitor::getLODSelectionMode() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osgUtil::IntersectionVisitor::LODSelectionMode lret = self->getLODSelectionMode();
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::IntersectionVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const
	static int _bind_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::IntersectionVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const function, expected prototype:\nfloat osgUtil::IntersectionVisitor::getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgUtil::IntersectionVisitor::getDistanceToEyePoint function");
		}
		const osg::Vec3f & pos=*pos_ptr;
		bool withLODScale=(bool)(lua_toboolean(L,3)==1);

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::IntersectionVisitor::getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->getDistanceToEyePoint(pos, withLODScale);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Node & node)
	static int _bind_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(node);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Geode & geode)
	static int _bind_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Billboard & geode)
	static int _bind_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Billboard & geode) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Billboard & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Billboard* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Billboard & geode=*geode_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Billboard &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(geode);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Group & group)
	static int _bind_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Group & group) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Group & group)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Group* group_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Group & group=*group_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Group &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(group);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::LOD & lod)
	static int _bind_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::LOD & lod) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::LOD & lod)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LOD* lod_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !lod_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lod in osgUtil::IntersectionVisitor::apply function");
		}
		osg::LOD & lod=*lod_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::LOD &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(lod);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::PagedLOD & lod)
	static int _bind_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::PagedLOD & lod) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::PagedLOD & lod)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PagedLOD* lod_ptr=(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,2));
		if( !lod_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lod in osgUtil::IntersectionVisitor::apply function");
		}
		osg::PagedLOD & lod=*lod_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::PagedLOD &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(lod);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Transform & transform)
	static int _bind_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Transform & transform) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Transform & transform)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Transform* transform_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Transform & transform=*transform_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Transform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(transform);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Projection & projection)
	static int _bind_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Projection & projection) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Projection & projection)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Projection* projection_ptr=(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Projection & projection=*projection_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Projection &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(projection);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::apply(osg::Camera & camera)
	static int _bind_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::apply(osg::Camera & camera) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::apply(osg::Camera & camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in osgUtil::IntersectionVisitor::apply function");
		}
		osg::Camera & camera=*camera_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::apply(osg::Camera &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->apply(camera);

		return 0;
	}

	// Overload binder for osgUtil::IntersectionVisitor::apply
	static int _bind_apply(lua_State *L) {
		if (_lg_typecheck_apply_overload_1(L)) return _bind_apply_overload_1(L);
		if (_lg_typecheck_apply_overload_2(L)) return _bind_apply_overload_2(L);
		if (_lg_typecheck_apply_overload_3(L)) return _bind_apply_overload_3(L);
		if (_lg_typecheck_apply_overload_4(L)) return _bind_apply_overload_4(L);
		if (_lg_typecheck_apply_overload_5(L)) return _bind_apply_overload_5(L);
		if (_lg_typecheck_apply_overload_6(L)) return _bind_apply_overload_6(L);
		if (_lg_typecheck_apply_overload_7(L)) return _bind_apply_overload_7(L);
		if (_lg_typecheck_apply_overload_8(L)) return _bind_apply_overload_8(L);
		if (_lg_typecheck_apply_overload_9(L)) return _bind_apply_overload_9(L);

		luaL_error(L, "error in function apply, cannot match any of the overloads for function apply:\n  apply(osg::Node &)\n  apply(osg::Geode &)\n  apply(osg::Billboard &)\n  apply(osg::Group &)\n  apply(osg::LOD &)\n  apply(osg::PagedLOD &)\n  apply(osg::Transform &)\n  apply(osg::Projection &)\n  apply(osg::Camera &)\n");
		return 0;
	}

	// void osgUtil::IntersectionVisitor::base_setThreadSafeRefUnref(bool threadSafe)
	static int _bind_base_setThreadSafeRefUnref(lua_State *L) {
		if (!_lg_typecheck_base_setThreadSafeRefUnref(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::base_setThreadSafeRefUnref(bool threadSafe) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::base_setThreadSafeRefUnref(bool threadSafe)\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}

		bool threadSafe=(bool)(lua_toboolean(L,2)==1);

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::base_setThreadSafeRefUnref(bool). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectionVisitor::setThreadSafeRefUnref(threadSafe);

		return 0;
	}

	// osg::Vec3f osgUtil::IntersectionVisitor::base_getViewPoint() const
	static int _bind_base_getViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::IntersectionVisitor::base_getViewPoint() const function, expected prototype:\nosg::Vec3f osgUtil::IntersectionVisitor::base_getViewPoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::IntersectionVisitor::base_getViewPoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->IntersectionVisitor::getViewPoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::IntersectionVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceFromEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceFromEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::IntersectionVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::IntersectionVisitor::base_getDistanceFromEyePoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::IntersectionVisitor::base_getDistanceFromEyePoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::IntersectionVisitor::base_getDistanceFromEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->IntersectionVisitor::getDistanceFromEyePoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// float osgUtil::IntersectionVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const
	static int _bind_base_getDistanceToViewPoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToViewPoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::IntersectionVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const function, expected prototype:\nfloat osgUtil::IntersectionVisitor::base_getDistanceToViewPoint(const osg::Vec3f & arg1, bool arg2) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* _arg1_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !_arg1_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg _arg1 in osgUtil::IntersectionVisitor::base_getDistanceToViewPoint function");
		}
		const osg::Vec3f & _arg1=*_arg1_ptr;
		bool _arg2=(bool)(lua_toboolean(L,3)==1);

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::IntersectionVisitor::base_getDistanceToViewPoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->IntersectionVisitor::getDistanceToViewPoint(_arg1, _arg2);
		lua_pushnumber(L,lret);

		return 1;
	}

	// const char * osgUtil::IntersectionVisitor::base_libraryName() const
	static int _bind_base_libraryName(lua_State *L) {
		if (!_lg_typecheck_base_libraryName(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::IntersectionVisitor::base_libraryName() const function, expected prototype:\nconst char * osgUtil::IntersectionVisitor::base_libraryName() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::IntersectionVisitor::base_libraryName() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->IntersectionVisitor::libraryName();
		lua_pushstring(L,lret);

		return 1;
	}

	// const char * osgUtil::IntersectionVisitor::base_className() const
	static int _bind_base_className(lua_State *L) {
		if (!_lg_typecheck_base_className(L)) {
			luaL_error(L, "luna typecheck failed in const char * osgUtil::IntersectionVisitor::base_className() const function, expected prototype:\nconst char * osgUtil::IntersectionVisitor::base_className() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call const char * osgUtil::IntersectionVisitor::base_className() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		const char * lret = self->IntersectionVisitor::className();
		lua_pushstring(L,lret);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::base_reset()
	static int _bind_base_reset(lua_State *L) {
		if (!_lg_typecheck_base_reset(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::base_reset() function, expected prototype:\nvoid osgUtil::IntersectionVisitor::base_reset()\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::base_reset(). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectionVisitor::reset();

		return 0;
	}

	// osg::Vec3f osgUtil::IntersectionVisitor::base_getEyePoint() const
	static int _bind_base_getEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in osg::Vec3f osgUtil::IntersectionVisitor::base_getEyePoint() const function, expected prototype:\nosg::Vec3f osgUtil::IntersectionVisitor::base_getEyePoint() const\nClass arguments details:\n\n%s",luna_dumpStack(L).c_str());
		}


		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call osg::Vec3f osgUtil::IntersectionVisitor::base_getEyePoint() const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		osg::Vec3f stack_lret = self->IntersectionVisitor::getEyePoint();
		osg::Vec3f* lret = new osg::Vec3f(stack_lret);
		if(!lret) return 0; // Do not write NULL pointers.

		Luna< osg::Vec3f >::push(L,lret,true);

		return 1;
	}

	// float osgUtil::IntersectionVisitor::base_getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const
	static int _bind_base_getDistanceToEyePoint(lua_State *L) {
		if (!_lg_typecheck_base_getDistanceToEyePoint(L)) {
			luaL_error(L, "luna typecheck failed in float osgUtil::IntersectionVisitor::base_getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const function, expected prototype:\nfloat osgUtil::IntersectionVisitor::base_getDistanceToEyePoint(const osg::Vec3f & pos, bool withLODScale) const\nClass arguments details:\narg 1 ID = 92303204\n\n%s",luna_dumpStack(L).c_str());
		}

		const osg::Vec3f* pos_ptr=(Luna< osg::Vec3f >::check(L,2));
		if( !pos_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg pos in osgUtil::IntersectionVisitor::base_getDistanceToEyePoint function");
		}
		const osg::Vec3f & pos=*pos_ptr;
		bool withLODScale=(bool)(lua_toboolean(L,3)==1);

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call float osgUtil::IntersectionVisitor::base_getDistanceToEyePoint(const osg::Vec3f &, bool) const. Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		float lret = self->IntersectionVisitor::getDistanceToEyePoint(pos, withLODScale);
		lua_pushnumber(L,lret);

		return 1;
	}

	// void osgUtil::IntersectionVisitor::base_apply(osg::Node & node)
	static int _bind_base_apply_overload_1(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_1(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::base_apply(osg::Node & node) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::base_apply(osg::Node & node)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Node* node_ptr=(Luna< osg::Referenced >::checkSubType< osg::Node >(L,2));
		if( !node_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg node in osgUtil::IntersectionVisitor::base_apply function");
		}
		osg::Node & node=*node_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::base_apply(osg::Node &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectionVisitor::apply(node);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::base_apply(osg::Geode & geode)
	static int _bind_base_apply_overload_2(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_2(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::base_apply(osg::Geode & geode) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::base_apply(osg::Geode & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Geode* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Geode >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::IntersectionVisitor::base_apply function");
		}
		osg::Geode & geode=*geode_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::base_apply(osg::Geode &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectionVisitor::apply(geode);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::base_apply(osg::Billboard & geode)
	static int _bind_base_apply_overload_3(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_3(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::base_apply(osg::Billboard & geode) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::base_apply(osg::Billboard & geode)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Billboard* geode_ptr=(Luna< osg::Referenced >::checkSubType< osg::Billboard >(L,2));
		if( !geode_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg geode in osgUtil::IntersectionVisitor::base_apply function");
		}
		osg::Billboard & geode=*geode_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::base_apply(osg::Billboard &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectionVisitor::apply(geode);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::base_apply(osg::Group & group)
	static int _bind_base_apply_overload_4(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_4(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::base_apply(osg::Group & group) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::base_apply(osg::Group & group)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Group* group_ptr=(Luna< osg::Referenced >::checkSubType< osg::Group >(L,2));
		if( !group_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg group in osgUtil::IntersectionVisitor::base_apply function");
		}
		osg::Group & group=*group_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::base_apply(osg::Group &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectionVisitor::apply(group);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::base_apply(osg::LOD & lod)
	static int _bind_base_apply_overload_5(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_5(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::base_apply(osg::LOD & lod) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::base_apply(osg::LOD & lod)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::LOD* lod_ptr=(Luna< osg::Referenced >::checkSubType< osg::LOD >(L,2));
		if( !lod_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lod in osgUtil::IntersectionVisitor::base_apply function");
		}
		osg::LOD & lod=*lod_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::base_apply(osg::LOD &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectionVisitor::apply(lod);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::base_apply(osg::PagedLOD & lod)
	static int _bind_base_apply_overload_6(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_6(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::base_apply(osg::PagedLOD & lod) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::base_apply(osg::PagedLOD & lod)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::PagedLOD* lod_ptr=(Luna< osg::Referenced >::checkSubType< osg::PagedLOD >(L,2));
		if( !lod_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg lod in osgUtil::IntersectionVisitor::base_apply function");
		}
		osg::PagedLOD & lod=*lod_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::base_apply(osg::PagedLOD &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectionVisitor::apply(lod);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::base_apply(osg::Transform & transform)
	static int _bind_base_apply_overload_7(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_7(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::base_apply(osg::Transform & transform) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::base_apply(osg::Transform & transform)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Transform* transform_ptr=(Luna< osg::Referenced >::checkSubType< osg::Transform >(L,2));
		if( !transform_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg transform in osgUtil::IntersectionVisitor::base_apply function");
		}
		osg::Transform & transform=*transform_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::base_apply(osg::Transform &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectionVisitor::apply(transform);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::base_apply(osg::Projection & projection)
	static int _bind_base_apply_overload_8(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_8(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::base_apply(osg::Projection & projection) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::base_apply(osg::Projection & projection)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Projection* projection_ptr=(Luna< osg::Referenced >::checkSubType< osg::Projection >(L,2));
		if( !projection_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg projection in osgUtil::IntersectionVisitor::base_apply function");
		}
		osg::Projection & projection=*projection_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::base_apply(osg::Projection &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectionVisitor::apply(projection);

		return 0;
	}

	// void osgUtil::IntersectionVisitor::base_apply(osg::Camera & camera)
	static int _bind_base_apply_overload_9(lua_State *L) {
		if (!_lg_typecheck_base_apply_overload_9(L)) {
			luaL_error(L, "luna typecheck failed in void osgUtil::IntersectionVisitor::base_apply(osg::Camera & camera) function, expected prototype:\nvoid osgUtil::IntersectionVisitor::base_apply(osg::Camera & camera)\nClass arguments details:\narg 1 ID = 50169651\n\n%s",luna_dumpStack(L).c_str());
		}

		osg::Camera* camera_ptr=(Luna< osg::Referenced >::checkSubType< osg::Camera >(L,2));
		if( !camera_ptr ) {
			luaL_error(L, "Dereferencing NULL pointer for arg camera in osgUtil::IntersectionVisitor::base_apply function");
		}
		osg::Camera & camera=*camera_ptr;

		osgUtil::IntersectionVisitor* self=Luna< osg::Referenced >::checkSubType< osgUtil::IntersectionVisitor >(L,1);
		if(!self) {
			luaL_error(L, "Invalid object in function call void osgUtil::IntersectionVisitor::base_apply(osg::Camera &). Got : '%s'\n%s",typeid(Luna< osg::Referenced >::check(L,1)).name(),luna_dumpStack(L).c_str());
		}
		self->IntersectionVisitor::apply(camera);

		return 0;
	}

	// Overload binder for osgUtil::IntersectionVisitor::base_apply
	static int _bind_base_apply(lua_State *L) {
		if (_lg_typecheck_base_apply_overload_1(L)) return _bind_base_apply_overload_1(L);
		if (_lg_typecheck_base_apply_overload_2(L)) return _bind_base_apply_overload_2(L);
		if (_lg_typecheck_base_apply_overload_3(L)) return _bind_base_apply_overload_3(L);
		if (_lg_typecheck_base_apply_overload_4(L)) return _bind_base_apply_overload_4(L);
		if (_lg_typecheck_base_apply_overload_5(L)) return _bind_base_apply_overload_5(L);
		if (_lg_typecheck_base_apply_overload_6(L)) return _bind_base_apply_overload_6(L);
		if (_lg_typecheck_base_apply_overload_7(L)) return _bind_base_apply_overload_7(L);
		if (_lg_typecheck_base_apply_overload_8(L)) return _bind_base_apply_overload_8(L);
		if (_lg_typecheck_base_apply_overload_9(L)) return _bind_base_apply_overload_9(L);

		luaL_error(L, "error in function base_apply, cannot match any of the overloads for function base_apply:\n  base_apply(osg::Node &)\n  base_apply(osg::Geode &)\n  base_apply(osg::Billboard &)\n  base_apply(osg::Group &)\n  base_apply(osg::LOD &)\n  base_apply(osg::PagedLOD &)\n  base_apply(osg::Transform &)\n  base_apply(osg::Projection &)\n  base_apply(osg::Camera &)\n");
		return 0;
	}


	// Operator binds:

};

osgUtil::IntersectionVisitor* LunaTraits< osgUtil::IntersectionVisitor >::_bind_ctor(lua_State *L) {
	return luna_wrapper_osgUtil_IntersectionVisitor::_bind_ctor(L);
}

void LunaTraits< osgUtil::IntersectionVisitor >::_bind_dtor(osgUtil::IntersectionVisitor* obj) {
	osg::ref_ptr<osg::Referenced> refptr = obj;
}

const char LunaTraits< osgUtil::IntersectionVisitor >::className[] = "IntersectionVisitor";
const char LunaTraits< osgUtil::IntersectionVisitor >::fullName[] = "osgUtil::IntersectionVisitor";
const char LunaTraits< osgUtil::IntersectionVisitor >::moduleName[] = "osgUtil";
const char* LunaTraits< osgUtil::IntersectionVisitor >::parents[] = {"osg.NodeVisitor", 0};
const int LunaTraits< osgUtil::IntersectionVisitor >::hash = 40140775;
const int LunaTraits< osgUtil::IntersectionVisitor >::uniqueIDs[] = {50169651,0};

luna_RegType LunaTraits< osgUtil::IntersectionVisitor >::methods[] = {
	{"libraryName", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_libraryName},
	{"className", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_className},
	{"reset", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_reset},
	{"setIntersector", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setIntersector},
	{"getIntersector", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getIntersector},
	{"setUseKdTreeWhenAvailable", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setUseKdTreeWhenAvailable},
	{"getUseKdTreeWhenAvailable", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getUseKdTreeWhenAvailable},
	{"setDoDummyTraversal", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setDoDummyTraversal},
	{"getDoDummyTraversal", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getDoDummyTraversal},
	{"setReadCallback", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setReadCallback},
	{"getReadCallback", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getReadCallback},
	{"pushWindowMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_pushWindowMatrix},
	{"popWindowMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_popWindowMatrix},
	{"getWindowMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getWindowMatrix},
	{"pushProjectionMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_pushProjectionMatrix},
	{"popProjectionMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_popProjectionMatrix},
	{"getProjectionMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getProjectionMatrix},
	{"pushViewMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_pushViewMatrix},
	{"popViewMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_popViewMatrix},
	{"getViewMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getViewMatrix},
	{"pushModelMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_pushModelMatrix},
	{"popModelMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_popModelMatrix},
	{"getModelMatrix", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getModelMatrix},
	{"setReferenceEyePoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setReferenceEyePoint},
	{"getReferenceEyePoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getReferenceEyePoint},
	{"setReferenceEyePointCoordinateFrame", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setReferenceEyePointCoordinateFrame},
	{"getReferenceEyePointCoordinateFrame", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getReferenceEyePointCoordinateFrame},
	{"getEyePoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getEyePoint},
	{"setLODSelectionMode", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_setLODSelectionMode},
	{"getLODSelectionMode", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getLODSelectionMode},
	{"getDistanceToEyePoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getDistanceToEyePoint},
	{"apply", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_apply},
	{"base_setThreadSafeRefUnref", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_base_setThreadSafeRefUnref},
	{"base_getViewPoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_base_getViewPoint},
	{"base_getDistanceFromEyePoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_base_getDistanceFromEyePoint},
	{"base_getDistanceToViewPoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_base_getDistanceToViewPoint},
	{"base_libraryName", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_base_libraryName},
	{"base_className", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_base_className},
	{"base_reset", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_base_reset},
	{"base_getEyePoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_base_getEyePoint},
	{"base_getDistanceToEyePoint", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_base_getDistanceToEyePoint},
	{"base_apply", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_base_apply},
	{"fromVoid", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_fromVoid},
	{"asVoid", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_asVoid},
	{"getTable", &luna_wrapper_osgUtil_IntersectionVisitor::_bind_getTable},
	{0,0}
};

luna_ConverterType LunaTraits< osgUtil::IntersectionVisitor >::converters[] = {
	{"osg::Referenced", &luna_wrapper_osgUtil_IntersectionVisitor::_cast_from_Referenced},
	{0,0}
};

luna_RegEnumType LunaTraits< osgUtil::IntersectionVisitor >::enumValues[] = {
	{"USE_HIGHEST_LEVEL_OF_DETAIL", osgUtil::IntersectionVisitor::USE_HIGHEST_LEVEL_OF_DETAIL},
	{"USE_EYE_POINT_FOR_LOD_LEVEL_SELECTION", osgUtil::IntersectionVisitor::USE_EYE_POINT_FOR_LOD_LEVEL_SELECTION},
	{0,0}
};


